//
//  riscv-meta.cc
//
//  DANGER - This is machine generated code
//

#include "riscv-types.h"
#include "riscv-format.h"
#include "riscv-meta.h"

const char* riscv_i_registers[] = {
	"zero",
	"ra",
	"sp",
	"gp",
	"tp",
	"t0",
	"t1",
	"t2",
	"s0",
	"s1",
	"a0",
	"a1",
	"a2",
	"a3",
	"a4",
	"a5",
	"a6",
	"a7",
	"s2",
	"s3",
	"s4",
	"s5",
	"s6",
	"s7",
	"s8",
	"s9",
	"s10",
	"s11",
	"t3",
	"t4",
	"t5",
	"t6",
};

const char* riscv_f_registers[] = {
	"ft0",
	"ft1",
	"ft2",
	"ft3",
	"ft4",
	"ft5",
	"ft6",
	"ft7",
	"fs0",
	"fs1",
	"fa0",
	"fa1",
	"fa2",
	"fa3",
	"fa4",
	"fa5",
	"fa6",
	"fa7",
	"fs2",
	"fs3",
	"fs4",
	"fs5",
	"fs6",
	"fs7",
	"fs8",
	"fs9",
	"fs10",
	"fs11",
	"ft8",
	"ft9",
	"ft10",
	"ft11",
};

const char* riscv_instruction_name[] = {
	"unknown",
	"lui",
	"auipc",
	"jal",
	"jalr",
	"beq",
	"bne",
	"blt",
	"bge",
	"bltu",
	"bgeu",
	"lb",
	"lh",
	"lw",
	"lbu",
	"lhu",
	"sb",
	"sh",
	"sw",
	"addi",
	"slti",
	"sltiu",
	"xori",
	"ori",
	"andi",
	"slli",
	"srli",
	"srai",
	"add",
	"sub",
	"sll",
	"slt",
	"sltu",
	"xor",
	"srl",
	"sra",
	"or",
	"and",
	"fence",
	"fence.i",
	"lwu",
	"ld",
	"sd",
	"slli",
	"srli",
	"srai",
	"addiw",
	"slliw",
	"srliw",
	"sraiw",
	"addw",
	"subw",
	"sllw",
	"srlw",
	"sraw",
	"mul",
	"mulh",
	"mulhsu",
	"mulhu",
	"div",
	"divu",
	"rem",
	"remu",
	"mulw",
	"divw",
	"divuw",
	"remw",
	"remuw",
	"lr.w",
	"sc.w",
	"amoswap.w",
	"amoadd.w",
	"amoxor.w",
	"amoor.w",
	"amoand.w",
	"amomin.w",
	"amomax.w",
	"amominu.w",
	"amomaxu.w",
	"lr.d",
	"sc.d",
	"amoswap.d",
	"amoadd.d",
	"amoxor.d",
	"amoor.d",
	"amoand.d",
	"amomin.d",
	"amomax.d",
	"amominu.d",
	"amomaxu.d",
	"ecall",
	"ebreak",
	"uret",
	"sret",
	"hret",
	"mret",
	"dret",
	"sfence.vm",
	"wfi",
	"csrrw",
	"csrrs",
	"csrrc",
	"csrrwi",
	"csrrsi",
	"csrrci",
	"flw",
	"fsw",
	"fmadd.s",
	"fmsub.s",
	"fnmsub.s",
	"fnmadd.s",
	"fadd.s",
	"fsub.s",
	"fmul.s",
	"fdiv.s",
	"fsgnj.s",
	"fsgnjn.s",
	"fsgnjx.s",
	"fmin.s",
	"fmax.s",
	"fsqrt.s",
	"fle.s",
	"flt.s",
	"feq.s",
	"fcvt.w.s",
	"fcvt.wu.s",
	"fcvt.s.w",
	"fcvt.s.wu",
	"fmv.x.s",
	"fclass.s",
	"fmv.s.x",
	"fcvt.l.s",
	"fcvt.lu.s",
	"fcvt.s.l",
	"fcvt.s.lu",
	"fld",
	"fsd",
	"fmadd.d",
	"fmsub.d",
	"fnmsub.d",
	"fnmadd.d",
	"fadd.d",
	"fsub.d",
	"fmul.d",
	"fdiv.d",
	"fsgnj.d",
	"fsgnjn.d",
	"fsgnjx.d",
	"fmin.d",
	"fmax.d",
	"fcvt.s.d",
	"fcvt.d.s",
	"fsqrt.d",
	"fle.d",
	"flt.d",
	"feq.d",
	"fcvt.w.d",
	"fcvt.wu.d",
	"fcvt.d.w",
	"fcvt.d.wu",
	"fclass.d",
	"fcvt.l.d",
	"fcvt.lu.d",
	"fmv.x.d",
	"fcvt.d.l",
	"fcvt.d.lu",
	"fmv.d.x",
	"frcsr",
	"frrm",
	"frflags",
	"fscsr",
	"fsrm",
	"fsflags",
	"fsrmi",
	"fsflagsi",
	"c.addi4spn",
	"c.fld",
	"c.lw",
	"c.flw",
	"c.fsd",
	"c.sw",
	"c.fsw",
	"c.nop",
	"c.addi",
	"c.jal",
	"c.li",
	"c.lui",
	"c.addi16sp",
	"c.srli",
	"c.srai",
	"c.andi",
	"c.sub",
	"c.xor",
	"c.or",
	"c.and",
	"c.subw",
	"c.addw",
	"c.j",
	"c.beqz",
	"c.bnez",
	"c.slli",
	"c.fldsp",
	"c.lwsp",
	"c.flwsp",
	"c.jr",
	"c.mv",
	"c.ebreak",
	"c.jalr",
	"c.add",
	"c.fsdsp",
	"c.swsp",
	"c.fswsp",
	"c.ld",
	"c.sd",
	"c.addiw",
	"c.ldsp",
	"c.sdsp",
};

