#include "nemu.h"
#include "cpu/instr.h"
#include "cpu/reg.h"
#include <stdio.h>

static char logo[] = {
  0x20, 0x5f, 0x20, 0x5f, 0x5f, 0x5f, 0x5f, 0x20, 0x20, 0x20, 0x5f, 0x5f,
  0x5f, 0x20, 0x20, 0x20, 0x20, 0x5f, 0x5f, 0x20, 0x20, 0x20, 0x20, 0x5f,
  0x5f, 0x20, 0x20, 0x5f, 0x5f, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5f, 0x20, 0x0a, 0x28, 0x5f, 0x29,
  0x5f, 0x5f, 0x5f, 0x20, 0x5c, 0x20, 0x2f, 0x20, 0x5f, 0x20, 0x5c, 0x20,
  0x20, 0x2f, 0x20, 0x2f, 0x20, 0x20, 0x20, 0x7c, 0x20, 0x20, 0x5c, 0x2f,
  0x20, 0x20, 0x7c, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x7c, 0x20, 0x7c, 0x0a, 0x20, 0x5f, 0x20, 0x20, 0x5f, 0x5f,
  0x29, 0x20, 0x7c, 0x20, 0x28, 0x5f, 0x29, 0x20, 0x7c, 0x2f, 0x20, 0x2f,
  0x5f, 0x20, 0x20, 0x20, 0x7c, 0x20, 0x5c, 0x20, 0x20, 0x2f, 0x20, 0x7c,
  0x20, 0x5f, 0x5f, 0x20, 0x5f, 0x20, 0x5f, 0x20, 0x5f, 0x5f, 0x20, 0x20,
  0x5f, 0x20, 0x20, 0x20, 0x5f, 0x20, 0x20, 0x5f, 0x5f, 0x20, 0x5f, 0x7c,
  0x20, 0x7c, 0x0a, 0x7c, 0x20, 0x7c, 0x7c, 0x5f, 0x5f, 0x20, 0x3c, 0x20,
  0x3e, 0x20, 0x5f, 0x20, 0x3c, 0x7c, 0x20, 0x27, 0x5f, 0x20, 0x5c, 0x20,
  0x20, 0x7c, 0x20, 0x7c, 0x5c, 0x2f, 0x7c, 0x20, 0x7c, 0x2f, 0x20, 0x5f,
  0x60, 0x20, 0x7c, 0x20, 0x27, 0x5f, 0x20, 0x5c, 0x7c, 0x20, 0x7c, 0x20,
  0x7c, 0x20, 0x7c, 0x2f, 0x20, 0x5f, 0x60, 0x20, 0x7c, 0x20, 0x7c, 0x0a,
  0x7c, 0x20, 0x7c, 0x5f, 0x5f, 0x5f, 0x29, 0x20, 0x7c, 0x20, 0x28, 0x5f,
  0x29, 0x20, 0x7c, 0x20, 0x28, 0x5f, 0x29, 0x20, 0x7c, 0x20, 0x7c, 0x20,
  0x7c, 0x20, 0x20, 0x7c, 0x20, 0x7c, 0x20, 0x28, 0x5f, 0x7c, 0x20, 0x7c,
  0x20, 0x7c, 0x20, 0x7c, 0x20, 0x7c, 0x20, 0x7c, 0x5f, 0x7c, 0x20, 0x7c,
  0x20, 0x28, 0x5f, 0x7c, 0x20, 0x7c, 0x20, 0x7c, 0x0a, 0x7c, 0x5f, 0x7c,
  0x5f, 0x5f, 0x5f, 0x5f, 0x2f, 0x20, 0x5c, 0x5f, 0x5f, 0x5f, 0x2f, 0x20,
  0x5c, 0x5f, 0x5f, 0x5f, 0x2f, 0x20, 0x20, 0x7c, 0x5f, 0x7c, 0x20, 0x20,
  0x7c, 0x5f, 0x7c, 0x5c, 0x5f, 0x5f, 0x2c, 0x5f, 0x7c, 0x5f, 0x7c, 0x20,
  0x7c, 0x5f, 0x7c, 0x5c, 0x5f, 0x5f, 0x2c, 0x5f, 0x7c, 0x5c, 0x5f, 0x5f,
  0x2c, 0x5f, 0x7c, 0x5f, 0x7c, 0x0a, 0x00
};


// this is a dummy instruction
make_instr_func(inv) {
	uint32_t temp[8];
	temp[0] = instr_fetch(eip, 4);
	temp[1] = instr_fetch(eip + 4, 4);

	uint8_t *p = (void *)temp;
	printf("invalid opcode(eip = 0x%08x): %02x %02x %02x %02x %02x %02x %02x %02x ...\n\n", 
			eip, p[0], p[1], p[2], p[3], p[4], p[5], p[6], p[7]);

	extern char logo [];
	printf("There are two cases which will trigger this unexpected exception:\n\
1. The instruction at eip = 0x%08x is not implemented.\n\
2. Something is implemented incorrectly.\n", eip);
	printf("Find this eip value(0x%08x) in the disassembling result to distinguish which case it is.\n\n", eip);
	printf("\33[1;31mIf it is the first case, see\n%s\nfor more details.\n\nIf it is the second case, remember:\n\
* The machine is always right!\n\
* Every line of untested code is always wrong!\33[0m\n\n", logo);

	assert(0);
	return 1;
}
