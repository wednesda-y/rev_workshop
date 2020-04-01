0000119d <func>:
    119d:	55                   	push   ebp
    119e:	89 e5                	mov    ebp,esp
    11a0:	e8 6a 00 00 00       	call   120f <__x86.get_pc_thunk.ax>
    11a5:	05 5b 2e 00 00       	add    eax,0x2e5b
    11aa:	83 45 08 05          	add    DWORD PTR [ebp+0x8],0x5
    11ae:	83 6d 08 10          	sub    DWORD PTR [ebp+0x8],0x10
    11b2:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
    11b5:	89 d0                	mov    eax,edx
    11b7:	01 c0                	add    eax,eax
    11b9:	01 d0                	add    eax,edx
    11bb:	c1 e0 02             	shl    eax,0x2
    11be:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
    11c1:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
    11c4:	5d                   	pop    ebp
    11c5:	c3                   	ret    