const riscv_codec riscv_instruction_codec[] = {
	riscv_codec_unknown,
	riscv_codec_u,
	riscv_codec_u,
	riscv_codec_uj,
	riscv_codec_i,
	riscv_codec_sb,
	riscv_codec_sb,
	riscv_codec_sb,
	riscv_codec_sb,
	riscv_codec_sb,
	riscv_codec_sb,
	riscv_codec_i,
	riscv_codec_i,
	riscv_codec_i,
	riscv_codec_i,
	riscv_codec_i,
	riscv_codec_s,
	riscv_codec_s,
	riscv_codec_s,
	riscv_codec_i,
	riscv_codec_i,
	riscv_codec_i,
	riscv_codec_i,
	riscv_codec_i,
	riscv_codec_i,
	riscv_codec_i_sh5,
	riscv_codec_i_sh5,
	riscv_codec_i_sh5,
	riscv_codec_r,
	riscv_codec_r,
	riscv_codec_r,
	riscv_codec_r,
	riscv_codec_r,
	riscv_codec_r,
	riscv_codec_r,
	riscv_codec_r,
	riscv_codec_r,
	riscv_codec_r,
	riscv_codec_none,
	riscv_codec_none,
	riscv_codec_i,
	riscv_codec_i,
	riscv_codec_s,
	riscv_codec_i_sh6,
	riscv_codec_i_sh6,
	riscv_codec_i_sh6,
	riscv_codec_i,
	riscv_codec_i_sh5,
	riscv_codec_i_sh5,
	riscv_codec_i_sh5,
	riscv_codec_r,
	riscv_codec_r,
	riscv_codec_r,
	riscv_codec_r,
	riscv_codec_r,
	riscv_codec_r,
	riscv_codec_r,
	riscv_codec_r,
	riscv_codec_r,
	riscv_codec_r,
	riscv_codec_r,
	riscv_codec_r,
	riscv_codec_r,
	riscv_codec_r,
	riscv_codec_r,
	riscv_codec_r,
	riscv_codec_r,
	riscv_codec_r,
	riscv_codec_r_l,
	riscv_codec_r_a,
	riscv_codec_r_a,
	riscv_codec_r_a,
	riscv_codec_r_a,
	riscv_codec_r_a,
	riscv_codec_r_a,
	riscv_codec_r_a,
	riscv_codec_r_a,
	riscv_codec_r_a,
	riscv_codec_r_a,
	riscv_codec_r_l,
	riscv_codec_r_a,
	riscv_codec_r_a,
	riscv_codec_r_a,
	riscv_codec_r_a,
	riscv_codec_r_a,
	riscv_codec_r_a,
	riscv_codec_r_a,
	riscv_codec_r_a,
	riscv_codec_r_a,
	riscv_codec_r_a,
	riscv_codec_none,
	riscv_codec_none,
	riscv_codec_none,
	riscv_codec_none,
	riscv_codec_none,
	riscv_codec_none,
	riscv_codec_none,
	riscv_codec_none,
	riscv_codec_none,
	riscv_codec_i,
	riscv_codec_i,
	riscv_codec_i,
	riscv_codec_i,
	riscv_codec_i,
	riscv_codec_i,
	riscv_codec_i,
	riscv_codec_s,
	riscv_codec_r4_m,
	riscv_codec_r4_m,
	riscv_codec_r4_m,
	riscv_codec_r4_m,
	riscv_codec_r_m,
	riscv_codec_r_m,
	riscv_codec_r_m,
	riscv_codec_r_m,
	riscv_codec_r,
	riscv_codec_r,
	riscv_codec_r,
	riscv_codec_r,
	riscv_codec_r,
	riscv_codec_r_m,
	riscv_codec_r,
	riscv_codec_r,
	riscv_codec_r,
	riscv_codec_r_m,
	riscv_codec_r_m,
	riscv_codec_r_m,
	riscv_codec_r_m,
	riscv_codec_r,
	riscv_codec_r,
	riscv_codec_r,
	riscv_codec_r_m,
	riscv_codec_r_m,
	riscv_codec_r_m,
	riscv_codec_r_m,
	riscv_codec_i,
	riscv_codec_s,
	riscv_codec_r4_m,
	riscv_codec_r4_m,
	riscv_codec_r4_m,
	riscv_codec_r4_m,
	riscv_codec_r_m,
	riscv_codec_r_m,
	riscv_codec_r_m,
	riscv_codec_r_m,
	riscv_codec_r,
	riscv_codec_r,
	riscv_codec_r,
	riscv_codec_r,
	riscv_codec_r,
	riscv_codec_r_m,
	riscv_codec_r_m,
	riscv_codec_r_m,
	riscv_codec_r,
	riscv_codec_r,
	riscv_codec_r,
	riscv_codec_r_m,
	riscv_codec_r_m,
	riscv_codec_r_m,
	riscv_codec_r_m,
	riscv_codec_r,
	riscv_codec_r_m,
	riscv_codec_r_m,
	riscv_codec_r,
	riscv_codec_r_m,
	riscv_codec_r_m,
	riscv_codec_r,
	riscv_codec_i,
	riscv_codec_i,
	riscv_codec_i,
	riscv_codec_i,
	riscv_codec_i,
	riscv_codec_i,
	riscv_codec_i,
	riscv_codec_i,
	riscv_codec_ciw_4spn,
	riscv_codec_cl_ld,
	riscv_codec_cl_lw,
	riscv_codec_cl_lw,
	riscv_codec_cs_sd,
	riscv_codec_cs_sw,
	riscv_codec_cs_sw,
	riscv_codec_ci_nop,
	riscv_codec_ci,
	riscv_codec_cj,
	riscv_codec_ci_li,
	riscv_codec_ci_lui,
	riscv_codec_ci_16sp,
	riscv_codec_cb_sh,
	riscv_codec_cb_sh,
	riscv_codec_cb_imm,
	riscv_codec_cs,
	riscv_codec_cs,
	riscv_codec_cs,
	riscv_codec_cs,
	riscv_codec_cs,
	riscv_codec_cs,
	riscv_codec_cj,
	riscv_codec_cb,
	riscv_codec_cb,
	riscv_codec_ci_sh,
	riscv_codec_ci_ldsp,
	riscv_codec_ci_lwsp,
	riscv_codec_ci_lwsp,
	riscv_codec_cr_jr,
	riscv_codec_cr_mv,
	riscv_codec_ci_none,
	riscv_codec_cr_jalr,
	riscv_codec_cr,
	riscv_codec_css_sdsp,
	riscv_codec_css_swsp,
	riscv_codec_css_swsp,
	riscv_codec_cl_ld,
	riscv_codec_cs_sd,
	riscv_codec_ci,
	riscv_codec_ci_ldsp,
	riscv_codec_css_sdsp,
};

