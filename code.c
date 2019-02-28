
kernel/kernel:     file format elf32-i386


Disassembly of section .text:

00030000 <start>:
   30000:	e9 36 02 00 00       	jmp    3023b <init>

00030005 <vec0>:
   30005:	6a 00                	push   $0x0
   30007:	6a 00                	push   $0x0
   30009:	eb 7b                	jmp    30086 <asm_do_irq>

0003000b <vec1>:
   3000b:	6a 00                	push   $0x0
   3000d:	6a 01                	push   $0x1
   3000f:	eb 75                	jmp    30086 <asm_do_irq>

00030011 <vec2>:
   30011:	6a 00                	push   $0x0
   30013:	6a 02                	push   $0x2
   30015:	eb 6f                	jmp    30086 <asm_do_irq>

00030017 <vec3>:
   30017:	6a 00                	push   $0x0
   30019:	6a 03                	push   $0x3
   3001b:	eb 69                	jmp    30086 <asm_do_irq>

0003001d <vec4>:
   3001d:	6a 00                	push   $0x0
   3001f:	6a 04                	push   $0x4
   30021:	eb 63                	jmp    30086 <asm_do_irq>

00030023 <vec5>:
   30023:	6a 00                	push   $0x0
   30025:	6a 05                	push   $0x5
   30027:	eb 5d                	jmp    30086 <asm_do_irq>

00030029 <vec6>:
   30029:	6a 00                	push   $0x0
   3002b:	6a 06                	push   $0x6
   3002d:	eb 57                	jmp    30086 <asm_do_irq>

0003002f <vec7>:
   3002f:	6a 00                	push   $0x0
   30031:	6a 07                	push   $0x7
   30033:	eb 51                	jmp    30086 <asm_do_irq>

00030035 <vec8>:
   30035:	6a 08                	push   $0x8
   30037:	eb 4d                	jmp    30086 <asm_do_irq>

00030039 <vec9>:
   30039:	6a 00                	push   $0x0
   3003b:	6a 09                	push   $0x9
   3003d:	eb 47                	jmp    30086 <asm_do_irq>

0003003f <vec10>:
   3003f:	6a 0a                	push   $0xa
   30041:	eb 43                	jmp    30086 <asm_do_irq>

00030043 <vec11>:
   30043:	6a 0b                	push   $0xb
   30045:	eb 3f                	jmp    30086 <asm_do_irq>

00030047 <vec12>:
   30047:	6a 0c                	push   $0xc
   30049:	eb 3b                	jmp    30086 <asm_do_irq>

0003004b <vec13>:
   3004b:	6a 0d                	push   $0xd
   3004d:	eb 37                	jmp    30086 <asm_do_irq>

0003004f <vec14>:
   3004f:	6a 0e                	push   $0xe
   30051:	eb 33                	jmp    30086 <asm_do_irq>

00030053 <vecsys>:
   30053:	6a 00                	push   $0x0
   30055:	68 80 00 00 00       	push   $0x80
   3005a:	eb 2a                	jmp    30086 <asm_do_irq>

0003005c <irq0>:
   3005c:	6a 00                	push   $0x0
   3005e:	68 e8 03 00 00       	push   $0x3e8
   30063:	eb 21                	jmp    30086 <asm_do_irq>

00030065 <irq1>:
   30065:	6a 00                	push   $0x0
   30067:	68 e9 03 00 00       	push   $0x3e9
   3006c:	eb 18                	jmp    30086 <asm_do_irq>

0003006e <irq2>:
   3006e:	6a 00                	push   $0x0
   30070:	68 ea 03 00 00       	push   $0x3ea
   30075:	eb 0f                	jmp    30086 <asm_do_irq>

00030077 <irq14>:
   30077:	6a 00                	push   $0x0
   30079:	68 f6 03 00 00       	push   $0x3f6
   3007e:	eb 06                	jmp    30086 <asm_do_irq>

00030080 <irq_empty>:
   30080:	6a 00                	push   $0x0
   30082:	6a ff                	push   $0xffffffff
   30084:	eb 00                	jmp    30086 <asm_do_irq>

00030086 <asm_do_irq>:
   30086:	60                   	pusha  
   30087:	54                   	push   %esp
   30088:	e8 74 10 00 00       	call   31101 <irq_handle>
   3008d:	83 c4 04             	add    $0x4,%esp
   30090:	61                   	popa   
   30091:	83 c4 08             	add    $0x8,%esp
   30094:	cf                   	iret   

00030095 <fs_open>:
   30095:	55                   	push   %ebp
   30096:	89 e5                	mov    %esp,%ebp
   30098:	53                   	push   %ebx
   30099:	83 ec 04             	sub    $0x4,%esp
   3009c:	e8 92 01 00 00       	call   30233 <__x86.get_pc_thunk.ax>
   300a1:	05 5f bf 00 00       	add    $0xbf5f,%eax
   300a6:	8d 90 bc c7 ff ff    	lea    -0x3844(%eax),%edx
   300ac:	52                   	push   %edx
   300ad:	6a 2c                	push   $0x2c
   300af:	8d 90 f3 c5 ff ff    	lea    -0x3a0d(%eax),%edx
   300b5:	52                   	push   %edx
   300b6:	8d 90 00 c6 ff ff    	lea    -0x3a00(%eax),%edx
   300bc:	52                   	push   %edx
   300bd:	89 c3                	mov    %eax,%ebx
   300bf:	e8 9c 18 00 00       	call   31960 <printk>
   300c4:	83 c4 10             	add    $0x10,%esp
   300c7:	b8 01 00 00 00       	mov    $0x1,%eax
   300cc:	82 b8 ff ff ff ff 8b 	cmpb   $0x8b,-0x1(%eax)
   300d3:	5d                   	pop    %ebp
   300d4:	fc                   	cld    
   300d5:	c9                   	leave  
   300d6:	c3                   	ret    

000300d7 <fs_read>:
   300d7:	55                   	push   %ebp
   300d8:	89 e5                	mov    %esp,%ebp
   300da:	53                   	push   %ebx
   300db:	83 ec 04             	sub    $0x4,%esp
   300de:	e8 54 01 00 00       	call   30237 <__x86.get_pc_thunk.bx>
   300e3:	81 c3 1d bf 00 00    	add    $0xbf1d,%ebx
   300e9:	83 7d 08 02          	cmpl   $0x2,0x8(%ebp)
   300ed:	7f 2f                	jg     3011e <fs_read+0x47>
   300ef:	83 ec 0c             	sub    $0xc,%esp
   300f2:	8d 83 56 c6 ff ff    	lea    -0x39aa(%ebx),%eax
   300f8:	50                   	push   %eax
   300f9:	8d 83 c4 c7 ff ff    	lea    -0x383c(%ebx),%eax
   300ff:	50                   	push   %eax
   30100:	6a 31                	push   $0x31
   30102:	8d 83 f3 c5 ff ff    	lea    -0x3a0d(%ebx),%eax
   30108:	50                   	push   %eax
   30109:	8d 83 60 c6 ff ff    	lea    -0x39a0(%ebx),%eax
   3010f:	50                   	push   %eax
   30110:	e8 4b 18 00 00       	call   31960 <printk>
   30115:	83 c4 20             	add    $0x20,%esp
   30118:	b8 01 00 00 00       	mov    $0x1,%eax
   3011d:	82 8d 83 c4 c7 ff ff 	orb    $0xff,-0x383b7d(%ebp)
   30124:	50                   	push   %eax
   30125:	6a 32                	push   $0x32
   30127:	8d 83 f3 c5 ff ff    	lea    -0x3a0d(%ebx),%eax
   3012d:	50                   	push   %eax
   3012e:	8d 83 ac c6 ff ff    	lea    -0x3954(%ebx),%eax
   30134:	50                   	push   %eax
   30135:	e8 26 18 00 00       	call   31960 <printk>
   3013a:	83 c4 10             	add    $0x10,%esp
   3013d:	b8 01 00 00 00       	mov    $0x1,%eax
   30142:	82 b8 ff ff ff ff 8b 	cmpb   $0x8b,-0x1(%eax)
   30149:	5d                   	pop    %ebp
   3014a:	fc                   	cld    
   3014b:	c9                   	leave  
   3014c:	c3                   	ret    

0003014d <fs_write>:
   3014d:	55                   	push   %ebp
   3014e:	89 e5                	mov    %esp,%ebp
   30150:	53                   	push   %ebx
   30151:	83 ec 04             	sub    $0x4,%esp
   30154:	e8 da 00 00 00       	call   30233 <__x86.get_pc_thunk.ax>
   30159:	05 a7 be 00 00       	add    $0xbea7,%eax
   3015e:	83 7d 08 02          	cmpl   $0x2,0x8(%ebp)
   30162:	7e 31                	jle    30195 <fs_write+0x48>
   30164:	83 ec 0c             	sub    $0xc,%esp
   30167:	8d 90 02 c7 ff ff    	lea    -0x38fe(%eax),%edx
   3016d:	52                   	push   %edx
   3016e:	8d 90 cc c7 ff ff    	lea    -0x3834(%eax),%edx
   30174:	52                   	push   %edx
   30175:	6a 37                	push   $0x37
   30177:	8d 90 f3 c5 ff ff    	lea    -0x3a0d(%eax),%edx
   3017d:	52                   	push   %edx
   3017e:	8d 90 60 c6 ff ff    	lea    -0x39a0(%eax),%edx
   30184:	52                   	push   %edx
   30185:	89 c3                	mov    %eax,%ebx
   30187:	e8 d4 17 00 00       	call   31960 <printk>
   3018c:	83 c4 20             	add    $0x20,%esp
   3018f:	b8 01 00 00 00       	mov    $0x1,%eax
   30194:	82 b8 04 00 00 00 8b 	cmpb   $0x8b,0x4(%eax)
   3019b:	5d                   	pop    %ebp
   3019c:	08 8b 4d 0c 8b 55    	or     %cl,0x558b0c4d(%ebx)
   301a2:	10 82 89 45 10 8b    	adc    %al,-0x74efba77(%edx)
   301a8:	45                   	inc    %ebp
   301a9:	10 8b 5d fc c9 c3    	adc    %cl,-0x3c3603a3(%ebx)

000301af <fs_lseek>:
   301af:	55                   	push   %ebp
   301b0:	89 e5                	mov    %esp,%ebp
   301b2:	53                   	push   %ebx
   301b3:	83 ec 04             	sub    $0x4,%esp
   301b6:	e8 78 00 00 00       	call   30233 <__x86.get_pc_thunk.ax>
   301bb:	05 45 be 00 00       	add    $0xbe45,%eax
   301c0:	8d 90 d8 c7 ff ff    	lea    -0x3828(%eax),%edx
   301c6:	52                   	push   %edx
   301c7:	6a 46                	push   $0x46
   301c9:	8d 90 f3 c5 ff ff    	lea    -0x3a0d(%eax),%edx
   301cf:	52                   	push   %edx
   301d0:	8d 90 0c c7 ff ff    	lea    -0x38f4(%eax),%edx
   301d6:	52                   	push   %edx
   301d7:	89 c3                	mov    %eax,%ebx
   301d9:	e8 82 17 00 00       	call   31960 <printk>
   301de:	83 c4 10             	add    $0x10,%esp
   301e1:	b8 01 00 00 00       	mov    $0x1,%eax
   301e6:	82 b8 ff ff ff ff 8b 	cmpb   $0x8b,-0x1(%eax)
   301ed:	5d                   	pop    %ebp
   301ee:	fc                   	cld    
   301ef:	c9                   	leave  
   301f0:	c3                   	ret    

000301f1 <fs_close>:
   301f1:	55                   	push   %ebp
   301f2:	89 e5                	mov    %esp,%ebp
   301f4:	53                   	push   %ebx
   301f5:	83 ec 04             	sub    $0x4,%esp
   301f8:	e8 36 00 00 00       	call   30233 <__x86.get_pc_thunk.ax>
   301fd:	05 03 be 00 00       	add    $0xbe03,%eax
   30202:	8d 90 e4 c7 ff ff    	lea    -0x381c(%eax),%edx
   30208:	52                   	push   %edx
   30209:	6a 4b                	push   $0x4b
   3020b:	8d 90 f3 c5 ff ff    	lea    -0x3a0d(%eax),%edx
   30211:	52                   	push   %edx
   30212:	8d 90 64 c7 ff ff    	lea    -0x389c(%eax),%edx
   30218:	52                   	push   %edx
   30219:	89 c3                	mov    %eax,%ebx
   3021b:	e8 40 17 00 00       	call   31960 <printk>
   30220:	83 c4 10             	add    $0x10,%esp
   30223:	b8 01 00 00 00       	mov    $0x1,%eax
   30228:	82 b8 ff ff ff ff 8b 	cmpb   $0x8b,-0x1(%eax)
   3022f:	5d                   	pop    %ebp
   30230:	fc                   	cld    
   30231:	c9                   	leave  
   30232:	c3                   	ret    

00030233 <__x86.get_pc_thunk.ax>:
   30233:	8b 04 24             	mov    (%esp),%eax
   30236:	c3                   	ret    

00030237 <__x86.get_pc_thunk.bx>:
   30237:	8b 1c 24             	mov    (%esp),%ebx
   3023a:	c3                   	ret    

0003023b <init>:
   3023b:	55                   	push   %ebp
   3023c:	89 e5                	mov    %esp,%ebp
   3023e:	e8 f0 ff ff ff       	call   30233 <__x86.get_pc_thunk.ax>
   30243:	05 bd bd 00 00       	add    $0xbdbd,%eax
   30248:	8d 80 59 42 ff ff    	lea    -0xbda7(%eax),%eax
   3024e:	ff e0                	jmp    *%eax
   30250:	b8 01 00 00 00       	mov    $0x1,%eax
   30255:	82                   	.byte 0x82
   30256:	90                   	nop
   30257:	5d                   	pop    %ebp
   30258:	c3                   	ret    

00030259 <init_cond>:
   30259:	55                   	push   %ebp
   3025a:	89 e5                	mov    %esp,%ebp
   3025c:	53                   	push   %ebx
   3025d:	83 ec 14             	sub    $0x14,%esp
   30260:	e8 d2 ff ff ff       	call   30237 <__x86.get_pc_thunk.bx>
   30265:	81 c3 9b bd 00 00    	add    $0xbd9b,%ebx
   3026b:	8d 83 30 c8 ff ff    	lea    -0x37d0(%ebx),%eax
   30271:	50                   	push   %eax
   30272:	6a 4b                	push   $0x4b
   30274:	8d 83 f0 c7 ff ff    	lea    -0x3810(%ebx),%eax
   3027a:	50                   	push   %eax
   3027b:	8d 83 fc c7 ff ff    	lea    -0x3804(%ebx),%eax
   30281:	50                   	push   %eax
   30282:	e8 d9 16 00 00       	call   31960 <printk>
   30287:	83 c4 10             	add    $0x10,%esp
   3028a:	e8 f5 04 00 00       	call   30784 <loader>
   3028f:	89 45 f4             	mov    %eax,-0xc(%ebp)
   30292:	8b 45 f4             	mov    -0xc(%ebp),%eax
   30295:	ff d0                	call   *%eax
   30297:	90                   	nop
   30298:	8b 5d fc             	mov    -0x4(%ebp),%ebx
   3029b:	c9                   	leave  
   3029c:	c3                   	ret    

0003029d <read_cr0>:
   3029d:	55                   	push   %ebp
   3029e:	89 e5                	mov    %esp,%ebp
   302a0:	83 ec 10             	sub    $0x10,%esp
   302a3:	e8 8b ff ff ff       	call   30233 <__x86.get_pc_thunk.ax>
   302a8:	05 58 bd 00 00       	add    $0xbd58,%eax
   302ad:	0f 20 c0             	mov    %cr0,%eax
   302b0:	89 45 fc             	mov    %eax,-0x4(%ebp)
   302b3:	8b 45 fc             	mov    -0x4(%ebp),%eax
   302b6:	c9                   	leave  
   302b7:	c3                   	ret    

000302b8 <write_cr0>:
   302b8:	55                   	push   %ebp
   302b9:	89 e5                	mov    %esp,%ebp
   302bb:	e8 73 ff ff ff       	call   30233 <__x86.get_pc_thunk.ax>
   302c0:	05 40 bd 00 00       	add    $0xbd40,%eax
   302c5:	8b 45 08             	mov    0x8(%ebp),%eax
   302c8:	0f 22 c0             	mov    %eax,%cr0
   302cb:	90                   	nop
   302cc:	5d                   	pop    %ebp
   302cd:	c3                   	ret    

000302ce <write_cr3>:
   302ce:	55                   	push   %ebp
   302cf:	89 e5                	mov    %esp,%ebp
   302d1:	e8 5d ff ff ff       	call   30233 <__x86.get_pc_thunk.ax>
   302d6:	05 2a bd 00 00       	add    $0xbd2a,%eax
   302db:	8b 45 08             	mov    0x8(%ebp),%eax
   302de:	0f 22 d8             	mov    %eax,%cr3
   302e1:	90                   	nop
   302e2:	5d                   	pop    %ebp
   302e3:	c3                   	ret    

000302e4 <write_gdtr>:
   302e4:	55                   	push   %ebp
   302e5:	89 e5                	mov    %esp,%ebp
   302e7:	e8 47 ff ff ff       	call   30233 <__x86.get_pc_thunk.ax>
   302ec:	05 14 bd 00 00       	add    $0xbd14,%eax
   302f1:	8b 55 0c             	mov    0xc(%ebp),%edx
   302f4:	4a                   	dec    %edx
   302f5:	66 89 90 00 10 00 00 	mov    %dx,0x1000(%eax)
   302fc:	8b 55 08             	mov    0x8(%ebp),%edx
   302ff:	66 89 90 02 10 00 00 	mov    %dx,0x1002(%eax)
   30306:	8b 55 08             	mov    0x8(%ebp),%edx
   30309:	c1 ea 10             	shr    $0x10,%edx
   3030c:	66 89 90 04 10 00 00 	mov    %dx,0x1004(%eax)
   30313:	8d 80 00 10 00 00    	lea    0x1000(%eax),%eax
   30319:	0f 01 10             	lgdtl  (%eax)
   3031c:	90                   	nop
   3031d:	5d                   	pop    %ebp
   3031e:	c3                   	ret    

0003031f <get_kpdir>:
   3031f:	55                   	push   %ebp
   30320:	89 e5                	mov    %esp,%ebp
   30322:	e8 0c ff ff ff       	call   30233 <__x86.get_pc_thunk.ax>
   30327:	05 d9 bc 00 00       	add    $0xbcd9,%eax
   3032c:	c7 c0 00 10 07 00    	mov    $0x71000,%eax
   30332:	5d                   	pop    %ebp
   30333:	c3                   	ret    

00030334 <init_page>:
   30334:	55                   	push   %ebp
   30335:	89 e5                	mov    %esp,%ebp
   30337:	53                   	push   %ebx
   30338:	83 ec 24             	sub    $0x24,%esp
   3033b:	e8 f3 fe ff ff       	call   30233 <__x86.get_pc_thunk.ax>
   30340:	05 c0 bc 00 00       	add    $0xbcc0,%eax
   30345:	c7 c2 00 10 07 00    	mov    $0x71000,%edx
   3034b:	89 55 e4             	mov    %edx,-0x1c(%ebp)
   3034e:	c7 c2 00 20 07 00    	mov    $0x72000,%edx
   30354:	89 55 f4             	mov    %edx,-0xc(%ebp)
   30357:	83 ec 04             	sub    $0x4,%esp
   3035a:	68 00 10 00 00       	push   $0x1000
   3035f:	6a 00                	push   $0x0
   30361:	ff 75 e4             	pushl  -0x1c(%ebp)
   30364:	89 c3                	mov    %eax,%ebx
   30366:	e8 31 19 00 00       	call   31c9c <memset>
   3036b:	83 c4 10             	add    $0x10,%esp
   3036e:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
   30375:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
   3037c:	eb 69                	jmp    303e7 <init_page+0xb3>
   3037e:	8b 45 f0             	mov    -0x10(%ebp),%eax
   30381:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
   30388:	8b 45 e4             	mov    -0x1c(%ebp),%eax
   3038b:	01 d0                	add    %edx,%eax
   3038d:	8b 55 f4             	mov    -0xc(%ebp),%edx
   30390:	81 e2 00 f0 ff ff    	and    $0xfffff000,%edx
   30396:	83 ca 07             	or     $0x7,%edx
   30399:	89 10                	mov    %edx,(%eax)
   3039b:	8b 45 f0             	mov    -0x10(%ebp),%eax
   3039e:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
   303a5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
   303a8:	01 d0                	add    %edx,%eax
   303aa:	8b 55 f4             	mov    -0xc(%ebp),%edx
   303ad:	81 e2 00 f0 ff ff    	and    $0xfffff000,%edx
   303b3:	83 ca 07             	or     $0x7,%edx
   303b6:	89 10                	mov    %edx,(%eax)
   303b8:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
   303bf:	eb 1a                	jmp    303db <init_page+0xa7>
   303c1:	8b 45 e8             	mov    -0x18(%ebp),%eax
   303c4:	c1 e0 0c             	shl    $0xc,%eax
   303c7:	83 c8 07             	or     $0x7,%eax
   303ca:	89 c2                	mov    %eax,%edx
   303cc:	8b 45 f4             	mov    -0xc(%ebp),%eax
   303cf:	89 10                	mov    %edx,(%eax)
   303d1:	ff 45 e8             	incl   -0x18(%ebp)
   303d4:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
   303d8:	ff 45 ec             	incl   -0x14(%ebp)
   303db:	81 7d ec ff 03 00 00 	cmpl   $0x3ff,-0x14(%ebp)
   303e2:	76 dd                	jbe    303c1 <init_page+0x8d>
   303e4:	ff 45 f0             	incl   -0x10(%ebp)
   303e7:	83 7d f0 1f          	cmpl   $0x1f,-0x10(%ebp)
   303eb:	76 91                	jbe    3037e <init_page+0x4a>
   303ed:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
   303f4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
   303f7:	c1 e8 0c             	shr    $0xc,%eax
   303fa:	25 ff ff 0f 00       	and    $0xfffff,%eax
   303ff:	c1 e0 0c             	shl    $0xc,%eax
   30402:	89 c2                	mov    %eax,%edx
   30404:	8b 45 dc             	mov    -0x24(%ebp),%eax
   30407:	25 ff 0f 00 00       	and    $0xfff,%eax
   3040c:	09 d0                	or     %edx,%eax
   3040e:	89 45 dc             	mov    %eax,-0x24(%ebp)
   30411:	8b 45 dc             	mov    -0x24(%ebp),%eax
   30414:	83 ec 0c             	sub    $0xc,%esp
   30417:	50                   	push   %eax
   30418:	e8 b1 fe ff ff       	call   302ce <write_cr3>
   3041d:	83 c4 10             	add    $0x10,%esp
   30420:	e8 78 fe ff ff       	call   3029d <read_cr0>
   30425:	89 45 e0             	mov    %eax,-0x20(%ebp)
   30428:	8a 45 e3             	mov    -0x1d(%ebp),%al
   3042b:	83 c8 80             	or     $0xffffff80,%eax
   3042e:	88 45 e3             	mov    %al,-0x1d(%ebp)
   30431:	8b 45 e0             	mov    -0x20(%ebp),%eax
   30434:	83 ec 0c             	sub    $0xc,%esp
   30437:	50                   	push   %eax
   30438:	e8 7b fe ff ff       	call   302b8 <write_cr0>
   3043d:	83 c4 10             	add    $0x10,%esp
   30440:	90                   	nop
   30441:	8b 5d fc             	mov    -0x4(%ebp),%ebx
   30444:	c9                   	leave  
   30445:	c3                   	ret    

00030446 <set_segment>:
   30446:	55                   	push   %ebp
   30447:	89 e5                	mov    %esp,%ebp
   30449:	e8 e5 fd ff ff       	call   30233 <__x86.get_pc_thunk.ax>
   3044e:	05 b2 bb 00 00       	add    $0xbbb2,%eax
   30453:	8b 45 08             	mov    0x8(%ebp),%eax
   30456:	66 c7 00 ff ff       	movw   $0xffff,(%eax)
   3045b:	8b 45 08             	mov    0x8(%ebp),%eax
   3045e:	66 c7 40 02 00 00    	movw   $0x0,0x2(%eax)
   30464:	8b 45 08             	mov    0x8(%ebp),%eax
   30467:	c6 40 04 00          	movb   $0x0,0x4(%eax)
   3046b:	8b 45 10             	mov    0x10(%ebp),%eax
   3046e:	83 e0 0f             	and    $0xf,%eax
   30471:	88 c2                	mov    %al,%dl
   30473:	8b 45 08             	mov    0x8(%ebp),%eax
   30476:	88 d1                	mov    %dl,%cl
   30478:	83 e1 0f             	and    $0xf,%ecx
   3047b:	8a 50 05             	mov    0x5(%eax),%dl
   3047e:	83 e2 f0             	and    $0xfffffff0,%edx
   30481:	09 ca                	or     %ecx,%edx
   30483:	88 50 05             	mov    %dl,0x5(%eax)
   30486:	8b 45 08             	mov    0x8(%ebp),%eax
   30489:	8a 50 05             	mov    0x5(%eax),%dl
   3048c:	83 ca 10             	or     $0x10,%edx
   3048f:	88 50 05             	mov    %dl,0x5(%eax)
   30492:	8b 45 0c             	mov    0xc(%ebp),%eax
   30495:	83 e0 03             	and    $0x3,%eax
   30498:	88 c2                	mov    %al,%dl
   3049a:	8b 45 08             	mov    0x8(%ebp),%eax
   3049d:	83 e2 03             	and    $0x3,%edx
   304a0:	88 d1                	mov    %dl,%cl
   304a2:	c1 e1 05             	shl    $0x5,%ecx
   304a5:	8a 50 05             	mov    0x5(%eax),%dl
   304a8:	83 e2 9f             	and    $0xffffff9f,%edx
   304ab:	09 ca                	or     %ecx,%edx
   304ad:	88 50 05             	mov    %dl,0x5(%eax)
   304b0:	8b 45 08             	mov    0x8(%ebp),%eax
   304b3:	8a 50 05             	mov    0x5(%eax),%dl
   304b6:	83 ca 80             	or     $0xffffff80,%edx
   304b9:	88 50 05             	mov    %dl,0x5(%eax)
   304bc:	8b 45 08             	mov    0x8(%ebp),%eax
   304bf:	8a 50 06             	mov    0x6(%eax),%dl
   304c2:	83 ca 0f             	or     $0xf,%edx
   304c5:	88 50 06             	mov    %dl,0x6(%eax)
   304c8:	8b 45 08             	mov    0x8(%ebp),%eax
   304cb:	8a 50 06             	mov    0x6(%eax),%dl
   304ce:	83 e2 ef             	and    $0xffffffef,%edx
   304d1:	88 50 06             	mov    %dl,0x6(%eax)
   304d4:	8b 45 08             	mov    0x8(%ebp),%eax
   304d7:	8a 50 06             	mov    0x6(%eax),%dl
   304da:	83 e2 df             	and    $0xffffffdf,%edx
   304dd:	88 50 06             	mov    %dl,0x6(%eax)
   304e0:	8b 45 08             	mov    0x8(%ebp),%eax
   304e3:	8a 50 06             	mov    0x6(%eax),%dl
   304e6:	83 ca 40             	or     $0x40,%edx
   304e9:	88 50 06             	mov    %dl,0x6(%eax)
   304ec:	8b 45 08             	mov    0x8(%ebp),%eax
   304ef:	8a 50 06             	mov    0x6(%eax),%dl
   304f2:	83 ca 80             	or     $0xffffff80,%edx
   304f5:	88 50 06             	mov    %dl,0x6(%eax)
   304f8:	8b 45 08             	mov    0x8(%ebp),%eax
   304fb:	c6 40 07 00          	movb   $0x0,0x7(%eax)
   304ff:	90                   	nop
   30500:	5d                   	pop    %ebp
   30501:	c3                   	ret    

00030502 <init_segment>:
   30502:	55                   	push   %ebp
   30503:	89 e5                	mov    %esp,%ebp
   30505:	53                   	push   %ebx
   30506:	83 ec 04             	sub    $0x4,%esp
   30509:	e8 29 fd ff ff       	call   30237 <__x86.get_pc_thunk.bx>
   3050e:	81 c3 f2 ba 00 00    	add    $0xbaf2,%ebx
   30514:	83 ec 04             	sub    $0x4,%esp
   30517:	6a 18                	push   $0x18
   30519:	6a 00                	push   $0x0
   3051b:	c7 c0 00 00 07 00    	mov    $0x70000,%eax
   30521:	50                   	push   %eax
   30522:	e8 75 17 00 00       	call   31c9c <memset>
   30527:	83 c4 10             	add    $0x10,%esp
   3052a:	83 ec 04             	sub    $0x4,%esp
   3052d:	6a 0a                	push   $0xa
   3052f:	6a 00                	push   $0x0
   30531:	c7 c0 00 00 07 00    	mov    $0x70000,%eax
   30537:	8d 40 08             	lea    0x8(%eax),%eax
   3053a:	50                   	push   %eax
   3053b:	e8 06 ff ff ff       	call   30446 <set_segment>
   30540:	83 c4 10             	add    $0x10,%esp
   30543:	83 ec 04             	sub    $0x4,%esp
   30546:	6a 02                	push   $0x2
   30548:	6a 00                	push   $0x0
   3054a:	c7 c0 00 00 07 00    	mov    $0x70000,%eax
   30550:	8d 40 10             	lea    0x10(%eax),%eax
   30553:	50                   	push   %eax
   30554:	e8 ed fe ff ff       	call   30446 <set_segment>
   30559:	83 c4 10             	add    $0x10,%esp
   3055c:	83 ec 08             	sub    $0x8,%esp
   3055f:	6a 18                	push   $0x18
   30561:	c7 c0 00 00 07 00    	mov    $0x70000,%eax
   30567:	50                   	push   %eax
   30568:	e8 77 fd ff ff       	call   302e4 <write_gdtr>
   3056d:	83 c4 10             	add    $0x10,%esp
   30570:	90                   	nop
   30571:	8b 5d fc             	mov    -0x4(%ebp),%ebx
   30574:	c9                   	leave  
   30575:	c3                   	ret    

00030576 <create_video_mapping>:
   30576:	55                   	push   %ebp
   30577:	89 e5                	mov    %esp,%ebp
   30579:	53                   	push   %ebx
   3057a:	83 ec 04             	sub    $0x4,%esp
   3057d:	e8 b1 fc ff ff       	call   30233 <__x86.get_pc_thunk.ax>
   30582:	05 7e ba 00 00       	add    $0xba7e,%eax
   30587:	8d 90 f4 c8 ff ff    	lea    -0x370c(%eax),%edx
   3058d:	52                   	push   %edx
   3058e:	6a 13                	push   $0x13
   30590:	8d 90 3c c8 ff ff    	lea    -0x37c4(%eax),%edx
   30596:	52                   	push   %edx
   30597:	8d 90 50 c8 ff ff    	lea    -0x37b0(%eax),%edx
   3059d:	52                   	push   %edx
   3059e:	89 c3                	mov    %eax,%ebx
   305a0:	e8 bb 13 00 00       	call   31960 <printk>
   305a5:	83 c4 10             	add    $0x10,%esp
   305a8:	b8 01 00 00 00       	mov    $0x1,%eax
   305ad:	82 90 8b 5d fc c9 c3 	adcb   $0xc3,-0x3603a275(%eax)

000305b4 <video_mapping_write_test>:
   305b4:	55                   	push   %ebp
   305b5:	89 e5                	mov    %esp,%ebp
   305b7:	83 ec 10             	sub    $0x10,%esp
   305ba:	e8 74 fc ff ff       	call   30233 <__x86.get_pc_thunk.ax>
   305bf:	05 41 ba 00 00       	add    $0xba41,%eax
   305c4:	c7 45 f8 00 00 0a 00 	movl   $0xa0000,-0x8(%ebp)
   305cb:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
   305d2:	eb 17                	jmp    305eb <video_mapping_write_test+0x37>
   305d4:	8b 45 fc             	mov    -0x4(%ebp),%eax
   305d7:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
   305de:	8b 45 f8             	mov    -0x8(%ebp),%eax
   305e1:	01 c2                	add    %eax,%edx
   305e3:	8b 45 fc             	mov    -0x4(%ebp),%eax
   305e6:	89 02                	mov    %eax,(%edx)
   305e8:	ff 45 fc             	incl   -0x4(%ebp)
   305eb:	81 7d fc 7f 3e 00 00 	cmpl   $0x3e7f,-0x4(%ebp)
   305f2:	7e e0                	jle    305d4 <video_mapping_write_test+0x20>
   305f4:	90                   	nop
   305f5:	c9                   	leave  
   305f6:	c3                   	ret    

000305f7 <video_mapping_read_test>:
   305f7:	55                   	push   %ebp
   305f8:	89 e5                	mov    %esp,%ebp
   305fa:	53                   	push   %ebx
   305fb:	83 ec 14             	sub    $0x14,%esp
   305fe:	e8 34 fc ff ff       	call   30237 <__x86.get_pc_thunk.bx>
   30603:	81 c3 fd b9 00 00    	add    $0xb9fd,%ebx
   30609:	c7 45 f0 00 00 0a 00 	movl   $0xa0000,-0x10(%ebp)
   30610:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
   30617:	eb 4a                	jmp    30663 <video_mapping_read_test+0x6c>
   30619:	8b 45 f4             	mov    -0xc(%ebp),%eax
   3061c:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
   30623:	8b 45 f0             	mov    -0x10(%ebp),%eax
   30626:	01 d0                	add    %edx,%eax
   30628:	8b 10                	mov    (%eax),%edx
   3062a:	8b 45 f4             	mov    -0xc(%ebp),%eax
   3062d:	39 c2                	cmp    %eax,%edx
   3062f:	74 2f                	je     30660 <video_mapping_read_test+0x69>
   30631:	83 ec 0c             	sub    $0xc,%esp
   30634:	8d 83 99 c8 ff ff    	lea    -0x3767(%ebx),%eax
   3063a:	50                   	push   %eax
   3063b:	8d 83 0c c9 ff ff    	lea    -0x36f4(%ebx),%eax
   30641:	50                   	push   %eax
   30642:	6a 22                	push   $0x22
   30644:	8d 83 3c c8 ff ff    	lea    -0x37c4(%ebx),%eax
   3064a:	50                   	push   %eax
   3064b:	8d 83 a8 c8 ff ff    	lea    -0x3758(%ebx),%eax
   30651:	50                   	push   %eax
   30652:	e8 09 13 00 00       	call   31960 <printk>
   30657:	83 c4 20             	add    $0x20,%esp
   3065a:	b8 01 00 00 00       	mov    $0x1,%eax
   3065f:	82 ff 45             	cmp    $0x45,%bh
   30662:	f4                   	hlt    
   30663:	81 7d f4 7f 3e 00 00 	cmpl   $0x3e7f,-0xc(%ebp)
   3066a:	7e ad                	jle    30619 <video_mapping_read_test+0x22>
   3066c:	90                   	nop
   3066d:	8b 5d fc             	mov    -0x4(%ebp),%ebx
   30670:	c9                   	leave  
   30671:	c3                   	ret    

00030672 <video_mapping_clear>:
   30672:	55                   	push   %ebp
   30673:	89 e5                	mov    %esp,%ebp
   30675:	53                   	push   %ebx
   30676:	83 ec 04             	sub    $0x4,%esp
   30679:	e8 b5 fb ff ff       	call   30233 <__x86.get_pc_thunk.ax>
   3067e:	05 82 b9 00 00       	add    $0xb982,%eax
   30683:	83 ec 04             	sub    $0x4,%esp
   30686:	68 00 fa 00 00       	push   $0xfa00
   3068b:	6a 00                	push   $0x0
   3068d:	68 00 00 0a 00       	push   $0xa0000
   30692:	89 c3                	mov    %eax,%ebx
   30694:	e8 03 16 00 00       	call   31c9c <memset>
   30699:	83 c4 10             	add    $0x10,%esp
   3069c:	90                   	nop
   3069d:	8b 5d fc             	mov    -0x4(%ebp),%ebx
   306a0:	c9                   	leave  
   306a1:	c3                   	ret    

000306a2 <get_updir>:
   306a2:	55                   	push   %ebp
   306a3:	89 e5                	mov    %esp,%ebp
   306a5:	e8 89 fb ff ff       	call   30233 <__x86.get_pc_thunk.ax>
   306aa:	05 56 b9 00 00       	add    $0xb956,%eax
   306af:	c7 c0 00 20 09 00    	mov    $0x92000,%eax
   306b5:	5d                   	pop    %ebp
   306b6:	c3                   	ret    

000306b7 <get_ucr3>:
   306b7:	55                   	push   %ebp
   306b8:	89 e5                	mov    %esp,%ebp
   306ba:	e8 74 fb ff ff       	call   30233 <__x86.get_pc_thunk.ax>
   306bf:	05 41 b9 00 00       	add    $0xb941,%eax
   306c4:	c7 c0 00 30 09 00    	mov    $0x93000,%eax
   306ca:	8b 00                	mov    (%eax),%eax
   306cc:	5d                   	pop    %ebp
   306cd:	c3                   	ret    

000306ce <mm_brk>:
   306ce:	55                   	push   %ebp
   306cf:	89 e5                	mov    %esp,%ebp
   306d1:	53                   	push   %ebx
   306d2:	83 ec 04             	sub    $0x4,%esp
   306d5:	e8 5d fb ff ff       	call   30237 <__x86.get_pc_thunk.bx>
   306da:	81 c3 26 b9 00 00    	add    $0xb926,%ebx
   306e0:	8b 83 08 10 00 00    	mov    0x1008(%ebx),%eax
   306e6:	39 45 08             	cmp    %eax,0x8(%ebp)
   306e9:	76 22                	jbe    3070d <mm_brk+0x3f>
   306eb:	8b 83 08 10 00 00    	mov    0x1008(%ebx),%eax
   306f1:	8b 55 08             	mov    0x8(%ebp),%edx
   306f4:	29 c2                	sub    %eax,%edx
   306f6:	89 d0                	mov    %edx,%eax
   306f8:	89 c2                	mov    %eax,%edx
   306fa:	8b 83 08 10 00 00    	mov    0x1008(%ebx),%eax
   30700:	83 ec 08             	sub    $0x8,%esp
   30703:	52                   	push   %edx
   30704:	50                   	push   %eax
   30705:	e8 b6 12 00 00       	call   319c0 <mm_malloc>
   3070a:	83 c4 10             	add    $0x10,%esp
   3070d:	8b 45 08             	mov    0x8(%ebp),%eax
   30710:	89 83 08 10 00 00    	mov    %eax,0x1008(%ebx)
   30716:	90                   	nop
   30717:	8b 5d fc             	mov    -0x4(%ebp),%ebx
   3071a:	c9                   	leave  
   3071b:	c3                   	ret    

0003071c <init_mm>:
   3071c:	55                   	push   %ebp
   3071d:	89 e5                	mov    %esp,%ebp
   3071f:	53                   	push   %ebx
   30720:	83 ec 14             	sub    $0x14,%esp
   30723:	e8 0f fb ff ff       	call   30237 <__x86.get_pc_thunk.bx>
   30728:	81 c3 d8 b8 00 00    	add    $0xb8d8,%ebx
   3072e:	e8 ec fb ff ff       	call   3031f <get_kpdir>
   30733:	89 45 f4             	mov    %eax,-0xc(%ebp)
   30736:	83 ec 04             	sub    $0x4,%esp
   30739:	68 00 10 00 00       	push   $0x1000
   3073e:	6a 00                	push   $0x0
   30740:	c7 c0 00 20 09 00    	mov    $0x92000,%eax
   30746:	50                   	push   %eax
   30747:	e8 50 15 00 00       	call   31c9c <memset>
   3074c:	83 c4 10             	add    $0x10,%esp
   3074f:	83 ec 04             	sub    $0x4,%esp
   30752:	68 80 00 00 00       	push   $0x80
   30757:	ff 75 f4             	pushl  -0xc(%ebp)
   3075a:	c7 c0 00 20 09 00    	mov    $0x92000,%eax
   30760:	50                   	push   %eax
   30761:	e8 ee 14 00 00       	call   31c54 <memcpy>
   30766:	83 c4 10             	add    $0x10,%esp
   30769:	c7 c0 00 20 09 00    	mov    $0x92000,%eax
   3076f:	25 00 fc ff ff       	and    $0xfffffc00,%eax
   30774:	89 c2                	mov    %eax,%edx
   30776:	c7 c0 00 30 09 00    	mov    $0x93000,%eax
   3077c:	89 10                	mov    %edx,(%eax)
   3077e:	90                   	nop
   3077f:	8b 5d fc             	mov    -0x4(%ebp),%ebx
   30782:	c9                   	leave  
   30783:	c3                   	ret    

00030784 <loader>:
   30784:	55                   	push   %ebp
   30785:	89 e5                	mov    %esp,%ebp
   30787:	53                   	push   %ebx
   30788:	83 ec 14             	sub    $0x14,%esp
   3078b:	e8 a7 fa ff ff       	call   30237 <__x86.get_pc_thunk.bx>
   30790:	81 c3 70 b8 00 00    	add    $0xb870,%ebx
   30796:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
   3079d:	8d 83 70 c9 ff ff    	lea    -0x3690(%ebx),%eax
   307a3:	50                   	push   %eax
   307a4:	6a 1e                	push   $0x1e
   307a6:	8d 83 24 c9 ff ff    	lea    -0x36dc(%ebx),%eax
   307ac:	50                   	push   %eax
   307ad:	8d 83 34 c9 ff ff    	lea    -0x36cc(%ebx),%eax
   307b3:	50                   	push   %eax
   307b4:	e8 a7 11 00 00       	call   31960 <printk>
   307b9:	83 c4 10             	add    $0x10,%esp
   307bc:	8b 45 f0             	mov    -0x10(%ebp),%eax
   307bf:	8b 50 1c             	mov    0x1c(%eax),%edx
   307c2:	8b 45 f0             	mov    -0x10(%ebp),%eax
   307c5:	01 d0                	add    %edx,%eax
   307c7:	89 45 f4             	mov    %eax,-0xc(%ebp)
   307ca:	8b 45 f0             	mov    -0x10(%ebp),%eax
   307cd:	8b 40 2c             	mov    0x2c(%eax),%eax
   307d0:	0f b7 c0             	movzwl %ax,%eax
   307d3:	c1 e0 05             	shl    $0x5,%eax
   307d6:	89 c2                	mov    %eax,%edx
   307d8:	8b 45 f4             	mov    -0xc(%ebp),%eax
   307db:	01 d0                	add    %edx,%eax
   307dd:	89 45 ec             	mov    %eax,-0x14(%ebp)
   307e0:	eb 4e                	jmp    30830 <loader+0xac>
   307e2:	8b 45 f4             	mov    -0xc(%ebp),%eax
   307e5:	8b 00                	mov    (%eax),%eax
   307e7:	83 f8 01             	cmp    $0x1,%eax
   307ea:	75 40                	jne    3082c <loader+0xa8>
   307ec:	8b 45 f4             	mov    -0xc(%ebp),%eax
   307ef:	8b 40 14             	mov    0x14(%eax),%eax
   307f2:	8b 55 f4             	mov    -0xc(%ebp),%edx
   307f5:	8b 52 08             	mov    0x8(%edx),%edx
   307f8:	83 ec 04             	sub    $0x4,%esp
   307fb:	50                   	push   %eax
   307fc:	6a 00                	push   $0x0
   307fe:	52                   	push   %edx
   307ff:	e8 98 14 00 00       	call   31c9c <memset>
   30804:	83 c4 10             	add    $0x10,%esp
   30807:	8b 45 f4             	mov    -0xc(%ebp),%eax
   3080a:	8b 40 10             	mov    0x10(%eax),%eax
   3080d:	8b 55 f4             	mov    -0xc(%ebp),%edx
   30810:	8b 4a 04             	mov    0x4(%edx),%ecx
   30813:	8b 55 f0             	mov    -0x10(%ebp),%edx
   30816:	01 d1                	add    %edx,%ecx
   30818:	8b 55 f4             	mov    -0xc(%ebp),%edx
   3081b:	8b 52 08             	mov    0x8(%edx),%edx
   3081e:	83 ec 04             	sub    $0x4,%esp
   30821:	50                   	push   %eax
   30822:	51                   	push   %ecx
   30823:	52                   	push   %edx
   30824:	e8 2b 14 00 00       	call   31c54 <memcpy>
   30829:	83 c4 10             	add    $0x10,%esp
   3082c:	83 45 f4 20          	addl   $0x20,-0xc(%ebp)
   30830:	8b 45 f4             	mov    -0xc(%ebp),%eax
   30833:	3b 45 ec             	cmp    -0x14(%ebp),%eax
   30836:	72 aa                	jb     307e2 <loader+0x5e>
   30838:	8b 45 f0             	mov    -0x10(%ebp),%eax
   3083b:	8b 40 18             	mov    0x18(%eax),%eax
   3083e:	89 45 e8             	mov    %eax,-0x18(%ebp)
   30841:	8b 45 e8             	mov    -0x18(%ebp),%eax
   30844:	8b 5d fc             	mov    -0x4(%ebp),%ebx
   30847:	c9                   	leave  
   30848:	c3                   	ret    

00030849 <in_byte>:
   30849:	55                   	push   %ebp
   3084a:	89 e5                	mov    %esp,%ebp
   3084c:	83 ec 14             	sub    $0x14,%esp
   3084f:	e8 df f9 ff ff       	call   30233 <__x86.get_pc_thunk.ax>
   30854:	05 ac b7 00 00       	add    $0xb7ac,%eax
   30859:	8b 45 08             	mov    0x8(%ebp),%eax
   3085c:	66 89 45 ec          	mov    %ax,-0x14(%ebp)
   30860:	8b 45 ec             	mov    -0x14(%ebp),%eax
   30863:	89 c2                	mov    %eax,%edx
   30865:	ec                   	in     (%dx),%al
   30866:	88 45 ff             	mov    %al,-0x1(%ebp)
   30869:	8a 45 ff             	mov    -0x1(%ebp),%al
   3086c:	c9                   	leave  
   3086d:	c3                   	ret    

0003086e <out_byte>:
   3086e:	55                   	push   %ebp
   3086f:	89 e5                	mov    %esp,%ebp
   30871:	83 ec 08             	sub    $0x8,%esp
   30874:	e8 ba f9 ff ff       	call   30233 <__x86.get_pc_thunk.ax>
   30879:	05 87 b7 00 00       	add    $0xb787,%eax
   3087e:	8b 45 08             	mov    0x8(%ebp),%eax
   30881:	8b 55 0c             	mov    0xc(%ebp),%edx
   30884:	66 89 45 fc          	mov    %ax,-0x4(%ebp)
   30888:	88 55 f8             	mov    %dl,-0x8(%ebp)
   3088b:	8a 45 f8             	mov    -0x8(%ebp),%al
   3088e:	8b 55 fc             	mov    -0x4(%ebp),%edx
   30891:	ee                   	out    %al,(%dx)
   30892:	90                   	nop
   30893:	c9                   	leave  
   30894:	c3                   	ret    

00030895 <out_long>:
   30895:	55                   	push   %ebp
   30896:	89 e5                	mov    %esp,%ebp
   30898:	83 ec 04             	sub    $0x4,%esp
   3089b:	e8 93 f9 ff ff       	call   30233 <__x86.get_pc_thunk.ax>
   308a0:	05 60 b7 00 00       	add    $0xb760,%eax
   308a5:	8b 45 08             	mov    0x8(%ebp),%eax
   308a8:	66 89 45 fc          	mov    %ax,-0x4(%ebp)
   308ac:	8b 45 0c             	mov    0xc(%ebp),%eax
   308af:	8b 55 fc             	mov    -0x4(%ebp),%edx
   308b2:	ef                   	out    %eax,(%dx)
   308b3:	90                   	nop
   308b4:	c9                   	leave  
   308b5:	c3                   	ret    

000308b6 <dma_prepare>:
   308b6:	55                   	push   %ebp
   308b7:	89 e5                	mov    %esp,%ebp
   308b9:	83 ec 10             	sub    $0x10,%esp
   308bc:	e8 72 f9 ff ff       	call   30233 <__x86.get_pc_thunk.ax>
   308c1:	05 3f b7 00 00       	add    $0xb73f,%eax
   308c6:	8b 55 08             	mov    0x8(%ebp),%edx
   308c9:	89 55 fc             	mov    %edx,-0x4(%ebp)
   308cc:	c7 c2 04 30 09 00    	mov    $0x93004,%edx
   308d2:	8b 4d fc             	mov    -0x4(%ebp),%ecx
   308d5:	89 0a                	mov    %ecx,(%edx)
   308d7:	c7 c2 04 30 09 00    	mov    $0x93004,%edx
   308dd:	66 c7 42 04 00 02    	movw   $0x200,0x4(%edx)
   308e3:	c7 c2 04 30 09 00    	mov    $0x93004,%edx
   308e9:	8a 4a 07             	mov    0x7(%edx),%cl
   308ec:	83 c9 80             	or     $0xffffff80,%ecx
   308ef:	88 4a 07             	mov    %cl,0x7(%edx)
   308f2:	c7 c1 04 30 09 00    	mov    $0x93004,%ecx
   308f8:	66 8b 51 06          	mov    0x6(%ecx),%dx
   308fc:	81 e2 00 80 ff ff    	and    $0xffff8000,%edx
   30902:	66 89 51 06          	mov    %dx,0x6(%ecx)
   30906:	c7 c0 04 30 09 00    	mov    $0x93004,%eax
   3090c:	89 45 f8             	mov    %eax,-0x8(%ebp)
   3090f:	ff 75 f8             	pushl  -0x8(%ebp)
   30912:	68 44 c0 00 00       	push   $0xc044
   30917:	e8 79 ff ff ff       	call   30895 <out_long>
   3091c:	83 c4 08             	add    $0x8,%esp
   3091f:	90                   	nop
   30920:	c9                   	leave  
   30921:	c3                   	ret    

00030922 <dma_issue_read>:
   30922:	55                   	push   %ebp
   30923:	89 e5                	mov    %esp,%ebp
   30925:	e8 09 f9 ff ff       	call   30233 <__x86.get_pc_thunk.ax>
   3092a:	05 d6 b6 00 00       	add    $0xb6d6,%eax
   3092f:	68 40 c0 00 00       	push   $0xc040
   30934:	e8 10 ff ff ff       	call   30849 <in_byte>
   30939:	83 c4 04             	add    $0x4,%esp
   3093c:	83 c8 09             	or     $0x9,%eax
   3093f:	0f b6 c0             	movzbl %al,%eax
   30942:	50                   	push   %eax
   30943:	68 40 c0 00 00       	push   $0xc040
   30948:	e8 21 ff ff ff       	call   3086e <out_byte>
   3094d:	83 c4 08             	add    $0x8,%esp
   30950:	90                   	nop
   30951:	c9                   	leave  
   30952:	c3                   	ret    

00030953 <wait_intr>:
   30953:	55                   	push   %ebp
   30954:	89 e5                	mov    %esp,%ebp
   30956:	e8 d8 f8 ff ff       	call   30233 <__x86.get_pc_thunk.ax>
   3095b:	05 a5 b6 00 00       	add    $0xb6a5,%eax
   30960:	f4                   	hlt    
   30961:	90                   	nop
   30962:	5d                   	pop    %ebp
   30963:	c3                   	ret    

00030964 <ide_read>:
   30964:	55                   	push   %ebp
   30965:	89 e5                	mov    %esp,%ebp
   30967:	56                   	push   %esi
   30968:	53                   	push   %ebx
   30969:	83 ec 10             	sub    $0x10,%esp
   3096c:	e8 c6 f8 ff ff       	call   30237 <__x86.get_pc_thunk.bx>
   30971:	81 c3 8f b6 00 00    	add    $0xb68f,%ebx
   30977:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
   3097e:	eb 22                	jmp    309a2 <ide_read+0x3e>
   30980:	8b 55 08             	mov    0x8(%ebp),%edx
   30983:	8b 45 f4             	mov    -0xc(%ebp),%eax
   30986:	8d 34 02             	lea    (%edx,%eax,1),%esi
   30989:	8b 55 0c             	mov    0xc(%ebp),%edx
   3098c:	8b 45 f4             	mov    -0xc(%ebp),%eax
   3098f:	01 d0                	add    %edx,%eax
   30991:	83 ec 0c             	sub    $0xc,%esp
   30994:	50                   	push   %eax
   30995:	e8 11 05 00 00       	call   30eab <read_byte>
   3099a:	83 c4 10             	add    $0x10,%esp
   3099d:	88 06                	mov    %al,(%esi)
   3099f:	ff 45 f4             	incl   -0xc(%ebp)
   309a2:	8b 45 f4             	mov    -0xc(%ebp),%eax
   309a5:	3b 45 10             	cmp    0x10(%ebp),%eax
   309a8:	72 d6                	jb     30980 <ide_read+0x1c>
   309aa:	90                   	nop
   309ab:	8d 65 f8             	lea    -0x8(%ebp),%esp
   309ae:	5b                   	pop    %ebx
   309af:	5e                   	pop    %esi
   309b0:	5d                   	pop    %ebp
   309b1:	c3                   	ret    

000309b2 <ide_write>:
   309b2:	55                   	push   %ebp
   309b3:	89 e5                	mov    %esp,%ebp
   309b5:	53                   	push   %ebx
   309b6:	83 ec 14             	sub    $0x14,%esp
   309b9:	e8 79 f8 ff ff       	call   30237 <__x86.get_pc_thunk.bx>
   309be:	81 c3 42 b6 00 00    	add    $0xb642,%ebx
   309c4:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
   309cb:	eb 25                	jmp    309f2 <ide_write+0x40>
   309cd:	8b 55 08             	mov    0x8(%ebp),%edx
   309d0:	8b 45 f4             	mov    -0xc(%ebp),%eax
   309d3:	01 d0                	add    %edx,%eax
   309d5:	8a 00                	mov    (%eax),%al
   309d7:	0f b6 c0             	movzbl %al,%eax
   309da:	8b 4d 0c             	mov    0xc(%ebp),%ecx
   309dd:	8b 55 f4             	mov    -0xc(%ebp),%edx
   309e0:	01 ca                	add    %ecx,%edx
   309e2:	83 ec 08             	sub    $0x8,%esp
   309e5:	50                   	push   %eax
   309e6:	52                   	push   %edx
   309e7:	e8 fc 04 00 00       	call   30ee8 <write_byte>
   309ec:	83 c4 10             	add    $0x10,%esp
   309ef:	ff 45 f4             	incl   -0xc(%ebp)
   309f2:	8b 45 f4             	mov    -0xc(%ebp),%eax
   309f5:	3b 45 10             	cmp    0x10(%ebp),%eax
   309f8:	72 d3                	jb     309cd <ide_write+0x1b>
   309fa:	90                   	nop
   309fb:	8b 5d fc             	mov    -0x4(%ebp),%ebx
   309fe:	c9                   	leave  
   309ff:	c3                   	ret    

00030a00 <ide_writeback>:
   30a00:	55                   	push   %ebp
   30a01:	89 e5                	mov    %esp,%ebp
   30a03:	53                   	push   %ebx
   30a04:	83 ec 04             	sub    $0x4,%esp
   30a07:	e8 2b f8 ff ff       	call   30237 <__x86.get_pc_thunk.bx>
   30a0c:	81 c3 f4 b5 00 00    	add    $0xb5f4,%ebx
   30a12:	8b 83 10 10 00 00    	mov    0x1010(%ebx),%eax
   30a18:	40                   	inc    %eax
   30a19:	89 83 10 10 00 00    	mov    %eax,0x1010(%ebx)
   30a1f:	8b 83 10 10 00 00    	mov    0x1010(%ebx),%eax
   30a25:	83 f8 64             	cmp    $0x64,%eax
   30a28:	75 0f                	jne    30a39 <ide_writeback+0x39>
   30a2a:	e8 41 03 00 00       	call   30d70 <cache_writeback>
   30a2f:	c7 83 10 10 00 00 00 	movl   $0x0,0x1010(%ebx)
   30a36:	00 00 00 
   30a39:	90                   	nop
   30a3a:	83 c4 04             	add    $0x4,%esp
   30a3d:	5b                   	pop    %ebx
   30a3e:	5d                   	pop    %ebp
   30a3f:	c3                   	ret    

00030a40 <ide_intr>:
   30a40:	55                   	push   %ebp
   30a41:	89 e5                	mov    %esp,%ebp
   30a43:	e8 eb f7 ff ff       	call   30233 <__x86.get_pc_thunk.ax>
   30a48:	05 b8 b5 00 00       	add    $0xb5b8,%eax
   30a4d:	c7 80 0c 10 00 00 01 	movl   $0x1,0x100c(%eax)
   30a54:	00 00 00 
   30a57:	90                   	nop
   30a58:	5d                   	pop    %ebp
   30a59:	c3                   	ret    

00030a5a <clear_ide_intr>:
   30a5a:	55                   	push   %ebp
   30a5b:	89 e5                	mov    %esp,%ebp
   30a5d:	e8 d1 f7 ff ff       	call   30233 <__x86.get_pc_thunk.ax>
   30a62:	05 9e b5 00 00       	add    $0xb59e,%eax
   30a67:	c7 80 0c 10 00 00 00 	movl   $0x0,0x100c(%eax)
   30a6e:	00 00 00 
   30a71:	90                   	nop
   30a72:	5d                   	pop    %ebp
   30a73:	c3                   	ret    

00030a74 <wait_ide_intr>:
   30a74:	55                   	push   %ebp
   30a75:	89 e5                	mov    %esp,%ebp
   30a77:	53                   	push   %ebx
   30a78:	e8 ba f7 ff ff       	call   30237 <__x86.get_pc_thunk.bx>
   30a7d:	81 c3 83 b5 00 00    	add    $0xb583,%ebx
   30a83:	eb 05                	jmp    30a8a <wait_ide_intr+0x16>
   30a85:	e8 c9 fe ff ff       	call   30953 <wait_intr>
   30a8a:	8b 83 0c 10 00 00    	mov    0x100c(%ebx),%eax
   30a90:	85 c0                	test   %eax,%eax
   30a92:	74 f1                	je     30a85 <wait_ide_intr+0x11>
   30a94:	e8 c1 ff ff ff       	call   30a5a <clear_ide_intr>
   30a99:	90                   	nop
   30a9a:	5b                   	pop    %ebx
   30a9b:	5d                   	pop    %ebp
   30a9c:	c3                   	ret    

00030a9d <init_ide>:
   30a9d:	55                   	push   %ebp
   30a9e:	89 e5                	mov    %esp,%ebp
   30aa0:	53                   	push   %ebx
   30aa1:	83 ec 04             	sub    $0x4,%esp
   30aa4:	e8 8e f7 ff ff       	call   30237 <__x86.get_pc_thunk.bx>
   30aa9:	81 c3 57 b5 00 00    	add    $0xb557,%ebx
   30aaf:	e8 79 02 00 00       	call   30d2d <cache_init>
   30ab4:	83 ec 08             	sub    $0x8,%esp
   30ab7:	8d 83 00 4a ff ff    	lea    -0xb600(%ebx),%eax
   30abd:	50                   	push   %eax
   30abe:	6a 00                	push   $0x0
   30ac0:	e8 6f 05 00 00       	call   31034 <add_irq_handle>
   30ac5:	83 c4 10             	add    $0x10,%esp
   30ac8:	83 ec 08             	sub    $0x8,%esp
   30acb:	8d 83 40 4a ff ff    	lea    -0xb5c0(%ebx),%eax
   30ad1:	50                   	push   %eax
   30ad2:	6a 0e                	push   $0xe
   30ad4:	e8 5b 05 00 00       	call   31034 <add_irq_handle>
   30ad9:	83 c4 10             	add    $0x10,%esp
   30adc:	90                   	nop
   30add:	8b 5d fc             	mov    -0x4(%ebp),%ebx
   30ae0:	c9                   	leave  
   30ae1:	c3                   	ret    

00030ae2 <in_byte>:
   30ae2:	55                   	push   %ebp
   30ae3:	89 e5                	mov    %esp,%ebp
   30ae5:	83 ec 14             	sub    $0x14,%esp
   30ae8:	e8 46 f7 ff ff       	call   30233 <__x86.get_pc_thunk.ax>
   30aed:	05 13 b5 00 00       	add    $0xb513,%eax
   30af2:	8b 45 08             	mov    0x8(%ebp),%eax
   30af5:	66 89 45 ec          	mov    %ax,-0x14(%ebp)
   30af9:	8b 45 ec             	mov    -0x14(%ebp),%eax
   30afc:	89 c2                	mov    %eax,%edx
   30afe:	ec                   	in     (%dx),%al
   30aff:	88 45 ff             	mov    %al,-0x1(%ebp)
   30b02:	8a 45 ff             	mov    -0x1(%ebp),%al
   30b05:	c9                   	leave  
   30b06:	c3                   	ret    

00030b07 <in_long>:
   30b07:	55                   	push   %ebp
   30b08:	89 e5                	mov    %esp,%ebp
   30b0a:	83 ec 14             	sub    $0x14,%esp
   30b0d:	e8 21 f7 ff ff       	call   30233 <__x86.get_pc_thunk.ax>
   30b12:	05 ee b4 00 00       	add    $0xb4ee,%eax
   30b17:	8b 45 08             	mov    0x8(%ebp),%eax
   30b1a:	66 89 45 ec          	mov    %ax,-0x14(%ebp)
   30b1e:	8b 45 ec             	mov    -0x14(%ebp),%eax
   30b21:	89 c2                	mov    %eax,%edx
   30b23:	ed                   	in     (%dx),%eax
   30b24:	89 45 fc             	mov    %eax,-0x4(%ebp)
   30b27:	8b 45 fc             	mov    -0x4(%ebp),%eax
   30b2a:	c9                   	leave  
   30b2b:	c3                   	ret    

00030b2c <out_byte>:
   30b2c:	55                   	push   %ebp
   30b2d:	89 e5                	mov    %esp,%ebp
   30b2f:	83 ec 08             	sub    $0x8,%esp
   30b32:	e8 fc f6 ff ff       	call   30233 <__x86.get_pc_thunk.ax>
   30b37:	05 c9 b4 00 00       	add    $0xb4c9,%eax
   30b3c:	8b 45 08             	mov    0x8(%ebp),%eax
   30b3f:	8b 55 0c             	mov    0xc(%ebp),%edx
   30b42:	66 89 45 fc          	mov    %ax,-0x4(%ebp)
   30b46:	88 55 f8             	mov    %dl,-0x8(%ebp)
   30b49:	8a 45 f8             	mov    -0x8(%ebp),%al
   30b4c:	8b 55 fc             	mov    -0x4(%ebp),%edx
   30b4f:	ee                   	out    %al,(%dx)
   30b50:	90                   	nop
   30b51:	c9                   	leave  
   30b52:	c3                   	ret    

00030b53 <out_long>:
   30b53:	55                   	push   %ebp
   30b54:	89 e5                	mov    %esp,%ebp
   30b56:	83 ec 04             	sub    $0x4,%esp
   30b59:	e8 d5 f6 ff ff       	call   30233 <__x86.get_pc_thunk.ax>
   30b5e:	05 a2 b4 00 00       	add    $0xb4a2,%eax
   30b63:	8b 45 08             	mov    0x8(%ebp),%eax
   30b66:	66 89 45 fc          	mov    %ax,-0x4(%ebp)
   30b6a:	8b 45 0c             	mov    0xc(%ebp),%eax
   30b6d:	8b 55 fc             	mov    -0x4(%ebp),%edx
   30b70:	ef                   	out    %eax,(%dx)
   30b71:	90                   	nop
   30b72:	c9                   	leave  
   30b73:	c3                   	ret    

00030b74 <waitdisk>:
   30b74:	55                   	push   %ebp
   30b75:	89 e5                	mov    %esp,%ebp
   30b77:	e8 b7 f6 ff ff       	call   30233 <__x86.get_pc_thunk.ax>
   30b7c:	05 84 b4 00 00       	add    $0xb484,%eax
   30b81:	90                   	nop
   30b82:	68 f7 01 00 00       	push   $0x1f7
   30b87:	e8 56 ff ff ff       	call   30ae2 <in_byte>
   30b8c:	83 c4 04             	add    $0x4,%esp
   30b8f:	0f b6 c0             	movzbl %al,%eax
   30b92:	25 c0 00 00 00       	and    $0xc0,%eax
   30b97:	83 f8 40             	cmp    $0x40,%eax
   30b9a:	75 e6                	jne    30b82 <waitdisk+0xe>
   30b9c:	90                   	nop
   30b9d:	c9                   	leave  
   30b9e:	c3                   	ret    

00030b9f <ide_prepare>:
   30b9f:	55                   	push   %ebp
   30ba0:	89 e5                	mov    %esp,%ebp
   30ba2:	e8 8c f6 ff ff       	call   30233 <__x86.get_pc_thunk.ax>
   30ba7:	05 59 b4 00 00       	add    $0xb459,%eax
   30bac:	e8 c3 ff ff ff       	call   30b74 <waitdisk>
   30bb1:	6a 00                	push   $0x0
   30bb3:	68 f1 01 00 00       	push   $0x1f1
   30bb8:	e8 6f ff ff ff       	call   30b2c <out_byte>
   30bbd:	83 c4 08             	add    $0x8,%esp
   30bc0:	6a 01                	push   $0x1
   30bc2:	68 f2 01 00 00       	push   $0x1f2
   30bc7:	e8 60 ff ff ff       	call   30b2c <out_byte>
   30bcc:	83 c4 08             	add    $0x8,%esp
   30bcf:	8b 45 08             	mov    0x8(%ebp),%eax
   30bd2:	0f b6 c0             	movzbl %al,%eax
   30bd5:	50                   	push   %eax
   30bd6:	68 f3 01 00 00       	push   $0x1f3
   30bdb:	e8 4c ff ff ff       	call   30b2c <out_byte>
   30be0:	83 c4 08             	add    $0x8,%esp
   30be3:	8b 45 08             	mov    0x8(%ebp),%eax
   30be6:	c1 e8 08             	shr    $0x8,%eax
   30be9:	0f b6 c0             	movzbl %al,%eax
   30bec:	50                   	push   %eax
   30bed:	68 f4 01 00 00       	push   $0x1f4
   30bf2:	e8 35 ff ff ff       	call   30b2c <out_byte>
   30bf7:	83 c4 08             	add    $0x8,%esp
   30bfa:	8b 45 08             	mov    0x8(%ebp),%eax
   30bfd:	c1 e8 10             	shr    $0x10,%eax
   30c00:	0f b6 c0             	movzbl %al,%eax
   30c03:	50                   	push   %eax
   30c04:	68 f5 01 00 00       	push   $0x1f5
   30c09:	e8 1e ff ff ff       	call   30b2c <out_byte>
   30c0e:	83 c4 08             	add    $0x8,%esp
   30c11:	8b 45 08             	mov    0x8(%ebp),%eax
   30c14:	c1 e8 18             	shr    $0x18,%eax
   30c17:	83 c8 e0             	or     $0xffffffe0,%eax
   30c1a:	0f b6 c0             	movzbl %al,%eax
   30c1d:	50                   	push   %eax
   30c1e:	68 f6 01 00 00       	push   $0x1f6
   30c23:	e8 04 ff ff ff       	call   30b2c <out_byte>
   30c28:	83 c4 08             	add    $0x8,%esp
   30c2b:	90                   	nop
   30c2c:	c9                   	leave  
   30c2d:	c3                   	ret    

00030c2e <issue_read>:
   30c2e:	55                   	push   %ebp
   30c2f:	89 e5                	mov    %esp,%ebp
   30c31:	e8 fd f5 ff ff       	call   30233 <__x86.get_pc_thunk.ax>
   30c36:	05 ca b3 00 00       	add    $0xb3ca,%eax
   30c3b:	6a 20                	push   $0x20
   30c3d:	68 f7 01 00 00       	push   $0x1f7
   30c42:	e8 e5 fe ff ff       	call   30b2c <out_byte>
   30c47:	83 c4 08             	add    $0x8,%esp
   30c4a:	90                   	nop
   30c4b:	c9                   	leave  
   30c4c:	c3                   	ret    

00030c4d <issue_write>:
   30c4d:	55                   	push   %ebp
   30c4e:	89 e5                	mov    %esp,%ebp
   30c50:	e8 de f5 ff ff       	call   30233 <__x86.get_pc_thunk.ax>
   30c55:	05 ab b3 00 00       	add    $0xb3ab,%eax
   30c5a:	6a 30                	push   $0x30
   30c5c:	68 f7 01 00 00       	push   $0x1f7
   30c61:	e8 c6 fe ff ff       	call   30b2c <out_byte>
   30c66:	83 c4 08             	add    $0x8,%esp
   30c69:	90                   	nop
   30c6a:	c9                   	leave  
   30c6b:	c3                   	ret    

00030c6c <disk_do_read>:
   30c6c:	55                   	push   %ebp
   30c6d:	89 e5                	mov    %esp,%ebp
   30c6f:	53                   	push   %ebx
   30c70:	83 ec 14             	sub    $0x14,%esp
   30c73:	e8 bf f5 ff ff       	call   30237 <__x86.get_pc_thunk.bx>
   30c78:	81 c3 88 b3 00 00    	add    $0xb388,%ebx
   30c7e:	e8 d7 fd ff ff       	call   30a5a <clear_ide_intr>
   30c83:	83 ec 0c             	sub    $0xc,%esp
   30c86:	ff 75 0c             	pushl  0xc(%ebp)
   30c89:	e8 11 ff ff ff       	call   30b9f <ide_prepare>
   30c8e:	83 c4 10             	add    $0x10,%esp
   30c91:	e8 98 ff ff ff       	call   30c2e <issue_read>
   30c96:	e8 d9 fd ff ff       	call   30a74 <wait_ide_intr>
   30c9b:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
   30ca2:	eb 25                	jmp    30cc9 <disk_do_read+0x5d>
   30ca4:	8b 45 f4             	mov    -0xc(%ebp),%eax
   30ca7:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
   30cae:	8b 45 08             	mov    0x8(%ebp),%eax
   30cb1:	8d 1c 02             	lea    (%edx,%eax,1),%ebx
   30cb4:	83 ec 0c             	sub    $0xc,%esp
   30cb7:	68 f0 01 00 00       	push   $0x1f0
   30cbc:	e8 46 fe ff ff       	call   30b07 <in_long>
   30cc1:	83 c4 10             	add    $0x10,%esp
   30cc4:	89 03                	mov    %eax,(%ebx)
   30cc6:	ff 45 f4             	incl   -0xc(%ebp)
   30cc9:	8b 45 f4             	mov    -0xc(%ebp),%eax
   30ccc:	83 f8 7f             	cmp    $0x7f,%eax
   30ccf:	76 d3                	jbe    30ca4 <disk_do_read+0x38>
   30cd1:	90                   	nop
   30cd2:	8b 5d fc             	mov    -0x4(%ebp),%ebx
   30cd5:	c9                   	leave  
   30cd6:	c3                   	ret    

00030cd7 <disk_do_write>:
   30cd7:	55                   	push   %ebp
   30cd8:	89 e5                	mov    %esp,%ebp
   30cda:	83 ec 10             	sub    $0x10,%esp
   30cdd:	e8 51 f5 ff ff       	call   30233 <__x86.get_pc_thunk.ax>
   30ce2:	05 1e b3 00 00       	add    $0xb31e,%eax
   30ce7:	ff 75 0c             	pushl  0xc(%ebp)
   30cea:	e8 b0 fe ff ff       	call   30b9f <ide_prepare>
   30cef:	83 c4 04             	add    $0x4,%esp
   30cf2:	e8 56 ff ff ff       	call   30c4d <issue_write>
   30cf7:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
   30cfe:	eb 22                	jmp    30d22 <disk_do_write+0x4b>
   30d00:	8b 45 fc             	mov    -0x4(%ebp),%eax
   30d03:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
   30d0a:	8b 45 08             	mov    0x8(%ebp),%eax
   30d0d:	01 d0                	add    %edx,%eax
   30d0f:	8b 00                	mov    (%eax),%eax
   30d11:	50                   	push   %eax
   30d12:	68 f0 01 00 00       	push   $0x1f0
   30d17:	e8 37 fe ff ff       	call   30b53 <out_long>
   30d1c:	83 c4 08             	add    $0x8,%esp
   30d1f:	ff 45 fc             	incl   -0x4(%ebp)
   30d22:	8b 45 fc             	mov    -0x4(%ebp),%eax
   30d25:	83 f8 7f             	cmp    $0x7f,%eax
   30d28:	76 d6                	jbe    30d00 <disk_do_write+0x29>
   30d2a:	90                   	nop
   30d2b:	c9                   	leave  
   30d2c:	c3                   	ret    

00030d2d <cache_init>:
   30d2d:	55                   	push   %ebp
   30d2e:	89 e5                	mov    %esp,%ebp
   30d30:	53                   	push   %ebx
   30d31:	83 ec 10             	sub    $0x10,%esp
   30d34:	e8 fd 01 00 00       	call   30f36 <__x86.get_pc_thunk.dx>
   30d39:	81 c2 c7 b2 00 00    	add    $0xb2c7,%edx
   30d3f:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
   30d46:	eb 1b                	jmp    30d63 <cache_init+0x36>
   30d48:	8b 4d f8             	mov    -0x8(%ebp),%ecx
   30d4b:	8d 9a 24 10 00 00    	lea    0x1024(%edx),%ebx
   30d51:	89 c8                	mov    %ecx,%eax
   30d53:	c1 e0 06             	shl    $0x6,%eax
   30d56:	01 c8                	add    %ecx,%eax
   30d58:	c1 e0 03             	shl    $0x3,%eax
   30d5b:	01 d8                	add    %ebx,%eax
   30d5d:	c6 00 00             	movb   $0x0,(%eax)
   30d60:	ff 45 f8             	incl   -0x8(%ebp)
   30d63:	83 7d f8 7f          	cmpl   $0x7f,-0x8(%ebp)
   30d67:	7e df                	jle    30d48 <cache_init+0x1b>
   30d69:	90                   	nop
   30d6a:	83 c4 10             	add    $0x10,%esp
   30d6d:	5b                   	pop    %ebx
   30d6e:	5d                   	pop    %ebp
   30d6f:	c3                   	ret    

00030d70 <cache_writeback>:
   30d70:	55                   	push   %ebp
   30d71:	89 e5                	mov    %esp,%ebp
   30d73:	53                   	push   %ebx
   30d74:	83 ec 14             	sub    $0x14,%esp
   30d77:	e8 bb f4 ff ff       	call   30237 <__x86.get_pc_thunk.bx>
   30d7c:	81 c3 84 b2 00 00    	add    $0xb284,%ebx
   30d82:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
   30d89:	eb 72                	jmp    30dfd <cache_writeback+0x8d>
   30d8b:	8b 55 f4             	mov    -0xc(%ebp),%edx
   30d8e:	8d 8b 25 10 00 00    	lea    0x1025(%ebx),%ecx
   30d94:	89 d0                	mov    %edx,%eax
   30d96:	c1 e0 06             	shl    $0x6,%eax
   30d99:	01 d0                	add    %edx,%eax
   30d9b:	c1 e0 03             	shl    $0x3,%eax
   30d9e:	01 c8                	add    %ecx,%eax
   30da0:	8a 00                	mov    (%eax),%al
   30da2:	3c 01                	cmp    $0x1,%al
   30da4:	75 54                	jne    30dfa <cache_writeback+0x8a>
   30da6:	8b 55 f4             	mov    -0xc(%ebp),%edx
   30da9:	8d 8b 20 10 00 00    	lea    0x1020(%ebx),%ecx
   30daf:	89 d0                	mov    %edx,%eax
   30db1:	c1 e0 06             	shl    $0x6,%eax
   30db4:	01 d0                	add    %edx,%eax
   30db6:	c1 e0 03             	shl    $0x3,%eax
   30db9:	01 c8                	add    %ecx,%eax
   30dbb:	8b 10                	mov    (%eax),%edx
   30dbd:	8b 4d f4             	mov    -0xc(%ebp),%ecx
   30dc0:	89 c8                	mov    %ecx,%eax
   30dc2:	c1 e0 06             	shl    $0x6,%eax
   30dc5:	01 c8                	add    %ecx,%eax
   30dc7:	c1 e0 03             	shl    $0x3,%eax
   30dca:	8d 8b 20 10 00 00    	lea    0x1020(%ebx),%ecx
   30dd0:	01 c8                	add    %ecx,%eax
   30dd2:	83 c0 06             	add    $0x6,%eax
   30dd5:	83 ec 08             	sub    $0x8,%esp
   30dd8:	52                   	push   %edx
   30dd9:	50                   	push   %eax
   30dda:	e8 f8 fe ff ff       	call   30cd7 <disk_do_write>
   30ddf:	83 c4 10             	add    $0x10,%esp
   30de2:	8b 55 f4             	mov    -0xc(%ebp),%edx
   30de5:	8d 8b 25 10 00 00    	lea    0x1025(%ebx),%ecx
   30deb:	89 d0                	mov    %edx,%eax
   30ded:	c1 e0 06             	shl    $0x6,%eax
   30df0:	01 d0                	add    %edx,%eax
   30df2:	c1 e0 03             	shl    $0x3,%eax
   30df5:	01 c8                	add    %ecx,%eax
   30df7:	c6 00 00             	movb   $0x0,(%eax)
   30dfa:	ff 45 f4             	incl   -0xc(%ebp)
   30dfd:	83 7d f4 7f          	cmpl   $0x7f,-0xc(%ebp)
   30e01:	7e 88                	jle    30d8b <cache_writeback+0x1b>
   30e03:	90                   	nop
   30e04:	8b 5d fc             	mov    -0x4(%ebp),%ebx
   30e07:	c9                   	leave  
   30e08:	c3                   	ret    

00030e09 <cache_fetch>:
   30e09:	55                   	push   %ebp
   30e0a:	89 e5                	mov    %esp,%ebp
   30e0c:	53                   	push   %ebx
   30e0d:	83 ec 14             	sub    $0x14,%esp
   30e10:	e8 22 f4 ff ff       	call   30237 <__x86.get_pc_thunk.bx>
   30e15:	81 c3 eb b1 00 00    	add    $0xb1eb,%ebx
   30e1b:	8b 45 08             	mov    0x8(%ebp),%eax
   30e1e:	83 e0 7f             	and    $0x7f,%eax
   30e21:	89 c2                	mov    %eax,%edx
   30e23:	89 d0                	mov    %edx,%eax
   30e25:	c1 e0 06             	shl    $0x6,%eax
   30e28:	01 d0                	add    %edx,%eax
   30e2a:	c1 e0 03             	shl    $0x3,%eax
   30e2d:	8d 93 20 10 00 00    	lea    0x1020(%ebx),%edx
   30e33:	01 d0                	add    %edx,%eax
   30e35:	89 45 f4             	mov    %eax,-0xc(%ebp)
   30e38:	8b 45 f4             	mov    -0xc(%ebp),%eax
   30e3b:	8a 40 04             	mov    0x4(%eax),%al
   30e3e:	3c 01                	cmp    $0x1,%al
   30e40:	75 0a                	jne    30e4c <cache_fetch+0x43>
   30e42:	8b 45 f4             	mov    -0xc(%ebp),%eax
   30e45:	8b 00                	mov    (%eax),%eax
   30e47:	3b 45 08             	cmp    0x8(%ebp),%eax
   30e4a:	74 57                	je     30ea3 <cache_fetch+0x9a>
   30e4c:	8b 45 f4             	mov    -0xc(%ebp),%eax
   30e4f:	8a 40 04             	mov    0x4(%eax),%al
   30e52:	3c 01                	cmp    $0x1,%al
   30e54:	75 22                	jne    30e78 <cache_fetch+0x6f>
   30e56:	8b 45 f4             	mov    -0xc(%ebp),%eax
   30e59:	8a 40 05             	mov    0x5(%eax),%al
   30e5c:	3c 01                	cmp    $0x1,%al
   30e5e:	75 18                	jne    30e78 <cache_fetch+0x6f>
   30e60:	8b 45 f4             	mov    -0xc(%ebp),%eax
   30e63:	8b 00                	mov    (%eax),%eax
   30e65:	8b 55 f4             	mov    -0xc(%ebp),%edx
   30e68:	83 c2 06             	add    $0x6,%edx
   30e6b:	83 ec 08             	sub    $0x8,%esp
   30e6e:	50                   	push   %eax
   30e6f:	52                   	push   %edx
   30e70:	e8 62 fe ff ff       	call   30cd7 <disk_do_write>
   30e75:	83 c4 10             	add    $0x10,%esp
   30e78:	8b 45 f4             	mov    -0xc(%ebp),%eax
   30e7b:	83 c0 06             	add    $0x6,%eax
   30e7e:	83 ec 08             	sub    $0x8,%esp
   30e81:	ff 75 08             	pushl  0x8(%ebp)
   30e84:	50                   	push   %eax
   30e85:	e8 e2 fd ff ff       	call   30c6c <disk_do_read>
   30e8a:	83 c4 10             	add    $0x10,%esp
   30e8d:	8b 45 f4             	mov    -0xc(%ebp),%eax
   30e90:	c6 40 04 01          	movb   $0x1,0x4(%eax)
   30e94:	8b 45 f4             	mov    -0xc(%ebp),%eax
   30e97:	8b 55 08             	mov    0x8(%ebp),%edx
   30e9a:	89 10                	mov    %edx,(%eax)
   30e9c:	8b 45 f4             	mov    -0xc(%ebp),%eax
   30e9f:	c6 40 05 00          	movb   $0x0,0x5(%eax)
   30ea3:	8b 45 f4             	mov    -0xc(%ebp),%eax
   30ea6:	8b 5d fc             	mov    -0x4(%ebp),%ebx
   30ea9:	c9                   	leave  
   30eaa:	c3                   	ret    

00030eab <read_byte>:
   30eab:	55                   	push   %ebp
   30eac:	89 e5                	mov    %esp,%ebp
   30eae:	83 ec 18             	sub    $0x18,%esp
   30eb1:	e8 7d f3 ff ff       	call   30233 <__x86.get_pc_thunk.ax>
   30eb6:	05 4a b1 00 00       	add    $0xb14a,%eax
   30ebb:	8b 45 08             	mov    0x8(%ebp),%eax
   30ebe:	c1 e8 09             	shr    $0x9,%eax
   30ec1:	89 45 f4             	mov    %eax,-0xc(%ebp)
   30ec4:	83 ec 0c             	sub    $0xc,%esp
   30ec7:	ff 75 f4             	pushl  -0xc(%ebp)
   30eca:	e8 3a ff ff ff       	call   30e09 <cache_fetch>
   30ecf:	83 c4 10             	add    $0x10,%esp
   30ed2:	89 45 f0             	mov    %eax,-0x10(%ebp)
   30ed5:	8b 45 08             	mov    0x8(%ebp),%eax
   30ed8:	25 ff 01 00 00       	and    $0x1ff,%eax
   30edd:	89 c2                	mov    %eax,%edx
   30edf:	8b 45 f0             	mov    -0x10(%ebp),%eax
   30ee2:	8a 44 10 06          	mov    0x6(%eax,%edx,1),%al
   30ee6:	c9                   	leave  
   30ee7:	c3                   	ret    

00030ee8 <write_byte>:
   30ee8:	55                   	push   %ebp
   30ee9:	89 e5                	mov    %esp,%ebp
   30eeb:	83 ec 28             	sub    $0x28,%esp
   30eee:	e8 40 f3 ff ff       	call   30233 <__x86.get_pc_thunk.ax>
   30ef3:	05 0d b1 00 00       	add    $0xb10d,%eax
   30ef8:	8b 45 0c             	mov    0xc(%ebp),%eax
   30efb:	88 45 e4             	mov    %al,-0x1c(%ebp)
   30efe:	8b 45 08             	mov    0x8(%ebp),%eax
   30f01:	c1 e8 09             	shr    $0x9,%eax
   30f04:	89 45 f4             	mov    %eax,-0xc(%ebp)
   30f07:	83 ec 0c             	sub    $0xc,%esp
   30f0a:	ff 75 f4             	pushl  -0xc(%ebp)
   30f0d:	e8 f7 fe ff ff       	call   30e09 <cache_fetch>
   30f12:	83 c4 10             	add    $0x10,%esp
   30f15:	89 45 f0             	mov    %eax,-0x10(%ebp)
   30f18:	8b 45 08             	mov    0x8(%ebp),%eax
   30f1b:	25 ff 01 00 00       	and    $0x1ff,%eax
   30f20:	89 c1                	mov    %eax,%ecx
   30f22:	8b 45 f0             	mov    -0x10(%ebp),%eax
   30f25:	8a 55 e4             	mov    -0x1c(%ebp),%dl
   30f28:	88 54 08 06          	mov    %dl,0x6(%eax,%ecx,1)
   30f2c:	8b 45 f0             	mov    -0x10(%ebp),%eax
   30f2f:	c6 40 05 01          	movb   $0x1,0x5(%eax)
   30f33:	90                   	nop
   30f34:	c9                   	leave  
   30f35:	c3                   	ret    

00030f36 <__x86.get_pc_thunk.dx>:
   30f36:	8b 14 24             	mov    (%esp),%edx
   30f39:	c3                   	ret    

00030f3a <out_byte>:
   30f3a:	55                   	push   %ebp
   30f3b:	89 e5                	mov    %esp,%ebp
   30f3d:	83 ec 08             	sub    $0x8,%esp
   30f40:	e8 ee f2 ff ff       	call   30233 <__x86.get_pc_thunk.ax>
   30f45:	05 bb b0 00 00       	add    $0xb0bb,%eax
   30f4a:	8b 45 08             	mov    0x8(%ebp),%eax
   30f4d:	8b 55 0c             	mov    0xc(%ebp),%edx
   30f50:	66 89 45 fc          	mov    %ax,-0x4(%ebp)
   30f54:	88 55 f8             	mov    %dl,-0x8(%ebp)
   30f57:	8a 45 f8             	mov    -0x8(%ebp),%al
   30f5a:	8b 55 fc             	mov    -0x4(%ebp),%edx
   30f5d:	ee                   	out    %al,(%dx)
   30f5e:	90                   	nop
   30f5f:	c9                   	leave  
   30f60:	c3                   	ret    

00030f61 <init_i8259>:
   30f61:	55                   	push   %ebp
   30f62:	89 e5                	mov    %esp,%ebp
   30f64:	e8 ca f2 ff ff       	call   30233 <__x86.get_pc_thunk.ax>
   30f69:	05 97 b0 00 00       	add    $0xb097,%eax
   30f6e:	68 ff 00 00 00       	push   $0xff
   30f73:	6a 21                	push   $0x21
   30f75:	e8 c0 ff ff ff       	call   30f3a <out_byte>
   30f7a:	83 c4 08             	add    $0x8,%esp
   30f7d:	68 ff 00 00 00       	push   $0xff
   30f82:	68 a1 00 00 00       	push   $0xa1
   30f87:	e8 ae ff ff ff       	call   30f3a <out_byte>
   30f8c:	83 c4 08             	add    $0x8,%esp
   30f8f:	6a 11                	push   $0x11
   30f91:	6a 20                	push   $0x20
   30f93:	e8 a2 ff ff ff       	call   30f3a <out_byte>
   30f98:	83 c4 08             	add    $0x8,%esp
   30f9b:	6a 20                	push   $0x20
   30f9d:	6a 21                	push   $0x21
   30f9f:	e8 96 ff ff ff       	call   30f3a <out_byte>
   30fa4:	83 c4 08             	add    $0x8,%esp
   30fa7:	6a 04                	push   $0x4
   30fa9:	6a 21                	push   $0x21
   30fab:	e8 8a ff ff ff       	call   30f3a <out_byte>
   30fb0:	83 c4 08             	add    $0x8,%esp
   30fb3:	6a 03                	push   $0x3
   30fb5:	6a 21                	push   $0x21
   30fb7:	e8 7e ff ff ff       	call   30f3a <out_byte>
   30fbc:	83 c4 08             	add    $0x8,%esp
   30fbf:	6a 11                	push   $0x11
   30fc1:	68 a0 00 00 00       	push   $0xa0
   30fc6:	e8 6f ff ff ff       	call   30f3a <out_byte>
   30fcb:	83 c4 08             	add    $0x8,%esp
   30fce:	6a 28                	push   $0x28
   30fd0:	68 a1 00 00 00       	push   $0xa1
   30fd5:	e8 60 ff ff ff       	call   30f3a <out_byte>
   30fda:	83 c4 08             	add    $0x8,%esp
   30fdd:	6a 02                	push   $0x2
   30fdf:	68 a1 00 00 00       	push   $0xa1
   30fe4:	e8 51 ff ff ff       	call   30f3a <out_byte>
   30fe9:	83 c4 08             	add    $0x8,%esp
   30fec:	6a 03                	push   $0x3
   30fee:	68 a1 00 00 00       	push   $0xa1
   30ff3:	e8 42 ff ff ff       	call   30f3a <out_byte>
   30ff8:	83 c4 08             	add    $0x8,%esp
   30ffb:	6a 68                	push   $0x68
   30ffd:	6a 20                	push   $0x20
   30fff:	e8 36 ff ff ff       	call   30f3a <out_byte>
   31004:	83 c4 08             	add    $0x8,%esp
   31007:	6a 0a                	push   $0xa
   31009:	6a 20                	push   $0x20
   3100b:	e8 2a ff ff ff       	call   30f3a <out_byte>
   31010:	83 c4 08             	add    $0x8,%esp
   31013:	6a 68                	push   $0x68
   31015:	68 a0 00 00 00       	push   $0xa0
   3101a:	e8 1b ff ff ff       	call   30f3a <out_byte>
   3101f:	83 c4 08             	add    $0x8,%esp
   31022:	6a 0a                	push   $0xa
   31024:	68 a0 00 00 00       	push   $0xa0
   31029:	e8 0c ff ff ff       	call   30f3a <out_byte>
   3102e:	83 c4 08             	add    $0x8,%esp
   31031:	90                   	nop
   31032:	c9                   	leave  
   31033:	c3                   	ret    

00031034 <add_irq_handle>:
   31034:	55                   	push   %ebp
   31035:	89 e5                	mov    %esp,%ebp
   31037:	53                   	push   %ebx
   31038:	83 ec 14             	sub    $0x14,%esp
   3103b:	e8 f7 f1 ff ff       	call   30237 <__x86.get_pc_thunk.bx>
   31040:	81 c3 c0 af 00 00    	add    $0xafc0,%ebx
   31046:	83 7d 08 0f          	cmpl   $0xf,0x8(%ebp)
   3104a:	7e 2f                	jle    3107b <add_irq_handle+0x47>
   3104c:	83 ec 0c             	sub    $0xc,%esp
   3104f:	8d 83 78 c9 ff ff    	lea    -0x3688(%ebx),%eax
   31055:	50                   	push   %eax
   31056:	8d 83 64 cb ff ff    	lea    -0x349c(%ebx),%eax
   3105c:	50                   	push   %eax
   3105d:	6a 16                	push   $0x16
   3105f:	8d 83 8b c9 ff ff    	lea    -0x3675(%ebx),%eax
   31065:	50                   	push   %eax
   31066:	8d 83 a0 c9 ff ff    	lea    -0x3660(%ebx),%eax
   3106c:	50                   	push   %eax
   3106d:	e8 ee 08 00 00       	call   31960 <printk>
   31072:	83 c4 20             	add    $0x20,%esp
   31075:	b8 01 00 00 00       	mov    $0x1,%eax
   3107a:	82 8b 83 60 15 01 00 	orb    $0x0,0x1156083(%ebx)
   31081:	83 f8 20             	cmp    $0x20,%eax
   31084:	7e 2f                	jle    310b5 <add_irq_handle+0x81>
   31086:	83 ec 0c             	sub    $0xc,%esp
   31089:	8d 83 ea c9 ff ff    	lea    -0x3616(%ebx),%eax
   3108f:	50                   	push   %eax
   31090:	8d 83 64 cb ff ff    	lea    -0x349c(%ebx),%eax
   31096:	50                   	push   %eax
   31097:	6a 17                	push   $0x17
   31099:	8d 83 8b c9 ff ff    	lea    -0x3675(%ebx),%eax
   3109f:	50                   	push   %eax
   310a0:	8d 83 a0 c9 ff ff    	lea    -0x3660(%ebx),%eax
   310a6:	50                   	push   %eax
   310a7:	e8 b4 08 00 00       	call   31960 <printk>
   310ac:	83 c4 20             	add    $0x20,%esp
   310af:	b8 01 00 00 00       	mov    $0x1,%eax
   310b4:	82 8b 83 60 15 01 00 	orb    $0x0,0x1156083(%ebx)
   310bb:	8d 50 01             	lea    0x1(%eax),%edx
   310be:	89 93 60 15 01 00    	mov    %edx,0x11560(%ebx)
   310c4:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
   310cb:	8d 83 20 14 01 00    	lea    0x11420(%ebx),%eax
   310d1:	01 d0                	add    %edx,%eax
   310d3:	89 45 f4             	mov    %eax,-0xc(%ebp)
   310d6:	8b 45 f4             	mov    -0xc(%ebp),%eax
   310d9:	8b 55 0c             	mov    0xc(%ebp),%edx
   310dc:	89 10                	mov    %edx,(%eax)
   310de:	8b 45 08             	mov    0x8(%ebp),%eax
   310e1:	8b 94 83 20 15 01 00 	mov    0x11520(%ebx,%eax,4),%edx
   310e8:	8b 45 f4             	mov    -0xc(%ebp),%eax
   310eb:	89 50 04             	mov    %edx,0x4(%eax)
   310ee:	8b 45 08             	mov    0x8(%ebp),%eax
   310f1:	8b 55 f4             	mov    -0xc(%ebp),%edx
   310f4:	89 94 83 20 15 01 00 	mov    %edx,0x11520(%ebx,%eax,4)
   310fb:	90                   	nop
   310fc:	8b 5d fc             	mov    -0x4(%ebp),%ebx
   310ff:	c9                   	leave  
   31100:	c3                   	ret    

00031101 <irq_handle>:
   31101:	55                   	push   %ebp
   31102:	89 e5                	mov    %esp,%ebp
   31104:	53                   	push   %ebx
   31105:	83 ec 14             	sub    $0x14,%esp
   31108:	e8 2a f1 ff ff       	call   30237 <__x86.get_pc_thunk.bx>
   3110d:	81 c3 f3 ae 00 00    	add    $0xaef3,%ebx
   31113:	8b 45 08             	mov    0x8(%ebp),%eax
   31116:	8b 40 20             	mov    0x20(%eax),%eax
   31119:	89 45 f0             	mov    %eax,-0x10(%ebp)
   3111c:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
   31120:	79 2a                	jns    3114c <irq_handle+0x4b>
   31122:	8d 83 74 cb ff ff    	lea    -0x348c(%ebx),%eax
   31128:	50                   	push   %eax
   31129:	6a 24                	push   $0x24
   3112b:	8d 83 8b c9 ff ff    	lea    -0x3675(%ebx),%eax
   31131:	50                   	push   %eax
   31132:	8d 83 08 ca ff ff    	lea    -0x35f8(%ebx),%eax
   31138:	50                   	push   %eax
   31139:	e8 22 08 00 00       	call   31960 <printk>
   3113e:	83 c4 10             	add    $0x10,%esp
   31141:	b8 01 00 00 00       	mov    $0x1,%eax
   31146:	82 e9 f9             	sub    $0xf9,%cl
   31149:	00 00                	add    %al,(%eax)
   3114b:	00 81 7d f0 80 00    	add    %al,0x80f07d(%ecx)
   31151:	00 00                	add    %al,(%eax)
   31153:	75 13                	jne    31168 <irq_handle+0x67>
   31155:	83 ec 0c             	sub    $0xc,%esp
   31158:	ff 75 08             	pushl  0x8(%ebp)
   3115b:	e8 3e 06 00 00       	call   3179e <do_syscall>
   31160:	83 c4 10             	add    $0x10,%esp
   31163:	e9 dd 00 00 00       	jmp    31245 <irq_handle+0x144>
   31168:	81 7d f0 e7 03 00 00 	cmpl   $0x3e7,-0x10(%ebp)
   3116f:	7f 37                	jg     311a8 <irq_handle+0xa7>
   31171:	8b 45 08             	mov    0x8(%ebp),%eax
   31174:	8b 40 28             	mov    0x28(%eax),%eax
   31177:	83 ec 08             	sub    $0x8,%esp
   3117a:	50                   	push   %eax
   3117b:	ff 75 f0             	pushl  -0x10(%ebp)
   3117e:	8d 83 74 cb ff ff    	lea    -0x348c(%ebx),%eax
   31184:	50                   	push   %eax
   31185:	6a 28                	push   $0x28
   31187:	8d 83 8b c9 ff ff    	lea    -0x3675(%ebx),%eax
   3118d:	50                   	push   %eax
   3118e:	8d 83 54 ca ff ff    	lea    -0x35ac(%ebx),%eax
   31194:	50                   	push   %eax
   31195:	e8 c6 07 00 00       	call   31960 <printk>
   3119a:	83 c4 20             	add    $0x20,%esp
   3119d:	b8 01 00 00 00       	mov    $0x1,%eax
   311a2:	82 e9 9d             	sub    $0x9d,%cl
   311a5:	00 00                	add    %al,(%eax)
   311a7:	00 81 7d f0 e7 03    	add    %al,0x3e7f07d(%ecx)
   311ad:	00 00                	add    %al,(%eax)
   311af:	0f 8e 90 00 00 00    	jle    31245 <irq_handle+0x144>
   311b5:	8b 45 f0             	mov    -0x10(%ebp),%eax
   311b8:	2d e8 03 00 00       	sub    $0x3e8,%eax
   311bd:	89 45 ec             	mov    %eax,-0x14(%ebp)
   311c0:	83 7d ec 0f          	cmpl   $0xf,-0x14(%ebp)
   311c4:	7e 2f                	jle    311f5 <irq_handle+0xf4>
   311c6:	83 ec 0c             	sub    $0xc,%esp
   311c9:	8d 83 ae ca ff ff    	lea    -0x3552(%ebx),%eax
   311cf:	50                   	push   %eax
   311d0:	8d 83 74 cb ff ff    	lea    -0x348c(%ebx),%eax
   311d6:	50                   	push   %eax
   311d7:	6a 2b                	push   $0x2b
   311d9:	8d 83 8b c9 ff ff    	lea    -0x3675(%ebx),%eax
   311df:	50                   	push   %eax
   311e0:	8d 83 a0 c9 ff ff    	lea    -0x3660(%ebx),%eax
   311e6:	50                   	push   %eax
   311e7:	e8 74 07 00 00       	call   31960 <printk>
   311ec:	83 c4 20             	add    $0x20,%esp
   311ef:	b8 01 00 00 00       	mov    $0x1,%eax
   311f4:	82 83 7d ec 00 75 25 	addb   $0x25,0x7500ec7d(%ebx)
   311fb:	8d 83 74 cb ff ff    	lea    -0x348c(%ebx),%eax
   31201:	50                   	push   %eax
   31202:	6a 2c                	push   $0x2c
   31204:	8d 83 8b c9 ff ff    	lea    -0x3675(%ebx),%eax
   3120a:	50                   	push   %eax
   3120b:	8d 83 c4 ca ff ff    	lea    -0x353c(%ebx),%eax
   31211:	50                   	push   %eax
   31212:	e8 49 07 00 00       	call   31960 <printk>
   31217:	83 c4 10             	add    $0x10,%esp
   3121a:	b8 01 00 00 00       	mov    $0x1,%eax
   3121f:	82 8b 45 ec 8b 84 83 	orb    $0x83,-0x7b7413bb(%ebx)
   31226:	20 15 01 00 89 45    	and    %dl,0x45890001
   3122c:	f4                   	hlt    
   3122d:	eb 10                	jmp    3123f <irq_handle+0x13e>
   3122f:	8b 45 f4             	mov    -0xc(%ebp),%eax
   31232:	8b 00                	mov    (%eax),%eax
   31234:	ff d0                	call   *%eax
   31236:	8b 45 f4             	mov    -0xc(%ebp),%eax
   31239:	8b 40 04             	mov    0x4(%eax),%eax
   3123c:	89 45 f4             	mov    %eax,-0xc(%ebp)
   3123f:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
   31243:	75 ea                	jne    3122f <irq_handle+0x12e>
   31245:	90                   	nop
   31246:	8b 5d fc             	mov    -0x4(%ebp),%ebx
   31249:	c9                   	leave  
   3124a:	c3                   	ret    

0003124b <write_idtr>:
   3124b:	55                   	push   %ebp
   3124c:	89 e5                	mov    %esp,%ebp
   3124e:	e8 e0 ef ff ff       	call   30233 <__x86.get_pc_thunk.ax>
   31253:	05 ad ad 00 00       	add    $0xadad,%eax
   31258:	8b 55 0c             	mov    0xc(%ebp),%edx
   3125b:	4a                   	dec    %edx
   3125c:	66 89 90 80 1d 01 00 	mov    %dx,0x11d80(%eax)
   31263:	8b 55 08             	mov    0x8(%ebp),%edx
   31266:	66 89 90 82 1d 01 00 	mov    %dx,0x11d82(%eax)
   3126d:	8b 55 08             	mov    0x8(%ebp),%edx
   31270:	c1 ea 10             	shr    $0x10,%edx
   31273:	66 89 90 84 1d 01 00 	mov    %dx,0x11d84(%eax)
   3127a:	8d 80 80 1d 01 00    	lea    0x11d80(%eax),%eax
   31280:	0f 01 18             	lidtl  (%eax)
   31283:	90                   	nop
   31284:	5d                   	pop    %ebp
   31285:	c3                   	ret    

00031286 <sti>:
   31286:	55                   	push   %ebp
   31287:	89 e5                	mov    %esp,%ebp
   31289:	e8 a5 ef ff ff       	call   30233 <__x86.get_pc_thunk.ax>
   3128e:	05 72 ad 00 00       	add    $0xad72,%eax
   31293:	fb                   	sti    
   31294:	90                   	nop
   31295:	5d                   	pop    %ebp
   31296:	c3                   	ret    

00031297 <set_intr>:
   31297:	55                   	push   %ebp
   31298:	89 e5                	mov    %esp,%ebp
   3129a:	e8 94 ef ff ff       	call   30233 <__x86.get_pc_thunk.ax>
   3129f:	05 61 ad 00 00       	add    $0xad61,%eax
   312a4:	8b 45 10             	mov    0x10(%ebp),%eax
   312a7:	8b 55 08             	mov    0x8(%ebp),%edx
   312aa:	66 89 02             	mov    %ax,(%edx)
   312ad:	8b 45 0c             	mov    0xc(%ebp),%eax
   312b0:	8b 55 08             	mov    0x8(%ebp),%edx
   312b3:	66 89 42 02          	mov    %ax,0x2(%edx)
   312b7:	8b 45 08             	mov    0x8(%ebp),%eax
   312ba:	c6 40 04 00          	movb   $0x0,0x4(%eax)
   312be:	8b 45 08             	mov    0x8(%ebp),%eax
   312c1:	8a 50 05             	mov    0x5(%eax),%dl
   312c4:	83 e2 f0             	and    $0xfffffff0,%edx
   312c7:	83 ca 0e             	or     $0xe,%edx
   312ca:	88 50 05             	mov    %dl,0x5(%eax)
   312cd:	8b 45 08             	mov    0x8(%ebp),%eax
   312d0:	8a 50 05             	mov    0x5(%eax),%dl
   312d3:	83 e2 ef             	and    $0xffffffef,%edx
   312d6:	88 50 05             	mov    %dl,0x5(%eax)
   312d9:	8b 45 14             	mov    0x14(%ebp),%eax
   312dc:	83 e0 03             	and    $0x3,%eax
   312df:	88 c2                	mov    %al,%dl
   312e1:	8b 45 08             	mov    0x8(%ebp),%eax
   312e4:	83 e2 03             	and    $0x3,%edx
   312e7:	88 d1                	mov    %dl,%cl
   312e9:	c1 e1 05             	shl    $0x5,%ecx
   312ec:	8a 50 05             	mov    0x5(%eax),%dl
   312ef:	83 e2 9f             	and    $0xffffff9f,%edx
   312f2:	09 ca                	or     %ecx,%edx
   312f4:	88 50 05             	mov    %dl,0x5(%eax)
   312f7:	8b 45 08             	mov    0x8(%ebp),%eax
   312fa:	8a 50 05             	mov    0x5(%eax),%dl
   312fd:	83 ca 80             	or     $0xffffff80,%edx
   31300:	88 50 05             	mov    %dl,0x5(%eax)
   31303:	8b 45 10             	mov    0x10(%ebp),%eax
   31306:	c1 e8 10             	shr    $0x10,%eax
   31309:	8b 55 08             	mov    0x8(%ebp),%edx
   3130c:	66 89 42 06          	mov    %ax,0x6(%edx)
   31310:	90                   	nop
   31311:	5d                   	pop    %ebp
   31312:	c3                   	ret    

00031313 <set_trap>:
   31313:	55                   	push   %ebp
   31314:	89 e5                	mov    %esp,%ebp
   31316:	e8 18 ef ff ff       	call   30233 <__x86.get_pc_thunk.ax>
   3131b:	05 e5 ac 00 00       	add    $0xace5,%eax
   31320:	8b 45 10             	mov    0x10(%ebp),%eax
   31323:	8b 55 08             	mov    0x8(%ebp),%edx
   31326:	66 89 02             	mov    %ax,(%edx)
   31329:	8b 45 0c             	mov    0xc(%ebp),%eax
   3132c:	8b 55 08             	mov    0x8(%ebp),%edx
   3132f:	66 89 42 02          	mov    %ax,0x2(%edx)
   31333:	8b 45 08             	mov    0x8(%ebp),%eax
   31336:	c6 40 04 00          	movb   $0x0,0x4(%eax)
   3133a:	8b 45 08             	mov    0x8(%ebp),%eax
   3133d:	8a 50 05             	mov    0x5(%eax),%dl
   31340:	83 ca 0f             	or     $0xf,%edx
   31343:	88 50 05             	mov    %dl,0x5(%eax)
   31346:	8b 45 08             	mov    0x8(%ebp),%eax
   31349:	8a 50 05             	mov    0x5(%eax),%dl
   3134c:	83 e2 ef             	and    $0xffffffef,%edx
   3134f:	88 50 05             	mov    %dl,0x5(%eax)
   31352:	8b 45 14             	mov    0x14(%ebp),%eax
   31355:	83 e0 03             	and    $0x3,%eax
   31358:	88 c2                	mov    %al,%dl
   3135a:	8b 45 08             	mov    0x8(%ebp),%eax
   3135d:	83 e2 03             	and    $0x3,%edx
   31360:	88 d1                	mov    %dl,%cl
   31362:	c1 e1 05             	shl    $0x5,%ecx
   31365:	8a 50 05             	mov    0x5(%eax),%dl
   31368:	83 e2 9f             	and    $0xffffff9f,%edx
   3136b:	09 ca                	or     %ecx,%edx
   3136d:	88 50 05             	mov    %dl,0x5(%eax)
   31370:	8b 45 08             	mov    0x8(%ebp),%eax
   31373:	8a 50 05             	mov    0x5(%eax),%dl
   31376:	83 ca 80             	or     $0xffffff80,%edx
   31379:	88 50 05             	mov    %dl,0x5(%eax)
   3137c:	8b 45 10             	mov    0x10(%ebp),%eax
   3137f:	c1 e8 10             	shr    $0x10,%eax
   31382:	8b 55 08             	mov    0x8(%ebp),%edx
   31385:	66 89 42 06          	mov    %ax,0x6(%edx)
   31389:	90                   	nop
   3138a:	5d                   	pop    %ebp
   3138b:	c3                   	ret    

0003138c <init_idt>:
   3138c:	55                   	push   %ebp
   3138d:	89 e5                	mov    %esp,%ebp
   3138f:	53                   	push   %ebx
   31390:	83 ec 10             	sub    $0x10,%esp
   31393:	e8 9f ee ff ff       	call   30237 <__x86.get_pc_thunk.bx>
   31398:	81 c3 68 ac 00 00    	add    $0xac68,%ebx
   3139e:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
   313a5:	eb 2b                	jmp    313d2 <init_idt+0x46>
   313a7:	c7 c0 80 00 03 00    	mov    $0x30080,%eax
   313ad:	89 c2                	mov    %eax,%edx
   313af:	8b 45 f8             	mov    -0x8(%ebp),%eax
   313b2:	8d 0c c5 00 00 00 00 	lea    0x0(,%eax,8),%ecx
   313b9:	8d 83 80 15 01 00    	lea    0x11580(%ebx),%eax
   313bf:	01 c8                	add    %ecx,%eax
   313c1:	6a 00                	push   $0x0
   313c3:	52                   	push   %edx
   313c4:	6a 08                	push   $0x8
   313c6:	50                   	push   %eax
   313c7:	e8 47 ff ff ff       	call   31313 <set_trap>
   313cc:	83 c4 10             	add    $0x10,%esp
   313cf:	ff 45 f8             	incl   -0x8(%ebp)
   313d2:	81 7d f8 ff 00 00 00 	cmpl   $0xff,-0x8(%ebp)
   313d9:	7e cc                	jle    313a7 <init_idt+0x1b>
   313db:	c7 c0 05 00 03 00    	mov    $0x30005,%eax
   313e1:	6a 00                	push   $0x0
   313e3:	50                   	push   %eax
   313e4:	6a 08                	push   $0x8
   313e6:	8d 83 80 15 01 00    	lea    0x11580(%ebx),%eax
   313ec:	50                   	push   %eax
   313ed:	e8 21 ff ff ff       	call   31313 <set_trap>
   313f2:	83 c4 10             	add    $0x10,%esp
   313f5:	c7 c0 0b 00 03 00    	mov    $0x3000b,%eax
   313fb:	89 c2                	mov    %eax,%edx
   313fd:	8d 83 88 15 01 00    	lea    0x11588(%ebx),%eax
   31403:	6a 00                	push   $0x0
   31405:	52                   	push   %edx
   31406:	6a 08                	push   $0x8
   31408:	50                   	push   %eax
   31409:	e8 05 ff ff ff       	call   31313 <set_trap>
   3140e:	83 c4 10             	add    $0x10,%esp
   31411:	c7 c0 11 00 03 00    	mov    $0x30011,%eax
   31417:	89 c2                	mov    %eax,%edx
   31419:	8d 83 90 15 01 00    	lea    0x11590(%ebx),%eax
   3141f:	6a 00                	push   $0x0
   31421:	52                   	push   %edx
   31422:	6a 08                	push   $0x8
   31424:	50                   	push   %eax
   31425:	e8 e9 fe ff ff       	call   31313 <set_trap>
   3142a:	83 c4 10             	add    $0x10,%esp
   3142d:	c7 c0 17 00 03 00    	mov    $0x30017,%eax
   31433:	89 c2                	mov    %eax,%edx
   31435:	8d 83 98 15 01 00    	lea    0x11598(%ebx),%eax
   3143b:	6a 00                	push   $0x0
   3143d:	52                   	push   %edx
   3143e:	6a 08                	push   $0x8
   31440:	50                   	push   %eax
   31441:	e8 cd fe ff ff       	call   31313 <set_trap>
   31446:	83 c4 10             	add    $0x10,%esp
   31449:	c7 c0 1d 00 03 00    	mov    $0x3001d,%eax
   3144f:	89 c2                	mov    %eax,%edx
   31451:	8d 83 a0 15 01 00    	lea    0x115a0(%ebx),%eax
   31457:	6a 00                	push   $0x0
   31459:	52                   	push   %edx
   3145a:	6a 08                	push   $0x8
   3145c:	50                   	push   %eax
   3145d:	e8 b1 fe ff ff       	call   31313 <set_trap>
   31462:	83 c4 10             	add    $0x10,%esp
   31465:	c7 c0 23 00 03 00    	mov    $0x30023,%eax
   3146b:	89 c2                	mov    %eax,%edx
   3146d:	8d 83 a8 15 01 00    	lea    0x115a8(%ebx),%eax
   31473:	6a 00                	push   $0x0
   31475:	52                   	push   %edx
   31476:	6a 08                	push   $0x8
   31478:	50                   	push   %eax
   31479:	e8 95 fe ff ff       	call   31313 <set_trap>
   3147e:	83 c4 10             	add    $0x10,%esp
   31481:	c7 c0 29 00 03 00    	mov    $0x30029,%eax
   31487:	89 c2                	mov    %eax,%edx
   31489:	8d 83 b0 15 01 00    	lea    0x115b0(%ebx),%eax
   3148f:	6a 00                	push   $0x0
   31491:	52                   	push   %edx
   31492:	6a 08                	push   $0x8
   31494:	50                   	push   %eax
   31495:	e8 79 fe ff ff       	call   31313 <set_trap>
   3149a:	83 c4 10             	add    $0x10,%esp
   3149d:	c7 c0 2f 00 03 00    	mov    $0x3002f,%eax
   314a3:	89 c2                	mov    %eax,%edx
   314a5:	8d 83 b8 15 01 00    	lea    0x115b8(%ebx),%eax
   314ab:	6a 00                	push   $0x0
   314ad:	52                   	push   %edx
   314ae:	6a 08                	push   $0x8
   314b0:	50                   	push   %eax
   314b1:	e8 5d fe ff ff       	call   31313 <set_trap>
   314b6:	83 c4 10             	add    $0x10,%esp
   314b9:	c7 c0 35 00 03 00    	mov    $0x30035,%eax
   314bf:	89 c2                	mov    %eax,%edx
   314c1:	8d 83 c0 15 01 00    	lea    0x115c0(%ebx),%eax
   314c7:	6a 00                	push   $0x0
   314c9:	52                   	push   %edx
   314ca:	6a 08                	push   $0x8
   314cc:	50                   	push   %eax
   314cd:	e8 41 fe ff ff       	call   31313 <set_trap>
   314d2:	83 c4 10             	add    $0x10,%esp
   314d5:	c7 c0 39 00 03 00    	mov    $0x30039,%eax
   314db:	89 c2                	mov    %eax,%edx
   314dd:	8d 83 c8 15 01 00    	lea    0x115c8(%ebx),%eax
   314e3:	6a 00                	push   $0x0
   314e5:	52                   	push   %edx
   314e6:	6a 08                	push   $0x8
   314e8:	50                   	push   %eax
   314e9:	e8 25 fe ff ff       	call   31313 <set_trap>
   314ee:	83 c4 10             	add    $0x10,%esp
   314f1:	c7 c0 3f 00 03 00    	mov    $0x3003f,%eax
   314f7:	89 c2                	mov    %eax,%edx
   314f9:	8d 83 d0 15 01 00    	lea    0x115d0(%ebx),%eax
   314ff:	6a 00                	push   $0x0
   31501:	52                   	push   %edx
   31502:	6a 08                	push   $0x8
   31504:	50                   	push   %eax
   31505:	e8 09 fe ff ff       	call   31313 <set_trap>
   3150a:	83 c4 10             	add    $0x10,%esp
   3150d:	c7 c0 43 00 03 00    	mov    $0x30043,%eax
   31513:	89 c2                	mov    %eax,%edx
   31515:	8d 83 d8 15 01 00    	lea    0x115d8(%ebx),%eax
   3151b:	6a 00                	push   $0x0
   3151d:	52                   	push   %edx
   3151e:	6a 08                	push   $0x8
   31520:	50                   	push   %eax
   31521:	e8 ed fd ff ff       	call   31313 <set_trap>
   31526:	83 c4 10             	add    $0x10,%esp
   31529:	c7 c0 47 00 03 00    	mov    $0x30047,%eax
   3152f:	89 c2                	mov    %eax,%edx
   31531:	8d 83 e0 15 01 00    	lea    0x115e0(%ebx),%eax
   31537:	6a 00                	push   $0x0
   31539:	52                   	push   %edx
   3153a:	6a 08                	push   $0x8
   3153c:	50                   	push   %eax
   3153d:	e8 d1 fd ff ff       	call   31313 <set_trap>
   31542:	83 c4 10             	add    $0x10,%esp
   31545:	c7 c0 4b 00 03 00    	mov    $0x3004b,%eax
   3154b:	89 c2                	mov    %eax,%edx
   3154d:	8d 83 e8 15 01 00    	lea    0x115e8(%ebx),%eax
   31553:	6a 00                	push   $0x0
   31555:	52                   	push   %edx
   31556:	6a 08                	push   $0x8
   31558:	50                   	push   %eax
   31559:	e8 b5 fd ff ff       	call   31313 <set_trap>
   3155e:	83 c4 10             	add    $0x10,%esp
   31561:	c7 c0 4f 00 03 00    	mov    $0x3004f,%eax
   31567:	89 c2                	mov    %eax,%edx
   31569:	8d 83 f0 15 01 00    	lea    0x115f0(%ebx),%eax
   3156f:	6a 00                	push   $0x0
   31571:	52                   	push   %edx
   31572:	6a 08                	push   $0x8
   31574:	50                   	push   %eax
   31575:	e8 99 fd ff ff       	call   31313 <set_trap>
   3157a:	83 c4 10             	add    $0x10,%esp
   3157d:	c7 c0 53 00 03 00    	mov    $0x30053,%eax
   31583:	89 c2                	mov    %eax,%edx
   31585:	8d 83 80 19 01 00    	lea    0x11980(%ebx),%eax
   3158b:	6a 03                	push   $0x3
   3158d:	52                   	push   %edx
   3158e:	6a 08                	push   $0x8
   31590:	50                   	push   %eax
   31591:	e8 7d fd ff ff       	call   31313 <set_trap>
   31596:	83 c4 10             	add    $0x10,%esp
   31599:	c7 c0 5c 00 03 00    	mov    $0x3005c,%eax
   3159f:	89 c2                	mov    %eax,%edx
   315a1:	8d 83 80 16 01 00    	lea    0x11680(%ebx),%eax
   315a7:	6a 00                	push   $0x0
   315a9:	52                   	push   %edx
   315aa:	6a 08                	push   $0x8
   315ac:	50                   	push   %eax
   315ad:	e8 e5 fc ff ff       	call   31297 <set_intr>
   315b2:	83 c4 10             	add    $0x10,%esp
   315b5:	c7 c0 65 00 03 00    	mov    $0x30065,%eax
   315bb:	89 c2                	mov    %eax,%edx
   315bd:	8d 83 88 16 01 00    	lea    0x11688(%ebx),%eax
   315c3:	6a 00                	push   $0x0
   315c5:	52                   	push   %edx
   315c6:	6a 08                	push   $0x8
   315c8:	50                   	push   %eax
   315c9:	e8 c9 fc ff ff       	call   31297 <set_intr>
   315ce:	83 c4 10             	add    $0x10,%esp
   315d1:	c7 c0 6e 00 03 00    	mov    $0x3006e,%eax
   315d7:	89 c2                	mov    %eax,%edx
   315d9:	8d 83 90 16 01 00    	lea    0x11690(%ebx),%eax
   315df:	6a 00                	push   $0x0
   315e1:	52                   	push   %edx
   315e2:	6a 08                	push   $0x8
   315e4:	50                   	push   %eax
   315e5:	e8 ad fc ff ff       	call   31297 <set_intr>
   315ea:	83 c4 10             	add    $0x10,%esp
   315ed:	c7 c0 77 00 03 00    	mov    $0x30077,%eax
   315f3:	89 c2                	mov    %eax,%edx
   315f5:	8d 83 f0 16 01 00    	lea    0x116f0(%ebx),%eax
   315fb:	6a 00                	push   $0x0
   315fd:	52                   	push   %edx
   315fe:	6a 08                	push   $0x8
   31600:	50                   	push   %eax
   31601:	e8 91 fc ff ff       	call   31297 <set_intr>
   31606:	83 c4 10             	add    $0x10,%esp
   31609:	68 00 08 00 00       	push   $0x800
   3160e:	8d 83 80 15 01 00    	lea    0x11580(%ebx),%eax
   31614:	50                   	push   %eax
   31615:	e8 31 fc ff ff       	call   3124b <write_idtr>
   3161a:	83 c4 08             	add    $0x8,%esp
   3161d:	e8 64 fc ff ff       	call   31286 <sti>
   31622:	90                   	nop
   31623:	8b 5d fc             	mov    -0x4(%ebp),%ebx
   31626:	c9                   	leave  
   31627:	c3                   	ret    

00031628 <sti>:
   31628:	55                   	push   %ebp
   31629:	89 e5                	mov    %esp,%ebp
   3162b:	e8 03 ec ff ff       	call   30233 <__x86.get_pc_thunk.ax>
   31630:	05 d0 a9 00 00       	add    $0xa9d0,%eax
   31635:	fb                   	sti    
   31636:	90                   	nop
   31637:	5d                   	pop    %ebp
   31638:	c3                   	ret    

00031639 <cli>:
   31639:	55                   	push   %ebp
   3163a:	89 e5                	mov    %esp,%ebp
   3163c:	e8 f2 eb ff ff       	call   30233 <__x86.get_pc_thunk.ax>
   31641:	05 bf a9 00 00       	add    $0xa9bf,%eax
   31646:	fa                   	cli    
   31647:	90                   	nop
   31648:	5d                   	pop    %ebp
   31649:	c3                   	ret    

0003164a <sys_brk>:
   3164a:	55                   	push   %ebp
   3164b:	89 e5                	mov    %esp,%ebp
   3164d:	e8 e1 eb ff ff       	call   30233 <__x86.get_pc_thunk.ax>
   31652:	05 ae a9 00 00       	add    $0xa9ae,%eax
   31657:	8b 45 08             	mov    0x8(%ebp),%eax
   3165a:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
   31661:	90                   	nop
   31662:	5d                   	pop    %ebp
   31663:	c3                   	ret    

00031664 <sys_open>:
   31664:	55                   	push   %ebp
   31665:	89 e5                	mov    %esp,%ebp
   31667:	53                   	push   %ebx
   31668:	83 ec 04             	sub    $0x4,%esp
   3166b:	e8 c3 eb ff ff       	call   30233 <__x86.get_pc_thunk.ax>
   31670:	05 90 a9 00 00       	add    $0xa990,%eax
   31675:	8b 55 08             	mov    0x8(%ebp),%edx
   31678:	8b 52 18             	mov    0x18(%edx),%edx
   3167b:	89 d1                	mov    %edx,%ecx
   3167d:	8b 55 08             	mov    0x8(%ebp),%edx
   31680:	8b 52 10             	mov    0x10(%edx),%edx
   31683:	83 ec 08             	sub    $0x8,%esp
   31686:	51                   	push   %ecx
   31687:	52                   	push   %edx
   31688:	89 c3                	mov    %eax,%ebx
   3168a:	e8 06 ea ff ff       	call   30095 <fs_open>
   3168f:	83 c4 10             	add    $0x10,%esp
   31692:	89 c2                	mov    %eax,%edx
   31694:	8b 45 08             	mov    0x8(%ebp),%eax
   31697:	89 50 1c             	mov    %edx,0x1c(%eax)
   3169a:	90                   	nop
   3169b:	8b 5d fc             	mov    -0x4(%ebp),%ebx
   3169e:	c9                   	leave  
   3169f:	c3                   	ret    

000316a0 <sys_read>:
   316a0:	55                   	push   %ebp
   316a1:	89 e5                	mov    %esp,%ebp
   316a3:	53                   	push   %ebx
   316a4:	83 ec 04             	sub    $0x4,%esp
   316a7:	e8 87 eb ff ff       	call   30233 <__x86.get_pc_thunk.ax>
   316ac:	05 54 a9 00 00       	add    $0xa954,%eax
   316b1:	8b 55 08             	mov    0x8(%ebp),%edx
   316b4:	8b 52 14             	mov    0x14(%edx),%edx
   316b7:	8b 4d 08             	mov    0x8(%ebp),%ecx
   316ba:	8b 49 18             	mov    0x18(%ecx),%ecx
   316bd:	89 cb                	mov    %ecx,%ebx
   316bf:	8b 4d 08             	mov    0x8(%ebp),%ecx
   316c2:	8b 49 10             	mov    0x10(%ecx),%ecx
   316c5:	83 ec 04             	sub    $0x4,%esp
   316c8:	52                   	push   %edx
   316c9:	53                   	push   %ebx
   316ca:	51                   	push   %ecx
   316cb:	89 c3                	mov    %eax,%ebx
   316cd:	e8 05 ea ff ff       	call   300d7 <fs_read>
   316d2:	83 c4 10             	add    $0x10,%esp
   316d5:	89 c2                	mov    %eax,%edx
   316d7:	8b 45 08             	mov    0x8(%ebp),%eax
   316da:	89 50 1c             	mov    %edx,0x1c(%eax)
   316dd:	90                   	nop
   316de:	8b 5d fc             	mov    -0x4(%ebp),%ebx
   316e1:	c9                   	leave  
   316e2:	c3                   	ret    

000316e3 <sys_write>:
   316e3:	55                   	push   %ebp
   316e4:	89 e5                	mov    %esp,%ebp
   316e6:	53                   	push   %ebx
   316e7:	83 ec 04             	sub    $0x4,%esp
   316ea:	e8 44 eb ff ff       	call   30233 <__x86.get_pc_thunk.ax>
   316ef:	05 11 a9 00 00       	add    $0xa911,%eax
   316f4:	8b 55 08             	mov    0x8(%ebp),%edx
   316f7:	8b 52 14             	mov    0x14(%edx),%edx
   316fa:	8b 4d 08             	mov    0x8(%ebp),%ecx
   316fd:	8b 49 18             	mov    0x18(%ecx),%ecx
   31700:	89 cb                	mov    %ecx,%ebx
   31702:	8b 4d 08             	mov    0x8(%ebp),%ecx
   31705:	8b 49 10             	mov    0x10(%ecx),%ecx
   31708:	83 ec 04             	sub    $0x4,%esp
   3170b:	52                   	push   %edx
   3170c:	53                   	push   %ebx
   3170d:	51                   	push   %ecx
   3170e:	89 c3                	mov    %eax,%ebx
   31710:	e8 38 ea ff ff       	call   3014d <fs_write>
   31715:	83 c4 10             	add    $0x10,%esp
   31718:	89 c2                	mov    %eax,%edx
   3171a:	8b 45 08             	mov    0x8(%ebp),%eax
   3171d:	89 50 1c             	mov    %edx,0x1c(%eax)
   31720:	90                   	nop
   31721:	8b 5d fc             	mov    -0x4(%ebp),%ebx
   31724:	c9                   	leave  
   31725:	c3                   	ret    

00031726 <sys_lseek>:
   31726:	55                   	push   %ebp
   31727:	89 e5                	mov    %esp,%ebp
   31729:	53                   	push   %ebx
   3172a:	83 ec 04             	sub    $0x4,%esp
   3172d:	e8 01 eb ff ff       	call   30233 <__x86.get_pc_thunk.ax>
   31732:	05 ce a8 00 00       	add    $0xa8ce,%eax
   31737:	8b 55 08             	mov    0x8(%ebp),%edx
   3173a:	8b 52 14             	mov    0x14(%edx),%edx
   3173d:	89 d3                	mov    %edx,%ebx
   3173f:	8b 55 08             	mov    0x8(%ebp),%edx
   31742:	8b 52 18             	mov    0x18(%edx),%edx
   31745:	89 d1                	mov    %edx,%ecx
   31747:	8b 55 08             	mov    0x8(%ebp),%edx
   3174a:	8b 52 10             	mov    0x10(%edx),%edx
   3174d:	83 ec 04             	sub    $0x4,%esp
   31750:	53                   	push   %ebx
   31751:	51                   	push   %ecx
   31752:	52                   	push   %edx
   31753:	89 c3                	mov    %eax,%ebx
   31755:	e8 55 ea ff ff       	call   301af <fs_lseek>
   3175a:	83 c4 10             	add    $0x10,%esp
   3175d:	89 c2                	mov    %eax,%edx
   3175f:	8b 45 08             	mov    0x8(%ebp),%eax
   31762:	89 50 1c             	mov    %edx,0x1c(%eax)
   31765:	90                   	nop
   31766:	8b 5d fc             	mov    -0x4(%ebp),%ebx
   31769:	c9                   	leave  
   3176a:	c3                   	ret    

0003176b <sys_close>:
   3176b:	55                   	push   %ebp
   3176c:	89 e5                	mov    %esp,%ebp
   3176e:	53                   	push   %ebx
   3176f:	83 ec 04             	sub    $0x4,%esp
   31772:	e8 bc ea ff ff       	call   30233 <__x86.get_pc_thunk.ax>
   31777:	05 89 a8 00 00       	add    $0xa889,%eax
   3177c:	8b 55 08             	mov    0x8(%ebp),%edx
   3177f:	8b 52 10             	mov    0x10(%edx),%edx
   31782:	83 ec 0c             	sub    $0xc,%esp
   31785:	52                   	push   %edx
   31786:	89 c3                	mov    %eax,%ebx
   31788:	e8 64 ea ff ff       	call   301f1 <fs_close>
   3178d:	83 c4 10             	add    $0x10,%esp
   31790:	89 c2                	mov    %eax,%edx
   31792:	8b 45 08             	mov    0x8(%ebp),%eax
   31795:	89 50 1c             	mov    %edx,0x1c(%eax)
   31798:	90                   	nop
   31799:	8b 5d fc             	mov    -0x4(%ebp),%ebx
   3179c:	c9                   	leave  
   3179d:	c3                   	ret    

0003179e <do_syscall>:
   3179e:	55                   	push   %ebp
   3179f:	89 e5                	mov    %esp,%ebp
   317a1:	53                   	push   %ebx
   317a2:	83 ec 04             	sub    $0x4,%esp
   317a5:	e8 8d ea ff ff       	call   30237 <__x86.get_pc_thunk.bx>
   317aa:	81 c3 56 a8 00 00    	add    $0xa856,%ebx
   317b0:	8b 45 08             	mov    0x8(%ebp),%eax
   317b3:	8b 40 1c             	mov    0x1c(%eax),%eax
   317b6:	83 f8 2d             	cmp    $0x2d,%eax
   317b9:	0f 87 98 00 00 00    	ja     31857 <.L10>
   317bf:	c1 e0 02             	shl    $0x2,%eax
   317c2:	8b 84 18 f0 cb ff ff 	mov    -0x3410(%eax,%ebx,1),%eax
   317c9:	01 d8                	add    %ebx,%eax
   317cb:	ff e0                	jmp    *%eax

000317cd <.L11>:
   317cd:	e8 67 fe ff ff       	call   31639 <cli>
   317d2:	8b 45 08             	mov    0x8(%ebp),%eax
   317d5:	8b 40 18             	mov    0x18(%eax),%eax
   317d8:	89 c2                	mov    %eax,%edx
   317da:	8b 45 08             	mov    0x8(%ebp),%eax
   317dd:	8b 40 10             	mov    0x10(%eax),%eax
   317e0:	83 ec 08             	sub    $0x8,%esp
   317e3:	52                   	push   %edx
   317e4:	50                   	push   %eax
   317e5:	e8 4a f8 ff ff       	call   31034 <add_irq_handle>
   317ea:	83 c4 10             	add    $0x10,%esp
   317ed:	e8 36 fe ff ff       	call   31628 <sti>
   317f2:	e9 8f 00 00 00       	jmp    31886 <.L10+0x2f>

000317f7 <.L18>:
   317f7:	83 ec 0c             	sub    $0xc,%esp
   317fa:	ff 75 08             	pushl  0x8(%ebp)
   317fd:	e8 48 fe ff ff       	call   3164a <sys_brk>
   31802:	83 c4 10             	add    $0x10,%esp
   31805:	eb 7f                	jmp    31886 <.L10+0x2f>

00031807 <.L15>:
   31807:	83 ec 0c             	sub    $0xc,%esp
   3180a:	ff 75 08             	pushl  0x8(%ebp)
   3180d:	e8 52 fe ff ff       	call   31664 <sys_open>
   31812:	83 c4 10             	add    $0x10,%esp
   31815:	eb 6f                	jmp    31886 <.L10+0x2f>

00031817 <.L13>:
   31817:	83 ec 0c             	sub    $0xc,%esp
   3181a:	ff 75 08             	pushl  0x8(%ebp)
   3181d:	e8 7e fe ff ff       	call   316a0 <sys_read>
   31822:	83 c4 10             	add    $0x10,%esp
   31825:	eb 5f                	jmp    31886 <.L10+0x2f>

00031827 <.L14>:
   31827:	83 ec 0c             	sub    $0xc,%esp
   3182a:	ff 75 08             	pushl  0x8(%ebp)
   3182d:	e8 b1 fe ff ff       	call   316e3 <sys_write>
   31832:	83 c4 10             	add    $0x10,%esp
   31835:	eb 4f                	jmp    31886 <.L10+0x2f>

00031837 <.L17>:
   31837:	83 ec 0c             	sub    $0xc,%esp
   3183a:	ff 75 08             	pushl  0x8(%ebp)
   3183d:	e8 e4 fe ff ff       	call   31726 <sys_lseek>
   31842:	83 c4 10             	add    $0x10,%esp
   31845:	eb 3f                	jmp    31886 <.L10+0x2f>

00031847 <.L16>:
   31847:	83 ec 0c             	sub    $0xc,%esp
   3184a:	ff 75 08             	pushl  0x8(%ebp)
   3184d:	e8 19 ff ff ff       	call   3176b <sys_close>
   31852:	83 c4 10             	add    $0x10,%esp
   31855:	eb 2f                	jmp    31886 <.L10+0x2f>

00031857 <.L10>:
   31857:	8b 45 08             	mov    0x8(%ebp),%eax
   3185a:	8b 40 1c             	mov    0x1c(%eax),%eax
   3185d:	83 ec 0c             	sub    $0xc,%esp
   31860:	50                   	push   %eax
   31861:	8d 83 a8 cc ff ff    	lea    -0x3358(%ebx),%eax
   31867:	50                   	push   %eax
   31868:	6a 35                	push   $0x35
   3186a:	8d 83 80 cb ff ff    	lea    -0x3480(%ebx),%eax
   31870:	50                   	push   %eax
   31871:	8d 83 9c cb ff ff    	lea    -0x3464(%ebx),%eax
   31877:	50                   	push   %eax
   31878:	e8 e3 00 00 00       	call   31960 <printk>
   3187d:	83 c4 20             	add    $0x20,%esp
   31880:	b8 01 00 00 00       	mov    $0x1,%eax
   31885:	82 90 8b 5d fc c9 c3 	adcb   $0xc3,-0x3603a275(%eax)

0003188c <in_byte>:
   3188c:	55                   	push   %ebp
   3188d:	89 e5                	mov    %esp,%ebp
   3188f:	83 ec 14             	sub    $0x14,%esp
   31892:	e8 9c e9 ff ff       	call   30233 <__x86.get_pc_thunk.ax>
   31897:	05 69 a7 00 00       	add    $0xa769,%eax
   3189c:	8b 45 08             	mov    0x8(%ebp),%eax
   3189f:	66 89 45 ec          	mov    %ax,-0x14(%ebp)
   318a3:	8b 45 ec             	mov    -0x14(%ebp),%eax
   318a6:	89 c2                	mov    %eax,%edx
   318a8:	ec                   	in     (%dx),%al
   318a9:	88 45 ff             	mov    %al,-0x1(%ebp)
   318ac:	8a 45 ff             	mov    -0x1(%ebp),%al
   318af:	c9                   	leave  
   318b0:	c3                   	ret    

000318b1 <init_serial>:
   318b1:	55                   	push   %ebp
   318b2:	89 e5                	mov    %esp,%ebp
   318b4:	e8 7a e9 ff ff       	call   30233 <__x86.get_pc_thunk.ax>
   318b9:	05 47 a7 00 00       	add    $0xa747,%eax
   318be:	90                   	nop
   318bf:	5d                   	pop    %ebp
   318c0:	c3                   	ret    

000318c1 <serial_idle>:
   318c1:	55                   	push   %ebp
   318c2:	89 e5                	mov    %esp,%ebp
   318c4:	e8 6a e9 ff ff       	call   30233 <__x86.get_pc_thunk.ax>
   318c9:	05 37 a7 00 00       	add    $0xa737,%eax
   318ce:	68 fd 03 00 00       	push   $0x3fd
   318d3:	e8 b4 ff ff ff       	call   3188c <in_byte>
   318d8:	83 c4 04             	add    $0x4,%esp
   318db:	0f b6 c0             	movzbl %al,%eax
   318de:	83 e0 20             	and    $0x20,%eax
   318e1:	85 c0                	test   %eax,%eax
   318e3:	0f 95 c0             	setne  %al
   318e6:	0f b6 c0             	movzbl %al,%eax
   318e9:	c9                   	leave  
   318ea:	c3                   	ret    

000318eb <serial_printc>:
   318eb:	55                   	push   %ebp
   318ec:	89 e5                	mov    %esp,%ebp
   318ee:	83 ec 04             	sub    $0x4,%esp
   318f1:	e8 3d e9 ff ff       	call   30233 <__x86.get_pc_thunk.ax>
   318f6:	05 0a a7 00 00       	add    $0xa70a,%eax
   318fb:	8b 45 08             	mov    0x8(%ebp),%eax
   318fe:	88 45 fc             	mov    %al,-0x4(%ebp)
   31901:	90                   	nop
   31902:	e8 ba ff ff ff       	call   318c1 <serial_idle>
   31907:	85 c0                	test   %eax,%eax
   31909:	74 f7                	je     31902 <serial_printc+0x17>
   3190b:	b8 01 00 00 00       	mov    $0x1,%eax
   31910:	82                   	.byte 0x82
   31911:	90                   	nop
   31912:	c9                   	leave  
   31913:	c3                   	ret    

00031914 <sbrk>:
   31914:	55                   	push   %ebp
   31915:	89 e5                	mov    %esp,%ebp
   31917:	53                   	push   %ebx
   31918:	83 ec 04             	sub    $0x4,%esp
   3191b:	e8 13 e9 ff ff       	call   30233 <__x86.get_pc_thunk.ax>
   31920:	05 e0 a6 00 00       	add    $0xa6e0,%eax
   31925:	83 ec 0c             	sub    $0xc,%esp
   31928:	8d 90 b4 cc ff ff    	lea    -0x334c(%eax),%edx
   3192e:	52                   	push   %edx
   3192f:	8d 90 14 cd ff ff    	lea    -0x32ec(%eax),%edx
   31935:	52                   	push   %edx
   31936:	6a 08                	push   $0x8
   31938:	8d 90 b6 cc ff ff    	lea    -0x334a(%eax),%edx
   3193e:	52                   	push   %edx
   3193f:	8d 90 c8 cc ff ff    	lea    -0x3338(%eax),%edx
   31945:	52                   	push   %edx
   31946:	89 c3                	mov    %eax,%ebx
   31948:	e8 13 00 00 00       	call   31960 <printk>
   3194d:	83 c4 20             	add    $0x20,%esp
   31950:	b8 01 00 00 00       	mov    $0x1,%eax
   31955:	82 b8 00 00 00 00 8b 	cmpb   $0x8b,0x0(%eax)
   3195c:	5d                   	pop    %ebp
   3195d:	fc                   	cld    
   3195e:	c9                   	leave  
   3195f:	c3                   	ret    

00031960 <printk>:
   31960:	55                   	push   %ebp
   31961:	89 e5                	mov    %esp,%ebp
   31963:	53                   	push   %ebx
   31964:	83 ec 14             	sub    $0x14,%esp
   31967:	e8 cb e8 ff ff       	call   30237 <__x86.get_pc_thunk.bx>
   3196c:	81 c3 94 a6 00 00    	add    $0xa694,%ebx
   31972:	8d 45 0c             	lea    0xc(%ebp),%eax
   31975:	89 45 f4             	mov    %eax,-0xc(%ebp)
   31978:	8b 45 08             	mov    0x8(%ebp),%eax
   3197b:	ff 75 f4             	pushl  -0xc(%ebp)
   3197e:	50                   	push   %eax
   3197f:	68 00 01 00 00       	push   $0x100
   31984:	8d 83 a0 1d 01 00    	lea    0x11da0(%ebx),%eax
   3198a:	50                   	push   %eax
   3198b:	e8 30 04 00 00       	call   31dc0 <vsnprintf>
   31990:	83 c4 10             	add    $0x10,%esp
   31993:	89 45 f0             	mov    %eax,-0x10(%ebp)
   31996:	8b 45 f0             	mov    -0x10(%ebp),%eax
   31999:	83 ec 04             	sub    $0x4,%esp
   3199c:	50                   	push   %eax
   3199d:	8d 83 a0 1d 01 00    	lea    0x11da0(%ebx),%eax
   319a3:	50                   	push   %eax
   319a4:	6a 01                	push   $0x1
   319a6:	e8 a2 e7 ff ff       	call   3014d <fs_write>
   319ab:	83 c4 10             	add    $0x10,%esp
   319ae:	90                   	nop
   319af:	8b 5d fc             	mov    -0x4(%ebp),%ebx
   319b2:	c9                   	leave  
   319b3:	c3                   	ret    
   319b4:	66 90                	xchg   %ax,%ax
   319b6:	66 90                	xchg   %ax,%ax
   319b8:	66 90                	xchg   %ax,%ax
   319ba:	66 90                	xchg   %ax,%ax
   319bc:	66 90                	xchg   %ax,%ax
   319be:	66 90                	xchg   %ax,%ax

000319c0 <mm_malloc>:
   319c0:	55                   	push   %ebp
   319c1:	31 c0                	xor    %eax,%eax
   319c3:	89 e5                	mov    %esp,%ebp
   319c5:	57                   	push   %edi
   319c6:	56                   	push   %esi
   319c7:	53                   	push   %ebx
   319c8:	83 ec 3c             	sub    $0x3c,%esp
   319cb:	8b 5d 0c             	mov    0xc(%ebp),%ebx
   319ce:	85 db                	test   %ebx,%ebx
   319d0:	0f 8e 36 02 00 00    	jle    31c0c <mm_malloc+0x24c>
   319d6:	e8 c7 ec ff ff       	call   306a2 <get_updir>
   319db:	89 c6                	mov    %eax,%esi
   319dd:	e8 d5 ec ff ff       	call   306b7 <get_ucr3>
   319e2:	8b 55 08             	mov    0x8(%ebp),%edx
   319e5:	8d 5c 1a ff          	lea    -0x1(%edx,%ebx,1),%ebx
   319e9:	89 5d e0             	mov    %ebx,-0x20(%ebp)
   319ec:	89 45 dc             	mov    %eax,-0x24(%ebp)
   319ef:	b8 00 10 00 00       	mov    $0x1000,%eax
   319f4:	29 d0                	sub    %edx,%eax
   319f6:	89 da                	mov    %ebx,%edx
   319f8:	81 e2 00 f0 ff ff    	and    $0xfffff000,%edx
   319fe:	01 d0                	add    %edx,%eax
   31a00:	85 c0                	test   %eax,%eax
   31a02:	0f 8e c0 00 00 00    	jle    31ac8 <mm_malloc+0x108>
   31a08:	8b 55 08             	mov    0x8(%ebp),%edx
   31a0b:	83 e8 01             	sub    $0x1,%eax
   31a0e:	89 f7                	mov    %esi,%edi
   31a10:	25 00 f0 ff ff       	and    $0xfffff000,%eax
   31a15:	8d 84 02 00 10 00 00 	lea    0x1000(%edx,%eax,1),%eax
   31a1c:	89 d3                	mov    %edx,%ebx
   31a1e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
   31a21:	eb 51                	jmp    31a74 <mm_malloc+0xb4>
   31a23:	90                   	nop
   31a24:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   31a28:	8b 31                	mov    (%ecx),%esi
   31a2a:	81 e6 00 f0 ff ff    	and    $0xfffff000,%esi
   31a30:	81 ee 00 00 00 40    	sub    $0x40000000,%esi
   31a36:	89 d8                	mov    %ebx,%eax
   31a38:	c1 e8 0a             	shr    $0xa,%eax
   31a3b:	25 fc 0f 00 00       	and    $0xffc,%eax
   31a40:	01 c6                	add    %eax,%esi
   31a42:	f6 06 01             	testb  $0x1,(%esi)
   31a45:	75 22                	jne    31a69 <mm_malloc+0xa9>
   31a47:	a1 20 c0 03 00       	mov    0x3c020,%eax
   31a4c:	3d ff 7f 00 00       	cmp    $0x7fff,%eax
   31a51:	0f 8f c1 01 00 00    	jg     31c18 <mm_malloc+0x258>
   31a57:	89 c1                	mov    %eax,%ecx
   31a59:	83 c0 01             	add    $0x1,%eax
   31a5c:	c1 e1 0c             	shl    $0xc,%ecx
   31a5f:	83 c9 07             	or     $0x7,%ecx
   31a62:	89 0e                	mov    %ecx,(%esi)
   31a64:	a3 20 c0 03 00       	mov    %eax,0x3c020
   31a69:	81 c3 00 10 00 00    	add    $0x1000,%ebx
   31a6f:	3b 5d e4             	cmp    -0x1c(%ebp),%ebx
   31a72:	74 54                	je     31ac8 <mm_malloc+0x108>
   31a74:	89 d8                	mov    %ebx,%eax
   31a76:	c1 e8 16             	shr    $0x16,%eax
   31a79:	8d 0c 87             	lea    (%edi,%eax,4),%ecx
   31a7c:	f6 01 01             	testb  $0x1,(%ecx)
   31a7f:	75 a7                	jne    31a28 <mm_malloc+0x68>
   31a81:	a1 00 e0 04 00       	mov    0x4e000,%eax
   31a86:	89 c6                	mov    %eax,%esi
   31a88:	83 c0 01             	add    $0x1,%eax
   31a8b:	c1 e6 0c             	shl    $0xc,%esi
   31a8e:	81 c6 00 f0 04 00    	add    $0x4f000,%esi
   31a94:	a3 00 e0 04 00       	mov    %eax,0x4e000
   31a99:	8d 86 00 00 00 40    	lea    0x40000000(%esi),%eax
   31a9f:	25 00 f0 ff ff       	and    $0xfffff000,%eax
   31aa4:	83 c8 07             	or     $0x7,%eax
   31aa7:	89 01                	mov    %eax,(%ecx)
   31aa9:	c7 44 24 08 00 10 00 	movl   $0x1000,0x8(%esp)
   31ab0:	00 
   31ab1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
   31ab8:	00 
   31ab9:	89 34 24             	mov    %esi,(%esp)
   31abc:	e8 db 01 00 00       	call   31c9c <memset>
   31ac1:	e9 70 ff ff ff       	jmp    31a36 <mm_malloc+0x76>
   31ac6:	66 90                	xchg   %ax,%ax
   31ac8:	8b 5d dc             	mov    -0x24(%ebp),%ebx
   31acb:	8b 45 e0             	mov    -0x20(%ebp),%eax
   31ace:	81 eb 00 00 00 40    	sub    $0x40000000,%ebx
   31ad4:	81 e3 00 f0 ff ff    	and    $0xfffff000,%ebx
   31ada:	c1 e8 16             	shr    $0x16,%eax
   31add:	8b 34 83             	mov    (%ebx,%eax,4),%esi
   31ae0:	f7 c6 01 00 00 00    	test   $0x1,%esi
   31ae6:	75 32                	jne    31b1a <mm_malloc+0x15a>
   31ae8:	c7 44 24 10 3d 8d 03 	movl   $0x38d3d,0x10(%esp)
   31aef:	00 
   31af0:	c7 44 24 0c a6 8d 03 	movl   $0x38da6,0xc(%esp)
   31af7:	00 
   31af8:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
   31aff:	00 
   31b00:	c7 44 24 04 2c 8d 03 	movl   $0x38d2c,0x4(%esp)
   31b07:	00 
   31b08:	c7 04 24 50 8d 03 00 	movl   $0x38d50,(%esp)
   31b0f:	e8 4c fe ff ff       	call   31960 <printk>
   31b14:	b8 01 00 00 00       	mov    $0x1,%eax
   31b19:	82 8b 55 e0 8d 86 00 	orb    $0x0,-0x79721fab(%ebx)
   31b20:	00 00                	add    %al,(%eax)
   31b22:	c0 25 00 f0 ff ff c1 	shlb   $0xc1,0xfffff000
   31b29:	ea 0c 81 e2 ff 03 00 	ljmp   $0x3,$0xffe2810c
   31b30:	00 f6                	add    %dh,%dh
   31b32:	04 90                	add    $0x90,%al
   31b34:	01 75 32             	add    %esi,0x32(%ebp)
   31b37:	c7 44 24 10 45 8d 03 	movl   $0x38d45,0x10(%esp)
   31b3e:	00 
   31b3f:	c7 44 24 0c a6 8d 03 	movl   $0x38da6,0xc(%esp)
   31b46:	00 
   31b47:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
   31b4e:	00 
   31b4f:	c7 44 24 04 2c 8d 03 	movl   $0x38d2c,0x4(%esp)
   31b56:	00 
   31b57:	c7 04 24 50 8d 03 00 	movl   $0x38d50,(%esp)
   31b5e:	e8 fd fd ff ff       	call   31960 <printk>
   31b63:	b8 01 00 00 00       	mov    $0x1,%eax
   31b68:	82 8b 45 08 c1 e8 16 	orb    $0x16,-0x173ef7bb(%ebx)
   31b6f:	8b 1c 83             	mov    (%ebx,%eax,4),%ebx
   31b72:	f6 c3 01             	test   $0x1,%bl
   31b75:	75 32                	jne    31ba9 <mm_malloc+0x1e9>
   31b77:	c7 44 24 10 3d 8d 03 	movl   $0x38d3d,0x10(%esp)
   31b7e:	00 
   31b7f:	c7 44 24 0c a6 8d 03 	movl   $0x38da6,0xc(%esp)
   31b86:	00 
   31b87:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
   31b8e:	00 
   31b8f:	c7 44 24 04 2c 8d 03 	movl   $0x38d2c,0x4(%esp)
   31b96:	00 
   31b97:	c7 04 24 50 8d 03 00 	movl   $0x38d50,(%esp)
   31b9e:	e8 bd fd ff ff       	call   31960 <printk>
   31ba3:	b8 01 00 00 00       	mov    $0x1,%eax
   31ba8:	82 8b 55 08 8d 83 00 	orb    $0x0,-0x7c72f7ab(%ebx)
   31baf:	00 00                	add    %al,(%eax)
   31bb1:	c0 25 00 f0 ff ff c1 	shlb   $0xc1,0xfffff000
   31bb8:	ea 0c 81 e2 ff 03 00 	ljmp   $0x3,$0xffe2810c
   31bbf:	00 8b 1c 90 f6 c3    	add    %cl,-0x3c096fe4(%ebx)
   31bc5:	01 75 32             	add    %esi,0x32(%ebp)
   31bc8:	c7 44 24 10 45 8d 03 	movl   $0x38d45,0x10(%esp)
   31bcf:	00 
   31bd0:	c7 44 24 0c a6 8d 03 	movl   $0x38da6,0xc(%esp)
   31bd7:	00 
   31bd8:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
   31bdf:	00 
   31be0:	c7 44 24 04 2c 8d 03 	movl   $0x38d2c,0x4(%esp)
   31be7:	00 
   31be8:	c7 04 24 50 8d 03 00 	movl   $0x38d50,(%esp)
   31bef:	e8 6c fd ff ff       	call   31960 <printk>
   31bf4:	b8 01 00 00 00       	mov    $0x1,%eax
   31bf9:	82 8b 55 08 89 d8 25 	orb    $0x25,-0x2776f7ab(%ebx)
   31c00:	00 f0                	add    %dh,%al
   31c02:	ff                   	(bad)  
   31c03:	ff 81 e2 ff 0f 00    	incl   0xfffe2(%ecx)
   31c09:	00 09                	add    %cl,(%ecx)
   31c0b:	d0 83 c4 3c 5b 5e    	rolb   0x5e5b3cc4(%ebx)
   31c11:	5f                   	pop    %edi
   31c12:	5d                   	pop    %ebp
   31c13:	c3                   	ret    
   31c14:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   31c18:	c7 44 24 10 19 8d 03 	movl   $0x38d19,0x10(%esp)
   31c1f:	00 
   31c20:	c7 44 24 0c 9c 8d 03 	movl   $0x38d9c,0xc(%esp)
   31c27:	00 
   31c28:	c7 44 24 08 31 00 00 	movl   $0x31,0x8(%esp)
   31c2f:	00 
   31c30:	c7 44 24 04 2c 8d 03 	movl   $0x38d2c,0x4(%esp)
   31c37:	00 
   31c38:	c7 04 24 50 8d 03 00 	movl   $0x38d50,(%esp)
   31c3f:	e8 1c fd ff ff       	call   31960 <printk>
   31c44:	b8 01 00 00 00       	mov    $0x1,%eax
   31c49:	82 a1 20 c0 03 00 e9 	andb   $0xe9,0x3c020(%ecx)
   31c50:	03 fe                	add    %esi,%edi
   31c52:	ff                   	(bad)  
   31c53:	ff                   	.byte 0xff

00031c54 <memcpy>:
   31c54:	55                   	push   %ebp
   31c55:	89 e5                	mov    %esp,%ebp
   31c57:	56                   	push   %esi
   31c58:	57                   	push   %edi
   31c59:	53                   	push   %ebx
   31c5a:	8b 7d 08             	mov    0x8(%ebp),%edi
   31c5d:	8b 4d 10             	mov    0x10(%ebp),%ecx
   31c60:	8b 75 0c             	mov    0xc(%ebp),%esi
   31c63:	fc                   	cld    
   31c64:	83 f9 08             	cmp    $0x8,%ecx
   31c67:	76 26                	jbe    31c8f <memcpy+0x3b>
   31c69:	89 fa                	mov    %edi,%edx
   31c6b:	89 cb                	mov    %ecx,%ebx
   31c6d:	83 e2 03             	and    $0x3,%edx
   31c70:	74 10                	je     31c82 <memcpy+0x2e>
   31c72:	b9 04 00 00 00       	mov    $0x4,%ecx
   31c77:	29 d1                	sub    %edx,%ecx
   31c79:	83 e1 03             	and    $0x3,%ecx
   31c7c:	29 cb                	sub    %ecx,%ebx
   31c7e:	f3 a4                	rep movsb %ds:(%esi),%es:(%edi)
   31c80:	89 d9                	mov    %ebx,%ecx
   31c82:	c1 e9 02             	shr    $0x2,%ecx
   31c85:	8d 76 00             	lea    0x0(%esi),%esi
   31c88:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
   31c8a:	89 d9                	mov    %ebx,%ecx
   31c8c:	83 e1 03             	and    $0x3,%ecx
   31c8f:	f3 a4                	rep movsb %ds:(%esi),%es:(%edi)
   31c91:	8b 45 08             	mov    0x8(%ebp),%eax
   31c94:	8d 65 f4             	lea    -0xc(%ebp),%esp
   31c97:	5b                   	pop    %ebx
   31c98:	5f                   	pop    %edi
   31c99:	5e                   	pop    %esi
   31c9a:	c9                   	leave  
   31c9b:	c3                   	ret    

00031c9c <memset>:
   31c9c:	55                   	push   %ebp
   31c9d:	89 e5                	mov    %esp,%ebp
   31c9f:	57                   	push   %edi
   31ca0:	8b 7d 08             	mov    0x8(%ebp),%edi
   31ca3:	0f b6 45 0c          	movzbl 0xc(%ebp),%eax
   31ca7:	8b 4d 10             	mov    0x10(%ebp),%ecx
   31caa:	fc                   	cld    
   31cab:	83 f9 10             	cmp    $0x10,%ecx
   31cae:	76 69                	jbe    31d19 <memset+0x7d>
   31cb0:	f7 c7 07 00 00 00    	test   $0x7,%edi
   31cb6:	74 4c                	je     31d04 <memset+0x68>
   31cb8:	88 07                	mov    %al,(%edi)
   31cba:	47                   	inc    %edi
   31cbb:	49                   	dec    %ecx
   31cbc:	f7 c7 07 00 00 00    	test   $0x7,%edi
   31cc2:	74 40                	je     31d04 <memset+0x68>
   31cc4:	88 07                	mov    %al,(%edi)
   31cc6:	47                   	inc    %edi
   31cc7:	49                   	dec    %ecx
   31cc8:	f7 c7 07 00 00 00    	test   $0x7,%edi
   31cce:	74 34                	je     31d04 <memset+0x68>
   31cd0:	88 07                	mov    %al,(%edi)
   31cd2:	47                   	inc    %edi
   31cd3:	49                   	dec    %ecx
   31cd4:	f7 c7 07 00 00 00    	test   $0x7,%edi
   31cda:	74 28                	je     31d04 <memset+0x68>
   31cdc:	88 07                	mov    %al,(%edi)
   31cde:	47                   	inc    %edi
   31cdf:	49                   	dec    %ecx
   31ce0:	f7 c7 07 00 00 00    	test   $0x7,%edi
   31ce6:	74 1c                	je     31d04 <memset+0x68>
   31ce8:	88 07                	mov    %al,(%edi)
   31cea:	47                   	inc    %edi
   31ceb:	49                   	dec    %ecx
   31cec:	f7 c7 07 00 00 00    	test   $0x7,%edi
   31cf2:	74 10                	je     31d04 <memset+0x68>
   31cf4:	88 07                	mov    %al,(%edi)
   31cf6:	47                   	inc    %edi
   31cf7:	49                   	dec    %ecx
   31cf8:	f7 c7 07 00 00 00    	test   $0x7,%edi
   31cfe:	74 04                	je     31d04 <memset+0x68>
   31d00:	88 07                	mov    %al,(%edi)
   31d02:	47                   	inc    %edi
   31d03:	49                   	dec    %ecx
   31d04:	88 c4                	mov    %al,%ah
   31d06:	89 c2                	mov    %eax,%edx
   31d08:	c1 e2 10             	shl    $0x10,%edx
   31d0b:	09 d0                	or     %edx,%eax
   31d0d:	89 ca                	mov    %ecx,%edx
   31d0f:	c1 e9 02             	shr    $0x2,%ecx
   31d12:	83 e2 03             	and    $0x3,%edx
   31d15:	f3 ab                	rep stos %eax,%es:(%edi)
   31d17:	89 d1                	mov    %edx,%ecx
   31d19:	f3 aa                	rep stos %al,%es:(%edi)
   31d1b:	8b 45 08             	mov    0x8(%ebp),%eax
   31d1e:	8d 65 fc             	lea    -0x4(%ebp),%esp
   31d21:	5f                   	pop    %edi
   31d22:	c9                   	leave  
   31d23:	c3                   	ret    
   31d24:	66 90                	xchg   %ax,%ax
   31d26:	66 90                	xchg   %ax,%ax
   31d28:	66 90                	xchg   %ax,%ax
   31d2a:	66 90                	xchg   %ax,%ax
   31d2c:	66 90                	xchg   %ax,%ax
   31d2e:	66 90                	xchg   %ax,%ax

00031d30 <_vsnprintf_r>:
   31d30:	55                   	push   %ebp
   31d31:	89 e5                	mov    %esp,%ebp
   31d33:	56                   	push   %esi
   31d34:	53                   	push   %ebx
   31d35:	83 c4 80             	add    $0xffffff80,%esp
   31d38:	8b 5d 10             	mov    0x10(%ebp),%ebx
   31d3b:	8b 75 08             	mov    0x8(%ebp),%esi
   31d3e:	8b 45 0c             	mov    0xc(%ebp),%eax
   31d41:	85 db                	test   %ebx,%ebx
   31d43:	78 63                	js     31da8 <_vsnprintf_r+0x78>
   31d45:	ba 08 02 00 00       	mov    $0x208,%edx
   31d4a:	b9 ff ff ff ff       	mov    $0xffffffff,%ecx
   31d4f:	66 89 55 9c          	mov    %dx,-0x64(%ebp)
   31d53:	8d 53 ff             	lea    -0x1(%ebx),%edx
   31d56:	89 45 90             	mov    %eax,-0x70(%ebp)
   31d59:	89 45 a0             	mov    %eax,-0x60(%ebp)
   31d5c:	31 c0                	xor    %eax,%eax
   31d5e:	85 db                	test   %ebx,%ebx
   31d60:	0f 45 c2             	cmovne %edx,%eax
   31d63:	89 45 98             	mov    %eax,-0x68(%ebp)
   31d66:	89 45 a4             	mov    %eax,-0x5c(%ebp)
   31d69:	8b 45 18             	mov    0x18(%ebp),%eax
   31d6c:	89 34 24             	mov    %esi,(%esp)
   31d6f:	66 89 4d 9e          	mov    %cx,-0x62(%ebp)
   31d73:	89 44 24 0c          	mov    %eax,0xc(%esp)
   31d77:	8b 45 14             	mov    0x14(%ebp),%eax
   31d7a:	89 44 24 08          	mov    %eax,0x8(%esp)
   31d7e:	8d 45 90             	lea    -0x70(%ebp),%eax
   31d81:	89 44 24 04          	mov    %eax,0x4(%esp)
   31d85:	e8 86 00 00 00       	call   31e10 <_svfprintf_r>
   31d8a:	83 f8 ff             	cmp    $0xffffffff,%eax
   31d8d:	7c 11                	jl     31da0 <_vsnprintf_r+0x70>
   31d8f:	85 db                	test   %ebx,%ebx
   31d91:	74 06                	je     31d99 <_vsnprintf_r+0x69>
   31d93:	8b 55 90             	mov    -0x70(%ebp),%edx
   31d96:	c6 02 00             	movb   $0x0,(%edx)
   31d99:	83 ec 80             	sub    $0xffffff80,%esp
   31d9c:	5b                   	pop    %ebx
   31d9d:	5e                   	pop    %esi
   31d9e:	5d                   	pop    %ebp
   31d9f:	c3                   	ret    
   31da0:	c7 06 8b 00 00 00    	movl   $0x8b,(%esi)
   31da6:	eb e7                	jmp    31d8f <_vsnprintf_r+0x5f>
   31da8:	c7 06 8b 00 00 00    	movl   $0x8b,(%esi)
   31dae:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
   31db3:	eb e4                	jmp    31d99 <_vsnprintf_r+0x69>
   31db5:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   31db9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

00031dc0 <vsnprintf>:
   31dc0:	55                   	push   %ebp
   31dc1:	89 e5                	mov    %esp,%ebp
   31dc3:	83 ec 28             	sub    $0x28,%esp
   31dc6:	e8 35 00 00 00       	call   31e00 <__getreent>
   31dcb:	8b 55 14             	mov    0x14(%ebp),%edx
   31dce:	89 54 24 10          	mov    %edx,0x10(%esp)
   31dd2:	8b 55 10             	mov    0x10(%ebp),%edx
   31dd5:	89 04 24             	mov    %eax,(%esp)
   31dd8:	89 54 24 0c          	mov    %edx,0xc(%esp)
   31ddc:	8b 55 0c             	mov    0xc(%ebp),%edx
   31ddf:	89 54 24 08          	mov    %edx,0x8(%esp)
   31de3:	8b 55 08             	mov    0x8(%ebp),%edx
   31de6:	89 54 24 04          	mov    %edx,0x4(%esp)
   31dea:	e8 41 ff ff ff       	call   31d30 <_vsnprintf_r>
   31def:	c9                   	leave  
   31df0:	c3                   	ret    
   31df1:	66 90                	xchg   %ax,%ax
   31df3:	66 90                	xchg   %ax,%ax
   31df5:	66 90                	xchg   %ax,%ax
   31df7:	66 90                	xchg   %ax,%ax
   31df9:	66 90                	xchg   %ax,%ax
   31dfb:	66 90                	xchg   %ax,%ax
   31dfd:	66 90                	xchg   %ax,%ax
   31dff:	90                   	nop

00031e00 <__getreent>:
   31e00:	55                   	push   %ebp
   31e01:	a1 40 c0 03 00       	mov    0x3c040,%eax
   31e06:	89 e5                	mov    %esp,%ebp
   31e08:	5d                   	pop    %ebp
   31e09:	c3                   	ret    
   31e0a:	66 90                	xchg   %ax,%ax
   31e0c:	66 90                	xchg   %ax,%ax
   31e0e:	66 90                	xchg   %ax,%ax

00031e10 <_svfprintf_r>:
   31e10:	55                   	push   %ebp
   31e11:	89 e5                	mov    %esp,%ebp
   31e13:	57                   	push   %edi
   31e14:	56                   	push   %esi
   31e15:	53                   	push   %ebx
   31e16:	81 ec 1c 01 00 00    	sub    $0x11c,%esp
   31e1c:	8b 45 08             	mov    0x8(%ebp),%eax
   31e1f:	89 04 24             	mov    %eax,(%esp)
   31e22:	e8 89 33 00 00       	call   351b0 <_localeconv_r>
   31e27:	8b 00                	mov    (%eax),%eax
   31e29:	89 04 24             	mov    %eax,(%esp)
   31e2c:	89 85 0c ff ff ff    	mov    %eax,-0xf4(%ebp)
   31e32:	e8 d9 4a 00 00       	call   36910 <strlen>
   31e37:	89 85 08 ff ff ff    	mov    %eax,-0xf8(%ebp)
   31e3d:	8b 45 0c             	mov    0xc(%ebp),%eax
   31e40:	f6 40 0c 80          	testb  $0x80,0xc(%eax)
   31e44:	74 0b                	je     31e51 <_svfprintf_r+0x41>
   31e46:	8b 40 10             	mov    0x10(%eax),%eax
   31e49:	85 c0                	test   %eax,%eax
   31e4b:	0f 84 62 18 00 00    	je     336b3 <_svfprintf_r+0x18a3>
   31e51:	8d 45 a8             	lea    -0x58(%ebp),%eax
   31e54:	8d 55 a7             	lea    -0x59(%ebp),%edx
   31e57:	89 c7                	mov    %eax,%edi
   31e59:	89 85 74 ff ff ff    	mov    %eax,-0x8c(%ebp)
   31e5f:	d9 ee                	fldz   
   31e61:	29 d0                	sub    %edx,%eax
   31e63:	c7 85 7c ff ff ff 00 	movl   $0x0,-0x84(%ebp)
   31e6a:	00 00 00 
   31e6d:	dd 9d 10 ff ff ff    	fstpl  -0xf0(%ebp)
   31e73:	c7 85 78 ff ff ff 00 	movl   $0x0,-0x88(%ebp)
   31e7a:	00 00 00 
   31e7d:	c7 85 1c ff ff ff 00 	movl   $0x0,-0xe4(%ebp)
   31e84:	00 00 00 
   31e87:	c7 85 18 ff ff ff 00 	movl   $0x0,-0xe8(%ebp)
   31e8e:	00 00 00 
   31e91:	c7 85 04 ff ff ff 00 	movl   $0x0,-0xfc(%ebp)
   31e98:	00 00 00 
   31e9b:	c7 85 34 ff ff ff 00 	movl   $0x0,-0xcc(%ebp)
   31ea2:	00 00 00 
   31ea5:	89 85 00 ff ff ff    	mov    %eax,-0x100(%ebp)
   31eab:	8b 45 10             	mov    0x10(%ebp),%eax
   31eae:	8b 5d 10             	mov    0x10(%ebp),%ebx
   31eb1:	0f b6 00             	movzbl (%eax),%eax
   31eb4:	3c 25                	cmp    $0x25,%al
   31eb6:	74 4d                	je     31f05 <_svfprintf_r+0xf5>
   31eb8:	84 c0                	test   %al,%al
   31eba:	75 08                	jne    31ec4 <_svfprintf_r+0xb4>
   31ebc:	eb 47                	jmp    31f05 <_svfprintf_r+0xf5>
   31ebe:	66 90                	xchg   %ax,%ax
   31ec0:	84 c0                	test   %al,%al
   31ec2:	74 0a                	je     31ece <_svfprintf_r+0xbe>
   31ec4:	83 c3 01             	add    $0x1,%ebx
   31ec7:	0f b6 03             	movzbl (%ebx),%eax
   31eca:	3c 25                	cmp    $0x25,%al
   31ecc:	75 f2                	jne    31ec0 <_svfprintf_r+0xb0>
   31ece:	89 de                	mov    %ebx,%esi
   31ed0:	2b 75 10             	sub    0x10(%ebp),%esi
   31ed3:	74 30                	je     31f05 <_svfprintf_r+0xf5>
   31ed5:	8b 45 10             	mov    0x10(%ebp),%eax
   31ed8:	83 c7 08             	add    $0x8,%edi
   31edb:	89 77 fc             	mov    %esi,-0x4(%edi)
   31ede:	01 b5 7c ff ff ff    	add    %esi,-0x84(%ebp)
   31ee4:	89 47 f8             	mov    %eax,-0x8(%edi)
   31ee7:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   31eed:	83 c0 01             	add    $0x1,%eax
   31ef0:	83 f8 07             	cmp    $0x7,%eax
   31ef3:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   31ef9:	0f 8f 91 00 00 00    	jg     31f90 <_svfprintf_r+0x180>
   31eff:	01 b5 34 ff ff ff    	add    %esi,-0xcc(%ebp)
   31f05:	80 3b 00             	cmpb   $0x0,(%ebx)
   31f08:	0f 84 aa 00 00 00    	je     31fb8 <_svfprintf_r+0x1a8>
   31f0e:	8d 43 01             	lea    0x1(%ebx),%eax
   31f11:	be 20 00 00 00       	mov    $0x20,%esi
   31f16:	c6 85 59 ff ff ff 00 	movb   $0x0,-0xa7(%ebp)
   31f1d:	31 db                	xor    %ebx,%ebx
   31f1f:	c7 85 44 ff ff ff ff 	movl   $0xffffffff,-0xbc(%ebp)
   31f26:	ff ff ff 
   31f29:	c7 85 40 ff ff ff 00 	movl   $0x0,-0xc0(%ebp)
   31f30:	00 00 00 
   31f33:	c7 85 4c ff ff ff 00 	movl   $0x0,-0xb4(%ebp)
   31f3a:	00 00 00 
   31f3d:	8d 48 01             	lea    0x1(%eax),%ecx
   31f40:	0f be 00             	movsbl (%eax),%eax
   31f43:	8d 50 e0             	lea    -0x20(%eax),%edx
   31f46:	83 fa 58             	cmp    $0x58,%edx
   31f49:	0f 87 8f 07 00 00    	ja     326de <_svfprintf_r+0x8ce>
   31f4f:	ff 24 95 f0 8d 03 00 	jmp    *0x38df0(,%edx,4)
   31f56:	66 90                	xchg   %ax,%ax
   31f58:	83 8d 4c ff ff ff 10 	orl    $0x10,-0xb4(%ebp)
   31f5f:	89 c8                	mov    %ecx,%eax
   31f61:	eb da                	jmp    31f3d <_svfprintf_r+0x12d>
   31f63:	8b 45 14             	mov    0x14(%ebp),%eax
   31f66:	8b 55 14             	mov    0x14(%ebp),%edx
   31f69:	8b 00                	mov    (%eax),%eax
   31f6b:	83 c2 04             	add    $0x4,%edx
   31f6e:	89 55 14             	mov    %edx,0x14(%ebp)
   31f71:	85 c0                	test   %eax,%eax
   31f73:	89 85 40 ff ff ff    	mov    %eax,-0xc0(%ebp)
   31f79:	79 e4                	jns    31f5f <_svfprintf_r+0x14f>
   31f7b:	f7 9d 40 ff ff ff    	negl   -0xc0(%ebp)
   31f81:	83 8d 4c ff ff ff 04 	orl    $0x4,-0xb4(%ebp)
   31f88:	89 c8                	mov    %ecx,%eax
   31f8a:	eb b1                	jmp    31f3d <_svfprintf_r+0x12d>
   31f8c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   31f90:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   31f96:	89 44 24 08          	mov    %eax,0x8(%esp)
   31f9a:	8b 45 0c             	mov    0xc(%ebp),%eax
   31f9d:	89 44 24 04          	mov    %eax,0x4(%esp)
   31fa1:	8b 45 08             	mov    0x8(%ebp),%eax
   31fa4:	89 04 24             	mov    %eax,(%esp)
   31fa7:	e8 e4 49 00 00       	call   36990 <__ssprint_r>
   31fac:	85 c0                	test   %eax,%eax
   31fae:	75 30                	jne    31fe0 <_svfprintf_r+0x1d0>
   31fb0:	8d 7d a8             	lea    -0x58(%ebp),%edi
   31fb3:	e9 47 ff ff ff       	jmp    31eff <_svfprintf_r+0xef>
   31fb8:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
   31fbe:	85 c0                	test   %eax,%eax
   31fc0:	74 1e                	je     31fe0 <_svfprintf_r+0x1d0>
   31fc2:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   31fc8:	89 44 24 08          	mov    %eax,0x8(%esp)
   31fcc:	8b 45 0c             	mov    0xc(%ebp),%eax
   31fcf:	89 44 24 04          	mov    %eax,0x4(%esp)
   31fd3:	8b 45 08             	mov    0x8(%ebp),%eax
   31fd6:	89 04 24             	mov    %eax,(%esp)
   31fd9:	e8 b2 49 00 00       	call   36990 <__ssprint_r>
   31fde:	66 90                	xchg   %ax,%ax
   31fe0:	8b 55 0c             	mov    0xc(%ebp),%edx
   31fe3:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
   31fe8:	f6 42 0c 40          	testb  $0x40,0xc(%edx)
   31fec:	0f 44 85 34 ff ff ff 	cmove  -0xcc(%ebp),%eax
   31ff3:	81 c4 1c 01 00 00    	add    $0x11c,%esp
   31ff9:	5b                   	pop    %ebx
   31ffa:	5e                   	pop    %esi
   31ffb:	5f                   	pop    %edi
   31ffc:	5d                   	pop    %ebp
   31ffd:	c3                   	ret    
   31ffe:	bb 2b 00 00 00       	mov    $0x2b,%ebx
   32003:	89 c8                	mov    %ecx,%eax
   32005:	e9 33 ff ff ff       	jmp    31f3d <_svfprintf_r+0x12d>
   3200a:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%ebp)
   32010:	8b 45 14             	mov    0x14(%ebp),%eax
   32013:	89 4d 10             	mov    %ecx,0x10(%ebp)
   32016:	c6 85 59 ff ff ff 00 	movb   $0x0,-0xa7(%ebp)
   3201d:	8d 70 04             	lea    0x4(%eax),%esi
   32020:	8b 00                	mov    (%eax),%eax
   32022:	85 c0                	test   %eax,%eax
   32024:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
   3202a:	0f 84 7f 18 00 00    	je     338af <_svfprintf_r+0x1a9f>
   32030:	8b 85 44 ff ff ff    	mov    -0xbc(%ebp),%eax
   32036:	85 c0                	test   %eax,%eax
   32038:	0f 88 b6 17 00 00    	js     337f4 <_svfprintf_r+0x19e4>
   3203e:	89 44 24 08          	mov    %eax,0x8(%esp)
   32042:	8b 85 28 ff ff ff    	mov    -0xd8(%ebp),%eax
   32048:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
   3204f:	00 
   32050:	89 04 24             	mov    %eax,(%esp)
   32053:	e8 f8 38 00 00       	call   35950 <memchr>
   32058:	85 c0                	test   %eax,%eax
   3205a:	0f 84 a0 19 00 00    	je     33a00 <_svfprintf_r+0x1bf0>
   32060:	8b 95 44 ff ff ff    	mov    -0xbc(%ebp),%edx
   32066:	2b 85 28 ff ff ff    	sub    -0xd8(%ebp),%eax
   3206c:	39 d0                	cmp    %edx,%eax
   3206e:	0f 4f c2             	cmovg  %edx,%eax
   32071:	89 c2                	mov    %eax,%edx
   32073:	0f b6 9d 59 ff ff ff 	movzbl -0xa7(%ebp),%ebx
   3207a:	89 85 38 ff ff ff    	mov    %eax,-0xc8(%ebp)
   32080:	31 c0                	xor    %eax,%eax
   32082:	85 d2                	test   %edx,%edx
   32084:	0f 49 c2             	cmovns %edx,%eax
   32087:	89 85 48 ff ff ff    	mov    %eax,-0xb8(%ebp)
   3208d:	89 75 14             	mov    %esi,0x14(%ebp)
   32090:	c7 85 44 ff ff ff 00 	movl   $0x0,-0xbc(%ebp)
   32097:	00 00 00 
   3209a:	c7 85 20 ff ff ff 00 	movl   $0x0,-0xe0(%ebp)
   320a1:	00 00 00 
   320a4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   320a8:	84 db                	test   %bl,%bl
   320aa:	74 07                	je     320b3 <_svfprintf_r+0x2a3>
   320ac:	83 85 48 ff ff ff 01 	addl   $0x1,-0xb8(%ebp)
   320b3:	8b 8d 48 ff ff ff    	mov    -0xb8(%ebp),%ecx
   320b9:	8b b5 4c ff ff ff    	mov    -0xb4(%ebp),%esi
   320bf:	89 c8                	mov    %ecx,%eax
   320c1:	89 f2                	mov    %esi,%edx
   320c3:	83 c0 02             	add    $0x2,%eax
   320c6:	83 e2 02             	and    $0x2,%edx
   320c9:	89 95 30 ff ff ff    	mov    %edx,-0xd0(%ebp)
   320cf:	89 f2                	mov    %esi,%edx
   320d1:	0f 44 c1             	cmove  %ecx,%eax
   320d4:	81 e2 84 00 00 00    	and    $0x84,%edx
   320da:	89 85 48 ff ff ff    	mov    %eax,-0xb8(%ebp)
   320e0:	89 95 2c ff ff ff    	mov    %edx,-0xd4(%ebp)
   320e6:	0f 85 1c 06 00 00    	jne    32708 <_svfprintf_r+0x8f8>
   320ec:	8b b5 40 ff ff ff    	mov    -0xc0(%ebp),%esi
   320f2:	2b b5 48 ff ff ff    	sub    -0xb8(%ebp),%esi
   320f8:	85 f6                	test   %esi,%esi
   320fa:	0f 8e 08 06 00 00    	jle    32708 <_svfprintf_r+0x8f8>
   32100:	83 fe 10             	cmp    $0x10,%esi
   32103:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   32109:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   3210f:	8d 9d 74 ff ff ff    	lea    -0x8c(%ebp),%ebx
   32115:	7f 11                	jg     32128 <_svfprintf_r+0x318>
   32117:	eb 6b                	jmp    32184 <_svfprintf_r+0x374>
   32119:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   32120:	83 ee 10             	sub    $0x10,%esi
   32123:	83 fe 10             	cmp    $0x10,%esi
   32126:	7e 5c                	jle    32184 <_svfprintf_r+0x374>
   32128:	83 c0 01             	add    $0x1,%eax
   3212b:	83 c1 10             	add    $0x10,%ecx
   3212e:	c7 07 64 8f 03 00    	movl   $0x38f64,(%edi)
   32134:	83 c7 08             	add    $0x8,%edi
   32137:	c7 47 fc 10 00 00 00 	movl   $0x10,-0x4(%edi)
   3213e:	83 f8 07             	cmp    $0x7,%eax
   32141:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   32147:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   3214d:	7e d1                	jle    32120 <_svfprintf_r+0x310>
   3214f:	8b 45 0c             	mov    0xc(%ebp),%eax
   32152:	89 5c 24 08          	mov    %ebx,0x8(%esp)
   32156:	89 44 24 04          	mov    %eax,0x4(%esp)
   3215a:	8b 45 08             	mov    0x8(%ebp),%eax
   3215d:	89 04 24             	mov    %eax,(%esp)
   32160:	e8 2b 48 00 00       	call   36990 <__ssprint_r>
   32165:	85 c0                	test   %eax,%eax
   32167:	0f 85 73 fe ff ff    	jne    31fe0 <_svfprintf_r+0x1d0>
   3216d:	83 ee 10             	sub    $0x10,%esi
   32170:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   32176:	83 fe 10             	cmp    $0x10,%esi
   32179:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   3217f:	8d 7d a8             	lea    -0x58(%ebp),%edi
   32182:	7f a4                	jg     32128 <_svfprintf_r+0x318>
   32184:	83 c0 01             	add    $0x1,%eax
   32187:	01 f1                	add    %esi,%ecx
   32189:	83 f8 07             	cmp    $0x7,%eax
   3218c:	c7 07 64 8f 03 00    	movl   $0x38f64,(%edi)
   32192:	89 77 04             	mov    %esi,0x4(%edi)
   32195:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   3219b:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   321a1:	0f 8f 16 0e 00 00    	jg     32fbd <_svfprintf_r+0x11ad>
   321a7:	83 c7 08             	add    $0x8,%edi
   321aa:	0f b6 9d 59 ff ff ff 	movzbl -0xa7(%ebp),%ebx
   321b1:	e9 58 05 00 00       	jmp    3270e <_svfprintf_r+0x8fe>
   321b6:	f6 85 4c ff ff ff 10 	testb  $0x10,-0xb4(%ebp)
   321bd:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%ebp)
   321c3:	8b 45 14             	mov    0x14(%ebp),%eax
   321c6:	89 4d 10             	mov    %ecx,0x10(%ebp)
   321c9:	0f 85 fd 04 00 00    	jne    326cc <_svfprintf_r+0x8bc>
   321cf:	f6 85 4c ff ff ff 40 	testb  $0x40,-0xb4(%ebp)
   321d6:	0f 84 f0 04 00 00    	je     326cc <_svfprintf_r+0x8bc>
   321dc:	0f b7 08             	movzwl (%eax),%ecx
   321df:	83 c0 04             	add    $0x4,%eax
   321e2:	89 45 14             	mov    %eax,0x14(%ebp)
   321e5:	b8 01 00 00 00       	mov    $0x1,%eax
   321ea:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   321f0:	c6 85 59 ff ff ff 00 	movb   $0x0,-0xa7(%ebp)
   321f7:	31 db                	xor    %ebx,%ebx
   321f9:	8b b5 4c ff ff ff    	mov    -0xb4(%ebp),%esi
   321ff:	89 f2                	mov    %esi,%edx
   32201:	80 e2 7f             	and    $0x7f,%dl
   32204:	83 bd 44 ff ff ff 00 	cmpl   $0x0,-0xbc(%ebp)
   3220b:	0f 48 d6             	cmovs  %esi,%edx
   3220e:	89 95 4c ff ff ff    	mov    %edx,-0xb4(%ebp)
   32214:	8b 95 44 ff ff ff    	mov    -0xbc(%ebp),%edx
   3221a:	85 d2                	test   %edx,%edx
   3221c:	75 08                	jne    32226 <_svfprintf_r+0x416>
   3221e:	85 c9                	test   %ecx,%ecx
   32220:	0f 84 ea 08 00 00    	je     32b10 <_svfprintf_r+0xd00>
   32226:	3c 01                	cmp    $0x1,%al
   32228:	0f 84 6a 0d 00 00    	je     32f98 <_svfprintf_r+0x1188>
   3222e:	3c 02                	cmp    $0x2,%al
   32230:	8d 45 a8             	lea    -0x58(%ebp),%eax
   32233:	0f 85 bf 0b 00 00    	jne    32df8 <_svfprintf_r+0xfe8>
   32239:	8b b5 18 ff ff ff    	mov    -0xe8(%ebp),%esi
   3223f:	90                   	nop
   32240:	89 ca                	mov    %ecx,%edx
   32242:	83 e8 01             	sub    $0x1,%eax
   32245:	83 e2 0f             	and    $0xf,%edx
   32248:	0f b6 14 16          	movzbl (%esi,%edx,1),%edx
   3224c:	c1 e9 04             	shr    $0x4,%ecx
   3224f:	85 c9                	test   %ecx,%ecx
   32251:	88 10                	mov    %dl,(%eax)
   32253:	75 eb                	jne    32240 <_svfprintf_r+0x430>
   32255:	8d 55 a8             	lea    -0x58(%ebp),%edx
   32258:	29 c2                	sub    %eax,%edx
   3225a:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
   32260:	89 95 38 ff ff ff    	mov    %edx,-0xc8(%ebp)
   32266:	66 90                	xchg   %ax,%ax
   32268:	8b 85 44 ff ff ff    	mov    -0xbc(%ebp),%eax
   3226e:	8b 95 38 ff ff ff    	mov    -0xc8(%ebp),%edx
   32274:	c7 85 20 ff ff ff 00 	movl   $0x0,-0xe0(%ebp)
   3227b:	00 00 00 
   3227e:	39 c2                	cmp    %eax,%edx
   32280:	0f 4d c2             	cmovge %edx,%eax
   32283:	89 85 48 ff ff ff    	mov    %eax,-0xb8(%ebp)
   32289:	e9 1a fe ff ff       	jmp    320a8 <_svfprintf_r+0x298>
   3228e:	84 db                	test   %bl,%bl
   32290:	89 c8                	mov    %ecx,%eax
   32292:	0f 44 de             	cmove  %esi,%ebx
   32295:	e9 a3 fc ff ff       	jmp    31f3d <_svfprintf_r+0x12d>
   3229a:	83 8d 4c ff ff ff 01 	orl    $0x1,-0xb4(%ebp)
   322a1:	89 c8                	mov    %ecx,%eax
   322a3:	e9 95 fc ff ff       	jmp    31f3d <_svfprintf_r+0x12d>
   322a8:	81 8d 4c ff ff ff 80 	orl    $0x80,-0xb4(%ebp)
   322af:	00 00 00 
   322b2:	89 c8                	mov    %ecx,%eax
   322b4:	e9 84 fc ff ff       	jmp    31f3d <_svfprintf_r+0x12d>
   322b9:	89 bd 48 ff ff ff    	mov    %edi,-0xb8(%ebp)
   322bf:	8d 50 d0             	lea    -0x30(%eax),%edx
   322c2:	31 ff                	xor    %edi,%edi
   322c4:	c7 85 40 ff ff ff 00 	movl   $0x0,-0xc0(%ebp)
   322cb:	00 00 00 
   322ce:	66 90                	xchg   %ax,%ax
   322d0:	8d 04 bf             	lea    (%edi,%edi,4),%eax
   322d3:	83 c1 01             	add    $0x1,%ecx
   322d6:	8d 3c 42             	lea    (%edx,%eax,2),%edi
   322d9:	0f be 41 ff          	movsbl -0x1(%ecx),%eax
   322dd:	8d 50 d0             	lea    -0x30(%eax),%edx
   322e0:	83 fa 09             	cmp    $0x9,%edx
   322e3:	76 eb                	jbe    322d0 <_svfprintf_r+0x4c0>
   322e5:	89 bd 40 ff ff ff    	mov    %edi,-0xc0(%ebp)
   322eb:	8b bd 48 ff ff ff    	mov    -0xb8(%ebp),%edi
   322f1:	e9 4d fc ff ff       	jmp    31f43 <_svfprintf_r+0x133>
   322f6:	83 8d 4c ff ff ff 10 	orl    $0x10,-0xb4(%ebp)
   322fd:	f6 85 4c ff ff ff 10 	testb  $0x10,-0xb4(%ebp)
   32304:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%ebp)
   3230a:	8b 45 14             	mov    0x14(%ebp),%eax
   3230d:	89 4d 10             	mov    %ecx,0x10(%ebp)
   32310:	88 9d 59 ff ff ff    	mov    %bl,-0xa7(%ebp)
   32316:	0f 85 61 02 00 00    	jne    3257d <_svfprintf_r+0x76d>
   3231c:	f6 85 4c ff ff ff 40 	testb  $0x40,-0xb4(%ebp)
   32323:	0f 84 54 02 00 00    	je     3257d <_svfprintf_r+0x76d>
   32329:	0f bf 08             	movswl (%eax),%ecx
   3232c:	83 c0 04             	add    $0x4,%eax
   3232f:	89 45 14             	mov    %eax,0x14(%ebp)
   32332:	85 c9                	test   %ecx,%ecx
   32334:	0f 88 53 02 00 00    	js     3258d <_svfprintf_r+0x77d>
   3233a:	0f b6 9d 59 ff ff ff 	movzbl -0xa7(%ebp),%ebx
   32341:	b8 01 00 00 00       	mov    $0x1,%eax
   32346:	e9 ae fe ff ff       	jmp    321f9 <_svfprintf_r+0x3e9>
   3234b:	f6 85 4c ff ff ff 08 	testb  $0x8,-0xb4(%ebp)
   32352:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%ebp)
   32358:	8b 45 14             	mov    0x14(%ebp),%eax
   3235b:	89 4d 10             	mov    %ecx,0x10(%ebp)
   3235e:	88 9d 59 ff ff ff    	mov    %bl,-0xa7(%ebp)
   32364:	0f 84 15 10 00 00    	je     3337f <_svfprintf_r+0x156f>
   3236a:	db 28                	fldt   (%eax)
   3236c:	83 c0 0c             	add    $0xc,%eax
   3236f:	89 45 14             	mov    %eax,0x14(%ebp)
   32372:	dd 9d 10 ff ff ff    	fstpl  -0xf0(%ebp)
   32378:	dd 85 10 ff ff ff    	fldl   -0xf0(%ebp)
   3237e:	dd 1c 24             	fstpl  (%esp)
   32381:	e8 aa 44 00 00       	call   36830 <__fpclassifyd>
   32386:	83 f8 01             	cmp    $0x1,%eax
   32389:	0f 85 82 0f 00 00    	jne    33311 <_svfprintf_r+0x1501>
   3238f:	d9 ee                	fldz   
   32391:	dd 85 10 ff ff ff    	fldl   -0xf0(%ebp)
   32397:	d9 c9                	fxch   %st(1)
   32399:	df e9                	fucomip %st(1),%st
   3239b:	dd d8                	fstp   %st(0)
   3239d:	0f 87 59 15 00 00    	ja     338fc <_svfprintf_r+0x1aec>
   323a3:	0f b6 9d 59 ff ff ff 	movzbl -0xa7(%ebp),%ebx
   323aa:	83 bd 24 ff ff ff 47 	cmpl   $0x47,-0xdc(%ebp)
   323b1:	ba b2 8d 03 00       	mov    $0x38db2,%edx
   323b6:	b8 b6 8d 03 00       	mov    $0x38db6,%eax
   323bb:	c7 85 48 ff ff ff 03 	movl   $0x3,-0xb8(%ebp)
   323c2:	00 00 00 
   323c5:	0f 4e c2             	cmovle %edx,%eax
   323c8:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
   323ce:	81 a5 4c ff ff ff 7f 	andl   $0xffffff7f,-0xb4(%ebp)
   323d5:	ff ff ff 
   323d8:	c7 85 38 ff ff ff 03 	movl   $0x3,-0xc8(%ebp)
   323df:	00 00 00 
   323e2:	c7 85 44 ff ff ff 00 	movl   $0x0,-0xbc(%ebp)
   323e9:	00 00 00 
   323ec:	c7 85 20 ff ff ff 00 	movl   $0x0,-0xe0(%ebp)
   323f3:	00 00 00 
   323f6:	e9 ad fc ff ff       	jmp    320a8 <_svfprintf_r+0x298>
   323fb:	8d 41 01             	lea    0x1(%ecx),%eax
   323fe:	89 85 48 ff ff ff    	mov    %eax,-0xb8(%ebp)
   32404:	0f be 01             	movsbl (%ecx),%eax
   32407:	83 f8 2a             	cmp    $0x2a,%eax
   3240a:	0f 84 84 18 00 00    	je     33c94 <_svfprintf_r+0x1e84>
   32410:	8d 50 d0             	lea    -0x30(%eax),%edx
   32413:	31 c9                	xor    %ecx,%ecx
   32415:	83 fa 09             	cmp    $0x9,%edx
   32418:	0f 87 a8 16 00 00    	ja     33ac6 <_svfprintf_r+0x1cb6>
   3241e:	89 bd 44 ff ff ff    	mov    %edi,-0xbc(%ebp)
   32424:	8b bd 48 ff ff ff    	mov    -0xb8(%ebp),%edi
   3242a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   32430:	8d 04 89             	lea    (%ecx,%ecx,4),%eax
   32433:	83 c7 01             	add    $0x1,%edi
   32436:	8d 0c 42             	lea    (%edx,%eax,2),%ecx
   32439:	0f be 47 ff          	movsbl -0x1(%edi),%eax
   3243d:	8d 50 d0             	lea    -0x30(%eax),%edx
   32440:	83 fa 09             	cmp    $0x9,%edx
   32443:	76 eb                	jbe    32430 <_svfprintf_r+0x620>
   32445:	85 c9                	test   %ecx,%ecx
   32447:	89 ca                	mov    %ecx,%edx
   32449:	b9 ff ff ff ff       	mov    $0xffffffff,%ecx
   3244e:	0f 48 d1             	cmovs  %ecx,%edx
   32451:	89 bd 48 ff ff ff    	mov    %edi,-0xb8(%ebp)
   32457:	8b bd 44 ff ff ff    	mov    -0xbc(%ebp),%edi
   3245d:	8b 8d 48 ff ff ff    	mov    -0xb8(%ebp),%ecx
   32463:	89 95 44 ff ff ff    	mov    %edx,-0xbc(%ebp)
   32469:	e9 d5 fa ff ff       	jmp    31f43 <_svfprintf_r+0x133>
   3246e:	8b 45 14             	mov    0x14(%ebp),%eax
   32471:	89 4d 10             	mov    %ecx,0x10(%ebp)
   32474:	83 8d 4c ff ff ff 02 	orl    $0x2,-0xb4(%ebp)
   3247b:	8b 08                	mov    (%eax),%ecx
   3247d:	83 c0 04             	add    $0x4,%eax
   32480:	89 45 14             	mov    %eax,0x14(%ebp)
   32483:	b8 02 00 00 00       	mov    $0x2,%eax
   32488:	c6 85 5a ff ff ff 30 	movb   $0x30,-0xa6(%ebp)
   3248f:	c6 85 5b ff ff ff 78 	movb   $0x78,-0xa5(%ebp)
   32496:	c7 85 18 ff ff ff d3 	movl   $0x38dd3,-0xe8(%ebp)
   3249d:	8d 03 00 
   324a0:	c7 85 24 ff ff ff 78 	movl   $0x78,-0xdc(%ebp)
   324a7:	00 00 00 
   324aa:	e9 41 fd ff ff       	jmp    321f0 <_svfprintf_r+0x3e0>
   324af:	f6 85 4c ff ff ff 10 	testb  $0x10,-0xb4(%ebp)
   324b6:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%ebp)
   324bc:	8b 45 14             	mov    0x14(%ebp),%eax
   324bf:	89 4d 10             	mov    %ecx,0x10(%ebp)
   324c2:	0f 85 87 00 00 00    	jne    3254f <_svfprintf_r+0x73f>
   324c8:	f6 85 4c ff ff ff 40 	testb  $0x40,-0xb4(%ebp)
   324cf:	74 7e                	je     3254f <_svfprintf_r+0x73f>
   324d1:	0f b7 08             	movzwl (%eax),%ecx
   324d4:	83 c0 04             	add    $0x4,%eax
   324d7:	89 45 14             	mov    %eax,0x14(%ebp)
   324da:	31 c0                	xor    %eax,%eax
   324dc:	e9 0f fd ff ff       	jmp    321f0 <_svfprintf_r+0x3e0>
   324e1:	83 8d 4c ff ff ff 08 	orl    $0x8,-0xb4(%ebp)
   324e8:	89 c8                	mov    %ecx,%eax
   324ea:	e9 4e fa ff ff       	jmp    31f3d <_svfprintf_r+0x12d>
   324ef:	f6 85 4c ff ff ff 10 	testb  $0x10,-0xb4(%ebp)
   324f6:	89 4d 10             	mov    %ecx,0x10(%ebp)
   324f9:	88 9d 59 ff ff ff    	mov    %bl,-0xa7(%ebp)
   324ff:	0f 85 97 0b 00 00    	jne    3309c <_svfprintf_r+0x128c>
   32505:	f6 85 4c ff ff ff 40 	testb  $0x40,-0xb4(%ebp)
   3250c:	0f 84 8a 0b 00 00    	je     3309c <_svfprintf_r+0x128c>
   32512:	8b 45 14             	mov    0x14(%ebp),%eax
   32515:	0f b7 95 34 ff ff ff 	movzwl -0xcc(%ebp),%edx
   3251c:	8b 00                	mov    (%eax),%eax
   3251e:	66 89 10             	mov    %dx,(%eax)
   32521:	8b 45 14             	mov    0x14(%ebp),%eax
   32524:	83 c0 04             	add    $0x4,%eax
   32527:	89 45 14             	mov    %eax,0x14(%ebp)
   3252a:	e9 7c f9 ff ff       	jmp    31eab <_svfprintf_r+0x9b>
   3252f:	83 8d 4c ff ff ff 10 	orl    $0x10,-0xb4(%ebp)
   32536:	f6 85 4c ff ff ff 10 	testb  $0x10,-0xb4(%ebp)
   3253d:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%ebp)
   32543:	8b 45 14             	mov    0x14(%ebp),%eax
   32546:	89 4d 10             	mov    %ecx,0x10(%ebp)
   32549:	0f 84 79 ff ff ff    	je     324c8 <_svfprintf_r+0x6b8>
   3254f:	8b 08                	mov    (%eax),%ecx
   32551:	83 c0 04             	add    $0x4,%eax
   32554:	89 45 14             	mov    %eax,0x14(%ebp)
   32557:	31 c0                	xor    %eax,%eax
   32559:	e9 92 fc ff ff       	jmp    321f0 <_svfprintf_r+0x3e0>
   3255e:	f6 85 4c ff ff ff 10 	testb  $0x10,-0xb4(%ebp)
   32565:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%ebp)
   3256b:	8b 45 14             	mov    0x14(%ebp),%eax
   3256e:	89 4d 10             	mov    %ecx,0x10(%ebp)
   32571:	88 9d 59 ff ff ff    	mov    %bl,-0xa7(%ebp)
   32577:	0f 84 9f fd ff ff    	je     3231c <_svfprintf_r+0x50c>
   3257d:	8b 08                	mov    (%eax),%ecx
   3257f:	83 c0 04             	add    $0x4,%eax
   32582:	89 45 14             	mov    %eax,0x14(%ebp)
   32585:	85 c9                	test   %ecx,%ecx
   32587:	0f 89 ad fd ff ff    	jns    3233a <_svfprintf_r+0x52a>
   3258d:	f7 d9                	neg    %ecx
   3258f:	bb 2d 00 00 00       	mov    $0x2d,%ebx
   32594:	c6 85 59 ff ff ff 2d 	movb   $0x2d,-0xa7(%ebp)
   3259b:	b8 01 00 00 00       	mov    $0x1,%eax
   325a0:	e9 54 fc ff ff       	jmp    321f9 <_svfprintf_r+0x3e9>
   325a5:	83 8d 4c ff ff ff 40 	orl    $0x40,-0xb4(%ebp)
   325ac:	89 c8                	mov    %ecx,%eax
   325ae:	e9 8a f9 ff ff       	jmp    31f3d <_svfprintf_r+0x12d>
   325b3:	f6 85 4c ff ff ff 10 	testb  $0x10,-0xb4(%ebp)
   325ba:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%ebp)
   325c0:	8b 45 14             	mov    0x14(%ebp),%eax
   325c3:	89 4d 10             	mov    %ecx,0x10(%ebp)
   325c6:	88 9d 59 ff ff ff    	mov    %bl,-0xa7(%ebp)
   325cc:	c7 85 18 ff ff ff d3 	movl   $0x38dd3,-0xe8(%ebp)
   325d3:	8d 03 00 
   325d6:	75 71                	jne    32649 <_svfprintf_r+0x839>
   325d8:	f6 85 4c ff ff ff 40 	testb  $0x40,-0xb4(%ebp)
   325df:	74 68                	je     32649 <_svfprintf_r+0x839>
   325e1:	0f b7 08             	movzwl (%eax),%ecx
   325e4:	83 c0 04             	add    $0x4,%eax
   325e7:	89 45 14             	mov    %eax,0x14(%ebp)
   325ea:	f6 85 4c ff ff ff 01 	testb  $0x1,-0xb4(%ebp)
   325f1:	b8 02 00 00 00       	mov    $0x2,%eax
   325f6:	0f 84 f4 fb ff ff    	je     321f0 <_svfprintf_r+0x3e0>
   325fc:	85 c9                	test   %ecx,%ecx
   325fe:	0f 84 ec fb ff ff    	je     321f0 <_svfprintf_r+0x3e0>
   32604:	0f b6 95 24 ff ff ff 	movzbl -0xdc(%ebp),%edx
   3260b:	c6 85 5a ff ff ff 30 	movb   $0x30,-0xa6(%ebp)
   32612:	83 8d 4c ff ff ff 02 	orl    $0x2,-0xb4(%ebp)
   32619:	88 95 5b ff ff ff    	mov    %dl,-0xa5(%ebp)
   3261f:	e9 cc fb ff ff       	jmp    321f0 <_svfprintf_r+0x3e0>
   32624:	f6 85 4c ff ff ff 10 	testb  $0x10,-0xb4(%ebp)
   3262b:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%ebp)
   32631:	8b 45 14             	mov    0x14(%ebp),%eax
   32634:	89 4d 10             	mov    %ecx,0x10(%ebp)
   32637:	88 9d 59 ff ff ff    	mov    %bl,-0xa7(%ebp)
   3263d:	c7 85 18 ff ff ff c2 	movl   $0x38dc2,-0xe8(%ebp)
   32644:	8d 03 00 
   32647:	74 8f                	je     325d8 <_svfprintf_r+0x7c8>
   32649:	8b 08                	mov    (%eax),%ecx
   3264b:	83 c0 04             	add    $0x4,%eax
   3264e:	89 45 14             	mov    %eax,0x14(%ebp)
   32651:	eb 97                	jmp    325ea <_svfprintf_r+0x7da>
   32653:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%ebp)
   32659:	8b 45 14             	mov    0x14(%ebp),%eax
   3265c:	89 4d 10             	mov    %ecx,0x10(%ebp)
   3265f:	c6 85 59 ff ff ff 00 	movb   $0x0,-0xa7(%ebp)
   32666:	8b 00                	mov    (%eax),%eax
   32668:	88 45 80             	mov    %al,-0x80(%ebp)
   3266b:	8b 45 14             	mov    0x14(%ebp),%eax
   3266e:	83 c0 04             	add    $0x4,%eax
   32671:	89 45 14             	mov    %eax,0x14(%ebp)
   32674:	8d 45 80             	lea    -0x80(%ebp),%eax
   32677:	31 db                	xor    %ebx,%ebx
   32679:	c7 85 48 ff ff ff 01 	movl   $0x1,-0xb8(%ebp)
   32680:	00 00 00 
   32683:	c7 85 38 ff ff ff 01 	movl   $0x1,-0xc8(%ebp)
   3268a:	00 00 00 
   3268d:	c7 85 44 ff ff ff 00 	movl   $0x0,-0xbc(%ebp)
   32694:	00 00 00 
   32697:	c7 85 20 ff ff ff 00 	movl   $0x0,-0xe0(%ebp)
   3269e:	00 00 00 
   326a1:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
   326a7:	e9 07 fa ff ff       	jmp    320b3 <_svfprintf_r+0x2a3>
   326ac:	83 8d 4c ff ff ff 10 	orl    $0x10,-0xb4(%ebp)
   326b3:	f6 85 4c ff ff ff 10 	testb  $0x10,-0xb4(%ebp)
   326ba:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%ebp)
   326c0:	8b 45 14             	mov    0x14(%ebp),%eax
   326c3:	89 4d 10             	mov    %ecx,0x10(%ebp)
   326c6:	0f 84 03 fb ff ff    	je     321cf <_svfprintf_r+0x3bf>
   326cc:	8b 08                	mov    (%eax),%ecx
   326ce:	83 c0 04             	add    $0x4,%eax
   326d1:	89 45 14             	mov    %eax,0x14(%ebp)
   326d4:	b8 01 00 00 00       	mov    $0x1,%eax
   326d9:	e9 12 fb ff ff       	jmp    321f0 <_svfprintf_r+0x3e0>
   326de:	85 c0                	test   %eax,%eax
   326e0:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%ebp)
   326e6:	89 4d 10             	mov    %ecx,0x10(%ebp)
   326e9:	88 9d 59 ff ff ff    	mov    %bl,-0xa7(%ebp)
   326ef:	0f 84 c3 f8 ff ff    	je     31fb8 <_svfprintf_r+0x1a8>
   326f5:	88 45 80             	mov    %al,-0x80(%ebp)
   326f8:	c6 85 59 ff ff ff 00 	movb   $0x0,-0xa7(%ebp)
   326ff:	e9 70 ff ff ff       	jmp    32674 <_svfprintf_r+0x864>
   32704:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   32708:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   3270e:	84 db                	test   %bl,%bl
   32710:	74 33                	je     32745 <_svfprintf_r+0x935>
   32712:	8d 85 59 ff ff ff    	lea    -0xa7(%ebp),%eax
   32718:	83 c1 01             	add    $0x1,%ecx
   3271b:	89 07                	mov    %eax,(%edi)
   3271d:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   32723:	83 c7 08             	add    $0x8,%edi
   32726:	c7 47 fc 01 00 00 00 	movl   $0x1,-0x4(%edi)
   3272d:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   32733:	83 c0 01             	add    $0x1,%eax
   32736:	83 f8 07             	cmp    $0x7,%eax
   32739:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   3273f:	0f 8f 7b 06 00 00    	jg     32dc0 <_svfprintf_r+0xfb0>
   32745:	8b 9d 30 ff ff ff    	mov    -0xd0(%ebp),%ebx
   3274b:	85 db                	test   %ebx,%ebx
   3274d:	74 33                	je     32782 <_svfprintf_r+0x972>
   3274f:	8d 85 5a ff ff ff    	lea    -0xa6(%ebp),%eax
   32755:	83 c1 02             	add    $0x2,%ecx
   32758:	89 07                	mov    %eax,(%edi)
   3275a:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   32760:	83 c7 08             	add    $0x8,%edi
   32763:	c7 47 fc 02 00 00 00 	movl   $0x2,-0x4(%edi)
   3276a:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   32770:	83 c0 01             	add    $0x1,%eax
   32773:	83 f8 07             	cmp    $0x7,%eax
   32776:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   3277c:	0f 8f 06 06 00 00    	jg     32d88 <_svfprintf_r+0xf78>
   32782:	81 bd 2c ff ff ff 80 	cmpl   $0x80,-0xd4(%ebp)
   32789:	00 00 00 
   3278c:	0f 84 c6 03 00 00    	je     32b58 <_svfprintf_r+0xd48>
   32792:	8b b5 44 ff ff ff    	mov    -0xbc(%ebp),%esi
   32798:	2b b5 38 ff ff ff    	sub    -0xc8(%ebp),%esi
   3279e:	85 f6                	test   %esi,%esi
   327a0:	0f 8e d2 00 00 00    	jle    32878 <_svfprintf_r+0xa68>
   327a6:	83 fe 10             	cmp    $0x10,%esi
   327a9:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   327af:	8d 9d 74 ff ff ff    	lea    -0x8c(%ebp),%ebx
   327b5:	7f 11                	jg     327c8 <_svfprintf_r+0x9b8>
   327b7:	eb 6b                	jmp    32824 <_svfprintf_r+0xa14>
   327b9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   327c0:	83 ee 10             	sub    $0x10,%esi
   327c3:	83 fe 10             	cmp    $0x10,%esi
   327c6:	7e 5c                	jle    32824 <_svfprintf_r+0xa14>
   327c8:	83 c0 01             	add    $0x1,%eax
   327cb:	83 c1 10             	add    $0x10,%ecx
   327ce:	c7 07 54 8f 03 00    	movl   $0x38f54,(%edi)
   327d4:	83 c7 08             	add    $0x8,%edi
   327d7:	c7 47 fc 10 00 00 00 	movl   $0x10,-0x4(%edi)
   327de:	83 f8 07             	cmp    $0x7,%eax
   327e1:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   327e7:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   327ed:	7e d1                	jle    327c0 <_svfprintf_r+0x9b0>
   327ef:	8b 45 0c             	mov    0xc(%ebp),%eax
   327f2:	89 5c 24 08          	mov    %ebx,0x8(%esp)
   327f6:	89 44 24 04          	mov    %eax,0x4(%esp)
   327fa:	8b 45 08             	mov    0x8(%ebp),%eax
   327fd:	89 04 24             	mov    %eax,(%esp)
   32800:	e8 8b 41 00 00       	call   36990 <__ssprint_r>
   32805:	85 c0                	test   %eax,%eax
   32807:	0f 85 d3 f7 ff ff    	jne    31fe0 <_svfprintf_r+0x1d0>
   3280d:	83 ee 10             	sub    $0x10,%esi
   32810:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   32816:	83 fe 10             	cmp    $0x10,%esi
   32819:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   3281f:	8d 7d a8             	lea    -0x58(%ebp),%edi
   32822:	7f a4                	jg     327c8 <_svfprintf_r+0x9b8>
   32824:	83 c0 01             	add    $0x1,%eax
   32827:	01 f1                	add    %esi,%ecx
   32829:	c7 07 54 8f 03 00    	movl   $0x38f54,(%edi)
   3282f:	83 c7 08             	add    $0x8,%edi
   32832:	89 77 fc             	mov    %esi,-0x4(%edi)
   32835:	83 f8 07             	cmp    $0x7,%eax
   32838:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   3283e:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   32844:	7e 32                	jle    32878 <_svfprintf_r+0xa68>
   32846:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   3284c:	89 44 24 08          	mov    %eax,0x8(%esp)
   32850:	8b 45 0c             	mov    0xc(%ebp),%eax
   32853:	89 44 24 04          	mov    %eax,0x4(%esp)
   32857:	8b 45 08             	mov    0x8(%ebp),%eax
   3285a:	89 04 24             	mov    %eax,(%esp)
   3285d:	e8 2e 41 00 00       	call   36990 <__ssprint_r>
   32862:	85 c0                	test   %eax,%eax
   32864:	0f 85 76 f7 ff ff    	jne    31fe0 <_svfprintf_r+0x1d0>
   3286a:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   32870:	8d 7d a8             	lea    -0x58(%ebp),%edi
   32873:	90                   	nop
   32874:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   32878:	f7 85 4c ff ff ff 00 	testl  $0x100,-0xb4(%ebp)
   3287f:	01 00 00 
   32882:	0f 85 50 01 00 00    	jne    329d8 <_svfprintf_r+0xbc8>
   32888:	8b 85 28 ff ff ff    	mov    -0xd8(%ebp),%eax
   3288e:	89 07                	mov    %eax,(%edi)
   32890:	8b 85 38 ff ff ff    	mov    -0xc8(%ebp),%eax
   32896:	01 c1                	add    %eax,%ecx
   32898:	89 47 04             	mov    %eax,0x4(%edi)
   3289b:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   328a1:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   328a7:	83 c0 01             	add    $0x1,%eax
   328aa:	83 f8 07             	cmp    $0x7,%eax
   328ad:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   328b3:	0f 8f 6a 04 00 00    	jg     32d23 <_svfprintf_r+0xf13>
   328b9:	83 c7 08             	add    $0x8,%edi
   328bc:	f6 85 4c ff ff ff 04 	testb  $0x4,-0xb4(%ebp)
   328c3:	0f 84 d7 00 00 00    	je     329a0 <_svfprintf_r+0xb90>
   328c9:	8b b5 40 ff ff ff    	mov    -0xc0(%ebp),%esi
   328cf:	2b b5 48 ff ff ff    	sub    -0xb8(%ebp),%esi
   328d5:	85 f6                	test   %esi,%esi
   328d7:	0f 8e c3 00 00 00    	jle    329a0 <_svfprintf_r+0xb90>
   328dd:	83 fe 10             	cmp    $0x10,%esi
   328e0:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   328e6:	8d 9d 74 ff ff ff    	lea    -0x8c(%ebp),%ebx
   328ec:	7f 0a                	jg     328f8 <_svfprintf_r+0xae8>
   328ee:	eb 64                	jmp    32954 <_svfprintf_r+0xb44>
   328f0:	83 ee 10             	sub    $0x10,%esi
   328f3:	83 fe 10             	cmp    $0x10,%esi
   328f6:	7e 5c                	jle    32954 <_svfprintf_r+0xb44>
   328f8:	83 c0 01             	add    $0x1,%eax
   328fb:	83 c1 10             	add    $0x10,%ecx
   328fe:	c7 07 64 8f 03 00    	movl   $0x38f64,(%edi)
   32904:	83 c7 08             	add    $0x8,%edi
   32907:	c7 47 fc 10 00 00 00 	movl   $0x10,-0x4(%edi)
   3290e:	83 f8 07             	cmp    $0x7,%eax
   32911:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   32917:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   3291d:	7e d1                	jle    328f0 <_svfprintf_r+0xae0>
   3291f:	8b 45 0c             	mov    0xc(%ebp),%eax
   32922:	89 5c 24 08          	mov    %ebx,0x8(%esp)
   32926:	89 44 24 04          	mov    %eax,0x4(%esp)
   3292a:	8b 45 08             	mov    0x8(%ebp),%eax
   3292d:	89 04 24             	mov    %eax,(%esp)
   32930:	e8 5b 40 00 00       	call   36990 <__ssprint_r>
   32935:	85 c0                	test   %eax,%eax
   32937:	0f 85 a3 f6 ff ff    	jne    31fe0 <_svfprintf_r+0x1d0>
   3293d:	83 ee 10             	sub    $0x10,%esi
   32940:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   32946:	83 fe 10             	cmp    $0x10,%esi
   32949:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   3294f:	8d 7d a8             	lea    -0x58(%ebp),%edi
   32952:	7f a4                	jg     328f8 <_svfprintf_r+0xae8>
   32954:	83 c0 01             	add    $0x1,%eax
   32957:	01 f1                	add    %esi,%ecx
   32959:	83 f8 07             	cmp    $0x7,%eax
   3295c:	c7 07 64 8f 03 00    	movl   $0x38f64,(%edi)
   32962:	89 77 04             	mov    %esi,0x4(%edi)
   32965:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   3296b:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   32971:	7e 2d                	jle    329a0 <_svfprintf_r+0xb90>
   32973:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   32979:	89 44 24 08          	mov    %eax,0x8(%esp)
   3297d:	8b 45 0c             	mov    0xc(%ebp),%eax
   32980:	89 44 24 04          	mov    %eax,0x4(%esp)
   32984:	8b 45 08             	mov    0x8(%ebp),%eax
   32987:	89 04 24             	mov    %eax,(%esp)
   3298a:	e8 01 40 00 00       	call   36990 <__ssprint_r>
   3298f:	85 c0                	test   %eax,%eax
   32991:	0f 85 49 f6 ff ff    	jne    31fe0 <_svfprintf_r+0x1d0>
   32997:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   3299d:	8d 76 00             	lea    0x0(%esi),%esi
   329a0:	8b 85 40 ff ff ff    	mov    -0xc0(%ebp),%eax
   329a6:	8b 95 48 ff ff ff    	mov    -0xb8(%ebp),%edx
   329ac:	39 c2                	cmp    %eax,%edx
   329ae:	0f 4d c2             	cmovge %edx,%eax
   329b1:	01 85 34 ff ff ff    	add    %eax,-0xcc(%ebp)
   329b7:	85 c9                	test   %ecx,%ecx
   329b9:	0f 85 99 03 00 00    	jne    32d58 <_svfprintf_r+0xf48>
   329bf:	c7 85 78 ff ff ff 00 	movl   $0x0,-0x88(%ebp)
   329c6:	00 00 00 
   329c9:	8d 7d a8             	lea    -0x58(%ebp),%edi
   329cc:	e9 da f4 ff ff       	jmp    31eab <_svfprintf_r+0x9b>
   329d1:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   329d8:	83 bd 24 ff ff ff 65 	cmpl   $0x65,-0xdc(%ebp)
   329df:	0f 8e 5b 02 00 00    	jle    32c40 <_svfprintf_r+0xe30>
   329e5:	d9 ee                	fldz   
   329e7:	dd 85 10 ff ff ff    	fldl   -0xf0(%ebp)
   329ed:	df e9                	fucomip %st(1),%st
   329ef:	dd d8                	fstp   %st(0)
   329f1:	0f 8a 59 04 00 00    	jp     32e50 <_svfprintf_r+0x1040>
   329f7:	0f 85 53 04 00 00    	jne    32e50 <_svfprintf_r+0x1040>
   329fd:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   32a03:	83 c1 01             	add    $0x1,%ecx
   32a06:	83 c7 08             	add    $0x8,%edi
   32a09:	c7 47 f8 eb 8d 03 00 	movl   $0x38deb,-0x8(%edi)
   32a10:	c7 47 fc 01 00 00 00 	movl   $0x1,-0x4(%edi)
   32a17:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   32a1d:	83 c0 01             	add    $0x1,%eax
   32a20:	83 f8 07             	cmp    $0x7,%eax
   32a23:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   32a29:	0f 8f 63 09 00 00    	jg     33392 <_svfprintf_r+0x1582>
   32a2f:	8b 85 1c ff ff ff    	mov    -0xe4(%ebp),%eax
   32a35:	39 85 5c ff ff ff    	cmp    %eax,-0xa4(%ebp)
   32a3b:	7c 0d                	jl     32a4a <_svfprintf_r+0xc3a>
   32a3d:	f6 85 4c ff ff ff 01 	testb  $0x1,-0xb4(%ebp)
   32a44:	0f 84 72 fe ff ff    	je     328bc <_svfprintf_r+0xaac>
   32a4a:	8b 85 0c ff ff ff    	mov    -0xf4(%ebp),%eax
   32a50:	83 c7 08             	add    $0x8,%edi
   32a53:	89 47 f8             	mov    %eax,-0x8(%edi)
   32a56:	8b 85 08 ff ff ff    	mov    -0xf8(%ebp),%eax
   32a5c:	89 47 fc             	mov    %eax,-0x4(%edi)
   32a5f:	01 c1                	add    %eax,%ecx
   32a61:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   32a67:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   32a6d:	83 c0 01             	add    $0x1,%eax
   32a70:	83 f8 07             	cmp    $0x7,%eax
   32a73:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   32a79:	0f 8f dc 0b 00 00    	jg     3365b <_svfprintf_r+0x184b>
   32a7f:	8b 85 1c ff ff ff    	mov    -0xe4(%ebp),%eax
   32a85:	8d 70 ff             	lea    -0x1(%eax),%esi
   32a88:	85 f6                	test   %esi,%esi
   32a8a:	0f 8e 2c fe ff ff    	jle    328bc <_svfprintf_r+0xaac>
   32a90:	83 fe 10             	cmp    $0x10,%esi
   32a93:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   32a99:	8d 9d 74 ff ff ff    	lea    -0x8c(%ebp),%ebx
   32a9f:	7f 13                	jg     32ab4 <_svfprintf_r+0xca4>
   32aa1:	e9 e6 05 00 00       	jmp    3308c <_svfprintf_r+0x127c>
   32aa6:	66 90                	xchg   %ax,%ax
   32aa8:	83 ee 10             	sub    $0x10,%esi
   32aab:	83 fe 10             	cmp    $0x10,%esi
   32aae:	0f 8e d8 05 00 00    	jle    3308c <_svfprintf_r+0x127c>
   32ab4:	83 c0 01             	add    $0x1,%eax
   32ab7:	83 c1 10             	add    $0x10,%ecx
   32aba:	c7 07 54 8f 03 00    	movl   $0x38f54,(%edi)
   32ac0:	83 c7 08             	add    $0x8,%edi
   32ac3:	c7 47 fc 10 00 00 00 	movl   $0x10,-0x4(%edi)
   32aca:	83 f8 07             	cmp    $0x7,%eax
   32acd:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   32ad3:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   32ad9:	7e cd                	jle    32aa8 <_svfprintf_r+0xc98>
   32adb:	8b 45 0c             	mov    0xc(%ebp),%eax
   32ade:	89 5c 24 08          	mov    %ebx,0x8(%esp)
   32ae2:	89 44 24 04          	mov    %eax,0x4(%esp)
   32ae6:	8b 45 08             	mov    0x8(%ebp),%eax
   32ae9:	89 04 24             	mov    %eax,(%esp)
   32aec:	e8 9f 3e 00 00       	call   36990 <__ssprint_r>
   32af1:	85 c0                	test   %eax,%eax
   32af3:	0f 85 e7 f4 ff ff    	jne    31fe0 <_svfprintf_r+0x1d0>
   32af9:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   32aff:	8d 7d a8             	lea    -0x58(%ebp),%edi
   32b02:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   32b08:	eb 9e                	jmp    32aa8 <_svfprintf_r+0xc98>
   32b0a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   32b10:	84 c0                	test   %al,%al
   32b12:	75 2c                	jne    32b40 <_svfprintf_r+0xd30>
   32b14:	f6 85 4c ff ff ff 01 	testb  $0x1,-0xb4(%ebp)
   32b1b:	74 23                	je     32b40 <_svfprintf_r+0xd30>
   32b1d:	8b 85 00 ff ff ff    	mov    -0x100(%ebp),%eax
   32b23:	c6 45 a7 30          	movb   $0x30,-0x59(%ebp)
   32b27:	89 85 38 ff ff ff    	mov    %eax,-0xc8(%ebp)
   32b2d:	8d 45 a7             	lea    -0x59(%ebp),%eax
   32b30:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
   32b36:	e9 2d f7 ff ff       	jmp    32268 <_svfprintf_r+0x458>
   32b3b:	90                   	nop
   32b3c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   32b40:	8d 45 a8             	lea    -0x58(%ebp),%eax
   32b43:	c7 85 38 ff ff ff 00 	movl   $0x0,-0xc8(%ebp)
   32b4a:	00 00 00 
   32b4d:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
   32b53:	e9 10 f7 ff ff       	jmp    32268 <_svfprintf_r+0x458>
   32b58:	8b b5 40 ff ff ff    	mov    -0xc0(%ebp),%esi
   32b5e:	2b b5 48 ff ff ff    	sub    -0xb8(%ebp),%esi
   32b64:	85 f6                	test   %esi,%esi
   32b66:	0f 8e 26 fc ff ff    	jle    32792 <_svfprintf_r+0x982>
   32b6c:	83 fe 10             	cmp    $0x10,%esi
   32b6f:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   32b75:	8d 9d 74 ff ff ff    	lea    -0x8c(%ebp),%ebx
   32b7b:	7f 0b                	jg     32b88 <_svfprintf_r+0xd78>
   32b7d:	eb 65                	jmp    32be4 <_svfprintf_r+0xdd4>
   32b7f:	90                   	nop
   32b80:	83 ee 10             	sub    $0x10,%esi
   32b83:	83 fe 10             	cmp    $0x10,%esi
   32b86:	7e 5c                	jle    32be4 <_svfprintf_r+0xdd4>
   32b88:	83 c0 01             	add    $0x1,%eax
   32b8b:	83 c1 10             	add    $0x10,%ecx
   32b8e:	c7 07 54 8f 03 00    	movl   $0x38f54,(%edi)
   32b94:	83 c7 08             	add    $0x8,%edi
   32b97:	c7 47 fc 10 00 00 00 	movl   $0x10,-0x4(%edi)
   32b9e:	83 f8 07             	cmp    $0x7,%eax
   32ba1:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   32ba7:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   32bad:	7e d1                	jle    32b80 <_svfprintf_r+0xd70>
   32baf:	8b 45 0c             	mov    0xc(%ebp),%eax
   32bb2:	89 5c 24 08          	mov    %ebx,0x8(%esp)
   32bb6:	89 44 24 04          	mov    %eax,0x4(%esp)
   32bba:	8b 45 08             	mov    0x8(%ebp),%eax
   32bbd:	89 04 24             	mov    %eax,(%esp)
   32bc0:	e8 cb 3d 00 00       	call   36990 <__ssprint_r>
   32bc5:	85 c0                	test   %eax,%eax
   32bc7:	0f 85 13 f4 ff ff    	jne    31fe0 <_svfprintf_r+0x1d0>
   32bcd:	83 ee 10             	sub    $0x10,%esi
   32bd0:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   32bd6:	83 fe 10             	cmp    $0x10,%esi
   32bd9:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   32bdf:	8d 7d a8             	lea    -0x58(%ebp),%edi
   32be2:	7f a4                	jg     32b88 <_svfprintf_r+0xd78>
   32be4:	83 c0 01             	add    $0x1,%eax
   32be7:	01 f1                	add    %esi,%ecx
   32be9:	c7 07 54 8f 03 00    	movl   $0x38f54,(%edi)
   32bef:	83 c7 08             	add    $0x8,%edi
   32bf2:	89 77 fc             	mov    %esi,-0x4(%edi)
   32bf5:	83 f8 07             	cmp    $0x7,%eax
   32bf8:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   32bfe:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   32c04:	0f 8e 88 fb ff ff    	jle    32792 <_svfprintf_r+0x982>
   32c0a:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   32c10:	89 44 24 08          	mov    %eax,0x8(%esp)
   32c14:	8b 45 0c             	mov    0xc(%ebp),%eax
   32c17:	89 44 24 04          	mov    %eax,0x4(%esp)
   32c1b:	8b 45 08             	mov    0x8(%ebp),%eax
   32c1e:	89 04 24             	mov    %eax,(%esp)
   32c21:	e8 6a 3d 00 00       	call   36990 <__ssprint_r>
   32c26:	85 c0                	test   %eax,%eax
   32c28:	0f 85 b2 f3 ff ff    	jne    31fe0 <_svfprintf_r+0x1d0>
   32c2e:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   32c34:	8d 7d a8             	lea    -0x58(%ebp),%edi
   32c37:	e9 56 fb ff ff       	jmp    32792 <_svfprintf_r+0x982>
   32c3c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   32c40:	83 bd 1c ff ff ff 01 	cmpl   $0x1,-0xe4(%ebp)
   32c47:	8b 85 28 ff ff ff    	mov    -0xd8(%ebp),%eax
   32c4d:	0f 8e df 05 00 00    	jle    33232 <_svfprintf_r+0x1422>
   32c53:	89 07                	mov    %eax,(%edi)
   32c55:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   32c5b:	8d 51 01             	lea    0x1(%ecx),%edx
   32c5e:	c7 47 04 01 00 00 00 	movl   $0x1,0x4(%edi)
   32c65:	83 c7 08             	add    $0x8,%edi
   32c68:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
   32c6e:	83 c0 01             	add    $0x1,%eax
   32c71:	83 f8 07             	cmp    $0x7,%eax
   32c74:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   32c7a:	0f 8f 59 06 00 00    	jg     332d9 <_svfprintf_r+0x14c9>
   32c80:	8b 9d 0c ff ff ff    	mov    -0xf4(%ebp),%ebx
   32c86:	83 c0 01             	add    $0x1,%eax
   32c89:	83 c7 08             	add    $0x8,%edi
   32c8c:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   32c92:	89 5f f8             	mov    %ebx,-0x8(%edi)
   32c95:	8b 9d 08 ff ff ff    	mov    -0xf8(%ebp),%ebx
   32c9b:	89 5f fc             	mov    %ebx,-0x4(%edi)
   32c9e:	01 da                	add    %ebx,%edx
   32ca0:	83 f8 07             	cmp    $0x7,%eax
   32ca3:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
   32ca9:	0f 8f f2 05 00 00    	jg     332a1 <_svfprintf_r+0x1491>
   32caf:	d9 ee                	fldz   
   32cb1:	dd 85 10 ff ff ff    	fldl   -0xf0(%ebp)
   32cb7:	df e9                	fucomip %st(1),%st
   32cb9:	dd d8                	fstp   %st(0)
   32cbb:	7a 06                	jp     32cc3 <_svfprintf_r+0xeb3>
   32cbd:	0f 84 33 03 00 00    	je     32ff6 <_svfprintf_r+0x11e6>
   32cc3:	8b 8d 28 ff ff ff    	mov    -0xd8(%ebp),%ecx
   32cc9:	8b 9d 1c ff ff ff    	mov    -0xe4(%ebp),%ebx
   32ccf:	83 c1 01             	add    $0x1,%ecx
   32cd2:	89 0f                	mov    %ecx,(%edi)
   32cd4:	8d 4b ff             	lea    -0x1(%ebx),%ecx
   32cd7:	89 4f 04             	mov    %ecx,0x4(%edi)
   32cda:	01 ca                	add    %ecx,%edx
   32cdc:	83 c0 01             	add    $0x1,%eax
   32cdf:	83 f8 07             	cmp    $0x7,%eax
   32ce2:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
   32ce8:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   32cee:	0f 8f 75 05 00 00    	jg     33269 <_svfprintf_r+0x1459>
   32cf4:	83 c7 08             	add    $0x8,%edi
   32cf7:	8b 9d 04 ff ff ff    	mov    -0xfc(%ebp),%ebx
   32cfd:	8d 8d 65 ff ff ff    	lea    -0x9b(%ebp),%ecx
   32d03:	89 0f                	mov    %ecx,(%edi)
   32d05:	89 5f 04             	mov    %ebx,0x4(%edi)
   32d08:	8d 0c 1a             	lea    (%edx,%ebx,1),%ecx
   32d0b:	83 c0 01             	add    $0x1,%eax
   32d0e:	83 f8 07             	cmp    $0x7,%eax
   32d11:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   32d17:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   32d1d:	0f 8e 96 fb ff ff    	jle    328b9 <_svfprintf_r+0xaa9>
   32d23:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   32d29:	89 44 24 08          	mov    %eax,0x8(%esp)
   32d2d:	8b 45 0c             	mov    0xc(%ebp),%eax
   32d30:	89 44 24 04          	mov    %eax,0x4(%esp)
   32d34:	8b 45 08             	mov    0x8(%ebp),%eax
   32d37:	89 04 24             	mov    %eax,(%esp)
   32d3a:	e8 51 3c 00 00       	call   36990 <__ssprint_r>
   32d3f:	85 c0                	test   %eax,%eax
   32d41:	0f 85 99 f2 ff ff    	jne    31fe0 <_svfprintf_r+0x1d0>
   32d47:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   32d4d:	8d 7d a8             	lea    -0x58(%ebp),%edi
   32d50:	e9 67 fb ff ff       	jmp    328bc <_svfprintf_r+0xaac>
   32d55:	8d 76 00             	lea    0x0(%esi),%esi
   32d58:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   32d5e:	89 44 24 08          	mov    %eax,0x8(%esp)
   32d62:	8b 45 0c             	mov    0xc(%ebp),%eax
   32d65:	89 44 24 04          	mov    %eax,0x4(%esp)
   32d69:	8b 45 08             	mov    0x8(%ebp),%eax
   32d6c:	89 04 24             	mov    %eax,(%esp)
   32d6f:	e8 1c 3c 00 00       	call   36990 <__ssprint_r>
   32d74:	85 c0                	test   %eax,%eax
   32d76:	0f 84 43 fc ff ff    	je     329bf <_svfprintf_r+0xbaf>
   32d7c:	e9 5f f2 ff ff       	jmp    31fe0 <_svfprintf_r+0x1d0>
   32d81:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   32d88:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   32d8e:	89 44 24 08          	mov    %eax,0x8(%esp)
   32d92:	8b 45 0c             	mov    0xc(%ebp),%eax
   32d95:	89 44 24 04          	mov    %eax,0x4(%esp)
   32d99:	8b 45 08             	mov    0x8(%ebp),%eax
   32d9c:	89 04 24             	mov    %eax,(%esp)
   32d9f:	e8 ec 3b 00 00       	call   36990 <__ssprint_r>
   32da4:	85 c0                	test   %eax,%eax
   32da6:	0f 85 34 f2 ff ff    	jne    31fe0 <_svfprintf_r+0x1d0>
   32dac:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   32db2:	8d 7d a8             	lea    -0x58(%ebp),%edi
   32db5:	e9 c8 f9 ff ff       	jmp    32782 <_svfprintf_r+0x972>
   32dba:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   32dc0:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   32dc6:	89 44 24 08          	mov    %eax,0x8(%esp)
   32dca:	8b 45 0c             	mov    0xc(%ebp),%eax
   32dcd:	89 44 24 04          	mov    %eax,0x4(%esp)
   32dd1:	8b 45 08             	mov    0x8(%ebp),%eax
   32dd4:	89 04 24             	mov    %eax,(%esp)
   32dd7:	e8 b4 3b 00 00       	call   36990 <__ssprint_r>
   32ddc:	85 c0                	test   %eax,%eax
   32dde:	0f 85 fc f1 ff ff    	jne    31fe0 <_svfprintf_r+0x1d0>
   32de4:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   32dea:	8d 7d a8             	lea    -0x58(%ebp),%edi
   32ded:	e9 53 f9 ff ff       	jmp    32745 <_svfprintf_r+0x935>
   32df2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   32df8:	89 c2                	mov    %eax,%edx
   32dfa:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   32e00:	89 c8                	mov    %ecx,%eax
   32e02:	83 ea 01             	sub    $0x1,%edx
   32e05:	83 e0 07             	and    $0x7,%eax
   32e08:	c1 e9 03             	shr    $0x3,%ecx
   32e0b:	83 c0 30             	add    $0x30,%eax
   32e0e:	85 c9                	test   %ecx,%ecx
   32e10:	88 02                	mov    %al,(%edx)
   32e12:	75 ec                	jne    32e00 <_svfprintf_r+0xff0>
   32e14:	f6 85 4c ff ff ff 01 	testb  $0x1,-0xb4(%ebp)
   32e1b:	89 95 28 ff ff ff    	mov    %edx,-0xd8(%ebp)
   32e21:	0f 84 5b 01 00 00    	je     32f82 <_svfprintf_r+0x1172>
   32e27:	3c 30                	cmp    $0x30,%al
   32e29:	74 0b                	je     32e36 <_svfprintf_r+0x1026>
   32e2b:	83 ad 28 ff ff ff 01 	subl   $0x1,-0xd8(%ebp)
   32e32:	c6 42 ff 30          	movb   $0x30,-0x1(%edx)
   32e36:	8d 45 a8             	lea    -0x58(%ebp),%eax
   32e39:	2b 85 28 ff ff ff    	sub    -0xd8(%ebp),%eax
   32e3f:	89 85 38 ff ff ff    	mov    %eax,-0xc8(%ebp)
   32e45:	e9 1e f4 ff ff       	jmp    32268 <_svfprintf_r+0x458>
   32e4a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   32e50:	8b 9d 5c ff ff ff    	mov    -0xa4(%ebp),%ebx
   32e56:	85 db                	test   %ebx,%ebx
   32e58:	0f 8e 66 05 00 00    	jle    333c4 <_svfprintf_r+0x15b4>
   32e5e:	8b 95 28 ff ff ff    	mov    -0xd8(%ebp),%edx
   32e64:	8b 85 1c ff ff ff    	mov    -0xe4(%ebp),%eax
   32e6a:	01 d0                	add    %edx,%eax
   32e6c:	89 c3                	mov    %eax,%ebx
   32e6e:	29 d3                	sub    %edx,%ebx
   32e70:	89 85 44 ff ff ff    	mov    %eax,-0xbc(%ebp)
   32e76:	89 d0                	mov    %edx,%eax
   32e78:	8b 95 20 ff ff ff    	mov    -0xe0(%ebp),%edx
   32e7e:	39 d3                	cmp    %edx,%ebx
   32e80:	0f 4f da             	cmovg  %edx,%ebx
   32e83:	85 db                	test   %ebx,%ebx
   32e85:	7e 28                	jle    32eaf <_svfprintf_r+0x109f>
   32e87:	89 07                	mov    %eax,(%edi)
   32e89:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   32e8f:	01 d9                	add    %ebx,%ecx
   32e91:	89 5f 04             	mov    %ebx,0x4(%edi)
   32e94:	83 c7 08             	add    $0x8,%edi
   32e97:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   32e9d:	83 c0 01             	add    $0x1,%eax
   32ea0:	83 f8 07             	cmp    $0x7,%eax
   32ea3:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   32ea9:	0f 8f 58 09 00 00    	jg     33807 <_svfprintf_r+0x19f7>
   32eaf:	8b b5 20 ff ff ff    	mov    -0xe0(%ebp),%esi
   32eb5:	31 c0                	xor    %eax,%eax
   32eb7:	85 db                	test   %ebx,%ebx
   32eb9:	0f 49 c3             	cmovns %ebx,%eax
   32ebc:	29 c6                	sub    %eax,%esi
   32ebe:	85 f6                	test   %esi,%esi
   32ec0:	0f 8e 40 02 00 00    	jle    33106 <_svfprintf_r+0x12f6>
   32ec6:	83 fe 10             	cmp    $0x10,%esi
   32ec9:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   32ecf:	8d 9d 74 ff ff ff    	lea    -0x8c(%ebp),%ebx
   32ed5:	7f 15                	jg     32eec <_svfprintf_r+0x10dc>
   32ed7:	e9 db 01 00 00       	jmp    330b7 <_svfprintf_r+0x12a7>
   32edc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   32ee0:	83 ee 10             	sub    $0x10,%esi
   32ee3:	83 fe 10             	cmp    $0x10,%esi
   32ee6:	0f 8e cb 01 00 00    	jle    330b7 <_svfprintf_r+0x12a7>
   32eec:	83 c0 01             	add    $0x1,%eax
   32eef:	83 c1 10             	add    $0x10,%ecx
   32ef2:	c7 07 54 8f 03 00    	movl   $0x38f54,(%edi)
   32ef8:	83 c7 08             	add    $0x8,%edi
   32efb:	c7 47 fc 10 00 00 00 	movl   $0x10,-0x4(%edi)
   32f02:	83 f8 07             	cmp    $0x7,%eax
   32f05:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   32f0b:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   32f11:	7e cd                	jle    32ee0 <_svfprintf_r+0x10d0>
   32f13:	8b 45 0c             	mov    0xc(%ebp),%eax
   32f16:	89 5c 24 08          	mov    %ebx,0x8(%esp)
   32f1a:	89 44 24 04          	mov    %eax,0x4(%esp)
   32f1e:	8b 45 08             	mov    0x8(%ebp),%eax
   32f21:	89 04 24             	mov    %eax,(%esp)
   32f24:	e8 67 3a 00 00       	call   36990 <__ssprint_r>
   32f29:	85 c0                	test   %eax,%eax
   32f2b:	0f 85 af f0 ff ff    	jne    31fe0 <_svfprintf_r+0x1d0>
   32f31:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   32f37:	8d 7d a8             	lea    -0x58(%ebp),%edi
   32f3a:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   32f40:	eb 9e                	jmp    32ee0 <_svfprintf_r+0x10d0>
   32f42:	8d 45 a8             	lea    -0x58(%ebp),%eax
   32f45:	be cd cc cc cc       	mov    $0xcccccccd,%esi
   32f4a:	89 bd 48 ff ff ff    	mov    %edi,-0xb8(%ebp)
   32f50:	89 c7                	mov    %eax,%edi
   32f52:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   32f58:	89 c8                	mov    %ecx,%eax
   32f5a:	83 ef 01             	sub    $0x1,%edi
   32f5d:	f7 e6                	mul    %esi
   32f5f:	c1 ea 03             	shr    $0x3,%edx
   32f62:	8d 04 92             	lea    (%edx,%edx,4),%eax
   32f65:	01 c0                	add    %eax,%eax
   32f67:	29 c1                	sub    %eax,%ecx
   32f69:	83 c1 30             	add    $0x30,%ecx
   32f6c:	85 d2                	test   %edx,%edx
   32f6e:	88 0f                	mov    %cl,(%edi)
   32f70:	89 d1                	mov    %edx,%ecx
   32f72:	75 e4                	jne    32f58 <_svfprintf_r+0x1148>
   32f74:	89 fa                	mov    %edi,%edx
   32f76:	89 bd 28 ff ff ff    	mov    %edi,-0xd8(%ebp)
   32f7c:	8b bd 48 ff ff ff    	mov    -0xb8(%ebp),%edi
   32f82:	8d 45 a8             	lea    -0x58(%ebp),%eax
   32f85:	29 d0                	sub    %edx,%eax
   32f87:	89 85 38 ff ff ff    	mov    %eax,-0xc8(%ebp)
   32f8d:	e9 d6 f2 ff ff       	jmp    32268 <_svfprintf_r+0x458>
   32f92:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   32f98:	83 f9 09             	cmp    $0x9,%ecx
   32f9b:	77 a5                	ja     32f42 <_svfprintf_r+0x1132>
   32f9d:	8b 85 00 ff ff ff    	mov    -0x100(%ebp),%eax
   32fa3:	83 c1 30             	add    $0x30,%ecx
   32fa6:	88 4d a7             	mov    %cl,-0x59(%ebp)
   32fa9:	89 85 38 ff ff ff    	mov    %eax,-0xc8(%ebp)
   32faf:	8d 45 a7             	lea    -0x59(%ebp),%eax
   32fb2:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
   32fb8:	e9 ab f2 ff ff       	jmp    32268 <_svfprintf_r+0x458>
   32fbd:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   32fc3:	89 44 24 08          	mov    %eax,0x8(%esp)
   32fc7:	8b 45 0c             	mov    0xc(%ebp),%eax
   32fca:	89 44 24 04          	mov    %eax,0x4(%esp)
   32fce:	8b 45 08             	mov    0x8(%ebp),%eax
   32fd1:	89 04 24             	mov    %eax,(%esp)
   32fd4:	e8 b7 39 00 00       	call   36990 <__ssprint_r>
   32fd9:	85 c0                	test   %eax,%eax
   32fdb:	0f 85 ff ef ff ff    	jne    31fe0 <_svfprintf_r+0x1d0>
   32fe1:	0f b6 9d 59 ff ff ff 	movzbl -0xa7(%ebp),%ebx
   32fe8:	8d 7d a8             	lea    -0x58(%ebp),%edi
   32feb:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   32ff1:	e9 18 f7 ff ff       	jmp    3270e <_svfprintf_r+0x8fe>
   32ff6:	8b 9d 1c ff ff ff    	mov    -0xe4(%ebp),%ebx
   32ffc:	8d 73 ff             	lea    -0x1(%ebx),%esi
   32fff:	85 f6                	test   %esi,%esi
   33001:	0f 8e f0 fc ff ff    	jle    32cf7 <_svfprintf_r+0xee7>
   33007:	83 fe 10             	cmp    $0x10,%esi
   3300a:	7e 70                	jle    3307c <_svfprintf_r+0x126c>
   3300c:	8d 9d 74 ff ff ff    	lea    -0x8c(%ebp),%ebx
   33012:	eb 0c                	jmp    33020 <_svfprintf_r+0x1210>
   33014:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   33018:	83 ee 10             	sub    $0x10,%esi
   3301b:	83 fe 10             	cmp    $0x10,%esi
   3301e:	7e 5c                	jle    3307c <_svfprintf_r+0x126c>
   33020:	83 c0 01             	add    $0x1,%eax
   33023:	83 c2 10             	add    $0x10,%edx
   33026:	c7 07 54 8f 03 00    	movl   $0x38f54,(%edi)
   3302c:	83 c7 08             	add    $0x8,%edi
   3302f:	c7 47 fc 10 00 00 00 	movl   $0x10,-0x4(%edi)
   33036:	83 f8 07             	cmp    $0x7,%eax
   33039:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
   3303f:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   33045:	7e d1                	jle    33018 <_svfprintf_r+0x1208>
   33047:	8b 45 0c             	mov    0xc(%ebp),%eax
   3304a:	89 5c 24 08          	mov    %ebx,0x8(%esp)
   3304e:	89 44 24 04          	mov    %eax,0x4(%esp)
   33052:	8b 45 08             	mov    0x8(%ebp),%eax
   33055:	89 04 24             	mov    %eax,(%esp)
   33058:	e8 33 39 00 00       	call   36990 <__ssprint_r>
   3305d:	85 c0                	test   %eax,%eax
   3305f:	0f 85 7b ef ff ff    	jne    31fe0 <_svfprintf_r+0x1d0>
   33065:	83 ee 10             	sub    $0x10,%esi
   33068:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
   3306e:	83 fe 10             	cmp    $0x10,%esi
   33071:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   33077:	8d 7d a8             	lea    -0x58(%ebp),%edi
   3307a:	7f a4                	jg     33020 <_svfprintf_r+0x1210>
   3307c:	c7 07 54 8f 03 00    	movl   $0x38f54,(%edi)
   33082:	01 f2                	add    %esi,%edx
   33084:	89 77 04             	mov    %esi,0x4(%edi)
   33087:	e9 50 fc ff ff       	jmp    32cdc <_svfprintf_r+0xecc>
   3308c:	c7 07 54 8f 03 00    	movl   $0x38f54,(%edi)
   33092:	01 f1                	add    %esi,%ecx
   33094:	89 77 04             	mov    %esi,0x4(%edi)
   33097:	e9 6f fc ff ff       	jmp    32d0b <_svfprintf_r+0xefb>
   3309c:	8b 45 14             	mov    0x14(%ebp),%eax
   3309f:	8b 95 34 ff ff ff    	mov    -0xcc(%ebp),%edx
   330a5:	8b 00                	mov    (%eax),%eax
   330a7:	89 10                	mov    %edx,(%eax)
   330a9:	8b 45 14             	mov    0x14(%ebp),%eax
   330ac:	83 c0 04             	add    $0x4,%eax
   330af:	89 45 14             	mov    %eax,0x14(%ebp)
   330b2:	e9 f4 ed ff ff       	jmp    31eab <_svfprintf_r+0x9b>
   330b7:	83 c0 01             	add    $0x1,%eax
   330ba:	01 f1                	add    %esi,%ecx
   330bc:	c7 07 54 8f 03 00    	movl   $0x38f54,(%edi)
   330c2:	83 c7 08             	add    $0x8,%edi
   330c5:	89 77 fc             	mov    %esi,-0x4(%edi)
   330c8:	83 f8 07             	cmp    $0x7,%eax
   330cb:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   330d1:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   330d7:	7e 2d                	jle    33106 <_svfprintf_r+0x12f6>
   330d9:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   330df:	89 44 24 08          	mov    %eax,0x8(%esp)
   330e3:	8b 45 0c             	mov    0xc(%ebp),%eax
   330e6:	89 44 24 04          	mov    %eax,0x4(%esp)
   330ea:	8b 45 08             	mov    0x8(%ebp),%eax
   330ed:	89 04 24             	mov    %eax,(%esp)
   330f0:	e8 9b 38 00 00       	call   36990 <__ssprint_r>
   330f5:	85 c0                	test   %eax,%eax
   330f7:	0f 85 e3 ee ff ff    	jne    31fe0 <_svfprintf_r+0x1d0>
   330fd:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   33103:	8d 7d a8             	lea    -0x58(%ebp),%edi
   33106:	8b 85 28 ff ff ff    	mov    -0xd8(%ebp),%eax
   3310c:	8b 95 5c ff ff ff    	mov    -0xa4(%ebp),%edx
   33112:	03 85 20 ff ff ff    	add    -0xe0(%ebp),%eax
   33118:	3b 95 1c ff ff ff    	cmp    -0xe4(%ebp),%edx
   3311e:	89 c6                	mov    %eax,%esi
   33120:	7c 0d                	jl     3312f <_svfprintf_r+0x131f>
   33122:	f6 85 4c ff ff ff 01 	testb  $0x1,-0xb4(%ebp)
   33129:	0f 84 5e 05 00 00    	je     3368d <_svfprintf_r+0x187d>
   3312f:	8b 85 0c ff ff ff    	mov    -0xf4(%ebp),%eax
   33135:	89 07                	mov    %eax,(%edi)
   33137:	8b 85 08 ff ff ff    	mov    -0xf8(%ebp),%eax
   3313d:	01 c1                	add    %eax,%ecx
   3313f:	89 47 04             	mov    %eax,0x4(%edi)
   33142:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   33148:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   3314e:	83 c0 01             	add    $0x1,%eax
   33151:	83 f8 07             	cmp    $0x7,%eax
   33154:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   3315a:	0f 8f d9 06 00 00    	jg     33839 <_svfprintf_r+0x1a29>
   33160:	83 c7 08             	add    $0x8,%edi
   33163:	89 d0                	mov    %edx,%eax
   33165:	8b 9d 44 ff ff ff    	mov    -0xbc(%ebp),%ebx
   3316b:	89 f2                	mov    %esi,%edx
   3316d:	29 f3                	sub    %esi,%ebx
   3316f:	8b b5 1c ff ff ff    	mov    -0xe4(%ebp),%esi
   33175:	29 c6                	sub    %eax,%esi
   33177:	39 de                	cmp    %ebx,%esi
   33179:	0f 4e de             	cmovle %esi,%ebx
   3317c:	85 db                	test   %ebx,%ebx
   3317e:	7e 29                	jle    331a9 <_svfprintf_r+0x1399>
   33180:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   33186:	01 d9                	add    %ebx,%ecx
   33188:	83 c7 08             	add    $0x8,%edi
   3318b:	89 57 f8             	mov    %edx,-0x8(%edi)
   3318e:	89 5f fc             	mov    %ebx,-0x4(%edi)
   33191:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   33197:	83 c0 01             	add    $0x1,%eax
   3319a:	83 f8 07             	cmp    $0x7,%eax
   3319d:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   331a3:	0f 8f c8 06 00 00    	jg     33871 <_svfprintf_r+0x1a61>
   331a9:	31 c0                	xor    %eax,%eax
   331ab:	85 db                	test   %ebx,%ebx
   331ad:	0f 49 c3             	cmovns %ebx,%eax
   331b0:	29 c6                	sub    %eax,%esi
   331b2:	85 f6                	test   %esi,%esi
   331b4:	0f 8e 02 f7 ff ff    	jle    328bc <_svfprintf_r+0xaac>
   331ba:	83 fe 10             	cmp    $0x10,%esi
   331bd:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   331c3:	8d 9d 74 ff ff ff    	lea    -0x8c(%ebp),%ebx
   331c9:	7f 11                	jg     331dc <_svfprintf_r+0x13cc>
   331cb:	e9 bc fe ff ff       	jmp    3308c <_svfprintf_r+0x127c>
   331d0:	83 ee 10             	sub    $0x10,%esi
   331d3:	83 fe 10             	cmp    $0x10,%esi
   331d6:	0f 8e b0 fe ff ff    	jle    3308c <_svfprintf_r+0x127c>
   331dc:	83 c0 01             	add    $0x1,%eax
   331df:	83 c1 10             	add    $0x10,%ecx
   331e2:	c7 07 54 8f 03 00    	movl   $0x38f54,(%edi)
   331e8:	83 c7 08             	add    $0x8,%edi
   331eb:	c7 47 fc 10 00 00 00 	movl   $0x10,-0x4(%edi)
   331f2:	83 f8 07             	cmp    $0x7,%eax
   331f5:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   331fb:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   33201:	7e cd                	jle    331d0 <_svfprintf_r+0x13c0>
   33203:	8b 45 0c             	mov    0xc(%ebp),%eax
   33206:	89 5c 24 08          	mov    %ebx,0x8(%esp)
   3320a:	89 44 24 04          	mov    %eax,0x4(%esp)
   3320e:	8b 45 08             	mov    0x8(%ebp),%eax
   33211:	89 04 24             	mov    %eax,(%esp)
   33214:	e8 77 37 00 00       	call   36990 <__ssprint_r>
   33219:	85 c0                	test   %eax,%eax
   3321b:	0f 85 bf ed ff ff    	jne    31fe0 <_svfprintf_r+0x1d0>
   33221:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   33227:	8d 7d a8             	lea    -0x58(%ebp),%edi
   3322a:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   33230:	eb 9e                	jmp    331d0 <_svfprintf_r+0x13c0>
   33232:	f6 85 4c ff ff ff 01 	testb  $0x1,-0xb4(%ebp)
   33239:	0f 85 14 fa ff ff    	jne    32c53 <_svfprintf_r+0xe43>
   3323f:	89 07                	mov    %eax,(%edi)
   33241:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   33247:	8d 51 01             	lea    0x1(%ecx),%edx
   3324a:	c7 47 04 01 00 00 00 	movl   $0x1,0x4(%edi)
   33251:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
   33257:	83 c0 01             	add    $0x1,%eax
   3325a:	83 f8 07             	cmp    $0x7,%eax
   3325d:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   33263:	0f 8e 8b fa ff ff    	jle    32cf4 <_svfprintf_r+0xee4>
   33269:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   3326f:	89 44 24 08          	mov    %eax,0x8(%esp)
   33273:	8b 45 0c             	mov    0xc(%ebp),%eax
   33276:	89 44 24 04          	mov    %eax,0x4(%esp)
   3327a:	8b 45 08             	mov    0x8(%ebp),%eax
   3327d:	89 04 24             	mov    %eax,(%esp)
   33280:	e8 0b 37 00 00       	call   36990 <__ssprint_r>
   33285:	85 c0                	test   %eax,%eax
   33287:	0f 85 53 ed ff ff    	jne    31fe0 <_svfprintf_r+0x1d0>
   3328d:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
   33293:	8d 7d a8             	lea    -0x58(%ebp),%edi
   33296:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   3329c:	e9 56 fa ff ff       	jmp    32cf7 <_svfprintf_r+0xee7>
   332a1:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   332a7:	89 44 24 08          	mov    %eax,0x8(%esp)
   332ab:	8b 45 0c             	mov    0xc(%ebp),%eax
   332ae:	89 44 24 04          	mov    %eax,0x4(%esp)
   332b2:	8b 45 08             	mov    0x8(%ebp),%eax
   332b5:	89 04 24             	mov    %eax,(%esp)
   332b8:	e8 d3 36 00 00       	call   36990 <__ssprint_r>
   332bd:	85 c0                	test   %eax,%eax
   332bf:	0f 85 1b ed ff ff    	jne    31fe0 <_svfprintf_r+0x1d0>
   332c5:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
   332cb:	8d 7d a8             	lea    -0x58(%ebp),%edi
   332ce:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   332d4:	e9 d6 f9 ff ff       	jmp    32caf <_svfprintf_r+0xe9f>
   332d9:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   332df:	89 44 24 08          	mov    %eax,0x8(%esp)
   332e3:	8b 45 0c             	mov    0xc(%ebp),%eax
   332e6:	89 44 24 04          	mov    %eax,0x4(%esp)
   332ea:	8b 45 08             	mov    0x8(%ebp),%eax
   332ed:	89 04 24             	mov    %eax,(%esp)
   332f0:	e8 9b 36 00 00       	call   36990 <__ssprint_r>
   332f5:	85 c0                	test   %eax,%eax
   332f7:	0f 85 e3 ec ff ff    	jne    31fe0 <_svfprintf_r+0x1d0>
   332fd:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
   33303:	8d 7d a8             	lea    -0x58(%ebp),%edi
   33306:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   3330c:	e9 6f f9 ff ff       	jmp    32c80 <_svfprintf_r+0xe70>
   33311:	dd 85 10 ff ff ff    	fldl   -0xf0(%ebp)
   33317:	dd 1c 24             	fstpl  (%esp)
   3331a:	e8 11 35 00 00       	call   36830 <__fpclassifyd>
   3331f:	85 c0                	test   %eax,%eax
   33321:	0f 85 a3 01 00 00    	jne    334ca <_svfprintf_r+0x16ba>
   33327:	83 bd 24 ff ff ff 47 	cmpl   $0x47,-0xdc(%ebp)
   3332e:	ba ba 8d 03 00       	mov    $0x38dba,%edx
   33333:	b8 be 8d 03 00       	mov    $0x38dbe,%eax
   33338:	0f b6 9d 59 ff ff ff 	movzbl -0xa7(%ebp),%ebx
   3333f:	c7 85 48 ff ff ff 03 	movl   $0x3,-0xb8(%ebp)
   33346:	00 00 00 
   33349:	0f 4e c2             	cmovle %edx,%eax
   3334c:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
   33352:	81 a5 4c ff ff ff 7f 	andl   $0xffffff7f,-0xb4(%ebp)
   33359:	ff ff ff 
   3335c:	c7 85 38 ff ff ff 03 	movl   $0x3,-0xc8(%ebp)
   33363:	00 00 00 
   33366:	c7 85 44 ff ff ff 00 	movl   $0x0,-0xbc(%ebp)
   3336d:	00 00 00 
   33370:	c7 85 20 ff ff ff 00 	movl   $0x0,-0xe0(%ebp)
   33377:	00 00 00 
   3337a:	e9 29 ed ff ff       	jmp    320a8 <_svfprintf_r+0x298>
   3337f:	dd 00                	fldl   (%eax)
   33381:	83 c0 08             	add    $0x8,%eax
   33384:	dd 9d 10 ff ff ff    	fstpl  -0xf0(%ebp)
   3338a:	89 45 14             	mov    %eax,0x14(%ebp)
   3338d:	e9 e6 ef ff ff       	jmp    32378 <_svfprintf_r+0x568>
   33392:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   33398:	89 44 24 08          	mov    %eax,0x8(%esp)
   3339c:	8b 45 0c             	mov    0xc(%ebp),%eax
   3339f:	89 44 24 04          	mov    %eax,0x4(%esp)
   333a3:	8b 45 08             	mov    0x8(%ebp),%eax
   333a6:	89 04 24             	mov    %eax,(%esp)
   333a9:	e8 e2 35 00 00       	call   36990 <__ssprint_r>
   333ae:	85 c0                	test   %eax,%eax
   333b0:	0f 85 2a ec ff ff    	jne    31fe0 <_svfprintf_r+0x1d0>
   333b6:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   333bc:	8d 7d a8             	lea    -0x58(%ebp),%edi
   333bf:	e9 6b f6 ff ff       	jmp    32a2f <_svfprintf_r+0xc1f>
   333c4:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   333ca:	83 c1 01             	add    $0x1,%ecx
   333cd:	83 c7 08             	add    $0x8,%edi
   333d0:	c7 47 f8 eb 8d 03 00 	movl   $0x38deb,-0x8(%edi)
   333d7:	c7 47 fc 01 00 00 00 	movl   $0x1,-0x4(%edi)
   333de:	89 8d 7c ff ff ff    	mov    %ecx,-0x84(%ebp)
   333e4:	83 c0 01             	add    $0x1,%eax
   333e7:	83 f8 07             	cmp    $0x7,%eax
   333ea:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   333f0:	0f 8f ef 02 00 00    	jg     336e5 <_svfprintf_r+0x18d5>
   333f6:	85 db                	test   %ebx,%ebx
   333f8:	75 17                	jne    33411 <_svfprintf_r+0x1601>
   333fa:	8b 95 1c ff ff ff    	mov    -0xe4(%ebp),%edx
   33400:	85 d2                	test   %edx,%edx
   33402:	75 0d                	jne    33411 <_svfprintf_r+0x1601>
   33404:	f6 85 4c ff ff ff 01 	testb  $0x1,-0xb4(%ebp)
   3340b:	0f 84 ab f4 ff ff    	je     328bc <_svfprintf_r+0xaac>
   33411:	8b 85 0c ff ff ff    	mov    -0xf4(%ebp),%eax
   33417:	83 c7 08             	add    $0x8,%edi
   3341a:	89 47 f8             	mov    %eax,-0x8(%edi)
   3341d:	8b 85 08 ff ff ff    	mov    -0xf8(%ebp),%eax
   33423:	89 47 fc             	mov    %eax,-0x4(%edi)
   33426:	8d 14 01             	lea    (%ecx,%eax,1),%edx
   33429:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   3342f:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
   33435:	83 c0 01             	add    $0x1,%eax
   33438:	83 f8 07             	cmp    $0x7,%eax
   3343b:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   33441:	0f 8f 60 03 00 00    	jg     337a7 <_svfprintf_r+0x1997>
   33447:	f7 db                	neg    %ebx
   33449:	85 db                	test   %ebx,%ebx
   3344b:	0f 8e 21 03 00 00    	jle    33772 <_svfprintf_r+0x1962>
   33451:	83 fb 10             	cmp    $0x10,%ebx
   33454:	0f 8e c3 02 00 00    	jle    3371d <_svfprintf_r+0x190d>
   3345a:	8d b5 74 ff ff ff    	lea    -0x8c(%ebp),%esi
   33460:	eb 12                	jmp    33474 <_svfprintf_r+0x1664>
   33462:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   33468:	83 eb 10             	sub    $0x10,%ebx
   3346b:	83 fb 10             	cmp    $0x10,%ebx
   3346e:	0f 8e a9 02 00 00    	jle    3371d <_svfprintf_r+0x190d>
   33474:	83 c0 01             	add    $0x1,%eax
   33477:	83 c2 10             	add    $0x10,%edx
   3347a:	c7 07 54 8f 03 00    	movl   $0x38f54,(%edi)
   33480:	83 c7 08             	add    $0x8,%edi
   33483:	c7 47 fc 10 00 00 00 	movl   $0x10,-0x4(%edi)
   3348a:	83 f8 07             	cmp    $0x7,%eax
   3348d:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
   33493:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   33499:	7e cd                	jle    33468 <_svfprintf_r+0x1658>
   3349b:	8b 45 0c             	mov    0xc(%ebp),%eax
   3349e:	89 74 24 08          	mov    %esi,0x8(%esp)
   334a2:	89 44 24 04          	mov    %eax,0x4(%esp)
   334a6:	8b 45 08             	mov    0x8(%ebp),%eax
   334a9:	89 04 24             	mov    %eax,(%esp)
   334ac:	e8 df 34 00 00       	call   36990 <__ssprint_r>
   334b1:	85 c0                	test   %eax,%eax
   334b3:	0f 85 27 eb ff ff    	jne    31fe0 <_svfprintf_r+0x1d0>
   334b9:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
   334bf:	8d 7d a8             	lea    -0x58(%ebp),%edi
   334c2:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   334c8:	eb 9e                	jmp    33468 <_svfprintf_r+0x1658>
   334ca:	8b 9d 24 ff ff ff    	mov    -0xdc(%ebp),%ebx
   334d0:	83 e3 df             	and    $0xffffffdf,%ebx
   334d3:	83 bd 44 ff ff ff ff 	cmpl   $0xffffffff,-0xbc(%ebp)
   334da:	0f 84 05 03 00 00    	je     337e5 <_svfprintf_r+0x19d5>
   334e0:	83 fb 47             	cmp    $0x47,%ebx
   334e3:	75 16                	jne    334fb <_svfprintf_r+0x16eb>
   334e5:	8b 95 44 ff ff ff    	mov    -0xbc(%ebp),%edx
   334eb:	b8 01 00 00 00       	mov    $0x1,%eax
   334f0:	85 d2                	test   %edx,%edx
   334f2:	0f 45 c2             	cmovne %edx,%eax
   334f5:	89 85 44 ff ff ff    	mov    %eax,-0xbc(%ebp)
   334fb:	8b 85 4c ff ff ff    	mov    -0xb4(%ebp),%eax
   33501:	dd 85 10 ff ff ff    	fldl   -0xf0(%ebp)
   33507:	dd 95 38 ff ff ff    	fstl   -0xc8(%ebp)
   3350d:	80 cc 01             	or     $0x1,%ah
   33510:	89 85 30 ff ff ff    	mov    %eax,-0xd0(%ebp)
   33516:	8b 85 3c ff ff ff    	mov    -0xc4(%ebp),%eax
   3351c:	c6 85 48 ff ff ff 00 	movb   $0x0,-0xb8(%ebp)
   33523:	85 c0                	test   %eax,%eax
   33525:	0f 88 ba 05 00 00    	js     33ae5 <_svfprintf_r+0x1cd5>
   3352b:	83 fb 46             	cmp    $0x46,%ebx
   3352e:	0f 94 c0             	sete   %al
   33531:	89 c6                	mov    %eax,%esi
   33533:	0f 84 d4 03 00 00    	je     3390d <_svfprintf_r+0x1afd>
   33539:	83 fb 45             	cmp    $0x45,%ebx
   3353c:	0f 85 99 05 00 00    	jne    33adb <_svfprintf_r+0x1ccb>
   33542:	8b 85 44 ff ff ff    	mov    -0xbc(%ebp),%eax
   33548:	dd 54 24 04          	fstl   0x4(%esp)
   3354c:	c7 44 24 0c 02 00 00 	movl   $0x2,0xc(%esp)
   33553:	00 
   33554:	dd 9d 38 ff ff ff    	fstpl  -0xc8(%ebp)
   3355a:	8d 70 01             	lea    0x1(%eax),%esi
   3355d:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
   33563:	89 44 24 1c          	mov    %eax,0x1c(%esp)
   33567:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
   3356d:	89 44 24 18          	mov    %eax,0x18(%esp)
   33571:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
   33577:	89 44 24 14          	mov    %eax,0x14(%esp)
   3357b:	8b 45 08             	mov    0x8(%ebp),%eax
   3357e:	89 74 24 10          	mov    %esi,0x10(%esp)
   33582:	89 04 24             	mov    %eax,(%esp)
   33585:	e8 56 09 00 00       	call   33ee0 <_dtoa_r>
   3358a:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
   33590:	8d 0c 30             	lea    (%eax,%esi,1),%ecx
   33593:	dd 85 38 ff ff ff    	fldl   -0xc8(%ebp)
   33599:	d9 ee                	fldz   
   3359b:	d9 c9                	fxch   %st(1)
   3359d:	df e9                	fucomip %st(1),%st
   3359f:	dd d8                	fstp   %st(0)
   335a1:	0f 8a fd 00 00 00    	jp     336a4 <_svfprintf_r+0x1894>
   335a7:	89 c8                	mov    %ecx,%eax
   335a9:	0f 85 f5 00 00 00    	jne    336a4 <_svfprintf_r+0x1894>
   335af:	2b 85 28 ff ff ff    	sub    -0xd8(%ebp),%eax
   335b5:	83 fb 47             	cmp    $0x47,%ebx
   335b8:	89 85 1c ff ff ff    	mov    %eax,-0xe4(%ebp)
   335be:	0f 84 1e 04 00 00    	je     339e2 <_svfprintf_r+0x1bd2>
   335c4:	83 bd 24 ff ff ff 65 	cmpl   $0x65,-0xdc(%ebp)
   335cb:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
   335d1:	0f 8e 65 04 00 00    	jle    33a3c <_svfprintf_r+0x1c2c>
   335d7:	83 bd 24 ff ff ff 66 	cmpl   $0x66,-0xdc(%ebp)
   335de:	89 85 20 ff ff ff    	mov    %eax,-0xe0(%ebp)
   335e4:	0f 84 3c 05 00 00    	je     33b26 <_svfprintf_r+0x1d16>
   335ea:	8b 85 20 ff ff ff    	mov    -0xe0(%ebp),%eax
   335f0:	39 85 1c ff ff ff    	cmp    %eax,-0xe4(%ebp)
   335f6:	0f 8f f7 04 00 00    	jg     33af3 <_svfprintf_r+0x1ce3>
   335fc:	8b 85 4c ff ff ff    	mov    -0xb4(%ebp),%eax
   33602:	83 e0 01             	and    $0x1,%eax
   33605:	0f 85 e2 05 00 00    	jne    33bed <_svfprintf_r+0x1ddd>
   3360b:	8b 95 20 ff ff ff    	mov    -0xe0(%ebp),%edx
   33611:	c7 85 24 ff ff ff 67 	movl   $0x67,-0xdc(%ebp)
   33618:	00 00 00 
   3361b:	85 d2                	test   %edx,%edx
   3361d:	0f 49 c2             	cmovns %edx,%eax
   33620:	89 95 38 ff ff ff    	mov    %edx,-0xc8(%ebp)
   33626:	80 bd 48 ff ff ff 00 	cmpb   $0x0,-0xb8(%ebp)
   3362d:	0f 85 68 03 00 00    	jne    3399b <_svfprintf_r+0x1b8b>
   33633:	89 85 48 ff ff ff    	mov    %eax,-0xb8(%ebp)
   33639:	8b 85 30 ff ff ff    	mov    -0xd0(%ebp),%eax
   3363f:	0f b6 9d 59 ff ff ff 	movzbl -0xa7(%ebp),%ebx
   33646:	c7 85 44 ff ff ff 00 	movl   $0x0,-0xbc(%ebp)
   3364d:	00 00 00 
   33650:	89 85 4c ff ff ff    	mov    %eax,-0xb4(%ebp)
   33656:	e9 4d ea ff ff       	jmp    320a8 <_svfprintf_r+0x298>
   3365b:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   33661:	89 44 24 08          	mov    %eax,0x8(%esp)
   33665:	8b 45 0c             	mov    0xc(%ebp),%eax
   33668:	89 44 24 04          	mov    %eax,0x4(%esp)
   3366c:	8b 45 08             	mov    0x8(%ebp),%eax
   3366f:	89 04 24             	mov    %eax,(%esp)
   33672:	e8 19 33 00 00       	call   36990 <__ssprint_r>
   33677:	85 c0                	test   %eax,%eax
   33679:	0f 85 61 e9 ff ff    	jne    31fe0 <_svfprintf_r+0x1d0>
   3367f:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   33685:	8d 7d a8             	lea    -0x58(%ebp),%edi
   33688:	e9 f2 f3 ff ff       	jmp    32a7f <_svfprintf_r+0xc6f>
   3368d:	89 d0                	mov    %edx,%eax
   3368f:	e9 d1 fa ff ff       	jmp    33165 <_svfprintf_r+0x1355>
   33694:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   33698:	8d 50 01             	lea    0x1(%eax),%edx
   3369b:	89 95 6c ff ff ff    	mov    %edx,-0x94(%ebp)
   336a1:	c6 00 30             	movb   $0x30,(%eax)
   336a4:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
   336aa:	39 c1                	cmp    %eax,%ecx
   336ac:	77 ea                	ja     33698 <_svfprintf_r+0x1888>
   336ae:	e9 fc fe ff ff       	jmp    335af <_svfprintf_r+0x179f>
   336b3:	8b 45 08             	mov    0x8(%ebp),%eax
   336b6:	c7 44 24 04 40 00 00 	movl   $0x40,0x4(%esp)
   336bd:	00 
   336be:	89 04 24             	mov    %eax,(%esp)
   336c1:	e8 4a 1b 00 00       	call   35210 <_malloc_r>
   336c6:	8b 55 0c             	mov    0xc(%ebp),%edx
   336c9:	85 c0                	test   %eax,%eax
   336cb:	89 02                	mov    %eax,(%edx)
   336cd:	89 42 10             	mov    %eax,0x10(%edx)
   336d0:	0f 84 15 06 00 00    	je     33ceb <_svfprintf_r+0x1edb>
   336d6:	8b 45 0c             	mov    0xc(%ebp),%eax
   336d9:	c7 40 14 40 00 00 00 	movl   $0x40,0x14(%eax)
   336e0:	e9 6c e7 ff ff       	jmp    31e51 <_svfprintf_r+0x41>
   336e5:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   336eb:	89 44 24 08          	mov    %eax,0x8(%esp)
   336ef:	8b 45 0c             	mov    0xc(%ebp),%eax
   336f2:	89 44 24 04          	mov    %eax,0x4(%esp)
   336f6:	8b 45 08             	mov    0x8(%ebp),%eax
   336f9:	89 04 24             	mov    %eax,(%esp)
   336fc:	e8 8f 32 00 00       	call   36990 <__ssprint_r>
   33701:	85 c0                	test   %eax,%eax
   33703:	0f 85 d7 e8 ff ff    	jne    31fe0 <_svfprintf_r+0x1d0>
   33709:	8b 9d 5c ff ff ff    	mov    -0xa4(%ebp),%ebx
   3370f:	8d 7d a8             	lea    -0x58(%ebp),%edi
   33712:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   33718:	e9 d9 fc ff ff       	jmp    333f6 <_svfprintf_r+0x15e6>
   3371d:	83 c0 01             	add    $0x1,%eax
   33720:	01 da                	add    %ebx,%edx
   33722:	c7 07 54 8f 03 00    	movl   $0x38f54,(%edi)
   33728:	83 c7 08             	add    $0x8,%edi
   3372b:	89 5f fc             	mov    %ebx,-0x4(%edi)
   3372e:	83 f8 07             	cmp    $0x7,%eax
   33731:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
   33737:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   3373d:	7e 33                	jle    33772 <_svfprintf_r+0x1962>
   3373f:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   33745:	89 44 24 08          	mov    %eax,0x8(%esp)
   33749:	8b 45 0c             	mov    0xc(%ebp),%eax
   3374c:	89 44 24 04          	mov    %eax,0x4(%esp)
   33750:	8b 45 08             	mov    0x8(%ebp),%eax
   33753:	89 04 24             	mov    %eax,(%esp)
   33756:	e8 35 32 00 00       	call   36990 <__ssprint_r>
   3375b:	85 c0                	test   %eax,%eax
   3375d:	0f 85 7d e8 ff ff    	jne    31fe0 <_svfprintf_r+0x1d0>
   33763:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
   33769:	8d 7d a8             	lea    -0x58(%ebp),%edi
   3376c:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   33772:	8b 9d 28 ff ff ff    	mov    -0xd8(%ebp),%ebx
   33778:	83 c0 01             	add    $0x1,%eax
   3377b:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   33781:	89 1f                	mov    %ebx,(%edi)
   33783:	8b 9d 1c ff ff ff    	mov    -0xe4(%ebp),%ebx
   33789:	01 da                	add    %ebx,%edx
   3378b:	83 f8 07             	cmp    $0x7,%eax
   3378e:	89 5f 04             	mov    %ebx,0x4(%edi)
   33791:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
   33797:	0f 8f 86 f5 ff ff    	jg     32d23 <_svfprintf_r+0xf13>
   3379d:	83 c7 08             	add    $0x8,%edi
   337a0:	89 d1                	mov    %edx,%ecx
   337a2:	e9 15 f1 ff ff       	jmp    328bc <_svfprintf_r+0xaac>
   337a7:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   337ad:	89 44 24 08          	mov    %eax,0x8(%esp)
   337b1:	8b 45 0c             	mov    0xc(%ebp),%eax
   337b4:	89 44 24 04          	mov    %eax,0x4(%esp)
   337b8:	8b 45 08             	mov    0x8(%ebp),%eax
   337bb:	89 04 24             	mov    %eax,(%esp)
   337be:	e8 cd 31 00 00       	call   36990 <__ssprint_r>
   337c3:	85 c0                	test   %eax,%eax
   337c5:	0f 85 15 e8 ff ff    	jne    31fe0 <_svfprintf_r+0x1d0>
   337cb:	8b 9d 5c ff ff ff    	mov    -0xa4(%ebp),%ebx
   337d1:	8d 7d a8             	lea    -0x58(%ebp),%edi
   337d4:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
   337da:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   337e0:	e9 62 fc ff ff       	jmp    33447 <_svfprintf_r+0x1637>
   337e5:	c7 85 44 ff ff ff 06 	movl   $0x6,-0xbc(%ebp)
   337ec:	00 00 00 
   337ef:	e9 07 fd ff ff       	jmp    334fb <_svfprintf_r+0x16eb>
   337f4:	8b 85 28 ff ff ff    	mov    -0xd8(%ebp),%eax
   337fa:	89 04 24             	mov    %eax,(%esp)
   337fd:	e8 0e 31 00 00       	call   36910 <strlen>
   33802:	e9 6a e8 ff ff       	jmp    32071 <_svfprintf_r+0x261>
   33807:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   3380d:	89 44 24 08          	mov    %eax,0x8(%esp)
   33811:	8b 45 0c             	mov    0xc(%ebp),%eax
   33814:	89 44 24 04          	mov    %eax,0x4(%esp)
   33818:	8b 45 08             	mov    0x8(%ebp),%eax
   3381b:	89 04 24             	mov    %eax,(%esp)
   3381e:	e8 6d 31 00 00       	call   36990 <__ssprint_r>
   33823:	85 c0                	test   %eax,%eax
   33825:	0f 85 b5 e7 ff ff    	jne    31fe0 <_svfprintf_r+0x1d0>
   3382b:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   33831:	8d 7d a8             	lea    -0x58(%ebp),%edi
   33834:	e9 76 f6 ff ff       	jmp    32eaf <_svfprintf_r+0x109f>
   33839:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   3383f:	89 44 24 08          	mov    %eax,0x8(%esp)
   33843:	8b 45 0c             	mov    0xc(%ebp),%eax
   33846:	89 44 24 04          	mov    %eax,0x4(%esp)
   3384a:	8b 45 08             	mov    0x8(%ebp),%eax
   3384d:	89 04 24             	mov    %eax,(%esp)
   33850:	e8 3b 31 00 00       	call   36990 <__ssprint_r>
   33855:	85 c0                	test   %eax,%eax
   33857:	0f 85 83 e7 ff ff    	jne    31fe0 <_svfprintf_r+0x1d0>
   3385d:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
   33863:	8d 7d a8             	lea    -0x58(%ebp),%edi
   33866:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   3386c:	e9 f4 f8 ff ff       	jmp    33165 <_svfprintf_r+0x1355>
   33871:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   33877:	89 44 24 08          	mov    %eax,0x8(%esp)
   3387b:	8b 45 0c             	mov    0xc(%ebp),%eax
   3387e:	89 44 24 04          	mov    %eax,0x4(%esp)
   33882:	8b 45 08             	mov    0x8(%ebp),%eax
   33885:	89 04 24             	mov    %eax,(%esp)
   33888:	e8 03 31 00 00       	call   36990 <__ssprint_r>
   3388d:	85 c0                	test   %eax,%eax
   3388f:	0f 85 4b e7 ff ff    	jne    31fe0 <_svfprintf_r+0x1d0>
   33895:	8b b5 1c ff ff ff    	mov    -0xe4(%ebp),%esi
   3389b:	8d 7d a8             	lea    -0x58(%ebp),%edi
   3389e:	2b b5 5c ff ff ff    	sub    -0xa4(%ebp),%esi
   338a4:	8b 8d 7c ff ff ff    	mov    -0x84(%ebp),%ecx
   338aa:	e9 fa f8 ff ff       	jmp    331a9 <_svfprintf_r+0x1399>
   338af:	8b 95 44 ff ff ff    	mov    -0xbc(%ebp),%edx
   338b5:	b0 06                	mov    $0x6,%al
   338b7:	89 75 14             	mov    %esi,0x14(%ebp)
   338ba:	c7 85 44 ff ff ff 00 	movl   $0x0,-0xbc(%ebp)
   338c1:	00 00 00 
   338c4:	c7 85 20 ff ff ff 00 	movl   $0x0,-0xe0(%ebp)
   338cb:	00 00 00 
   338ce:	83 fa 06             	cmp    $0x6,%edx
   338d1:	0f 46 c2             	cmovbe %edx,%eax
   338d4:	8b 95 28 ff ff ff    	mov    -0xd8(%ebp),%edx
   338da:	85 c0                	test   %eax,%eax
   338dc:	89 85 38 ff ff ff    	mov    %eax,-0xc8(%ebp)
   338e2:	c7 85 28 ff ff ff e4 	movl   $0x38de4,-0xd8(%ebp)
   338e9:	8d 03 00 
   338ec:	0f 49 d0             	cmovns %eax,%edx
   338ef:	31 db                	xor    %ebx,%ebx
   338f1:	89 95 48 ff ff ff    	mov    %edx,-0xb8(%ebp)
   338f7:	e9 b7 e7 ff ff       	jmp    320b3 <_svfprintf_r+0x2a3>
   338fc:	c6 85 59 ff ff ff 2d 	movb   $0x2d,-0xa7(%ebp)
   33903:	bb 2d 00 00 00       	mov    $0x2d,%ebx
   33908:	e9 9d ea ff ff       	jmp    323aa <_svfprintf_r+0x59a>
   3390d:	ba 03 00 00 00       	mov    $0x3,%edx
   33912:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
   33918:	89 44 24 1c          	mov    %eax,0x1c(%esp)
   3391c:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
   33922:	89 44 24 18          	mov    %eax,0x18(%esp)
   33926:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
   3392c:	89 44 24 14          	mov    %eax,0x14(%esp)
   33930:	8b 85 44 ff ff ff    	mov    -0xbc(%ebp),%eax
   33936:	dd 54 24 04          	fstl   0x4(%esp)
   3393a:	89 54 24 0c          	mov    %edx,0xc(%esp)
   3393e:	dd 9d 38 ff ff ff    	fstpl  -0xc8(%ebp)
   33944:	89 44 24 10          	mov    %eax,0x10(%esp)
   33948:	8b 45 08             	mov    0x8(%ebp),%eax
   3394b:	89 04 24             	mov    %eax,(%esp)
   3394e:	e8 8d 05 00 00       	call   33ee0 <_dtoa_r>
   33953:	83 fb 47             	cmp    $0x47,%ebx
   33956:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
   3395c:	dd 85 38 ff ff ff    	fldl   -0xc8(%ebp)
   33962:	75 09                	jne    3396d <_svfprintf_r+0x1b5d>
   33964:	f6 85 4c ff ff ff 01 	testb  $0x1,-0xb4(%ebp)
   3396b:	74 5b                	je     339c8 <_svfprintf_r+0x1bb8>
   3396d:	8b 95 28 ff ff ff    	mov    -0xd8(%ebp),%edx
   33973:	89 f0                	mov    %esi,%eax
   33975:	8b 8d 44 ff ff ff    	mov    -0xbc(%ebp),%ecx
   3397b:	01 d1                	add    %edx,%ecx
   3397d:	84 c0                	test   %al,%al
   3397f:	0f 84 14 fc ff ff    	je     33599 <_svfprintf_r+0x1789>
   33985:	80 3a 30             	cmpb   $0x30,(%edx)
   33988:	0f 84 37 02 00 00    	je     33bc5 <_svfprintf_r+0x1db5>
   3398e:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
   33994:	01 c1                	add    %eax,%ecx
   33996:	e9 fe fb ff ff       	jmp    33599 <_svfprintf_r+0x1789>
   3399b:	89 85 48 ff ff ff    	mov    %eax,-0xb8(%ebp)
   339a1:	8b 85 30 ff ff ff    	mov    -0xd0(%ebp),%eax
   339a7:	bb 2d 00 00 00       	mov    $0x2d,%ebx
   339ac:	c6 85 59 ff ff ff 2d 	movb   $0x2d,-0xa7(%ebp)
   339b3:	c7 85 44 ff ff ff 00 	movl   $0x0,-0xbc(%ebp)
   339ba:	00 00 00 
   339bd:	89 85 4c ff ff ff    	mov    %eax,-0xb4(%ebp)
   339c3:	e9 e4 e6 ff ff       	jmp    320ac <_svfprintf_r+0x29c>
   339c8:	dd d8                	fstp   %st(0)
   339ca:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
   339d0:	89 85 1c ff ff ff    	mov    %eax,-0xe4(%ebp)
   339d6:	8b 85 28 ff ff ff    	mov    -0xd8(%ebp),%eax
   339dc:	29 85 1c ff ff ff    	sub    %eax,-0xe4(%ebp)
   339e2:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
   339e8:	83 f8 fd             	cmp    $0xfffffffd,%eax
   339eb:	7c 48                	jl     33a35 <_svfprintf_r+0x1c25>
   339ed:	39 85 44 ff ff ff    	cmp    %eax,-0xbc(%ebp)
   339f3:	7c 40                	jl     33a35 <_svfprintf_r+0x1c25>
   339f5:	89 85 20 ff ff ff    	mov    %eax,-0xe0(%ebp)
   339fb:	e9 ea fb ff ff       	jmp    335ea <_svfprintf_r+0x17da>
   33a00:	8b 85 44 ff ff ff    	mov    -0xbc(%ebp),%eax
   33a06:	0f b6 9d 59 ff ff ff 	movzbl -0xa7(%ebp),%ebx
   33a0d:	89 75 14             	mov    %esi,0x14(%ebp)
   33a10:	c7 85 44 ff ff ff 00 	movl   $0x0,-0xbc(%ebp)
   33a17:	00 00 00 
   33a1a:	89 85 48 ff ff ff    	mov    %eax,-0xb8(%ebp)
   33a20:	89 85 38 ff ff ff    	mov    %eax,-0xc8(%ebp)
   33a26:	c7 85 20 ff ff ff 00 	movl   $0x0,-0xe0(%ebp)
   33a2d:	00 00 00 
   33a30:	e9 73 e6 ff ff       	jmp    320a8 <_svfprintf_r+0x298>
   33a35:	83 ad 24 ff ff ff 02 	subl   $0x2,-0xdc(%ebp)
   33a3c:	8d 48 ff             	lea    -0x1(%eax),%ecx
   33a3f:	0f b6 85 24 ff ff ff 	movzbl -0xdc(%ebp),%eax
   33a46:	85 c9                	test   %ecx,%ecx
   33a48:	89 8d 5c ff ff ff    	mov    %ecx,-0xa4(%ebp)
   33a4e:	88 85 65 ff ff ff    	mov    %al,-0x9b(%ebp)
   33a54:	0f 88 2c 02 00 00    	js     33c86 <_svfprintf_r+0x1e76>
   33a5a:	c6 85 66 ff ff ff 2b 	movb   $0x2b,-0x9a(%ebp)
   33a61:	83 f9 09             	cmp    $0x9,%ecx
   33a64:	0f 8f ea 00 00 00    	jg     33b54 <_svfprintf_r+0x1d44>
   33a6a:	83 c1 30             	add    $0x30,%ecx
   33a6d:	c6 85 67 ff ff ff 30 	movb   $0x30,-0x99(%ebp)
   33a74:	8d 85 69 ff ff ff    	lea    -0x97(%ebp),%eax
   33a7a:	88 8d 68 ff ff ff    	mov    %cl,-0x98(%ebp)
   33a80:	8b 9d 1c ff ff ff    	mov    -0xe4(%ebp),%ebx
   33a86:	8d 95 65 ff ff ff    	lea    -0x9b(%ebp),%edx
   33a8c:	29 d0                	sub    %edx,%eax
   33a8e:	89 85 04 ff ff ff    	mov    %eax,-0xfc(%ebp)
   33a94:	89 da                	mov    %ebx,%edx
   33a96:	01 c2                	add    %eax,%edx
   33a98:	83 fb 01             	cmp    $0x1,%ebx
   33a9b:	89 95 38 ff ff ff    	mov    %edx,-0xc8(%ebp)
   33aa1:	0f 8e 21 02 00 00    	jle    33cc8 <_svfprintf_r+0x1eb8>
   33aa7:	31 c0                	xor    %eax,%eax
   33aa9:	83 85 38 ff ff ff 01 	addl   $0x1,-0xc8(%ebp)
   33ab0:	0f 49 85 38 ff ff ff 	cmovns -0xc8(%ebp),%eax
   33ab7:	c7 85 20 ff ff ff 00 	movl   $0x0,-0xe0(%ebp)
   33abe:	00 00 00 
   33ac1:	e9 60 fb ff ff       	jmp    33626 <_svfprintf_r+0x1816>
   33ac6:	8b 8d 48 ff ff ff    	mov    -0xb8(%ebp),%ecx
   33acc:	c7 85 44 ff ff ff 00 	movl   $0x0,-0xbc(%ebp)
   33ad3:	00 00 00 
   33ad6:	e9 68 e4 ff ff       	jmp    31f43 <_svfprintf_r+0x133>
   33adb:	ba 02 00 00 00       	mov    $0x2,%edx
   33ae0:	e9 2d fe ff ff       	jmp    33912 <_svfprintf_r+0x1b02>
   33ae5:	d9 e0                	fchs   
   33ae7:	c6 85 48 ff ff ff 2d 	movb   $0x2d,-0xb8(%ebp)
   33aee:	e9 38 fa ff ff       	jmp    3352b <_svfprintf_r+0x171b>
   33af3:	8b 8d 20 ff ff ff    	mov    -0xe0(%ebp),%ecx
   33af9:	ba 01 00 00 00       	mov    $0x1,%edx
   33afe:	85 c9                	test   %ecx,%ecx
   33b00:	0f 8e 5a 01 00 00    	jle    33c60 <_svfprintf_r+0x1e50>
   33b06:	31 c0                	xor    %eax,%eax
   33b08:	03 95 1c ff ff ff    	add    -0xe4(%ebp),%edx
   33b0e:	c7 85 24 ff ff ff 67 	movl   $0x67,-0xdc(%ebp)
   33b15:	00 00 00 
   33b18:	89 95 38 ff ff ff    	mov    %edx,-0xc8(%ebp)
   33b1e:	0f 49 c2             	cmovns %edx,%eax
   33b21:	e9 00 fb ff ff       	jmp    33626 <_svfprintf_r+0x1816>
   33b26:	85 c0                	test   %eax,%eax
   33b28:	0f 8e 06 01 00 00    	jle    33c34 <_svfprintf_r+0x1e24>
   33b2e:	8b b5 44 ff ff ff    	mov    -0xbc(%ebp),%esi
   33b34:	85 f6                	test   %esi,%esi
   33b36:	0f 85 d4 00 00 00    	jne    33c10 <_svfprintf_r+0x1e00>
   33b3c:	f6 85 4c ff ff ff 01 	testb  $0x1,-0xb4(%ebp)
   33b43:	0f 85 c7 00 00 00    	jne    33c10 <_svfprintf_r+0x1e00>
   33b49:	89 85 38 ff ff ff    	mov    %eax,-0xc8(%ebp)
   33b4f:	e9 d2 fa ff ff       	jmp    33626 <_svfprintf_r+0x1816>
   33b54:	8d b5 73 ff ff ff    	lea    -0x8d(%ebp),%esi
   33b5a:	89 f3                	mov    %esi,%ebx
   33b5c:	b8 67 66 66 66       	mov    $0x66666667,%eax
   33b61:	83 eb 01             	sub    $0x1,%ebx
   33b64:	f7 e9                	imul   %ecx
   33b66:	89 c8                	mov    %ecx,%eax
   33b68:	c1 f8 1f             	sar    $0x1f,%eax
   33b6b:	c1 fa 02             	sar    $0x2,%edx
   33b6e:	29 c2                	sub    %eax,%edx
   33b70:	8d 04 92             	lea    (%edx,%edx,4),%eax
   33b73:	01 c0                	add    %eax,%eax
   33b75:	29 c1                	sub    %eax,%ecx
   33b77:	83 fa 09             	cmp    $0x9,%edx
   33b7a:	8d 41 30             	lea    0x30(%ecx),%eax
   33b7d:	89 d1                	mov    %edx,%ecx
   33b7f:	88 03                	mov    %al,(%ebx)
   33b81:	7f d9                	jg     33b5c <_svfprintf_r+0x1d4c>
   33b83:	8d 43 ff             	lea    -0x1(%ebx),%eax
   33b86:	83 c1 30             	add    $0x30,%ecx
   33b89:	39 f0                	cmp    %esi,%eax
   33b8b:	88 4b ff             	mov    %cl,-0x1(%ebx)
   33b8e:	0f 83 6a 01 00 00    	jae    33cfe <_svfprintf_r+0x1eee>
   33b94:	8d 95 67 ff ff ff    	lea    -0x99(%ebp),%edx
   33b9a:	eb 07                	jmp    33ba3 <_svfprintf_r+0x1d93>
   33b9c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   33ba0:	0f b6 08             	movzbl (%eax),%ecx
   33ba3:	83 c0 01             	add    $0x1,%eax
   33ba6:	83 c2 01             	add    $0x1,%edx
   33ba9:	39 f0                	cmp    %esi,%eax
   33bab:	88 4a ff             	mov    %cl,-0x1(%edx)
   33bae:	75 f0                	jne    33ba0 <_svfprintf_r+0x1d90>
   33bb0:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   33bb6:	29 d8                	sub    %ebx,%eax
   33bb8:	8d 95 67 ff ff ff    	lea    -0x99(%ebp),%edx
   33bbe:	01 d0                	add    %edx,%eax
   33bc0:	e9 bb fe ff ff       	jmp    33a80 <_svfprintf_r+0x1c70>
   33bc5:	d9 ee                	fldz   
   33bc7:	d9 c9                	fxch   %st(1)
   33bc9:	db e9                	fucomi %st(1),%st
   33bcb:	dd d9                	fstp   %st(1)
   33bcd:	7a 06                	jp     33bd5 <_svfprintf_r+0x1dc5>
   33bcf:	0f 84 b9 fd ff ff    	je     3398e <_svfprintf_r+0x1b7e>
   33bd5:	b8 01 00 00 00       	mov    $0x1,%eax
   33bda:	2b 85 44 ff ff ff    	sub    -0xbc(%ebp),%eax
   33be0:	89 85 5c ff ff ff    	mov    %eax,-0xa4(%ebp)
   33be6:	01 c1                	add    %eax,%ecx
   33be8:	e9 ac f9 ff ff       	jmp    33599 <_svfprintf_r+0x1789>
   33bed:	8b 95 20 ff ff ff    	mov    -0xe0(%ebp),%edx
   33bf3:	31 c0                	xor    %eax,%eax
   33bf5:	c7 85 24 ff ff ff 67 	movl   $0x67,-0xdc(%ebp)
   33bfc:	00 00 00 
   33bff:	83 c2 01             	add    $0x1,%edx
   33c02:	89 95 38 ff ff ff    	mov    %edx,-0xc8(%ebp)
   33c08:	0f 49 c2             	cmovns %edx,%eax
   33c0b:	e9 16 fa ff ff       	jmp    33626 <_svfprintf_r+0x1816>
   33c10:	8b 95 20 ff ff ff    	mov    -0xe0(%ebp),%edx
   33c16:	8b 85 44 ff ff ff    	mov    -0xbc(%ebp),%eax
   33c1c:	8d 44 10 01          	lea    0x1(%eax,%edx,1),%eax
   33c20:	89 c2                	mov    %eax,%edx
   33c22:	89 85 38 ff ff ff    	mov    %eax,-0xc8(%ebp)
   33c28:	31 c0                	xor    %eax,%eax
   33c2a:	85 d2                	test   %edx,%edx
   33c2c:	0f 49 c2             	cmovns %edx,%eax
   33c2f:	e9 f2 f9 ff ff       	jmp    33626 <_svfprintf_r+0x1816>
   33c34:	8b 9d 44 ff ff ff    	mov    -0xbc(%ebp),%ebx
   33c3a:	85 db                	test   %ebx,%ebx
   33c3c:	75 2f                	jne    33c6d <_svfprintf_r+0x1e5d>
   33c3e:	f6 85 4c ff ff ff 01 	testb  $0x1,-0xb4(%ebp)
   33c45:	75 26                	jne    33c6d <_svfprintf_r+0x1e5d>
   33c47:	b8 01 00 00 00       	mov    $0x1,%eax
   33c4c:	c7 85 38 ff ff ff 01 	movl   $0x1,-0xc8(%ebp)
   33c53:	00 00 00 
   33c56:	e9 cb f9 ff ff       	jmp    33626 <_svfprintf_r+0x1816>
   33c5b:	90                   	nop
   33c5c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   33c60:	b2 02                	mov    $0x2,%dl
   33c62:	2b 95 20 ff ff ff    	sub    -0xe0(%ebp),%edx
   33c68:	e9 99 fe ff ff       	jmp    33b06 <_svfprintf_r+0x1cf6>
   33c6d:	8b 95 44 ff ff ff    	mov    -0xbc(%ebp),%edx
   33c73:	31 c0                	xor    %eax,%eax
   33c75:	83 c2 02             	add    $0x2,%edx
   33c78:	89 95 38 ff ff ff    	mov    %edx,-0xc8(%ebp)
   33c7e:	0f 49 c2             	cmovns %edx,%eax
   33c81:	e9 a0 f9 ff ff       	jmp    33626 <_svfprintf_r+0x1816>
   33c86:	f7 d9                	neg    %ecx
   33c88:	c6 85 66 ff ff ff 2d 	movb   $0x2d,-0x9a(%ebp)
   33c8f:	e9 cd fd ff ff       	jmp    33a61 <_svfprintf_r+0x1c51>
   33c94:	8b 55 14             	mov    0x14(%ebp),%edx
   33c97:	8b 45 14             	mov    0x14(%ebp),%eax
   33c9a:	8b 8d 48 ff ff ff    	mov    -0xb8(%ebp),%ecx
   33ca0:	8b 12                	mov    (%edx),%edx
   33ca2:	83 c0 04             	add    $0x4,%eax
   33ca5:	89 45 14             	mov    %eax,0x14(%ebp)
   33ca8:	85 d2                	test   %edx,%edx
   33caa:	89 95 44 ff ff ff    	mov    %edx,-0xbc(%ebp)
   33cb0:	0f 89 a9 e2 ff ff    	jns    31f5f <_svfprintf_r+0x14f>
   33cb6:	c7 85 44 ff ff ff ff 	movl   $0xffffffff,-0xbc(%ebp)
   33cbd:	ff ff ff 
   33cc0:	89 c8                	mov    %ecx,%eax
   33cc2:	e9 76 e2 ff ff       	jmp    31f3d <_svfprintf_r+0x12d>
   33cc7:	90                   	nop
   33cc8:	8b 85 4c ff ff ff    	mov    -0xb4(%ebp),%eax
   33cce:	83 e0 01             	and    $0x1,%eax
   33cd1:	0f 85 d0 fd ff ff    	jne    33aa7 <_svfprintf_r+0x1c97>
   33cd7:	85 d2                	test   %edx,%edx
   33cd9:	0f 49 c2             	cmovns %edx,%eax
   33cdc:	c7 85 20 ff ff ff 00 	movl   $0x0,-0xe0(%ebp)
   33ce3:	00 00 00 
   33ce6:	e9 3b f9 ff ff       	jmp    33626 <_svfprintf_r+0x1816>
   33ceb:	8b 45 08             	mov    0x8(%ebp),%eax
   33cee:	c7 00 0c 00 00 00    	movl   $0xc,(%eax)
   33cf4:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
   33cf9:	e9 f5 e2 ff ff       	jmp    31ff3 <_svfprintf_r+0x1e3>
   33cfe:	8d 85 67 ff ff ff    	lea    -0x99(%ebp),%eax
   33d04:	e9 77 fd ff ff       	jmp    33a80 <_svfprintf_r+0x1c70>
   33d09:	66 90                	xchg   %ax,%ax
   33d0b:	66 90                	xchg   %ax,%ax
   33d0d:	66 90                	xchg   %ax,%ax
   33d0f:	90                   	nop

00033d10 <quorem>:
   33d10:	55                   	push   %ebp
   33d11:	89 c1                	mov    %eax,%ecx
   33d13:	89 e5                	mov    %esp,%ebp
   33d15:	57                   	push   %edi
   33d16:	89 d7                	mov    %edx,%edi
   33d18:	56                   	push   %esi
   33d19:	53                   	push   %ebx
   33d1a:	83 ec 3c             	sub    $0x3c,%esp
   33d1d:	89 45 d0             	mov    %eax,-0x30(%ebp)
   33d20:	8b 42 10             	mov    0x10(%edx),%eax
   33d23:	3b 41 10             	cmp    0x10(%ecx),%eax
   33d26:	89 55 c8             	mov    %edx,-0x38(%ebp)
   33d29:	89 ca                	mov    %ecx,%edx
   33d2b:	0f 8f 9f 01 00 00    	jg     33ed0 <quorem+0x1c0>
   33d31:	83 e8 01             	sub    $0x1,%eax
   33d34:	83 c7 14             	add    $0x14,%edi
   33d37:	89 45 d4             	mov    %eax,-0x2c(%ebp)
   33d3a:	c1 e0 02             	shl    $0x2,%eax
   33d3d:	83 c2 14             	add    $0x14,%edx
   33d40:	8d 1c 07             	lea    (%edi,%eax,1),%ebx
   33d43:	01 d0                	add    %edx,%eax
   33d45:	89 55 d8             	mov    %edx,-0x28(%ebp)
   33d48:	8b 13                	mov    (%ebx),%edx
   33d4a:	89 45 c4             	mov    %eax,-0x3c(%ebp)
   33d4d:	8b 00                	mov    (%eax),%eax
   33d4f:	89 5d e4             	mov    %ebx,-0x1c(%ebp)
   33d52:	8d 4a 01             	lea    0x1(%edx),%ecx
   33d55:	31 d2                	xor    %edx,%edx
   33d57:	f7 f1                	div    %ecx
   33d59:	85 c0                	test   %eax,%eax
   33d5b:	89 45 e0             	mov    %eax,-0x20(%ebp)
   33d5e:	89 45 cc             	mov    %eax,-0x34(%ebp)
   33d61:	0f 84 b5 00 00 00    	je     33e1c <quorem+0x10c>
   33d67:	8b 45 d8             	mov    -0x28(%ebp),%eax
   33d6a:	31 f6                	xor    %esi,%esi
   33d6c:	89 fa                	mov    %edi,%edx
   33d6e:	89 7d c0             	mov    %edi,-0x40(%ebp)
   33d71:	89 f7                	mov    %esi,%edi
   33d73:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
   33d7a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   33d80:	83 c2 04             	add    $0x4,%edx
   33d83:	8b 72 fc             	mov    -0x4(%edx),%esi
   33d86:	83 c0 04             	add    $0x4,%eax
   33d89:	0f b7 ce             	movzwl %si,%ecx
   33d8c:	0f af 4d e0          	imul   -0x20(%ebp),%ecx
   33d90:	03 4d dc             	add    -0x24(%ebp),%ecx
   33d93:	c1 ee 10             	shr    $0x10,%esi
   33d96:	0f af 75 e0          	imul   -0x20(%ebp),%esi
   33d9a:	89 cb                	mov    %ecx,%ebx
   33d9c:	0f b7 c9             	movzwl %cx,%ecx
   33d9f:	c1 eb 10             	shr    $0x10,%ebx
   33da2:	29 cf                	sub    %ecx,%edi
   33da4:	01 f3                	add    %esi,%ebx
   33da6:	89 de                	mov    %ebx,%esi
   33da8:	0f b7 db             	movzwl %bx,%ebx
   33dab:	c1 ee 10             	shr    $0x10,%esi
   33dae:	89 75 dc             	mov    %esi,-0x24(%ebp)
   33db1:	8b 70 fc             	mov    -0x4(%eax),%esi
   33db4:	0f b7 ce             	movzwl %si,%ecx
   33db7:	01 f9                	add    %edi,%ecx
   33db9:	c1 ee 10             	shr    $0x10,%esi
   33dbc:	29 de                	sub    %ebx,%esi
   33dbe:	89 cb                	mov    %ecx,%ebx
   33dc0:	c1 fb 10             	sar    $0x10,%ebx
   33dc3:	0f b7 c9             	movzwl %cx,%ecx
   33dc6:	01 de                	add    %ebx,%esi
   33dc8:	89 f7                	mov    %esi,%edi
   33dca:	c1 e6 10             	shl    $0x10,%esi
   33dcd:	09 ce                	or     %ecx,%esi
   33dcf:	c1 ff 10             	sar    $0x10,%edi
   33dd2:	39 55 e4             	cmp    %edx,-0x1c(%ebp)
   33dd5:	89 70 fc             	mov    %esi,-0x4(%eax)
   33dd8:	73 a6                	jae    33d80 <quorem+0x70>
   33dda:	8b 45 c4             	mov    -0x3c(%ebp),%eax
   33ddd:	8b 7d c0             	mov    -0x40(%ebp),%edi
   33de0:	8b 10                	mov    (%eax),%edx
   33de2:	85 d2                	test   %edx,%edx
   33de4:	75 36                	jne    33e1c <quorem+0x10c>
   33de6:	8b 4d d8             	mov    -0x28(%ebp),%ecx
   33de9:	89 c2                	mov    %eax,%edx
   33deb:	83 e8 04             	sub    $0x4,%eax
   33dee:	39 c1                	cmp    %eax,%ecx
   33df0:	73 21                	jae    33e13 <quorem+0x103>
   33df2:	8b 72 fc             	mov    -0x4(%edx),%esi
   33df5:	85 f6                	test   %esi,%esi
   33df7:	75 1a                	jne    33e13 <quorem+0x103>
   33df9:	8b 55 d4             	mov    -0x2c(%ebp),%edx
   33dfc:	eb 08                	jmp    33e06 <quorem+0xf6>
   33dfe:	66 90                	xchg   %ax,%ax
   33e00:	8b 18                	mov    (%eax),%ebx
   33e02:	85 db                	test   %ebx,%ebx
   33e04:	75 0a                	jne    33e10 <quorem+0x100>
   33e06:	83 e8 04             	sub    $0x4,%eax
   33e09:	83 ea 01             	sub    $0x1,%edx
   33e0c:	39 c1                	cmp    %eax,%ecx
   33e0e:	72 f0                	jb     33e00 <quorem+0xf0>
   33e10:	89 55 d4             	mov    %edx,-0x2c(%ebp)
   33e13:	8b 45 d0             	mov    -0x30(%ebp),%eax
   33e16:	8b 55 d4             	mov    -0x2c(%ebp),%edx
   33e19:	89 50 10             	mov    %edx,0x10(%eax)
   33e1c:	8b 45 c8             	mov    -0x38(%ebp),%eax
   33e1f:	89 44 24 04          	mov    %eax,0x4(%esp)
   33e23:	8b 45 d0             	mov    -0x30(%ebp),%eax
   33e26:	89 04 24             	mov    %eax,(%esp)
   33e29:	e8 a2 23 00 00       	call   361d0 <__mcmp>
   33e2e:	85 c0                	test   %eax,%eax
   33e30:	0f 88 8e 00 00 00    	js     33ec4 <quorem+0x1b4>
   33e36:	8b 45 e0             	mov    -0x20(%ebp),%eax
   33e39:	31 f6                	xor    %esi,%esi
   33e3b:	83 c0 01             	add    $0x1,%eax
   33e3e:	89 45 cc             	mov    %eax,-0x34(%ebp)
   33e41:	8b 45 d8             	mov    -0x28(%ebp),%eax
   33e44:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   33e48:	83 c7 04             	add    $0x4,%edi
   33e4b:	8b 4f fc             	mov    -0x4(%edi),%ecx
   33e4e:	83 c0 04             	add    $0x4,%eax
   33e51:	8b 58 fc             	mov    -0x4(%eax),%ebx
   33e54:	0f b7 d1             	movzwl %cx,%edx
   33e57:	29 d6                	sub    %edx,%esi
   33e59:	0f b7 d3             	movzwl %bx,%edx
   33e5c:	01 f2                	add    %esi,%edx
   33e5e:	c1 e9 10             	shr    $0x10,%ecx
   33e61:	c1 eb 10             	shr    $0x10,%ebx
   33e64:	29 cb                	sub    %ecx,%ebx
   33e66:	89 d1                	mov    %edx,%ecx
   33e68:	c1 f9 10             	sar    $0x10,%ecx
   33e6b:	0f b7 d2             	movzwl %dx,%edx
   33e6e:	01 cb                	add    %ecx,%ebx
   33e70:	89 de                	mov    %ebx,%esi
   33e72:	c1 e3 10             	shl    $0x10,%ebx
   33e75:	09 d3                	or     %edx,%ebx
   33e77:	c1 fe 10             	sar    $0x10,%esi
   33e7a:	39 7d e4             	cmp    %edi,-0x1c(%ebp)
   33e7d:	89 58 fc             	mov    %ebx,-0x4(%eax)
   33e80:	73 c6                	jae    33e48 <quorem+0x138>
   33e82:	8b 45 d8             	mov    -0x28(%ebp),%eax
   33e85:	8b 7d d4             	mov    -0x2c(%ebp),%edi
   33e88:	8d 14 b8             	lea    (%eax,%edi,4),%edx
   33e8b:	8b 02                	mov    (%edx),%eax
   33e8d:	85 c0                	test   %eax,%eax
   33e8f:	75 33                	jne    33ec4 <quorem+0x1b4>
   33e91:	8b 4d d8             	mov    -0x28(%ebp),%ecx
   33e94:	8d 42 fc             	lea    -0x4(%edx),%eax
   33e97:	39 c1                	cmp    %eax,%ecx
   33e99:	73 20                	jae    33ebb <quorem+0x1ab>
   33e9b:	8b 72 fc             	mov    -0x4(%edx),%esi
   33e9e:	85 f6                	test   %esi,%esi
   33ea0:	75 19                	jne    33ebb <quorem+0x1ab>
   33ea2:	89 fa                	mov    %edi,%edx
   33ea4:	eb 08                	jmp    33eae <quorem+0x19e>
   33ea6:	66 90                	xchg   %ax,%ax
   33ea8:	8b 18                	mov    (%eax),%ebx
   33eaa:	85 db                	test   %ebx,%ebx
   33eac:	75 0a                	jne    33eb8 <quorem+0x1a8>
   33eae:	83 e8 04             	sub    $0x4,%eax
   33eb1:	83 ea 01             	sub    $0x1,%edx
   33eb4:	39 c1                	cmp    %eax,%ecx
   33eb6:	72 f0                	jb     33ea8 <quorem+0x198>
   33eb8:	89 55 d4             	mov    %edx,-0x2c(%ebp)
   33ebb:	8b 45 d0             	mov    -0x30(%ebp),%eax
   33ebe:	8b 7d d4             	mov    -0x2c(%ebp),%edi
   33ec1:	89 78 10             	mov    %edi,0x10(%eax)
   33ec4:	8b 45 cc             	mov    -0x34(%ebp),%eax
   33ec7:	83 c4 3c             	add    $0x3c,%esp
   33eca:	5b                   	pop    %ebx
   33ecb:	5e                   	pop    %esi
   33ecc:	5f                   	pop    %edi
   33ecd:	5d                   	pop    %ebp
   33ece:	c3                   	ret    
   33ecf:	90                   	nop
   33ed0:	83 c4 3c             	add    $0x3c,%esp
   33ed3:	31 c0                	xor    %eax,%eax
   33ed5:	5b                   	pop    %ebx
   33ed6:	5e                   	pop    %esi
   33ed7:	5f                   	pop    %edi
   33ed8:	5d                   	pop    %ebp
   33ed9:	c3                   	ret    
   33eda:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

00033ee0 <_dtoa_r>:
   33ee0:	55                   	push   %ebp
   33ee1:	89 e5                	mov    %esp,%ebp
   33ee3:	57                   	push   %edi
   33ee4:	56                   	push   %esi
   33ee5:	53                   	push   %ebx
   33ee6:	81 ec 8c 00 00 00    	sub    $0x8c,%esp
   33eec:	8b 75 08             	mov    0x8(%ebp),%esi
   33eef:	dd 45 0c             	fldl   0xc(%ebp)
   33ef2:	8b 5d 20             	mov    0x20(%ebp),%ebx
   33ef5:	dd 5d c0             	fstpl  -0x40(%ebp)
   33ef8:	8b 46 40             	mov    0x40(%esi),%eax
   33efb:	85 c0                	test   %eax,%eax
   33efd:	74 23                	je     33f22 <_dtoa_r+0x42>
   33eff:	8b 4e 44             	mov    0x44(%esi),%ecx
   33f02:	ba 01 00 00 00       	mov    $0x1,%edx
   33f07:	d3 e2                	shl    %cl,%edx
   33f09:	89 48 04             	mov    %ecx,0x4(%eax)
   33f0c:	89 50 08             	mov    %edx,0x8(%eax)
   33f0f:	89 44 24 04          	mov    %eax,0x4(%esp)
   33f13:	89 34 24             	mov    %esi,(%esp)
   33f16:	e8 95 1b 00 00       	call   35ab0 <_Bfree>
   33f1b:	c7 46 40 00 00 00 00 	movl   $0x0,0x40(%esi)
   33f22:	8b 7d c4             	mov    -0x3c(%ebp),%edi
   33f25:	85 ff                	test   %edi,%edi
   33f27:	0f 88 3b 02 00 00    	js     34168 <_dtoa_r+0x288>
   33f2d:	c7 03 00 00 00 00    	movl   $0x0,(%ebx)
   33f33:	89 f8                	mov    %edi,%eax
   33f35:	25 00 00 f0 7f       	and    $0x7ff00000,%eax
   33f3a:	3d 00 00 f0 7f       	cmp    $0x7ff00000,%eax
   33f3f:	0f 84 e3 01 00 00    	je     34128 <_dtoa_r+0x248>
   33f45:	dd 45 c0             	fldl   -0x40(%ebp)
   33f48:	d9 ee                	fldz   
   33f4a:	d9 c9                	fxch   %st(1)
   33f4c:	db e9                	fucomi %st(1),%st
   33f4e:	dd d9                	fstp   %st(1)
   33f50:	7a 36                	jp     33f88 <_dtoa_r+0xa8>
   33f52:	75 34                	jne    33f88 <_dtoa_r+0xa8>
   33f54:	dd d8                	fstp   %st(0)
   33f56:	8b 4d 24             	mov    0x24(%ebp),%ecx
   33f59:	8b 45 1c             	mov    0x1c(%ebp),%eax
   33f5c:	85 c9                	test   %ecx,%ecx
   33f5e:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
   33f64:	0f 84 4e 02 00 00    	je     341b8 <_dtoa_r+0x2d8>
   33f6a:	8b 45 24             	mov    0x24(%ebp),%eax
   33f6d:	c7 00 ec 8d 03 00    	movl   $0x38dec,(%eax)
   33f73:	b8 eb 8d 03 00       	mov    $0x38deb,%eax
   33f78:	81 c4 8c 00 00 00    	add    $0x8c,%esp
   33f7e:	5b                   	pop    %ebx
   33f7f:	5e                   	pop    %esi
   33f80:	5f                   	pop    %edi
   33f81:	5d                   	pop    %ebp
   33f82:	c3                   	ret    
   33f83:	90                   	nop
   33f84:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   33f88:	8d 45 e0             	lea    -0x20(%ebp),%eax
   33f8b:	89 fb                	mov    %edi,%ebx
   33f8d:	89 44 24 10          	mov    %eax,0x10(%esp)
   33f91:	8d 45 e4             	lea    -0x1c(%ebp),%eax
   33f94:	dd 54 24 04          	fstl   0x4(%esp)
   33f98:	89 44 24 0c          	mov    %eax,0xc(%esp)
   33f9c:	dd 5d b8             	fstpl  -0x48(%ebp)
   33f9f:	89 34 24             	mov    %esi,(%esp)
   33fa2:	c1 eb 14             	shr    $0x14,%ebx
   33fa5:	e8 76 25 00 00       	call   36520 <__d2b>
   33faa:	85 db                	test   %ebx,%ebx
   33fac:	89 45 a4             	mov    %eax,-0x5c(%ebp)
   33faf:	0f 85 db 01 00 00    	jne    34190 <_dtoa_r+0x2b0>
   33fb5:	8b 45 e0             	mov    -0x20(%ebp),%eax
   33fb8:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
   33fbb:	89 45 b4             	mov    %eax,-0x4c(%ebp)
   33fbe:	01 c3                	add    %eax,%ebx
   33fc0:	81 fb ef fb ff ff    	cmp    $0xfffffbef,%ebx
   33fc6:	0f 8c ec 07 00 00    	jl     347b8 <_dtoa_r+0x8d8>
   33fcc:	8b 55 c0             	mov    -0x40(%ebp),%edx
   33fcf:	b9 0e fc ff ff       	mov    $0xfffffc0e,%ecx
   33fd4:	89 f8                	mov    %edi,%eax
   33fd6:	29 d9                	sub    %ebx,%ecx
   33fd8:	d3 e0                	shl    %cl,%eax
   33fda:	8d 8b 12 04 00 00    	lea    0x412(%ebx),%ecx
   33fe0:	d3 ea                	shr    %cl,%edx
   33fe2:	09 d0                	or     %edx,%eax
   33fe4:	31 d2                	xor    %edx,%edx
   33fe6:	83 eb 01             	sub    $0x1,%ebx
   33fe9:	89 55 cc             	mov    %edx,-0x34(%ebp)
   33fec:	8b 55 b4             	mov    -0x4c(%ebp),%edx
   33fef:	89 45 c8             	mov    %eax,-0x38(%ebp)
   33ff2:	df 6d c8             	fildll -0x38(%ebp)
   33ff5:	dd 5d b8             	fstpl  -0x48(%ebp)
   33ff8:	81 6d bc 00 00 f0 01 	subl   $0x1f00000,-0x44(%ebp)
   33fff:	c7 45 8c 01 00 00 00 	movl   $0x1,-0x74(%ebp)
   34006:	dd 45 b8             	fldl   -0x48(%ebp)
   34009:	d8 25 84 8f 03 00    	fsubs  0x38f84
   3400f:	89 5d d4             	mov    %ebx,-0x2c(%ebp)
   34012:	d9 7d d2             	fnstcw -0x2e(%ebp)
   34015:	dc 0d a0 8f 03 00    	fmull  0x38fa0
   3401b:	0f b7 45 d2          	movzwl -0x2e(%ebp),%eax
   3401f:	b4 0c                	mov    $0xc,%ah
   34021:	dc 05 a8 8f 03 00    	faddl  0x38fa8
   34027:	66 89 45 d0          	mov    %ax,-0x30(%ebp)
   3402b:	db 45 d4             	fildl  -0x2c(%ebp)
   3402e:	dc 0d b0 8f 03 00    	fmull  0x38fb0
   34034:	de c1                	faddp  %st,%st(1)
   34036:	d9 6d d0             	fldcw  -0x30(%ebp)
   34039:	db 55 b8             	fistl  -0x48(%ebp)
   3403c:	d9 6d d2             	fldcw  -0x2e(%ebp)
   3403f:	d9 ee                	fldz   
   34041:	df e9                	fucomip %st(1),%st
   34043:	0f 87 27 07 00 00    	ja     34770 <_dtoa_r+0x890>
   34049:	dd d8                	fstp   %st(0)
   3404b:	83 7d b8 16          	cmpl   $0x16,-0x48(%ebp)
   3404f:	c7 45 9c 01 00 00 00 	movl   $0x1,-0x64(%ebp)
   34056:	77 24                	ja     3407c <_dtoa_r+0x19c>
   34058:	8b 45 b8             	mov    -0x48(%ebp),%eax
   3405b:	dd 04 c5 60 90 03 00 	fldl   0x39060(,%eax,8)
   34062:	dd 45 c0             	fldl   -0x40(%ebp)
   34065:	d9 c9                	fxch   %st(1)
   34067:	df e9                	fucomip %st(1),%st
   34069:	dd d8                	fstp   %st(0)
   3406b:	0f 86 5f 07 00 00    	jbe    347d0 <_dtoa_r+0x8f0>
   34071:	83 6d b8 01          	subl   $0x1,-0x48(%ebp)
   34075:	c7 45 9c 00 00 00 00 	movl   $0x0,-0x64(%ebp)
   3407c:	89 d0                	mov    %edx,%eax
   3407e:	29 d8                	sub    %ebx,%eax
   34080:	83 e8 01             	sub    $0x1,%eax
   34083:	c7 45 a0 00 00 00 00 	movl   $0x0,-0x60(%ebp)
   3408a:	89 45 ac             	mov    %eax,-0x54(%ebp)
   3408d:	0f 88 0d 07 00 00    	js     347a0 <_dtoa_r+0x8c0>
   34093:	8b 45 b8             	mov    -0x48(%ebp),%eax
   34096:	85 c0                	test   %eax,%eax
   34098:	0f 88 ea 06 00 00    	js     34788 <_dtoa_r+0x8a8>
   3409e:	01 45 ac             	add    %eax,-0x54(%ebp)
   340a1:	89 45 94             	mov    %eax,-0x6c(%ebp)
   340a4:	c7 45 b0 00 00 00 00 	movl   $0x0,-0x50(%ebp)
   340ab:	83 7d 14 09          	cmpl   $0x9,0x14(%ebp)
   340af:	0f 87 0b 03 00 00    	ja     343c0 <_dtoa_r+0x4e0>
   340b5:	83 7d 14 05          	cmpl   $0x5,0x14(%ebp)
   340b9:	0f 8e 23 10 00 00    	jle    350e2 <_dtoa_r+0x1202>
   340bf:	83 6d 14 04          	subl   $0x4,0x14(%ebp)
   340c3:	31 c0                	xor    %eax,%eax
   340c5:	83 7d 14 03          	cmpl   $0x3,0x14(%ebp)
   340c9:	0f 84 43 0d 00 00    	je     34e12 <_dtoa_r+0xf32>
   340cf:	0f 8e f3 00 00 00    	jle    341c8 <_dtoa_r+0x2e8>
   340d5:	83 7d 14 04          	cmpl   $0x4,0x14(%ebp)
   340d9:	c7 45 98 01 00 00 00 	movl   $0x1,-0x68(%ebp)
   340e0:	0f 84 f3 00 00 00    	je     341d9 <_dtoa_r+0x2f9>
   340e6:	83 7d 14 05          	cmpl   $0x5,0x14(%ebp)
   340ea:	0f 85 d7 02 00 00    	jne    343c7 <_dtoa_r+0x4e7>
   340f0:	8b 5d b8             	mov    -0x48(%ebp),%ebx
   340f3:	03 5d 18             	add    0x18(%ebp),%ebx
   340f6:	89 5d 90             	mov    %ebx,-0x70(%ebp)
   340f9:	83 c3 01             	add    $0x1,%ebx
   340fc:	83 fb 0e             	cmp    $0xe,%ebx
   340ff:	0f 96 c2             	setbe  %dl
   34102:	85 db                	test   %ebx,%ebx
   34104:	89 5d a8             	mov    %ebx,-0x58(%ebp)
   34107:	0f 8e a7 08 00 00    	jle    349b4 <_dtoa_r+0xad4>
   3410d:	8b 5d a8             	mov    -0x58(%ebp),%ebx
   34110:	83 fb 0e             	cmp    $0xe,%ebx
   34113:	89 df                	mov    %ebx,%edi
   34115:	0f 96 45 b4          	setbe  -0x4c(%ebp)
   34119:	20 45 b4             	and    %al,-0x4c(%ebp)
   3411c:	e9 d6 00 00 00       	jmp    341f7 <_dtoa_r+0x317>
   34121:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   34128:	8b 55 c0             	mov    -0x40(%ebp),%edx
   3412b:	8b 45 1c             	mov    0x1c(%ebp),%eax
   3412e:	85 d2                	test   %edx,%edx
   34130:	c7 00 0f 27 00 00    	movl   $0x270f,(%eax)
   34136:	b8 7d 8f 03 00       	mov    $0x38f7d,%eax
   3413b:	74 43                	je     34180 <_dtoa_r+0x2a0>
   3413d:	8b 5d 24             	mov    0x24(%ebp),%ebx
   34140:	85 db                	test   %ebx,%ebx
   34142:	0f 84 30 fe ff ff    	je     33f78 <_dtoa_r+0x98>
   34148:	8b 75 24             	mov    0x24(%ebp),%esi
   3414b:	8d 50 08             	lea    0x8(%eax),%edx
   3414e:	80 78 03 00          	cmpb   $0x0,0x3(%eax)
   34152:	8d 48 03             	lea    0x3(%eax),%ecx
   34155:	0f 44 d1             	cmove  %ecx,%edx
   34158:	89 16                	mov    %edx,(%esi)
   3415a:	81 c4 8c 00 00 00    	add    $0x8c,%esp
   34160:	5b                   	pop    %ebx
   34161:	5e                   	pop    %esi
   34162:	5f                   	pop    %edi
   34163:	5d                   	pop    %ebp
   34164:	c3                   	ret    
   34165:	8d 76 00             	lea    0x0(%esi),%esi
   34168:	81 e7 ff ff ff 7f    	and    $0x7fffffff,%edi
   3416e:	c7 03 01 00 00 00    	movl   $0x1,(%ebx)
   34174:	89 7d c4             	mov    %edi,-0x3c(%ebp)
   34177:	e9 b7 fd ff ff       	jmp    33f33 <_dtoa_r+0x53>
   3417c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   34180:	81 e7 ff ff 0f 00    	and    $0xfffff,%edi
   34186:	ba 74 8f 03 00       	mov    $0x38f74,%edx
   3418b:	0f 44 c2             	cmove  %edx,%eax
   3418e:	eb ad                	jmp    3413d <_dtoa_r+0x25d>
   34190:	8b 45 bc             	mov    -0x44(%ebp),%eax
   34193:	81 eb ff 03 00 00    	sub    $0x3ff,%ebx
   34199:	8b 55 e0             	mov    -0x20(%ebp),%edx
   3419c:	c7 45 8c 00 00 00 00 	movl   $0x0,-0x74(%ebp)
   341a3:	25 ff ff 0f 00       	and    $0xfffff,%eax
   341a8:	0d 00 00 f0 3f       	or     $0x3ff00000,%eax
   341ad:	89 45 bc             	mov    %eax,-0x44(%ebp)
   341b0:	e9 51 fe ff ff       	jmp    34006 <_dtoa_r+0x126>
   341b5:	8d 76 00             	lea    0x0(%esi),%esi
   341b8:	b8 eb 8d 03 00       	mov    $0x38deb,%eax
   341bd:	e9 b6 fd ff ff       	jmp    33f78 <_dtoa_r+0x98>
   341c2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   341c8:	83 7d 14 02          	cmpl   $0x2,0x14(%ebp)
   341cc:	c7 45 98 00 00 00 00 	movl   $0x0,-0x68(%ebp)
   341d3:	0f 85 ee 01 00 00    	jne    343c7 <_dtoa_r+0x4e7>
   341d9:	8b 55 18             	mov    0x18(%ebp),%edx
   341dc:	85 d2                	test   %edx,%edx
   341de:	0f 8e b6 07 00 00    	jle    3499a <_dtoa_r+0xaba>
   341e4:	8b 7d 18             	mov    0x18(%ebp),%edi
   341e7:	83 ff 0e             	cmp    $0xe,%edi
   341ea:	0f 96 45 b4          	setbe  -0x4c(%ebp)
   341ee:	20 45 b4             	and    %al,-0x4c(%ebp)
   341f1:	89 7d 90             	mov    %edi,-0x70(%ebp)
   341f4:	89 7d a8             	mov    %edi,-0x58(%ebp)
   341f7:	83 ff 17             	cmp    $0x17,%edi
   341fa:	c7 46 44 00 00 00 00 	movl   $0x0,0x44(%esi)
   34201:	0f 86 e5 0e 00 00    	jbe    350ec <_dtoa_r+0x120c>
   34207:	b9 01 00 00 00       	mov    $0x1,%ecx
   3420c:	b8 04 00 00 00       	mov    $0x4,%eax
   34211:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   34218:	01 c0                	add    %eax,%eax
   3421a:	89 ca                	mov    %ecx,%edx
   3421c:	8d 58 14             	lea    0x14(%eax),%ebx
   3421f:	39 fb                	cmp    %edi,%ebx
   34221:	8d 49 01             	lea    0x1(%ecx),%ecx
   34224:	76 f2                	jbe    34218 <_dtoa_r+0x338>
   34226:	89 56 44             	mov    %edx,0x44(%esi)
   34229:	89 54 24 04          	mov    %edx,0x4(%esp)
   3422d:	89 34 24             	mov    %esi,(%esp)
   34230:	e8 db 17 00 00       	call   35a10 <_Balloc>
   34235:	80 7d b4 00          	cmpb   $0x0,-0x4c(%ebp)
   34239:	89 c7                	mov    %eax,%edi
   3423b:	89 46 40             	mov    %eax,0x40(%esi)
   3423e:	0f 84 bb 01 00 00    	je     343ff <_dtoa_r+0x51f>
   34244:	8b 5d b8             	mov    -0x48(%ebp),%ebx
   34247:	dd 45 c0             	fldl   -0x40(%ebp)
   3424a:	85 db                	test   %ebx,%ebx
   3424c:	0f 8e de 07 00 00    	jle    34a30 <_dtoa_r+0xb50>
   34252:	89 d8                	mov    %ebx,%eax
   34254:	83 e0 0f             	and    $0xf,%eax
   34257:	dd 04 c5 60 90 03 00 	fldl   0x39060(,%eax,8)
   3425e:	89 d8                	mov    %ebx,%eax
   34260:	c1 f8 04             	sar    $0x4,%eax
   34263:	a8 10                	test   $0x10,%al
   34265:	0f 84 cd 05 00 00    	je     34838 <_dtoa_r+0x958>
   3426b:	dd 05 40 90 03 00    	fldl   0x39040
   34271:	83 e0 0f             	and    $0xf,%eax
   34274:	b9 03 00 00 00       	mov    $0x3,%ecx
   34279:	d8 fa                	fdivr  %st(2),%st
   3427b:	85 c0                	test   %eax,%eax
   3427d:	74 22                	je     342a1 <_dtoa_r+0x3c1>
   3427f:	31 d2                	xor    %edx,%edx
   34281:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   34288:	a8 01                	test   $0x1,%al
   3428a:	74 0e                	je     3429a <_dtoa_r+0x3ba>
   3428c:	d9 c9                	fxch   %st(1)
   3428e:	dc 0c d5 20 90 03 00 	fmull  0x39020(,%edx,8)
   34295:	d9 c9                	fxch   %st(1)
   34297:	83 c1 01             	add    $0x1,%ecx
   3429a:	83 c2 01             	add    $0x1,%edx
   3429d:	d1 f8                	sar    %eax
   3429f:	75 e7                	jne    34288 <_dtoa_r+0x3a8>
   342a1:	de f1                	fdivp  %st,%st(1)
   342a3:	8b 45 9c             	mov    -0x64(%ebp),%eax
   342a6:	85 c0                	test   %eax,%eax
   342a8:	74 0a                	je     342b4 <_dtoa_r+0x3d4>
   342aa:	d9 e8                	fld1   
   342ac:	df e9                	fucomip %st(1),%st
   342ae:	0f 87 92 0b 00 00    	ja     34e46 <_dtoa_r+0xf66>
   342b4:	89 4d d4             	mov    %ecx,-0x2c(%ebp)
   342b7:	8b 45 a8             	mov    -0x58(%ebp),%eax
   342ba:	db 45 d4             	fildl  -0x2c(%ebp)
   342bd:	d8 c9                	fmul   %st(1),%st
   342bf:	d8 05 90 8f 03 00    	fadds  0x38f90
   342c5:	dd 5d c0             	fstpl  -0x40(%ebp)
   342c8:	81 6d c4 00 00 40 03 	subl   $0x3400000,-0x3c(%ebp)
   342cf:	85 c0                	test   %eax,%eax
   342d1:	0f 84 89 05 00 00    	je     34860 <_dtoa_r+0x980>
   342d7:	8b 45 b8             	mov    -0x48(%ebp),%eax
   342da:	8b 4d a8             	mov    -0x58(%ebp),%ecx
   342dd:	89 45 b4             	mov    %eax,-0x4c(%ebp)
   342e0:	8b 45 98             	mov    -0x68(%ebp),%eax
   342e3:	85 c0                	test   %eax,%eax
   342e5:	0f 84 b5 07 00 00    	je     34aa0 <_dtoa_r+0xbc0>
   342eb:	d9 05 98 8f 03 00    	flds   0x38f98
   342f1:	8d 57 01             	lea    0x1(%edi),%edx
   342f4:	dc 34 cd 58 90 03 00 	fdivl  0x39058(,%ecx,8)
   342fb:	d9 7d d2             	fnstcw -0x2e(%ebp)
   342fe:	0f b7 45 d2          	movzwl -0x2e(%ebp),%eax
   34302:	b4 0c                	mov    $0xc,%ah
   34304:	66 89 45 d0          	mov    %ax,-0x30(%ebp)
   34308:	dc 65 c0             	fsubl  -0x40(%ebp)
   3430b:	d9 c9                	fxch   %st(1)
   3430d:	d9 6d d0             	fldcw  -0x30(%ebp)
   34310:	db 55 d4             	fistl  -0x2c(%ebp)
   34313:	d9 6d d2             	fldcw  -0x2e(%ebp)
   34316:	8b 45 d4             	mov    -0x2c(%ebp),%eax
   34319:	89 45 d4             	mov    %eax,-0x2c(%ebp)
   3431c:	83 c0 30             	add    $0x30,%eax
   3431f:	db 45 d4             	fildl  -0x2c(%ebp)
   34322:	de e9                	fsubrp %st,%st(1)
   34324:	d9 c9                	fxch   %st(1)
   34326:	88 07                	mov    %al,(%edi)
   34328:	db e9                	fucomi %st(1),%st
   3432a:	77 7f                	ja     343ab <_dtoa_r+0x4cb>
   3432c:	d9 c1                	fld    %st(1)
   3432e:	d8 2d 88 8f 03 00    	fsubrs 0x38f88
   34334:	d9 c9                	fxch   %st(1)
   34336:	db e9                	fucomi %st(1),%st
   34338:	dd d9                	fstp   %st(1)
   3433a:	0f 87 33 0c 00 00    	ja     34f73 <_dtoa_r+0x1093>
   34340:	83 f9 01             	cmp    $0x1,%ecx
   34343:	0f 8e c4 06 00 00    	jle    34a0d <_dtoa_r+0xb2d>
   34349:	01 f9                	add    %edi,%ecx
   3434b:	d9 05 8c 8f 03 00    	flds   0x38f8c
   34351:	eb 25                	jmp    34378 <_dtoa_r+0x498>
   34353:	90                   	nop
   34354:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   34358:	d9 c1                	fld    %st(1)
   3435a:	d8 2d 88 8f 03 00    	fsubrs 0x38f88
   34360:	d9 c9                	fxch   %st(1)
   34362:	db e9                	fucomi %st(1),%st
   34364:	dd d9                	fstp   %st(1)
   34366:	0f 87 14 0c 00 00    	ja     34f80 <_dtoa_r+0x10a0>
   3436c:	39 ca                	cmp    %ecx,%edx
   3436e:	0f 84 a4 06 00 00    	je     34a18 <_dtoa_r+0xb38>
   34374:	d9 c9                	fxch   %st(1)
   34376:	d9 ca                	fxch   %st(2)
   34378:	dc c9                	fmul   %st,%st(1)
   3437a:	83 c2 01             	add    $0x1,%edx
   3437d:	dc ca                	fmul   %st,%st(2)
   3437f:	d9 ca                	fxch   %st(2)
   34381:	d9 6d d0             	fldcw  -0x30(%ebp)
   34384:	db 55 d4             	fistl  -0x2c(%ebp)
   34387:	d9 6d d2             	fldcw  -0x2e(%ebp)
   3438a:	8b 45 d4             	mov    -0x2c(%ebp),%eax
   3438d:	89 45 d4             	mov    %eax,-0x2c(%ebp)
   34390:	83 c0 30             	add    $0x30,%eax
   34393:	db 45 d4             	fildl  -0x2c(%ebp)
   34396:	de e9                	fsubrp %st,%st(1)
   34398:	d9 c9                	fxch   %st(1)
   3439a:	88 42 ff             	mov    %al,-0x1(%edx)
   3439d:	db e9                	fucomi %st(1),%st
   3439f:	76 b7                	jbe    34358 <_dtoa_r+0x478>
   343a1:	dd d8                	fstp   %st(0)
   343a3:	dd d8                	fstp   %st(0)
   343a5:	dd d8                	fstp   %st(0)
   343a7:	dd d8                	fstp   %st(0)
   343a9:	eb 06                	jmp    343b1 <_dtoa_r+0x4d1>
   343ab:	dd d8                	fstp   %st(0)
   343ad:	dd d8                	fstp   %st(0)
   343af:	dd d8                	fstp   %st(0)
   343b1:	8b 45 b4             	mov    -0x4c(%ebp),%eax
   343b4:	89 fb                	mov    %edi,%ebx
   343b6:	89 d7                	mov    %edx,%edi
   343b8:	89 45 b8             	mov    %eax,-0x48(%ebp)
   343bb:	e9 70 03 00 00       	jmp    34730 <_dtoa_r+0x850>
   343c0:	c7 45 14 00 00 00 00 	movl   $0x0,0x14(%ebp)
   343c7:	c7 46 44 00 00 00 00 	movl   $0x0,0x44(%esi)
   343ce:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
   343d5:	00 
   343d6:	89 34 24             	mov    %esi,(%esp)
   343d9:	e8 32 16 00 00       	call   35a10 <_Balloc>
   343de:	c7 45 98 01 00 00 00 	movl   $0x1,-0x68(%ebp)
   343e5:	c7 45 a8 ff ff ff ff 	movl   $0xffffffff,-0x58(%ebp)
   343ec:	c7 45 90 ff ff ff ff 	movl   $0xffffffff,-0x70(%ebp)
   343f3:	c7 45 18 00 00 00 00 	movl   $0x0,0x18(%ebp)
   343fa:	89 c7                	mov    %eax,%edi
   343fc:	89 46 40             	mov    %eax,0x40(%esi)
   343ff:	8b 45 e4             	mov    -0x1c(%ebp),%eax
   34402:	85 c0                	test   %eax,%eax
   34404:	0f 88 2e 01 00 00    	js     34538 <_dtoa_r+0x658>
   3440a:	83 7d b8 0e          	cmpl   $0xe,-0x48(%ebp)
   3440e:	0f 8f 24 01 00 00    	jg     34538 <_dtoa_r+0x658>
   34414:	8b 45 b8             	mov    -0x48(%ebp),%eax
   34417:	dd 04 c5 60 90 03 00 	fldl   0x39060(,%eax,8)
   3441e:	8b 45 a8             	mov    -0x58(%ebp),%eax
   34421:	85 c0                	test   %eax,%eax
   34423:	7f 0e                	jg     34433 <_dtoa_r+0x553>
   34425:	8b 45 18             	mov    0x18(%ebp),%eax
   34428:	c1 e8 1f             	shr    $0x1f,%eax
   3442b:	84 c0                	test   %al,%al
   3442d:	0f 85 9d 07 00 00    	jne    34bd0 <_dtoa_r+0xcf0>
   34433:	dd 45 c0             	fldl   -0x40(%ebp)
   34436:	d9 c0                	fld    %st(0)
   34438:	d8 f2                	fdiv   %st(2),%st
   3443a:	d9 7d d2             	fnstcw -0x2e(%ebp)
   3443d:	83 7d a8 01          	cmpl   $0x1,-0x58(%ebp)
   34441:	0f b7 45 d2          	movzwl -0x2e(%ebp),%eax
   34445:	b4 0c                	mov    $0xc,%ah
   34447:	66 89 45 d0          	mov    %ax,-0x30(%ebp)
   3444b:	8d 47 01             	lea    0x1(%edi),%eax
   3444e:	89 45 c0             	mov    %eax,-0x40(%ebp)
   34451:	d9 6d d0             	fldcw  -0x30(%ebp)
   34454:	db 5d d4             	fistpl -0x2c(%ebp)
   34457:	d9 6d d2             	fldcw  -0x2e(%ebp)
   3445a:	8b 55 d4             	mov    -0x2c(%ebp),%edx
   3445d:	89 55 d4             	mov    %edx,-0x2c(%ebp)
   34460:	8d 42 30             	lea    0x30(%edx),%eax
   34463:	db 45 d4             	fildl  -0x2c(%ebp)
   34466:	d8 ca                	fmul   %st(2),%st
   34468:	88 07                	mov    %al,(%edi)
   3446a:	de e9                	fsubrp %st,%st(1)
   3446c:	74 66                	je     344d4 <_dtoa_r+0x5f4>
   3446e:	d8 0d 8c 8f 03 00    	fmuls  0x38f8c
   34474:	d9 ee                	fldz   
   34476:	d9 c9                	fxch   %st(1)
   34478:	db e9                	fucomi %st(1),%st
   3447a:	dd d9                	fstp   %st(1)
   3447c:	0f 8b 33 0c 00 00    	jnp    350b5 <_dtoa_r+0x11d5>
   34482:	8b 5d a8             	mov    -0x58(%ebp),%ebx
   34485:	8d 47 02             	lea    0x2(%edi),%eax
   34488:	d9 05 8c 8f 03 00    	flds   0x38f8c
   3448e:	01 fb                	add    %edi,%ebx
   34490:	eb 19                	jmp    344ab <_dtoa_r+0x5cb>
   34492:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   34498:	dc c9                	fmul   %st,%st(1)
   3449a:	83 c0 01             	add    $0x1,%eax
   3449d:	d9 ee                	fldz   
   3449f:	d9 ca                	fxch   %st(2)
   344a1:	db ea                	fucomi %st(2),%st
   344a3:	dd da                	fstp   %st(2)
   344a5:	0f 8b 73 09 00 00    	jnp    34e1e <_dtoa_r+0xf3e>
   344ab:	d9 c1                	fld    %st(1)
   344ad:	39 d8                	cmp    %ebx,%eax
   344af:	d8 f3                	fdiv   %st(3),%st
   344b1:	89 45 c0             	mov    %eax,-0x40(%ebp)
   344b4:	d9 6d d0             	fldcw  -0x30(%ebp)
   344b7:	db 5d d4             	fistpl -0x2c(%ebp)
   344ba:	d9 6d d2             	fldcw  -0x2e(%ebp)
   344bd:	8b 55 d4             	mov    -0x2c(%ebp),%edx
   344c0:	89 55 d4             	mov    %edx,-0x2c(%ebp)
   344c3:	8d 4a 30             	lea    0x30(%edx),%ecx
   344c6:	db 45 d4             	fildl  -0x2c(%ebp)
   344c9:	d8 cb                	fmul   %st(3),%st
   344cb:	88 48 ff             	mov    %cl,-0x1(%eax)
   344ce:	de ea                	fsubrp %st,%st(2)
   344d0:	75 c6                	jne    34498 <_dtoa_r+0x5b8>
   344d2:	dd d8                	fstp   %st(0)
   344d4:	d8 c0                	fadd   %st(0),%st
   344d6:	db e9                	fucomi %st(1),%st
   344d8:	77 1e                	ja     344f8 <_dtoa_r+0x618>
   344da:	d9 c9                	fxch   %st(1)
   344dc:	df e9                	fucomip %st(1),%st
   344de:	dd d8                	fstp   %st(0)
   344e0:	0f 8a 44 09 00 00    	jp     34e2a <_dtoa_r+0xf4a>
   344e6:	0f 85 3e 09 00 00    	jne    34e2a <_dtoa_r+0xf4a>
   344ec:	83 e2 01             	and    $0x1,%edx
   344ef:	90                   	nop
   344f0:	0f 84 34 09 00 00    	je     34e2a <_dtoa_r+0xf4a>
   344f6:	eb 04                	jmp    344fc <_dtoa_r+0x61c>
   344f8:	dd d8                	fstp   %st(0)
   344fa:	dd d8                	fstp   %st(0)
   344fc:	8b 4d c0             	mov    -0x40(%ebp),%ecx
   344ff:	89 fb                	mov    %edi,%ebx
   34501:	0f b6 41 ff          	movzbl -0x1(%ecx),%eax
   34505:	89 cf                	mov    %ecx,%edi
   34507:	8b 4d b8             	mov    -0x48(%ebp),%ecx
   3450a:	89 4d b4             	mov    %ecx,-0x4c(%ebp)
   3450d:	eb 0f                	jmp    3451e <_dtoa_r+0x63e>
   3450f:	90                   	nop
   34510:	39 d3                	cmp    %edx,%ebx
   34512:	0f 84 75 09 00 00    	je     34e8d <_dtoa_r+0xfad>
   34518:	0f b6 42 ff          	movzbl -0x1(%edx),%eax
   3451c:	89 d7                	mov    %edx,%edi
   3451e:	3c 39                	cmp    $0x39,%al
   34520:	8d 57 ff             	lea    -0x1(%edi),%edx
   34523:	74 eb                	je     34510 <_dtoa_r+0x630>
   34525:	8b 4d b4             	mov    -0x4c(%ebp),%ecx
   34528:	83 c0 01             	add    $0x1,%eax
   3452b:	88 02                	mov    %al,(%edx)
   3452d:	89 4d b8             	mov    %ecx,-0x48(%ebp)
   34530:	e9 fb 01 00 00       	jmp    34730 <_dtoa_r+0x850>
   34535:	8d 76 00             	lea    0x0(%esi),%esi
   34538:	8b 4d 98             	mov    -0x68(%ebp),%ecx
   3453b:	85 c9                	test   %ecx,%ecx
   3453d:	0f 85 9d 02 00 00    	jne    347e0 <_dtoa_r+0x900>
   34543:	8b 55 b0             	mov    -0x50(%ebp),%edx
   34546:	8b 5d a0             	mov    -0x60(%ebp),%ebx
   34549:	c7 45 b4 00 00 00 00 	movl   $0x0,-0x4c(%ebp)
   34550:	8b 45 ac             	mov    -0x54(%ebp),%eax
   34553:	85 c0                	test   %eax,%eax
   34555:	7e 14                	jle    3456b <_dtoa_r+0x68b>
   34557:	85 db                	test   %ebx,%ebx
   34559:	7e 10                	jle    3456b <_dtoa_r+0x68b>
   3455b:	8b 45 ac             	mov    -0x54(%ebp),%eax
   3455e:	39 d8                	cmp    %ebx,%eax
   34560:	0f 4f c3             	cmovg  %ebx,%eax
   34563:	29 45 a0             	sub    %eax,-0x60(%ebp)
   34566:	29 c3                	sub    %eax,%ebx
   34568:	29 45 ac             	sub    %eax,-0x54(%ebp)
   3456b:	8b 45 b0             	mov    -0x50(%ebp),%eax
   3456e:	85 c0                	test   %eax,%eax
   34570:	7e 61                	jle    345d3 <_dtoa_r+0x6f3>
   34572:	8b 45 98             	mov    -0x68(%ebp),%eax
   34575:	85 c0                	test   %eax,%eax
   34577:	0f 84 72 04 00 00    	je     349ef <_dtoa_r+0xb0f>
   3457d:	85 d2                	test   %edx,%edx
   3457f:	7e 47                	jle    345c8 <_dtoa_r+0x6e8>
   34581:	8b 45 b4             	mov    -0x4c(%ebp),%eax
   34584:	89 54 24 08          	mov    %edx,0x8(%esp)
   34588:	89 34 24             	mov    %esi,(%esp)
   3458b:	89 55 88             	mov    %edx,-0x78(%ebp)
   3458e:	89 44 24 04          	mov    %eax,0x4(%esp)
   34592:	e8 f9 19 00 00       	call   35f90 <__pow5mult>
   34597:	8b 4d a4             	mov    -0x5c(%ebp),%ecx
   3459a:	89 34 24             	mov    %esi,(%esp)
   3459d:	89 4c 24 08          	mov    %ecx,0x8(%esp)
   345a1:	89 44 24 04          	mov    %eax,0x4(%esp)
   345a5:	89 45 b4             	mov    %eax,-0x4c(%ebp)
   345a8:	e8 13 18 00 00       	call   35dc0 <__multiply>
   345ad:	8b 4d a4             	mov    -0x5c(%ebp),%ecx
   345b0:	89 34 24             	mov    %esi,(%esp)
   345b3:	89 4c 24 04          	mov    %ecx,0x4(%esp)
   345b7:	89 45 8c             	mov    %eax,-0x74(%ebp)
   345ba:	e8 f1 14 00 00       	call   35ab0 <_Bfree>
   345bf:	8b 45 8c             	mov    -0x74(%ebp),%eax
   345c2:	8b 55 88             	mov    -0x78(%ebp),%edx
   345c5:	89 45 a4             	mov    %eax,-0x5c(%ebp)
   345c8:	8b 45 b0             	mov    -0x50(%ebp),%eax
   345cb:	29 d0                	sub    %edx,%eax
   345cd:	0f 85 1f 04 00 00    	jne    349f2 <_dtoa_r+0xb12>
   345d3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
   345da:	00 
   345db:	89 34 24             	mov    %esi,(%esp)
   345de:	e8 ad 17 00 00       	call   35d90 <__i2b>
   345e3:	8b 4d 94             	mov    -0x6c(%ebp),%ecx
   345e6:	85 c9                	test   %ecx,%ecx
   345e8:	89 45 b0             	mov    %eax,-0x50(%ebp)
   345eb:	7e 13                	jle    34600 <_dtoa_r+0x720>
   345ed:	89 4c 24 08          	mov    %ecx,0x8(%esp)
   345f1:	89 44 24 04          	mov    %eax,0x4(%esp)
   345f5:	89 34 24             	mov    %esi,(%esp)
   345f8:	e8 93 19 00 00       	call   35f90 <__pow5mult>
   345fd:	89 45 b0             	mov    %eax,-0x50(%ebp)
   34600:	83 7d 14 01          	cmpl   $0x1,0x14(%ebp)
   34604:	c7 45 8c 00 00 00 00 	movl   $0x0,-0x74(%ebp)
   3460b:	0f 8e f7 05 00 00    	jle    34c08 <_dtoa_r+0xd28>
   34611:	8b 45 94             	mov    -0x6c(%ebp),%eax
   34614:	ba 01 00 00 00       	mov    $0x1,%edx
   34619:	85 c0                	test   %eax,%eax
   3461b:	0f 85 27 05 00 00    	jne    34b48 <_dtoa_r+0xc68>
   34621:	8b 45 ac             	mov    -0x54(%ebp),%eax
   34624:	01 d0                	add    %edx,%eax
   34626:	83 e0 1f             	and    $0x1f,%eax
   34629:	89 c2                	mov    %eax,%edx
   3462b:	0f 84 57 03 00 00    	je     34988 <_dtoa_r+0xaa8>
   34631:	b8 20 00 00 00       	mov    $0x20,%eax
   34636:	29 d0                	sub    %edx,%eax
   34638:	83 f8 04             	cmp    $0x4,%eax
   3463b:	0f 8e 8c 0a 00 00    	jle    350cd <_dtoa_r+0x11ed>
   34641:	b8 1c 00 00 00       	mov    $0x1c,%eax
   34646:	29 d0                	sub    %edx,%eax
   34648:	01 45 a0             	add    %eax,-0x60(%ebp)
   3464b:	01 c3                	add    %eax,%ebx
   3464d:	01 45 ac             	add    %eax,-0x54(%ebp)
   34650:	8b 45 a0             	mov    -0x60(%ebp),%eax
   34653:	85 c0                	test   %eax,%eax
   34655:	7e 16                	jle    3466d <_dtoa_r+0x78d>
   34657:	89 44 24 08          	mov    %eax,0x8(%esp)
   3465b:	8b 45 a4             	mov    -0x5c(%ebp),%eax
   3465e:	89 34 24             	mov    %esi,(%esp)
   34661:	89 44 24 04          	mov    %eax,0x4(%esp)
   34665:	e8 46 1a 00 00       	call   360b0 <__lshift>
   3466a:	89 45 a4             	mov    %eax,-0x5c(%ebp)
   3466d:	8b 45 ac             	mov    -0x54(%ebp),%eax
   34670:	85 c0                	test   %eax,%eax
   34672:	7e 16                	jle    3468a <_dtoa_r+0x7aa>
   34674:	89 44 24 08          	mov    %eax,0x8(%esp)
   34678:	8b 45 b0             	mov    -0x50(%ebp),%eax
   3467b:	89 34 24             	mov    %esi,(%esp)
   3467e:	89 44 24 04          	mov    %eax,0x4(%esp)
   34682:	e8 29 1a 00 00       	call   360b0 <__lshift>
   34687:	89 45 b0             	mov    %eax,-0x50(%ebp)
   3468a:	8b 45 9c             	mov    -0x64(%ebp),%eax
   3468d:	85 c0                	test   %eax,%eax
   3468f:	0f 85 d3 04 00 00    	jne    34b68 <_dtoa_r+0xc88>
   34695:	83 7d 14 02          	cmpl   $0x2,0x14(%ebp)
   34699:	0f 8e 11 02 00 00    	jle    348b0 <_dtoa_r+0x9d0>
   3469f:	8b 45 a8             	mov    -0x58(%ebp),%eax
   346a2:	85 c0                	test   %eax,%eax
   346a4:	0f 8f 06 02 00 00    	jg     348b0 <_dtoa_r+0x9d0>
   346aa:	8b 45 a8             	mov    -0x58(%ebp),%eax
   346ad:	85 c0                	test   %eax,%eax
   346af:	0f 85 e0 01 00 00    	jne    34895 <_dtoa_r+0x9b5>
   346b5:	8b 45 b0             	mov    -0x50(%ebp),%eax
   346b8:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
   346bf:	00 
   346c0:	c7 44 24 08 05 00 00 	movl   $0x5,0x8(%esp)
   346c7:	00 
   346c8:	89 34 24             	mov    %esi,(%esp)
   346cb:	89 44 24 04          	mov    %eax,0x4(%esp)
   346cf:	e8 fc 13 00 00       	call   35ad0 <__multadd>
   346d4:	89 45 b0             	mov    %eax,-0x50(%ebp)
   346d7:	89 44 24 04          	mov    %eax,0x4(%esp)
   346db:	8b 45 a4             	mov    -0x5c(%ebp),%eax
   346de:	89 04 24             	mov    %eax,(%esp)
   346e1:	e8 ea 1a 00 00       	call   361d0 <__mcmp>
   346e6:	85 c0                	test   %eax,%eax
   346e8:	0f 8e a7 01 00 00    	jle    34895 <_dtoa_r+0x9b5>
   346ee:	83 45 b8 01          	addl   $0x1,-0x48(%ebp)
   346f2:	89 fb                	mov    %edi,%ebx
   346f4:	83 c7 01             	add    $0x1,%edi
   346f7:	c6 47 ff 31          	movb   $0x31,-0x1(%edi)
   346fb:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
   34702:	8b 45 b0             	mov    -0x50(%ebp),%eax
   34705:	89 34 24             	mov    %esi,(%esp)
   34708:	89 44 24 04          	mov    %eax,0x4(%esp)
   3470c:	e8 9f 13 00 00       	call   35ab0 <_Bfree>
   34711:	8b 45 b4             	mov    -0x4c(%ebp),%eax
   34714:	85 c0                	test   %eax,%eax
   34716:	74 18                	je     34730 <_dtoa_r+0x850>
   34718:	39 45 c0             	cmp    %eax,-0x40(%ebp)
   3471b:	0f 85 a7 02 00 00    	jne    349c8 <_dtoa_r+0xae8>
   34721:	8b 45 b4             	mov    -0x4c(%ebp),%eax
   34724:	89 34 24             	mov    %esi,(%esp)
   34727:	89 44 24 04          	mov    %eax,0x4(%esp)
   3472b:	e8 80 13 00 00       	call   35ab0 <_Bfree>
   34730:	8b 45 a4             	mov    -0x5c(%ebp),%eax
   34733:	89 34 24             	mov    %esi,(%esp)
   34736:	89 44 24 04          	mov    %eax,0x4(%esp)
   3473a:	e8 71 13 00 00       	call   35ab0 <_Bfree>
   3473f:	8b 45 b8             	mov    -0x48(%ebp),%eax
   34742:	8b 75 1c             	mov    0x1c(%ebp),%esi
   34745:	c6 07 00             	movb   $0x0,(%edi)
   34748:	83 c0 01             	add    $0x1,%eax
   3474b:	89 06                	mov    %eax,(%esi)
   3474d:	8b 45 24             	mov    0x24(%ebp),%eax
   34750:	85 c0                	test   %eax,%eax
   34752:	0f 84 90 02 00 00    	je     349e8 <_dtoa_r+0xb08>
   34758:	8b 45 24             	mov    0x24(%ebp),%eax
   3475b:	89 38                	mov    %edi,(%eax)
   3475d:	81 c4 8c 00 00 00    	add    $0x8c,%esp
   34763:	89 d8                	mov    %ebx,%eax
   34765:	5b                   	pop    %ebx
   34766:	5e                   	pop    %esi
   34767:	5f                   	pop    %edi
   34768:	5d                   	pop    %ebp
   34769:	c3                   	ret    
   3476a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   34770:	db 45 b8             	fildl  -0x48(%ebp)
   34773:	df e9                	fucomip %st(1),%st
   34775:	dd d8                	fstp   %st(0)
   34777:	7a 06                	jp     3477f <_dtoa_r+0x89f>
   34779:	0f 84 cc f8 ff ff    	je     3404b <_dtoa_r+0x16b>
   3477f:	83 6d b8 01          	subl   $0x1,-0x48(%ebp)
   34783:	e9 c3 f8 ff ff       	jmp    3404b <_dtoa_r+0x16b>
   34788:	8b 45 b8             	mov    -0x48(%ebp),%eax
   3478b:	29 45 a0             	sub    %eax,-0x60(%ebp)
   3478e:	c7 45 94 00 00 00 00 	movl   $0x0,-0x6c(%ebp)
   34795:	f7 d8                	neg    %eax
   34797:	89 45 b0             	mov    %eax,-0x50(%ebp)
   3479a:	e9 0c f9 ff ff       	jmp    340ab <_dtoa_r+0x1cb>
   3479f:	90                   	nop
   347a0:	f7 d8                	neg    %eax
   347a2:	89 45 a0             	mov    %eax,-0x60(%ebp)
   347a5:	c7 45 ac 00 00 00 00 	movl   $0x0,-0x54(%ebp)
   347ac:	e9 e2 f8 ff ff       	jmp    34093 <_dtoa_r+0x1b3>
   347b1:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   347b8:	8b 45 c0             	mov    -0x40(%ebp),%eax
   347bb:	b9 ee fb ff ff       	mov    $0xfffffbee,%ecx
   347c0:	29 d9                	sub    %ebx,%ecx
   347c2:	d3 e0                	shl    %cl,%eax
   347c4:	e9 1b f8 ff ff       	jmp    33fe4 <_dtoa_r+0x104>
   347c9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   347d0:	c7 45 9c 00 00 00 00 	movl   $0x0,-0x64(%ebp)
   347d7:	e9 a0 f8 ff ff       	jmp    3407c <_dtoa_r+0x19c>
   347dc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   347e0:	83 7d 14 01          	cmpl   $0x1,0x14(%ebp)
   347e4:	0f 8e fe 06 00 00    	jle    34ee8 <_dtoa_r+0x1008>
   347ea:	8b 45 a8             	mov    -0x58(%ebp),%eax
   347ed:	83 e8 01             	sub    $0x1,%eax
   347f0:	39 45 b0             	cmp    %eax,-0x50(%ebp)
   347f3:	0f 8c 3b 06 00 00    	jl     34e34 <_dtoa_r+0xf54>
   347f9:	8b 55 b0             	mov    -0x50(%ebp),%edx
   347fc:	29 c2                	sub    %eax,%edx
   347fe:	8b 4d a8             	mov    -0x58(%ebp),%ecx
   34801:	8b 5d a0             	mov    -0x60(%ebp),%ebx
   34804:	85 c9                	test   %ecx,%ecx
   34806:	89 c8                	mov    %ecx,%eax
   34808:	0f 88 83 07 00 00    	js     34f91 <_dtoa_r+0x10b1>
   3480e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
   34815:	00 
   34816:	89 34 24             	mov    %esi,(%esp)
   34819:	89 55 8c             	mov    %edx,-0x74(%ebp)
   3481c:	01 45 a0             	add    %eax,-0x60(%ebp)
   3481f:	01 45 ac             	add    %eax,-0x54(%ebp)
   34822:	e8 69 15 00 00       	call   35d90 <__i2b>
   34827:	8b 55 8c             	mov    -0x74(%ebp),%edx
   3482a:	89 45 b4             	mov    %eax,-0x4c(%ebp)
   3482d:	e9 1e fd ff ff       	jmp    34550 <_dtoa_r+0x670>
   34832:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   34838:	d9 c1                	fld    %st(1)
   3483a:	b9 02 00 00 00       	mov    $0x2,%ecx
   3483f:	e9 37 fa ff ff       	jmp    3427b <_dtoa_r+0x39b>
   34844:	89 4d d4             	mov    %ecx,-0x2c(%ebp)
   34847:	db 45 d4             	fildl  -0x2c(%ebp)
   3484a:	d8 c9                	fmul   %st(1),%st
   3484c:	d8 05 90 8f 03 00    	fadds  0x38f90
   34852:	dd 5d c0             	fstpl  -0x40(%ebp)
   34855:	81 6d c4 00 00 40 03 	subl   $0x3400000,-0x3c(%ebp)
   3485c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   34860:	d8 25 94 8f 03 00    	fsubs  0x38f94
   34866:	dd 45 c0             	fldl   -0x40(%ebp)
   34869:	d9 c9                	fxch   %st(1)
   3486b:	db e9                	fucomi %st(1),%st
   3486d:	0f 87 0d 02 00 00    	ja     34a80 <_dtoa_r+0xba0>
   34873:	d9 c9                	fxch   %st(1)
   34875:	d9 e0                	fchs   
   34877:	df e9                	fucomip %st(1),%st
   34879:	dd d8                	fstp   %st(0)
   3487b:	0f 86 a7 01 00 00    	jbe    34a28 <_dtoa_r+0xb48>
   34881:	dd d8                	fstp   %st(0)
   34883:	eb 02                	jmp    34887 <_dtoa_r+0x9a7>
   34885:	dd d8                	fstp   %st(0)
   34887:	c7 45 b0 00 00 00 00 	movl   $0x0,-0x50(%ebp)
   3488e:	c7 45 b4 00 00 00 00 	movl   $0x0,-0x4c(%ebp)
   34895:	8b 45 18             	mov    0x18(%ebp),%eax
   34898:	89 fb                	mov    %edi,%ebx
   3489a:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
   348a1:	f7 d0                	not    %eax
   348a3:	89 45 b8             	mov    %eax,-0x48(%ebp)
   348a6:	e9 57 fe ff ff       	jmp    34702 <_dtoa_r+0x822>
   348ab:	90                   	nop
   348ac:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   348b0:	8b 45 98             	mov    -0x68(%ebp),%eax
   348b3:	85 c0                	test   %eax,%eax
   348b5:	0f 85 c5 03 00 00    	jne    34c80 <_dtoa_r+0xda0>
   348bb:	89 75 08             	mov    %esi,0x8(%ebp)
   348be:	bb 01 00 00 00       	mov    $0x1,%ebx
   348c3:	8b 75 a4             	mov    -0x5c(%ebp),%esi
   348c6:	eb 24                	jmp    348ec <_dtoa_r+0xa0c>
   348c8:	8b 45 08             	mov    0x8(%ebp),%eax
   348cb:	83 c3 01             	add    $0x1,%ebx
   348ce:	89 74 24 04          	mov    %esi,0x4(%esp)
   348d2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
   348d9:	00 
   348da:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
   348e1:	00 
   348e2:	89 04 24             	mov    %eax,(%esp)
   348e5:	e8 e6 11 00 00       	call   35ad0 <__multadd>
   348ea:	89 c6                	mov    %eax,%esi
   348ec:	8b 55 b0             	mov    -0x50(%ebp),%edx
   348ef:	89 f0                	mov    %esi,%eax
   348f1:	e8 1a f4 ff ff       	call   33d10 <quorem>
   348f6:	83 c0 30             	add    $0x30,%eax
   348f9:	3b 5d a8             	cmp    -0x58(%ebp),%ebx
   348fc:	88 44 1f ff          	mov    %al,-0x1(%edi,%ebx,1)
   34900:	7c c6                	jl     348c8 <_dtoa_r+0x9e8>
   34902:	89 45 a0             	mov    %eax,-0x60(%ebp)
   34905:	8b 45 a8             	mov    -0x58(%ebp),%eax
   34908:	ba 01 00 00 00       	mov    $0x1,%edx
   3490d:	89 75 a4             	mov    %esi,-0x5c(%ebp)
   34910:	8b 75 08             	mov    0x8(%ebp),%esi
   34913:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
   3491a:	85 c0                	test   %eax,%eax
   3491c:	0f 4f d0             	cmovg  %eax,%edx
   3491f:	01 fa                	add    %edi,%edx
   34921:	8b 45 a4             	mov    -0x5c(%ebp),%eax
   34924:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
   3492b:	00 
   3492c:	89 34 24             	mov    %esi,(%esp)
   3492f:	89 55 ac             	mov    %edx,-0x54(%ebp)
   34932:	89 44 24 04          	mov    %eax,0x4(%esp)
   34936:	e8 75 17 00 00       	call   360b0 <__lshift>
   3493b:	8b 5d b0             	mov    -0x50(%ebp),%ebx
   3493e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
   34942:	89 04 24             	mov    %eax,(%esp)
   34945:	89 45 a4             	mov    %eax,-0x5c(%ebp)
   34948:	e8 83 18 00 00       	call   361d0 <__mcmp>
   3494d:	8b 55 ac             	mov    -0x54(%ebp),%edx
   34950:	83 f8 00             	cmp    $0x0,%eax
   34953:	0f 8e 41 06 00 00    	jle    34f9a <_dtoa_r+0x10ba>
   34959:	0f b6 4a ff          	movzbl -0x1(%edx),%ecx
   3495d:	eb 0f                	jmp    3496e <_dtoa_r+0xa8e>
   3495f:	90                   	nop
   34960:	39 c7                	cmp    %eax,%edi
   34962:	0f 84 70 05 00 00    	je     34ed8 <_dtoa_r+0xff8>
   34968:	0f b6 48 ff          	movzbl -0x1(%eax),%ecx
   3496c:	89 c2                	mov    %eax,%edx
   3496e:	80 f9 39             	cmp    $0x39,%cl
   34971:	8d 42 ff             	lea    -0x1(%edx),%eax
   34974:	74 ea                	je     34960 <_dtoa_r+0xa80>
   34976:	83 c1 01             	add    $0x1,%ecx
   34979:	89 fb                	mov    %edi,%ebx
   3497b:	88 08                	mov    %cl,(%eax)
   3497d:	89 d7                	mov    %edx,%edi
   3497f:	e9 7e fd ff ff       	jmp    34702 <_dtoa_r+0x822>
   34984:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   34988:	b8 1c 00 00 00       	mov    $0x1c,%eax
   3498d:	01 45 a0             	add    %eax,-0x60(%ebp)
   34990:	01 c3                	add    %eax,%ebx
   34992:	01 45 ac             	add    %eax,-0x54(%ebp)
   34995:	e9 b6 fc ff ff       	jmp    34650 <_dtoa_r+0x770>
   3499a:	ba 01 00 00 00       	mov    $0x1,%edx
   3499f:	c7 45 90 01 00 00 00 	movl   $0x1,-0x70(%ebp)
   349a6:	c7 45 a8 01 00 00 00 	movl   $0x1,-0x58(%ebp)
   349ad:	c7 45 18 01 00 00 00 	movl   $0x1,0x18(%ebp)
   349b4:	21 c2                	and    %eax,%edx
   349b6:	88 55 b4             	mov    %dl,-0x4c(%ebp)
   349b9:	31 d2                	xor    %edx,%edx
   349bb:	c7 46 44 00 00 00 00 	movl   $0x0,0x44(%esi)
   349c2:	e9 62 f8 ff ff       	jmp    34229 <_dtoa_r+0x349>
   349c7:	90                   	nop
   349c8:	8b 55 c0             	mov    -0x40(%ebp),%edx
   349cb:	85 d2                	test   %edx,%edx
   349cd:	0f 84 4e fd ff ff    	je     34721 <_dtoa_r+0x841>
   349d3:	8b 45 c0             	mov    -0x40(%ebp),%eax
   349d6:	89 34 24             	mov    %esi,(%esp)
   349d9:	89 44 24 04          	mov    %eax,0x4(%esp)
   349dd:	e8 ce 10 00 00       	call   35ab0 <_Bfree>
   349e2:	e9 3a fd ff ff       	jmp    34721 <_dtoa_r+0x841>
   349e7:	90                   	nop
   349e8:	89 d8                	mov    %ebx,%eax
   349ea:	e9 89 f5 ff ff       	jmp    33f78 <_dtoa_r+0x98>
   349ef:	8b 45 b0             	mov    -0x50(%ebp),%eax
   349f2:	89 44 24 08          	mov    %eax,0x8(%esp)
   349f6:	8b 45 a4             	mov    -0x5c(%ebp),%eax
   349f9:	89 34 24             	mov    %esi,(%esp)
   349fc:	89 44 24 04          	mov    %eax,0x4(%esp)
   34a00:	e8 8b 15 00 00       	call   35f90 <__pow5mult>
   34a05:	89 45 a4             	mov    %eax,-0x5c(%ebp)
   34a08:	e9 c6 fb ff ff       	jmp    345d3 <_dtoa_r+0x6f3>
   34a0d:	dd d8                	fstp   %st(0)
   34a0f:	dd d8                	fstp   %st(0)
   34a11:	eb 15                	jmp    34a28 <_dtoa_r+0xb48>
   34a13:	90                   	nop
   34a14:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   34a18:	dd d8                	fstp   %st(0)
   34a1a:	dd d8                	fstp   %st(0)
   34a1c:	dd d8                	fstp   %st(0)
   34a1e:	eb 08                	jmp    34a28 <_dtoa_r+0xb48>
   34a20:	dd d8                	fstp   %st(0)
   34a22:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   34a28:	dd 5d c0             	fstpl  -0x40(%ebp)
   34a2b:	e9 cf f9 ff ff       	jmp    343ff <_dtoa_r+0x51f>
   34a30:	8b 45 b8             	mov    -0x48(%ebp),%eax
   34a33:	f7 d8                	neg    %eax
   34a35:	0f 84 6a 04 00 00    	je     34ea5 <_dtoa_r+0xfc5>
   34a3b:	89 c2                	mov    %eax,%edx
   34a3d:	b9 02 00 00 00       	mov    $0x2,%ecx
   34a42:	83 e2 0f             	and    $0xf,%edx
   34a45:	c1 f8 04             	sar    $0x4,%eax
   34a48:	dd 04 d5 60 90 03 00 	fldl   0x39060(,%edx,8)
   34a4f:	85 c0                	test   %eax,%eax
   34a51:	d8 c9                	fmul   %st(1),%st
   34a53:	0f 84 4a f8 ff ff    	je     342a3 <_dtoa_r+0x3c3>
   34a59:	31 d2                	xor    %edx,%edx
   34a5b:	90                   	nop
   34a5c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   34a60:	a8 01                	test   $0x1,%al
   34a62:	74 0a                	je     34a6e <_dtoa_r+0xb8e>
   34a64:	dc 0c d5 20 90 03 00 	fmull  0x39020(,%edx,8)
   34a6b:	83 c1 01             	add    $0x1,%ecx
   34a6e:	83 c2 01             	add    $0x1,%edx
   34a71:	d1 f8                	sar    %eax
   34a73:	75 eb                	jne    34a60 <_dtoa_r+0xb80>
   34a75:	e9 29 f8 ff ff       	jmp    342a3 <_dtoa_r+0x3c3>
   34a7a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   34a80:	dd d8                	fstp   %st(0)
   34a82:	dd d8                	fstp   %st(0)
   34a84:	dd d8                	fstp   %st(0)
   34a86:	c7 45 b0 00 00 00 00 	movl   $0x0,-0x50(%ebp)
   34a8d:	c7 45 b4 00 00 00 00 	movl   $0x0,-0x4c(%ebp)
   34a94:	e9 55 fc ff ff       	jmp    346ee <_dtoa_r+0x80e>
   34a99:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   34aa0:	d9 7d d2             	fnstcw -0x2e(%ebp)
   34aa3:	8d 41 ff             	lea    -0x1(%ecx),%eax
   34aa6:	dd 45 c0             	fldl   -0x40(%ebp)
   34aa9:	dc 0c c5 60 90 03 00 	fmull  0x39060(,%eax,8)
   34ab0:	d9 c9                	fxch   %st(1)
   34ab2:	89 45 88             	mov    %eax,-0x78(%ebp)
   34ab5:	0f b7 45 d2          	movzwl -0x2e(%ebp),%eax
   34ab9:	8d 57 01             	lea    0x1(%edi),%edx
   34abc:	8d 1c 0f             	lea    (%edi,%ecx,1),%ebx
   34abf:	b4 0c                	mov    $0xc,%ah
   34ac1:	66 89 45 d0          	mov    %ax,-0x30(%ebp)
   34ac5:	d9 6d d0             	fldcw  -0x30(%ebp)
   34ac8:	db 55 d4             	fistl  -0x2c(%ebp)
   34acb:	d9 6d d2             	fldcw  -0x2e(%ebp)
   34ace:	8b 45 d4             	mov    -0x2c(%ebp),%eax
   34ad1:	89 45 d4             	mov    %eax,-0x2c(%ebp)
   34ad4:	83 c0 30             	add    $0x30,%eax
   34ad7:	83 f9 01             	cmp    $0x1,%ecx
   34ada:	db 45 d4             	fildl  -0x2c(%ebp)
   34add:	de e9                	fsubrp %st,%st(1)
   34adf:	88 07                	mov    %al,(%edi)
   34ae1:	89 d0                	mov    %edx,%eax
   34ae3:	74 37                	je     34b1c <_dtoa_r+0xc3c>
   34ae5:	d9 05 8c 8f 03 00    	flds   0x38f8c
   34aeb:	eb 05                	jmp    34af2 <_dtoa_r+0xc12>
   34aed:	8d 76 00             	lea    0x0(%esi),%esi
   34af0:	d9 c9                	fxch   %st(1)
   34af2:	dc c9                	fmul   %st,%st(1)
   34af4:	d9 c9                	fxch   %st(1)
   34af6:	83 c0 01             	add    $0x1,%eax
   34af9:	d9 6d d0             	fldcw  -0x30(%ebp)
   34afc:	db 55 d4             	fistl  -0x2c(%ebp)
   34aff:	d9 6d d2             	fldcw  -0x2e(%ebp)
   34b02:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
   34b05:	89 4d d4             	mov    %ecx,-0x2c(%ebp)
   34b08:	83 c1 30             	add    $0x30,%ecx
   34b0b:	39 d8                	cmp    %ebx,%eax
   34b0d:	db 45 d4             	fildl  -0x2c(%ebp)
   34b10:	de e9                	fsubrp %st,%st(1)
   34b12:	88 48 ff             	mov    %cl,-0x1(%eax)
   34b15:	75 d9                	jne    34af0 <_dtoa_r+0xc10>
   34b17:	dd d9                	fstp   %st(1)
   34b19:	03 55 88             	add    -0x78(%ebp),%edx
   34b1c:	d9 05 98 8f 03 00    	flds   0x38f98
   34b22:	d9 c2                	fld    %st(2)
   34b24:	d8 c1                	fadd   %st(1),%st
   34b26:	d9 ca                	fxch   %st(2)
   34b28:	db ea                	fucomi %st(2),%st
   34b2a:	dd da                	fstp   %st(2)
   34b2c:	0f 86 7f 03 00 00    	jbe    34eb1 <_dtoa_r+0xfd1>
   34b32:	dd d8                	fstp   %st(0)
   34b34:	dd d8                	fstp   %st(0)
   34b36:	dd d8                	fstp   %st(0)
   34b38:	dd d8                	fstp   %st(0)
   34b3a:	89 fb                	mov    %edi,%ebx
   34b3c:	0f b6 42 ff          	movzbl -0x1(%edx),%eax
   34b40:	89 d7                	mov    %edx,%edi
   34b42:	e9 d7 f9 ff ff       	jmp    3451e <_dtoa_r+0x63e>
   34b47:	90                   	nop
   34b48:	8b 4d b0             	mov    -0x50(%ebp),%ecx
   34b4b:	8b 41 10             	mov    0x10(%ecx),%eax
   34b4e:	8b 44 81 10          	mov    0x10(%ecx,%eax,4),%eax
   34b52:	89 04 24             	mov    %eax,(%esp)
   34b55:	e8 56 11 00 00       	call   35cb0 <__hi0bits>
   34b5a:	ba 20 00 00 00       	mov    $0x20,%edx
   34b5f:	29 c2                	sub    %eax,%edx
   34b61:	e9 bb fa ff ff       	jmp    34621 <_dtoa_r+0x741>
   34b66:	66 90                	xchg   %ax,%ax
   34b68:	8b 45 b0             	mov    -0x50(%ebp),%eax
   34b6b:	89 44 24 04          	mov    %eax,0x4(%esp)
   34b6f:	8b 45 a4             	mov    -0x5c(%ebp),%eax
   34b72:	89 04 24             	mov    %eax,(%esp)
   34b75:	e8 56 16 00 00       	call   361d0 <__mcmp>
   34b7a:	85 c0                	test   %eax,%eax
   34b7c:	0f 89 13 fb ff ff    	jns    34695 <_dtoa_r+0x7b5>
   34b82:	8b 45 a4             	mov    -0x5c(%ebp),%eax
   34b85:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
   34b8c:	00 
   34b8d:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
   34b94:	00 
   34b95:	89 34 24             	mov    %esi,(%esp)
   34b98:	89 44 24 04          	mov    %eax,0x4(%esp)
   34b9c:	83 6d b8 01          	subl   $0x1,-0x48(%ebp)
   34ba0:	e8 2b 0f 00 00       	call   35ad0 <__multadd>
   34ba5:	8b 4d 98             	mov    -0x68(%ebp),%ecx
   34ba8:	85 c9                	test   %ecx,%ecx
   34baa:	89 45 a4             	mov    %eax,-0x5c(%ebp)
   34bad:	0f 85 8d 00 00 00    	jne    34c40 <_dtoa_r+0xd60>
   34bb3:	83 7d 90 00          	cmpl   $0x0,-0x70(%ebp)
   34bb7:	8b 45 90             	mov    -0x70(%ebp),%eax
   34bba:	7f 0a                	jg     34bc6 <_dtoa_r+0xce6>
   34bbc:	83 7d 14 02          	cmpl   $0x2,0x14(%ebp)
   34bc0:	0f 8f ff 04 00 00    	jg     350c5 <_dtoa_r+0x11e5>
   34bc6:	89 45 a8             	mov    %eax,-0x58(%ebp)
   34bc9:	e9 ed fc ff ff       	jmp    348bb <_dtoa_r+0x9db>
   34bce:	66 90                	xchg   %ax,%ax
   34bd0:	8b 5d a8             	mov    -0x58(%ebp),%ebx
   34bd3:	85 db                	test   %ebx,%ebx
   34bd5:	0f 85 aa fc ff ff    	jne    34885 <_dtoa_r+0x9a5>
   34bdb:	d8 0d 94 8f 03 00    	fmuls  0x38f94
   34be1:	c7 45 b0 00 00 00 00 	movl   $0x0,-0x50(%ebp)
   34be8:	c7 45 b4 00 00 00 00 	movl   $0x0,-0x4c(%ebp)
   34bef:	dd 45 c0             	fldl   -0x40(%ebp)
   34bf2:	d9 c9                	fxch   %st(1)
   34bf4:	df e9                	fucomip %st(1),%st
   34bf6:	dd d8                	fstp   %st(0)
   34bf8:	0f 83 97 fc ff ff    	jae    34895 <_dtoa_r+0x9b5>
   34bfe:	e9 eb fa ff ff       	jmp    346ee <_dtoa_r+0x80e>
   34c03:	90                   	nop
   34c04:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   34c08:	8b 45 c0             	mov    -0x40(%ebp),%eax
   34c0b:	85 c0                	test   %eax,%eax
   34c0d:	0f 85 fe f9 ff ff    	jne    34611 <_dtoa_r+0x731>
   34c13:	8b 45 c4             	mov    -0x3c(%ebp),%eax
   34c16:	a9 ff ff 0f 00       	test   $0xfffff,%eax
   34c1b:	0f 85 f0 f9 ff ff    	jne    34611 <_dtoa_r+0x731>
   34c21:	a9 00 00 f0 7f       	test   $0x7ff00000,%eax
   34c26:	0f 84 e5 f9 ff ff    	je     34611 <_dtoa_r+0x731>
   34c2c:	83 45 a0 01          	addl   $0x1,-0x60(%ebp)
   34c30:	83 45 ac 01          	addl   $0x1,-0x54(%ebp)
   34c34:	c7 45 8c 01 00 00 00 	movl   $0x1,-0x74(%ebp)
   34c3b:	e9 d1 f9 ff ff       	jmp    34611 <_dtoa_r+0x731>
   34c40:	8b 45 b4             	mov    -0x4c(%ebp),%eax
   34c43:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
   34c4a:	00 
   34c4b:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
   34c52:	00 
   34c53:	89 34 24             	mov    %esi,(%esp)
   34c56:	89 44 24 04          	mov    %eax,0x4(%esp)
   34c5a:	e8 71 0e 00 00       	call   35ad0 <__multadd>
   34c5f:	8b 55 90             	mov    -0x70(%ebp),%edx
   34c62:	85 d2                	test   %edx,%edx
   34c64:	89 45 b4             	mov    %eax,-0x4c(%ebp)
   34c67:	8b 45 90             	mov    -0x70(%ebp),%eax
   34c6a:	7f 0a                	jg     34c76 <_dtoa_r+0xd96>
   34c6c:	83 7d 14 02          	cmpl   $0x2,0x14(%ebp)
   34c70:	0f 8f 4f 04 00 00    	jg     350c5 <_dtoa_r+0x11e5>
   34c76:	89 45 a8             	mov    %eax,-0x58(%ebp)
   34c79:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   34c80:	85 db                	test   %ebx,%ebx
   34c82:	7e 16                	jle    34c9a <_dtoa_r+0xdba>
   34c84:	8b 45 b4             	mov    -0x4c(%ebp),%eax
   34c87:	89 5c 24 08          	mov    %ebx,0x8(%esp)
   34c8b:	89 34 24             	mov    %esi,(%esp)
   34c8e:	89 44 24 04          	mov    %eax,0x4(%esp)
   34c92:	e8 19 14 00 00       	call   360b0 <__lshift>
   34c97:	89 45 b4             	mov    %eax,-0x4c(%ebp)
   34c9a:	8b 5d 8c             	mov    -0x74(%ebp),%ebx
   34c9d:	8b 45 b4             	mov    -0x4c(%ebp),%eax
   34ca0:	85 db                	test   %ebx,%ebx
   34ca2:	89 45 ac             	mov    %eax,-0x54(%ebp)
   34ca5:	0f 85 11 03 00 00    	jne    34fbc <_dtoa_r+0x10dc>
   34cab:	8b 45 a8             	mov    -0x58(%ebp),%eax
   34cae:	8d 5f 01             	lea    0x1(%edi),%ebx
   34cb1:	89 7d 8c             	mov    %edi,-0x74(%ebp)
   34cb4:	01 f8                	add    %edi,%eax
   34cb6:	8b 7d a4             	mov    -0x5c(%ebp),%edi
   34cb9:	89 45 90             	mov    %eax,-0x70(%ebp)
   34cbc:	8b 45 c0             	mov    -0x40(%ebp),%eax
   34cbf:	83 e0 01             	and    $0x1,%eax
   34cc2:	89 45 9c             	mov    %eax,-0x64(%ebp)
   34cc5:	eb 2e                	jmp    34cf5 <_dtoa_r+0xe15>
   34cc7:	90                   	nop
   34cc8:	e8 03 0e 00 00       	call   35ad0 <__multadd>
   34ccd:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
   34cd4:	00 
   34cd5:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
   34cdc:	00 
   34cdd:	89 34 24             	mov    %esi,(%esp)
   34ce0:	89 45 b4             	mov    %eax,-0x4c(%ebp)
   34ce3:	8b 45 ac             	mov    -0x54(%ebp),%eax
   34ce6:	89 44 24 04          	mov    %eax,0x4(%esp)
   34cea:	e8 e1 0d 00 00       	call   35ad0 <__multadd>
   34cef:	89 45 ac             	mov    %eax,-0x54(%ebp)
   34cf2:	83 c3 01             	add    $0x1,%ebx
   34cf5:	8b 55 b0             	mov    -0x50(%ebp),%edx
   34cf8:	8d 43 ff             	lea    -0x1(%ebx),%eax
   34cfb:	89 45 98             	mov    %eax,-0x68(%ebp)
   34cfe:	89 f8                	mov    %edi,%eax
   34d00:	e8 0b f0 ff ff       	call   33d10 <quorem>
   34d05:	89 3c 24             	mov    %edi,(%esp)
   34d08:	8d 48 30             	lea    0x30(%eax),%ecx
   34d0b:	89 4d a0             	mov    %ecx,-0x60(%ebp)
   34d0e:	8b 4d b4             	mov    -0x4c(%ebp),%ecx
   34d11:	89 45 94             	mov    %eax,-0x6c(%ebp)
   34d14:	89 4c 24 04          	mov    %ecx,0x4(%esp)
   34d18:	e8 b3 14 00 00       	call   361d0 <__mcmp>
   34d1d:	8b 4d ac             	mov    -0x54(%ebp),%ecx
   34d20:	89 34 24             	mov    %esi,(%esp)
   34d23:	89 4c 24 08          	mov    %ecx,0x8(%esp)
   34d27:	89 45 c0             	mov    %eax,-0x40(%ebp)
   34d2a:	8b 45 b0             	mov    -0x50(%ebp),%eax
   34d2d:	89 44 24 04          	mov    %eax,0x4(%esp)
   34d31:	e8 ea 14 00 00       	call   36220 <__mdiff>
   34d36:	8b 48 0c             	mov    0xc(%eax),%ecx
   34d39:	89 c2                	mov    %eax,%edx
   34d3b:	85 c9                	test   %ecx,%ecx
   34d3d:	0f 85 c5 00 00 00    	jne    34e08 <_dtoa_r+0xf28>
   34d43:	89 44 24 04          	mov    %eax,0x4(%esp)
   34d47:	89 3c 24             	mov    %edi,(%esp)
   34d4a:	89 45 a8             	mov    %eax,-0x58(%ebp)
   34d4d:	e8 7e 14 00 00       	call   361d0 <__mcmp>
   34d52:	8b 55 a8             	mov    -0x58(%ebp),%edx
   34d55:	89 54 24 04          	mov    %edx,0x4(%esp)
   34d59:	89 34 24             	mov    %esi,(%esp)
   34d5c:	89 45 a8             	mov    %eax,-0x58(%ebp)
   34d5f:	e8 4c 0d 00 00       	call   35ab0 <_Bfree>
   34d64:	8b 45 a8             	mov    -0x58(%ebp),%eax
   34d67:	89 c1                	mov    %eax,%ecx
   34d69:	0b 4d 14             	or     0x14(%ebp),%ecx
   34d6c:	75 0b                	jne    34d79 <_dtoa_r+0xe99>
   34d6e:	8b 55 9c             	mov    -0x64(%ebp),%edx
   34d71:	85 d2                	test   %edx,%edx
   34d73:	0f 84 fb 02 00 00    	je     35074 <_dtoa_r+0x1194>
   34d79:	8b 55 c0             	mov    -0x40(%ebp),%edx
   34d7c:	85 d2                	test   %edx,%edx
   34d7e:	0f 88 7f 01 00 00    	js     34f03 <_dtoa_r+0x1023>
   34d84:	8b 4d c0             	mov    -0x40(%ebp),%ecx
   34d87:	0b 4d 14             	or     0x14(%ebp),%ecx
   34d8a:	75 0b                	jne    34d97 <_dtoa_r+0xeb7>
   34d8c:	8b 4d 9c             	mov    -0x64(%ebp),%ecx
   34d8f:	85 c9                	test   %ecx,%ecx
   34d91:	0f 84 6c 01 00 00    	je     34f03 <_dtoa_r+0x1023>
   34d97:	85 c0                	test   %eax,%eax
   34d99:	0f 8f 82 02 00 00    	jg     35021 <_dtoa_r+0x1141>
   34d9f:	0f b6 45 a0          	movzbl -0x60(%ebp),%eax
   34da3:	89 da                	mov    %ebx,%edx
   34da5:	3b 5d 90             	cmp    -0x70(%ebp),%ebx
   34da8:	88 43 ff             	mov    %al,-0x1(%ebx)
   34dab:	0f 84 8d 02 00 00    	je     3503e <_dtoa_r+0x115e>
   34db1:	89 7c 24 04          	mov    %edi,0x4(%esp)
   34db5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
   34dbc:	00 
   34dbd:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
   34dc4:	00 
   34dc5:	89 34 24             	mov    %esi,(%esp)
   34dc8:	e8 03 0d 00 00       	call   35ad0 <__multadd>
   34dcd:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
   34dd4:	00 
   34dd5:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
   34ddc:	00 
   34ddd:	89 34 24             	mov    %esi,(%esp)
   34de0:	89 c7                	mov    %eax,%edi
   34de2:	8b 45 ac             	mov    -0x54(%ebp),%eax
   34de5:	39 45 b4             	cmp    %eax,-0x4c(%ebp)
   34de8:	8b 45 b4             	mov    -0x4c(%ebp),%eax
   34deb:	89 44 24 04          	mov    %eax,0x4(%esp)
   34def:	0f 85 d3 fe ff ff    	jne    34cc8 <_dtoa_r+0xde8>
   34df5:	e8 d6 0c 00 00       	call   35ad0 <__multadd>
   34dfa:	89 45 b4             	mov    %eax,-0x4c(%ebp)
   34dfd:	89 45 ac             	mov    %eax,-0x54(%ebp)
   34e00:	e9 ed fe ff ff       	jmp    34cf2 <_dtoa_r+0xe12>
   34e05:	8d 76 00             	lea    0x0(%esi),%esi
   34e08:	b8 01 00 00 00       	mov    $0x1,%eax
   34e0d:	e9 43 ff ff ff       	jmp    34d55 <_dtoa_r+0xe75>
   34e12:	c7 45 98 00 00 00 00 	movl   $0x0,-0x68(%ebp)
   34e19:	e9 d2 f2 ff ff       	jmp    340f0 <_dtoa_r+0x210>
   34e1e:	0f 85 87 f6 ff ff    	jne    344ab <_dtoa_r+0x5cb>
   34e24:	dd d8                	fstp   %st(0)
   34e26:	dd d8                	fstp   %st(0)
   34e28:	dd d8                	fstp   %st(0)
   34e2a:	89 fb                	mov    %edi,%ebx
   34e2c:	8b 7d c0             	mov    -0x40(%ebp),%edi
   34e2f:	e9 fc f8 ff ff       	jmp    34730 <_dtoa_r+0x850>
   34e34:	89 c2                	mov    %eax,%edx
   34e36:	2b 55 b0             	sub    -0x50(%ebp),%edx
   34e39:	89 45 b0             	mov    %eax,-0x50(%ebp)
   34e3c:	01 55 94             	add    %edx,-0x6c(%ebp)
   34e3f:	31 d2                	xor    %edx,%edx
   34e41:	e9 b8 f9 ff ff       	jmp    347fe <_dtoa_r+0x91e>
   34e46:	8b 45 a8             	mov    -0x58(%ebp),%eax
   34e49:	85 c0                	test   %eax,%eax
   34e4b:	0f 84 f3 f9 ff ff    	je     34844 <_dtoa_r+0x964>
   34e51:	8b 45 90             	mov    -0x70(%ebp),%eax
   34e54:	85 c0                	test   %eax,%eax
   34e56:	0f 8e c4 fb ff ff    	jle    34a20 <_dtoa_r+0xb40>
   34e5c:	d8 0d 8c 8f 03 00    	fmuls  0x38f8c
   34e62:	83 c1 01             	add    $0x1,%ecx
   34e65:	89 4d d4             	mov    %ecx,-0x2c(%ebp)
   34e68:	8b 5d b8             	mov    -0x48(%ebp),%ebx
   34e6b:	89 c1                	mov    %eax,%ecx
   34e6d:	83 eb 01             	sub    $0x1,%ebx
   34e70:	db 45 d4             	fildl  -0x2c(%ebp)
   34e73:	d8 c9                	fmul   %st(1),%st
   34e75:	89 5d b4             	mov    %ebx,-0x4c(%ebp)
   34e78:	d8 05 90 8f 03 00    	fadds  0x38f90
   34e7e:	dd 5d c0             	fstpl  -0x40(%ebp)
   34e81:	81 6d c4 00 00 40 03 	subl   $0x3400000,-0x3c(%ebp)
   34e88:	e9 53 f4 ff ff       	jmp    342e0 <_dtoa_r+0x400>
   34e8d:	8b 45 b4             	mov    -0x4c(%ebp),%eax
   34e90:	c6 03 30             	movb   $0x30,(%ebx)
   34e93:	83 c0 01             	add    $0x1,%eax
   34e96:	89 45 b8             	mov    %eax,-0x48(%ebp)
   34e99:	b8 31 00 00 00       	mov    $0x31,%eax
   34e9e:	88 02                	mov    %al,(%edx)
   34ea0:	e9 8b f8 ff ff       	jmp    34730 <_dtoa_r+0x850>
   34ea5:	d9 c0                	fld    %st(0)
   34ea7:	b9 02 00 00 00       	mov    $0x2,%ecx
   34eac:	e9 f2 f3 ff ff       	jmp    342a3 <_dtoa_r+0x3c3>
   34eb1:	de e2                	fsubp  %st,%st(2)
   34eb3:	d9 c9                	fxch   %st(1)
   34eb5:	df e9                	fucomip %st(1),%st
   34eb7:	dd d8                	fstp   %st(0)
   34eb9:	0f 86 69 fb ff ff    	jbe    34a28 <_dtoa_r+0xb48>
   34ebf:	dd d8                	fstp   %st(0)
   34ec1:	eb 07                	jmp    34eca <_dtoa_r+0xfea>
   34ec3:	90                   	nop
   34ec4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   34ec8:	89 c2                	mov    %eax,%edx
   34eca:	80 7a ff 30          	cmpb   $0x30,-0x1(%edx)
   34ece:	8d 42 ff             	lea    -0x1(%edx),%eax
   34ed1:	74 f5                	je     34ec8 <_dtoa_r+0xfe8>
   34ed3:	e9 d9 f4 ff ff       	jmp    343b1 <_dtoa_r+0x4d1>
   34ed8:	c6 07 31             	movb   $0x31,(%edi)
   34edb:	89 fb                	mov    %edi,%ebx
   34edd:	89 d7                	mov    %edx,%edi
   34edf:	83 45 b8 01          	addl   $0x1,-0x48(%ebp)
   34ee3:	e9 1a f8 ff ff       	jmp    34702 <_dtoa_r+0x822>
   34ee8:	8b 55 8c             	mov    -0x74(%ebp),%edx
   34eeb:	85 d2                	test   %edx,%edx
   34eed:	0f 84 1b 01 00 00    	je     3500e <_dtoa_r+0x112e>
   34ef3:	05 33 04 00 00       	add    $0x433,%eax
   34ef8:	8b 55 b0             	mov    -0x50(%ebp),%edx
   34efb:	8b 5d a0             	mov    -0x60(%ebp),%ebx
   34efe:	e9 0b f9 ff ff       	jmp    3480e <_dtoa_r+0x92e>
   34f03:	85 c0                	test   %eax,%eax
   34f05:	89 7d a4             	mov    %edi,-0x5c(%ebp)
   34f08:	8b 7d 8c             	mov    -0x74(%ebp),%edi
   34f0b:	7e 45                	jle    34f52 <_dtoa_r+0x1072>
   34f0d:	8b 45 a4             	mov    -0x5c(%ebp),%eax
   34f10:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
   34f17:	00 
   34f18:	89 34 24             	mov    %esi,(%esp)
   34f1b:	89 44 24 04          	mov    %eax,0x4(%esp)
   34f1f:	e8 8c 11 00 00       	call   360b0 <__lshift>
   34f24:	8b 5d b0             	mov    -0x50(%ebp),%ebx
   34f27:	89 5c 24 04          	mov    %ebx,0x4(%esp)
   34f2b:	89 04 24             	mov    %eax,(%esp)
   34f2e:	89 45 a4             	mov    %eax,-0x5c(%ebp)
   34f31:	e8 9a 12 00 00       	call   361d0 <__mcmp>
   34f36:	83 f8 00             	cmp    $0x0,%eax
   34f39:	0f 8e 5b 01 00 00    	jle    3509a <_dtoa_r+0x11ba>
   34f3f:	83 7d a0 39          	cmpl   $0x39,-0x60(%ebp)
   34f43:	0f 84 0c 01 00 00    	je     35055 <_dtoa_r+0x1175>
   34f49:	8b 45 94             	mov    -0x6c(%ebp),%eax
   34f4c:	83 c0 31             	add    $0x31,%eax
   34f4f:	89 45 a0             	mov    %eax,-0x60(%ebp)
   34f52:	8b 4d 98             	mov    -0x68(%ebp),%ecx
   34f55:	0f b6 45 a0          	movzbl -0x60(%ebp),%eax
   34f59:	89 cb                	mov    %ecx,%ebx
   34f5b:	88 03                	mov    %al,(%ebx)
   34f5d:	8b 45 b4             	mov    -0x4c(%ebp),%eax
   34f60:	89 fb                	mov    %edi,%ebx
   34f62:	8d 79 01             	lea    0x1(%ecx),%edi
   34f65:	89 45 c0             	mov    %eax,-0x40(%ebp)
   34f68:	8b 45 ac             	mov    -0x54(%ebp),%eax
   34f6b:	89 45 b4             	mov    %eax,-0x4c(%ebp)
   34f6e:	e9 8f f7 ff ff       	jmp    34702 <_dtoa_r+0x822>
   34f73:	dd d8                	fstp   %st(0)
   34f75:	dd d8                	fstp   %st(0)
   34f77:	dd d8                	fstp   %st(0)
   34f79:	eb 0d                	jmp    34f88 <_dtoa_r+0x10a8>
   34f7b:	90                   	nop
   34f7c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   34f80:	dd d8                	fstp   %st(0)
   34f82:	dd d8                	fstp   %st(0)
   34f84:	dd d8                	fstp   %st(0)
   34f86:	dd d8                	fstp   %st(0)
   34f88:	89 fb                	mov    %edi,%ebx
   34f8a:	89 d7                	mov    %edx,%edi
   34f8c:	e9 8d f5 ff ff       	jmp    3451e <_dtoa_r+0x63e>
   34f91:	29 cb                	sub    %ecx,%ebx
   34f93:	31 c0                	xor    %eax,%eax
   34f95:	e9 74 f8 ff ff       	jmp    3480e <_dtoa_r+0x92e>
   34f9a:	75 0e                	jne    34faa <_dtoa_r+0x10ca>
   34f9c:	f6 45 a0 01          	testb  $0x1,-0x60(%ebp)
   34fa0:	74 08                	je     34faa <_dtoa_r+0x10ca>
   34fa2:	e9 b2 f9 ff ff       	jmp    34959 <_dtoa_r+0xa79>
   34fa7:	90                   	nop
   34fa8:	89 c2                	mov    %eax,%edx
   34faa:	80 7a ff 30          	cmpb   $0x30,-0x1(%edx)
   34fae:	8d 42 ff             	lea    -0x1(%edx),%eax
   34fb1:	74 f5                	je     34fa8 <_dtoa_r+0x10c8>
   34fb3:	89 fb                	mov    %edi,%ebx
   34fb5:	89 d7                	mov    %edx,%edi
   34fb7:	e9 46 f7 ff ff       	jmp    34702 <_dtoa_r+0x822>
   34fbc:	8b 40 04             	mov    0x4(%eax),%eax
   34fbf:	89 34 24             	mov    %esi,(%esp)
   34fc2:	89 44 24 04          	mov    %eax,0x4(%esp)
   34fc6:	e8 45 0a 00 00       	call   35a10 <_Balloc>
   34fcb:	8b 4d b4             	mov    -0x4c(%ebp),%ecx
   34fce:	89 c3                	mov    %eax,%ebx
   34fd0:	8b 41 10             	mov    0x10(%ecx),%eax
   34fd3:	8d 04 85 08 00 00 00 	lea    0x8(,%eax,4),%eax
   34fda:	89 44 24 08          	mov    %eax,0x8(%esp)
   34fde:	89 c8                	mov    %ecx,%eax
   34fe0:	83 c0 0c             	add    $0xc,%eax
   34fe3:	89 44 24 04          	mov    %eax,0x4(%esp)
   34fe7:	8d 43 0c             	lea    0xc(%ebx),%eax
   34fea:	89 04 24             	mov    %eax,(%esp)
   34fed:	e8 62 cc ff ff       	call   31c54 <memcpy>
   34ff2:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
   34ff9:	00 
   34ffa:	89 5c 24 04          	mov    %ebx,0x4(%esp)
   34ffe:	89 34 24             	mov    %esi,(%esp)
   35001:	e8 aa 10 00 00       	call   360b0 <__lshift>
   35006:	89 45 ac             	mov    %eax,-0x54(%ebp)
   35009:	e9 9d fc ff ff       	jmp    34cab <_dtoa_r+0xdcb>
   3500e:	b8 36 00 00 00       	mov    $0x36,%eax
   35013:	8b 55 b0             	mov    -0x50(%ebp),%edx
   35016:	2b 45 e0             	sub    -0x20(%ebp),%eax
   35019:	8b 5d a0             	mov    -0x60(%ebp),%ebx
   3501c:	e9 ed f7 ff ff       	jmp    3480e <_dtoa_r+0x92e>
   35021:	83 7d a0 39          	cmpl   $0x39,-0x60(%ebp)
   35025:	89 7d a4             	mov    %edi,-0x5c(%ebp)
   35028:	8b 7d 8c             	mov    -0x74(%ebp),%edi
   3502b:	74 28                	je     35055 <_dtoa_r+0x1175>
   3502d:	0f b6 45 a0          	movzbl -0x60(%ebp),%eax
   35031:	8b 4d 98             	mov    -0x68(%ebp),%ecx
   35034:	83 c0 01             	add    $0x1,%eax
   35037:	89 cb                	mov    %ecx,%ebx
   35039:	e9 1d ff ff ff       	jmp    34f5b <_dtoa_r+0x107b>
   3503e:	8b 45 b4             	mov    -0x4c(%ebp),%eax
   35041:	89 7d a4             	mov    %edi,-0x5c(%ebp)
   35044:	8b 7d 8c             	mov    -0x74(%ebp),%edi
   35047:	89 45 c0             	mov    %eax,-0x40(%ebp)
   3504a:	8b 45 ac             	mov    -0x54(%ebp),%eax
   3504d:	89 45 b4             	mov    %eax,-0x4c(%ebp)
   35050:	e9 cc f8 ff ff       	jmp    34921 <_dtoa_r+0xa41>
   35055:	8b 45 98             	mov    -0x68(%ebp),%eax
   35058:	b9 39 00 00 00       	mov    $0x39,%ecx
   3505d:	8d 50 01             	lea    0x1(%eax),%edx
   35060:	c6 00 39             	movb   $0x39,(%eax)
   35063:	8b 45 b4             	mov    -0x4c(%ebp),%eax
   35066:	89 45 c0             	mov    %eax,-0x40(%ebp)
   35069:	8b 45 ac             	mov    -0x54(%ebp),%eax
   3506c:	89 45 b4             	mov    %eax,-0x4c(%ebp)
   3506f:	e9 fa f8 ff ff       	jmp    3496e <_dtoa_r+0xa8e>
   35074:	8b 5d a0             	mov    -0x60(%ebp),%ebx
   35077:	89 7d a4             	mov    %edi,-0x5c(%ebp)
   3507a:	8b 7d 8c             	mov    -0x74(%ebp),%edi
   3507d:	83 fb 39             	cmp    $0x39,%ebx
   35080:	74 d3                	je     35055 <_dtoa_r+0x1175>
   35082:	8b 4d c0             	mov    -0x40(%ebp),%ecx
   35085:	8b 45 94             	mov    -0x6c(%ebp),%eax
   35088:	83 c0 31             	add    $0x31,%eax
   3508b:	85 c9                	test   %ecx,%ecx
   3508d:	8b 4d 98             	mov    -0x68(%ebp),%ecx
   35090:	0f 4e c3             	cmovle %ebx,%eax
   35093:	89 cb                	mov    %ecx,%ebx
   35095:	e9 c1 fe ff ff       	jmp    34f5b <_dtoa_r+0x107b>
   3509a:	0f 85 b2 fe ff ff    	jne    34f52 <_dtoa_r+0x1072>
   350a0:	f6 45 a0 01          	testb  $0x1,-0x60(%ebp)
   350a4:	0f 84 a8 fe ff ff    	je     34f52 <_dtoa_r+0x1072>
   350aa:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   350b0:	e9 8a fe ff ff       	jmp    34f3f <_dtoa_r+0x105f>
   350b5:	0f 85 c7 f3 ff ff    	jne    34482 <_dtoa_r+0x5a2>
   350bb:	dd d8                	fstp   %st(0)
   350bd:	dd d8                	fstp   %st(0)
   350bf:	90                   	nop
   350c0:	e9 65 fd ff ff       	jmp    34e2a <_dtoa_r+0xf4a>
   350c5:	89 45 a8             	mov    %eax,-0x58(%ebp)
   350c8:	e9 dd f5 ff ff       	jmp    346aa <_dtoa_r+0x7ca>
   350cd:	8d 76 00             	lea    0x0(%esi),%esi
   350d0:	0f 84 7a f5 ff ff    	je     34650 <_dtoa_r+0x770>
   350d6:	b8 3c 00 00 00       	mov    $0x3c,%eax
   350db:	29 d0                	sub    %edx,%eax
   350dd:	e9 ab f8 ff ff       	jmp    3498d <_dtoa_r+0xaad>
   350e2:	b8 01 00 00 00       	mov    $0x1,%eax
   350e7:	e9 d9 ef ff ff       	jmp    340c5 <_dtoa_r+0x1e5>
   350ec:	31 d2                	xor    %edx,%edx
   350ee:	e9 36 f1 ff ff       	jmp    34229 <_dtoa_r+0x349>
   350f3:	66 90                	xchg   %ax,%ax
   350f5:	66 90                	xchg   %ax,%ax
   350f7:	66 90                	xchg   %ax,%ax
   350f9:	66 90                	xchg   %ax,%ax
   350fb:	66 90                	xchg   %ax,%ax
   350fd:	66 90                	xchg   %ax,%ax
   350ff:	90                   	nop

00035100 <_setlocale_r>:
   35100:	55                   	push   %ebp
   35101:	89 e5                	mov    %esp,%ebp
   35103:	53                   	push   %ebx
   35104:	83 ec 14             	sub    $0x14,%esp
   35107:	8b 5d 10             	mov    0x10(%ebp),%ebx
   3510a:	85 db                	test   %ebx,%ebx
   3510c:	74 14                	je     35122 <_setlocale_r+0x22>
   3510e:	c7 44 24 04 b8 8f 03 	movl   $0x38fb8,0x4(%esp)
   35115:	00 
   35116:	89 1c 24             	mov    %ebx,(%esp)
   35119:	e8 82 17 00 00       	call   368a0 <strcmp>
   3511e:	85 c0                	test   %eax,%eax
   35120:	75 0e                	jne    35130 <_setlocale_r+0x30>
   35122:	83 c4 14             	add    $0x14,%esp
   35125:	b8 b0 8d 03 00       	mov    $0x38db0,%eax
   3512a:	5b                   	pop    %ebx
   3512b:	5d                   	pop    %ebp
   3512c:	c3                   	ret    
   3512d:	8d 76 00             	lea    0x0(%esi),%esi
   35130:	c7 44 24 04 b0 8d 03 	movl   $0x38db0,0x4(%esp)
   35137:	00 
   35138:	89 1c 24             	mov    %ebx,(%esp)
   3513b:	e8 60 17 00 00       	call   368a0 <strcmp>
   35140:	85 c0                	test   %eax,%eax
   35142:	74 de                	je     35122 <_setlocale_r+0x22>
   35144:	89 1c 24             	mov    %ebx,(%esp)
   35147:	c7 44 24 04 ea 8d 03 	movl   $0x38dea,0x4(%esp)
   3514e:	00 
   3514f:	e8 4c 17 00 00       	call   368a0 <strcmp>
   35154:	89 c2                	mov    %eax,%edx
   35156:	31 c0                	xor    %eax,%eax
   35158:	85 d2                	test   %edx,%edx
   3515a:	ba b0 8d 03 00       	mov    $0x38db0,%edx
   3515f:	0f 44 c2             	cmove  %edx,%eax
   35162:	83 c4 14             	add    $0x14,%esp
   35165:	5b                   	pop    %ebx
   35166:	5d                   	pop    %ebp
   35167:	c3                   	ret    
   35168:	90                   	nop
   35169:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

00035170 <__locale_charset>:
   35170:	55                   	push   %ebp
   35171:	b8 c0 c4 03 00       	mov    $0x3c4c0,%eax
   35176:	89 e5                	mov    %esp,%ebp
   35178:	5d                   	pop    %ebp
   35179:	c3                   	ret    
   3517a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

00035180 <__locale_mb_cur_max>:
   35180:	55                   	push   %ebp
   35181:	a1 18 c5 03 00       	mov    0x3c518,%eax
   35186:	89 e5                	mov    %esp,%ebp
   35188:	5d                   	pop    %ebp
   35189:	c3                   	ret    
   3518a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

00035190 <__locale_msgcharset>:
   35190:	55                   	push   %ebp
   35191:	b8 a0 c4 03 00       	mov    $0x3c4a0,%eax
   35196:	89 e5                	mov    %esp,%ebp
   35198:	5d                   	pop    %ebp
   35199:	c3                   	ret    
   3519a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

000351a0 <__locale_cjk_lang>:
   351a0:	55                   	push   %ebp
   351a1:	31 c0                	xor    %eax,%eax
   351a3:	89 e5                	mov    %esp,%ebp
   351a5:	5d                   	pop    %ebp
   351a6:	c3                   	ret    
   351a7:	89 f6                	mov    %esi,%esi
   351a9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

000351b0 <_localeconv_r>:
   351b0:	55                   	push   %ebp
   351b1:	b8 e0 c4 03 00       	mov    $0x3c4e0,%eax
   351b6:	89 e5                	mov    %esp,%ebp
   351b8:	5d                   	pop    %ebp
   351b9:	c3                   	ret    
   351ba:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

000351c0 <setlocale>:
   351c0:	55                   	push   %ebp
   351c1:	89 e5                	mov    %esp,%ebp
   351c3:	83 ec 18             	sub    $0x18,%esp
   351c6:	e8 35 cc ff ff       	call   31e00 <__getreent>
   351cb:	8b 55 0c             	mov    0xc(%ebp),%edx
   351ce:	89 54 24 08          	mov    %edx,0x8(%esp)
   351d2:	8b 55 08             	mov    0x8(%ebp),%edx
   351d5:	89 04 24             	mov    %eax,(%esp)
   351d8:	89 54 24 04          	mov    %edx,0x4(%esp)
   351dc:	e8 1f ff ff ff       	call   35100 <_setlocale_r>
   351e1:	c9                   	leave  
   351e2:	c3                   	ret    
   351e3:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   351e9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

000351f0 <localeconv>:
   351f0:	55                   	push   %ebp
   351f1:	89 e5                	mov    %esp,%ebp
   351f3:	83 ec 08             	sub    $0x8,%esp
   351f6:	e8 05 cc ff ff       	call   31e00 <__getreent>
   351fb:	b8 e0 c4 03 00       	mov    $0x3c4e0,%eax
   35200:	c9                   	leave  
   35201:	c3                   	ret    
   35202:	66 90                	xchg   %ax,%ax
   35204:	66 90                	xchg   %ax,%ax
   35206:	66 90                	xchg   %ax,%ax
   35208:	66 90                	xchg   %ax,%ax
   3520a:	66 90                	xchg   %ax,%ax
   3520c:	66 90                	xchg   %ax,%ax
   3520e:	66 90                	xchg   %ax,%ax

00035210 <_malloc_r>:
   35210:	55                   	push   %ebp
   35211:	89 e5                	mov    %esp,%ebp
   35213:	57                   	push   %edi
   35214:	56                   	push   %esi
   35215:	53                   	push   %ebx
   35216:	83 ec 2c             	sub    $0x2c,%esp
   35219:	8b 45 0c             	mov    0xc(%ebp),%eax
   3521c:	8d 50 0b             	lea    0xb(%eax),%edx
   3521f:	83 fa 16             	cmp    $0x16,%edx
   35222:	76 6c                	jbe    35290 <_malloc_r+0x80>
   35224:	89 d7                	mov    %edx,%edi
   35226:	83 e7 f8             	and    $0xfffffff8,%edi
   35229:	89 fe                	mov    %edi,%esi
   3522b:	c1 ee 1f             	shr    $0x1f,%esi
   3522e:	39 c7                	cmp    %eax,%edi
   35230:	8b 45 08             	mov    0x8(%ebp),%eax
   35233:	89 f2                	mov    %esi,%edx
   35235:	72 67                	jb     3529e <_malloc_r+0x8e>
   35237:	84 d2                	test   %dl,%dl
   35239:	75 63                	jne    3529e <_malloc_r+0x8e>
   3523b:	89 04 24             	mov    %eax,(%esp)
   3523e:	e8 ad 07 00 00       	call   359f0 <__malloc_lock>
   35243:	81 ff f7 01 00 00    	cmp    $0x1f7,%edi
   35249:	77 65                	ja     352b0 <_malloc_r+0xa0>
   3524b:	89 fa                	mov    %edi,%edx
   3524d:	c1 ea 03             	shr    $0x3,%edx
   35250:	8d 04 d5 40 c5 03 00 	lea    0x3c540(,%edx,8),%eax
   35257:	8b 58 0c             	mov    0xc(%eax),%ebx
   3525a:	39 c3                	cmp    %eax,%ebx
   3525c:	0f 84 3e 05 00 00    	je     357a0 <_malloc_r+0x590>
   35262:	8b 43 04             	mov    0x4(%ebx),%eax
   35265:	83 e0 fc             	and    $0xfffffffc,%eax
   35268:	8b 53 0c             	mov    0xc(%ebx),%edx
   3526b:	8b 4b 08             	mov    0x8(%ebx),%ecx
   3526e:	89 51 0c             	mov    %edx,0xc(%ecx)
   35271:	89 4a 08             	mov    %ecx,0x8(%edx)
   35274:	83 4c 03 04 01       	orl    $0x1,0x4(%ebx,%eax,1)
   35279:	8b 45 08             	mov    0x8(%ebp),%eax
   3527c:	89 04 24             	mov    %eax,(%esp)
   3527f:	e8 7c 07 00 00       	call   35a00 <__malloc_unlock>
   35284:	8d 43 08             	lea    0x8(%ebx),%eax
   35287:	83 c4 2c             	add    $0x2c,%esp
   3528a:	5b                   	pop    %ebx
   3528b:	5e                   	pop    %esi
   3528c:	5f                   	pop    %edi
   3528d:	5d                   	pop    %ebp
   3528e:	c3                   	ret    
   3528f:	90                   	nop
   35290:	bf 10 00 00 00       	mov    $0x10,%edi
   35295:	31 d2                	xor    %edx,%edx
   35297:	39 c7                	cmp    %eax,%edi
   35299:	8b 45 08             	mov    0x8(%ebp),%eax
   3529c:	73 99                	jae    35237 <_malloc_r+0x27>
   3529e:	c7 00 0c 00 00 00    	movl   $0xc,(%eax)
   352a4:	83 c4 2c             	add    $0x2c,%esp
   352a7:	31 c0                	xor    %eax,%eax
   352a9:	5b                   	pop    %ebx
   352aa:	5e                   	pop    %esi
   352ab:	5f                   	pop    %edi
   352ac:	5d                   	pop    %ebp
   352ad:	c3                   	ret    
   352ae:	66 90                	xchg   %ax,%ax
   352b0:	89 fe                	mov    %edi,%esi
   352b2:	c1 ee 09             	shr    $0x9,%esi
   352b5:	85 f6                	test   %esi,%esi
   352b7:	0f 84 ab 01 00 00    	je     35468 <_malloc_r+0x258>
   352bd:	83 fe 04             	cmp    $0x4,%esi
   352c0:	0f 87 8a 03 00 00    	ja     35650 <_malloc_r+0x440>
   352c6:	89 fe                	mov    %edi,%esi
   352c8:	c1 ee 06             	shr    $0x6,%esi
   352cb:	83 c6 38             	add    $0x38,%esi
   352ce:	8d 04 36             	lea    (%esi,%esi,1),%eax
   352d1:	8d 0c 85 40 c5 03 00 	lea    0x3c540(,%eax,4),%ecx
   352d8:	8b 59 0c             	mov    0xc(%ecx),%ebx
   352db:	39 d9                	cmp    %ebx,%ecx
   352dd:	75 18                	jne    352f7 <_malloc_r+0xe7>
   352df:	eb 28                	jmp    35309 <_malloc_r+0xf9>
   352e1:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   352e8:	85 d2                	test   %edx,%edx
   352ea:	0f 89 78 ff ff ff    	jns    35268 <_malloc_r+0x58>
   352f0:	8b 5b 0c             	mov    0xc(%ebx),%ebx
   352f3:	39 d9                	cmp    %ebx,%ecx
   352f5:	74 12                	je     35309 <_malloc_r+0xf9>
   352f7:	8b 43 04             	mov    0x4(%ebx),%eax
   352fa:	83 e0 fc             	and    $0xfffffffc,%eax
   352fd:	89 c2                	mov    %eax,%edx
   352ff:	29 fa                	sub    %edi,%edx
   35301:	83 fa 0f             	cmp    $0xf,%edx
   35304:	7e e2                	jle    352e8 <_malloc_r+0xd8>
   35306:	83 ee 01             	sub    $0x1,%esi
   35309:	8d 46 01             	lea    0x1(%esi),%eax
   3530c:	89 45 e4             	mov    %eax,-0x1c(%ebp)
   3530f:	8b 1d 50 c5 03 00    	mov    0x3c550,%ebx
   35315:	a1 44 c5 03 00       	mov    0x3c544,%eax
   3531a:	81 fb 48 c5 03 00    	cmp    $0x3c548,%ebx
   35320:	74 6b                	je     3538d <_malloc_r+0x17d>
   35322:	8b 73 04             	mov    0x4(%ebx),%esi
   35325:	83 e6 fc             	and    $0xfffffffc,%esi
   35328:	89 f0                	mov    %esi,%eax
   3532a:	29 f8                	sub    %edi,%eax
   3532c:	83 f8 0f             	cmp    $0xf,%eax
   3532f:	0f 8f a3 03 00 00    	jg     356d8 <_malloc_r+0x4c8>
   35335:	85 c0                	test   %eax,%eax
   35337:	c7 05 54 c5 03 00 48 	movl   $0x3c548,0x3c554
   3533e:	c5 03 00 
   35341:	c7 05 50 c5 03 00 48 	movl   $0x3c548,0x3c550
   35348:	c5 03 00 
   3534b:	0f 89 27 01 00 00    	jns    35478 <_malloc_r+0x268>
   35351:	81 fe ff 01 00 00    	cmp    $0x1ff,%esi
   35357:	0f 87 1b 03 00 00    	ja     35678 <_malloc_r+0x468>
   3535d:	c1 ee 03             	shr    $0x3,%esi
   35360:	b8 01 00 00 00       	mov    $0x1,%eax
   35365:	89 f1                	mov    %esi,%ecx
   35367:	8d 14 f5 40 c5 03 00 	lea    0x3c540(,%esi,8),%edx
   3536e:	c1 f9 02             	sar    $0x2,%ecx
   35371:	d3 e0                	shl    %cl,%eax
   35373:	8b 4a 08             	mov    0x8(%edx),%ecx
   35376:	0b 05 44 c5 03 00    	or     0x3c544,%eax
   3537c:	89 53 0c             	mov    %edx,0xc(%ebx)
   3537f:	89 4b 08             	mov    %ecx,0x8(%ebx)
   35382:	a3 44 c5 03 00       	mov    %eax,0x3c544
   35387:	89 5a 08             	mov    %ebx,0x8(%edx)
   3538a:	89 59 0c             	mov    %ebx,0xc(%ecx)
   3538d:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
   35390:	be 01 00 00 00       	mov    $0x1,%esi
   35395:	c1 f9 02             	sar    $0x2,%ecx
   35398:	d3 e6                	shl    %cl,%esi
   3539a:	39 c6                	cmp    %eax,%esi
   3539c:	0f 87 f6 00 00 00    	ja     35498 <_malloc_r+0x288>
   353a2:	85 f0                	test   %esi,%eax
   353a4:	0f 85 76 03 00 00    	jne    35720 <_malloc_r+0x510>
   353aa:	8b 55 e4             	mov    -0x1c(%ebp),%edx
   353ad:	01 f6                	add    %esi,%esi
   353af:	83 e2 fc             	and    $0xfffffffc,%edx
   353b2:	85 f0                	test   %esi,%eax
   353b4:	8d 4a 04             	lea    0x4(%edx),%ecx
   353b7:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
   353ba:	0f 85 60 03 00 00    	jne    35720 <_malloc_r+0x510>
   353c0:	89 ca                	mov    %ecx,%edx
   353c2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   353c8:	01 f6                	add    %esi,%esi
   353ca:	83 c2 04             	add    $0x4,%edx
   353cd:	85 f0                	test   %esi,%eax
   353cf:	74 f7                	je     353c8 <_malloc_r+0x1b8>
   353d1:	89 55 e4             	mov    %edx,-0x1c(%ebp)
   353d4:	89 75 dc             	mov    %esi,-0x24(%ebp)
   353d7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
   353da:	8d 34 c5 40 c5 03 00 	lea    0x3c540(,%eax,8),%esi
   353e1:	89 f1                	mov    %esi,%ecx
   353e3:	89 45 e0             	mov    %eax,-0x20(%ebp)
   353e6:	8b 59 0c             	mov    0xc(%ecx),%ebx
   353e9:	39 d9                	cmp    %ebx,%ecx
   353eb:	75 1e                	jne    3540b <_malloc_r+0x1fb>
   353ed:	e9 36 03 00 00       	jmp    35728 <_malloc_r+0x518>
   353f2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   353f8:	85 d2                	test   %edx,%edx
   353fa:	0f 89 c0 03 00 00    	jns    357c0 <_malloc_r+0x5b0>
   35400:	8b 5b 0c             	mov    0xc(%ebx),%ebx
   35403:	39 d9                	cmp    %ebx,%ecx
   35405:	0f 84 1d 03 00 00    	je     35728 <_malloc_r+0x518>
   3540b:	8b 43 04             	mov    0x4(%ebx),%eax
   3540e:	83 e0 fc             	and    $0xfffffffc,%eax
   35411:	89 c2                	mov    %eax,%edx
   35413:	29 fa                	sub    %edi,%edx
   35415:	83 fa 0f             	cmp    $0xf,%edx
   35418:	7e de                	jle    353f8 <_malloc_r+0x1e8>
   3541a:	8b 4b 0c             	mov    0xc(%ebx),%ecx
   3541d:	8d 04 3b             	lea    (%ebx,%edi,1),%eax
   35420:	83 cf 01             	or     $0x1,%edi
   35423:	8b 73 08             	mov    0x8(%ebx),%esi
   35426:	89 7b 04             	mov    %edi,0x4(%ebx)
   35429:	89 4e 0c             	mov    %ecx,0xc(%esi)
   3542c:	89 71 08             	mov    %esi,0x8(%ecx)
   3542f:	89 d1                	mov    %edx,%ecx
   35431:	83 c9 01             	or     $0x1,%ecx
   35434:	a3 54 c5 03 00       	mov    %eax,0x3c554
   35439:	a3 50 c5 03 00       	mov    %eax,0x3c550
   3543e:	c7 40 0c 48 c5 03 00 	movl   $0x3c548,0xc(%eax)
   35445:	c7 40 08 48 c5 03 00 	movl   $0x3c548,0x8(%eax)
   3544c:	89 48 04             	mov    %ecx,0x4(%eax)
   3544f:	89 14 10             	mov    %edx,(%eax,%edx,1)
   35452:	8b 45 08             	mov    0x8(%ebp),%eax
   35455:	89 04 24             	mov    %eax,(%esp)
   35458:	e8 a3 05 00 00       	call   35a00 <__malloc_unlock>
   3545d:	8d 43 08             	lea    0x8(%ebx),%eax
   35460:	e9 22 fe ff ff       	jmp    35287 <_malloc_r+0x77>
   35465:	8d 76 00             	lea    0x0(%esi),%esi
   35468:	b8 7e 00 00 00       	mov    $0x7e,%eax
   3546d:	be 3f 00 00 00       	mov    $0x3f,%esi
   35472:	e9 5a fe ff ff       	jmp    352d1 <_malloc_r+0xc1>
   35477:	90                   	nop
   35478:	8b 45 08             	mov    0x8(%ebp),%eax
   3547b:	83 4c 33 04 01       	orl    $0x1,0x4(%ebx,%esi,1)
   35480:	89 04 24             	mov    %eax,(%esp)
   35483:	e8 78 05 00 00       	call   35a00 <__malloc_unlock>
   35488:	83 c4 2c             	add    $0x2c,%esp
   3548b:	8d 43 08             	lea    0x8(%ebx),%eax
   3548e:	5b                   	pop    %ebx
   3548f:	5e                   	pop    %esi
   35490:	5f                   	pop    %edi
   35491:	5d                   	pop    %ebp
   35492:	c3                   	ret    
   35493:	90                   	nop
   35494:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   35498:	8b 1d 48 c5 03 00    	mov    0x3c548,%ebx
   3549e:	8b 73 04             	mov    0x4(%ebx),%esi
   354a1:	83 e6 fc             	and    $0xfffffffc,%esi
   354a4:	39 f7                	cmp    %esi,%edi
   354a6:	77 0d                	ja     354b5 <_malloc_r+0x2a5>
   354a8:	89 f0                	mov    %esi,%eax
   354aa:	29 f8                	sub    %edi,%eax
   354ac:	83 f8 0f             	cmp    $0xf,%eax
   354af:	0f 8f 6b 01 00 00    	jg     35620 <_malloc_r+0x410>
   354b5:	8b 0d 50 f0 06 00    	mov    0x6f050,%ecx
   354bb:	8d 04 33             	lea    (%ebx,%esi,1),%eax
   354be:	89 45 e4             	mov    %eax,-0x1c(%ebp)
   354c1:	01 f9                	add    %edi,%ecx
   354c3:	8d 81 0f 10 00 00    	lea    0x100f(%ecx),%eax
   354c9:	83 c1 10             	add    $0x10,%ecx
   354cc:	25 00 f0 ff ff       	and    $0xfffff000,%eax
   354d1:	83 3d 20 c5 03 00 ff 	cmpl   $0xffffffff,0x3c520
   354d8:	0f 44 c1             	cmove  %ecx,%eax
   354db:	89 45 e0             	mov    %eax,-0x20(%ebp)
   354de:	89 44 24 04          	mov    %eax,0x4(%esp)
   354e2:	8b 45 08             	mov    0x8(%ebp),%eax
   354e5:	89 04 24             	mov    %eax,(%esp)
   354e8:	e8 03 13 00 00       	call   367f0 <_sbrk_r>
   354ed:	83 f8 ff             	cmp    $0xffffffff,%eax
   354f0:	89 c1                	mov    %eax,%ecx
   354f2:	0f 84 17 03 00 00    	je     3580f <_malloc_r+0x5ff>
   354f8:	39 45 e4             	cmp    %eax,-0x1c(%ebp)
   354fb:	0f 87 02 03 00 00    	ja     35803 <_malloc_r+0x5f3>
   35501:	8b 55 e0             	mov    -0x20(%ebp),%edx
   35504:	03 15 20 f0 06 00    	add    0x6f020,%edx
   3550a:	39 4d e4             	cmp    %ecx,-0x1c(%ebp)
   3550d:	89 15 20 f0 06 00    	mov    %edx,0x6f020
   35513:	0f 84 a9 03 00 00    	je     358c2 <_malloc_r+0x6b2>
   35519:	83 3d 20 c5 03 00 ff 	cmpl   $0xffffffff,0x3c520
   35520:	0f 84 ca 03 00 00    	je     358f0 <_malloc_r+0x6e0>
   35526:	89 c8                	mov    %ecx,%eax
   35528:	2b 45 e4             	sub    -0x1c(%ebp),%eax
   3552b:	01 d0                	add    %edx,%eax
   3552d:	a3 20 f0 06 00       	mov    %eax,0x6f020
   35532:	89 c8                	mov    %ecx,%eax
   35534:	ba 00 10 00 00       	mov    $0x1000,%edx
   35539:	83 e0 07             	and    $0x7,%eax
   3553c:	74 0c                	je     3554a <_malloc_r+0x33a>
   3553e:	29 c1                	sub    %eax,%ecx
   35540:	ba 08 10 00 00       	mov    $0x1008,%edx
   35545:	8d 49 08             	lea    0x8(%ecx),%ecx
   35548:	29 c2                	sub    %eax,%edx
   3554a:	8b 45 e0             	mov    -0x20(%ebp),%eax
   3554d:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
   35550:	01 c8                	add    %ecx,%eax
   35552:	25 ff 0f 00 00       	and    $0xfff,%eax
   35557:	29 c2                	sub    %eax,%edx
   35559:	8b 45 08             	mov    0x8(%ebp),%eax
   3555c:	89 54 24 04          	mov    %edx,0x4(%esp)
   35560:	89 55 e0             	mov    %edx,-0x20(%ebp)
   35563:	89 04 24             	mov    %eax,(%esp)
   35566:	e8 85 12 00 00       	call   367f0 <_sbrk_r>
   3556b:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
   3556e:	83 f8 ff             	cmp    $0xffffffff,%eax
   35571:	0f 84 6d 03 00 00    	je     358e4 <_malloc_r+0x6d4>
   35577:	8b 55 e0             	mov    -0x20(%ebp),%edx
   3557a:	29 c8                	sub    %ecx,%eax
   3557c:	01 d0                	add    %edx,%eax
   3557e:	83 c8 01             	or     $0x1,%eax
   35581:	03 15 20 f0 06 00    	add    0x6f020,%edx
   35587:	81 fb 40 c5 03 00    	cmp    $0x3c540,%ebx
   3558d:	89 0d 48 c5 03 00    	mov    %ecx,0x3c548
   35593:	89 41 04             	mov    %eax,0x4(%ecx)
   35596:	89 15 20 f0 06 00    	mov    %edx,0x6f020
   3559c:	0f 84 f2 02 00 00    	je     35894 <_malloc_r+0x684>
   355a2:	83 fe 0f             	cmp    $0xf,%esi
   355a5:	0f 86 8d 02 00 00    	jbe    35838 <_malloc_r+0x628>
   355ab:	8b 43 04             	mov    0x4(%ebx),%eax
   355ae:	83 ee 0c             	sub    $0xc,%esi
   355b1:	83 e6 f8             	and    $0xfffffff8,%esi
   355b4:	83 e0 01             	and    $0x1,%eax
   355b7:	09 f0                	or     %esi,%eax
   355b9:	83 fe 0f             	cmp    $0xf,%esi
   355bc:	89 43 04             	mov    %eax,0x4(%ebx)
   355bf:	a1 48 c5 03 00       	mov    0x3c548,%eax
   355c4:	c7 44 33 04 05 00 00 	movl   $0x5,0x4(%ebx,%esi,1)
   355cb:	00 
   355cc:	c7 44 33 08 05 00 00 	movl   $0x5,0x8(%ebx,%esi,1)
   355d3:	00 
   355d4:	0f 87 a2 02 00 00    	ja     3587c <_malloc_r+0x66c>
   355da:	3b 15 4c f0 06 00    	cmp    0x6f04c,%edx
   355e0:	76 06                	jbe    355e8 <_malloc_r+0x3d8>
   355e2:	89 15 4c f0 06 00    	mov    %edx,0x6f04c
   355e8:	3b 15 48 f0 06 00    	cmp    0x6f048,%edx
   355ee:	76 06                	jbe    355f6 <_malloc_r+0x3e6>
   355f0:	89 15 48 f0 06 00    	mov    %edx,0x6f048
   355f6:	8b 50 04             	mov    0x4(%eax),%edx
   355f9:	89 c3                	mov    %eax,%ebx
   355fb:	83 e2 fc             	and    $0xfffffffc,%edx
   355fe:	89 d0                	mov    %edx,%eax
   35600:	29 f8                	sub    %edi,%eax
   35602:	39 d7                	cmp    %edx,%edi
   35604:	77 05                	ja     3560b <_malloc_r+0x3fb>
   35606:	83 f8 0f             	cmp    $0xf,%eax
   35609:	7f 15                	jg     35620 <_malloc_r+0x410>
   3560b:	8b 45 08             	mov    0x8(%ebp),%eax
   3560e:	89 04 24             	mov    %eax,(%esp)
   35611:	e8 ea 03 00 00       	call   35a00 <__malloc_unlock>
   35616:	31 c0                	xor    %eax,%eax
   35618:	e9 6a fc ff ff       	jmp    35287 <_malloc_r+0x77>
   3561d:	8d 76 00             	lea    0x0(%esi),%esi
   35620:	89 fa                	mov    %edi,%edx
   35622:	83 c8 01             	or     $0x1,%eax
   35625:	83 ca 01             	or     $0x1,%edx
   35628:	89 53 04             	mov    %edx,0x4(%ebx)
   3562b:	8d 14 3b             	lea    (%ebx,%edi,1),%edx
   3562e:	89 15 48 c5 03 00    	mov    %edx,0x3c548
   35634:	89 42 04             	mov    %eax,0x4(%edx)
   35637:	8b 45 08             	mov    0x8(%ebp),%eax
   3563a:	89 04 24             	mov    %eax,(%esp)
   3563d:	e8 be 03 00 00       	call   35a00 <__malloc_unlock>
   35642:	83 c4 2c             	add    $0x2c,%esp
   35645:	8d 43 08             	lea    0x8(%ebx),%eax
   35648:	5b                   	pop    %ebx
   35649:	5e                   	pop    %esi
   3564a:	5f                   	pop    %edi
   3564b:	5d                   	pop    %ebp
   3564c:	c3                   	ret    
   3564d:	8d 76 00             	lea    0x0(%esi),%esi
   35650:	83 fe 14             	cmp    $0x14,%esi
   35653:	0f 86 8f 01 00 00    	jbe    357e8 <_malloc_r+0x5d8>
   35659:	83 fe 54             	cmp    $0x54,%esi
   3565c:	0f 87 be 01 00 00    	ja     35820 <_malloc_r+0x610>
   35662:	89 fe                	mov    %edi,%esi
   35664:	c1 ee 0c             	shr    $0xc,%esi
   35667:	83 c6 6e             	add    $0x6e,%esi
   3566a:	8d 04 36             	lea    (%esi,%esi,1),%eax
   3566d:	e9 5f fc ff ff       	jmp    352d1 <_malloc_r+0xc1>
   35672:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   35678:	89 f1                	mov    %esi,%ecx
   3567a:	c1 e9 09             	shr    $0x9,%ecx
   3567d:	83 f9 04             	cmp    $0x4,%ecx
   35680:	0f 86 6d 01 00 00    	jbe    357f3 <_malloc_r+0x5e3>
   35686:	83 f9 14             	cmp    $0x14,%ecx
   35689:	0f 87 0f 02 00 00    	ja     3589e <_malloc_r+0x68e>
   3568f:	83 c1 5b             	add    $0x5b,%ecx
   35692:	8d 04 09             	lea    (%ecx,%ecx,1),%eax
   35695:	8d 04 85 40 c5 03 00 	lea    0x3c540(,%eax,4),%eax
   3569c:	8b 50 08             	mov    0x8(%eax),%edx
   3569f:	39 c2                	cmp    %eax,%edx
   356a1:	0f 84 a1 01 00 00    	je     35848 <_malloc_r+0x638>
   356a7:	90                   	nop
   356a8:	8b 4a 04             	mov    0x4(%edx),%ecx
   356ab:	83 e1 fc             	and    $0xfffffffc,%ecx
   356ae:	39 ce                	cmp    %ecx,%esi
   356b0:	73 07                	jae    356b9 <_malloc_r+0x4a9>
   356b2:	8b 52 08             	mov    0x8(%edx),%edx
   356b5:	39 d0                	cmp    %edx,%eax
   356b7:	75 ef                	jne    356a8 <_malloc_r+0x498>
   356b9:	8b 4a 0c             	mov    0xc(%edx),%ecx
   356bc:	a1 44 c5 03 00       	mov    0x3c544,%eax
   356c1:	89 4b 0c             	mov    %ecx,0xc(%ebx)
   356c4:	89 53 08             	mov    %edx,0x8(%ebx)
   356c7:	89 59 08             	mov    %ebx,0x8(%ecx)
   356ca:	89 5a 0c             	mov    %ebx,0xc(%edx)
   356cd:	e9 bb fc ff ff       	jmp    3538d <_malloc_r+0x17d>
   356d2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   356d8:	89 c1                	mov    %eax,%ecx
   356da:	8d 14 3b             	lea    (%ebx,%edi,1),%edx
   356dd:	83 c9 01             	or     $0x1,%ecx
   356e0:	83 cf 01             	or     $0x1,%edi
   356e3:	89 7b 04             	mov    %edi,0x4(%ebx)
   356e6:	89 15 54 c5 03 00    	mov    %edx,0x3c554
   356ec:	89 15 50 c5 03 00    	mov    %edx,0x3c550
   356f2:	c7 42 0c 48 c5 03 00 	movl   $0x3c548,0xc(%edx)
   356f9:	c7 42 08 48 c5 03 00 	movl   $0x3c548,0x8(%edx)
   35700:	89 4a 04             	mov    %ecx,0x4(%edx)
   35703:	89 04 02             	mov    %eax,(%edx,%eax,1)
   35706:	8b 45 08             	mov    0x8(%ebp),%eax
   35709:	89 04 24             	mov    %eax,(%esp)
   3570c:	e8 ef 02 00 00       	call   35a00 <__malloc_unlock>
   35711:	8d 43 08             	lea    0x8(%ebx),%eax
   35714:	e9 6e fb ff ff       	jmp    35287 <_malloc_r+0x77>
   35719:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   35720:	89 75 dc             	mov    %esi,-0x24(%ebp)
   35723:	e9 af fc ff ff       	jmp    353d7 <_malloc_r+0x1c7>
   35728:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
   3572c:	83 c1 08             	add    $0x8,%ecx
   3572f:	f6 45 e0 03          	testb  $0x3,-0x20(%ebp)
   35733:	0f 85 ad fc ff ff    	jne    353e6 <_malloc_r+0x1d6>
   35739:	8b 45 e4             	mov    -0x1c(%ebp),%eax
   3573c:	eb 12                	jmp    35750 <_malloc_r+0x540>
   3573e:	66 90                	xchg   %ax,%ax
   35740:	8d 56 f8             	lea    -0x8(%esi),%edx
   35743:	8b 36                	mov    (%esi),%esi
   35745:	83 e8 01             	sub    $0x1,%eax
   35748:	39 d6                	cmp    %edx,%esi
   3574a:	0f 85 ea 01 00 00    	jne    3593a <_malloc_r+0x72a>
   35750:	a8 03                	test   $0x3,%al
   35752:	75 ec                	jne    35740 <_malloc_r+0x530>
   35754:	8b 45 dc             	mov    -0x24(%ebp),%eax
   35757:	f7 d0                	not    %eax
   35759:	23 05 44 c5 03 00    	and    0x3c544,%eax
   3575f:	a3 44 c5 03 00       	mov    %eax,0x3c544
   35764:	d1 65 dc             	shll   -0x24(%ebp)
   35767:	8b 55 dc             	mov    -0x24(%ebp),%edx
   3576a:	39 c2                	cmp    %eax,%edx
   3576c:	0f 87 26 fd ff ff    	ja     35498 <_malloc_r+0x288>
   35772:	85 d2                	test   %edx,%edx
   35774:	0f 84 1e fd ff ff    	je     35498 <_malloc_r+0x288>
   3577a:	85 c2                	test   %eax,%edx
   3577c:	0f 85 c2 01 00 00    	jne    35944 <_malloc_r+0x734>
   35782:	8b 75 e0             	mov    -0x20(%ebp),%esi
   35785:	89 f1                	mov    %esi,%ecx
   35787:	01 d2                	add    %edx,%edx
   35789:	83 c1 04             	add    $0x4,%ecx
   3578c:	85 d0                	test   %edx,%eax
   3578e:	74 f7                	je     35787 <_malloc_r+0x577>
   35790:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
   35793:	89 55 dc             	mov    %edx,-0x24(%ebp)
   35796:	e9 3c fc ff ff       	jmp    353d7 <_malloc_r+0x1c7>
   3579b:	90                   	nop
   3579c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   357a0:	8d 43 08             	lea    0x8(%ebx),%eax
   357a3:	8b 5b 14             	mov    0x14(%ebx),%ebx
   357a6:	39 d8                	cmp    %ebx,%eax
   357a8:	0f 85 b4 fa ff ff    	jne    35262 <_malloc_r+0x52>
   357ae:	8d 42 02             	lea    0x2(%edx),%eax
   357b1:	89 45 e4             	mov    %eax,-0x1c(%ebp)
   357b4:	e9 56 fb ff ff       	jmp    3530f <_malloc_r+0xff>
   357b9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   357c0:	83 4c 03 04 01       	orl    $0x1,0x4(%ebx,%eax,1)
   357c5:	8b 53 08             	mov    0x8(%ebx),%edx
   357c8:	8b 43 0c             	mov    0xc(%ebx),%eax
   357cb:	89 42 0c             	mov    %eax,0xc(%edx)
   357ce:	89 50 08             	mov    %edx,0x8(%eax)
   357d1:	8b 45 08             	mov    0x8(%ebp),%eax
   357d4:	89 04 24             	mov    %eax,(%esp)
   357d7:	e8 24 02 00 00       	call   35a00 <__malloc_unlock>
   357dc:	8d 43 08             	lea    0x8(%ebx),%eax
   357df:	e9 a3 fa ff ff       	jmp    35287 <_malloc_r+0x77>
   357e4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   357e8:	83 c6 5b             	add    $0x5b,%esi
   357eb:	8d 04 36             	lea    (%esi,%esi,1),%eax
   357ee:	e9 de fa ff ff       	jmp    352d1 <_malloc_r+0xc1>
   357f3:	89 f1                	mov    %esi,%ecx
   357f5:	c1 e9 06             	shr    $0x6,%ecx
   357f8:	83 c1 38             	add    $0x38,%ecx
   357fb:	8d 04 09             	lea    (%ecx,%ecx,1),%eax
   357fe:	e9 92 fe ff ff       	jmp    35695 <_malloc_r+0x485>
   35803:	81 fb 40 c5 03 00    	cmp    $0x3c540,%ebx
   35809:	0f 84 f2 fc ff ff    	je     35501 <_malloc_r+0x2f1>
   3580f:	8b 1d 48 c5 03 00    	mov    0x3c548,%ebx
   35815:	8b 53 04             	mov    0x4(%ebx),%edx
   35818:	83 e2 fc             	and    $0xfffffffc,%edx
   3581b:	e9 de fd ff ff       	jmp    355fe <_malloc_r+0x3ee>
   35820:	81 fe 54 01 00 00    	cmp    $0x154,%esi
   35826:	77 3c                	ja     35864 <_malloc_r+0x654>
   35828:	89 fe                	mov    %edi,%esi
   3582a:	c1 ee 0f             	shr    $0xf,%esi
   3582d:	83 c6 77             	add    $0x77,%esi
   35830:	8d 04 36             	lea    (%esi,%esi,1),%eax
   35833:	e9 99 fa ff ff       	jmp    352d1 <_malloc_r+0xc1>
   35838:	c7 41 04 01 00 00 00 	movl   $0x1,0x4(%ecx)
   3583f:	89 cb                	mov    %ecx,%ebx
   35841:	31 d2                	xor    %edx,%edx
   35843:	e9 b6 fd ff ff       	jmp    355fe <_malloc_r+0x3ee>
   35848:	c1 f9 02             	sar    $0x2,%ecx
   3584b:	b8 01 00 00 00       	mov    $0x1,%eax
   35850:	d3 e0                	shl    %cl,%eax
   35852:	89 d1                	mov    %edx,%ecx
   35854:	0b 05 44 c5 03 00    	or     0x3c544,%eax
   3585a:	a3 44 c5 03 00       	mov    %eax,0x3c544
   3585f:	e9 5d fe ff ff       	jmp    356c1 <_malloc_r+0x4b1>
   35864:	81 fe 54 05 00 00    	cmp    $0x554,%esi
   3586a:	77 47                	ja     358b3 <_malloc_r+0x6a3>
   3586c:	89 fe                	mov    %edi,%esi
   3586e:	c1 ee 12             	shr    $0x12,%esi
   35871:	83 c6 7c             	add    $0x7c,%esi
   35874:	8d 04 36             	lea    (%esi,%esi,1),%eax
   35877:	e9 55 fa ff ff       	jmp    352d1 <_malloc_r+0xc1>
   3587c:	8b 45 08             	mov    0x8(%ebp),%eax
   3587f:	83 c3 08             	add    $0x8,%ebx
   35882:	89 5c 24 04          	mov    %ebx,0x4(%esp)
   35886:	89 04 24             	mov    %eax,(%esp)
   35889:	e8 c2 22 00 00       	call   37b50 <_free_r>
   3588e:	8b 15 20 f0 06 00    	mov    0x6f020,%edx
   35894:	a1 48 c5 03 00       	mov    0x3c548,%eax
   35899:	e9 3c fd ff ff       	jmp    355da <_malloc_r+0x3ca>
   3589e:	83 f9 54             	cmp    $0x54,%ecx
   358a1:	77 58                	ja     358fb <_malloc_r+0x6eb>
   358a3:	89 f1                	mov    %esi,%ecx
   358a5:	c1 e9 0c             	shr    $0xc,%ecx
   358a8:	83 c1 6e             	add    $0x6e,%ecx
   358ab:	8d 04 09             	lea    (%ecx,%ecx,1),%eax
   358ae:	e9 e2 fd ff ff       	jmp    35695 <_malloc_r+0x485>
   358b3:	b8 fc 00 00 00       	mov    $0xfc,%eax
   358b8:	be 7e 00 00 00       	mov    $0x7e,%esi
   358bd:	e9 0f fa ff ff       	jmp    352d1 <_malloc_r+0xc1>
   358c2:	f7 45 e4 ff 0f 00 00 	testl  $0xfff,-0x1c(%ebp)
   358c9:	0f 85 4a fc ff ff    	jne    35519 <_malloc_r+0x309>
   358cf:	8b 4d e0             	mov    -0x20(%ebp),%ecx
   358d2:	a1 48 c5 03 00       	mov    0x3c548,%eax
   358d7:	01 f1                	add    %esi,%ecx
   358d9:	83 c9 01             	or     $0x1,%ecx
   358dc:	89 48 04             	mov    %ecx,0x4(%eax)
   358df:	e9 f6 fc ff ff       	jmp    355da <_malloc_r+0x3ca>
   358e4:	b8 01 00 00 00       	mov    $0x1,%eax
   358e9:	31 d2                	xor    %edx,%edx
   358eb:	e9 91 fc ff ff       	jmp    35581 <_malloc_r+0x371>
   358f0:	89 0d 20 c5 03 00    	mov    %ecx,0x3c520
   358f6:	e9 37 fc ff ff       	jmp    35532 <_malloc_r+0x322>
   358fb:	81 f9 54 01 00 00    	cmp    $0x154,%ecx
   35901:	77 10                	ja     35913 <_malloc_r+0x703>
   35903:	89 f1                	mov    %esi,%ecx
   35905:	c1 e9 0f             	shr    $0xf,%ecx
   35908:	83 c1 77             	add    $0x77,%ecx
   3590b:	8d 04 09             	lea    (%ecx,%ecx,1),%eax
   3590e:	e9 82 fd ff ff       	jmp    35695 <_malloc_r+0x485>
   35913:	81 f9 54 05 00 00    	cmp    $0x554,%ecx
   35919:	77 10                	ja     3592b <_malloc_r+0x71b>
   3591b:	89 f1                	mov    %esi,%ecx
   3591d:	c1 e9 12             	shr    $0x12,%ecx
   35920:	83 c1 7c             	add    $0x7c,%ecx
   35923:	8d 04 09             	lea    (%ecx,%ecx,1),%eax
   35926:	e9 6a fd ff ff       	jmp    35695 <_malloc_r+0x485>
   3592b:	b8 fc 00 00 00       	mov    $0xfc,%eax
   35930:	b9 7e 00 00 00       	mov    $0x7e,%ecx
   35935:	e9 5b fd ff ff       	jmp    35695 <_malloc_r+0x485>
   3593a:	a1 44 c5 03 00       	mov    0x3c544,%eax
   3593f:	e9 20 fe ff ff       	jmp    35764 <_malloc_r+0x554>
   35944:	8b 45 e0             	mov    -0x20(%ebp),%eax
   35947:	89 45 e4             	mov    %eax,-0x1c(%ebp)
   3594a:	e9 88 fa ff ff       	jmp    353d7 <_malloc_r+0x1c7>
   3594f:	90                   	nop

00035950 <memchr>:
   35950:	55                   	push   %ebp
   35951:	89 e5                	mov    %esp,%ebp
   35953:	57                   	push   %edi
   35954:	0f b6 45 0c          	movzbl 0xc(%ebp),%eax
   35958:	8b 4d 10             	mov    0x10(%ebp),%ecx
   3595b:	8b 7d 08             	mov    0x8(%ebp),%edi
   3595e:	31 d2                	xor    %edx,%edx
   35960:	85 c9                	test   %ecx,%ecx
   35962:	74 79                	je     359dd <L20>
   35964:	f7 c7 03 00 00 00    	test   $0x3,%edi
   3596a:	74 28                	je     35994 <L5>
   3596c:	3a 07                	cmp    (%edi),%al
   3596e:	74 6a                	je     359da <L15>
   35970:	47                   	inc    %edi
   35971:	49                   	dec    %ecx
   35972:	74 69                	je     359dd <L20>
   35974:	f7 c7 03 00 00 00    	test   $0x3,%edi
   3597a:	74 18                	je     35994 <L5>
   3597c:	3a 07                	cmp    (%edi),%al
   3597e:	74 5a                	je     359da <L15>
   35980:	47                   	inc    %edi
   35981:	49                   	dec    %ecx
   35982:	74 59                	je     359dd <L20>
   35984:	f7 c7 03 00 00 00    	test   $0x3,%edi
   3598a:	74 08                	je     35994 <L5>
   3598c:	3a 07                	cmp    (%edi),%al
   3598e:	74 4a                	je     359da <L15>
   35990:	47                   	inc    %edi
   35991:	49                   	dec    %ecx
   35992:	74 49                	je     359dd <L20>

00035994 <L5>:
   35994:	88 c4                	mov    %al,%ah
   35996:	89 c2                	mov    %eax,%edx
   35998:	c1 e2 10             	shl    $0x10,%edx
   3599b:	09 d0                	or     %edx,%eax
   3599d:	53                   	push   %ebx
   3599e:	66 90                	xchg   %ax,%ax

000359a0 <L8>:
   359a0:	83 e9 04             	sub    $0x4,%ecx
   359a3:	72 1c                	jb     359c1 <L9>
   359a5:	8b 17                	mov    (%edi),%edx
   359a7:	83 c7 04             	add    $0x4,%edi
   359aa:	31 c2                	xor    %eax,%edx
   359ac:	8d 9a ff fe fe fe    	lea    -0x1010101(%edx),%ebx
   359b2:	f7 d2                	not    %edx
   359b4:	21 d3                	and    %edx,%ebx
   359b6:	f7 c3 80 80 80 80    	test   $0x80808080,%ebx
   359bc:	74 e2                	je     359a0 <L8>
   359be:	83 ef 04             	sub    $0x4,%edi

000359c1 <L9>:
   359c1:	5b                   	pop    %ebx
   359c2:	31 d2                	xor    %edx,%edx
   359c4:	83 c1 04             	add    $0x4,%ecx
   359c7:	74 14                	je     359dd <L20>
   359c9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

000359d0 <L10>:
   359d0:	3a 07                	cmp    (%edi),%al
   359d2:	74 06                	je     359da <L15>
   359d4:	47                   	inc    %edi
   359d5:	49                   	dec    %ecx
   359d6:	75 f8                	jne    359d0 <L10>
   359d8:	31 ff                	xor    %edi,%edi

000359da <L15>:
   359da:	4a                   	dec    %edx
   359db:	21 fa                	and    %edi,%edx

000359dd <L20>:
   359dd:	89 d0                	mov    %edx,%eax
   359df:	8d 65 fc             	lea    -0x4(%ebp),%esp
   359e2:	5f                   	pop    %edi
   359e3:	c9                   	leave  
   359e4:	c3                   	ret    
   359e5:	66 90                	xchg   %ax,%ax
   359e7:	66 90                	xchg   %ax,%ax
   359e9:	66 90                	xchg   %ax,%ax
   359eb:	66 90                	xchg   %ax,%ax
   359ed:	66 90                	xchg   %ax,%ax
   359ef:	90                   	nop

000359f0 <__malloc_lock>:
   359f0:	55                   	push   %ebp
   359f1:	89 e5                	mov    %esp,%ebp
   359f3:	5d                   	pop    %ebp
   359f4:	c3                   	ret    
   359f5:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   359f9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

00035a00 <__malloc_unlock>:
   35a00:	55                   	push   %ebp
   35a01:	89 e5                	mov    %esp,%ebp
   35a03:	5d                   	pop    %ebp
   35a04:	c3                   	ret    
   35a05:	66 90                	xchg   %ax,%ax
   35a07:	66 90                	xchg   %ax,%ax
   35a09:	66 90                	xchg   %ax,%ax
   35a0b:	66 90                	xchg   %ax,%ax
   35a0d:	66 90                	xchg   %ax,%ax
   35a0f:	90                   	nop

00035a10 <_Balloc>:
   35a10:	55                   	push   %ebp
   35a11:	89 e5                	mov    %esp,%ebp
   35a13:	57                   	push   %edi
   35a14:	56                   	push   %esi
   35a15:	53                   	push   %ebx
   35a16:	83 ec 1c             	sub    $0x1c,%esp
   35a19:	8b 75 08             	mov    0x8(%ebp),%esi
   35a1c:	8b 5d 0c             	mov    0xc(%ebp),%ebx
   35a1f:	8b 46 4c             	mov    0x4c(%esi),%eax
   35a22:	85 c0                	test   %eax,%eax
   35a24:	74 2a                	je     35a50 <_Balloc+0x40>
   35a26:	8d 14 98             	lea    (%eax,%ebx,4),%edx
   35a29:	8b 02                	mov    (%edx),%eax
   35a2b:	85 c0                	test   %eax,%eax
   35a2d:	74 49                	je     35a78 <_Balloc+0x68>
   35a2f:	8b 08                	mov    (%eax),%ecx
   35a31:	89 0a                	mov    %ecx,(%edx)
   35a33:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
   35a3a:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
   35a41:	83 c4 1c             	add    $0x1c,%esp
   35a44:	5b                   	pop    %ebx
   35a45:	5e                   	pop    %esi
   35a46:	5f                   	pop    %edi
   35a47:	5d                   	pop    %ebp
   35a48:	c3                   	ret    
   35a49:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   35a50:	c7 44 24 08 21 00 00 	movl   $0x21,0x8(%esp)
   35a57:	00 
   35a58:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
   35a5f:	00 
   35a60:	89 34 24             	mov    %esi,(%esp)
   35a63:	e8 38 1f 00 00       	call   379a0 <_calloc_r>
   35a68:	85 c0                	test   %eax,%eax
   35a6a:	89 46 4c             	mov    %eax,0x4c(%esi)
   35a6d:	75 b7                	jne    35a26 <_Balloc+0x16>
   35a6f:	31 c0                	xor    %eax,%eax
   35a71:	eb ce                	jmp    35a41 <_Balloc+0x31>
   35a73:	90                   	nop
   35a74:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   35a78:	89 d9                	mov    %ebx,%ecx
   35a7a:	bf 01 00 00 00       	mov    $0x1,%edi
   35a7f:	d3 e7                	shl    %cl,%edi
   35a81:	8d 04 bd 14 00 00 00 	lea    0x14(,%edi,4),%eax
   35a88:	89 44 24 08          	mov    %eax,0x8(%esp)
   35a8c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
   35a93:	00 
   35a94:	89 34 24             	mov    %esi,(%esp)
   35a97:	e8 04 1f 00 00       	call   379a0 <_calloc_r>
   35a9c:	85 c0                	test   %eax,%eax
   35a9e:	74 cf                	je     35a6f <_Balloc+0x5f>
   35aa0:	89 58 04             	mov    %ebx,0x4(%eax)
   35aa3:	89 78 08             	mov    %edi,0x8(%eax)
   35aa6:	eb 8b                	jmp    35a33 <_Balloc+0x23>
   35aa8:	90                   	nop
   35aa9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

00035ab0 <_Bfree>:
   35ab0:	55                   	push   %ebp
   35ab1:	89 e5                	mov    %esp,%ebp
   35ab3:	8b 45 0c             	mov    0xc(%ebp),%eax
   35ab6:	85 c0                	test   %eax,%eax
   35ab8:	74 12                	je     35acc <_Bfree+0x1c>
   35aba:	8b 55 08             	mov    0x8(%ebp),%edx
   35abd:	8b 48 04             	mov    0x4(%eax),%ecx
   35ac0:	8b 52 4c             	mov    0x4c(%edx),%edx
   35ac3:	8d 14 8a             	lea    (%edx,%ecx,4),%edx
   35ac6:	8b 0a                	mov    (%edx),%ecx
   35ac8:	89 08                	mov    %ecx,(%eax)
   35aca:	89 02                	mov    %eax,(%edx)
   35acc:	5d                   	pop    %ebp
   35acd:	c3                   	ret    
   35ace:	66 90                	xchg   %ax,%ax

00035ad0 <__multadd>:
   35ad0:	55                   	push   %ebp
   35ad1:	89 e5                	mov    %esp,%ebp
   35ad3:	57                   	push   %edi
   35ad4:	56                   	push   %esi
   35ad5:	53                   	push   %ebx
   35ad6:	83 ec 2c             	sub    $0x2c,%esp
   35ad9:	8b 45 0c             	mov    0xc(%ebp),%eax
   35adc:	8b 5d 14             	mov    0x14(%ebp),%ebx
   35adf:	8b 40 10             	mov    0x10(%eax),%eax
   35ae2:	89 45 e4             	mov    %eax,-0x1c(%ebp)
   35ae5:	8b 45 0c             	mov    0xc(%ebp),%eax
   35ae8:	8d 78 14             	lea    0x14(%eax),%edi
   35aeb:	31 c0                	xor    %eax,%eax
   35aed:	8d 76 00             	lea    0x0(%esi),%esi
   35af0:	8b 0c 87             	mov    (%edi,%eax,4),%ecx
   35af3:	0f b7 d1             	movzwl %cx,%edx
   35af6:	0f af 55 10          	imul   0x10(%ebp),%edx
   35afa:	c1 e9 10             	shr    $0x10,%ecx
   35afd:	0f af 4d 10          	imul   0x10(%ebp),%ecx
   35b01:	01 da                	add    %ebx,%edx
   35b03:	89 d3                	mov    %edx,%ebx
   35b05:	0f b7 d2             	movzwl %dx,%edx
   35b08:	c1 eb 10             	shr    $0x10,%ebx
   35b0b:	01 d9                	add    %ebx,%ecx
   35b0d:	89 ce                	mov    %ecx,%esi
   35b0f:	c1 e1 10             	shl    $0x10,%ecx
   35b12:	01 d1                	add    %edx,%ecx
   35b14:	c1 ee 10             	shr    $0x10,%esi
   35b17:	89 0c 87             	mov    %ecx,(%edi,%eax,4)
   35b1a:	83 c0 01             	add    $0x1,%eax
   35b1d:	89 f3                	mov    %esi,%ebx
   35b1f:	39 45 e4             	cmp    %eax,-0x1c(%ebp)
   35b22:	7f cc                	jg     35af0 <__multadd+0x20>
   35b24:	85 f6                	test   %esi,%esi
   35b26:	74 1b                	je     35b43 <__multadd+0x73>
   35b28:	8b 45 0c             	mov    0xc(%ebp),%eax
   35b2b:	8b 7d e4             	mov    -0x1c(%ebp),%edi
   35b2e:	3b 78 08             	cmp    0x8(%eax),%edi
   35b31:	7d 1d                	jge    35b50 <__multadd+0x80>
   35b33:	8b 7d 0c             	mov    0xc(%ebp),%edi
   35b36:	8b 45 e4             	mov    -0x1c(%ebp),%eax
   35b39:	89 74 87 14          	mov    %esi,0x14(%edi,%eax,4)
   35b3d:	83 c0 01             	add    $0x1,%eax
   35b40:	89 47 10             	mov    %eax,0x10(%edi)
   35b43:	8b 45 0c             	mov    0xc(%ebp),%eax
   35b46:	83 c4 2c             	add    $0x2c,%esp
   35b49:	5b                   	pop    %ebx
   35b4a:	5e                   	pop    %esi
   35b4b:	5f                   	pop    %edi
   35b4c:	5d                   	pop    %ebp
   35b4d:	c3                   	ret    
   35b4e:	66 90                	xchg   %ax,%ax
   35b50:	8b 40 04             	mov    0x4(%eax),%eax
   35b53:	89 45 e0             	mov    %eax,-0x20(%ebp)
   35b56:	83 c0 01             	add    $0x1,%eax
   35b59:	89 44 24 04          	mov    %eax,0x4(%esp)
   35b5d:	8b 45 08             	mov    0x8(%ebp),%eax
   35b60:	89 04 24             	mov    %eax,(%esp)
   35b63:	e8 a8 fe ff ff       	call   35a10 <_Balloc>
   35b68:	89 c3                	mov    %eax,%ebx
   35b6a:	8b 45 0c             	mov    0xc(%ebp),%eax
   35b6d:	8b 40 10             	mov    0x10(%eax),%eax
   35b70:	8d 04 85 08 00 00 00 	lea    0x8(,%eax,4),%eax
   35b77:	89 44 24 08          	mov    %eax,0x8(%esp)
   35b7b:	8b 45 0c             	mov    0xc(%ebp),%eax
   35b7e:	83 c0 0c             	add    $0xc,%eax
   35b81:	89 44 24 04          	mov    %eax,0x4(%esp)
   35b85:	8d 43 0c             	lea    0xc(%ebx),%eax
   35b88:	89 04 24             	mov    %eax,(%esp)
   35b8b:	e8 c4 c0 ff ff       	call   31c54 <memcpy>
   35b90:	8b 45 0c             	mov    0xc(%ebp),%eax
   35b93:	8b 7d 0c             	mov    0xc(%ebp),%edi
   35b96:	89 5d 0c             	mov    %ebx,0xc(%ebp)
   35b99:	8b 50 04             	mov    0x4(%eax),%edx
   35b9c:	8b 45 08             	mov    0x8(%ebp),%eax
   35b9f:	8b 40 4c             	mov    0x4c(%eax),%eax
   35ba2:	8d 04 90             	lea    (%eax,%edx,4),%eax
   35ba5:	8b 10                	mov    (%eax),%edx
   35ba7:	89 17                	mov    %edx,(%edi)
   35ba9:	89 38                	mov    %edi,(%eax)
   35bab:	eb 86                	jmp    35b33 <__multadd+0x63>
   35bad:	8d 76 00             	lea    0x0(%esi),%esi

00035bb0 <__s2b>:
   35bb0:	55                   	push   %ebp
   35bb1:	ba 39 8e e3 38       	mov    $0x38e38e39,%edx
   35bb6:	89 e5                	mov    %esp,%ebp
   35bb8:	57                   	push   %edi
   35bb9:	56                   	push   %esi
   35bba:	53                   	push   %ebx
   35bbb:	83 ec 2c             	sub    $0x2c,%esp
   35bbe:	8b 45 14             	mov    0x14(%ebp),%eax
   35bc1:	8b 5d 08             	mov    0x8(%ebp),%ebx
   35bc4:	8b 75 0c             	mov    0xc(%ebp),%esi
   35bc7:	8d 48 08             	lea    0x8(%eax),%ecx
   35bca:	89 c8                	mov    %ecx,%eax
   35bcc:	f7 ea                	imul   %edx
   35bce:	c1 f9 1f             	sar    $0x1f,%ecx
   35bd1:	d1 fa                	sar    %edx
   35bd3:	29 ca                	sub    %ecx,%edx
   35bd5:	83 fa 01             	cmp    $0x1,%edx
   35bd8:	0f 8e be 00 00 00    	jle    35c9c <__s2b+0xec>
   35bde:	b8 01 00 00 00       	mov    $0x1,%eax
   35be3:	31 c9                	xor    %ecx,%ecx
   35be5:	8d 76 00             	lea    0x0(%esi),%esi
   35be8:	01 c0                	add    %eax,%eax
   35bea:	83 c1 01             	add    $0x1,%ecx
   35bed:	39 c2                	cmp    %eax,%edx
   35bef:	7f f7                	jg     35be8 <__s2b+0x38>
   35bf1:	89 4c 24 04          	mov    %ecx,0x4(%esp)
   35bf5:	89 1c 24             	mov    %ebx,(%esp)
   35bf8:	e8 13 fe ff ff       	call   35a10 <_Balloc>
   35bfd:	8b 55 18             	mov    0x18(%ebp),%edx
   35c00:	83 7d 10 09          	cmpl   $0x9,0x10(%ebp)
   35c04:	89 50 14             	mov    %edx,0x14(%eax)
   35c07:	c7 40 10 01 00 00 00 	movl   $0x1,0x10(%eax)
   35c0e:	0f 8e 7c 00 00 00    	jle    35c90 <__s2b+0xe0>
   35c14:	8d 4e 09             	lea    0x9(%esi),%ecx
   35c17:	03 75 10             	add    0x10(%ebp),%esi
   35c1a:	89 cf                	mov    %ecx,%edi
   35c1c:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
   35c1f:	90                   	nop
   35c20:	83 c7 01             	add    $0x1,%edi
   35c23:	0f be 57 ff          	movsbl -0x1(%edi),%edx
   35c27:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
   35c2e:	00 
   35c2f:	89 44 24 04          	mov    %eax,0x4(%esp)
   35c33:	89 1c 24             	mov    %ebx,(%esp)
   35c36:	83 ea 30             	sub    $0x30,%edx
   35c39:	89 54 24 0c          	mov    %edx,0xc(%esp)
   35c3d:	e8 8e fe ff ff       	call   35ad0 <__multadd>
   35c42:	39 f7                	cmp    %esi,%edi
   35c44:	75 da                	jne    35c20 <__s2b+0x70>
   35c46:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
   35c49:	8b 7d 10             	mov    0x10(%ebp),%edi
   35c4c:	8d 74 39 f8          	lea    -0x8(%ecx,%edi,1),%esi
   35c50:	8b 4d 10             	mov    0x10(%ebp),%ecx
   35c53:	39 4d 14             	cmp    %ecx,0x14(%ebp)
   35c56:	7e 2e                	jle    35c86 <__s2b+0xd6>
   35c58:	8b 7d 14             	mov    0x14(%ebp),%edi
   35c5b:	29 cf                	sub    %ecx,%edi
   35c5d:	01 f7                	add    %esi,%edi
   35c5f:	90                   	nop
   35c60:	83 c6 01             	add    $0x1,%esi
   35c63:	0f be 56 ff          	movsbl -0x1(%esi),%edx
   35c67:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
   35c6e:	00 
   35c6f:	89 44 24 04          	mov    %eax,0x4(%esp)
   35c73:	89 1c 24             	mov    %ebx,(%esp)
   35c76:	83 ea 30             	sub    $0x30,%edx
   35c79:	89 54 24 0c          	mov    %edx,0xc(%esp)
   35c7d:	e8 4e fe ff ff       	call   35ad0 <__multadd>
   35c82:	39 fe                	cmp    %edi,%esi
   35c84:	75 da                	jne    35c60 <__s2b+0xb0>
   35c86:	83 c4 2c             	add    $0x2c,%esp
   35c89:	5b                   	pop    %ebx
   35c8a:	5e                   	pop    %esi
   35c8b:	5f                   	pop    %edi
   35c8c:	5d                   	pop    %ebp
   35c8d:	c3                   	ret    
   35c8e:	66 90                	xchg   %ax,%ax
   35c90:	83 c6 0a             	add    $0xa,%esi
   35c93:	c7 45 10 09 00 00 00 	movl   $0x9,0x10(%ebp)
   35c9a:	eb b4                	jmp    35c50 <__s2b+0xa0>
   35c9c:	31 c9                	xor    %ecx,%ecx
   35c9e:	e9 4e ff ff ff       	jmp    35bf1 <__s2b+0x41>
   35ca3:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   35ca9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

00035cb0 <__hi0bits>:
   35cb0:	55                   	push   %ebp
   35cb1:	31 c9                	xor    %ecx,%ecx
   35cb3:	89 e5                	mov    %esp,%ebp
   35cb5:	8b 55 08             	mov    0x8(%ebp),%edx
   35cb8:	f7 c2 00 00 ff ff    	test   $0xffff0000,%edx
   35cbe:	75 05                	jne    35cc5 <__hi0bits+0x15>
   35cc0:	c1 e2 10             	shl    $0x10,%edx
   35cc3:	b1 10                	mov    $0x10,%cl
   35cc5:	f7 c2 00 00 00 ff    	test   $0xff000000,%edx
   35ccb:	75 06                	jne    35cd3 <__hi0bits+0x23>
   35ccd:	83 c1 08             	add    $0x8,%ecx
   35cd0:	c1 e2 08             	shl    $0x8,%edx
   35cd3:	f7 c2 00 00 00 f0    	test   $0xf0000000,%edx
   35cd9:	75 06                	jne    35ce1 <__hi0bits+0x31>
   35cdb:	83 c1 04             	add    $0x4,%ecx
   35cde:	c1 e2 04             	shl    $0x4,%edx
   35ce1:	f7 c2 00 00 00 c0    	test   $0xc0000000,%edx
   35ce7:	75 06                	jne    35cef <__hi0bits+0x3f>
   35ce9:	83 c1 02             	add    $0x2,%ecx
   35cec:	c1 e2 02             	shl    $0x2,%edx
   35cef:	85 d2                	test   %edx,%edx
   35cf1:	89 c8                	mov    %ecx,%eax
   35cf3:	78 0d                	js     35d02 <__hi0bits+0x52>
   35cf5:	81 e2 00 00 00 40    	and    $0x40000000,%edx
   35cfb:	b8 20 00 00 00       	mov    $0x20,%eax
   35d00:	75 06                	jne    35d08 <__hi0bits+0x58>
   35d02:	5d                   	pop    %ebp
   35d03:	c3                   	ret    
   35d04:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   35d08:	8d 41 01             	lea    0x1(%ecx),%eax
   35d0b:	5d                   	pop    %ebp
   35d0c:	c3                   	ret    
   35d0d:	8d 76 00             	lea    0x0(%esi),%esi

00035d10 <__lo0bits>:
   35d10:	55                   	push   %ebp
   35d11:	89 e5                	mov    %esp,%ebp
   35d13:	53                   	push   %ebx
   35d14:	8b 5d 08             	mov    0x8(%ebp),%ebx
   35d17:	8b 13                	mov    (%ebx),%edx
   35d19:	f6 c2 07             	test   $0x7,%dl
   35d1c:	74 1a                	je     35d38 <__lo0bits+0x28>
   35d1e:	31 c0                	xor    %eax,%eax
   35d20:	f6 c2 01             	test   $0x1,%dl
   35d23:	75 0f                	jne    35d34 <__lo0bits+0x24>
   35d25:	f6 c2 02             	test   $0x2,%dl
   35d28:	75 56                	jne    35d80 <__lo0bits+0x70>
   35d2a:	c1 ea 02             	shr    $0x2,%edx
   35d2d:	b8 02 00 00 00       	mov    $0x2,%eax
   35d32:	89 13                	mov    %edx,(%ebx)
   35d34:	5b                   	pop    %ebx
   35d35:	5d                   	pop    %ebp
   35d36:	c3                   	ret    
   35d37:	90                   	nop
   35d38:	31 c9                	xor    %ecx,%ecx
   35d3a:	66 85 d2             	test   %dx,%dx
   35d3d:	75 05                	jne    35d44 <__lo0bits+0x34>
   35d3f:	c1 ea 10             	shr    $0x10,%edx
   35d42:	b1 10                	mov    $0x10,%cl
   35d44:	84 d2                	test   %dl,%dl
   35d46:	75 06                	jne    35d4e <__lo0bits+0x3e>
   35d48:	83 c1 08             	add    $0x8,%ecx
   35d4b:	c1 ea 08             	shr    $0x8,%edx
   35d4e:	f6 c2 0f             	test   $0xf,%dl
   35d51:	75 06                	jne    35d59 <__lo0bits+0x49>
   35d53:	83 c1 04             	add    $0x4,%ecx
   35d56:	c1 ea 04             	shr    $0x4,%edx
   35d59:	f6 c2 03             	test   $0x3,%dl
   35d5c:	75 06                	jne    35d64 <__lo0bits+0x54>
   35d5e:	83 c1 02             	add    $0x2,%ecx
   35d61:	c1 ea 02             	shr    $0x2,%edx
   35d64:	f6 c2 01             	test   $0x1,%dl
   35d67:	75 0c                	jne    35d75 <__lo0bits+0x65>
   35d69:	d1 ea                	shr    %edx
   35d6b:	b8 20 00 00 00       	mov    $0x20,%eax
   35d70:	74 c2                	je     35d34 <__lo0bits+0x24>
   35d72:	83 c1 01             	add    $0x1,%ecx
   35d75:	89 13                	mov    %edx,(%ebx)
   35d77:	89 c8                	mov    %ecx,%eax
   35d79:	5b                   	pop    %ebx
   35d7a:	5d                   	pop    %ebp
   35d7b:	c3                   	ret    
   35d7c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   35d80:	d1 ea                	shr    %edx
   35d82:	b0 01                	mov    $0x1,%al
   35d84:	89 13                	mov    %edx,(%ebx)
   35d86:	5b                   	pop    %ebx
   35d87:	5d                   	pop    %ebp
   35d88:	c3                   	ret    
   35d89:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

00035d90 <__i2b>:
   35d90:	55                   	push   %ebp
   35d91:	89 e5                	mov    %esp,%ebp
   35d93:	83 ec 18             	sub    $0x18,%esp
   35d96:	8b 45 08             	mov    0x8(%ebp),%eax
   35d99:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
   35da0:	00 
   35da1:	89 04 24             	mov    %eax,(%esp)
   35da4:	e8 67 fc ff ff       	call   35a10 <_Balloc>
   35da9:	8b 55 0c             	mov    0xc(%ebp),%edx
   35dac:	89 50 14             	mov    %edx,0x14(%eax)
   35daf:	c7 40 10 01 00 00 00 	movl   $0x1,0x10(%eax)
   35db6:	c9                   	leave  
   35db7:	c3                   	ret    
   35db8:	90                   	nop
   35db9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

00035dc0 <__multiply>:
   35dc0:	55                   	push   %ebp
   35dc1:	89 e5                	mov    %esp,%ebp
   35dc3:	57                   	push   %edi
   35dc4:	56                   	push   %esi
   35dc5:	53                   	push   %ebx
   35dc6:	83 ec 3c             	sub    $0x3c,%esp
   35dc9:	8b 75 0c             	mov    0xc(%ebp),%esi
   35dcc:	8b 45 10             	mov    0x10(%ebp),%eax
   35dcf:	8b 7e 10             	mov    0x10(%esi),%edi
   35dd2:	8b 58 10             	mov    0x10(%eax),%ebx
   35dd5:	39 df                	cmp    %ebx,%edi
   35dd7:	7d 0e                	jge    35de7 <__multiply+0x27>
   35dd9:	89 f8                	mov    %edi,%eax
   35ddb:	89 df                	mov    %ebx,%edi
   35ddd:	89 c3                	mov    %eax,%ebx
   35ddf:	89 f0                	mov    %esi,%eax
   35de1:	8b 75 10             	mov    0x10(%ebp),%esi
   35de4:	89 45 10             	mov    %eax,0x10(%ebp)
   35de7:	8d 04 1f             	lea    (%edi,%ebx,1),%eax
   35dea:	3b 46 08             	cmp    0x8(%esi),%eax
   35ded:	89 45 c8             	mov    %eax,-0x38(%ebp)
   35df0:	0f 9f c0             	setg   %al
   35df3:	0f b6 c0             	movzbl %al,%eax
   35df6:	03 46 04             	add    0x4(%esi),%eax
   35df9:	89 44 24 04          	mov    %eax,0x4(%esp)
   35dfd:	8b 45 08             	mov    0x8(%ebp),%eax
   35e00:	89 04 24             	mov    %eax,(%esp)
   35e03:	e8 08 fc ff ff       	call   35a10 <_Balloc>
   35e08:	8b 55 c8             	mov    -0x38(%ebp),%edx
   35e0b:	89 45 c0             	mov    %eax,-0x40(%ebp)
   35e0e:	8d 40 14             	lea    0x14(%eax),%eax
   35e11:	8d 14 90             	lea    (%eax,%edx,4),%edx
   35e14:	89 d1                	mov    %edx,%ecx
   35e16:	39 c8                	cmp    %ecx,%eax
   35e18:	89 45 d4             	mov    %eax,-0x2c(%ebp)
   35e1b:	89 55 c4             	mov    %edx,-0x3c(%ebp)
   35e1e:	73 15                	jae    35e35 <__multiply+0x75>
   35e20:	8b 55 c4             	mov    -0x3c(%ebp),%edx
   35e23:	90                   	nop
   35e24:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   35e28:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
   35e2e:	83 c0 04             	add    $0x4,%eax
   35e31:	39 c2                	cmp    %eax,%edx
   35e33:	77 f3                	ja     35e28 <__multiply+0x68>
   35e35:	8d 46 14             	lea    0x14(%esi),%eax
   35e38:	89 45 d0             	mov    %eax,-0x30(%ebp)
   35e3b:	8d 04 b8             	lea    (%eax,%edi,4),%eax
   35e3e:	89 45 dc             	mov    %eax,-0x24(%ebp)
   35e41:	8b 45 10             	mov    0x10(%ebp),%eax
   35e44:	83 c0 14             	add    $0x14,%eax
   35e47:	8d 3c 98             	lea    (%eax,%ebx,4),%edi
   35e4a:	39 f8                	cmp    %edi,%eax
   35e4c:	89 45 d8             	mov    %eax,-0x28(%ebp)
   35e4f:	89 7d cc             	mov    %edi,-0x34(%ebp)
   35e52:	0f 83 e8 00 00 00    	jae    35f40 <__multiply+0x180>
   35e58:	8b 45 d8             	mov    -0x28(%ebp),%eax
   35e5b:	8b 00                	mov    (%eax),%eax
   35e5d:	0f b7 f8             	movzwl %ax,%edi
   35e60:	85 ff                	test   %edi,%edi
   35e62:	89 7d e4             	mov    %edi,-0x1c(%ebp)
   35e65:	74 5a                	je     35ec1 <__multiply+0x101>
   35e67:	8b 55 d4             	mov    -0x2c(%ebp),%edx
   35e6a:	31 db                	xor    %ebx,%ebx
   35e6c:	8b 75 d0             	mov    -0x30(%ebp),%esi
   35e6f:	eb 09                	jmp    35e7a <__multiply+0xba>
   35e71:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   35e78:	89 fa                	mov    %edi,%edx
   35e7a:	8b 0e                	mov    (%esi),%ecx
   35e7c:	83 c6 04             	add    $0x4,%esi
   35e7f:	0f b7 3a             	movzwl (%edx),%edi
   35e82:	0f b7 c1             	movzwl %cx,%eax
   35e85:	0f af 45 e4          	imul   -0x1c(%ebp),%eax
   35e89:	c1 e9 10             	shr    $0x10,%ecx
   35e8c:	0f af 4d e4          	imul   -0x1c(%ebp),%ecx
   35e90:	01 f8                	add    %edi,%eax
   35e92:	01 d8                	add    %ebx,%eax
   35e94:	8b 1a                	mov    (%edx),%ebx
   35e96:	8d 7a 04             	lea    0x4(%edx),%edi
   35e99:	c1 eb 10             	shr    $0x10,%ebx
   35e9c:	01 d9                	add    %ebx,%ecx
   35e9e:	89 c3                	mov    %eax,%ebx
   35ea0:	c1 eb 10             	shr    $0x10,%ebx
   35ea3:	0f b7 c0             	movzwl %ax,%eax
   35ea6:	01 d9                	add    %ebx,%ecx
   35ea8:	89 cb                	mov    %ecx,%ebx
   35eaa:	c1 e1 10             	shl    $0x10,%ecx
   35ead:	09 c1                	or     %eax,%ecx
   35eaf:	c1 eb 10             	shr    $0x10,%ebx
   35eb2:	39 75 dc             	cmp    %esi,-0x24(%ebp)
   35eb5:	89 0a                	mov    %ecx,(%edx)
   35eb7:	77 bf                	ja     35e78 <__multiply+0xb8>
   35eb9:	8b 45 d8             	mov    -0x28(%ebp),%eax
   35ebc:	89 5a 04             	mov    %ebx,0x4(%edx)
   35ebf:	8b 00                	mov    (%eax),%eax
   35ec1:	c1 e8 10             	shr    $0x10,%eax
   35ec4:	85 c0                	test   %eax,%eax
   35ec6:	89 45 e4             	mov    %eax,-0x1c(%ebp)
   35ec9:	74 61                	je     35f2c <__multiply+0x16c>
   35ecb:	8b 45 d4             	mov    -0x2c(%ebp),%eax
   35ece:	31 ff                	xor    %edi,%edi
   35ed0:	89 fe                	mov    %edi,%esi
   35ed2:	8b 10                	mov    (%eax),%edx
   35ed4:	89 45 e0             	mov    %eax,-0x20(%ebp)
   35ed7:	8b 45 d0             	mov    -0x30(%ebp),%eax
   35eda:	89 d3                	mov    %edx,%ebx
   35edc:	eb 05                	jmp    35ee3 <__multiply+0x123>
   35ede:	66 90                	xchg   %ax,%ax
   35ee0:	89 4d e0             	mov    %ecx,-0x20(%ebp)
   35ee3:	0f b7 08             	movzwl (%eax),%ecx
   35ee6:	c1 eb 10             	shr    $0x10,%ebx
   35ee9:	0f b7 d2             	movzwl %dx,%edx
   35eec:	0f af 4d e4          	imul   -0x1c(%ebp),%ecx
   35ef0:	83 c0 04             	add    $0x4,%eax
   35ef3:	8d 3c 19             	lea    (%ecx,%ebx,1),%edi
   35ef6:	01 f7                	add    %esi,%edi
   35ef8:	8b 75 e0             	mov    -0x20(%ebp),%esi
   35efb:	89 fb                	mov    %edi,%ebx
   35efd:	c1 e3 10             	shl    $0x10,%ebx
   35f00:	09 d3                	or     %edx,%ebx
   35f02:	89 1e                	mov    %ebx,(%esi)
   35f04:	8b 5e 04             	mov    0x4(%esi),%ebx
   35f07:	8d 4e 04             	lea    0x4(%esi),%ecx
   35f0a:	0f b7 50 fe          	movzwl -0x2(%eax),%edx
   35f0e:	c1 ef 10             	shr    $0x10,%edi
   35f11:	0f af 55 e4          	imul   -0x1c(%ebp),%edx
   35f15:	0f b7 f3             	movzwl %bx,%esi
   35f18:	01 f2                	add    %esi,%edx
   35f1a:	01 fa                	add    %edi,%edx
   35f1c:	89 d6                	mov    %edx,%esi
   35f1e:	c1 ee 10             	shr    $0x10,%esi
   35f21:	39 45 dc             	cmp    %eax,-0x24(%ebp)
   35f24:	77 ba                	ja     35ee0 <__multiply+0x120>
   35f26:	8b 45 e0             	mov    -0x20(%ebp),%eax
   35f29:	89 50 04             	mov    %edx,0x4(%eax)
   35f2c:	83 45 d8 04          	addl   $0x4,-0x28(%ebp)
   35f30:	8b 45 d8             	mov    -0x28(%ebp),%eax
   35f33:	83 45 d4 04          	addl   $0x4,-0x2c(%ebp)
   35f37:	39 45 cc             	cmp    %eax,-0x34(%ebp)
   35f3a:	0f 87 18 ff ff ff    	ja     35e58 <__multiply+0x98>
   35f40:	8b 75 c8             	mov    -0x38(%ebp),%esi
   35f43:	85 f6                	test   %esi,%esi
   35f45:	7e 29                	jle    35f70 <__multiply+0x1b0>
   35f47:	8b 7d c4             	mov    -0x3c(%ebp),%edi
   35f4a:	8b 5f fc             	mov    -0x4(%edi),%ebx
   35f4d:	85 db                	test   %ebx,%ebx
   35f4f:	75 1f                	jne    35f70 <__multiply+0x1b0>
   35f51:	8b 55 c8             	mov    -0x38(%ebp),%edx
   35f54:	89 d0                	mov    %edx,%eax
   35f56:	c1 e0 02             	shl    $0x2,%eax
   35f59:	29 c7                	sub    %eax,%edi
   35f5b:	89 f8                	mov    %edi,%eax
   35f5d:	eb 09                	jmp    35f68 <__multiply+0x1a8>
   35f5f:	90                   	nop
   35f60:	8b 4c 90 fc          	mov    -0x4(%eax,%edx,4),%ecx
   35f64:	85 c9                	test   %ecx,%ecx
   35f66:	75 05                	jne    35f6d <__multiply+0x1ad>
   35f68:	83 ea 01             	sub    $0x1,%edx
   35f6b:	75 f3                	jne    35f60 <__multiply+0x1a0>
   35f6d:	89 55 c8             	mov    %edx,-0x38(%ebp)
   35f70:	8b 45 c0             	mov    -0x40(%ebp),%eax
   35f73:	8b 7d c8             	mov    -0x38(%ebp),%edi
   35f76:	89 78 10             	mov    %edi,0x10(%eax)
   35f79:	83 c4 3c             	add    $0x3c,%esp
   35f7c:	5b                   	pop    %ebx
   35f7d:	5e                   	pop    %esi
   35f7e:	5f                   	pop    %edi
   35f7f:	5d                   	pop    %ebp
   35f80:	c3                   	ret    
   35f81:	eb 0d                	jmp    35f90 <__pow5mult>
   35f83:	90                   	nop
   35f84:	90                   	nop
   35f85:	90                   	nop
   35f86:	90                   	nop
   35f87:	90                   	nop
   35f88:	90                   	nop
   35f89:	90                   	nop
   35f8a:	90                   	nop
   35f8b:	90                   	nop
   35f8c:	90                   	nop
   35f8d:	90                   	nop
   35f8e:	90                   	nop
   35f8f:	90                   	nop

00035f90 <__pow5mult>:
   35f90:	55                   	push   %ebp
   35f91:	89 e5                	mov    %esp,%ebp
   35f93:	57                   	push   %edi
   35f94:	56                   	push   %esi
   35f95:	53                   	push   %ebx
   35f96:	83 ec 2c             	sub    $0x2c,%esp
   35f99:	8b 5d 10             	mov    0x10(%ebp),%ebx
   35f9c:	8b 4d 08             	mov    0x8(%ebp),%ecx
   35f9f:	8b 7d 0c             	mov    0xc(%ebp),%edi
   35fa2:	89 d8                	mov    %ebx,%eax
   35fa4:	83 e0 03             	and    $0x3,%eax
   35fa7:	0f 85 a3 00 00 00    	jne    36050 <__pow5mult+0xc0>
   35fad:	c1 fb 02             	sar    $0x2,%ebx
   35fb0:	85 db                	test   %ebx,%ebx
   35fb2:	74 5c                	je     36010 <__pow5mult+0x80>
   35fb4:	8b 71 48             	mov    0x48(%ecx),%esi
   35fb7:	85 f6                	test   %esi,%esi
   35fb9:	0f 84 bd 00 00 00    	je     3607c <__pow5mult+0xec>
   35fbf:	f6 c3 01             	test   $0x1,%bl
   35fc2:	75 15                	jne    35fd9 <__pow5mult+0x49>
   35fc4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   35fc8:	d1 fb                	sar    %ebx
   35fca:	74 44                	je     36010 <__pow5mult+0x80>
   35fcc:	8b 06                	mov    (%esi),%eax
   35fce:	85 c0                	test   %eax,%eax
   35fd0:	74 4e                	je     36020 <__pow5mult+0x90>
   35fd2:	89 c6                	mov    %eax,%esi
   35fd4:	f6 c3 01             	test   $0x1,%bl
   35fd7:	74 ef                	je     35fc8 <__pow5mult+0x38>
   35fd9:	89 0c 24             	mov    %ecx,(%esp)
   35fdc:	89 74 24 08          	mov    %esi,0x8(%esp)
   35fe0:	89 7c 24 04          	mov    %edi,0x4(%esp)
   35fe4:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
   35fe7:	e8 d4 fd ff ff       	call   35dc0 <__multiply>
   35fec:	85 ff                	test   %edi,%edi
   35fee:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
   35ff1:	89 45 e0             	mov    %eax,-0x20(%ebp)
   35ff4:	74 52                	je     36048 <__pow5mult+0xb8>
   35ff6:	8b 57 04             	mov    0x4(%edi),%edx
   35ff9:	d1 fb                	sar    %ebx
   35ffb:	8b 41 4c             	mov    0x4c(%ecx),%eax
   35ffe:	8d 04 90             	lea    (%eax,%edx,4),%eax
   36001:	8b 10                	mov    (%eax),%edx
   36003:	89 17                	mov    %edx,(%edi)
   36005:	89 38                	mov    %edi,(%eax)
   36007:	8b 7d e0             	mov    -0x20(%ebp),%edi
   3600a:	75 c0                	jne    35fcc <__pow5mult+0x3c>
   3600c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   36010:	83 c4 2c             	add    $0x2c,%esp
   36013:	89 f8                	mov    %edi,%eax
   36015:	5b                   	pop    %ebx
   36016:	5e                   	pop    %esi
   36017:	5f                   	pop    %edi
   36018:	5d                   	pop    %ebp
   36019:	c3                   	ret    
   3601a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   36020:	89 74 24 08          	mov    %esi,0x8(%esp)
   36024:	89 74 24 04          	mov    %esi,0x4(%esp)
   36028:	89 0c 24             	mov    %ecx,(%esp)
   3602b:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
   3602e:	e8 8d fd ff ff       	call   35dc0 <__multiply>
   36033:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
   36036:	89 06                	mov    %eax,(%esi)
   36038:	89 c6                	mov    %eax,%esi
   3603a:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
   36040:	eb 92                	jmp    35fd4 <__pow5mult+0x44>
   36042:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   36048:	8b 7d e0             	mov    -0x20(%ebp),%edi
   3604b:	e9 78 ff ff ff       	jmp    35fc8 <__pow5mult+0x38>
   36050:	8b 04 85 bc 8f 03 00 	mov    0x38fbc(,%eax,4),%eax
   36057:	89 7c 24 04          	mov    %edi,0x4(%esp)
   3605b:	89 0c 24             	mov    %ecx,(%esp)
   3605e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
   36065:	00 
   36066:	89 44 24 08          	mov    %eax,0x8(%esp)
   3606a:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
   3606d:	e8 5e fa ff ff       	call   35ad0 <__multadd>
   36072:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
   36075:	89 c7                	mov    %eax,%edi
   36077:	e9 31 ff ff ff       	jmp    35fad <__pow5mult+0x1d>
   3607c:	89 0c 24             	mov    %ecx,(%esp)
   3607f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
   36086:	00 
   36087:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
   3608a:	e8 81 f9 ff ff       	call   35a10 <_Balloc>
   3608f:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
   36092:	c7 40 14 71 02 00 00 	movl   $0x271,0x14(%eax)
   36099:	89 c6                	mov    %eax,%esi
   3609b:	c7 40 10 01 00 00 00 	movl   $0x1,0x10(%eax)
   360a2:	89 41 48             	mov    %eax,0x48(%ecx)
   360a5:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
   360ab:	e9 0f ff ff ff       	jmp    35fbf <__pow5mult+0x2f>

000360b0 <__lshift>:
   360b0:	55                   	push   %ebp
   360b1:	89 e5                	mov    %esp,%ebp
   360b3:	57                   	push   %edi
   360b4:	56                   	push   %esi
   360b5:	53                   	push   %ebx
   360b6:	83 ec 2c             	sub    $0x2c,%esp
   360b9:	8b 45 0c             	mov    0xc(%ebp),%eax
   360bc:	8b 75 10             	mov    0x10(%ebp),%esi
   360bf:	89 c7                	mov    %eax,%edi
   360c1:	8b 50 04             	mov    0x4(%eax),%edx
   360c4:	8b 40 10             	mov    0x10(%eax),%eax
   360c7:	89 f3                	mov    %esi,%ebx
   360c9:	c1 fb 05             	sar    $0x5,%ebx
   360cc:	01 d8                	add    %ebx,%eax
   360ce:	89 45 d0             	mov    %eax,-0x30(%ebp)
   360d1:	83 c0 01             	add    $0x1,%eax
   360d4:	89 c1                	mov    %eax,%ecx
   360d6:	89 45 d8             	mov    %eax,-0x28(%ebp)
   360d9:	8b 47 08             	mov    0x8(%edi),%eax
   360dc:	39 c1                	cmp    %eax,%ecx
   360de:	7e 09                	jle    360e9 <__lshift+0x39>
   360e0:	01 c0                	add    %eax,%eax
   360e2:	83 c2 01             	add    $0x1,%edx
   360e5:	39 c1                	cmp    %eax,%ecx
   360e7:	7f f7                	jg     360e0 <__lshift+0x30>
   360e9:	8b 45 08             	mov    0x8(%ebp),%eax
   360ec:	89 54 24 04          	mov    %edx,0x4(%esp)
   360f0:	89 04 24             	mov    %eax,(%esp)
   360f3:	e8 18 f9 ff ff       	call   35a10 <_Balloc>
   360f8:	85 db                	test   %ebx,%ebx
   360fa:	89 45 d4             	mov    %eax,-0x2c(%ebp)
   360fd:	8d 50 14             	lea    0x14(%eax),%edx
   36100:	7e 17                	jle    36119 <__lshift+0x69>
   36102:	31 c0                	xor    %eax,%eax
   36104:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   36108:	c7 04 82 00 00 00 00 	movl   $0x0,(%edx,%eax,4)
   3610f:	83 c0 01             	add    $0x1,%eax
   36112:	39 d8                	cmp    %ebx,%eax
   36114:	75 f2                	jne    36108 <__lshift+0x58>
   36116:	8d 14 82             	lea    (%edx,%eax,4),%edx
   36119:	8b 7d 0c             	mov    0xc(%ebp),%edi
   3611c:	8b 45 0c             	mov    0xc(%ebp),%eax
   3611f:	8b 4f 10             	mov    0x10(%edi),%ecx
   36122:	83 c0 14             	add    $0x14,%eax
   36125:	83 e6 1f             	and    $0x1f,%esi
   36128:	89 75 e0             	mov    %esi,-0x20(%ebp)
   3612b:	8d 3c 88             	lea    (%eax,%ecx,4),%edi
   3612e:	89 7d e4             	mov    %edi,-0x1c(%ebp)
   36131:	74 7d                	je     361b0 <__lshift+0x100>
   36133:	c7 45 dc 20 00 00 00 	movl   $0x20,-0x24(%ebp)
   3613a:	29 75 dc             	sub    %esi,-0x24(%ebp)
   3613d:	31 f6                	xor    %esi,%esi
   3613f:	eb 09                	jmp    3614a <__lshift+0x9a>
   36141:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   36148:	89 fa                	mov    %edi,%edx
   3614a:	8b 18                	mov    (%eax),%ebx
   3614c:	83 c0 04             	add    $0x4,%eax
   3614f:	0f b6 4d e0          	movzbl -0x20(%ebp),%ecx
   36153:	8d 7a 04             	lea    0x4(%edx),%edi
   36156:	d3 e3                	shl    %cl,%ebx
   36158:	0f b6 4d dc          	movzbl -0x24(%ebp),%ecx
   3615c:	09 f3                	or     %esi,%ebx
   3615e:	89 1a                	mov    %ebx,(%edx)
   36160:	8b 70 fc             	mov    -0x4(%eax),%esi
   36163:	d3 ee                	shr    %cl,%esi
   36165:	39 45 e4             	cmp    %eax,-0x1c(%ebp)
   36168:	77 de                	ja     36148 <__lshift+0x98>
   3616a:	8b 45 d0             	mov    -0x30(%ebp),%eax
   3616d:	89 72 04             	mov    %esi,0x4(%edx)
   36170:	83 c0 02             	add    $0x2,%eax
   36173:	85 f6                	test   %esi,%esi
   36175:	0f 44 45 d8          	cmove  -0x28(%ebp),%eax
   36179:	89 45 d8             	mov    %eax,-0x28(%ebp)
   3617c:	8b 45 d8             	mov    -0x28(%ebp),%eax
   3617f:	8b 7d d4             	mov    -0x2c(%ebp),%edi
   36182:	8b 75 0c             	mov    0xc(%ebp),%esi
   36185:	83 e8 01             	sub    $0x1,%eax
   36188:	89 47 10             	mov    %eax,0x10(%edi)
   3618b:	8b 45 0c             	mov    0xc(%ebp),%eax
   3618e:	8b 50 04             	mov    0x4(%eax),%edx
   36191:	8b 45 08             	mov    0x8(%ebp),%eax
   36194:	8b 40 4c             	mov    0x4c(%eax),%eax
   36197:	8d 04 90             	lea    (%eax,%edx,4),%eax
   3619a:	8b 10                	mov    (%eax),%edx
   3619c:	89 16                	mov    %edx,(%esi)
   3619e:	89 30                	mov    %esi,(%eax)
   361a0:	83 c4 2c             	add    $0x2c,%esp
   361a3:	89 f8                	mov    %edi,%eax
   361a5:	5b                   	pop    %ebx
   361a6:	5e                   	pop    %esi
   361a7:	5f                   	pop    %edi
   361a8:	5d                   	pop    %ebp
   361a9:	c3                   	ret    
   361aa:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   361b0:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
   361b3:	90                   	nop
   361b4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   361b8:	83 c0 04             	add    $0x4,%eax
   361bb:	8b 48 fc             	mov    -0x4(%eax),%ecx
   361be:	83 c2 04             	add    $0x4,%edx
   361c1:	39 c3                	cmp    %eax,%ebx
   361c3:	89 4a fc             	mov    %ecx,-0x4(%edx)
   361c6:	77 f0                	ja     361b8 <__lshift+0x108>
   361c8:	eb b2                	jmp    3617c <__lshift+0xcc>
   361ca:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

000361d0 <__mcmp>:
   361d0:	55                   	push   %ebp
   361d1:	89 e5                	mov    %esp,%ebp
   361d3:	8b 4d 08             	mov    0x8(%ebp),%ecx
   361d6:	8b 55 0c             	mov    0xc(%ebp),%edx
   361d9:	53                   	push   %ebx
   361da:	8b 41 10             	mov    0x10(%ecx),%eax
   361dd:	8b 5a 10             	mov    0x10(%edx),%ebx
   361e0:	29 d8                	sub    %ebx,%eax
   361e2:	85 c0                	test   %eax,%eax
   361e4:	75 27                	jne    3620d <__mcmp+0x3d>
   361e6:	c1 e3 02             	shl    $0x2,%ebx
   361e9:	83 c1 14             	add    $0x14,%ecx
   361ec:	8d 04 19             	lea    (%ecx,%ebx,1),%eax
   361ef:	8d 54 1a 14          	lea    0x14(%edx,%ebx,1),%edx
   361f3:	eb 07                	jmp    361fc <__mcmp+0x2c>
   361f5:	8d 76 00             	lea    0x0(%esi),%esi
   361f8:	39 c1                	cmp    %eax,%ecx
   361fa:	73 14                	jae    36210 <__mcmp+0x40>
   361fc:	83 ea 04             	sub    $0x4,%edx
   361ff:	83 e8 04             	sub    $0x4,%eax
   36202:	8b 1a                	mov    (%edx),%ebx
   36204:	39 18                	cmp    %ebx,(%eax)
   36206:	74 f0                	je     361f8 <__mcmp+0x28>
   36208:	19 c0                	sbb    %eax,%eax
   3620a:	83 c8 01             	or     $0x1,%eax
   3620d:	5b                   	pop    %ebx
   3620e:	5d                   	pop    %ebp
   3620f:	c3                   	ret    
   36210:	31 c0                	xor    %eax,%eax
   36212:	5b                   	pop    %ebx
   36213:	5d                   	pop    %ebp
   36214:	c3                   	ret    
   36215:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   36219:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

00036220 <__mdiff>:
   36220:	55                   	push   %ebp
   36221:	89 e5                	mov    %esp,%ebp
   36223:	57                   	push   %edi
   36224:	56                   	push   %esi
   36225:	53                   	push   %ebx
   36226:	83 ec 2c             	sub    $0x2c,%esp
   36229:	8b 75 0c             	mov    0xc(%ebp),%esi
   3622c:	8b 5d 10             	mov    0x10(%ebp),%ebx
   3622f:	89 34 24             	mov    %esi,(%esp)
   36232:	89 5c 24 04          	mov    %ebx,0x4(%esp)
   36236:	e8 95 ff ff ff       	call   361d0 <__mcmp>
   3623b:	85 c0                	test   %eax,%eax
   3623d:	0f 84 25 01 00 00    	je     36368 <__mdiff+0x148>
   36243:	0f 88 0f 01 00 00    	js     36358 <__mdiff+0x138>
   36249:	31 ff                	xor    %edi,%edi
   3624b:	8b 46 04             	mov    0x4(%esi),%eax
   3624e:	83 c6 14             	add    $0x14,%esi
   36251:	89 44 24 04          	mov    %eax,0x4(%esp)
   36255:	8b 45 08             	mov    0x8(%ebp),%eax
   36258:	89 04 24             	mov    %eax,(%esp)
   3625b:	e8 b0 f7 ff ff       	call   35a10 <_Balloc>
   36260:	8d 4b 14             	lea    0x14(%ebx),%ecx
   36263:	89 c2                	mov    %eax,%edx
   36265:	89 45 d4             	mov    %eax,-0x2c(%ebp)
   36268:	89 78 0c             	mov    %edi,0xc(%eax)
   3626b:	8b 46 fc             	mov    -0x4(%esi),%eax
   3626e:	89 75 e4             	mov    %esi,-0x1c(%ebp)
   36271:	89 45 dc             	mov    %eax,-0x24(%ebp)
   36274:	8d 04 86             	lea    (%esi,%eax,4),%eax
   36277:	89 45 d8             	mov    %eax,-0x28(%ebp)
   3627a:	8b 43 10             	mov    0x10(%ebx),%eax
   3627d:	31 db                	xor    %ebx,%ebx
   3627f:	8d 04 81             	lea    (%ecx,%eax,4),%eax
   36282:	89 45 e0             	mov    %eax,-0x20(%ebp)
   36285:	89 d0                	mov    %edx,%eax
   36287:	83 c0 14             	add    $0x14,%eax
   3628a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   36290:	8b 75 e4             	mov    -0x1c(%ebp),%esi
   36293:	83 c0 04             	add    $0x4,%eax
   36296:	83 c1 04             	add    $0x4,%ecx
   36299:	83 45 e4 04          	addl   $0x4,-0x1c(%ebp)
   3629d:	8b 3e                	mov    (%esi),%edi
   3629f:	8b 71 fc             	mov    -0x4(%ecx),%esi
   362a2:	0f b7 d7             	movzwl %di,%edx
   362a5:	01 da                	add    %ebx,%edx
   362a7:	0f b7 de             	movzwl %si,%ebx
   362aa:	29 da                	sub    %ebx,%edx
   362ac:	c1 ef 10             	shr    $0x10,%edi
   362af:	89 d3                	mov    %edx,%ebx
   362b1:	c1 ee 10             	shr    $0x10,%esi
   362b4:	0f b7 d2             	movzwl %dx,%edx
   362b7:	c1 fb 10             	sar    $0x10,%ebx
   362ba:	29 f7                	sub    %esi,%edi
   362bc:	01 df                	add    %ebx,%edi
   362be:	89 fb                	mov    %edi,%ebx
   362c0:	c1 e7 10             	shl    $0x10,%edi
   362c3:	09 d7                	or     %edx,%edi
   362c5:	c1 fb 10             	sar    $0x10,%ebx
   362c8:	39 4d e0             	cmp    %ecx,-0x20(%ebp)
   362cb:	89 78 fc             	mov    %edi,-0x4(%eax)
   362ce:	77 c0                	ja     36290 <__mdiff+0x70>
   362d0:	8b 75 e4             	mov    -0x1c(%ebp),%esi
   362d3:	8b 4d d8             	mov    -0x28(%ebp),%ecx
   362d6:	89 45 e4             	mov    %eax,-0x1c(%ebp)
   362d9:	89 75 e0             	mov    %esi,-0x20(%ebp)
   362dc:	39 f1                	cmp    %esi,%ecx
   362de:	76 3f                	jbe    3631f <__mdiff+0xff>
   362e0:	8b 3e                	mov    (%esi),%edi
   362e2:	83 c6 04             	add    $0x4,%esi
   362e5:	83 c0 04             	add    $0x4,%eax
   362e8:	0f b7 d7             	movzwl %di,%edx
   362eb:	01 da                	add    %ebx,%edx
   362ed:	89 d3                	mov    %edx,%ebx
   362ef:	0f b7 d2             	movzwl %dx,%edx
   362f2:	c1 fb 10             	sar    $0x10,%ebx
   362f5:	c1 ef 10             	shr    $0x10,%edi
   362f8:	01 df                	add    %ebx,%edi
   362fa:	89 fb                	mov    %edi,%ebx
   362fc:	c1 e7 10             	shl    $0x10,%edi
   362ff:	09 d7                	or     %edx,%edi
   36301:	c1 fb 10             	sar    $0x10,%ebx
   36304:	39 f1                	cmp    %esi,%ecx
   36306:	89 78 fc             	mov    %edi,-0x4(%eax)
   36309:	77 d5                	ja     362e0 <__mdiff+0xc0>
   3630b:	8b 45 e0             	mov    -0x20(%ebp),%eax
   3630e:	8b 4d d8             	mov    -0x28(%ebp),%ecx
   36311:	f7 d0                	not    %eax
   36313:	01 c8                	add    %ecx,%eax
   36315:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
   36318:	c1 e8 02             	shr    $0x2,%eax
   3631b:	8d 44 81 04          	lea    0x4(%ecx,%eax,4),%eax
   3631f:	85 ff                	test   %edi,%edi
   36321:	75 23                	jne    36346 <__mdiff+0x126>
   36323:	8b 4d dc             	mov    -0x24(%ebp),%ecx
   36326:	8d 14 8d 00 00 00 00 	lea    0x0(,%ecx,4),%edx
   3632d:	29 d0                	sub    %edx,%eax
   3632f:	89 ca                	mov    %ecx,%edx
   36331:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   36338:	83 ea 01             	sub    $0x1,%edx
   3633b:	8b 4c 90 fc          	mov    -0x4(%eax,%edx,4),%ecx
   3633f:	85 c9                	test   %ecx,%ecx
   36341:	74 f5                	je     36338 <__mdiff+0x118>
   36343:	89 55 dc             	mov    %edx,-0x24(%ebp)
   36346:	8b 45 d4             	mov    -0x2c(%ebp),%eax
   36349:	8b 4d dc             	mov    -0x24(%ebp),%ecx
   3634c:	89 48 10             	mov    %ecx,0x10(%eax)
   3634f:	83 c4 2c             	add    $0x2c,%esp
   36352:	5b                   	pop    %ebx
   36353:	5e                   	pop    %esi
   36354:	5f                   	pop    %edi
   36355:	5d                   	pop    %ebp
   36356:	c3                   	ret    
   36357:	90                   	nop
   36358:	89 f0                	mov    %esi,%eax
   3635a:	bf 01 00 00 00       	mov    $0x1,%edi
   3635f:	89 de                	mov    %ebx,%esi
   36361:	89 c3                	mov    %eax,%ebx
   36363:	e9 e3 fe ff ff       	jmp    3624b <__mdiff+0x2b>
   36368:	8b 45 08             	mov    0x8(%ebp),%eax
   3636b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
   36372:	00 
   36373:	89 04 24             	mov    %eax,(%esp)
   36376:	e8 95 f6 ff ff       	call   35a10 <_Balloc>
   3637b:	c7 40 10 01 00 00 00 	movl   $0x1,0x10(%eax)
   36382:	c7 40 14 00 00 00 00 	movl   $0x0,0x14(%eax)
   36389:	83 c4 2c             	add    $0x2c,%esp
   3638c:	5b                   	pop    %ebx
   3638d:	5e                   	pop    %esi
   3638e:	5f                   	pop    %edi
   3638f:	5d                   	pop    %ebp
   36390:	c3                   	ret    
   36391:	eb 0d                	jmp    363a0 <__ulp>
   36393:	90                   	nop
   36394:	90                   	nop
   36395:	90                   	nop
   36396:	90                   	nop
   36397:	90                   	nop
   36398:	90                   	nop
   36399:	90                   	nop
   3639a:	90                   	nop
   3639b:	90                   	nop
   3639c:	90                   	nop
   3639d:	90                   	nop
   3639e:	90                   	nop
   3639f:	90                   	nop

000363a0 <__ulp>:
   363a0:	55                   	push   %ebp
   363a1:	89 e5                	mov    %esp,%ebp
   363a3:	83 ec 08             	sub    $0x8,%esp
   363a6:	dd 45 08             	fldl   0x8(%ebp)
   363a9:	dd 5d f8             	fstpl  -0x8(%ebp)
   363ac:	8b 4d fc             	mov    -0x4(%ebp),%ecx
   363af:	81 e1 00 00 f0 7f    	and    $0x7ff00000,%ecx
   363b5:	81 e9 00 00 40 03    	sub    $0x3400000,%ecx
   363bb:	85 c9                	test   %ecx,%ecx
   363bd:	7e 11                	jle    363d0 <__ulp+0x30>
   363bf:	89 4d fc             	mov    %ecx,-0x4(%ebp)
   363c2:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
   363c9:	dd 45 f8             	fldl   -0x8(%ebp)
   363cc:	c9                   	leave  
   363cd:	c3                   	ret    
   363ce:	66 90                	xchg   %ax,%ax
   363d0:	f7 d9                	neg    %ecx
   363d2:	c1 f9 14             	sar    $0x14,%ecx
   363d5:	83 f9 13             	cmp    $0x13,%ecx
   363d8:	7e 26                	jle    36400 <__ulp+0x60>
   363da:	83 f9 32             	cmp    $0x32,%ecx
   363dd:	b8 01 00 00 00       	mov    $0x1,%eax
   363e2:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
   363e9:	7f 0b                	jg     363f6 <__ulp+0x56>
   363eb:	ba 33 00 00 00       	mov    $0x33,%edx
   363f0:	29 ca                	sub    %ecx,%edx
   363f2:	89 d1                	mov    %edx,%ecx
   363f4:	d3 e0                	shl    %cl,%eax
   363f6:	89 45 f8             	mov    %eax,-0x8(%ebp)
   363f9:	dd 45 f8             	fldl   -0x8(%ebp)
   363fc:	c9                   	leave  
   363fd:	c3                   	ret    
   363fe:	66 90                	xchg   %ax,%ax
   36400:	b8 00 00 08 00       	mov    $0x80000,%eax
   36405:	d3 f8                	sar    %cl,%eax
   36407:	89 45 fc             	mov    %eax,-0x4(%ebp)
   3640a:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
   36411:	dd 45 f8             	fldl   -0x8(%ebp)
   36414:	c9                   	leave  
   36415:	c3                   	ret    
   36416:	8d 76 00             	lea    0x0(%esi),%esi
   36419:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

00036420 <__b2d>:
   36420:	55                   	push   %ebp
   36421:	89 e5                	mov    %esp,%ebp
   36423:	57                   	push   %edi
   36424:	56                   	push   %esi
   36425:	53                   	push   %ebx
   36426:	83 ec 18             	sub    $0x18,%esp
   36429:	8b 45 08             	mov    0x8(%ebp),%eax
   3642c:	8d 78 14             	lea    0x14(%eax),%edi
   3642f:	8b 40 10             	mov    0x10(%eax),%eax
   36432:	8d 1c 87             	lea    (%edi,%eax,4),%ebx
   36435:	8b 73 fc             	mov    -0x4(%ebx),%esi
   36438:	8d 43 fc             	lea    -0x4(%ebx),%eax
   3643b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
   3643e:	89 34 24             	mov    %esi,(%esp)
   36441:	e8 6a f8 ff ff       	call   35cb0 <__hi0bits>
   36446:	8b 4d 0c             	mov    0xc(%ebp),%ecx
   36449:	ba 20 00 00 00       	mov    $0x20,%edx
   3644e:	29 c2                	sub    %eax,%edx
   36450:	83 f8 0a             	cmp    $0xa,%eax
   36453:	89 11                	mov    %edx,(%ecx)
   36455:	7f 41                	jg     36498 <__b2d+0x78>
   36457:	b9 0b 00 00 00       	mov    $0xb,%ecx
   3645c:	89 f2                	mov    %esi,%edx
   3645e:	29 c1                	sub    %eax,%ecx
   36460:	d3 ea                	shr    %cl,%edx
   36462:	81 ca 00 00 f0 3f    	or     $0x3ff00000,%edx
   36468:	89 55 ec             	mov    %edx,-0x14(%ebp)
   3646b:	31 d2                	xor    %edx,%edx
   3646d:	3b 7d e4             	cmp    -0x1c(%ebp),%edi
   36470:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
   36477:	73 05                	jae    3647e <__b2d+0x5e>
   36479:	8b 53 f8             	mov    -0x8(%ebx),%edx
   3647c:	d3 ea                	shr    %cl,%edx
   3647e:	8d 48 15             	lea    0x15(%eax),%ecx
   36481:	d3 e6                	shl    %cl,%esi
   36483:	09 f2                	or     %esi,%edx
   36485:	89 55 e8             	mov    %edx,-0x18(%ebp)
   36488:	dd 45 e8             	fldl   -0x18(%ebp)
   3648b:	83 c4 18             	add    $0x18,%esp
   3648e:	5b                   	pop    %ebx
   3648f:	5e                   	pop    %esi
   36490:	5f                   	pop    %edi
   36491:	5d                   	pop    %ebp
   36492:	c3                   	ret    
   36493:	90                   	nop
   36494:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   36498:	31 d2                	xor    %edx,%edx
   3649a:	3b 7d e4             	cmp    -0x1c(%ebp),%edi
   3649d:	73 09                	jae    364a8 <__b2d+0x88>
   3649f:	8b 53 f8             	mov    -0x8(%ebx),%edx
   364a2:	8d 4b f8             	lea    -0x8(%ebx),%ecx
   364a5:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
   364a8:	89 c3                	mov    %eax,%ebx
   364aa:	83 eb 0b             	sub    $0xb,%ebx
   364ad:	89 5d e0             	mov    %ebx,-0x20(%ebp)
   364b0:	74 4e                	je     36500 <__b2d+0xe0>
   364b2:	0f b6 4d e0          	movzbl -0x20(%ebp),%ecx
   364b6:	bb 2b 00 00 00       	mov    $0x2b,%ebx
   364bb:	29 c3                	sub    %eax,%ebx
   364bd:	89 d0                	mov    %edx,%eax
   364bf:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
   364c6:	d3 e6                	shl    %cl,%esi
   364c8:	89 d9                	mov    %ebx,%ecx
   364ca:	d3 e8                	shr    %cl,%eax
   364cc:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
   364cf:	81 ce 00 00 f0 3f    	or     $0x3ff00000,%esi
   364d5:	09 c6                	or     %eax,%esi
   364d7:	31 c0                	xor    %eax,%eax
   364d9:	89 75 ec             	mov    %esi,-0x14(%ebp)
   364dc:	39 f9                	cmp    %edi,%ecx
   364de:	76 07                	jbe    364e7 <__b2d+0xc7>
   364e0:	8b 41 fc             	mov    -0x4(%ecx),%eax
   364e3:	89 d9                	mov    %ebx,%ecx
   364e5:	d3 e8                	shr    %cl,%eax
   364e7:	0f b6 4d e0          	movzbl -0x20(%ebp),%ecx
   364eb:	d3 e2                	shl    %cl,%edx
   364ed:	09 d0                	or     %edx,%eax
   364ef:	89 45 e8             	mov    %eax,-0x18(%ebp)
   364f2:	dd 45 e8             	fldl   -0x18(%ebp)
   364f5:	83 c4 18             	add    $0x18,%esp
   364f8:	5b                   	pop    %ebx
   364f9:	5e                   	pop    %esi
   364fa:	5f                   	pop    %edi
   364fb:	5d                   	pop    %ebp
   364fc:	c3                   	ret    
   364fd:	8d 76 00             	lea    0x0(%esi),%esi
   36500:	81 ce 00 00 f0 3f    	or     $0x3ff00000,%esi
   36506:	89 75 ec             	mov    %esi,-0x14(%ebp)
   36509:	89 55 e8             	mov    %edx,-0x18(%ebp)
   3650c:	dd 45 e8             	fldl   -0x18(%ebp)
   3650f:	83 c4 18             	add    $0x18,%esp
   36512:	5b                   	pop    %ebx
   36513:	5e                   	pop    %esi
   36514:	5f                   	pop    %edi
   36515:	5d                   	pop    %ebp
   36516:	c3                   	ret    
   36517:	89 f6                	mov    %esi,%esi
   36519:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

00036520 <__d2b>:
   36520:	55                   	push   %ebp
   36521:	89 e5                	mov    %esp,%ebp
   36523:	57                   	push   %edi
   36524:	56                   	push   %esi
   36525:	53                   	push   %ebx
   36526:	83 ec 2c             	sub    $0x2c,%esp
   36529:	8b 45 08             	mov    0x8(%ebp),%eax
   3652c:	dd 45 0c             	fldl   0xc(%ebp)
   3652f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
   36536:	00 
   36537:	dd 5d d0             	fstpl  -0x30(%ebp)
   3653a:	89 04 24             	mov    %eax,(%esp)
   3653d:	e8 ce f4 ff ff       	call   35a10 <_Balloc>
   36542:	8b 5d d4             	mov    -0x2c(%ebp),%ebx
   36545:	89 c6                	mov    %eax,%esi
   36547:	89 d8                	mov    %ebx,%eax
   36549:	81 e3 ff ff ff 7f    	and    $0x7fffffff,%ebx
   3654f:	25 ff ff 0f 00       	and    $0xfffff,%eax
   36554:	c1 eb 14             	shr    $0x14,%ebx
   36557:	85 db                	test   %ebx,%ebx
   36559:	74 05                	je     36560 <__d2b+0x40>
   3655b:	0d 00 00 10 00       	or     $0x100000,%eax
   36560:	89 45 e4             	mov    %eax,-0x1c(%ebp)
   36563:	8b 45 d0             	mov    -0x30(%ebp),%eax
   36566:	85 c0                	test   %eax,%eax
   36568:	74 56                	je     365c0 <__d2b+0xa0>
   3656a:	89 45 e0             	mov    %eax,-0x20(%ebp)
   3656d:	8d 45 e0             	lea    -0x20(%ebp),%eax
   36570:	89 04 24             	mov    %eax,(%esp)
   36573:	e8 98 f7 ff ff       	call   35d10 <__lo0bits>
   36578:	85 c0                	test   %eax,%eax
   3657a:	0f 85 90 00 00 00    	jne    36610 <__d2b+0xf0>
   36580:	8b 55 e0             	mov    -0x20(%ebp),%edx
   36583:	89 56 14             	mov    %edx,0x14(%esi)
   36586:	8b 55 e4             	mov    -0x1c(%ebp),%edx
   36589:	83 fa 01             	cmp    $0x1,%edx
   3658c:	19 ff                	sbb    %edi,%edi
   3658e:	83 c7 02             	add    $0x2,%edi
   36591:	85 db                	test   %ebx,%ebx
   36593:	89 56 18             	mov    %edx,0x18(%esi)
   36596:	89 7e 10             	mov    %edi,0x10(%esi)
   36599:	74 49                	je     365e4 <__d2b+0xc4>
   3659b:	8b 4d 14             	mov    0x14(%ebp),%ecx
   3659e:	8d 94 18 cd fb ff ff 	lea    -0x433(%eax,%ebx,1),%edx
   365a5:	89 11                	mov    %edx,(%ecx)
   365a7:	ba 35 00 00 00       	mov    $0x35,%edx
   365ac:	29 c2                	sub    %eax,%edx
   365ae:	8b 45 18             	mov    0x18(%ebp),%eax
   365b1:	89 10                	mov    %edx,(%eax)
   365b3:	83 c4 2c             	add    $0x2c,%esp
   365b6:	89 f0                	mov    %esi,%eax
   365b8:	5b                   	pop    %ebx
   365b9:	5e                   	pop    %esi
   365ba:	5f                   	pop    %edi
   365bb:	5d                   	pop    %ebp
   365bc:	c3                   	ret    
   365bd:	8d 76 00             	lea    0x0(%esi),%esi
   365c0:	8d 45 e4             	lea    -0x1c(%ebp),%eax
   365c3:	bf 01 00 00 00       	mov    $0x1,%edi
   365c8:	89 04 24             	mov    %eax,(%esp)
   365cb:	e8 40 f7 ff ff       	call   35d10 <__lo0bits>
   365d0:	8b 55 e4             	mov    -0x1c(%ebp),%edx
   365d3:	c7 46 10 01 00 00 00 	movl   $0x1,0x10(%esi)
   365da:	89 56 14             	mov    %edx,0x14(%esi)
   365dd:	83 c0 20             	add    $0x20,%eax
   365e0:	85 db                	test   %ebx,%ebx
   365e2:	75 b7                	jne    3659b <__d2b+0x7b>
   365e4:	8b 4d 14             	mov    0x14(%ebp),%ecx
   365e7:	2d 32 04 00 00       	sub    $0x432,%eax
   365ec:	89 01                	mov    %eax,(%ecx)
   365ee:	8b 44 be 10          	mov    0x10(%esi,%edi,4),%eax
   365f2:	c1 e7 05             	shl    $0x5,%edi
   365f5:	89 04 24             	mov    %eax,(%esp)
   365f8:	e8 b3 f6 ff ff       	call   35cb0 <__hi0bits>
   365fd:	29 c7                	sub    %eax,%edi
   365ff:	8b 45 18             	mov    0x18(%ebp),%eax
   36602:	89 38                	mov    %edi,(%eax)
   36604:	83 c4 2c             	add    $0x2c,%esp
   36607:	89 f0                	mov    %esi,%eax
   36609:	5b                   	pop    %ebx
   3660a:	5e                   	pop    %esi
   3660b:	5f                   	pop    %edi
   3660c:	5d                   	pop    %ebp
   3660d:	c3                   	ret    
   3660e:	66 90                	xchg   %ax,%ax
   36610:	8b 55 e4             	mov    -0x1c(%ebp),%edx
   36613:	b9 20 00 00 00       	mov    $0x20,%ecx
   36618:	29 c1                	sub    %eax,%ecx
   3661a:	89 d7                	mov    %edx,%edi
   3661c:	d3 e7                	shl    %cl,%edi
   3661e:	8b 4d e0             	mov    -0x20(%ebp),%ecx
   36621:	09 f9                	or     %edi,%ecx
   36623:	89 4e 14             	mov    %ecx,0x14(%esi)
   36626:	89 c1                	mov    %eax,%ecx
   36628:	d3 ea                	shr    %cl,%edx
   3662a:	89 55 e4             	mov    %edx,-0x1c(%ebp)
   3662d:	e9 57 ff ff ff       	jmp    36589 <__d2b+0x69>
   36632:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   36639:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

00036640 <__ratio>:
   36640:	55                   	push   %ebp
   36641:	89 e5                	mov    %esp,%ebp
   36643:	56                   	push   %esi
   36644:	53                   	push   %ebx
   36645:	83 ec 30             	sub    $0x30,%esp
   36648:	8b 75 08             	mov    0x8(%ebp),%esi
   3664b:	8d 45 f0             	lea    -0x10(%ebp),%eax
   3664e:	8b 5d 0c             	mov    0xc(%ebp),%ebx
   36651:	89 44 24 04          	mov    %eax,0x4(%esp)
   36655:	89 34 24             	mov    %esi,(%esp)
   36658:	e8 c3 fd ff ff       	call   36420 <__b2d>
   3665d:	8d 45 f4             	lea    -0xc(%ebp),%eax
   36660:	89 44 24 04          	mov    %eax,0x4(%esp)
   36664:	89 1c 24             	mov    %ebx,(%esp)
   36667:	dd 55 e0             	fstl   -0x20(%ebp)
   3666a:	dd 5d d8             	fstpl  -0x28(%ebp)
   3666d:	e8 ae fd ff ff       	call   36420 <__b2d>
   36672:	8b 46 10             	mov    0x10(%esi),%eax
   36675:	2b 43 10             	sub    0x10(%ebx),%eax
   36678:	8b 55 f0             	mov    -0x10(%ebp),%edx
   3667b:	2b 55 f4             	sub    -0xc(%ebp),%edx
   3667e:	c1 e0 05             	shl    $0x5,%eax
   36681:	01 d0                	add    %edx,%eax
   36683:	dd 55 d0             	fstl   -0x30(%ebp)
   36686:	85 c0                	test   %eax,%eax
   36688:	dd 45 d8             	fldl   -0x28(%ebp)
   3668b:	7e 1b                	jle    366a8 <__ratio+0x68>
   3668d:	dd d8                	fstp   %st(0)
   3668f:	c1 e0 14             	shl    $0x14,%eax
   36692:	01 45 e4             	add    %eax,-0x1c(%ebp)
   36695:	dd 45 e0             	fldl   -0x20(%ebp)
   36698:	83 c4 30             	add    $0x30,%esp
   3669b:	5b                   	pop    %ebx
   3669c:	de f1                	fdivp  %st,%st(1)
   3669e:	5e                   	pop    %esi
   3669f:	5d                   	pop    %ebp
   366a0:	c3                   	ret    
   366a1:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   366a8:	dd d9                	fstp   %st(1)
   366aa:	c1 e0 14             	shl    $0x14,%eax
   366ad:	29 45 d4             	sub    %eax,-0x2c(%ebp)
   366b0:	dd 45 d0             	fldl   -0x30(%ebp)
   366b3:	83 c4 30             	add    $0x30,%esp
   366b6:	5b                   	pop    %ebx
   366b7:	de f9                	fdivrp %st,%st(1)
   366b9:	5e                   	pop    %esi
   366ba:	5d                   	pop    %ebp
   366bb:	c3                   	ret    
   366bc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

000366c0 <_mprec_log10>:
   366c0:	55                   	push   %ebp
   366c1:	89 e5                	mov    %esp,%ebp
   366c3:	8b 45 08             	mov    0x8(%ebp),%eax
   366c6:	83 f8 17             	cmp    $0x17,%eax
   366c9:	7e 1d                	jle    366e8 <_mprec_log10+0x28>
   366cb:	d9 e8                	fld1   
   366cd:	d9 05 8c 8f 03 00    	flds   0x38f8c
   366d3:	90                   	nop
   366d4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   366d8:	83 e8 01             	sub    $0x1,%eax
   366db:	dc c9                	fmul   %st,%st(1)
   366dd:	75 f9                	jne    366d8 <_mprec_log10+0x18>
   366df:	dd d8                	fstp   %st(0)
   366e1:	5d                   	pop    %ebp
   366e2:	c3                   	ret    
   366e3:	90                   	nop
   366e4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   366e8:	dd 04 c5 60 90 03 00 	fldl   0x39060(,%eax,8)
   366ef:	5d                   	pop    %ebp
   366f0:	c3                   	ret    
   366f1:	eb 0d                	jmp    36700 <__copybits>
   366f3:	90                   	nop
   366f4:	90                   	nop
   366f5:	90                   	nop
   366f6:	90                   	nop
   366f7:	90                   	nop
   366f8:	90                   	nop
   366f9:	90                   	nop
   366fa:	90                   	nop
   366fb:	90                   	nop
   366fc:	90                   	nop
   366fd:	90                   	nop
   366fe:	90                   	nop
   366ff:	90                   	nop

00036700 <__copybits>:
   36700:	55                   	push   %ebp
   36701:	89 e5                	mov    %esp,%ebp
   36703:	57                   	push   %edi
   36704:	8b 7d 10             	mov    0x10(%ebp),%edi
   36707:	56                   	push   %esi
   36708:	8b 75 0c             	mov    0xc(%ebp),%esi
   3670b:	8b 45 08             	mov    0x8(%ebp),%eax
   3670e:	53                   	push   %ebx
   3670f:	8b 4f 10             	mov    0x10(%edi),%ecx
   36712:	8d 56 ff             	lea    -0x1(%esi),%edx
   36715:	c1 fa 05             	sar    $0x5,%edx
   36718:	8d 74 90 04          	lea    0x4(%eax,%edx,4),%esi
   3671c:	8d 57 14             	lea    0x14(%edi),%edx
   3671f:	8d 1c 8a             	lea    (%edx,%ecx,4),%ebx
   36722:	39 da                	cmp    %ebx,%edx
   36724:	73 34                	jae    3675a <__copybits+0x5a>
   36726:	89 c1                	mov    %eax,%ecx
   36728:	83 c2 04             	add    $0x4,%edx
   3672b:	8b 42 fc             	mov    -0x4(%edx),%eax
   3672e:	83 c1 04             	add    $0x4,%ecx
   36731:	39 d3                	cmp    %edx,%ebx
   36733:	89 41 fc             	mov    %eax,-0x4(%ecx)
   36736:	77 f0                	ja     36728 <__copybits+0x28>
   36738:	8b 45 08             	mov    0x8(%ebp),%eax
   3673b:	29 fb                	sub    %edi,%ebx
   3673d:	8d 53 eb             	lea    -0x15(%ebx),%edx
   36740:	c1 ea 02             	shr    $0x2,%edx
   36743:	8d 44 90 04          	lea    0x4(%eax,%edx,4),%eax
   36747:	39 c6                	cmp    %eax,%esi
   36749:	76 13                	jbe    3675e <__copybits+0x5e>
   3674b:	90                   	nop
   3674c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   36750:	83 c0 04             	add    $0x4,%eax
   36753:	c7 40 fc 00 00 00 00 	movl   $0x0,-0x4(%eax)
   3675a:	39 c6                	cmp    %eax,%esi
   3675c:	77 f2                	ja     36750 <__copybits+0x50>
   3675e:	5b                   	pop    %ebx
   3675f:	5e                   	pop    %esi
   36760:	5f                   	pop    %edi
   36761:	5d                   	pop    %ebp
   36762:	c3                   	ret    
   36763:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   36769:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

00036770 <__any_on>:
   36770:	55                   	push   %ebp
   36771:	89 e5                	mov    %esp,%ebp
   36773:	8b 45 08             	mov    0x8(%ebp),%eax
   36776:	57                   	push   %edi
   36777:	56                   	push   %esi
   36778:	53                   	push   %ebx
   36779:	8b 5d 0c             	mov    0xc(%ebp),%ebx
   3677c:	8d 50 14             	lea    0x14(%eax),%edx
   3677f:	8b 40 10             	mov    0x10(%eax),%eax
   36782:	c1 fb 05             	sar    $0x5,%ebx
   36785:	39 d8                	cmp    %ebx,%eax
   36787:	7d 2f                	jge    367b8 <__any_on+0x48>
   36789:	8d 1c 82             	lea    (%edx,%eax,4),%ebx
   3678c:	39 da                	cmp    %ebx,%edx
   3678e:	73 1d                	jae    367ad <__any_on+0x3d>
   36790:	8d 43 fc             	lea    -0x4(%ebx),%eax
   36793:	8b 5b fc             	mov    -0x4(%ebx),%ebx
   36796:	85 db                	test   %ebx,%ebx
   36798:	74 0f                	je     367a9 <__any_on+0x39>
   3679a:	eb 44                	jmp    367e0 <__any_on+0x70>
   3679c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   367a0:	83 e8 04             	sub    $0x4,%eax
   367a3:	8b 08                	mov    (%eax),%ecx
   367a5:	85 c9                	test   %ecx,%ecx
   367a7:	75 37                	jne    367e0 <__any_on+0x70>
   367a9:	39 c2                	cmp    %eax,%edx
   367ab:	72 f3                	jb     367a0 <__any_on+0x30>
   367ad:	31 c0                	xor    %eax,%eax
   367af:	5b                   	pop    %ebx
   367b0:	5e                   	pop    %esi
   367b1:	5f                   	pop    %edi
   367b2:	5d                   	pop    %ebp
   367b3:	c3                   	ret    
   367b4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   367b8:	7e 1e                	jle    367d8 <__any_on+0x68>
   367ba:	8b 4d 0c             	mov    0xc(%ebp),%ecx
   367bd:	8d 1c 9a             	lea    (%edx,%ebx,4),%ebx
   367c0:	83 e1 1f             	and    $0x1f,%ecx
   367c3:	74 c7                	je     3678c <__any_on+0x1c>
   367c5:	8b 3b                	mov    (%ebx),%edi
   367c7:	b8 01 00 00 00       	mov    $0x1,%eax
   367cc:	89 fe                	mov    %edi,%esi
   367ce:	d3 ee                	shr    %cl,%esi
   367d0:	d3 e6                	shl    %cl,%esi
   367d2:	39 fe                	cmp    %edi,%esi
   367d4:	75 d9                	jne    367af <__any_on+0x3f>
   367d6:	eb b4                	jmp    3678c <__any_on+0x1c>
   367d8:	8d 1c 9a             	lea    (%edx,%ebx,4),%ebx
   367db:	eb af                	jmp    3678c <__any_on+0x1c>
   367dd:	8d 76 00             	lea    0x0(%esi),%esi
   367e0:	5b                   	pop    %ebx
   367e1:	b8 01 00 00 00       	mov    $0x1,%eax
   367e6:	5e                   	pop    %esi
   367e7:	5f                   	pop    %edi
   367e8:	5d                   	pop    %ebp
   367e9:	c3                   	ret    
   367ea:	66 90                	xchg   %ax,%ax
   367ec:	66 90                	xchg   %ax,%ax
   367ee:	66 90                	xchg   %ax,%ax

000367f0 <_sbrk_r>:
   367f0:	55                   	push   %ebp
   367f1:	89 e5                	mov    %esp,%ebp
   367f3:	83 ec 18             	sub    $0x18,%esp
   367f6:	8b 45 0c             	mov    0xc(%ebp),%eax
   367f9:	c7 05 0c 30 09 00 00 	movl   $0x0,0x9300c
   36800:	00 00 00 
   36803:	89 04 24             	mov    %eax,(%esp)
   36806:	e8 09 b1 ff ff       	call   31914 <sbrk>
   3680b:	83 f8 ff             	cmp    $0xffffffff,%eax
   3680e:	74 08                	je     36818 <_sbrk_r+0x28>
   36810:	c9                   	leave  
   36811:	c3                   	ret    
   36812:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   36818:	8b 15 0c 30 09 00    	mov    0x9300c,%edx
   3681e:	85 d2                	test   %edx,%edx
   36820:	74 ee                	je     36810 <_sbrk_r+0x20>
   36822:	8b 4d 08             	mov    0x8(%ebp),%ecx
   36825:	89 11                	mov    %edx,(%ecx)
   36827:	c9                   	leave  
   36828:	c3                   	ret    
   36829:	66 90                	xchg   %ax,%ax
   3682b:	66 90                	xchg   %ax,%ax
   3682d:	66 90                	xchg   %ax,%ax
   3682f:	90                   	nop

00036830 <__fpclassifyd>:
   36830:	55                   	push   %ebp
   36831:	b8 02 00 00 00       	mov    $0x2,%eax
   36836:	89 e5                	mov    %esp,%ebp
   36838:	53                   	push   %ebx
   36839:	83 ec 0c             	sub    $0xc,%esp
   3683c:	dd 45 08             	fldl   0x8(%ebp)
   3683f:	dd 5d f0             	fstpl  -0x10(%ebp)
   36842:	8b 55 f0             	mov    -0x10(%ebp),%edx
   36845:	8b 4d f4             	mov    -0xc(%ebp),%ecx
   36848:	89 d3                	mov    %edx,%ebx
   3684a:	09 cb                	or     %ecx,%ebx
   3684c:	75 0a                	jne    36858 <__fpclassifyd+0x28>
   3684e:	83 c4 0c             	add    $0xc,%esp
   36851:	5b                   	pop    %ebx
   36852:	5d                   	pop    %ebp
   36853:	c3                   	ret    
   36854:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   36858:	85 d2                	test   %edx,%edx
   3685a:	0f 94 c2             	sete   %dl
   3685d:	75 08                	jne    36867 <__fpclassifyd+0x37>
   3685f:	81 f9 00 00 00 80    	cmp    $0x80000000,%ecx
   36865:	74 e7                	je     3684e <__fpclassifyd+0x1e>
   36867:	81 e1 ff ff ff 7f    	and    $0x7fffffff,%ecx
   3686d:	b8 04 00 00 00       	mov    $0x4,%eax
   36872:	8d 99 00 00 f0 ff    	lea    -0x100000(%ecx),%ebx
   36878:	81 fb ff ff df 7f    	cmp    $0x7fdfffff,%ebx
   3687e:	76 ce                	jbe    3684e <__fpclassifyd+0x1e>
   36880:	81 f9 ff ff 0f 00    	cmp    $0xfffff,%ecx
   36886:	b0 03                	mov    $0x3,%al
   36888:	76 c4                	jbe    3684e <__fpclassifyd+0x1e>
   3688a:	31 c0                	xor    %eax,%eax
   3688c:	81 f9 00 00 f0 7f    	cmp    $0x7ff00000,%ecx
   36892:	0f 94 c0             	sete   %al
   36895:	21 d0                	and    %edx,%eax
   36897:	eb b5                	jmp    3684e <__fpclassifyd+0x1e>
   36899:	66 90                	xchg   %ax,%ax
   3689b:	66 90                	xchg   %ax,%ax
   3689d:	66 90                	xchg   %ax,%ax
   3689f:	90                   	nop

000368a0 <strcmp>:
   368a0:	55                   	push   %ebp
   368a1:	89 e5                	mov    %esp,%ebp
   368a3:	8b 45 08             	mov    0x8(%ebp),%eax
   368a6:	8b 55 0c             	mov    0xc(%ebp),%edx
   368a9:	53                   	push   %ebx
   368aa:	89 c1                	mov    %eax,%ecx
   368ac:	09 d1                	or     %edx,%ecx
   368ae:	83 e1 03             	and    $0x3,%ecx
   368b1:	75 17                	jne    368ca <strcmp+0x2a>
   368b3:	8b 08                	mov    (%eax),%ecx
   368b5:	3b 0a                	cmp    (%edx),%ecx
   368b7:	74 33                	je     368ec <strcmp+0x4c>
   368b9:	eb 0f                	jmp    368ca <strcmp+0x2a>
   368bb:	90                   	nop
   368bc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   368c0:	3a 0a                	cmp    (%edx),%cl
   368c2:	75 0d                	jne    368d1 <strcmp+0x31>
   368c4:	83 c0 01             	add    $0x1,%eax
   368c7:	83 c2 01             	add    $0x1,%edx
   368ca:	0f b6 08             	movzbl (%eax),%ecx
   368cd:	84 c9                	test   %cl,%cl
   368cf:	75 ef                	jne    368c0 <strcmp+0x20>
   368d1:	0f b6 00             	movzbl (%eax),%eax
   368d4:	0f b6 12             	movzbl (%edx),%edx
   368d7:	5b                   	pop    %ebx
   368d8:	5d                   	pop    %ebp
   368d9:	29 d0                	sub    %edx,%eax
   368db:	c3                   	ret    
   368dc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   368e0:	83 c0 04             	add    $0x4,%eax
   368e3:	83 c2 04             	add    $0x4,%edx
   368e6:	8b 08                	mov    (%eax),%ecx
   368e8:	3b 0a                	cmp    (%edx),%ecx
   368ea:	75 de                	jne    368ca <strcmp+0x2a>
   368ec:	8d 99 ff fe fe fe    	lea    -0x1010101(%ecx),%ebx
   368f2:	f7 d1                	not    %ecx
   368f4:	21 cb                	and    %ecx,%ebx
   368f6:	81 e3 80 80 80 80    	and    $0x80808080,%ebx
   368fc:	74 e2                	je     368e0 <strcmp+0x40>
   368fe:	31 c0                	xor    %eax,%eax
   36900:	5b                   	pop    %ebx
   36901:	5d                   	pop    %ebp
   36902:	c3                   	ret    
   36903:	66 90                	xchg   %ax,%ax
   36905:	66 90                	xchg   %ax,%ax
   36907:	66 90                	xchg   %ax,%ax
   36909:	66 90                	xchg   %ax,%ax
   3690b:	66 90                	xchg   %ax,%ax
   3690d:	66 90                	xchg   %ax,%ax
   3690f:	90                   	nop

00036910 <strlen>:
   36910:	55                   	push   %ebp
   36911:	89 e5                	mov    %esp,%ebp
   36913:	57                   	push   %edi
   36914:	8b 55 08             	mov    0x8(%ebp),%edx
   36917:	89 d7                	mov    %edx,%edi
   36919:	f7 c7 03 00 00 00    	test   $0x3,%edi
   3691f:	74 25                	je     36946 <L5>
   36921:	8a 0f                	mov    (%edi),%cl
   36923:	47                   	inc    %edi
   36924:	84 c9                	test   %cl,%cl
   36926:	74 56                	je     3697e <L15>
   36928:	f7 c7 03 00 00 00    	test   $0x3,%edi
   3692e:	74 16                	je     36946 <L5>
   36930:	8a 0f                	mov    (%edi),%cl
   36932:	47                   	inc    %edi
   36933:	84 c9                	test   %cl,%cl
   36935:	74 47                	je     3697e <L15>
   36937:	f7 c7 03 00 00 00    	test   $0x3,%edi
   3693d:	74 07                	je     36946 <L5>
   3693f:	8a 0f                	mov    (%edi),%cl
   36941:	47                   	inc    %edi
   36942:	84 c9                	test   %cl,%cl
   36944:	74 38                	je     3697e <L15>

00036946 <L5>:
   36946:	83 ef 04             	sub    $0x4,%edi
   36949:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

00036950 <L10>:
   36950:	83 c7 04             	add    $0x4,%edi
   36953:	8b 0f                	mov    (%edi),%ecx
   36955:	8d 81 ff fe fe fe    	lea    -0x1010101(%ecx),%eax
   3695b:	f7 d1                	not    %ecx
   3695d:	21 c8                	and    %ecx,%eax
   3695f:	a9 80 80 80 80       	test   $0x80808080,%eax
   36964:	74 ea                	je     36950 <L10>
   36966:	f7 d1                	not    %ecx
   36968:	47                   	inc    %edi
   36969:	84 c9                	test   %cl,%cl
   3696b:	74 11                	je     3697e <L15>
   3696d:	47                   	inc    %edi
   3696e:	c1 e9 08             	shr    $0x8,%ecx
   36971:	84 c9                	test   %cl,%cl
   36973:	74 09                	je     3697e <L15>
   36975:	47                   	inc    %edi
   36976:	c1 e9 08             	shr    $0x8,%ecx
   36979:	84 c9                	test   %cl,%cl
   3697b:	74 01                	je     3697e <L15>
   3697d:	47                   	inc    %edi

0003697e <L15>:
   3697e:	29 d7                	sub    %edx,%edi
   36980:	8d 47 ff             	lea    -0x1(%edi),%eax
   36983:	8d 65 fc             	lea    -0x4(%ebp),%esp
   36986:	5f                   	pop    %edi
   36987:	c9                   	leave  
   36988:	c3                   	ret    
   36989:	66 90                	xchg   %ax,%ax
   3698b:	66 90                	xchg   %ax,%ax
   3698d:	66 90                	xchg   %ax,%ax
   3698f:	90                   	nop

00036990 <__ssprint_r>:
   36990:	55                   	push   %ebp
   36991:	89 e5                	mov    %esp,%ebp
   36993:	57                   	push   %edi
   36994:	56                   	push   %esi
   36995:	53                   	push   %ebx
   36996:	83 ec 2c             	sub    $0x2c,%esp
   36999:	8b 45 10             	mov    0x10(%ebp),%eax
   3699c:	8b 5d 0c             	mov    0xc(%ebp),%ebx
   3699f:	8b 00                	mov    (%eax),%eax
   369a1:	89 c7                	mov    %eax,%edi
   369a3:	8b 45 10             	mov    0x10(%ebp),%eax
   369a6:	8b 40 08             	mov    0x8(%eax),%eax
   369a9:	85 c0                	test   %eax,%eax
   369ab:	0f 84 af 01 00 00    	je     36b60 <__ssprint_r+0x1d0>
   369b1:	31 c9                	xor    %ecx,%ecx
   369b3:	31 d2                	xor    %edx,%edx
   369b5:	8b 03                	mov    (%ebx),%eax
   369b7:	89 ce                	mov    %ecx,%esi
   369b9:	85 f6                	test   %esi,%esi
   369bb:	89 55 e4             	mov    %edx,-0x1c(%ebp)
   369be:	0f 84 ec 00 00 00    	je     36ab0 <__ssprint_r+0x120>
   369c4:	8b 53 08             	mov    0x8(%ebx),%edx
   369c7:	39 d6                	cmp    %edx,%esi
   369c9:	0f 82 fc 00 00 00    	jb     36acb <__ssprint_r+0x13b>
   369cf:	0f b7 4b 0c          	movzwl 0xc(%ebx),%ecx
   369d3:	66 f7 c1 80 04       	test   $0x480,%cx
   369d8:	0f 84 fa 00 00 00    	je     36ad8 <__ssprint_r+0x148>
   369de:	8b 53 10             	mov    0x10(%ebx),%edx
   369e1:	29 d0                	sub    %edx,%eax
   369e3:	89 45 dc             	mov    %eax,-0x24(%ebp)
   369e6:	8b 43 14             	mov    0x14(%ebx),%eax
   369e9:	89 55 d8             	mov    %edx,-0x28(%ebp)
   369ec:	8d 04 40             	lea    (%eax,%eax,2),%eax
   369ef:	89 c2                	mov    %eax,%edx
   369f1:	c1 ea 1f             	shr    $0x1f,%edx
   369f4:	01 d0                	add    %edx,%eax
   369f6:	89 45 e0             	mov    %eax,-0x20(%ebp)
   369f9:	8b 45 dc             	mov    -0x24(%ebp),%eax
   369fc:	d1 7d e0             	sarl   -0x20(%ebp)
   369ff:	8d 44 06 01          	lea    0x1(%esi,%eax,1),%eax
   36a03:	39 45 e0             	cmp    %eax,-0x20(%ebp)
   36a06:	0f 83 34 01 00 00    	jae    36b40 <__ssprint_r+0x1b0>
   36a0c:	89 45 e0             	mov    %eax,-0x20(%ebp)
   36a0f:	80 e5 04             	and    $0x4,%ch
   36a12:	0f 84 c8 00 00 00    	je     36ae0 <__ssprint_r+0x150>
   36a18:	89 44 24 04          	mov    %eax,0x4(%esp)
   36a1c:	8b 45 08             	mov    0x8(%ebp),%eax
   36a1f:	89 04 24             	mov    %eax,(%esp)
   36a22:	e8 e9 e7 ff ff       	call   35210 <_malloc_r>
   36a27:	85 c0                	test   %eax,%eax
   36a29:	89 c2                	mov    %eax,%edx
   36a2b:	0f 84 e1 00 00 00    	je     36b12 <__ssprint_r+0x182>
   36a31:	8b 45 dc             	mov    -0x24(%ebp),%eax
   36a34:	89 55 d8             	mov    %edx,-0x28(%ebp)
   36a37:	89 44 24 08          	mov    %eax,0x8(%esp)
   36a3b:	8b 43 10             	mov    0x10(%ebx),%eax
   36a3e:	89 14 24             	mov    %edx,(%esp)
   36a41:	89 44 24 04          	mov    %eax,0x4(%esp)
   36a45:	e8 0a b2 ff ff       	call   31c54 <memcpy>
   36a4a:	0f b7 43 0c          	movzwl 0xc(%ebx),%eax
   36a4e:	8b 55 d8             	mov    -0x28(%ebp),%edx
   36a51:	66 25 7f fb          	and    $0xfb7f,%ax
   36a55:	0c 80                	or     $0x80,%al
   36a57:	66 89 43 0c          	mov    %ax,0xc(%ebx)
   36a5b:	8b 4d e0             	mov    -0x20(%ebp),%ecx
   36a5e:	8b 45 dc             	mov    -0x24(%ebp),%eax
   36a61:	89 53 10             	mov    %edx,0x10(%ebx)
   36a64:	89 4b 14             	mov    %ecx,0x14(%ebx)
   36a67:	2b 4d dc             	sub    -0x24(%ebp),%ecx
   36a6a:	01 d0                	add    %edx,%eax
   36a6c:	89 03                	mov    %eax,(%ebx)
   36a6e:	89 f2                	mov    %esi,%edx
   36a70:	89 4b 08             	mov    %ecx,0x8(%ebx)
   36a73:	89 f1                	mov    %esi,%ecx
   36a75:	89 4c 24 08          	mov    %ecx,0x8(%esp)
   36a79:	89 4d e0             	mov    %ecx,-0x20(%ebp)
   36a7c:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
   36a7f:	89 04 24             	mov    %eax,(%esp)
   36a82:	89 55 dc             	mov    %edx,-0x24(%ebp)
   36a85:	89 4c 24 04          	mov    %ecx,0x4(%esp)
   36a89:	e8 22 13 00 00       	call   37db0 <memmove>
   36a8e:	8b 03                	mov    (%ebx),%eax
   36a90:	8b 4d e0             	mov    -0x20(%ebp),%ecx
   36a93:	8b 55 dc             	mov    -0x24(%ebp),%edx
   36a96:	29 53 08             	sub    %edx,0x8(%ebx)
   36a99:	01 c8                	add    %ecx,%eax
   36a9b:	8b 4d 10             	mov    0x10(%ebp),%ecx
   36a9e:	89 03                	mov    %eax,(%ebx)
   36aa0:	8b 51 08             	mov    0x8(%ecx),%edx
   36aa3:	29 f2                	sub    %esi,%edx
   36aa5:	85 d2                	test   %edx,%edx
   36aa7:	89 51 08             	mov    %edx,0x8(%ecx)
   36aaa:	0f 84 98 00 00 00    	je     36b48 <__ssprint_r+0x1b8>
   36ab0:	8b 77 04             	mov    0x4(%edi),%esi
   36ab3:	83 c7 08             	add    $0x8,%edi
   36ab6:	8b 4f f8             	mov    -0x8(%edi),%ecx
   36ab9:	85 f6                	test   %esi,%esi
   36abb:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
   36abe:	74 f0                	je     36ab0 <__ssprint_r+0x120>
   36ac0:	8b 53 08             	mov    0x8(%ebx),%edx
   36ac3:	39 d6                	cmp    %edx,%esi
   36ac5:	0f 83 04 ff ff ff    	jae    369cf <__ssprint_r+0x3f>
   36acb:	89 f2                	mov    %esi,%edx
   36acd:	89 f1                	mov    %esi,%ecx
   36acf:	eb a4                	jmp    36a75 <__ssprint_r+0xe5>
   36ad1:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   36ad8:	89 d1                	mov    %edx,%ecx
   36ada:	eb 99                	jmp    36a75 <__ssprint_r+0xe5>
   36adc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   36ae0:	89 44 24 08          	mov    %eax,0x8(%esp)
   36ae4:	8b 45 d8             	mov    -0x28(%ebp),%eax
   36ae7:	89 44 24 04          	mov    %eax,0x4(%esp)
   36aeb:	8b 45 08             	mov    0x8(%ebp),%eax
   36aee:	89 04 24             	mov    %eax,(%esp)
   36af1:	e8 4a 13 00 00       	call   37e40 <_realloc_r>
   36af6:	85 c0                	test   %eax,%eax
   36af8:	89 c2                	mov    %eax,%edx
   36afa:	0f 85 5b ff ff ff    	jne    36a5b <__ssprint_r+0xcb>
   36b00:	8b 43 10             	mov    0x10(%ebx),%eax
   36b03:	89 44 24 04          	mov    %eax,0x4(%esp)
   36b07:	8b 45 08             	mov    0x8(%ebp),%eax
   36b0a:	89 04 24             	mov    %eax,(%esp)
   36b0d:	e8 3e 10 00 00       	call   37b50 <_free_r>
   36b12:	8b 45 08             	mov    0x8(%ebp),%eax
   36b15:	c7 00 0c 00 00 00    	movl   $0xc,(%eax)
   36b1b:	8b 45 10             	mov    0x10(%ebp),%eax
   36b1e:	66 83 4b 0c 40       	orw    $0x40,0xc(%ebx)
   36b23:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
   36b2a:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
   36b31:	83 c4 2c             	add    $0x2c,%esp
   36b34:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
   36b39:	5b                   	pop    %ebx
   36b3a:	5e                   	pop    %esi
   36b3b:	5f                   	pop    %edi
   36b3c:	5d                   	pop    %ebp
   36b3d:	c3                   	ret    
   36b3e:	66 90                	xchg   %ax,%ax
   36b40:	8b 45 e0             	mov    -0x20(%ebp),%eax
   36b43:	e9 c7 fe ff ff       	jmp    36a0f <__ssprint_r+0x7f>
   36b48:	c7 41 04 00 00 00 00 	movl   $0x0,0x4(%ecx)
   36b4f:	83 c4 2c             	add    $0x2c,%esp
   36b52:	31 c0                	xor    %eax,%eax
   36b54:	5b                   	pop    %ebx
   36b55:	5e                   	pop    %esi
   36b56:	5f                   	pop    %edi
   36b57:	5d                   	pop    %ebp
   36b58:	c3                   	ret    
   36b59:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   36b60:	8b 45 10             	mov    0x10(%ebp),%eax
   36b63:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
   36b6a:	83 c4 2c             	add    $0x2c,%esp
   36b6d:	31 c0                	xor    %eax,%eax
   36b6f:	5b                   	pop    %ebx
   36b70:	5e                   	pop    %esi
   36b71:	5f                   	pop    %edi
   36b72:	5d                   	pop    %ebp
   36b73:	c3                   	ret    
   36b74:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   36b7a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

00036b80 <_svfiprintf_r>:
   36b80:	55                   	push   %ebp
   36b81:	89 e5                	mov    %esp,%ebp
   36b83:	57                   	push   %edi
   36b84:	56                   	push   %esi
   36b85:	53                   	push   %ebx
   36b86:	81 ec cc 00 00 00    	sub    $0xcc,%esp
   36b8c:	8b 45 0c             	mov    0xc(%ebp),%eax
   36b8f:	f6 40 0c 80          	testb  $0x80,0xc(%eax)
   36b93:	74 0b                	je     36ba0 <_svfiprintf_r+0x20>
   36b95:	8b 50 10             	mov    0x10(%eax),%edx
   36b98:	85 d2                	test   %edx,%edx
   36b9a:	0f 84 1c 0d 00 00    	je     378bc <_svfiprintf_r+0xd3c>
   36ba0:	8d 45 a8             	lea    -0x58(%ebp),%eax
   36ba3:	8d 5d a7             	lea    -0x59(%ebp),%ebx
   36ba6:	89 c6                	mov    %eax,%esi
   36ba8:	89 85 74 ff ff ff    	mov    %eax,-0x8c(%ebp)
   36bae:	29 d8                	sub    %ebx,%eax
   36bb0:	c7 85 7c ff ff ff 00 	movl   $0x0,-0x84(%ebp)
   36bb7:	00 00 00 
   36bba:	c7 85 78 ff ff ff 00 	movl   $0x0,-0x88(%ebp)
   36bc1:	00 00 00 
   36bc4:	c7 85 44 ff ff ff 00 	movl   $0x0,-0xbc(%ebp)
   36bcb:	00 00 00 
   36bce:	c7 85 50 ff ff ff 00 	movl   $0x0,-0xb0(%ebp)
   36bd5:	00 00 00 
   36bd8:	89 85 3c ff ff ff    	mov    %eax,-0xc4(%ebp)
   36bde:	8b 45 10             	mov    0x10(%ebp),%eax
   36be1:	8b 5d 10             	mov    0x10(%ebp),%ebx
   36be4:	0f b6 00             	movzbl (%eax),%eax
   36be7:	84 c0                	test   %al,%al
   36be9:	74 58                	je     36c43 <_svfiprintf_r+0xc3>
   36beb:	3c 25                	cmp    $0x25,%al
   36bed:	75 13                	jne    36c02 <_svfiprintf_r+0x82>
   36bef:	eb 52                	jmp    36c43 <_svfiprintf_r+0xc3>
   36bf1:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   36bf8:	84 c0                	test   %al,%al
   36bfa:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   36c00:	74 0a                	je     36c0c <_svfiprintf_r+0x8c>
   36c02:	83 c3 01             	add    $0x1,%ebx
   36c05:	0f b6 03             	movzbl (%ebx),%eax
   36c08:	3c 25                	cmp    $0x25,%al
   36c0a:	75 ec                	jne    36bf8 <_svfiprintf_r+0x78>
   36c0c:	89 df                	mov    %ebx,%edi
   36c0e:	2b 7d 10             	sub    0x10(%ebp),%edi
   36c11:	74 30                	je     36c43 <_svfiprintf_r+0xc3>
   36c13:	8b 45 10             	mov    0x10(%ebp),%eax
   36c16:	83 c6 08             	add    $0x8,%esi
   36c19:	89 7e fc             	mov    %edi,-0x4(%esi)
   36c1c:	01 bd 7c ff ff ff    	add    %edi,-0x84(%ebp)
   36c22:	89 46 f8             	mov    %eax,-0x8(%esi)
   36c25:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   36c2b:	83 c0 01             	add    $0x1,%eax
   36c2e:	83 f8 07             	cmp    $0x7,%eax
   36c31:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   36c37:	0f 8f eb 0a 00 00    	jg     37728 <_svfiprintf_r+0xba8>
   36c3d:	01 bd 50 ff ff ff    	add    %edi,-0xb0(%ebp)
   36c43:	80 3b 00             	cmpb   $0x0,(%ebx)
   36c46:	0f 84 11 09 00 00    	je     3755d <_svfiprintf_r+0x9dd>
   36c4c:	8d 43 01             	lea    0x1(%ebx),%eax
   36c4f:	31 ff                	xor    %edi,%edi
   36c51:	c6 85 71 ff ff ff 00 	movb   $0x0,-0x8f(%ebp)
   36c58:	c7 85 5c ff ff ff ff 	movl   $0xffffffff,-0xa4(%ebp)
   36c5f:	ff ff ff 
   36c62:	c7 85 54 ff ff ff 00 	movl   $0x0,-0xac(%ebp)
   36c69:	00 00 00 
   36c6c:	c7 85 64 ff ff ff 00 	movl   $0x0,-0x9c(%ebp)
   36c73:	00 00 00 
   36c76:	8d 50 01             	lea    0x1(%eax),%edx
   36c79:	0f be 00             	movsbl (%eax),%eax
   36c7c:	8d 48 e0             	lea    -0x20(%eax),%ecx
   36c7f:	83 f9 58             	cmp    $0x58,%ecx
   36c82:	0f 87 63 03 00 00    	ja     36feb <_svfiprintf_r+0x46b>
   36c88:	ff 24 8d 28 91 03 00 	jmp    *0x39128(,%ecx,4)
   36c8f:	90                   	nop
   36c90:	83 8d 64 ff ff ff 10 	orl    $0x10,-0x9c(%ebp)
   36c97:	89 d0                	mov    %edx,%eax
   36c99:	eb db                	jmp    36c76 <_svfiprintf_r+0xf6>
   36c9b:	8b 45 14             	mov    0x14(%ebp),%eax
   36c9e:	8b 5d 14             	mov    0x14(%ebp),%ebx
   36ca1:	8b 00                	mov    (%eax),%eax
   36ca3:	83 c3 04             	add    $0x4,%ebx
   36ca6:	89 5d 14             	mov    %ebx,0x14(%ebp)
   36ca9:	85 c0                	test   %eax,%eax
   36cab:	89 85 54 ff ff ff    	mov    %eax,-0xac(%ebp)
   36cb1:	79 e4                	jns    36c97 <_svfiprintf_r+0x117>
   36cb3:	f7 9d 54 ff ff ff    	negl   -0xac(%ebp)
   36cb9:	83 8d 64 ff ff ff 04 	orl    $0x4,-0x9c(%ebp)
   36cc0:	89 d0                	mov    %edx,%eax
   36cc2:	eb b2                	jmp    36c76 <_svfiprintf_r+0xf6>
   36cc4:	bf 2b 00 00 00       	mov    $0x2b,%edi
   36cc9:	89 d0                	mov    %edx,%eax
   36ccb:	eb a9                	jmp    36c76 <_svfiprintf_r+0xf6>
   36ccd:	8b 45 14             	mov    0x14(%ebp),%eax
   36cd0:	83 8d 64 ff ff ff 02 	orl    $0x2,-0x9c(%ebp)
   36cd7:	89 55 10             	mov    %edx,0x10(%ebp)
   36cda:	ba 02 00 00 00       	mov    $0x2,%edx
   36cdf:	8b 08                	mov    (%eax),%ecx
   36ce1:	83 c0 04             	add    $0x4,%eax
   36ce4:	c6 85 72 ff ff ff 30 	movb   $0x30,-0x8e(%ebp)
   36ceb:	c6 85 73 ff ff ff 78 	movb   $0x78,-0x8d(%ebp)
   36cf2:	89 45 14             	mov    %eax,0x14(%ebp)
   36cf5:	c7 85 44 ff ff ff d3 	movl   $0x38dd3,-0xbc(%ebp)
   36cfc:	8d 03 00 
   36cff:	90                   	nop
   36d00:	c6 85 71 ff ff ff 00 	movb   $0x0,-0x8f(%ebp)
   36d07:	31 ff                	xor    %edi,%edi
   36d09:	8b 9d 64 ff ff ff    	mov    -0x9c(%ebp),%ebx
   36d0f:	89 d8                	mov    %ebx,%eax
   36d11:	24 7f                	and    $0x7f,%al
   36d13:	83 bd 5c ff ff ff 00 	cmpl   $0x0,-0xa4(%ebp)
   36d1a:	0f 48 c3             	cmovs  %ebx,%eax
   36d1d:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
   36d23:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
   36d29:	85 c0                	test   %eax,%eax
   36d2b:	75 08                	jne    36d35 <_svfiprintf_r+0x1b5>
   36d2d:	85 c9                	test   %ecx,%ecx
   36d2f:	0f 84 03 08 00 00    	je     37538 <_svfiprintf_r+0x9b8>
   36d35:	80 fa 01             	cmp    $0x1,%dl
   36d38:	0f 84 8a 0a 00 00    	je     377c8 <_svfiprintf_r+0xc48>
   36d3e:	80 fa 02             	cmp    $0x2,%dl
   36d41:	8d 5d a8             	lea    -0x58(%ebp),%ebx
   36d44:	0f 85 86 01 00 00    	jne    36ed0 <_svfiprintf_r+0x350>
   36d4a:	8b 95 44 ff ff ff    	mov    -0xbc(%ebp),%edx
   36d50:	89 c8                	mov    %ecx,%eax
   36d52:	83 eb 01             	sub    $0x1,%ebx
   36d55:	83 e0 0f             	and    $0xf,%eax
   36d58:	0f b6 04 02          	movzbl (%edx,%eax,1),%eax
   36d5c:	c1 e9 04             	shr    $0x4,%ecx
   36d5f:	85 c9                	test   %ecx,%ecx
   36d61:	88 03                	mov    %al,(%ebx)
   36d63:	75 eb                	jne    36d50 <_svfiprintf_r+0x1d0>
   36d65:	8d 45 a8             	lea    -0x58(%ebp),%eax
   36d68:	29 d8                	sub    %ebx,%eax
   36d6a:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
   36d70:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
   36d76:	8b 8d 58 ff ff ff    	mov    -0xa8(%ebp),%ecx
   36d7c:	39 c1                	cmp    %eax,%ecx
   36d7e:	0f 4d c1             	cmovge %ecx,%eax
   36d81:	89 85 60 ff ff ff    	mov    %eax,-0xa0(%ebp)
   36d87:	89 f8                	mov    %edi,%eax
   36d89:	3c 01                	cmp    $0x1,%al
   36d8b:	83 9d 60 ff ff ff ff 	sbbl   $0xffffffff,-0xa0(%ebp)
   36d92:	8b 95 60 ff ff ff    	mov    -0xa0(%ebp),%edx
   36d98:	8b 8d 64 ff ff ff    	mov    -0x9c(%ebp),%ecx
   36d9e:	89 d0                	mov    %edx,%eax
   36da0:	89 cf                	mov    %ecx,%edi
   36da2:	83 c0 02             	add    $0x2,%eax
   36da5:	83 e7 02             	and    $0x2,%edi
   36da8:	89 bd 4c ff ff ff    	mov    %edi,-0xb4(%ebp)
   36dae:	89 cf                	mov    %ecx,%edi
   36db0:	0f 44 c2             	cmove  %edx,%eax
   36db3:	81 e7 84 00 00 00    	and    $0x84,%edi
   36db9:	89 85 60 ff ff ff    	mov    %eax,-0xa0(%ebp)
   36dbf:	89 bd 48 ff ff ff    	mov    %edi,-0xb8(%ebp)
   36dc5:	0f 85 cd 04 00 00    	jne    37298 <_svfiprintf_r+0x718>
   36dcb:	8b bd 54 ff ff ff    	mov    -0xac(%ebp),%edi
   36dd1:	2b bd 60 ff ff ff    	sub    -0xa0(%ebp),%edi
   36dd7:	85 ff                	test   %edi,%edi
   36dd9:	0f 8e b9 04 00 00    	jle    37298 <_svfiprintf_r+0x718>
   36ddf:	83 ff 10             	cmp    $0x10,%edi
   36de2:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
   36de8:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   36dee:	7e 7c                	jle    36e6c <_svfiprintf_r+0x2ec>
   36df0:	89 9d 40 ff ff ff    	mov    %ebx,-0xc0(%ebp)
   36df6:	89 f1                	mov    %esi,%ecx
   36df8:	8b 5d 08             	mov    0x8(%ebp),%ebx
   36dfb:	8b 75 0c             	mov    0xc(%ebp),%esi
   36dfe:	eb 08                	jmp    36e08 <_svfiprintf_r+0x288>
   36e00:	83 ef 10             	sub    $0x10,%edi
   36e03:	83 ff 10             	cmp    $0x10,%edi
   36e06:	7e 5c                	jle    36e64 <_svfiprintf_r+0x2e4>
   36e08:	83 c0 01             	add    $0x1,%eax
   36e0b:	83 c2 10             	add    $0x10,%edx
   36e0e:	c7 01 9c 92 03 00    	movl   $0x3929c,(%ecx)
   36e14:	83 c1 08             	add    $0x8,%ecx
   36e17:	c7 41 fc 10 00 00 00 	movl   $0x10,-0x4(%ecx)
   36e1e:	83 f8 07             	cmp    $0x7,%eax
   36e21:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
   36e27:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   36e2d:	7e d1                	jle    36e00 <_svfiprintf_r+0x280>
   36e2f:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   36e35:	89 44 24 08          	mov    %eax,0x8(%esp)
   36e39:	89 74 24 04          	mov    %esi,0x4(%esp)
   36e3d:	89 1c 24             	mov    %ebx,(%esp)
   36e40:	e8 4b fb ff ff       	call   36990 <__ssprint_r>
   36e45:	85 c0                	test   %eax,%eax
   36e47:	0f 85 3b 07 00 00    	jne    37588 <_svfiprintf_r+0xa08>
   36e4d:	83 ef 10             	sub    $0x10,%edi
   36e50:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
   36e56:	83 ff 10             	cmp    $0x10,%edi
   36e59:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   36e5f:	8d 4d a8             	lea    -0x58(%ebp),%ecx
   36e62:	7f a4                	jg     36e08 <_svfiprintf_r+0x288>
   36e64:	8b 9d 40 ff ff ff    	mov    -0xc0(%ebp),%ebx
   36e6a:	89 ce                	mov    %ecx,%esi
   36e6c:	83 c0 01             	add    $0x1,%eax
   36e6f:	01 fa                	add    %edi,%edx
   36e71:	c7 06 9c 92 03 00    	movl   $0x3929c,(%esi)
   36e77:	83 c6 08             	add    $0x8,%esi
   36e7a:	89 7e fc             	mov    %edi,-0x4(%esi)
   36e7d:	83 f8 07             	cmp    $0x7,%eax
   36e80:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
   36e86:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   36e8c:	0f 8e 12 04 00 00    	jle    372a4 <_svfiprintf_r+0x724>
   36e92:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   36e98:	89 44 24 08          	mov    %eax,0x8(%esp)
   36e9c:	8b 45 0c             	mov    0xc(%ebp),%eax
   36e9f:	89 44 24 04          	mov    %eax,0x4(%esp)
   36ea3:	8b 45 08             	mov    0x8(%ebp),%eax
   36ea6:	89 04 24             	mov    %eax,(%esp)
   36ea9:	e8 e2 fa ff ff       	call   36990 <__ssprint_r>
   36eae:	85 c0                	test   %eax,%eax
   36eb0:	0f 85 d2 06 00 00    	jne    37588 <_svfiprintf_r+0xa08>
   36eb6:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
   36ebc:	8d 75 a8             	lea    -0x58(%ebp),%esi
   36ebf:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   36ec5:	e9 da 03 00 00       	jmp    372a4 <_svfiprintf_r+0x724>
   36eca:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   36ed0:	89 c8                	mov    %ecx,%eax
   36ed2:	83 eb 01             	sub    $0x1,%ebx
   36ed5:	83 e0 07             	and    $0x7,%eax
   36ed8:	c1 e9 03             	shr    $0x3,%ecx
   36edb:	83 c0 30             	add    $0x30,%eax
   36ede:	85 c9                	test   %ecx,%ecx
   36ee0:	88 03                	mov    %al,(%ebx)
   36ee2:	75 ec                	jne    36ed0 <_svfiprintf_r+0x350>
   36ee4:	f6 85 64 ff ff ff 01 	testb  $0x1,-0x9c(%ebp)
   36eeb:	89 da                	mov    %ebx,%edx
   36eed:	0f 84 72 fe ff ff    	je     36d65 <_svfiprintf_r+0x1e5>
   36ef3:	3c 30                	cmp    $0x30,%al
   36ef5:	0f 84 6a fe ff ff    	je     36d65 <_svfiprintf_r+0x1e5>
   36efb:	83 eb 01             	sub    $0x1,%ebx
   36efe:	8d 45 a8             	lea    -0x58(%ebp),%eax
   36f01:	29 d8                	sub    %ebx,%eax
   36f03:	c6 42 ff 30          	movb   $0x30,-0x1(%edx)
   36f07:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
   36f0d:	e9 5e fe ff ff       	jmp    36d70 <_svfiprintf_r+0x1f0>
   36f12:	83 8d 64 ff ff ff 10 	orl    $0x10,-0x9c(%ebp)
   36f19:	f6 85 64 ff ff ff 10 	testb  $0x10,-0x9c(%ebp)
   36f20:	89 55 10             	mov    %edx,0x10(%ebp)
   36f23:	8b 45 14             	mov    0x14(%ebp),%eax
   36f26:	0f 85 48 01 00 00    	jne    37074 <_svfiprintf_r+0x4f4>
   36f2c:	f6 85 64 ff ff ff 40 	testb  $0x40,-0x9c(%ebp)
   36f33:	0f 84 3b 01 00 00    	je     37074 <_svfiprintf_r+0x4f4>
   36f39:	0f b7 08             	movzwl (%eax),%ecx
   36f3c:	83 c0 04             	add    $0x4,%eax
   36f3f:	31 d2                	xor    %edx,%edx
   36f41:	89 45 14             	mov    %eax,0x14(%ebp)
   36f44:	e9 b7 fd ff ff       	jmp    36d00 <_svfiprintf_r+0x180>
   36f49:	83 8d 64 ff ff ff 10 	orl    $0x10,-0x9c(%ebp)
   36f50:	89 f8                	mov    %edi,%eax
   36f52:	89 55 10             	mov    %edx,0x10(%ebp)
   36f55:	88 85 71 ff ff ff    	mov    %al,-0x8f(%ebp)
   36f5b:	f6 85 64 ff ff ff 10 	testb  $0x10,-0x9c(%ebp)
   36f62:	8b 45 14             	mov    0x14(%ebp),%eax
   36f65:	75 0d                	jne    36f74 <_svfiprintf_r+0x3f4>
   36f67:	f6 85 64 ff ff ff 40 	testb  $0x40,-0x9c(%ebp)
   36f6e:	0f 85 f2 08 00 00    	jne    37866 <_svfiprintf_r+0xce6>
   36f74:	8b 08                	mov    (%eax),%ecx
   36f76:	83 c0 04             	add    $0x4,%eax
   36f79:	89 45 14             	mov    %eax,0x14(%ebp)
   36f7c:	85 c9                	test   %ecx,%ecx
   36f7e:	0f 88 f3 08 00 00    	js     37877 <_svfiprintf_r+0xcf7>
   36f84:	0f b6 bd 71 ff ff ff 	movzbl -0x8f(%ebp),%edi
   36f8b:	ba 01 00 00 00       	mov    $0x1,%edx
   36f90:	e9 74 fd ff ff       	jmp    36d09 <_svfiprintf_r+0x189>
   36f95:	0f be 02             	movsbl (%edx),%eax
   36f98:	8d 5a 01             	lea    0x1(%edx),%ebx
   36f9b:	83 f8 2a             	cmp    $0x2a,%eax
   36f9e:	0f 84 af 09 00 00    	je     37953 <_svfiprintf_r+0xdd3>
   36fa4:	8d 48 d0             	lea    -0x30(%eax),%ecx
   36fa7:	31 d2                	xor    %edx,%edx
   36fa9:	83 f9 09             	cmp    $0x9,%ecx
   36fac:	0f 87 90 09 00 00    	ja     37942 <_svfiprintf_r+0xdc2>
   36fb2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   36fb8:	8d 04 92             	lea    (%edx,%edx,4),%eax
   36fbb:	83 c3 01             	add    $0x1,%ebx
   36fbe:	8d 14 41             	lea    (%ecx,%eax,2),%edx
   36fc1:	0f be 43 ff          	movsbl -0x1(%ebx),%eax
   36fc5:	8d 48 d0             	lea    -0x30(%eax),%ecx
   36fc8:	83 f9 09             	cmp    $0x9,%ecx
   36fcb:	76 eb                	jbe    36fb8 <_svfiprintf_r+0x438>
   36fcd:	85 d2                	test   %edx,%edx
   36fcf:	b9 ff ff ff ff       	mov    $0xffffffff,%ecx
   36fd4:	0f 48 d1             	cmovs  %ecx,%edx
   36fd7:	8d 48 e0             	lea    -0x20(%eax),%ecx
   36fda:	83 f9 58             	cmp    $0x58,%ecx
   36fdd:	89 95 5c ff ff ff    	mov    %edx,-0xa4(%ebp)
   36fe3:	89 da                	mov    %ebx,%edx
   36fe5:	0f 86 9d fc ff ff    	jbe    36c88 <_svfiprintf_r+0x108>
   36feb:	89 fb                	mov    %edi,%ebx
   36fed:	85 c0                	test   %eax,%eax
   36fef:	89 55 10             	mov    %edx,0x10(%ebp)
   36ff2:	88 9d 71 ff ff ff    	mov    %bl,-0x8f(%ebp)
   36ff8:	0f 84 5f 05 00 00    	je     3755d <_svfiprintf_r+0x9dd>
   36ffe:	88 45 80             	mov    %al,-0x80(%ebp)
   37001:	8d 5d 80             	lea    -0x80(%ebp),%ebx
   37004:	c6 85 71 ff ff ff 00 	movb   $0x0,-0x8f(%ebp)
   3700b:	c7 85 60 ff ff ff 01 	movl   $0x1,-0xa0(%ebp)
   37012:	00 00 00 
   37015:	c7 85 58 ff ff ff 01 	movl   $0x1,-0xa8(%ebp)
   3701c:	00 00 00 
   3701f:	e9 5a 01 00 00       	jmp    3717e <_svfiprintf_r+0x5fe>
   37024:	31 db                	xor    %ebx,%ebx
   37026:	8d 48 d0             	lea    -0x30(%eax),%ecx
   37029:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   37030:	8d 04 9b             	lea    (%ebx,%ebx,4),%eax
   37033:	83 c2 01             	add    $0x1,%edx
   37036:	8d 1c 41             	lea    (%ecx,%eax,2),%ebx
   37039:	0f be 42 ff          	movsbl -0x1(%edx),%eax
   3703d:	8d 48 d0             	lea    -0x30(%eax),%ecx
   37040:	83 f9 09             	cmp    $0x9,%ecx
   37043:	76 eb                	jbe    37030 <_svfiprintf_r+0x4b0>
   37045:	89 9d 54 ff ff ff    	mov    %ebx,-0xac(%ebp)
   3704b:	e9 2c fc ff ff       	jmp    36c7c <_svfiprintf_r+0xfc>
   37050:	81 8d 64 ff ff ff 80 	orl    $0x80,-0x9c(%ebp)
   37057:	00 00 00 
   3705a:	89 d0                	mov    %edx,%eax
   3705c:	e9 15 fc ff ff       	jmp    36c76 <_svfiprintf_r+0xf6>
   37061:	f6 85 64 ff ff ff 10 	testb  $0x10,-0x9c(%ebp)
   37068:	89 55 10             	mov    %edx,0x10(%ebp)
   3706b:	8b 45 14             	mov    0x14(%ebp),%eax
   3706e:	0f 84 b8 fe ff ff    	je     36f2c <_svfiprintf_r+0x3ac>
   37074:	8b 08                	mov    (%eax),%ecx
   37076:	83 c0 04             	add    $0x4,%eax
   37079:	31 d2                	xor    %edx,%edx
   3707b:	89 45 14             	mov    %eax,0x14(%ebp)
   3707e:	e9 7d fc ff ff       	jmp    36d00 <_svfiprintf_r+0x180>
   37083:	f6 85 64 ff ff ff 10 	testb  $0x10,-0x9c(%ebp)
   3708a:	89 f8                	mov    %edi,%eax
   3708c:	89 55 10             	mov    %edx,0x10(%ebp)
   3708f:	88 85 71 ff ff ff    	mov    %al,-0x8f(%ebp)
   37095:	0f 85 a2 07 00 00    	jne    3783d <_svfiprintf_r+0xcbd>
   3709b:	f6 85 64 ff ff ff 40 	testb  $0x40,-0x9c(%ebp)
   370a2:	0f 84 95 07 00 00    	je     3783d <_svfiprintf_r+0xcbd>
   370a8:	8b 45 14             	mov    0x14(%ebp),%eax
   370ab:	0f b7 9d 50 ff ff ff 	movzwl -0xb0(%ebp),%ebx
   370b2:	8b 00                	mov    (%eax),%eax
   370b4:	66 89 18             	mov    %bx,(%eax)
   370b7:	8b 45 14             	mov    0x14(%ebp),%eax
   370ba:	83 c0 04             	add    $0x4,%eax
   370bd:	89 45 14             	mov    %eax,0x14(%ebp)
   370c0:	e9 19 fb ff ff       	jmp    36bde <_svfiprintf_r+0x5e>
   370c5:	89 fb                	mov    %edi,%ebx
   370c7:	89 55 10             	mov    %edx,0x10(%ebp)
   370ca:	88 9d 71 ff ff ff    	mov    %bl,-0x8f(%ebp)
   370d0:	c7 85 44 ff ff ff d3 	movl   $0x38dd3,-0xbc(%ebp)
   370d7:	8d 03 00 
   370da:	f6 85 64 ff ff ff 10 	testb  $0x10,-0x9c(%ebp)
   370e1:	8b 5d 14             	mov    0x14(%ebp),%ebx
   370e4:	75 0d                	jne    370f3 <_svfiprintf_r+0x573>
   370e6:	f6 85 64 ff ff ff 40 	testb  $0x40,-0x9c(%ebp)
   370ed:	0f 85 65 07 00 00    	jne    37858 <_svfiprintf_r+0xcd8>
   370f3:	8b 0b                	mov    (%ebx),%ecx
   370f5:	83 c3 04             	add    $0x4,%ebx
   370f8:	89 5d 14             	mov    %ebx,0x14(%ebp)
   370fb:	f6 85 64 ff ff ff 01 	testb  $0x1,-0x9c(%ebp)
   37102:	ba 02 00 00 00       	mov    $0x2,%edx
   37107:	0f 84 f3 fb ff ff    	je     36d00 <_svfiprintf_r+0x180>
   3710d:	85 c9                	test   %ecx,%ecx
   3710f:	0f 84 eb fb ff ff    	je     36d00 <_svfiprintf_r+0x180>
   37115:	c6 85 72 ff ff ff 30 	movb   $0x30,-0x8e(%ebp)
   3711c:	88 85 73 ff ff ff    	mov    %al,-0x8d(%ebp)
   37122:	83 8d 64 ff ff ff 02 	orl    $0x2,-0x9c(%ebp)
   37129:	e9 d2 fb ff ff       	jmp    36d00 <_svfiprintf_r+0x180>
   3712e:	83 8d 64 ff ff ff 40 	orl    $0x40,-0x9c(%ebp)
   37135:	89 d0                	mov    %edx,%eax
   37137:	e9 3a fb ff ff       	jmp    36c76 <_svfiprintf_r+0xf6>
   3713c:	89 f8                	mov    %edi,%eax
   3713e:	89 55 10             	mov    %edx,0x10(%ebp)
   37141:	88 85 71 ff ff ff    	mov    %al,-0x8f(%ebp)
   37147:	e9 0f fe ff ff       	jmp    36f5b <_svfiprintf_r+0x3db>
   3714c:	8b 45 14             	mov    0x14(%ebp),%eax
   3714f:	8d 5d 80             	lea    -0x80(%ebp),%ebx
   37152:	89 55 10             	mov    %edx,0x10(%ebp)
   37155:	c6 85 71 ff ff ff 00 	movb   $0x0,-0x8f(%ebp)
   3715c:	c7 85 60 ff ff ff 01 	movl   $0x1,-0xa0(%ebp)
   37163:	00 00 00 
   37166:	8b 00                	mov    (%eax),%eax
   37168:	c7 85 58 ff ff ff 01 	movl   $0x1,-0xa8(%ebp)
   3716f:	00 00 00 
   37172:	88 45 80             	mov    %al,-0x80(%ebp)
   37175:	8b 45 14             	mov    0x14(%ebp),%eax
   37178:	83 c0 04             	add    $0x4,%eax
   3717b:	89 45 14             	mov    %eax,0x14(%ebp)
   3717e:	c7 85 5c ff ff ff 00 	movl   $0x0,-0xa4(%ebp)
   37185:	00 00 00 
   37188:	e9 05 fc ff ff       	jmp    36d92 <_svfiprintf_r+0x212>
   3718d:	89 fb                	mov    %edi,%ebx
   3718f:	89 55 10             	mov    %edx,0x10(%ebp)
   37192:	88 9d 71 ff ff ff    	mov    %bl,-0x8f(%ebp)
   37198:	c7 85 44 ff ff ff c2 	movl   $0x38dc2,-0xbc(%ebp)
   3719f:	8d 03 00 
   371a2:	e9 33 ff ff ff       	jmp    370da <_svfiprintf_r+0x55a>
   371a7:	83 8d 64 ff ff ff 10 	orl    $0x10,-0x9c(%ebp)
   371ae:	f6 85 64 ff ff ff 10 	testb  $0x10,-0x9c(%ebp)
   371b5:	89 55 10             	mov    %edx,0x10(%ebp)
   371b8:	8b 45 14             	mov    0x14(%ebp),%eax
   371bb:	75 39                	jne    371f6 <_svfiprintf_r+0x676>
   371bd:	f6 85 64 ff ff ff 40 	testb  $0x40,-0x9c(%ebp)
   371c4:	74 30                	je     371f6 <_svfiprintf_r+0x676>
   371c6:	0f b7 08             	movzwl (%eax),%ecx
   371c9:	83 c0 04             	add    $0x4,%eax
   371cc:	ba 01 00 00 00       	mov    $0x1,%edx
   371d1:	89 45 14             	mov    %eax,0x14(%ebp)
   371d4:	e9 27 fb ff ff       	jmp    36d00 <_svfiprintf_r+0x180>
   371d9:	83 8d 64 ff ff ff 01 	orl    $0x1,-0x9c(%ebp)
   371e0:	89 d0                	mov    %edx,%eax
   371e2:	e9 8f fa ff ff       	jmp    36c76 <_svfiprintf_r+0xf6>
   371e7:	f6 85 64 ff ff ff 10 	testb  $0x10,-0x9c(%ebp)
   371ee:	89 55 10             	mov    %edx,0x10(%ebp)
   371f1:	8b 45 14             	mov    0x14(%ebp),%eax
   371f4:	74 c7                	je     371bd <_svfiprintf_r+0x63d>
   371f6:	8b 08                	mov    (%eax),%ecx
   371f8:	83 c0 04             	add    $0x4,%eax
   371fb:	ba 01 00 00 00       	mov    $0x1,%edx
   37200:	89 45 14             	mov    %eax,0x14(%ebp)
   37203:	e9 f8 fa ff ff       	jmp    36d00 <_svfiprintf_r+0x180>
   37208:	8b 45 14             	mov    0x14(%ebp),%eax
   3720b:	89 55 10             	mov    %edx,0x10(%ebp)
   3720e:	c6 85 71 ff ff ff 00 	movb   $0x0,-0x8f(%ebp)
   37215:	8b 18                	mov    (%eax),%ebx
   37217:	8d 50 04             	lea    0x4(%eax),%edx
   3721a:	85 db                	test   %ebx,%ebx
   3721c:	0f 84 cc 06 00 00    	je     378ee <_svfiprintf_r+0xd6e>
   37222:	8b bd 5c ff ff ff    	mov    -0xa4(%ebp),%edi
   37228:	89 95 60 ff ff ff    	mov    %edx,-0xa0(%ebp)
   3722e:	85 ff                	test   %edi,%edi
   37230:	0f 88 59 06 00 00    	js     3788f <_svfiprintf_r+0xd0f>
   37236:	89 7c 24 08          	mov    %edi,0x8(%esp)
   3723a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
   37241:	00 
   37242:	89 1c 24             	mov    %ebx,(%esp)
   37245:	e8 06 e7 ff ff       	call   35950 <memchr>
   3724a:	8b 95 60 ff ff ff    	mov    -0xa0(%ebp),%edx
   37250:	85 c0                	test   %eax,%eax
   37252:	0f 84 c5 06 00 00    	je     3791d <_svfiprintf_r+0xd9d>
   37258:	29 d8                	sub    %ebx,%eax
   3725a:	39 f8                	cmp    %edi,%eax
   3725c:	0f 4f c7             	cmovg  %edi,%eax
   3725f:	0f b6 bd 71 ff ff ff 	movzbl -0x8f(%ebp),%edi
   37266:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
   3726c:	89 55 14             	mov    %edx,0x14(%ebp)
   3726f:	c7 85 5c ff ff ff 00 	movl   $0x0,-0xa4(%ebp)
   37276:	00 00 00 
   37279:	e9 f2 fa ff ff       	jmp    36d70 <_svfiprintf_r+0x1f0>
   3727e:	89 f8                	mov    %edi,%eax
   37280:	84 c0                	test   %al,%al
   37282:	b8 20 00 00 00       	mov    $0x20,%eax
   37287:	0f 44 f8             	cmove  %eax,%edi
   3728a:	89 d0                	mov    %edx,%eax
   3728c:	e9 e5 f9 ff ff       	jmp    36c76 <_svfiprintf_r+0xf6>
   37291:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   37298:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
   3729e:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   372a4:	80 bd 71 ff ff ff 00 	cmpb   $0x0,-0x8f(%ebp)
   372ab:	74 2e                	je     372db <_svfiprintf_r+0x75b>
   372ad:	83 c0 01             	add    $0x1,%eax
   372b0:	83 c2 01             	add    $0x1,%edx
   372b3:	8d 8d 71 ff ff ff    	lea    -0x8f(%ebp),%ecx
   372b9:	83 c6 08             	add    $0x8,%esi
   372bc:	89 4e f8             	mov    %ecx,-0x8(%esi)
   372bf:	c7 46 fc 01 00 00 00 	movl   $0x1,-0x4(%esi)
   372c6:	83 f8 07             	cmp    $0x7,%eax
   372c9:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
   372cf:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   372d5:	0f 8f b5 04 00 00    	jg     37790 <_svfiprintf_r+0xc10>
   372db:	8b 8d 4c ff ff ff    	mov    -0xb4(%ebp),%ecx
   372e1:	85 c9                	test   %ecx,%ecx
   372e3:	74 2e                	je     37313 <_svfiprintf_r+0x793>
   372e5:	83 c0 01             	add    $0x1,%eax
   372e8:	83 c2 02             	add    $0x2,%edx
   372eb:	8d 8d 72 ff ff ff    	lea    -0x8e(%ebp),%ecx
   372f1:	83 c6 08             	add    $0x8,%esi
   372f4:	89 4e f8             	mov    %ecx,-0x8(%esi)
   372f7:	c7 46 fc 02 00 00 00 	movl   $0x2,-0x4(%esi)
   372fe:	83 f8 07             	cmp    $0x7,%eax
   37301:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
   37307:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   3730d:	0f 8f 45 04 00 00    	jg     37758 <_svfiprintf_r+0xbd8>
   37313:	81 bd 48 ff ff ff 80 	cmpl   $0x80,-0xb8(%ebp)
   3731a:	00 00 00 
   3731d:	0f 84 9d 02 00 00    	je     375c0 <_svfiprintf_r+0xa40>
   37323:	8b bd 5c ff ff ff    	mov    -0xa4(%ebp),%edi
   37329:	2b bd 58 ff ff ff    	sub    -0xa8(%ebp),%edi
   3732f:	85 ff                	test   %edi,%edi
   37331:	0f 8e e1 00 00 00    	jle    37418 <_svfiprintf_r+0x898>
   37337:	83 ff 10             	cmp    $0x10,%edi
   3733a:	0f 8e 7c 00 00 00    	jle    373bc <_svfiprintf_r+0x83c>
   37340:	89 9d 5c ff ff ff    	mov    %ebx,-0xa4(%ebp)
   37346:	89 f1                	mov    %esi,%ecx
   37348:	8b 5d 08             	mov    0x8(%ebp),%ebx
   3734b:	8b 75 0c             	mov    0xc(%ebp),%esi
   3734e:	eb 08                	jmp    37358 <_svfiprintf_r+0x7d8>
   37350:	83 ef 10             	sub    $0x10,%edi
   37353:	83 ff 10             	cmp    $0x10,%edi
   37356:	7e 5c                	jle    373b4 <_svfiprintf_r+0x834>
   37358:	83 c0 01             	add    $0x1,%eax
   3735b:	83 c2 10             	add    $0x10,%edx
   3735e:	c7 01 8c 92 03 00    	movl   $0x3928c,(%ecx)
   37364:	83 c1 08             	add    $0x8,%ecx
   37367:	c7 41 fc 10 00 00 00 	movl   $0x10,-0x4(%ecx)
   3736e:	83 f8 07             	cmp    $0x7,%eax
   37371:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
   37377:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   3737d:	7e d1                	jle    37350 <_svfiprintf_r+0x7d0>
   3737f:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   37385:	89 44 24 08          	mov    %eax,0x8(%esp)
   37389:	89 74 24 04          	mov    %esi,0x4(%esp)
   3738d:	89 1c 24             	mov    %ebx,(%esp)
   37390:	e8 fb f5 ff ff       	call   36990 <__ssprint_r>
   37395:	85 c0                	test   %eax,%eax
   37397:	0f 85 eb 01 00 00    	jne    37588 <_svfiprintf_r+0xa08>
   3739d:	83 ef 10             	sub    $0x10,%edi
   373a0:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
   373a6:	83 ff 10             	cmp    $0x10,%edi
   373a9:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   373af:	8d 4d a8             	lea    -0x58(%ebp),%ecx
   373b2:	7f a4                	jg     37358 <_svfiprintf_r+0x7d8>
   373b4:	8b 9d 5c ff ff ff    	mov    -0xa4(%ebp),%ebx
   373ba:	89 ce                	mov    %ecx,%esi
   373bc:	83 c0 01             	add    $0x1,%eax
   373bf:	01 fa                	add    %edi,%edx
   373c1:	c7 06 8c 92 03 00    	movl   $0x3928c,(%esi)
   373c7:	83 c6 08             	add    $0x8,%esi
   373ca:	89 7e fc             	mov    %edi,-0x4(%esi)
   373cd:	83 f8 07             	cmp    $0x7,%eax
   373d0:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
   373d6:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   373dc:	7e 3a                	jle    37418 <_svfiprintf_r+0x898>
   373de:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   373e4:	89 44 24 08          	mov    %eax,0x8(%esp)
   373e8:	8b 45 0c             	mov    0xc(%ebp),%eax
   373eb:	89 44 24 04          	mov    %eax,0x4(%esp)
   373ef:	8b 45 08             	mov    0x8(%ebp),%eax
   373f2:	89 04 24             	mov    %eax,(%esp)
   373f5:	e8 96 f5 ff ff       	call   36990 <__ssprint_r>
   373fa:	85 c0                	test   %eax,%eax
   373fc:	0f 85 86 01 00 00    	jne    37588 <_svfiprintf_r+0xa08>
   37402:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
   37408:	8d 75 a8             	lea    -0x58(%ebp),%esi
   3740b:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   37411:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   37418:	89 1e                	mov    %ebx,(%esi)
   3741a:	8b 9d 58 ff ff ff    	mov    -0xa8(%ebp),%ebx
   37420:	83 c0 01             	add    $0x1,%eax
   37423:	83 c6 08             	add    $0x8,%esi
   37426:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   3742c:	89 5e fc             	mov    %ebx,-0x4(%esi)
   3742f:	01 da                	add    %ebx,%edx
   37431:	83 f8 07             	cmp    $0x7,%eax
   37434:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
   3743a:	0f 8f 80 02 00 00    	jg     376c0 <_svfiprintf_r+0xb40>
   37440:	f6 85 64 ff ff ff 04 	testb  $0x4,-0x9c(%ebp)
   37447:	0f 84 b9 00 00 00    	je     37506 <_svfiprintf_r+0x986>
   3744d:	8b bd 54 ff ff ff    	mov    -0xac(%ebp),%edi
   37453:	2b bd 60 ff ff ff    	sub    -0xa0(%ebp),%edi
   37459:	85 ff                	test   %edi,%edi
   3745b:	0f 8e a5 00 00 00    	jle    37506 <_svfiprintf_r+0x986>
   37461:	83 ff 10             	cmp    $0x10,%edi
   37464:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   3746a:	8d 9d 74 ff ff ff    	lea    -0x8c(%ebp),%ebx
   37470:	7e 71                	jle    374e3 <_svfiprintf_r+0x963>
   37472:	89 f1                	mov    %esi,%ecx
   37474:	8b 75 08             	mov    0x8(%ebp),%esi
   37477:	eb 0f                	jmp    37488 <_svfiprintf_r+0x908>
   37479:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   37480:	83 ef 10             	sub    $0x10,%edi
   37483:	83 ff 10             	cmp    $0x10,%edi
   37486:	7e 59                	jle    374e1 <_svfiprintf_r+0x961>
   37488:	83 c0 01             	add    $0x1,%eax
   3748b:	83 c2 10             	add    $0x10,%edx
   3748e:	c7 01 9c 92 03 00    	movl   $0x3929c,(%ecx)
   37494:	83 c1 08             	add    $0x8,%ecx
   37497:	c7 41 fc 10 00 00 00 	movl   $0x10,-0x4(%ecx)
   3749e:	83 f8 07             	cmp    $0x7,%eax
   374a1:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
   374a7:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   374ad:	7e d1                	jle    37480 <_svfiprintf_r+0x900>
   374af:	8b 45 0c             	mov    0xc(%ebp),%eax
   374b2:	89 5c 24 08          	mov    %ebx,0x8(%esp)
   374b6:	89 34 24             	mov    %esi,(%esp)
   374b9:	89 44 24 04          	mov    %eax,0x4(%esp)
   374bd:	e8 ce f4 ff ff       	call   36990 <__ssprint_r>
   374c2:	85 c0                	test   %eax,%eax
   374c4:	0f 85 be 00 00 00    	jne    37588 <_svfiprintf_r+0xa08>
   374ca:	83 ef 10             	sub    $0x10,%edi
   374cd:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
   374d3:	83 ff 10             	cmp    $0x10,%edi
   374d6:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   374dc:	8d 4d a8             	lea    -0x58(%ebp),%ecx
   374df:	7f a7                	jg     37488 <_svfiprintf_r+0x908>
   374e1:	89 ce                	mov    %ecx,%esi
   374e3:	83 c0 01             	add    $0x1,%eax
   374e6:	01 fa                	add    %edi,%edx
   374e8:	83 f8 07             	cmp    $0x7,%eax
   374eb:	c7 06 9c 92 03 00    	movl   $0x3929c,(%esi)
   374f1:	89 7e 04             	mov    %edi,0x4(%esi)
   374f4:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
   374fa:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   37500:	0f 8f ee 02 00 00    	jg     377f4 <_svfiprintf_r+0xc74>
   37506:	8b 85 54 ff ff ff    	mov    -0xac(%ebp),%eax
   3750c:	8b b5 60 ff ff ff    	mov    -0xa0(%ebp),%esi
   37512:	39 c6                	cmp    %eax,%esi
   37514:	0f 4d c6             	cmovge %esi,%eax
   37517:	01 85 50 ff ff ff    	add    %eax,-0xb0(%ebp)
   3751d:	85 d2                	test   %edx,%edx
   3751f:	0f 85 d3 01 00 00    	jne    376f8 <_svfiprintf_r+0xb78>
   37525:	c7 85 78 ff ff ff 00 	movl   $0x0,-0x88(%ebp)
   3752c:	00 00 00 
   3752f:	8d 75 a8             	lea    -0x58(%ebp),%esi
   37532:	e9 a7 f6 ff ff       	jmp    36bde <_svfiprintf_r+0x5e>
   37537:	90                   	nop
   37538:	84 d2                	test   %dl,%dl
   3753a:	75 6c                	jne    375a8 <_svfiprintf_r+0xa28>
   3753c:	f6 85 64 ff ff ff 01 	testb  $0x1,-0x9c(%ebp)
   37543:	74 63                	je     375a8 <_svfiprintf_r+0xa28>
   37545:	8b 85 3c ff ff ff    	mov    -0xc4(%ebp),%eax
   3754b:	8d 5d a7             	lea    -0x59(%ebp),%ebx
   3754e:	c6 45 a7 30          	movb   $0x30,-0x59(%ebp)
   37552:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
   37558:	e9 13 f8 ff ff       	jmp    36d70 <_svfiprintf_r+0x1f0>
   3755d:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
   37563:	85 c0                	test   %eax,%eax
   37565:	74 21                	je     37588 <_svfiprintf_r+0xa08>
   37567:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   3756d:	89 44 24 08          	mov    %eax,0x8(%esp)
   37571:	8b 45 0c             	mov    0xc(%ebp),%eax
   37574:	89 44 24 04          	mov    %eax,0x4(%esp)
   37578:	8b 45 08             	mov    0x8(%ebp),%eax
   3757b:	89 04 24             	mov    %eax,(%esp)
   3757e:	e8 0d f4 ff ff       	call   36990 <__ssprint_r>
   37583:	90                   	nop
   37584:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   37588:	8b 75 0c             	mov    0xc(%ebp),%esi
   3758b:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
   37590:	f6 46 0c 40          	testb  $0x40,0xc(%esi)
   37594:	0f 44 85 50 ff ff ff 	cmove  -0xb0(%ebp),%eax
   3759b:	81 c4 cc 00 00 00    	add    $0xcc,%esp
   375a1:	5b                   	pop    %ebx
   375a2:	5e                   	pop    %esi
   375a3:	5f                   	pop    %edi
   375a4:	5d                   	pop    %ebp
   375a5:	c3                   	ret    
   375a6:	66 90                	xchg   %ax,%ax
   375a8:	c7 85 58 ff ff ff 00 	movl   $0x0,-0xa8(%ebp)
   375af:	00 00 00 
   375b2:	8d 5d a8             	lea    -0x58(%ebp),%ebx
   375b5:	e9 b6 f7 ff ff       	jmp    36d70 <_svfiprintf_r+0x1f0>
   375ba:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   375c0:	8b bd 54 ff ff ff    	mov    -0xac(%ebp),%edi
   375c6:	2b bd 60 ff ff ff    	sub    -0xa0(%ebp),%edi
   375cc:	85 ff                	test   %edi,%edi
   375ce:	0f 8e 4f fd ff ff    	jle    37323 <_svfiprintf_r+0x7a3>
   375d4:	83 ff 10             	cmp    $0x10,%edi
   375d7:	0f 8e 7f 00 00 00    	jle    3765c <_svfiprintf_r+0xadc>
   375dd:	89 9d 4c ff ff ff    	mov    %ebx,-0xb4(%ebp)
   375e3:	89 f1                	mov    %esi,%ecx
   375e5:	8b 5d 08             	mov    0x8(%ebp),%ebx
   375e8:	8b 75 0c             	mov    0xc(%ebp),%esi
   375eb:	eb 0b                	jmp    375f8 <_svfiprintf_r+0xa78>
   375ed:	8d 76 00             	lea    0x0(%esi),%esi
   375f0:	83 ef 10             	sub    $0x10,%edi
   375f3:	83 ff 10             	cmp    $0x10,%edi
   375f6:	7e 5c                	jle    37654 <_svfiprintf_r+0xad4>
   375f8:	83 c0 01             	add    $0x1,%eax
   375fb:	83 c2 10             	add    $0x10,%edx
   375fe:	c7 01 8c 92 03 00    	movl   $0x3928c,(%ecx)
   37604:	83 c1 08             	add    $0x8,%ecx
   37607:	c7 41 fc 10 00 00 00 	movl   $0x10,-0x4(%ecx)
   3760e:	83 f8 07             	cmp    $0x7,%eax
   37611:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
   37617:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   3761d:	7e d1                	jle    375f0 <_svfiprintf_r+0xa70>
   3761f:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   37625:	89 44 24 08          	mov    %eax,0x8(%esp)
   37629:	89 74 24 04          	mov    %esi,0x4(%esp)
   3762d:	89 1c 24             	mov    %ebx,(%esp)
   37630:	e8 5b f3 ff ff       	call   36990 <__ssprint_r>
   37635:	85 c0                	test   %eax,%eax
   37637:	0f 85 4b ff ff ff    	jne    37588 <_svfiprintf_r+0xa08>
   3763d:	83 ef 10             	sub    $0x10,%edi
   37640:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
   37646:	83 ff 10             	cmp    $0x10,%edi
   37649:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   3764f:	8d 4d a8             	lea    -0x58(%ebp),%ecx
   37652:	7f a4                	jg     375f8 <_svfiprintf_r+0xa78>
   37654:	8b 9d 4c ff ff ff    	mov    -0xb4(%ebp),%ebx
   3765a:	89 ce                	mov    %ecx,%esi
   3765c:	83 c0 01             	add    $0x1,%eax
   3765f:	01 fa                	add    %edi,%edx
   37661:	c7 06 8c 92 03 00    	movl   $0x3928c,(%esi)
   37667:	83 c6 08             	add    $0x8,%esi
   3766a:	89 7e fc             	mov    %edi,-0x4(%esi)
   3766d:	83 f8 07             	cmp    $0x7,%eax
   37670:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
   37676:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
   3767c:	0f 8e a1 fc ff ff    	jle    37323 <_svfiprintf_r+0x7a3>
   37682:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   37688:	89 44 24 08          	mov    %eax,0x8(%esp)
   3768c:	8b 45 0c             	mov    0xc(%ebp),%eax
   3768f:	89 44 24 04          	mov    %eax,0x4(%esp)
   37693:	8b 45 08             	mov    0x8(%ebp),%eax
   37696:	89 04 24             	mov    %eax,(%esp)
   37699:	e8 f2 f2 ff ff       	call   36990 <__ssprint_r>
   3769e:	85 c0                	test   %eax,%eax
   376a0:	0f 85 e2 fe ff ff    	jne    37588 <_svfiprintf_r+0xa08>
   376a6:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
   376ac:	8d 75 a8             	lea    -0x58(%ebp),%esi
   376af:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   376b5:	e9 69 fc ff ff       	jmp    37323 <_svfiprintf_r+0x7a3>
   376ba:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   376c0:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   376c6:	89 44 24 08          	mov    %eax,0x8(%esp)
   376ca:	8b 45 0c             	mov    0xc(%ebp),%eax
   376cd:	89 44 24 04          	mov    %eax,0x4(%esp)
   376d1:	8b 45 08             	mov    0x8(%ebp),%eax
   376d4:	89 04 24             	mov    %eax,(%esp)
   376d7:	e8 b4 f2 ff ff       	call   36990 <__ssprint_r>
   376dc:	85 c0                	test   %eax,%eax
   376de:	0f 85 a4 fe ff ff    	jne    37588 <_svfiprintf_r+0xa08>
   376e4:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
   376ea:	8d 75 a8             	lea    -0x58(%ebp),%esi
   376ed:	e9 4e fd ff ff       	jmp    37440 <_svfiprintf_r+0x8c0>
   376f2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   376f8:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   376fe:	89 44 24 08          	mov    %eax,0x8(%esp)
   37702:	8b 45 0c             	mov    0xc(%ebp),%eax
   37705:	89 44 24 04          	mov    %eax,0x4(%esp)
   37709:	8b 45 08             	mov    0x8(%ebp),%eax
   3770c:	89 04 24             	mov    %eax,(%esp)
   3770f:	e8 7c f2 ff ff       	call   36990 <__ssprint_r>
   37714:	85 c0                	test   %eax,%eax
   37716:	0f 84 09 fe ff ff    	je     37525 <_svfiprintf_r+0x9a5>
   3771c:	e9 67 fe ff ff       	jmp    37588 <_svfiprintf_r+0xa08>
   37721:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   37728:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   3772e:	89 44 24 08          	mov    %eax,0x8(%esp)
   37732:	8b 45 0c             	mov    0xc(%ebp),%eax
   37735:	89 44 24 04          	mov    %eax,0x4(%esp)
   37739:	8b 45 08             	mov    0x8(%ebp),%eax
   3773c:	89 04 24             	mov    %eax,(%esp)
   3773f:	e8 4c f2 ff ff       	call   36990 <__ssprint_r>
   37744:	85 c0                	test   %eax,%eax
   37746:	0f 85 3c fe ff ff    	jne    37588 <_svfiprintf_r+0xa08>
   3774c:	8d 75 a8             	lea    -0x58(%ebp),%esi
   3774f:	e9 e9 f4 ff ff       	jmp    36c3d <_svfiprintf_r+0xbd>
   37754:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   37758:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   3775e:	89 44 24 08          	mov    %eax,0x8(%esp)
   37762:	8b 45 0c             	mov    0xc(%ebp),%eax
   37765:	89 44 24 04          	mov    %eax,0x4(%esp)
   37769:	8b 45 08             	mov    0x8(%ebp),%eax
   3776c:	89 04 24             	mov    %eax,(%esp)
   3776f:	e8 1c f2 ff ff       	call   36990 <__ssprint_r>
   37774:	85 c0                	test   %eax,%eax
   37776:	0f 85 0c fe ff ff    	jne    37588 <_svfiprintf_r+0xa08>
   3777c:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
   37782:	8d 75 a8             	lea    -0x58(%ebp),%esi
   37785:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   3778b:	e9 83 fb ff ff       	jmp    37313 <_svfiprintf_r+0x793>
   37790:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   37796:	89 44 24 08          	mov    %eax,0x8(%esp)
   3779a:	8b 45 0c             	mov    0xc(%ebp),%eax
   3779d:	89 44 24 04          	mov    %eax,0x4(%esp)
   377a1:	8b 45 08             	mov    0x8(%ebp),%eax
   377a4:	89 04 24             	mov    %eax,(%esp)
   377a7:	e8 e4 f1 ff ff       	call   36990 <__ssprint_r>
   377ac:	85 c0                	test   %eax,%eax
   377ae:	0f 85 d4 fd ff ff    	jne    37588 <_svfiprintf_r+0xa08>
   377b4:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
   377ba:	8d 75 a8             	lea    -0x58(%ebp),%esi
   377bd:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
   377c3:	e9 13 fb ff ff       	jmp    372db <_svfiprintf_r+0x75b>
   377c8:	83 f9 09             	cmp    $0x9,%ecx
   377cb:	76 56                	jbe    37823 <_svfiprintf_r+0xca3>
   377cd:	8d 5d a8             	lea    -0x58(%ebp),%ebx
   377d0:	b8 cd cc cc cc       	mov    $0xcccccccd,%eax
   377d5:	83 eb 01             	sub    $0x1,%ebx
   377d8:	f7 e1                	mul    %ecx
   377da:	c1 ea 03             	shr    $0x3,%edx
   377dd:	8d 04 92             	lea    (%edx,%edx,4),%eax
   377e0:	01 c0                	add    %eax,%eax
   377e2:	29 c1                	sub    %eax,%ecx
   377e4:	83 c1 30             	add    $0x30,%ecx
   377e7:	85 d2                	test   %edx,%edx
   377e9:	88 0b                	mov    %cl,(%ebx)
   377eb:	89 d1                	mov    %edx,%ecx
   377ed:	75 e1                	jne    377d0 <_svfiprintf_r+0xc50>
   377ef:	e9 71 f5 ff ff       	jmp    36d65 <_svfiprintf_r+0x1e5>
   377f4:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
   377fa:	89 44 24 08          	mov    %eax,0x8(%esp)
   377fe:	8b 45 0c             	mov    0xc(%ebp),%eax
   37801:	89 44 24 04          	mov    %eax,0x4(%esp)
   37805:	8b 45 08             	mov    0x8(%ebp),%eax
   37808:	89 04 24             	mov    %eax,(%esp)
   3780b:	e8 80 f1 ff ff       	call   36990 <__ssprint_r>
   37810:	85 c0                	test   %eax,%eax
   37812:	0f 85 70 fd ff ff    	jne    37588 <_svfiprintf_r+0xa08>
   37818:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
   3781e:	e9 e3 fc ff ff       	jmp    37506 <_svfiprintf_r+0x986>
   37823:	8b 85 3c ff ff ff    	mov    -0xc4(%ebp),%eax
   37829:	83 c1 30             	add    $0x30,%ecx
   3782c:	88 4d a7             	mov    %cl,-0x59(%ebp)
   3782f:	8d 5d a7             	lea    -0x59(%ebp),%ebx
   37832:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
   37838:	e9 33 f5 ff ff       	jmp    36d70 <_svfiprintf_r+0x1f0>
   3783d:	8b 45 14             	mov    0x14(%ebp),%eax
   37840:	8b 9d 50 ff ff ff    	mov    -0xb0(%ebp),%ebx
   37846:	8b 00                	mov    (%eax),%eax
   37848:	89 18                	mov    %ebx,(%eax)
   3784a:	8b 45 14             	mov    0x14(%ebp),%eax
   3784d:	83 c0 04             	add    $0x4,%eax
   37850:	89 45 14             	mov    %eax,0x14(%ebp)
   37853:	e9 86 f3 ff ff       	jmp    36bde <_svfiprintf_r+0x5e>
   37858:	0f b7 0b             	movzwl (%ebx),%ecx
   3785b:	83 c3 04             	add    $0x4,%ebx
   3785e:	89 5d 14             	mov    %ebx,0x14(%ebp)
   37861:	e9 95 f8 ff ff       	jmp    370fb <_svfiprintf_r+0x57b>
   37866:	0f bf 08             	movswl (%eax),%ecx
   37869:	83 c0 04             	add    $0x4,%eax
   3786c:	89 45 14             	mov    %eax,0x14(%ebp)
   3786f:	85 c9                	test   %ecx,%ecx
   37871:	0f 89 0d f7 ff ff    	jns    36f84 <_svfiprintf_r+0x404>
   37877:	f7 d9                	neg    %ecx
   37879:	bf 2d 00 00 00       	mov    $0x2d,%edi
   3787e:	c6 85 71 ff ff ff 2d 	movb   $0x2d,-0x8f(%ebp)
   37885:	ba 01 00 00 00       	mov    $0x1,%edx
   3788a:	e9 7a f4 ff ff       	jmp    36d09 <_svfiprintf_r+0x189>
   3788f:	89 1c 24             	mov    %ebx,(%esp)
   37892:	e8 79 f0 ff ff       	call   36910 <strlen>
   37897:	8b 95 60 ff ff ff    	mov    -0xa0(%ebp),%edx
   3789d:	0f b6 bd 71 ff ff ff 	movzbl -0x8f(%ebp),%edi
   378a4:	c7 85 5c ff ff ff 00 	movl   $0x0,-0xa4(%ebp)
   378ab:	00 00 00 
   378ae:	89 55 14             	mov    %edx,0x14(%ebp)
   378b1:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
   378b7:	e9 b4 f4 ff ff       	jmp    36d70 <_svfiprintf_r+0x1f0>
   378bc:	8b 45 08             	mov    0x8(%ebp),%eax
   378bf:	c7 44 24 04 40 00 00 	movl   $0x40,0x4(%esp)
   378c6:	00 
   378c7:	89 04 24             	mov    %eax,(%esp)
   378ca:	e8 41 d9 ff ff       	call   35210 <_malloc_r>
   378cf:	8b 75 0c             	mov    0xc(%ebp),%esi
   378d2:	85 c0                	test   %eax,%eax
   378d4:	89 06                	mov    %eax,(%esi)
   378d6:	89 46 10             	mov    %eax,0x10(%esi)
   378d9:	0f 84 a3 00 00 00    	je     37982 <_svfiprintf_r+0xe02>
   378df:	8b 45 0c             	mov    0xc(%ebp),%eax
   378e2:	c7 40 14 40 00 00 00 	movl   $0x40,0x14(%eax)
   378e9:	e9 b2 f2 ff ff       	jmp    36ba0 <_svfiprintf_r+0x20>
   378ee:	8b bd 5c ff ff ff    	mov    -0xa4(%ebp),%edi
   378f4:	b8 06 00 00 00       	mov    $0x6,%eax
   378f9:	89 55 14             	mov    %edx,0x14(%ebp)
   378fc:	83 ff 06             	cmp    $0x6,%edi
   378ff:	0f 46 c7             	cmovbe %edi,%eax
   37902:	85 c0                	test   %eax,%eax
   37904:	0f 49 d8             	cmovns %eax,%ebx
   37907:	89 9d 60 ff ff ff    	mov    %ebx,-0xa0(%ebp)
   3790d:	bb e4 8d 03 00       	mov    $0x38de4,%ebx
   37912:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
   37918:	e9 61 f8 ff ff       	jmp    3717e <_svfiprintf_r+0x5fe>
   3791d:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
   37923:	0f b6 bd 71 ff ff ff 	movzbl -0x8f(%ebp),%edi
   3792a:	89 55 14             	mov    %edx,0x14(%ebp)
   3792d:	c7 85 5c ff ff ff 00 	movl   $0x0,-0xa4(%ebp)
   37934:	00 00 00 
   37937:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
   3793d:	e9 2e f4 ff ff       	jmp    36d70 <_svfiprintf_r+0x1f0>
   37942:	89 da                	mov    %ebx,%edx
   37944:	c7 85 5c ff ff ff 00 	movl   $0x0,-0xa4(%ebp)
   3794b:	00 00 00 
   3794e:	e9 29 f3 ff ff       	jmp    36c7c <_svfiprintf_r+0xfc>
   37953:	8b 4d 14             	mov    0x14(%ebp),%ecx
   37956:	89 da                	mov    %ebx,%edx
   37958:	8b 45 14             	mov    0x14(%ebp),%eax
   3795b:	8b 09                	mov    (%ecx),%ecx
   3795d:	83 c0 04             	add    $0x4,%eax
   37960:	89 45 14             	mov    %eax,0x14(%ebp)
   37963:	85 c9                	test   %ecx,%ecx
   37965:	89 8d 5c ff ff ff    	mov    %ecx,-0xa4(%ebp)
   3796b:	0f 89 26 f3 ff ff    	jns    36c97 <_svfiprintf_r+0x117>
   37971:	c7 85 5c ff ff ff ff 	movl   $0xffffffff,-0xa4(%ebp)
   37978:	ff ff ff 
   3797b:	89 d0                	mov    %edx,%eax
   3797d:	e9 f4 f2 ff ff       	jmp    36c76 <_svfiprintf_r+0xf6>
   37982:	8b 45 08             	mov    0x8(%ebp),%eax
   37985:	c7 00 0c 00 00 00    	movl   $0xc,(%eax)
   3798b:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
   37990:	e9 06 fc ff ff       	jmp    3759b <_svfiprintf_r+0xa1b>
   37995:	66 90                	xchg   %ax,%ax
   37997:	66 90                	xchg   %ax,%ax
   37999:	66 90                	xchg   %ax,%ax
   3799b:	66 90                	xchg   %ax,%ax
   3799d:	66 90                	xchg   %ax,%ax
   3799f:	90                   	nop

000379a0 <_calloc_r>:
   379a0:	55                   	push   %ebp
   379a1:	89 e5                	mov    %esp,%ebp
   379a3:	53                   	push   %ebx
   379a4:	83 ec 14             	sub    $0x14,%esp
   379a7:	8b 45 10             	mov    0x10(%ebp),%eax
   379aa:	0f af 45 0c          	imul   0xc(%ebp),%eax
   379ae:	89 44 24 04          	mov    %eax,0x4(%esp)
   379b2:	8b 45 08             	mov    0x8(%ebp),%eax
   379b5:	89 04 24             	mov    %eax,(%esp)
   379b8:	e8 53 d8 ff ff       	call   35210 <_malloc_r>
   379bd:	85 c0                	test   %eax,%eax
   379bf:	89 c3                	mov    %eax,%ebx
   379c1:	0f 84 91 00 00 00    	je     37a58 <_calloc_r+0xb8>
   379c7:	8b 40 fc             	mov    -0x4(%eax),%eax
   379ca:	83 e0 fc             	and    $0xfffffffc,%eax
   379cd:	83 e8 04             	sub    $0x4,%eax
   379d0:	83 f8 24             	cmp    $0x24,%eax
   379d3:	77 63                	ja     37a38 <_calloc_r+0x98>
   379d5:	83 f8 13             	cmp    $0x13,%eax
   379d8:	89 da                	mov    %ebx,%edx
   379da:	77 1c                	ja     379f8 <_calloc_r+0x58>
   379dc:	c7 02 00 00 00 00    	movl   $0x0,(%edx)
   379e2:	89 d8                	mov    %ebx,%eax
   379e4:	c7 42 04 00 00 00 00 	movl   $0x0,0x4(%edx)
   379eb:	c7 42 08 00 00 00 00 	movl   $0x0,0x8(%edx)
   379f2:	83 c4 14             	add    $0x14,%esp
   379f5:	5b                   	pop    %ebx
   379f6:	5d                   	pop    %ebp
   379f7:	c3                   	ret    
   379f8:	83 f8 1b             	cmp    $0x1b,%eax
   379fb:	c7 03 00 00 00 00    	movl   $0x0,(%ebx)
   37a01:	8d 53 08             	lea    0x8(%ebx),%edx
   37a04:	c7 43 04 00 00 00 00 	movl   $0x0,0x4(%ebx)
   37a0b:	76 cf                	jbe    379dc <_calloc_r+0x3c>
   37a0d:	83 f8 24             	cmp    $0x24,%eax
   37a10:	c7 43 08 00 00 00 00 	movl   $0x0,0x8(%ebx)
   37a17:	8d 53 10             	lea    0x10(%ebx),%edx
   37a1a:	c7 43 0c 00 00 00 00 	movl   $0x0,0xc(%ebx)
   37a21:	75 b9                	jne    379dc <_calloc_r+0x3c>
   37a23:	c7 43 10 00 00 00 00 	movl   $0x0,0x10(%ebx)
   37a2a:	8d 53 18             	lea    0x18(%ebx),%edx
   37a2d:	c7 43 14 00 00 00 00 	movl   $0x0,0x14(%ebx)
   37a34:	eb a6                	jmp    379dc <_calloc_r+0x3c>
   37a36:	66 90                	xchg   %ax,%ax
   37a38:	89 1c 24             	mov    %ebx,(%esp)
   37a3b:	89 44 24 08          	mov    %eax,0x8(%esp)
   37a3f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
   37a46:	00 
   37a47:	e8 50 a2 ff ff       	call   31c9c <memset>
   37a4c:	83 c4 14             	add    $0x14,%esp
   37a4f:	89 d8                	mov    %ebx,%eax
   37a51:	5b                   	pop    %ebx
   37a52:	5d                   	pop    %ebp
   37a53:	c3                   	ret    
   37a54:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   37a58:	31 c0                	xor    %eax,%eax
   37a5a:	eb 96                	jmp    379f2 <_calloc_r+0x52>
   37a5c:	66 90                	xchg   %ax,%ax
   37a5e:	66 90                	xchg   %ax,%ax

00037a60 <_malloc_trim_r>:
   37a60:	55                   	push   %ebp
   37a61:	89 e5                	mov    %esp,%ebp
   37a63:	57                   	push   %edi
   37a64:	56                   	push   %esi
   37a65:	53                   	push   %ebx
   37a66:	83 ec 1c             	sub    $0x1c,%esp
   37a69:	8b 75 08             	mov    0x8(%ebp),%esi
   37a6c:	89 34 24             	mov    %esi,(%esp)
   37a6f:	e8 7c df ff ff       	call   359f0 <__malloc_lock>
   37a74:	a1 48 c5 03 00       	mov    0x3c548,%eax
   37a79:	8b 58 04             	mov    0x4(%eax),%ebx
   37a7c:	83 e3 fc             	and    $0xfffffffc,%ebx
   37a7f:	89 d8                	mov    %ebx,%eax
   37a81:	2b 45 0c             	sub    0xc(%ebp),%eax
   37a84:	05 ef 0f 00 00       	add    $0xfef,%eax
   37a89:	25 00 f0 ff ff       	and    $0xfffff000,%eax
   37a8e:	8d b8 00 f0 ff ff    	lea    -0x1000(%eax),%edi
   37a94:	81 ff ff 0f 00 00    	cmp    $0xfff,%edi
   37a9a:	7e 1c                	jle    37ab8 <_malloc_trim_r+0x58>
   37a9c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
   37aa3:	00 
   37aa4:	89 34 24             	mov    %esi,(%esp)
   37aa7:	e8 44 ed ff ff       	call   367f0 <_sbrk_r>
   37aac:	8b 15 48 c5 03 00    	mov    0x3c548,%edx
   37ab2:	01 da                	add    %ebx,%edx
   37ab4:	39 d0                	cmp    %edx,%eax
   37ab6:	74 18                	je     37ad0 <_malloc_trim_r+0x70>
   37ab8:	89 34 24             	mov    %esi,(%esp)
   37abb:	e8 40 df ff ff       	call   35a00 <__malloc_unlock>
   37ac0:	83 c4 1c             	add    $0x1c,%esp
   37ac3:	31 c0                	xor    %eax,%eax
   37ac5:	5b                   	pop    %ebx
   37ac6:	5e                   	pop    %esi
   37ac7:	5f                   	pop    %edi
   37ac8:	5d                   	pop    %ebp
   37ac9:	c3                   	ret    
   37aca:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   37ad0:	89 f8                	mov    %edi,%eax
   37ad2:	f7 d8                	neg    %eax
   37ad4:	89 44 24 04          	mov    %eax,0x4(%esp)
   37ad8:	89 34 24             	mov    %esi,(%esp)
   37adb:	e8 10 ed ff ff       	call   367f0 <_sbrk_r>
   37ae0:	83 f8 ff             	cmp    $0xffffffff,%eax
   37ae3:	74 2b                	je     37b10 <_malloc_trim_r+0xb0>
   37ae5:	a1 48 c5 03 00       	mov    0x3c548,%eax
   37aea:	29 fb                	sub    %edi,%ebx
   37aec:	83 cb 01             	or     $0x1,%ebx
   37aef:	29 3d 20 f0 06 00    	sub    %edi,0x6f020
   37af5:	89 58 04             	mov    %ebx,0x4(%eax)
   37af8:	89 34 24             	mov    %esi,(%esp)
   37afb:	e8 00 df ff ff       	call   35a00 <__malloc_unlock>
   37b00:	83 c4 1c             	add    $0x1c,%esp
   37b03:	b8 01 00 00 00       	mov    $0x1,%eax
   37b08:	5b                   	pop    %ebx
   37b09:	5e                   	pop    %esi
   37b0a:	5f                   	pop    %edi
   37b0b:	5d                   	pop    %ebp
   37b0c:	c3                   	ret    
   37b0d:	8d 76 00             	lea    0x0(%esi),%esi
   37b10:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
   37b17:	00 
   37b18:	89 34 24             	mov    %esi,(%esp)
   37b1b:	e8 d0 ec ff ff       	call   367f0 <_sbrk_r>
   37b20:	8b 15 48 c5 03 00    	mov    0x3c548,%edx
   37b26:	89 c1                	mov    %eax,%ecx
   37b28:	29 d1                	sub    %edx,%ecx
   37b2a:	83 f9 0f             	cmp    $0xf,%ecx
   37b2d:	7e 89                	jle    37ab8 <_malloc_trim_r+0x58>
   37b2f:	2b 05 20 c5 03 00    	sub    0x3c520,%eax
   37b35:	83 c9 01             	or     $0x1,%ecx
   37b38:	89 4a 04             	mov    %ecx,0x4(%edx)
   37b3b:	a3 20 f0 06 00       	mov    %eax,0x6f020
   37b40:	e9 73 ff ff ff       	jmp    37ab8 <_malloc_trim_r+0x58>
   37b45:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   37b49:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

00037b50 <_free_r>:
   37b50:	55                   	push   %ebp
   37b51:	89 e5                	mov    %esp,%ebp
   37b53:	57                   	push   %edi
   37b54:	56                   	push   %esi
   37b55:	53                   	push   %ebx
   37b56:	83 ec 1c             	sub    $0x1c,%esp
   37b59:	8b 75 0c             	mov    0xc(%ebp),%esi
   37b5c:	8b 45 08             	mov    0x8(%ebp),%eax
   37b5f:	85 f6                	test   %esi,%esi
   37b61:	89 45 e4             	mov    %eax,-0x1c(%ebp)
   37b64:	0f 84 fe 00 00 00    	je     37c68 <_free_r+0x118>
   37b6a:	89 04 24             	mov    %eax,(%esp)
   37b6d:	e8 7e de ff ff       	call   359f0 <__malloc_lock>
   37b72:	8b 7e fc             	mov    -0x4(%esi),%edi
   37b75:	8d 56 f8             	lea    -0x8(%esi),%edx
   37b78:	89 f8                	mov    %edi,%eax
   37b7a:	83 e0 fe             	and    $0xfffffffe,%eax
   37b7d:	8d 0c 02             	lea    (%edx,%eax,1),%ecx
   37b80:	8b 59 04             	mov    0x4(%ecx),%ebx
   37b83:	83 e3 fc             	and    $0xfffffffc,%ebx
   37b86:	39 0d 48 c5 03 00    	cmp    %ecx,0x3c548
   37b8c:	0f 84 0e 01 00 00    	je     37ca0 <_free_r+0x150>
   37b92:	83 e7 01             	and    $0x1,%edi
   37b95:	89 59 04             	mov    %ebx,0x4(%ecx)
   37b98:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
   37b9f:	75 1f                	jne    37bc0 <_free_r+0x70>
   37ba1:	8b 76 f8             	mov    -0x8(%esi),%esi
   37ba4:	29 f2                	sub    %esi,%edx
   37ba6:	01 f0                	add    %esi,%eax
   37ba8:	8b 72 08             	mov    0x8(%edx),%esi
   37bab:	81 fe 48 c5 03 00    	cmp    $0x3c548,%esi
   37bb1:	0f 84 39 01 00 00    	je     37cf0 <_free_r+0x1a0>
   37bb7:	8b 7a 0c             	mov    0xc(%edx),%edi
   37bba:	89 7e 0c             	mov    %edi,0xc(%esi)
   37bbd:	89 77 08             	mov    %esi,0x8(%edi)
   37bc0:	f6 44 19 04 01       	testb  $0x1,0x4(%ecx,%ebx,1)
   37bc5:	75 21                	jne    37be8 <_free_r+0x98>
   37bc7:	8b 75 e0             	mov    -0x20(%ebp),%esi
   37bca:	01 d8                	add    %ebx,%eax
   37bcc:	8b 59 08             	mov    0x8(%ecx),%ebx
   37bcf:	85 f6                	test   %esi,%esi
   37bd1:	75 0c                	jne    37bdf <_free_r+0x8f>
   37bd3:	81 fb 48 c5 03 00    	cmp    $0x3c548,%ebx
   37bd9:	0f 84 21 01 00 00    	je     37d00 <_free_r+0x1b0>
   37bdf:	8b 49 0c             	mov    0xc(%ecx),%ecx
   37be2:	89 4b 0c             	mov    %ecx,0xc(%ebx)
   37be5:	89 59 08             	mov    %ebx,0x8(%ecx)
   37be8:	89 c1                	mov    %eax,%ecx
   37bea:	83 c9 01             	or     $0x1,%ecx
   37bed:	89 4a 04             	mov    %ecx,0x4(%edx)
   37bf0:	8b 4d e0             	mov    -0x20(%ebp),%ecx
   37bf3:	89 04 02             	mov    %eax,(%edx,%eax,1)
   37bf6:	85 c9                	test   %ecx,%ecx
   37bf8:	75 56                	jne    37c50 <_free_r+0x100>
   37bfa:	3d ff 01 00 00       	cmp    $0x1ff,%eax
   37bff:	76 6f                	jbe    37c70 <_free_r+0x120>
   37c01:	89 c1                	mov    %eax,%ecx
   37c03:	c1 e9 09             	shr    $0x9,%ecx
   37c06:	83 f9 04             	cmp    $0x4,%ecx
   37c09:	0f 87 21 01 00 00    	ja     37d30 <_free_r+0x1e0>
   37c0f:	89 c1                	mov    %eax,%ecx
   37c11:	c1 e9 06             	shr    $0x6,%ecx
   37c14:	83 c1 38             	add    $0x38,%ecx
   37c17:	8d 1c 09             	lea    (%ecx,%ecx,1),%ebx
   37c1a:	8d 34 9d 40 c5 03 00 	lea    0x3c540(,%ebx,4),%esi
   37c21:	8b 5e 08             	mov    0x8(%esi),%ebx
   37c24:	39 f3                	cmp    %esi,%ebx
   37c26:	0f 84 14 01 00 00    	je     37d40 <_free_r+0x1f0>
   37c2c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   37c30:	8b 4b 04             	mov    0x4(%ebx),%ecx
   37c33:	83 e1 fc             	and    $0xfffffffc,%ecx
   37c36:	39 c8                	cmp    %ecx,%eax
   37c38:	73 07                	jae    37c41 <_free_r+0xf1>
   37c3a:	8b 5b 08             	mov    0x8(%ebx),%ebx
   37c3d:	39 de                	cmp    %ebx,%esi
   37c3f:	75 ef                	jne    37c30 <_free_r+0xe0>
   37c41:	8b 43 0c             	mov    0xc(%ebx),%eax
   37c44:	89 42 0c             	mov    %eax,0xc(%edx)
   37c47:	89 5a 08             	mov    %ebx,0x8(%edx)
   37c4a:	89 50 08             	mov    %edx,0x8(%eax)
   37c4d:	89 53 0c             	mov    %edx,0xc(%ebx)
   37c50:	8b 45 e4             	mov    -0x1c(%ebp),%eax
   37c53:	89 45 08             	mov    %eax,0x8(%ebp)
   37c56:	83 c4 1c             	add    $0x1c,%esp
   37c59:	5b                   	pop    %ebx
   37c5a:	5e                   	pop    %esi
   37c5b:	5f                   	pop    %edi
   37c5c:	5d                   	pop    %ebp
   37c5d:	e9 9e dd ff ff       	jmp    35a00 <__malloc_unlock>
   37c62:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   37c68:	83 c4 1c             	add    $0x1c,%esp
   37c6b:	5b                   	pop    %ebx
   37c6c:	5e                   	pop    %esi
   37c6d:	5f                   	pop    %edi
   37c6e:	5d                   	pop    %ebp
   37c6f:	c3                   	ret    
   37c70:	c1 e8 03             	shr    $0x3,%eax
   37c73:	bb 01 00 00 00       	mov    $0x1,%ebx
   37c78:	89 c1                	mov    %eax,%ecx
   37c7a:	c1 f9 02             	sar    $0x2,%ecx
   37c7d:	8d 04 c5 40 c5 03 00 	lea    0x3c540(,%eax,8),%eax
   37c84:	d3 e3                	shl    %cl,%ebx
   37c86:	8b 48 08             	mov    0x8(%eax),%ecx
   37c89:	09 1d 44 c5 03 00    	or     %ebx,0x3c544
   37c8f:	89 42 0c             	mov    %eax,0xc(%edx)
   37c92:	89 4a 08             	mov    %ecx,0x8(%edx)
   37c95:	89 50 08             	mov    %edx,0x8(%eax)
   37c98:	89 51 0c             	mov    %edx,0xc(%ecx)
   37c9b:	eb b3                	jmp    37c50 <_free_r+0x100>
   37c9d:	8d 76 00             	lea    0x0(%esi),%esi
   37ca0:	01 d8                	add    %ebx,%eax
   37ca2:	83 e7 01             	and    $0x1,%edi
   37ca5:	75 13                	jne    37cba <_free_r+0x16a>
   37ca7:	8b 4e f8             	mov    -0x8(%esi),%ecx
   37caa:	29 ca                	sub    %ecx,%edx
   37cac:	01 c8                	add    %ecx,%eax
   37cae:	8b 5a 08             	mov    0x8(%edx),%ebx
   37cb1:	8b 4a 0c             	mov    0xc(%edx),%ecx
   37cb4:	89 4b 0c             	mov    %ecx,0xc(%ebx)
   37cb7:	89 59 08             	mov    %ebx,0x8(%ecx)
   37cba:	89 c1                	mov    %eax,%ecx
   37cbc:	83 c9 01             	or     $0x1,%ecx
   37cbf:	3b 05 24 c5 03 00    	cmp    0x3c524,%eax
   37cc5:	89 4a 04             	mov    %ecx,0x4(%edx)
   37cc8:	89 15 48 c5 03 00    	mov    %edx,0x3c548
   37cce:	72 80                	jb     37c50 <_free_r+0x100>
   37cd0:	a1 50 f0 06 00       	mov    0x6f050,%eax
   37cd5:	89 44 24 04          	mov    %eax,0x4(%esp)
   37cd9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
   37cdc:	89 04 24             	mov    %eax,(%esp)
   37cdf:	e8 7c fd ff ff       	call   37a60 <_malloc_trim_r>
   37ce4:	e9 67 ff ff ff       	jmp    37c50 <_free_r+0x100>
   37ce9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   37cf0:	c7 45 e0 01 00 00 00 	movl   $0x1,-0x20(%ebp)
   37cf7:	e9 c4 fe ff ff       	jmp    37bc0 <_free_r+0x70>
   37cfc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   37d00:	89 c1                	mov    %eax,%ecx
   37d02:	83 c9 01             	or     $0x1,%ecx
   37d05:	89 15 54 c5 03 00    	mov    %edx,0x3c554
   37d0b:	89 15 50 c5 03 00    	mov    %edx,0x3c550
   37d11:	c7 42 0c 48 c5 03 00 	movl   $0x3c548,0xc(%edx)
   37d18:	c7 42 08 48 c5 03 00 	movl   $0x3c548,0x8(%edx)
   37d1f:	89 4a 04             	mov    %ecx,0x4(%edx)
   37d22:	89 04 02             	mov    %eax,(%edx,%eax,1)
   37d25:	e9 26 ff ff ff       	jmp    37c50 <_free_r+0x100>
   37d2a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   37d30:	83 f9 14             	cmp    $0x14,%ecx
   37d33:	77 23                	ja     37d58 <_free_r+0x208>
   37d35:	83 c1 5b             	add    $0x5b,%ecx
   37d38:	8d 1c 09             	lea    (%ecx,%ecx,1),%ebx
   37d3b:	e9 da fe ff ff       	jmp    37c1a <_free_r+0xca>
   37d40:	c1 f9 02             	sar    $0x2,%ecx
   37d43:	b8 01 00 00 00       	mov    $0x1,%eax
   37d48:	d3 e0                	shl    %cl,%eax
   37d4a:	09 05 44 c5 03 00    	or     %eax,0x3c544
   37d50:	89 d8                	mov    %ebx,%eax
   37d52:	e9 ed fe ff ff       	jmp    37c44 <_free_r+0xf4>
   37d57:	90                   	nop
   37d58:	83 f9 54             	cmp    $0x54,%ecx
   37d5b:	77 10                	ja     37d6d <_free_r+0x21d>
   37d5d:	89 c1                	mov    %eax,%ecx
   37d5f:	c1 e9 0c             	shr    $0xc,%ecx
   37d62:	83 c1 6e             	add    $0x6e,%ecx
   37d65:	8d 1c 09             	lea    (%ecx,%ecx,1),%ebx
   37d68:	e9 ad fe ff ff       	jmp    37c1a <_free_r+0xca>
   37d6d:	81 f9 54 01 00 00    	cmp    $0x154,%ecx
   37d73:	77 10                	ja     37d85 <_free_r+0x235>
   37d75:	89 c1                	mov    %eax,%ecx
   37d77:	c1 e9 0f             	shr    $0xf,%ecx
   37d7a:	83 c1 77             	add    $0x77,%ecx
   37d7d:	8d 1c 09             	lea    (%ecx,%ecx,1),%ebx
   37d80:	e9 95 fe ff ff       	jmp    37c1a <_free_r+0xca>
   37d85:	81 f9 54 05 00 00    	cmp    $0x554,%ecx
   37d8b:	77 10                	ja     37d9d <_free_r+0x24d>
   37d8d:	89 c1                	mov    %eax,%ecx
   37d8f:	c1 e9 12             	shr    $0x12,%ecx
   37d92:	83 c1 7c             	add    $0x7c,%ecx
   37d95:	8d 1c 09             	lea    (%ecx,%ecx,1),%ebx
   37d98:	e9 7d fe ff ff       	jmp    37c1a <_free_r+0xca>
   37d9d:	bb fc 00 00 00       	mov    $0xfc,%ebx
   37da2:	b9 7e 00 00 00       	mov    $0x7e,%ecx
   37da7:	e9 6e fe ff ff       	jmp    37c1a <_free_r+0xca>
   37dac:	66 90                	xchg   %ax,%ax
   37dae:	66 90                	xchg   %ax,%ax

00037db0 <memmove>:
   37db0:	55                   	push   %ebp
   37db1:	89 e5                	mov    %esp,%ebp
   37db3:	56                   	push   %esi
   37db4:	57                   	push   %edi
   37db5:	53                   	push   %ebx
   37db6:	8b 7d 08             	mov    0x8(%ebp),%edi
   37db9:	8b 4d 10             	mov    0x10(%ebp),%ecx
   37dbc:	8b 75 0c             	mov    0xc(%ebp),%esi
   37dbf:	fc                   	cld    
   37dc0:	39 fe                	cmp    %edi,%esi
   37dc2:	73 43                	jae    37e07 <memmove+0x57>
   37dc4:	8d 5c 31 ff          	lea    -0x1(%ecx,%esi,1),%ebx
   37dc8:	39 df                	cmp    %ebx,%edi
   37dca:	77 3b                	ja     37e07 <memmove+0x57>
   37dcc:	01 ce                	add    %ecx,%esi
   37dce:	01 cf                	add    %ecx,%edi
   37dd0:	fd                   	std    
   37dd1:	83 f9 08             	cmp    $0x8,%ecx
   37dd4:	76 2b                	jbe    37e01 <memmove+0x51>
   37dd6:	89 fa                	mov    %edi,%edx
   37dd8:	89 cb                	mov    %ecx,%ebx
   37dda:	83 e2 03             	and    $0x3,%edx
   37ddd:	74 0c                	je     37deb <memmove+0x3b>
   37ddf:	89 d1                	mov    %edx,%ecx
   37de1:	4e                   	dec    %esi
   37de2:	4f                   	dec    %edi
   37de3:	29 cb                	sub    %ecx,%ebx
   37de5:	f3 a4                	rep movsb %ds:(%esi),%es:(%edi)
   37de7:	89 d9                	mov    %ebx,%ecx
   37de9:	46                   	inc    %esi
   37dea:	47                   	inc    %edi
   37deb:	c1 e9 02             	shr    $0x2,%ecx
   37dee:	83 ee 04             	sub    $0x4,%esi
   37df1:	83 ef 04             	sub    $0x4,%edi
   37df4:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
   37df6:	83 c6 04             	add    $0x4,%esi
   37df9:	83 c7 04             	add    $0x4,%edi
   37dfc:	89 d9                	mov    %ebx,%ecx
   37dfe:	83 e1 03             	and    $0x3,%ecx
   37e01:	4e                   	dec    %esi
   37e02:	4f                   	dec    %edi
   37e03:	f3 a4                	rep movsb %ds:(%esi),%es:(%edi)
   37e05:	eb 2a                	jmp    37e31 <memmove+0x81>
   37e07:	83 f9 08             	cmp    $0x8,%ecx
   37e0a:	76 23                	jbe    37e2f <memmove+0x7f>
   37e0c:	89 fa                	mov    %edi,%edx
   37e0e:	89 cb                	mov    %ecx,%ebx
   37e10:	83 e2 03             	and    $0x3,%edx
   37e13:	74 10                	je     37e25 <memmove+0x75>
   37e15:	b9 04 00 00 00       	mov    $0x4,%ecx
   37e1a:	29 d1                	sub    %edx,%ecx
   37e1c:	83 e1 03             	and    $0x3,%ecx
   37e1f:	29 cb                	sub    %ecx,%ebx
   37e21:	f3 a4                	rep movsb %ds:(%esi),%es:(%edi)
   37e23:	89 d9                	mov    %ebx,%ecx
   37e25:	c1 e9 02             	shr    $0x2,%ecx
   37e28:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
   37e2a:	89 d9                	mov    %ebx,%ecx
   37e2c:	83 e1 03             	and    $0x3,%ecx
   37e2f:	f3 a4                	rep movsb %ds:(%esi),%es:(%edi)
   37e31:	8b 45 08             	mov    0x8(%ebp),%eax
   37e34:	fc                   	cld    
   37e35:	8d 65 f4             	lea    -0xc(%ebp),%esp
   37e38:	5b                   	pop    %ebx
   37e39:	5f                   	pop    %edi
   37e3a:	5e                   	pop    %esi
   37e3b:	c9                   	leave  
   37e3c:	c3                   	ret    
   37e3d:	66 90                	xchg   %ax,%ax
   37e3f:	90                   	nop

00037e40 <_realloc_r>:
   37e40:	55                   	push   %ebp
   37e41:	89 e5                	mov    %esp,%ebp
   37e43:	57                   	push   %edi
   37e44:	56                   	push   %esi
   37e45:	53                   	push   %ebx
   37e46:	83 ec 3c             	sub    $0x3c,%esp
   37e49:	8b 45 08             	mov    0x8(%ebp),%eax
   37e4c:	8b 7d 0c             	mov    0xc(%ebp),%edi
   37e4f:	89 45 e4             	mov    %eax,-0x1c(%ebp)
   37e52:	8b 45 10             	mov    0x10(%ebp),%eax
   37e55:	85 ff                	test   %edi,%edi
   37e57:	89 45 e0             	mov    %eax,-0x20(%ebp)
   37e5a:	0f 84 50 02 00 00    	je     380b0 <_realloc_r+0x270>
   37e60:	8b 45 e4             	mov    -0x1c(%ebp),%eax
   37e63:	8d 77 f8             	lea    -0x8(%edi),%esi
   37e66:	89 04 24             	mov    %eax,(%esp)
   37e69:	e8 82 db ff ff       	call   359f0 <__malloc_lock>
   37e6e:	8b 47 fc             	mov    -0x4(%edi),%eax
   37e71:	8b 4d e0             	mov    -0x20(%ebp),%ecx
   37e74:	89 c3                	mov    %eax,%ebx
   37e76:	8d 51 0b             	lea    0xb(%ecx),%edx
   37e79:	83 e3 fc             	and    $0xfffffffc,%ebx
   37e7c:	83 fa 16             	cmp    $0x16,%edx
   37e7f:	89 45 d4             	mov    %eax,-0x2c(%ebp)
   37e82:	0f 87 00 01 00 00    	ja     37f88 <_realloc_r+0x148>
   37e88:	31 d2                	xor    %edx,%edx
   37e8a:	c7 45 d8 10 00 00 00 	movl   $0x10,-0x28(%ebp)
   37e91:	c7 45 dc 10 00 00 00 	movl   $0x10,-0x24(%ebp)
   37e98:	8b 4d e0             	mov    -0x20(%ebp),%ecx
   37e9b:	39 4d dc             	cmp    %ecx,-0x24(%ebp)
   37e9e:	0f 82 1c 02 00 00    	jb     380c0 <_realloc_r+0x280>
   37ea4:	84 d2                	test   %dl,%dl
   37ea6:	0f 85 14 02 00 00    	jne    380c0 <_realloc_r+0x280>
   37eac:	3b 5d d8             	cmp    -0x28(%ebp),%ebx
   37eaf:	0f 8d eb 00 00 00    	jge    37fa0 <_realloc_r+0x160>
   37eb5:	8b 0d 48 c5 03 00    	mov    0x3c548,%ecx
   37ebb:	8d 14 1e             	lea    (%esi,%ebx,1),%edx
   37ebe:	39 d1                	cmp    %edx,%ecx
   37ec0:	89 4d cc             	mov    %ecx,-0x34(%ebp)
   37ec3:	0f 84 6f 02 00 00    	je     38138 <_realloc_r+0x2f8>
   37ec9:	8b 4a 04             	mov    0x4(%edx),%ecx
   37ecc:	89 c8                	mov    %ecx,%eax
   37ece:	83 e0 fe             	and    $0xfffffffe,%eax
   37ed1:	f6 44 02 04 01       	testb  $0x1,0x4(%edx,%eax,1)
   37ed6:	0f 84 f4 00 00 00    	je     37fd0 <_realloc_r+0x190>
   37edc:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
   37ee3:	31 d2                	xor    %edx,%edx
   37ee5:	f6 45 d4 01          	testb  $0x1,-0x2c(%ebp)
   37ee9:	0f 85 39 01 00 00    	jne    38028 <_realloc_r+0x1e8>
   37eef:	89 f1                	mov    %esi,%ecx
   37ef1:	2b 4f f8             	sub    -0x8(%edi),%ecx
   37ef4:	8b 41 04             	mov    0x4(%ecx),%eax
   37ef7:	83 e0 fc             	and    $0xfffffffc,%eax
   37efa:	85 d2                	test   %edx,%edx
   37efc:	0f 84 f6 02 00 00    	je     381f8 <_realloc_r+0x3b8>
   37f02:	3b 55 cc             	cmp    -0x34(%ebp),%edx
   37f05:	0f 84 f5 02 00 00    	je     38200 <_realloc_r+0x3c0>
   37f0b:	89 55 d4             	mov    %edx,-0x2c(%ebp)
   37f0e:	8b 55 d0             	mov    -0x30(%ebp),%edx
   37f11:	01 d8                	add    %ebx,%eax
   37f13:	01 c2                	add    %eax,%edx
   37f15:	3b 55 d8             	cmp    -0x28(%ebp),%edx
   37f18:	89 55 d0             	mov    %edx,-0x30(%ebp)
   37f1b:	8b 55 d4             	mov    -0x2c(%ebp),%edx
   37f1e:	0f 8c ac 01 00 00    	jl     380d0 <_realloc_r+0x290>
   37f24:	8b 42 0c             	mov    0xc(%edx),%eax
   37f27:	83 eb 04             	sub    $0x4,%ebx
   37f2a:	8b 52 08             	mov    0x8(%edx),%edx
   37f2d:	83 fb 24             	cmp    $0x24,%ebx
   37f30:	8d 71 08             	lea    0x8(%ecx),%esi
   37f33:	89 42 0c             	mov    %eax,0xc(%edx)
   37f36:	89 50 08             	mov    %edx,0x8(%eax)
   37f39:	8b 41 0c             	mov    0xc(%ecx),%eax
   37f3c:	8b 51 08             	mov    0x8(%ecx),%edx
   37f3f:	89 42 0c             	mov    %eax,0xc(%edx)
   37f42:	89 50 08             	mov    %edx,0x8(%eax)
   37f45:	0f 87 85 03 00 00    	ja     382d0 <_realloc_r+0x490>
   37f4b:	83 fb 13             	cmp    $0x13,%ebx
   37f4e:	89 f0                	mov    %esi,%eax
   37f50:	76 1a                	jbe    37f6c <_realloc_r+0x12c>
   37f52:	8b 07                	mov    (%edi),%eax
   37f54:	83 fb 1b             	cmp    $0x1b,%ebx
   37f57:	89 41 08             	mov    %eax,0x8(%ecx)
   37f5a:	8b 47 04             	mov    0x4(%edi),%eax
   37f5d:	89 41 0c             	mov    %eax,0xc(%ecx)
   37f60:	0f 87 8f 03 00 00    	ja     382f5 <_realloc_r+0x4b5>
   37f66:	8d 41 10             	lea    0x10(%ecx),%eax
   37f69:	83 c7 08             	add    $0x8,%edi
   37f6c:	8b 17                	mov    (%edi),%edx
   37f6e:	8b 5d d0             	mov    -0x30(%ebp),%ebx
   37f71:	89 10                	mov    %edx,(%eax)
   37f73:	8b 57 04             	mov    0x4(%edi),%edx
   37f76:	89 50 04             	mov    %edx,0x4(%eax)
   37f79:	8b 57 08             	mov    0x8(%edi),%edx
   37f7c:	89 f7                	mov    %esi,%edi
   37f7e:	89 ce                	mov    %ecx,%esi
   37f80:	89 50 08             	mov    %edx,0x8(%eax)
   37f83:	8b 41 04             	mov    0x4(%ecx),%eax
   37f86:	eb 1b                	jmp    37fa3 <_realloc_r+0x163>
   37f88:	83 e2 f8             	and    $0xfffffff8,%edx
   37f8b:	89 55 dc             	mov    %edx,-0x24(%ebp)
   37f8e:	89 55 d8             	mov    %edx,-0x28(%ebp)
   37f91:	c1 ea 1f             	shr    $0x1f,%edx
   37f94:	e9 ff fe ff ff       	jmp    37e98 <_realloc_r+0x58>
   37f99:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   37fa0:	8b 45 d4             	mov    -0x2c(%ebp),%eax
   37fa3:	89 da                	mov    %ebx,%edx
   37fa5:	2b 55 dc             	sub    -0x24(%ebp),%edx
   37fa8:	83 fa 0f             	cmp    $0xf,%edx
   37fab:	77 4b                	ja     37ff8 <_realloc_r+0x1b8>
   37fad:	83 e0 01             	and    $0x1,%eax
   37fb0:	09 d8                	or     %ebx,%eax
   37fb2:	89 46 04             	mov    %eax,0x4(%esi)
   37fb5:	83 4c 1e 04 01       	orl    $0x1,0x4(%esi,%ebx,1)
   37fba:	8b 45 e4             	mov    -0x1c(%ebp),%eax
   37fbd:	89 04 24             	mov    %eax,(%esp)
   37fc0:	e8 3b da ff ff       	call   35a00 <__malloc_unlock>
   37fc5:	89 f8                	mov    %edi,%eax
   37fc7:	83 c4 3c             	add    $0x3c,%esp
   37fca:	5b                   	pop    %ebx
   37fcb:	5e                   	pop    %esi
   37fcc:	5f                   	pop    %edi
   37fcd:	5d                   	pop    %ebp
   37fce:	c3                   	ret    
   37fcf:	90                   	nop
   37fd0:	83 e1 fc             	and    $0xfffffffc,%ecx
   37fd3:	89 4d d0             	mov    %ecx,-0x30(%ebp)
   37fd6:	01 d9                	add    %ebx,%ecx
   37fd8:	3b 4d d8             	cmp    -0x28(%ebp),%ecx
   37fdb:	0f 8c 04 ff ff ff    	jl     37ee5 <_realloc_r+0xa5>
   37fe1:	8b 5a 0c             	mov    0xc(%edx),%ebx
   37fe4:	8b 52 08             	mov    0x8(%edx),%edx
   37fe7:	8b 45 d4             	mov    -0x2c(%ebp),%eax
   37fea:	89 5a 0c             	mov    %ebx,0xc(%edx)
   37fed:	89 53 08             	mov    %edx,0x8(%ebx)
   37ff0:	89 cb                	mov    %ecx,%ebx
   37ff2:	eb af                	jmp    37fa3 <_realloc_r+0x163>
   37ff4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   37ff8:	8b 5d dc             	mov    -0x24(%ebp),%ebx
   37ffb:	83 e0 01             	and    $0x1,%eax
   37ffe:	09 d8                	or     %ebx,%eax
   38000:	89 46 04             	mov    %eax,0x4(%esi)
   38003:	89 d0                	mov    %edx,%eax
   38005:	8d 0c 1e             	lea    (%esi,%ebx,1),%ecx
   38008:	83 c8 01             	or     $0x1,%eax
   3800b:	89 41 04             	mov    %eax,0x4(%ecx)
   3800e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
   38011:	83 4c 11 04 01       	orl    $0x1,0x4(%ecx,%edx,1)
   38016:	83 c1 08             	add    $0x8,%ecx
   38019:	89 4c 24 04          	mov    %ecx,0x4(%esp)
   3801d:	89 04 24             	mov    %eax,(%esp)
   38020:	e8 2b fb ff ff       	call   37b50 <_free_r>
   38025:	eb 93                	jmp    37fba <_realloc_r+0x17a>
   38027:	90                   	nop
   38028:	8b 45 e0             	mov    -0x20(%ebp),%eax
   3802b:	89 44 24 04          	mov    %eax,0x4(%esp)
   3802f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
   38032:	89 04 24             	mov    %eax,(%esp)
   38035:	e8 d6 d1 ff ff       	call   35210 <_malloc_r>
   3803a:	85 c0                	test   %eax,%eax
   3803c:	89 c1                	mov    %eax,%ecx
   3803e:	0f 84 65 03 00 00    	je     383a9 <_realloc_r+0x569>
   38044:	8b 47 fc             	mov    -0x4(%edi),%eax
   38047:	8d 51 f8             	lea    -0x8(%ecx),%edx
   3804a:	89 55 e0             	mov    %edx,-0x20(%ebp)
   3804d:	89 c2                	mov    %eax,%edx
   3804f:	83 e2 fe             	and    $0xfffffffe,%edx
   38052:	01 f2                	add    %esi,%edx
   38054:	39 55 e0             	cmp    %edx,-0x20(%ebp)
   38057:	0f 84 63 02 00 00    	je     382c0 <_realloc_r+0x480>
   3805d:	83 eb 04             	sub    $0x4,%ebx
   38060:	83 fb 24             	cmp    $0x24,%ebx
   38063:	0f 87 6f 01 00 00    	ja     381d8 <_realloc_r+0x398>
   38069:	83 fb 13             	cmp    $0x13,%ebx
   3806c:	0f 87 ee 00 00 00    	ja     38160 <_realloc_r+0x320>
   38072:	89 c8                	mov    %ecx,%eax
   38074:	89 fa                	mov    %edi,%edx
   38076:	8b 1a                	mov    (%edx),%ebx
   38078:	89 18                	mov    %ebx,(%eax)
   3807a:	8b 5a 04             	mov    0x4(%edx),%ebx
   3807d:	89 58 04             	mov    %ebx,0x4(%eax)
   38080:	8b 52 08             	mov    0x8(%edx),%edx
   38083:	89 50 08             	mov    %edx,0x8(%eax)
   38086:	8b 75 e4             	mov    -0x1c(%ebp),%esi
   38089:	89 7c 24 04          	mov    %edi,0x4(%esp)
   3808d:	89 4d e0             	mov    %ecx,-0x20(%ebp)
   38090:	89 34 24             	mov    %esi,(%esp)
   38093:	e8 b8 fa ff ff       	call   37b50 <_free_r>
   38098:	89 34 24             	mov    %esi,(%esp)
   3809b:	e8 60 d9 ff ff       	call   35a00 <__malloc_unlock>
   380a0:	8b 4d e0             	mov    -0x20(%ebp),%ecx
   380a3:	83 c4 3c             	add    $0x3c,%esp
   380a6:	5b                   	pop    %ebx
   380a7:	5e                   	pop    %esi
   380a8:	5f                   	pop    %edi
   380a9:	89 c8                	mov    %ecx,%eax
   380ab:	5d                   	pop    %ebp
   380ac:	c3                   	ret    
   380ad:	8d 76 00             	lea    0x0(%esi),%esi
   380b0:	89 45 0c             	mov    %eax,0xc(%ebp)
   380b3:	83 c4 3c             	add    $0x3c,%esp
   380b6:	5b                   	pop    %ebx
   380b7:	5e                   	pop    %esi
   380b8:	5f                   	pop    %edi
   380b9:	5d                   	pop    %ebp
   380ba:	e9 51 d1 ff ff       	jmp    35210 <_malloc_r>
   380bf:	90                   	nop
   380c0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
   380c3:	c7 00 0c 00 00 00    	movl   $0xc,(%eax)
   380c9:	31 c0                	xor    %eax,%eax
   380cb:	e9 f7 fe ff ff       	jmp    37fc7 <_realloc_r+0x187>
   380d0:	89 c2                	mov    %eax,%edx
   380d2:	3b 55 d8             	cmp    -0x28(%ebp),%edx
   380d5:	0f 8c 4d ff ff ff    	jl     38028 <_realloc_r+0x1e8>
   380db:	8b 71 08             	mov    0x8(%ecx),%esi
   380de:	83 eb 04             	sub    $0x4,%ebx
   380e1:	8b 41 0c             	mov    0xc(%ecx),%eax
   380e4:	83 fb 24             	cmp    $0x24,%ebx
   380e7:	89 46 0c             	mov    %eax,0xc(%esi)
   380ea:	89 70 08             	mov    %esi,0x8(%eax)
   380ed:	8d 71 08             	lea    0x8(%ecx),%esi
   380f0:	0f 87 88 00 00 00    	ja     3817e <_realloc_r+0x33e>
   380f6:	83 fb 13             	cmp    $0x13,%ebx
   380f9:	89 f0                	mov    %esi,%eax
   380fb:	76 1a                	jbe    38117 <_realloc_r+0x2d7>
   380fd:	8b 07                	mov    (%edi),%eax
   380ff:	83 fb 1b             	cmp    $0x1b,%ebx
   38102:	89 41 08             	mov    %eax,0x8(%ecx)
   38105:	8b 47 04             	mov    0x4(%edi),%eax
   38108:	89 41 0c             	mov    %eax,0xc(%ecx)
   3810b:	0f 87 17 02 00 00    	ja     38328 <_realloc_r+0x4e8>
   38111:	8d 41 10             	lea    0x10(%ecx),%eax
   38114:	83 c7 08             	add    $0x8,%edi
   38117:	8b 1f                	mov    (%edi),%ebx
   38119:	89 18                	mov    %ebx,(%eax)
   3811b:	8b 5f 04             	mov    0x4(%edi),%ebx
   3811e:	89 58 04             	mov    %ebx,0x4(%eax)
   38121:	8b 5f 08             	mov    0x8(%edi),%ebx
   38124:	89 f7                	mov    %esi,%edi
   38126:	89 ce                	mov    %ecx,%esi
   38128:	89 58 08             	mov    %ebx,0x8(%eax)
   3812b:	89 d3                	mov    %edx,%ebx
   3812d:	8b 41 04             	mov    0x4(%ecx),%eax
   38130:	e9 6e fe ff ff       	jmp    37fa3 <_realloc_r+0x163>
   38135:	8d 76 00             	lea    0x0(%esi),%esi
   38138:	8b 45 cc             	mov    -0x34(%ebp),%eax
   3813b:	8b 55 dc             	mov    -0x24(%ebp),%edx
   3813e:	8b 48 04             	mov    0x4(%eax),%ecx
   38141:	83 c2 10             	add    $0x10,%edx
   38144:	89 4d d0             	mov    %ecx,-0x30(%ebp)
   38147:	83 65 d0 fc          	andl   $0xfffffffc,-0x30(%ebp)
   3814b:	8b 4d d0             	mov    -0x30(%ebp),%ecx
   3814e:	01 d9                	add    %ebx,%ecx
   38150:	39 d1                	cmp    %edx,%ecx
   38152:	7d 54                	jge    381a8 <_realloc_r+0x368>
   38154:	89 c2                	mov    %eax,%edx
   38156:	e9 8a fd ff ff       	jmp    37ee5 <_realloc_r+0xa5>
   3815b:	90                   	nop
   3815c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   38160:	8b 07                	mov    (%edi),%eax
   38162:	83 fb 1b             	cmp    $0x1b,%ebx
   38165:	89 01                	mov    %eax,(%ecx)
   38167:	8b 47 04             	mov    0x4(%edi),%eax
   3816a:	89 41 04             	mov    %eax,0x4(%ecx)
   3816d:	0f 87 2d 01 00 00    	ja     382a0 <_realloc_r+0x460>
   38173:	8d 41 08             	lea    0x8(%ecx),%eax
   38176:	8d 57 08             	lea    0x8(%edi),%edx
   38179:	e9 f8 fe ff ff       	jmp    38076 <_realloc_r+0x236>
   3817e:	89 5c 24 08          	mov    %ebx,0x8(%esp)
   38182:	89 7c 24 04          	mov    %edi,0x4(%esp)
   38186:	89 f7                	mov    %esi,%edi
   38188:	89 34 24             	mov    %esi,(%esp)
   3818b:	89 55 d8             	mov    %edx,-0x28(%ebp)
   3818e:	89 4d e0             	mov    %ecx,-0x20(%ebp)
   38191:	e8 1a fc ff ff       	call   37db0 <memmove>
   38196:	8b 4d e0             	mov    -0x20(%ebp),%ecx
   38199:	8b 55 d8             	mov    -0x28(%ebp),%edx
   3819c:	8b 41 04             	mov    0x4(%ecx),%eax
   3819f:	89 ce                	mov    %ecx,%esi
   381a1:	89 d3                	mov    %edx,%ebx
   381a3:	e9 fb fd ff ff       	jmp    37fa3 <_realloc_r+0x163>
   381a8:	8b 5d dc             	mov    -0x24(%ebp),%ebx
   381ab:	29 d9                	sub    %ebx,%ecx
   381ad:	01 de                	add    %ebx,%esi
   381af:	83 c9 01             	or     $0x1,%ecx
   381b2:	89 35 48 c5 03 00    	mov    %esi,0x3c548
   381b8:	89 4e 04             	mov    %ecx,0x4(%esi)
   381bb:	8b 47 fc             	mov    -0x4(%edi),%eax
   381be:	83 e0 01             	and    $0x1,%eax
   381c1:	09 d8                	or     %ebx,%eax
   381c3:	89 47 fc             	mov    %eax,-0x4(%edi)
   381c6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
   381c9:	89 04 24             	mov    %eax,(%esp)
   381cc:	e8 2f d8 ff ff       	call   35a00 <__malloc_unlock>
   381d1:	89 f8                	mov    %edi,%eax
   381d3:	e9 ef fd ff ff       	jmp    37fc7 <_realloc_r+0x187>
   381d8:	89 0c 24             	mov    %ecx,(%esp)
   381db:	89 5c 24 08          	mov    %ebx,0x8(%esp)
   381df:	89 7c 24 04          	mov    %edi,0x4(%esp)
   381e3:	89 4d e0             	mov    %ecx,-0x20(%ebp)
   381e6:	e8 c5 fb ff ff       	call   37db0 <memmove>
   381eb:	8b 4d e0             	mov    -0x20(%ebp),%ecx
   381ee:	e9 93 fe ff ff       	jmp    38086 <_realloc_r+0x246>
   381f3:	90                   	nop
   381f4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   381f8:	8d 14 18             	lea    (%eax,%ebx,1),%edx
   381fb:	e9 d2 fe ff ff       	jmp    380d2 <_realloc_r+0x292>
   38200:	8d 14 18             	lea    (%eax,%ebx,1),%edx
   38203:	8b 45 d0             	mov    -0x30(%ebp),%eax
   38206:	01 d0                	add    %edx,%eax
   38208:	89 45 d4             	mov    %eax,-0x2c(%ebp)
   3820b:	8b 45 dc             	mov    -0x24(%ebp),%eax
   3820e:	83 c0 10             	add    $0x10,%eax
   38211:	39 45 d4             	cmp    %eax,-0x2c(%ebp)
   38214:	0f 8c b8 fe ff ff    	jl     380d2 <_realloc_r+0x292>
   3821a:	8b 41 0c             	mov    0xc(%ecx),%eax
   3821d:	83 eb 04             	sub    $0x4,%ebx
   38220:	8b 51 08             	mov    0x8(%ecx),%edx
   38223:	83 fb 24             	cmp    $0x24,%ebx
   38226:	8d 71 08             	lea    0x8(%ecx),%esi
   38229:	89 42 0c             	mov    %eax,0xc(%edx)
   3822c:	89 50 08             	mov    %edx,0x8(%eax)
   3822f:	0f 87 3d 01 00 00    	ja     38372 <_realloc_r+0x532>
   38235:	83 fb 13             	cmp    $0x13,%ebx
   38238:	89 f0                	mov    %esi,%eax
   3823a:	76 1a                	jbe    38256 <_realloc_r+0x416>
   3823c:	8b 07                	mov    (%edi),%eax
   3823e:	83 fb 1b             	cmp    $0x1b,%ebx
   38241:	89 41 08             	mov    %eax,0x8(%ecx)
   38244:	8b 47 04             	mov    0x4(%edi),%eax
   38247:	89 41 0c             	mov    %eax,0xc(%ecx)
   3824a:	0f 87 3d 01 00 00    	ja     3838d <_realloc_r+0x54d>
   38250:	8d 41 10             	lea    0x10(%ecx),%eax
   38253:	83 c7 08             	add    $0x8,%edi
   38256:	8b 17                	mov    (%edi),%edx
   38258:	89 10                	mov    %edx,(%eax)
   3825a:	8b 57 04             	mov    0x4(%edi),%edx
   3825d:	89 50 04             	mov    %edx,0x4(%eax)
   38260:	8b 57 08             	mov    0x8(%edi),%edx
   38263:	89 50 08             	mov    %edx,0x8(%eax)
   38266:	8b 5d dc             	mov    -0x24(%ebp),%ebx
   38269:	8b 7d d4             	mov    -0x2c(%ebp),%edi
   3826c:	89 d8                	mov    %ebx,%eax
   3826e:	29 df                	sub    %ebx,%edi
   38270:	01 c8                	add    %ecx,%eax
   38272:	83 cf 01             	or     $0x1,%edi
   38275:	a3 48 c5 03 00       	mov    %eax,0x3c548
   3827a:	89 78 04             	mov    %edi,0x4(%eax)
   3827d:	8b 41 04             	mov    0x4(%ecx),%eax
   38280:	83 e0 01             	and    $0x1,%eax
   38283:	09 d8                	or     %ebx,%eax
   38285:	89 41 04             	mov    %eax,0x4(%ecx)
   38288:	8b 45 e4             	mov    -0x1c(%ebp),%eax
   3828b:	89 04 24             	mov    %eax,(%esp)
   3828e:	e8 6d d7 ff ff       	call   35a00 <__malloc_unlock>
   38293:	89 f0                	mov    %esi,%eax
   38295:	e9 2d fd ff ff       	jmp    37fc7 <_realloc_r+0x187>
   3829a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
   382a0:	8b 47 08             	mov    0x8(%edi),%eax
   382a3:	83 fb 24             	cmp    $0x24,%ebx
   382a6:	89 41 08             	mov    %eax,0x8(%ecx)
   382a9:	8b 47 0c             	mov    0xc(%edi),%eax
   382ac:	89 41 0c             	mov    %eax,0xc(%ecx)
   382af:	74 60                	je     38311 <_realloc_r+0x4d1>
   382b1:	8d 41 10             	lea    0x10(%ecx),%eax
   382b4:	8d 57 10             	lea    0x10(%edi),%edx
   382b7:	e9 ba fd ff ff       	jmp    38076 <_realloc_r+0x236>
   382bc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   382c0:	8b 51 fc             	mov    -0x4(%ecx),%edx
   382c3:	83 e2 fc             	and    $0xfffffffc,%edx
   382c6:	01 d3                	add    %edx,%ebx
   382c8:	e9 d6 fc ff ff       	jmp    37fa3 <_realloc_r+0x163>
   382cd:	8d 76 00             	lea    0x0(%esi),%esi
   382d0:	89 5c 24 08          	mov    %ebx,0x8(%esp)
   382d4:	89 7c 24 04          	mov    %edi,0x4(%esp)
   382d8:	89 f7                	mov    %esi,%edi
   382da:	89 34 24             	mov    %esi,(%esp)
   382dd:	89 4d e0             	mov    %ecx,-0x20(%ebp)
   382e0:	e8 cb fa ff ff       	call   37db0 <memmove>
   382e5:	8b 4d e0             	mov    -0x20(%ebp),%ecx
   382e8:	8b 5d d0             	mov    -0x30(%ebp),%ebx
   382eb:	8b 41 04             	mov    0x4(%ecx),%eax
   382ee:	89 ce                	mov    %ecx,%esi
   382f0:	e9 ae fc ff ff       	jmp    37fa3 <_realloc_r+0x163>
   382f5:	8b 47 08             	mov    0x8(%edi),%eax
   382f8:	83 fb 24             	cmp    $0x24,%ebx
   382fb:	89 41 10             	mov    %eax,0x10(%ecx)
   382fe:	8b 47 0c             	mov    0xc(%edi),%eax
   38301:	89 41 14             	mov    %eax,0x14(%ecx)
   38304:	74 3e                	je     38344 <_realloc_r+0x504>
   38306:	8d 41 18             	lea    0x18(%ecx),%eax
   38309:	83 c7 10             	add    $0x10,%edi
   3830c:	e9 5b fc ff ff       	jmp    37f6c <_realloc_r+0x12c>
   38311:	8b 47 10             	mov    0x10(%edi),%eax
   38314:	8d 57 18             	lea    0x18(%edi),%edx
   38317:	89 41 10             	mov    %eax,0x10(%ecx)
   3831a:	8b 5f 14             	mov    0x14(%edi),%ebx
   3831d:	8d 41 18             	lea    0x18(%ecx),%eax
   38320:	89 59 14             	mov    %ebx,0x14(%ecx)
   38323:	e9 4e fd ff ff       	jmp    38076 <_realloc_r+0x236>
   38328:	8b 47 08             	mov    0x8(%edi),%eax
   3832b:	83 fb 24             	cmp    $0x24,%ebx
   3832e:	89 41 10             	mov    %eax,0x10(%ecx)
   38331:	8b 47 0c             	mov    0xc(%edi),%eax
   38334:	89 41 14             	mov    %eax,0x14(%ecx)
   38337:	74 22                	je     3835b <_realloc_r+0x51b>
   38339:	8d 41 18             	lea    0x18(%ecx),%eax
   3833c:	83 c7 10             	add    $0x10,%edi
   3833f:	e9 d3 fd ff ff       	jmp    38117 <_realloc_r+0x2d7>
   38344:	8b 47 10             	mov    0x10(%edi),%eax
   38347:	83 c7 18             	add    $0x18,%edi
   3834a:	89 41 18             	mov    %eax,0x18(%ecx)
   3834d:	8b 57 fc             	mov    -0x4(%edi),%edx
   38350:	8d 41 20             	lea    0x20(%ecx),%eax
   38353:	89 51 1c             	mov    %edx,0x1c(%ecx)
   38356:	e9 11 fc ff ff       	jmp    37f6c <_realloc_r+0x12c>
   3835b:	8b 47 10             	mov    0x10(%edi),%eax
   3835e:	83 c7 18             	add    $0x18,%edi
   38361:	89 41 18             	mov    %eax,0x18(%ecx)
   38364:	8b 5f fc             	mov    -0x4(%edi),%ebx
   38367:	8d 41 20             	lea    0x20(%ecx),%eax
   3836a:	89 59 1c             	mov    %ebx,0x1c(%ecx)
   3836d:	e9 a5 fd ff ff       	jmp    38117 <_realloc_r+0x2d7>
   38372:	89 5c 24 08          	mov    %ebx,0x8(%esp)
   38376:	89 7c 24 04          	mov    %edi,0x4(%esp)
   3837a:	89 34 24             	mov    %esi,(%esp)
   3837d:	89 4d e0             	mov    %ecx,-0x20(%ebp)
   38380:	e8 2b fa ff ff       	call   37db0 <memmove>
   38385:	8b 4d e0             	mov    -0x20(%ebp),%ecx
   38388:	e9 d9 fe ff ff       	jmp    38266 <_realloc_r+0x426>
   3838d:	8b 47 08             	mov    0x8(%edi),%eax
   38390:	83 fb 24             	cmp    $0x24,%ebx
   38393:	89 41 10             	mov    %eax,0x10(%ecx)
   38396:	8b 47 0c             	mov    0xc(%edi),%eax
   38399:	89 41 14             	mov    %eax,0x14(%ecx)
   3839c:	74 1d                	je     383bb <_realloc_r+0x57b>
   3839e:	8d 41 18             	lea    0x18(%ecx),%eax
   383a1:	83 c7 10             	add    $0x10,%edi
   383a4:	e9 ad fe ff ff       	jmp    38256 <_realloc_r+0x416>
   383a9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
   383ac:	89 04 24             	mov    %eax,(%esp)
   383af:	e8 4c d6 ff ff       	call   35a00 <__malloc_unlock>
   383b4:	31 c0                	xor    %eax,%eax
   383b6:	e9 0c fc ff ff       	jmp    37fc7 <_realloc_r+0x187>
   383bb:	8b 47 10             	mov    0x10(%edi),%eax
   383be:	83 c7 18             	add    $0x18,%edi
   383c1:	89 41 18             	mov    %eax,0x18(%ecx)
   383c4:	8b 57 fc             	mov    -0x4(%edi),%edx
   383c7:	8d 41 20             	lea    0x20(%ecx),%eax
   383ca:	89 51 1c             	mov    %edx,0x1c(%ecx)
   383cd:	e9 84 fe ff ff       	jmp    38256 <_realloc_r+0x416>
   383d2:	66 90                	xchg   %ax,%ax
   383d4:	66 90                	xchg   %ax,%ax
   383d6:	66 90                	xchg   %ax,%ax
   383d8:	66 90                	xchg   %ax,%ax
   383da:	66 90                	xchg   %ax,%ax
   383dc:	66 90                	xchg   %ax,%ax
   383de:	66 90                	xchg   %ax,%ax

000383e0 <cleanup_glue>:
   383e0:	55                   	push   %ebp
   383e1:	89 e5                	mov    %esp,%ebp
   383e3:	56                   	push   %esi
   383e4:	53                   	push   %ebx
   383e5:	83 ec 10             	sub    $0x10,%esp
   383e8:	8b 5d 0c             	mov    0xc(%ebp),%ebx
   383eb:	8b 75 08             	mov    0x8(%ebp),%esi
   383ee:	8b 03                	mov    (%ebx),%eax
   383f0:	85 c0                	test   %eax,%eax
   383f2:	74 0c                	je     38400 <cleanup_glue+0x20>
   383f4:	89 44 24 04          	mov    %eax,0x4(%esp)
   383f8:	89 34 24             	mov    %esi,(%esp)
   383fb:	e8 e0 ff ff ff       	call   383e0 <cleanup_glue>
   38400:	89 5d 0c             	mov    %ebx,0xc(%ebp)
   38403:	89 75 08             	mov    %esi,0x8(%ebp)
   38406:	83 c4 10             	add    $0x10,%esp
   38409:	5b                   	pop    %ebx
   3840a:	5e                   	pop    %esi
   3840b:	5d                   	pop    %ebp
   3840c:	e9 3f f7 ff ff       	jmp    37b50 <_free_r>
   38411:	eb 0d                	jmp    38420 <_reclaim_reent>
   38413:	90                   	nop
   38414:	90                   	nop
   38415:	90                   	nop
   38416:	90                   	nop
   38417:	90                   	nop
   38418:	90                   	nop
   38419:	90                   	nop
   3841a:	90                   	nop
   3841b:	90                   	nop
   3841c:	90                   	nop
   3841d:	90                   	nop
   3841e:	90                   	nop
   3841f:	90                   	nop

00038420 <_reclaim_reent>:
   38420:	55                   	push   %ebp
   38421:	89 e5                	mov    %esp,%ebp
   38423:	57                   	push   %edi
   38424:	56                   	push   %esi
   38425:	53                   	push   %ebx
   38426:	83 ec 1c             	sub    $0x1c,%esp
   38429:	8b 5d 08             	mov    0x8(%ebp),%ebx
   3842c:	3b 1d 40 c0 03 00    	cmp    0x3c040,%ebx
   38432:	0f 84 a6 00 00 00    	je     384de <_reclaim_reent+0xbe>
   38438:	8b 53 4c             	mov    0x4c(%ebx),%edx
   3843b:	85 d2                	test   %edx,%edx
   3843d:	74 46                	je     38485 <_reclaim_reent+0x65>
   3843f:	31 c0                	xor    %eax,%eax
   38441:	31 f6                	xor    %esi,%esi
   38443:	90                   	nop
   38444:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
   38448:	8b 04 82             	mov    (%edx,%eax,4),%eax
   3844b:	85 c0                	test   %eax,%eax
   3844d:	75 0b                	jne    3845a <_reclaim_reent+0x3a>
   3844f:	eb 1e                	jmp    3846f <_reclaim_reent+0x4f>
   38451:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
   38458:	89 f8                	mov    %edi,%eax
   3845a:	8b 38                	mov    (%eax),%edi
   3845c:	89 44 24 04          	mov    %eax,0x4(%esp)
   38460:	89 1c 24             	mov    %ebx,(%esp)
   38463:	e8 e8 f6 ff ff       	call   37b50 <_free_r>
   38468:	85 ff                	test   %edi,%edi
   3846a:	75 ec                	jne    38458 <_reclaim_reent+0x38>
   3846c:	8b 53 4c             	mov    0x4c(%ebx),%edx
   3846f:	83 c6 01             	add    $0x1,%esi
   38472:	83 fe 20             	cmp    $0x20,%esi
   38475:	89 f0                	mov    %esi,%eax
   38477:	75 cf                	jne    38448 <_reclaim_reent+0x28>
   38479:	89 54 24 04          	mov    %edx,0x4(%esp)
   3847d:	89 1c 24             	mov    %ebx,(%esp)
   38480:	e8 cb f6 ff ff       	call   37b50 <_free_r>
   38485:	8b 43 40             	mov    0x40(%ebx),%eax
   38488:	85 c0                	test   %eax,%eax
   3848a:	74 0c                	je     38498 <_reclaim_reent+0x78>
   3848c:	89 44 24 04          	mov    %eax,0x4(%esp)
   38490:	89 1c 24             	mov    %ebx,(%esp)
   38493:	e8 b8 f6 ff ff       	call   37b50 <_free_r>
   38498:	8b 83 48 01 00 00    	mov    0x148(%ebx),%eax
   3849e:	85 c0                	test   %eax,%eax
   384a0:	74 22                	je     384c4 <_reclaim_reent+0xa4>
   384a2:	8d b3 4c 01 00 00    	lea    0x14c(%ebx),%esi
   384a8:	39 f0                	cmp    %esi,%eax
   384aa:	75 06                	jne    384b2 <_reclaim_reent+0x92>
   384ac:	eb 16                	jmp    384c4 <_reclaim_reent+0xa4>
   384ae:	66 90                	xchg   %ax,%ax
   384b0:	89 f8                	mov    %edi,%eax
   384b2:	8b 38                	mov    (%eax),%edi
   384b4:	89 44 24 04          	mov    %eax,0x4(%esp)
   384b8:	89 1c 24             	mov    %ebx,(%esp)
   384bb:	e8 90 f6 ff ff       	call   37b50 <_free_r>
   384c0:	39 fe                	cmp    %edi,%esi
   384c2:	75 ec                	jne    384b0 <_reclaim_reent+0x90>
   384c4:	8b 43 54             	mov    0x54(%ebx),%eax
   384c7:	85 c0                	test   %eax,%eax
   384c9:	74 0c                	je     384d7 <_reclaim_reent+0xb7>
   384cb:	89 44 24 04          	mov    %eax,0x4(%esp)
   384cf:	89 1c 24             	mov    %ebx,(%esp)
   384d2:	e8 79 f6 ff ff       	call   37b50 <_free_r>
   384d7:	8b 43 38             	mov    0x38(%ebx),%eax
   384da:	85 c0                	test   %eax,%eax
   384dc:	75 08                	jne    384e6 <_reclaim_reent+0xc6>
   384de:	83 c4 1c             	add    $0x1c,%esp
   384e1:	5b                   	pop    %ebx
   384e2:	5e                   	pop    %esi
   384e3:	5f                   	pop    %edi
   384e4:	5d                   	pop    %ebp
   384e5:	c3                   	ret    
   384e6:	89 1c 24             	mov    %ebx,(%esp)
   384e9:	ff 53 3c             	call   *0x3c(%ebx)
   384ec:	8b 83 e0 02 00 00    	mov    0x2e0(%ebx),%eax
   384f2:	85 c0                	test   %eax,%eax
   384f4:	74 e8                	je     384de <_reclaim_reent+0xbe>
   384f6:	89 1c 24             	mov    %ebx,(%esp)
   384f9:	89 44 24 04          	mov    %eax,0x4(%esp)
   384fd:	e8 de fe ff ff       	call   383e0 <cleanup_glue>
   38502:	83 c4 1c             	add    $0x1c,%esp
   38505:	5b                   	pop    %ebx
   38506:	5e                   	pop    %esi
   38507:	5f                   	pop    %edi
   38508:	5d                   	pop    %ebp
   38509:	c3                   	ret    
