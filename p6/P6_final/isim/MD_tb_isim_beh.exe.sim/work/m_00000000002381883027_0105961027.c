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
static const char *ng0 = "C:/Users/cqx/Desktop/Assignment/Computer_Organization/p6/P6_final/MD.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {4, 0};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {2U, 0U};
static int ng6[] = {9, 0};
static unsigned int ng7[] = {3U, 0U};
static int ng8[] = {1, 0};



static void Initial_43_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(43, ng0);

LAB2:    xsi_set_current_line(44, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3208);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(45, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(46, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(47, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2728);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_50_1(char *t0)
{
    char t14[16];
    char t15[8];
    char t19[16];
    char t20[16];
    char t21[8];
    char t22[8];
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
    int t13;
    char *t16;
    unsigned int t17;
    char *t18;
    char *t23;
    char *t24;
    char *t25;

LAB0:    t1 = (t0 + 4536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 4856);
    *((int *)t2) = 1;
    t3 = (t0 + 4568);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(50, ng0);

LAB5:    xsi_set_current_line(51, ng0);
    t4 = (t0 + 2008U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB35;

LAB36:
LAB37:
LAB33:
LAB12:
LAB8:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t11 = ((char*)((ng1)));
    memset(t15, 0, 8);
    xsi_vlog_signed_greater(t15, 32, t4, 32, t11, 32);
    t12 = (t15 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (~(t6));
    t8 = *((unsigned int *)t15);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB39;

LAB40:    xsi_set_current_line(108, ng0);

LAB43:    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB41:    goto LAB2;

LAB6:    xsi_set_current_line(51, ng0);

LAB9:    xsi_set_current_line(52, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2888);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB8;

LAB10:    xsi_set_current_line(58, ng0);

LAB13:    xsi_set_current_line(59, ng0);
    t4 = (t0 + 2328U);
    t5 = *((char **)t4);

LAB14:    t4 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t13 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t13 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t13 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t13 == 1)
        goto LAB21;

LAB22:
LAB24:
LAB23:    xsi_set_current_line(87, ng0);

LAB30:    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB25:    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB12;

LAB15:    xsi_set_current_line(61, ng0);

LAB26:    xsi_set_current_line(62, ng0);
    t11 = ((char*)((ng3)));
    t12 = (t0 + 3208);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    xsi_vlog_unsigned_multiply(t14, 64, t3, 32, t4, 32);
    t2 = (t0 + 3368);
    xsi_vlogvar_assign_value(t2, t14, 0, 0, 64);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t15, 0, 8);
    t11 = (t15 + 4);
    t12 = (t4 + 8);
    t16 = (t4 + 12);
    t6 = *((unsigned int *)t12);
    t7 = (t6 >> 0);
    *((unsigned int *)t15) = t7;
    t8 = *((unsigned int *)t16);
    t9 = (t8 >> 0);
    *((unsigned int *)t11) = t9;
    t10 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t10 & 4294967295U);
    t17 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t17 & 4294967295U);
    t18 = (t0 + 2888);
    xsi_vlogvar_assign_value(t18, t15, 0, 0, 32);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t15, 0, 8);
    t11 = (t15 + 4);
    t12 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t15) = t7;
    t8 = *((unsigned int *)t12);
    t9 = (t8 >> 0);
    *((unsigned int *)t11) = t9;
    t10 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t10 & 4294967295U);
    t17 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t17 & 4294967295U);
    t16 = (t0 + 3048);
    xsi_vlogvar_assign_value(t16, t15, 0, 0, 32);
    goto LAB25;

LAB17:    xsi_set_current_line(68, ng0);

LAB27:    xsi_set_current_line(69, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 3208);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    xsi_vlogtype_sign_extend(t14, 64, t3, 32);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    xsi_vlogtype_sign_extend(t19, 64, t4, 32);
    xsi_vlog_signed_multiply(t20, 64, t14, 64, t19, 64);
    t2 = (t0 + 3368);
    xsi_vlogvar_assign_value(t2, t20, 0, 0, 64);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t15, 0, 8);
    t11 = (t15 + 4);
    t12 = (t4 + 8);
    t16 = (t4 + 12);
    t6 = *((unsigned int *)t12);
    t7 = (t6 >> 0);
    *((unsigned int *)t15) = t7;
    t8 = *((unsigned int *)t16);
    t9 = (t8 >> 0);
    *((unsigned int *)t11) = t9;
    t10 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t10 & 4294967295U);
    t17 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t17 & 4294967295U);
    t18 = (t0 + 2888);
    xsi_vlogvar_assign_value(t18, t15, 0, 0, 32);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t15, 0, 8);
    t11 = (t15 + 4);
    t12 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t15) = t7;
    t8 = *((unsigned int *)t12);
    t9 = (t8 >> 0);
    *((unsigned int *)t11) = t9;
    t10 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t10 & 4294967295U);
    t17 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t17 & 4294967295U);
    t16 = (t0 + 3048);
    xsi_vlogvar_assign_value(t16, t15, 0, 0, 32);
    goto LAB25;

LAB19:    xsi_set_current_line(75, ng0);

LAB28:    xsi_set_current_line(76, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 3208);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_mod(t15, 32, t3, 32, t4, 32);
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t15, 0, 0, 32);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_divide(t15, 32, t3, 32, t4, 32);
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t15, 0, 0, 32);
    goto LAB25;

LAB21:    xsi_set_current_line(81, ng0);

LAB29:    xsi_set_current_line(82, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 3208);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t22, 0, 8);
    xsi_vlog_signed_mod(t22, 32, t3, 32, t4, 32);
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t22, 0, 0, 32);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t22, 0, 8);
    xsi_vlog_signed_divide(t22, 32, t3, 32, t4, 32);
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t22, 0, 0, 32);
    goto LAB25;

LAB31:    xsi_set_current_line(97, ng0);

LAB34:    xsi_set_current_line(98, ng0);
    t4 = (t0 + 1368U);
    t11 = *((char **)t4);
    t4 = (t0 + 2888);
    xsi_vlogvar_assign_value(t4, t11, 0, 0, 32);
    goto LAB33;

LAB35:    xsi_set_current_line(101, ng0);

LAB38:    xsi_set_current_line(102, ng0);
    t4 = (t0 + 1368U);
    t11 = *((char **)t4);
    t4 = (t0 + 3048);
    xsi_vlogvar_assign_value(t4, t11, 0, 0, 32);
    goto LAB37;

LAB39:    xsi_set_current_line(105, ng0);

LAB42:    xsi_set_current_line(106, ng0);
    t16 = (t0 + 3208);
    t18 = (t16 + 56U);
    t23 = *((char **)t18);
    t24 = ((char*)((ng8)));
    memset(t21, 0, 8);
    xsi_vlog_signed_minus(t21, 32, t23, 32, t24, 32);
    t25 = (t0 + 3208);
    xsi_vlogvar_assign_value(t25, t21, 0, 0, 32);
    goto LAB41;

}


extern void work_m_00000000002381883027_0105961027_init()
{
	static char *pe[] = {(void *)Initial_43_0,(void *)Always_50_1};
	xsi_register_didat("work_m_00000000002381883027_0105961027", "isim/MD_tb_isim_beh.exe.sim/work/m_00000000002381883027_0105961027.didat");
	xsi_register_executes(pe);
}