const riscv_wu riscv_instruction_match[] = {
	0x00000000,
	0x00000037,
	0x00000017,
	0x0000006f,
	0x00000067,
	0x00000063,
	0x00001063,
	0x00004063,
	0x00005063,
	0x00006063,
	0x00007063,
	0x00000003,
	0x00001003,
	0x00002003,
	0x00004003,
	0x00005003,
	0x00000023,
	0x00001023,
	0x00002023,
	0x00000013,
	0x00002013,
	0x00003013,
	0x00004013,
	0x00006013,
	0x00007013,
	0x00001013,
	0x00005013,
	0x40005013,
	0x00000033,
	0x40000033,
	0x00001033,
	0x00002033,
	0x00003033,
	0x00004033,
	0x00005033,
	0x40005033,
	0x00006033,
	0x00007033,
	0x0000000f,
	0x0000100f,
	0x00006003,
	0x00003003,
	0x00003023,
	0x00001013,
	0x00005013,
	0x40005013,
	0x0000001b,
	0x0000101b,
	0x0000501b,
	0x4000501b,
	0x0000003b,
	0x4000003b,
	0x0000103b,
	0x0000503b,
	0x4000503b,
	0x02000033,
	0x02001033,
	0x02002033,
	0x02003033,
	0x02004033,
	0x02005033,
	0x02006033,
	0x02007033,
	0x0200003b,
	0x0200403b,
	0x0200503b,
	0x0200603b,
	0x0200703b,
	0x1000202f,
	0x1800202f,
	0x0800202f,
	0x0000202f,
	0x2000202f,
	0x4000202f,
	0x6000202f,
	0x8000202f,
	0xa000202f,
	0xc000202f,
	0xe000202f,
	0x1000302f,
	0x1800302f,
	0x0800302f,
	0x0000302f,
	0x2000302f,
	0x4000302f,
	0x6000302f,
	0x8000302f,
	0xa000302f,
	0xc000302f,
	0xe000302f,
	0x00000073,
	0x00100073,
	0x00200073,
	0x10000073,
	0x20200073,
	0x30200073,
	0x7b200073,
	0x10100073,
	0x10200073,
	0x00001073,
	0x00002073,
	0x00003073,
	0x00005073,
	0x00006073,
	0x00007073,
	0x00002007,
	0x00002027,
	0x00000043,
	0x00000047,
	0x0000004b,
	0x0000004f,
	0x00000053,
	0x08000053,
	0x10000053,
	0x18000053,
	0x20000053,
	0x20001053,
	0x20002053,
	0x28000053,
	0x28001053,
	0x58000053,
	0xa0000053,
	0xa0001053,
	0xa0002053,
	0xc0000053,
	0xc0100053,
	0xd0000053,
	0xd0100053,
	0xe0000053,
	0xe0001053,
	0xf0000053,
	0xc0200053,
	0xc0300053,
	0xd0200053,
	0xd0300053,
	0x00003007,
	0x00003027,
	0x02000043,
	0x02000047,
	0x0200004b,
	0x0200004f,
	0x02000053,
	0x0a000053,
	0x12000053,
	0x1a000053,
	0x22000053,
	0x22001053,
	0x22002053,
	0x2a000053,
	0x2a001053,
	0x40100053,
	0x42000053,
	0x5a000053,
	0xa2000053,
	0xa2001053,
	0xa2002053,
	0xc2000053,
	0xc2100053,
	0xd2000053,
	0xd2100053,
	0xe2001053,
	0xc2200053,
	0xc2300053,
	0xe2000053,
	0xd2200053,
	0xd2300053,
	0xf2000053,
	0x00302073,
	0x00202073,
	0x00102073,
	0x00301073,
	0x00201073,
	0x00101073,
	0x00205073,
	0x00105073,
	0x00000000,
	0x00002000,
	0x00004000,
	0x00006000,
	0x0000a000,
	0x0000c000,
	0x0000e000,
	0x00000001,
	0x00000001,
	0x00002001,
	0x00004001,
	0x00006001,
	0x00006101,
	0x00008001,
	0x00008401,
	0x00008801,
	0x00008c01,
	0x00008c21,
	0x00008c41,
	0x00008c61,
	0x00009c01,
	0x00009c21,
	0x0000a001,
	0x0000c001,
	0x0000e001,
	0x00000002,
	0x00002002,
	0x00004002,
	0x00006002,
	0x00008002,
	0x00008002,
	0x00009002,
	0x00009002,
	0x00009002,
	0x0000a002,
	0x0000c002,
	0x0000e002,
	0x00006000,
	0x0000e000,
	0x00002001,
	0x00006002,
	0x0000e002,
};

