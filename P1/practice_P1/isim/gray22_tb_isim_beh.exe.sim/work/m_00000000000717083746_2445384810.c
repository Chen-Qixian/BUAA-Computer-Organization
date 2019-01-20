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
static const char *ng0 = "C:/Users/cqx/Desktop/Assignment/Computer_Organization/P1/practice_P1/GRAY2.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {6U, 0U};
static unsigned int ng7[] = {7U, 0U};
static unsigned int ng8[] = {5U, 0U};
static unsigned int ng9[] = {4U, 0U};
static int ng10[] = {1, 0};



static void Initial_29_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(29, ng0);

LAB2:    xsi_set_current_line(30, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(31, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1928);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 3);

LAB1:    return;
}

static void Always_34_1(char *t0)
{
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
    char *t14;
    char *t15;

LAB0:    t1 = (t0 + 3096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 3416);
    *((int *)t2) = 1;
    t3 = (t0 + 3128);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(34, ng0);

LAB5:    xsi_set_current_line(35, ng0);
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

LAB7:    xsi_set_current_line(39, ng0);

LAB10:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:
LAB13:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(35, ng0);

LAB9:    xsi_set_current_line(36, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1928);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 3);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB8;

LAB11:    xsi_set_current_line(40, ng0);

LAB14:    xsi_set_current_line(41, ng0);
    t4 = (t0 + 1928);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);

LAB15:    t12 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t11, 3, t12, 3);
    if (t13 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t11, 3, t2, 3);
    if (t13 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t11, 3, t2, 3);
    if (t13 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t11, 3, t2, 3);
    if (t13 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng6)));
    t13 = xsi_vlog_unsigned_case_compare(t11, 3, t2, 3);
    if (t13 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t11, 3, t2, 3);
    if (t13 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng8)));
    t13 = xsi_vlog_unsigned_case_compare(t11, 3, t2, 3);
    if (t13 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng9)));
    t13 = xsi_vlog_unsigned_case_compare(t11, 3, t2, 3);
    if (t13 == 1)
        goto LAB30;

LAB31:
LAB32:    goto LAB13;

LAB16:    xsi_set_current_line(43, ng0);
    t14 = ((char*)((ng3)));
    t15 = (t0 + 1928);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 3);
    goto LAB32;

LAB18:    xsi_set_current_line(45, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB32;

LAB20:    xsi_set_current_line(47, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB32;

LAB22:    xsi_set_current_line(49, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB32;

LAB24:    xsi_set_current_line(51, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB32;

LAB26:    xsi_set_current_line(53, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB32;

LAB28:    xsi_set_current_line(55, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB32;

LAB30:    xsi_set_current_line(57, ng0);

LAB33:    xsi_set_current_line(58, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB32;

}


extern void work_m_00000000000717083746_2445384810_init()
{
	static char *pe[] = {(void *)Initial_29_0,(void *)Always_34_1};
	xsi_register_didat("work_m_00000000000717083746_2445384810", "isim/gray22_tb_isim_beh.exe.sim/work/m_00000000000717083746_2445384810.didat");
	xsi_register_executes(pe);
}
