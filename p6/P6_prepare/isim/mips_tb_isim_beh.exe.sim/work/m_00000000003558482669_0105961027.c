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
static const char *ng0 = "C:/Users/cqx/Desktop/Assignment/Computer_Organization/p6/P6_submit/MD.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {4, 0};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {2U, 0U};
static int ng6[] = {9, 0};
static unsigned int ng7[] = {3U, 0U};
static unsigned int ng8[] = {4U, 0U};
static unsigned int ng9[] = {5U, 0U};
static unsigned int ng10[] = {6U, 0U};
static unsigned int ng11[] = {7U, 0U};
static int ng12[] = {1, 0};



static void Initial_47_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(47, ng0);

LAB2:    xsi_set_current_line(48, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3208);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(49, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(50, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(51, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2728);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_54_1(char *t0)
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

LAB0:    t1 = (t0 + 4696U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 5016);
    *((int *)t2) = 1;
    t3 = (t0 + 4728);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(54, ng0);

LAB5:    xsi_set_current_line(55, ng0);
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

LAB7:    xsi_set_current_line(62, ng0);
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

LAB11:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB43;

LAB44:    xsi_set_current_line(133, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB47;

LAB48:
LAB49:
LAB45:
LAB12:
LAB8:    xsi_set_current_line(137, ng0);
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
        goto LAB51;

LAB52:    xsi_set_current_line(140, ng0);

LAB55:    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB53:    goto LAB2;

LAB6:    xsi_set_current_line(55, ng0);

LAB9:    xsi_set_current_line(56, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2888);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB8;

LAB10:    xsi_set_current_line(62, ng0);

LAB13:    xsi_set_current_line(63, ng0);
    t4 = (t0 + 2328U);
    t5 = *((char **)t4);

LAB14:    t4 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t13 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t13 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t13 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t13 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng8)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t13 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng9)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t13 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng10)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t13 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng11)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t13 == 1)
        goto LAB29;

LAB30:
LAB32:
LAB31:    xsi_set_current_line(119, ng0);

LAB42:    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB33:    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB12;

LAB15:    xsi_set_current_line(65, ng0);

LAB34:    xsi_set_current_line(66, ng0);
    t11 = ((char*)((ng3)));
    t12 = (t0 + 3208);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    xsi_vlog_unsigned_multiply(t14, 64, t3, 32, t4, 32);
    t2 = (t0 + 3368);
    xsi_vlogvar_assign_value(t2, t14, 0, 0, 64);
    xsi_set_current_line(68, ng0);
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
    xsi_set_current_line(69, ng0);
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
    goto LAB33;

LAB17:    xsi_set_current_line(72, ng0);

LAB35:    xsi_set_current_line(73, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 3208);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    xsi_vlogtype_sign_extend(t14, 64, t3, 32);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    xsi_vlogtype_sign_extend(t19, 64, t4, 32);
    xsi_vlog_signed_multiply(t20, 64, t14, 64, t19, 64);
    t2 = (t0 + 3368);
    xsi_vlogvar_assign_value(t2, t20, 0, 0, 64);
    xsi_set_current_line(75, ng0);
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
    xsi_set_current_line(76, ng0);
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
    goto LAB33;

LAB19:    xsi_set_current_line(79, ng0);

LAB36:    xsi_set_current_line(80, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 3208);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_mod(t15, 32, t3, 32, t4, 32);
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t15, 0, 0, 32);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_divide(t15, 32, t3, 32, t4, 32);
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t15, 0, 0, 32);
    goto LAB33;

LAB21:    xsi_set_current_line(85, ng0);

LAB37:    xsi_set_current_line(86, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 3208);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t22, 0, 8);
    xsi_vlog_signed_mod(t22, 32, t3, 32, t4, 32);
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t22, 0, 0, 32);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t22, 0, 8);
    xsi_vlog_signed_divide(t22, 32, t3, 32, t4, 32);
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t22, 0, 0, 32);
    goto LAB33;

LAB23:    xsi_set_current_line(91, ng0);

LAB38:    xsi_set_current_line(92, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 3208);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    xsi_vlogtype_sign_extend(t14, 64, t3, 32);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    xsi_vlogtype_sign_extend(t19, 64, t4, 32);
    xsi_vlog_signed_multiply(t20, 64, t14, 64, t19, 64);
    t2 = (t0 + 3368);
    xsi_vlogvar_assign_value(t2, t20, 0, 0, 64);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t11 = (t0 + 2888);
    t12 = (t11 + 56U);
    t16 = *((char **)t12);
    xsi_vlogtype_concat(t14, 64, 64, 2U, t16, 32, t4, 32);
    t18 = (t0 + 3368);
    t23 = (t18 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_unsigned_add(t19, 64, t14, 64, t24, 64);
    t25 = (t0 + 3528);
    xsi_vlogvar_assign_value(t25, t19, 0, 0, 64);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t11 = (t0 + 3048);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 32);
    t12 = (t0 + 2888);
    xsi_vlogvar_assign_value(t12, t4, 32, 0, 32);
    goto LAB33;