const riscv_wu riscv_instruction_mask[] = {
	0x00000000,
	0x0000007f,
	0x0000007f,
	0x0000007f,
	0x0000707f,
	0x0000707f,
	0x0000707f,
	0x0000707f,
	0x0000707f,
	0x0000707f,
	0x0000707f,
	0x0000707f,
	0x0000707f,
	0x0000707f,
	0x0000707f,
	0x0000707f,
	0x0000707f,
	0x0000707f,
	0x0000707f,
	0x0000707f,
	0x0000707f,
	0x0000707f,
	0x0000707f,
	0x0000707f,
	0x0000707f,
	0xfc00707f,
	0xfc00707f,
	0xfc00707f,
	0xfe00707f,
	0xfe00707f,
	0xfe00707f,
	0xfe00707f,
	0xfe00707f,
	0xfe00707f,
	0xfe00707f,
	0xfe00707f,
	0xfe00707f,
	0xfe00707f,
	0x0000707f,
	0x0000707f,
	0x0000707f,
	0x0000707f,
	0x0000707f,
	0xfc00707f,
	0xfc00707f,
	0xfc00707f,
	0x0000707f,
	0xfe00707f,
	0xfe00707f,
	0xfe00707f,
	0xfe00707f,
	0xfe00707f,
	0xfe00707f,
	0xfe00707f,
	0xfe00707f,
	0xfe00707f,
	0xfe00707f,
	0xfe00707f,
	0xfe00707f,
	0xfe00707f,
	0xfe00707f,
	0xfe00707f,
	0xfe00707f,
	0xfe00707f,
	0xfe00707f,
	0xfe00707f,
	0xfe00707f,
	0xfe00707f,
	0xf9f0707f,
	0xf800707f,
	0xf800707f,
	0xf800707f,
	0xf800707f,
	0xf800707f,
	0xf800707f,
	0xf800707f,
	0xf800707f,
	0xf800707f,
	0xf800707f,
	0xf9f0707f,
	0xf800707f,
	0xf800707f,
	0xf800707f,
	0xf800707f,
	0xf800707f,
	0xf800707f,
	0xf800707f,
	0xf800707f,
	0xf800707f,
	0xf800707f,
	0xffffffff,
	0xffffffff,
	0xffffffff,
	0xffffffff,
	0xffffffff,
	0xffffffff,
	0xffffffff,
	0xfff07fff,
	0xffffffff,
	0x0000707f,
	0x0000707f,
	0x0000707f,
	0x0000707f,
	0x0000707f,
	0x0000707f,
	0x0000707f,
	0x0000707f,
	0x0600007f,
	0x0600007f,
	0x0600007f,
	0x0600007f,
	0xfe00007f,
	0xfe00007f,
	0xfe00007f,
	0xfe00007f,
	0xfe00707f,
	0xfe00707f,
	0xfe00707f,
	0xfe00707f,
	0xfe00707f,
	0xfff0007f,
	0xfe00707f,
	0xfe00707f,
	0xfe00707f,
	0xfff0007f,
	0xfff0007f,
	0xfff0007f,
	0xfff0007f,
	0xfff0707f,
	0xfff0707f,
	0xfff0707f,
	0xfff0007f,
	0xfff0007f,
	0xfff0007f,
	0xfff0007f,
	0x0000707f,
	0x0000707f,
	0x0600007f,
	0x0600007f,
	0x0600007f,
	0x0600007f,
	0xfe00007f,
	0xfe00007f,
	0xfe00007f,
	0xfe00007f,
	0xfe00707f,
	0xfe00707f,
	0xfe00707f,
	0xfe00707f,
	0xfe00707f,
	0xfff0007f,
	0xfff0007f,
	0xfff0007f,
	0xfe00707f,
	0xfe00707f,
	0xfe00707f,
	0xfff0007f,
	0xfff0007f,
	0xfff0007f,
	0xfff0007f,
	0xfff0707f,
	0xfff0007f,
	0xfff0007f,
	0xfff0707f,
	0xfff0007f,
	0xfff0007f,
	0xfff0707f,
	0xfffff07f,
	0xfffff07f,
	0xfffff07f,
	0xfff0707f,
	0xfff0707f,
	0xfff0707f,
	0xfff0707f,
	0xfff0707f,
	0x0000e003,
	0x0000e003,
	0x0000e003,
	0x0000e003,
	0x0000e003,
	0x0000e003,
	0x0000e003,
	0x0000ffff,
	0x0000e003,
	0x0000e003,
	0x0000e003,
	0x0000e003,
	0x0000ef83,
	0x0000ec03,
	0x0000ec03,
	0x0000ec03,
	0x0000fc63,
	0x0000fc63,
	0x0000fc63,
	0x0000fc63,
	0x0000fc63,
	0x0000fc63,
	0x0000e003,
	0x0000e003,
	0x0000e003,
	0x0000e003,
	0x0000e003,
	0x0000e003,
	0x0000e003,
	0x0000f07f,
	0x0000f003,
	0x0000ffff,
	0x0000f07f,
	0x0000f003,
	0x0000e003,
	0x0000e003,
	0x0000e003,
	0x0000e003,
	0x0000e003,
	0x0000e003,
	0x0000e003,
	0x0000e003,
};

