/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Raim/Documents/Laboratorio/MarioSong/CLK_Divider.v";
static int ng1[] = {1, 0};
static unsigned int ng2[] = {4535U, 0U};
static int ng3[] = {2, 0};
static unsigned int ng4[] = {0U, 0U};
static int ng5[] = {0, 0};



static void Cont_11_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 1616U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(11, ng0);
    t2 = (t0 + 1092);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2152);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 2100);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_13_1(char *t0)
{
    char t8[8];
    char t10[8];
    char t30[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;

LAB0:    t1 = (t0 + 1760U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(13, ng0);
    t2 = (t0 + 2108);
    *((int *)t2) = 1;
    t3 = (t0 + 1788);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(14, ng0);

LAB5:    xsi_set_current_line(16, ng0);
    t4 = (t0 + 1000);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t6, 22, t7, 32);
    t9 = (t0 + 1000);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 22);
    xsi_set_current_line(18, ng0);
    t2 = (t0 + 1000);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    t6 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_divide(t8, 32, t5, 13, t6, 32);
    memset(t10, 0, 8);
    t7 = (t4 + 4);
    t9 = (t8 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t8);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t9);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t9);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t10) = 1;

LAB9:    t24 = (t10 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t10);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB2;

LAB8:    t23 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(19, ng0);

LAB13:    xsi_set_current_line(20, ng0);
    t31 = (t0 + 1092);
    t32 = (t31 + 36U);
    t33 = *((char **)t32);
    memset(t30, 0, 8);
    t34 = (t33 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (~(t35));
    t37 = *((unsigned int *)t33);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB17;

LAB15:    if (*((unsigned int *)t34) == 0)
        goto LAB14;

LAB16:    t40 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t40) = 1;

LAB17:    t41 = (t0 + 1092);
    xsi_vlogvar_assign_value(t41, t30, 0, 0, 1);
    xsi_set_current_line(21, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 22);
    goto LAB12;

LAB14:    *((unsigned int *)t30) = 1;
    goto LAB17;

}

static void Initial_25_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(26, ng0);

LAB2:    xsi_set_current_line(27, ng0);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 1000);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 22);
    xsi_set_current_line(28, ng0);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 1092);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}


extern void work_m_00000000000156452473_2123377956_init()
{
	static char *pe[] = {(void *)Cont_11_0,(void *)Always_13_1,(void *)Initial_25_2};
	xsi_register_didat("work_m_00000000000156452473_2123377956", "isim/TestBench_isim_beh.exe.sim/work/m_00000000000156452473_2123377956.didat");
	xsi_register_executes(pe);
}