LAB25:    xsi_set_current_line(98, ng0);

LAB39:    xsi_set_current_line(99, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 3208);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    xsi_vlogtype_sign_extend(t14, 64, t3, 32);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    xsi_vlogtype_sign_extend(t19, 64, t4, 32);
    xsi_vlog_signed_multiply(t20, 64, t14, 64, t19, 64);
    t2 = (t0 + 3368);
    xsi_vlogvar_assign_value(t2, t20, 0, 0, 64);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t11 = (t0 + 2888);
    t12 = (t11 + 56U);
    t16 = *((char **)t12);
    xsi_vlogtype_concat(t14, 64, 64, 2U, t16, 32, t4, 32);
    t18 = (t0 + 3368);
    t23 = (t18 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_unsigned_minus(t19, 64, t14, 64, t24, 64);
    t25 = (t0 + 3528);
    xsi_vlogvar_assign_value(t25, t19, 0, 0, 64);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t11 = (t0 + 3048);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 32);
    t12 = (t0 + 2888);
    xsi_vlogvar_assign_value(t12, t4, 32, 0, 32);
    goto LAB33;

LAB27:    xsi_set_current_line(105, ng0);

LAB40:    xsi_set_current_line(106, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 3208);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    xsi_vlog_unsigned_multiply(t14, 64, t3, 32, t4, 32);
    t2 = (t0 + 3368);
    xsi_vlogvar_assign_value(t2, t14, 0, 0, 64);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t11 = (t0 + 2888);
    t12 = (t11 + 56U);
    t16 = *((char **)t12);
    xsi_vlogtype_concat(t14, 64, 64, 2U, t16, 32, t4, 32);
    t18 = (t0 + 3368);
    t23 = (t18 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_unsigned_add(t19, 64, t14, 64, t24, 64);
    t25 = (t0 + 3528);
    xsi_vlogvar_assign_value(t25, t19, 0, 0, 64);
    xsi_set_current_line(109, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t11 = (t0 + 3048);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 32);
    t12 = (t0 + 2888);
    xsi_vlogvar_assign_value(t12, t4, 32, 0, 32);
    goto LAB33;

LAB29:    xsi_set_current_line(112, ng0);

LAB41:    xsi_set_current_line(113, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 3208);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(114, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    xsi_vlog_unsigned_multiply(t14, 64, t3, 32, t4, 32);
    t2 = (t0 + 3368);
    xsi_vlogvar_assign_value(t2, t14, 0, 0, 64);
    xsi_set_current_line(115, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t11 = (t0 + 2888);
    t12 = (t11 + 56U);
    t16 = *((char **)t12);
    xsi_vlogtype_concat(t14, 64, 64, 2U, t16, 32, t4, 32);
    t18 = (t0 + 3368);
    t23 = (t18 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_unsigned_add(t19, 64, t14, 64, t24, 64);
    t25 = (t0 + 3528);
    xsi_vlogvar_assign_value(t25, t19, 0, 0, 64);
    xsi_set_current_line(116, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t11 = (t0 + 3048);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 32);
    t12 = (t0 + 2888);
    xsi_vlogvar_assign_value(t12, t4, 32, 0, 32);
    goto LAB33;

LAB43:    xsi_set_current_line(129, ng0);

LAB46:    xsi_set_current_line(130, ng0);
    t4 = (t0 + 1368U);
    t11 = *((char **)t4);
    t4 = (t0 + 2888);
    xsi_vlogvar_assign_value(t4, t11, 0, 0, 32);
    goto LAB45;

LAB47:    xsi_set_current_line(133, ng0);

LAB50:    xsi_set_current_line(134, ng0);
    t4 = (t0 + 1368U);
    t11 = *((char **)t4);
    t4 = (t0 + 3048);
    xsi_vlogvar_assign_value(t4, t11, 0, 0, 32);
    goto LAB49;

LAB51:    xsi_set_current_line(137, ng0);

LAB54:    xsi_set_current_line(138, ng0);
    t16 = (t0 + 3208);
    t18 = (t16 + 56U);
    t23 = *((char **)t18);
    t24 = ((char*)((ng12)));
    memset(t21, 0, 8);
    xsi_vlog_signed_minus(t21, 32, t23, 32, t24, 32);
    t25 = (t0 + 3208);
    xsi_vlogvar_assign_value(t25, t21, 0, 0, 32);
    goto LAB53;

}


extern void work_m_00000000003558482669_0105961027_init()
{
	static char *pe[] = {(void *)Initial_47_0,(void *)Always_54_1};
	xsi_register_didat("work_m_00000000003558482669_0105961027", "isim/mips_tb_isim_beh.exe.sim/work/m_00000000003558482669_0105961027.didat");
	xsi_register_executes(pe);
}