const char* riscv_instruction_format[] = {
	riscv_fmt_none,
	riscv_fmt_rd_imm,
	riscv_fmt_rd_imm,
	riscv_fmt_rd_disp,
	riscv_fmt_rd_rs1_imm,
	riscv_fmt_rs1_rs2_disp,
	riscv_fmt_rs1_rs2_disp,
	riscv_fmt_rs1_rs2_disp,
	riscv_fmt_rs1_rs2_disp,
	riscv_fmt_rs1_rs2_disp,
	riscv_fmt_rs1_rs2_disp,
	riscv_fmt_rd_imm_rs1,
	riscv_fmt_rd_imm_rs1,
	riscv_fmt_rd_imm_rs1,
	riscv_fmt_rd_imm_rs1,
	riscv_fmt_rd_imm_rs1,
	riscv_fmt_rs2_imm_rs1,
	riscv_fmt_rs2_imm_rs1,
	riscv_fmt_rs2_imm_rs1,
	riscv_fmt_rd_rs1_imm,
	riscv_fmt_rd_rs1_imm,
	riscv_fmt_rd_rs1_imm,
	riscv_fmt_rd_rs1_imm,
	riscv_fmt_rd_rs1_imm,
	riscv_fmt_rd_rs1_imm,
	riscv_fmt_rd_rs1_imm,
	riscv_fmt_rd_rs1_imm,
	riscv_fmt_rd_rs1_imm,
	riscv_fmt_rd_rs1_rs2,
	riscv_fmt_rd_rs1_rs2,
	riscv_fmt_rd_rs1_rs2,
	riscv_fmt_rd_rs1_rs2,
	riscv_fmt_rd_rs1_rs2,
	riscv_fmt_rd_rs1_rs2,
	riscv_fmt_rd_rs1_rs2,
	riscv_fmt_rd_rs1_rs2,
	riscv_fmt_rd_rs1_rs2,
	riscv_fmt_rd_rs1_rs2,
	riscv_fmt_none,
	riscv_fmt_none,
	riscv_fmt_rd_imm_rs1,
	riscv_fmt_rd_imm_rs1,
	riscv_fmt_rs2_imm_rs1,
	riscv_fmt_rd_rs1_imm,
	riscv_fmt_rd_rs1_imm,
	riscv_fmt_rd_rs1_imm,
	riscv_fmt_rd_rs1_imm,
	riscv_fmt_rd_rs1_imm,
	riscv_fmt_rd_rs1_imm,
	riscv_fmt_rd_rs1_imm,
	riscv_fmt_rd_rs1_rs2,
	riscv_fmt_rd_rs1_rs2,
	riscv_fmt_rd_rs1_rs2,
	riscv_fmt_rd_rs1_rs2,
	riscv_fmt_rd_rs1_rs2,
	riscv_fmt_rd_rs1_rs2,
	riscv_fmt_rd_rs1_rs2,
	riscv_fmt_rd_rs1_rs2,
	riscv_fmt_rd_rs1_rs2,
	riscv_fmt_rd_rs1_rs2,
	riscv_fmt_rd_rs1_rs2,
	riscv_fmt_rd_rs1_rs2,
	riscv_fmt_rd_rs1_rs2,
	riscv_fmt_rd_rs1_rs2,
	riscv_fmt_rd_rs1_rs2,
	riscv_fmt_rd_rs1_rs2,
	riscv_fmt_rd_rs1_rs2,
	riscv_fmt_rd_rs1_rs2,
	riscv_fmt_aqrl_rd_rs1,
	riscv_fmt_aqrl_rd_rs2_rs1,
	riscv_fmt_aqrl_rd_rs2_rs1,
	riscv_fmt_aqrl_rd_rs2_rs1,
	riscv_fmt_aqrl_rd_rs2_rs1,
	riscv_fmt_aqrl_rd_rs2_rs1,
	riscv_fmt_aqrl_rd_rs2_rs1,
	riscv_fmt_aqrl_rd_rs2_rs1,
	riscv_fmt_aqrl_rd_rs2_rs1,
	riscv_fmt_aqrl_rd_rs2_rs1,
	riscv_fmt_aqrl_rd_rs2_rs1,
	riscv_fmt_aqrl_rd_rs1,
	riscv_fmt_aqrl_rd_rs2_rs1,
	riscv_fmt_aqrl_rd_rs2_rs1,
	riscv_fmt_aqrl_rd_rs2_rs1,
	riscv_fmt_aqrl_rd_rs2_rs1,
	riscv_fmt_aqrl_rd_rs2_rs1,
	riscv_fmt_aqrl_rd_rs2_rs1,
	riscv_fmt_aqrl_rd_rs2_rs1,
	riscv_fmt_aqrl_rd_rs2_rs1,
	riscv_fmt_aqrl_rd_rs2_rs1,
	riscv_fmt_aqrl_rd_rs2_rs1,
	riscv_fmt_none,
	riscv_fmt_none,
	riscv_fmt_none,
	riscv_fmt_none,
	riscv_fmt_none,
	riscv_fmt_none,
	riscv_fmt_none,
	riscv_fmt_none,
	riscv_fmt_none,
	riscv_fmt_rd_csr_rs1,
	riscv_fmt_rd_csr_rs1,
	riscv_fmt_rd_csr_rs1,
	riscv_fmt_rd_csr_imm5,
	riscv_fmt_rd_csr_imm5,
	riscv_fmt_rd_csr_imm5,
	riscv_fmt_frd_imm_rs1,
	riscv_fmt_frs2_imm_rs1,
	riscv_fmt_rm_frd_frs1_frs2_frs3,
	riscv_fmt_rm_frd_frs1_frs2_frs3,
	riscv_fmt_rm_frd_frs1_frs2_frs3,
	riscv_fmt_rm_frd_frs1_frs2_frs3,
	riscv_fmt_rm_frd_frs1_frs2,
	riscv_fmt_rm_frd_frs1_frs2,
	riscv_fmt_rm_frd_frs1_frs2,
	riscv_fmt_rm_frd_frs1_frs2,
	riscv_fmt_frd_frs1_frs2,
	riscv_fmt_frd_frs1_frs2,
	riscv_fmt_frd_frs1_frs2,
	riscv_fmt_frd_frs1_frs2,
	riscv_fmt_frd_frs1_frs2,
	riscv_fmt_rm_frd_frs1_frs2,
	riscv_fmt_rd_frs1_frs2,
	riscv_fmt_rd_frs1_frs2,
	riscv_fmt_rd_frs1_frs2,
	riscv_fmt_rm_rd_frs1,
	riscv_fmt_rm_rd_frs1,
	riscv_fmt_rm_frd_rs1,
	riscv_fmt_rm_frd_rs1,
	riscv_fmt_rd_frs1,
	riscv_fmt_rd_frs1,
	riscv_fmt_frd_rs1,
	riscv_fmt_rm_rd_frs1,
	riscv_fmt_rm_rd_frs1,
	riscv_fmt_rm_frd_rs1,
	riscv_fmt_rm_frd_rs1,
	riscv_fmt_frd_imm_rs1,
	riscv_fmt_frs2_imm_rs1,
	riscv_fmt_rm_frd_frs1_frs2_frs3,
	riscv_fmt_rm_frd_frs1_frs2_frs3,
	riscv_fmt_rm_frd_frs1_frs2_frs3,
	riscv_fmt_rm_frd_frs1_frs2_frs3,
	riscv_fmt_rm_frd_frs1_frs2,
	riscv_fmt_rm_frd_frs1_frs2,
	riscv_fmt_rm_frd_frs1_frs2,
	riscv_fmt_rm_frd_frs1_frs2,
	riscv_fmt_frd_frs1_frs2,
	riscv_fmt_frd_frs1_frs2,
	riscv_fmt_frd_frs1_frs2,
	riscv_fmt_frd_frs1_frs2,
	riscv_fmt_frd_frs1_frs2,
	riscv_fmt_rm_frd_frs1,
	riscv_fmt_rm_frd_frs1,
	riscv_fmt_rm_frd_frs1,
	riscv_fmt_rd_frs1_frs2,
	riscv_fmt_rd_frs1_frs2,
	riscv_fmt_rd_frs1_frs2,
	riscv_fmt_rm_rd_frs1,
	riscv_fmt_rm_rd_frs1,
	riscv_fmt_rm_frd_rs1,
	riscv_fmt_rm_frd_rs1,
	riscv_fmt_rd_frs1,
	riscv_fmt_rm_rd_frs1,
	riscv_fmt_rm_rd_frs1,
	riscv_fmt_rd_frs1,
	riscv_fmt_rm_frd_rs1,
	riscv_fmt_rm_frd_rs1,
	riscv_fmt_frd_rs1,
	riscv_fmt_rd_csr_rs1,
	riscv_fmt_rd_csr_rs1,
	riscv_fmt_rd_csr_rs1,
	riscv_fmt_rd_csr_rs1,
	riscv_fmt_rd_csr_rs1,
	riscv_fmt_rd_csr_rs1,
	riscv_fmt_rd_csr_imm5,
	riscv_fmt_rd_csr_imm5,
	riscv_fmt_rd_rs1_imm,
	riscv_fmt_frd_imm_rs1,
	riscv_fmt_rd_imm_rs1,
	riscv_fmt_frd_imm_rs1,
	riscv_fmt_frs2_imm_rs1,
	riscv_fmt_rs2_imm_rs1,
	riscv_fmt_frs2_imm_rs1,
	riscv_fmt_none,
	riscv_fmt_rd_rs1_imm,
	riscv_fmt_rd_disp,
	riscv_fmt_rd_rs1_imm,
	riscv_fmt_rd_imm,
	riscv_fmt_rd_rs1_imm,
	riscv_fmt_rd_rs1_imm,
	riscv_fmt_rd_rs1_imm,
	riscv_fmt_rd_rs1_imm,
	riscv_fmt_rd_rs1_rs2,
	riscv_fmt_rd_rs1_rs2,
	riscv_fmt_rd_rs1_rs2,
	riscv_fmt_rd_rs1_rs2,
	riscv_fmt_rd_rs1_rs2,
	riscv_fmt_rd_rs1_rs2,
	riscv_fmt_rd_disp,
	riscv_fmt_rs1_rs2_disp,
	riscv_fmt_rs1_rs2_disp,
	riscv_fmt_rd_rs1_imm,
	riscv_fmt_frd_imm_rs1,
	riscv_fmt_rd_imm_rs1,
	riscv_fmt_frd_imm_rs1,
	riscv_fmt_rd_rs1_imm,
	riscv_fmt_rd_rs1_rs2,
	riscv_fmt_none,
	riscv_fmt_rd_rs1_imm,
	riscv_fmt_rd_rs1_rs2,
	riscv_fmt_frs2_imm_rs1,
	riscv_fmt_rs2_imm_rs1,
	riscv_fmt_frs2_imm_rs1,
	riscv_fmt_rd_imm_rs1,
	riscv_fmt_rs2_imm_rs1,
	riscv_fmt_rd_rs1_imm,
	riscv_fmt_rd_imm_rs1,
	riscv_fmt_rs2_imm_rs1,
};

