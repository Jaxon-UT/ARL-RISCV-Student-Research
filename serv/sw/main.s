# 1 "main.S"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "main.S"
 .file "main.c"
 .option nopic
 .text
 .align 2
 .globl _start
 .type _start, @function
_start:
 addi sp,sp,-16
 sw ra,12(sp)
 sw s0,8(sp)
 addi s0,sp,16
 li a5,1073741824
 li a4,1
 sb a4,0(a5)
 call delay1
 li a5,1073741824
 sb zero,0(a5)
 call delay2
 li a5,1073741824
 li a4,1
 sb a4,0(a5)
 call delay3
 li a5,1073741824
 sb zero,0(a5)
 call delay1
 li a5,1073741824
 li a4,1
 sb a4,0(a5)
 call delay2
 li a5,1073741824
 sb zero,0(a5)
 call delay3
 li a5,1073741824
 li a4,1
 sb a4,0(a5)
.L2:
 li a5,1073741824
 li a4,1
 sb a4,0(a5)
 call delay1
 j .L2
 .size _start, .-_start
 .align 2
 .globl delay1
 .type delay1, @function
delay1:
 addi sp,sp,-32
 sw s0,28(sp)
 addi s0,sp,32
 sw zero,-20(s0)
 j .L4
.L5:
 lw a5,-20(s0)
 addi a5,a5,1
 sw a5,-20(s0)
.L4:
 lw a4,-20(s0)
 li a5,8192
 addi a5,a5,1807
 ble a4,a5,.L5
 sw zero,-20(s0)
 nop
 lw s0,28(sp)
 addi sp,sp,32
 jr ra
 .size delay1, .-delay1
 .align 2
 .globl delay2
 .type delay2, @function
delay2:
 addi sp,sp,-32
 sw s0,28(sp)
 addi s0,sp,32
 sw zero,-20(s0)
 j .L7
.L8:
 lw a5,-20(s0)
 addi a5,a5,1
 sw a5,-20(s0)
.L7:
 lw a4,-20(s0)
 li a5,20480
 addi a5,a5,-481
 ble a4,a5,.L8
 sw zero,-20(s0)
 nop
 lw s0,28(sp)
 addi sp,sp,32
 jr ra
 .size delay2, .-delay2
 .align 2
 .globl delay3
 .type delay3, @function
delay3:
 addi sp,sp,-32
 sw s0,28(sp)
 addi s0,sp,32
 sw zero,-20(s0)
 j .L10
.L11:
 lw a5,-20(s0)
 addi a5,a5,1
 sw a5,-20(s0)
.L10:
 lw a4,-20(s0)
 li a5,40960
 addi a5,a5,-961
 ble a4,a5,.L11
 sw zero,-20(s0)
 nop
 lw s0,28(sp)
 addi sp,sp,32
 jr ra
 .size delay3, .-delay3
 .ident "GCC: (GNU) 8.2.0"
