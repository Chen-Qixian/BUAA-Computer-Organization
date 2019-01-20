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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/cqx/Desktop/Assignment/Computer_Organization/P1/practice_P1/counter.v";
static int ng1[] = {0, 0, 0, 0};
static int ng2[] = {0, 0};
static int ng3[] = {3, 0};
static unsigned int ng4[] = {1U, 0U, 0U, 0U};
static unsigned int ng5[] = {1U, 0U};



static void Initial_32_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(32, ng0);

LAB2:    xsi_set_current_line(33, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 64, 0LL);
    xsi_set_current_line(34, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 64, 0LL);

LAB1:    return;
}

static void Always_37_1(char *t0)
{
    char t13[8];
    char t39[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t40;

LAB0:    t1 = (t0 + 3416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 3736);
    *((int *)t2) = 1;
    t3 = (t0 + 3448);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(37, ng0);

LAB5:    xsi_set_current_line(38, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(43, ng0);

LAB10:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(53, ng0);

LAB24:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    xsi_vlog_unsigned_add(t39, 64, t4, 64, t5, 64);
    t11 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t11, t39, 0, 0, 64, 0LL);

LAB13:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(38, ng0);

LAB9:    xsi_set_current_line(39, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 64, 0LL);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 64, 0LL);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB8;

LAB11:    xsi_set_current_line(44, ng0);

LAB14:    xsi_set_current_line(45, ng0);
    t4 = (t0 + 2248);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t14 = (t11 + 4);
    t15 = (t12 + 4);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t14);
    t20 = *((unsigned int *)t15);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t14);
    t24 = *((unsigned int *)t15);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB18;

LAB15:    if (t25 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t13) = 1;

LAB18:    t29 = (t13 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(49, ng0);

LAB23:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 3, t4, 3, t5, 3);
    t11 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 3, 0LL);

LAB21:    goto LAB13;

LAB17:    t28 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(45, ng0);

LAB22:    xsi_set_current_line(46, ng0);
    t35 = (t0 + 2088);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = ((char*)((ng4)));
    xsi_vlog_unsigned_add(t39, 64, t37, 64, t38, 64);
    t40 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t40, t39, 0, 0, 64, 0LL);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB21;

}


extern void work_m_00000000003862130804_2582214024_init()
{
	static char *pe[] = {(void *)Initial_32_0,(void *)Always_37_1};
	xsi_register_didat("work_m_00000000003862130804_2582214024", "isim/counter_tb_isim_beh.exe.sim/work/m_00000000003862130804_2582214024.didat");
	xsi_register_executes(pe);
}