const rvc_constraint rvcc_c_addi4spn[] =            { rvc_imm_10, rvc_imm_x4, rvc_rd_b3, rvc_rs1_eq_sp, rvc_end };
const rvc_constraint rvcc_c_fld[] =                 { rvc_imm_8, rvc_imm_x8, rvc_rd_b3, rvc_rs1_b3, rvc_end };
const rvc_constraint rvcc_c_lw[] =                  { rvc_imm_7, rvc_imm_x4, rvc_rd_b3, rvc_rs1_b3, rvc_end };
const rvc_constraint rvcc_c_flw[] =                 { rvc_imm_7, rvc_imm_x4, rvc_rd_b3, rvc_rs1_b3, rvc_end };
const rvc_constraint rvcc_c_fsd[] =                 { rvc_imm_8, rvc_imm_x8, rvc_rs1_b3, rvc_rs2_b3, rvc_end };
const rvc_constraint rvcc_c_sw[] =                  { rvc_imm_7, rvc_imm_x4, rvc_rs1_b3, rvc_rs2_b3, rvc_end };
const rvc_constraint rvcc_c_fsw[] =                 { rvc_imm_7, rvc_imm_x4, rvc_rs1_b3, rvc_rs2_b3, rvc_end };
const rvc_constraint rvcc_c_nop[] =                 { rvc_rd_eq_x0, rvc_rs1_eq_x0, rvc_rs2_eq_x0, rvc_end };
const rvc_constraint rvcc_c_addi[] =                { rvc_imm_6, rvc_rd_ne_x0, rvc_rd_eq_rs1, rvc_end };
const rvc_constraint rvcc_c_jal[] =                 { rvc_imm_12, rvc_imm_x2, rvc_rd_eq_ra, rvc_end };
const rvc_constraint rvcc_c_li[] =                  { rvc_imm_6, rvc_rd_ne_x0, rvc_rs1_eq_x0, rvc_end };
const rvc_constraint rvcc_c_lui[] =                 { rvc_imm_18, rvc_imm_nz, rvc_rd_ne_x0, rvc_rd_ne_sp, rvc_end };
const rvc_constraint rvcc_c_addi16sp[] =            { rvc_imm_10, rvc_imm_x4, rvc_rd_eq_sp, rvc_rs1_eq_sp, rvc_end };
const rvc_constraint rvcc_c_srli[] =                { rvc_imm_nz, rvc_rd_eq_rs1, rvc_rd_b3, rvc_rs1_b3, rvc_end };
const rvc_constraint rvcc_c_srai[] =                { rvc_imm_nz, rvc_rd_eq_rs1, rvc_rd_b3, rvc_rs1_b3, rvc_end };
const rvc_constraint rvcc_c_andi[] =                { rvc_imm_nz, rvc_rd_eq_rs1, rvc_rd_b3, rvc_rs1_b3, rvc_end };
const rvc_constraint rvcc_c_sub[] =                 { rvc_rd_eq_rs1, rvc_rd_b3, rvc_rs1_b3, rvc_rs2_b3, rvc_end };
const rvc_constraint rvcc_c_xor[] =                 { rvc_rd_eq_rs1, rvc_rd_b3, rvc_rs1_b3, rvc_rs2_b3, rvc_end };
const rvc_constraint rvcc_c_or[] =                  { rvc_rd_eq_rs1, rvc_rd_b3, rvc_rs1_b3, rvc_rs2_b3, rvc_end };
const rvc_constraint rvcc_c_and[] =                 { rvc_rd_eq_rs1, rvc_rd_b3, rvc_rs1_b3, rvc_rs2_b3, rvc_end };
const rvc_constraint rvcc_c_subw[] =                { rvc_rd_eq_rs1, rvc_rd_b3, rvc_rs1_b3, rvc_rs2_b3, rvc_end };
const rvc_constraint rvcc_c_addw[] =                { rvc_rd_eq_rs1, rvc_rd_b3, rvc_rs1_b3, rvc_rs2_b3, rvc_end };
const rvc_constraint rvcc_c_j[] =                   { rvc_imm_12, rvc_imm_x2, rvc_rd_eq_x0, rvc_end };
const rvc_constraint rvcc_c_beqz[] =                { rvc_imm_9, rvc_imm_x2, rvc_rs1_b3, rvc_rs2_eq_x0, rvc_end };
const rvc_constraint rvcc_c_bnez[] =                { rvc_imm_9, rvc_imm_x2, rvc_rs1_b3, rvc_rs2_eq_x0, rvc_end };
const rvc_constraint rvcc_c_slli[] =                { rvc_imm_nz, rvc_rd_ne_x0, rvc_rd_eq_rs1, rvc_end };
const rvc_constraint rvcc_c_fldsp[] =               { rvc_imm_9, rvc_imm_x8, rvc_rs1_eq_sp, rvc_end };
const rvc_constraint rvcc_c_lwsp[] =                { rvc_imm_8, rvc_imm_x4, rvc_rs1_eq_sp, rvc_end };
const rvc_constraint rvcc_c_flwsp[] =               { rvc_imm_8, rvc_imm_x4, rvc_rs1_eq_sp, rvc_end };
const rvc_constraint rvcc_c_jr[] =                  { rvc_rd_eq_x0, rvc_rs2_eq_x0, rvc_end };
const rvc_constraint rvcc_c_mv[] =                  { rvc_rs1_eq_x0, rvc_rd_ne_x0, rvc_rs2_ne_x0, rvc_end };
const rvc_constraint rvcc_c_jalr[] =                { rvc_rd_eq_ra, rvc_rs2_eq_x0, rvc_end };
const rvc_constraint rvcc_c_add[] =                 { rvc_rd_eq_rs1, rvc_rd_ne_x0, rvc_rs2_ne_x0, rvc_end };
const rvc_constraint rvcc_c_fsdsp[] =               { rvc_imm_9, rvc_imm_x8, rvc_rs1_eq_sp, rvc_end };
const rvc_constraint rvcc_c_swsp[] =                { rvc_imm_8, rvc_imm_x4, rvc_rs1_eq_sp, rvc_end };
const rvc_constraint rvcc_c_fswsp[] =               { rvc_imm_8, rvc_imm_x4, rvc_rs1_eq_sp, rvc_end };
const rvc_constraint rvcc_c_ld[] =                  { rvc_imm_8, rvc_imm_x8, rvc_rd_b3, rvc_rs1_b3, rvc_end };
const rvc_constraint rvcc_c_sd[] =                  { rvc_imm_8, rvc_imm_x8, rvc_rs1_b3, rvc_rs2_b3, rvc_end };
const rvc_constraint rvcc_c_addiw[] =               { rvc_imm_6, rvc_rd_ne_x0, rvc_rd_eq_rs1, rvc_end };
const rvc_constraint rvcc_c_ldsp[] =                { rvc_imm_9, rvc_imm_x8, rvc_rs1_eq_sp, rvc_end };
const rvc_constraint rvcc_c_sdsp[] =                { rvc_imm_9, rvc_imm_x8, rvc_rs1_eq_sp, rvc_end };

const riscv_comp_data rvcd_lui[] =                   { { 186, rvcc_c_lui }, { riscv_op_unknown, nullptr } };
const riscv_comp_data rvcd_jal[] =                   { { 184, rvcc_c_jal }, { 197, rvcc_c_j }, { riscv_op_unknown, nullptr } };
const riscv_comp_data rvcd_jalr[] =                  { { 204, rvcc_c_jr }, { 207, rvcc_c_jalr }, { riscv_op_unknown, nullptr } };
const riscv_comp_data rvcd_beq[] =                   { { 198, rvcc_c_beqz }, { riscv_op_unknown, nullptr } };
const riscv_comp_data rvcd_bne[] =                   { { 199, rvcc_c_bnez }, { riscv_op_unknown, nullptr } };
const riscv_comp_data rvcd_lw[] =                    { { 177, rvcc_c_lw }, { 202, rvcc_c_lwsp }, { riscv_op_unknown, nullptr } };
const riscv_comp_data rvcd_sw[] =                    { { 180, rvcc_c_sw }, { 210, rvcc_c_swsp }, { riscv_op_unknown, nullptr } };
const riscv_comp_data rvcd_addi[] =                  { { 175, rvcc_c_addi4spn }, { 182, rvcc_c_nop }, { 183, rvcc_c_addi }, { 185, rvcc_c_li }, { 187, rvcc_c_addi16sp }, { riscv_op_unknown, nullptr } };
const riscv_comp_data rvcd_andi[] =                  { { 190, rvcc_c_andi }, { riscv_op_unknown, nullptr } };
const riscv_comp_data rvcd_slli_rv32i[] =            { { 200, rvcc_c_slli }, { riscv_op_unknown, nullptr } };
const riscv_comp_data rvcd_srli_rv32i[] =            { { 188, rvcc_c_srli }, { riscv_op_unknown, nullptr } };
const riscv_comp_data rvcd_srai_rv32i[] =            { { 189, rvcc_c_srai }, { riscv_op_unknown, nullptr } };
const riscv_comp_data rvcd_add[] =                   { { 205, rvcc_c_mv }, { 208, rvcc_c_add }, { riscv_op_unknown, nullptr } };
const riscv_comp_data rvcd_sub[] =                   { { 191, rvcc_c_sub }, { riscv_op_unknown, nullptr } };
const riscv_comp_data rvcd_xor[] =                   { { 192, rvcc_c_xor }, { riscv_op_unknown, nullptr } };
const riscv_comp_data rvcd_or[] =                    { { 193, rvcc_c_or }, { riscv_op_unknown, nullptr } };
const riscv_comp_data rvcd_and[] =                   { { 194, rvcc_c_and }, { riscv_op_unknown, nullptr } };
const riscv_comp_data rvcd_ld[] =                    { { 212, rvcc_c_ld }, { 215, rvcc_c_ldsp }, { riscv_op_unknown, nullptr } };
const riscv_comp_data rvcd_sd[] =                    { { 213, rvcc_c_sd }, { 216, rvcc_c_sdsp }, { riscv_op_unknown, nullptr } };
const riscv_comp_data rvcd_slli_rv64i[] =            { { 200, rvcc_c_slli }, { riscv_op_unknown, nullptr } };
const riscv_comp_data rvcd_srli_rv64i[] =            { { 188, rvcc_c_srli }, { riscv_op_unknown, nullptr } };
const riscv_comp_data rvcd_srai_rv64i[] =            { { 189, rvcc_c_srai }, { riscv_op_unknown, nullptr } };
const riscv_comp_data rvcd_addiw[] =                 { { 214, rvcc_c_addiw }, { riscv_op_unknown, nullptr } };
const riscv_comp_data rvcd_addw[] =                  { { 196, rvcc_c_addw }, { riscv_op_unknown, nullptr } };
const riscv_comp_data rvcd_subw[] =                  { { 195, rvcc_c_subw }, { riscv_op_unknown, nullptr } };
const riscv_comp_data rvcd_flw[] =                   { { 178, rvcc_c_flw }, { 203, rvcc_c_flwsp }, { riscv_op_unknown, nullptr } };
const riscv_comp_data rvcd_fsw[] =                   { { 181, rvcc_c_fsw }, { 211, rvcc_c_fswsp }, { riscv_op_unknown, nullptr } };
const riscv_comp_data rvcd_fld[] =                   { { 176, rvcc_c_fld }, { 201, rvcc_c_fldsp }, { riscv_op_unknown, nullptr } };
const riscv_comp_data rvcd_fsd[] =                   { { 179, rvcc_c_fsd }, { 209, rvcc_c_fsdsp }, { riscv_op_unknown, nullptr } };

const riscv_comp_data* riscv_instruction_comp[] = {
	nullptr,
	rvcd_lui,
	nullptr,
	rvcd_jal,
	rvcd_jalr,
	rvcd_beq,
	rvcd_bne,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	rvcd_lw,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	rvcd_sw,
	rvcd_addi,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	rvcd_andi,
	rvcd_slli_rv32i,
	rvcd_srli_rv32i,
	rvcd_srai_rv32i,
	rvcd_add,
	rvcd_sub,
	nullptr,
	nullptr,
	nullptr,
	rvcd_xor,
	nullptr,
	nullptr,
	rvcd_or,
	rvcd_and,
	nullptr,
	nullptr,
	nullptr,
	rvcd_ld,
	rvcd_sd,
	rvcd_slli_rv64i,
	rvcd_srli_rv64i,
	rvcd_srai_rv64i,
	rvcd_addiw,
	nullptr,
	nullptr,
	nullptr,
	rvcd_addw,
	rvcd_subw,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	rvcd_flw,
	rvcd_fsw,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	rvcd_fld,
	rvcd_fsd,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
};

const int riscv_instruction_decomp[] = {
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	19,
	135,
	13,
	105,
	136,
	18,
	106,
	19,
	19,
	3,
	19,
	1,
	19,
	44,
	45,
	24,
	29,
	33,
	36,
	37,
	51,
	50,
	3,
	5,
	6,
	43,
	135,
	13,
	105,
	4,
	28,
	0,
	4,
	28,
	136,
	18,
	106,
	41,
	42,
	46,
	41,
	42,
};

