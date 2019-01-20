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
static const char *ng0 = "D:/My_BUAA/2017_Fall/Assignment/Computer_Organization/p6/P6_final/DM.v";
static int ng1[] = {0, 0};
static int ng2[] = {4096, 0};
static int ng3[] = {1, 0};
static const char *ng4 = "%d@%h: *%h <= %h";
static int ng5[] = {31, 0};
static int ng6[] = {16, 0};
static int ng7[] = {15, 0};
static unsigned int ng8[] = {0U, 0U};
static int ng9[] = {7, 0};
static unsigned int ng10[] = {1U, 0U};
static int ng11[] = {8, 0};
static unsigned int ng12[] = {2U, 0U};
static int ng13[] = {23, 0};
static unsigned int ng14[] = {3U, 0U};
static int ng15[] = {24, 0};



static void Cont_38_0(char *t0)
{
    char t5[8];
    char t12[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    t1 = (t0 + 3968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 2888);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2888);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t13 = (t0 + 2168U);
    t14 = *((char **)t13);
    memset(t12, 0, 8);
    t13 = (t12 + 4);
    t15 = (t14 + 4);
    t16 = *((unsigned int *)t14);
    t17 = (t16 >> 2);
    *((unsigned int *)t12) = t17;
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 2);
    *((unsigned int *)t13) = t19;
    t20 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t20 & 4095U);
    t21 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t21 & 4095U);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t12, 12, 2);
    t22 = (t0 + 4880);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t5, 8);
    xsi_driver_vfirst_trans(t22, 0, 31);
    t27 = (t0 + 4784);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Initial_40_1(char *t0)
{
    char t5[8];
    char t14[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    int t35;

LAB0:    xsi_set_current_line(40, ng0);

LAB2:    xsi_set_current_line(41, ng0);
    xsi_set_current_line(41, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 3048);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    xsi_set_current_line(41, ng0);

LAB6:    xsi_set_current_line(42, ng0);
    t12 = ((char*)((ng1)));
    t13 = (t0 + 2888);
    t16 = (t0 + 2888);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 2888);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 3048);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_array_indices(t14, t15, t18, t21, 2, 1, t24, 32, 1);
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(41, ng0);
    t1 = (t0 + 3048);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng3)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 3048);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB7:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t13, t12, 0, *((unsigned int *)t15), t35);
    goto LAB8;

}

static void Always_46_2(char *t0)
{
    char t13[8];
    char t15[8];
    char t16[8];
    char t48[16];
    char t51[8];
    char t52[8];
    char t60[8];
    char t61[8];
    char t62[8];
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
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    int t28;
    char *t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    int t35;
    int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t49;
    unsigned int t50;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    unsigned int t69;
    char *t70;
    unsigned int t71;
    char *t72;
    unsigned int t73;
    char *t74;
    unsigned int t75;
    int t76;
    int t77;
    char *t78;
    unsigned int t79;
    int t80;
    int t81;
    unsigned int t82;
    int t83;
    unsigned int t84;
    unsigned int t85;
    int t86;
    unsigned int t87;
    unsigned int t88;
    int t89;
    int t90;
    int t91;

LAB0:    t1 = (t0 + 4464U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 4800);
    *((int *)t2) = 1;
    t3 = (t0 + 4496);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(46, ng0);

LAB5:    xsi_set_current_line(47, ng0);
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

LAB7:    xsi_set_current_line(52, ng0);

LAB16:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB17;

LAB18:
LAB19:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(47, ng0);

LAB9:    xsi_set_current_line(48, ng0);
    xsi_set_current_line(48, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3048);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);

LAB10:    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_signed_less(t13, 32, t4, 32, t5, 32);
    t11 = (t13 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:    goto LAB8;

LAB11:    xsi_set_current_line(48, ng0);

LAB13:    xsi_set_current_line(49, ng0);
    t12 = ((char*)((ng1)));
    t14 = (t0 + 2888);
    t17 = (t0 + 2888);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 2888);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 3048);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_generic_convert_array_indices(t15, t16, t19, t22, 2, 1, t25, 32, 1);
    t26 = (t15 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (!(t27));
    t29 = (t16 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (!(t30));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 3048);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 32);
    goto LAB10;

LAB14:    t33 = *((unsigned int *)t15);
    t34 = *((unsigned int *)t16);
    t35 = (t33 - t34);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t14, t12, 0, *((unsigned int *)t16), t36);
    goto LAB15;

LAB17:    xsi_set_current_line(53, ng0);

LAB20:    xsi_set_current_line(54, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t27 = *((unsigned int *)t4);
    t30 = (~(t27));
    t33 = *((unsigned int *)t5);
    t34 = (t33 & t30);
    t37 = (t34 != 0);
    if (t37 > 0)
        goto LAB21;

LAB22:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB27;

LAB28:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB40;

LAB41:
LAB42:
LAB29:
LAB23:    goto LAB19;

LAB21:    xsi_set_current_line(54, ng0);

LAB24:    xsi_set_current_line(55, ng0);
    t11 = (t0 + 2008U);
    t12 = *((char **)t11);
    t11 = (t0 + 2888);
    t14 = (t0 + 2888);
    t17 = (t14 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 2888);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 2168U);
    t23 = *((char **)t22);
    memset(t16, 0, 8);
    t22 = (t16 + 4);
    t24 = (t23 + 4);
    t38 = *((unsigned int *)t23);
    t39 = (t38 >> 2);
    *((unsigned int *)t16) = t39;
    t40 = *((unsigned int *)t24);
    t41 = (t40 >> 2);
    *((unsigned int *)t22) = t41;
    t42 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t42 & 4095U);
    t43 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t43 & 4095U);
    xsi_vlog_generic_convert_array_indices(t13, t15, t18, t21, 2, 1, t16, 12, 2);
    t25 = (t13 + 4);
    t44 = *((unsigned int *)t25);
    t28 = (!(t44));
    t26 = (t15 + 4);
    t45 = *((unsigned int *)t26);
    t31 = (!(t45));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB25;

LAB26:    xsi_set_current_line(56, ng0);
    t2 = xsi_vlog_time(t48, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 2328U);
    t4 = *((char **)t3);
    t3 = (t0 + 2168U);
    t5 = *((char **)t3);
    t3 = (t0 + 2008U);
    t11 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng4, 5, t0, (char)118, t48, 64, (char)118, t4, 32, (char)118, t5, 32, (char)118, t11, 32);
    goto LAB23;

LAB25:    t46 = *((unsigned int *)t13);
    t47 = *((unsigned int *)t15);
    t35 = (t46 - t47);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t11, t12, 0, *((unsigned int *)t15), t36);
    goto LAB26;

LAB27:    xsi_set_current_line(58, ng0);

LAB30:    xsi_set_current_line(59, ng0);
    t4 = (t0 + 2168U);
    t5 = *((char **)t4);
    memset(t13, 0, 8);
    t4 = (t13 + 4);
    t11 = (t5 + 4);
    t27 = *((unsigned int *)t5);
    t30 = (t27 >> 1);
    t33 = (t30 & 1);
    *((unsigned int *)t13) = t33;
    t34 = *((unsigned int *)t11);
    t37 = (t34 >> 1);
    t38 = (t37 & 1);
    *((unsigned int *)t4) = t38;
    t12 = (t13 + 4);
    t39 = *((unsigned int *)t12);
    t40 = (~(t39));
    t41 = *((unsigned int *)t13);
    t42 = (t41 & t40);
    t43 = (t42 != 0);
    if (t43 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(62, ng0);

LAB37:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 65535U);
    t27 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t27 & 65535U);
    t5 = (t0 + 2888);
    t11 = (t0 + 2888);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t17 = (t0 + 2888);
    t18 = (t17 + 64U);
    t19 = *((char **)t18);
    t20 = (t0 + 2168U);
    t21 = *((char **)t20);
    memset(t51, 0, 8);
    t20 = (t51 + 4);
    t22 = (t21 + 4);
    t30 = *((unsigned int *)t21);
    t33 = (t30 >> 2);
    *((unsigned int *)t51) = t33;
    t34 = *((unsigned int *)t22);
    t37 = (t34 >> 2);
    *((unsigned int *)t20) = t37;
    t38 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t38 & 4095U);
    t39 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t39 & 4095U);
    xsi_vlog_generic_convert_array_indices(t15, t16, t14, t19, 2, 1, t51, 12, 2);
    t23 = (t0 + 2888);
    t24 = (t23 + 72U);
    t25 = *((char **)t24);
    t26 = ((char*)((ng7)));
    t29 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t52, t60, t61, ((int*)(t25)), 2, t26, 32, 1, t29, 32, 1);
    t53 = (t15 + 4);
    t40 = *((unsigned int *)t53);
    t28 = (!(t40));
    t63 = (t16 + 4);
    t41 = *((unsigned int *)t63);
    t31 = (!(t41));
    t32 = (t28 && t31);
    t64 = (t52 + 4);
    t42 = *((unsigned int *)t64);
    t35 = (!(t42));
    t36 = (t32 && t35);
    t65 = (t60 + 4);
    t43 = *((unsigned int *)t65);
    t76 = (!(t43));
    t77 = (t36 && t76);
    t66 = (t61 + 4);
    t44 = *((unsigned int *)t66);
    t80 = (!(t44));
    t81 = (t77 && t80);
    if (t81 == 1)
        goto LAB38;

LAB39:
LAB33:    xsi_set_current_line(65, ng0);
    t2 = xsi_vlog_time(t48, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 2328U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 2168U);
    t11 = *((char **)t5);
    memset(t15, 0, 8);
    t5 = (t15 + 4);
    t12 = (t11 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (t6 >> 2);
    *((unsigned int *)t15) = t7;
    t8 = *((unsigned int *)t12);
    t9 = (t8 >> 2);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t10 & 1073741823U);
    t27 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t27 & 1073741823U);
    xsi_vlogtype_concat(t13, 32, 32, 2U, t15, 30, t3, 2);
    t14 = (t0 + 2888);
    t17 = (t14 + 56U);
    t18 = *((char **)t17);
    t19 = (t0 + 2888);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = (t0 + 2888);
    t23 = (t22 + 64U);
    t24 = *((char **)t23);
    t25 = (t0 + 2168U);
    t26 = *((char **)t25);
    memset(t51, 0, 8);
    t25 = (t51 + 4);
    t29 = (t26 + 4);
    t30 = *((unsigned int *)t26);
    t33 = (t30 >> 2);
    *((unsigned int *)t51) = t33;
    t34 = *((unsigned int *)t29);
    t37 = (t34 >> 2);
    *((unsigned int *)t25) = t37;
    t38 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t38 & 4095U);
    t39 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t39 & 4095U);
    xsi_vlog_generic_get_array_select_value(t16, 32, t18, t21, t24, 2, 1, t51, 12, 2);
    xsi_vlogfile_write(1, 0, 0, ng4, 5, t0, (char)118, t48, 64, (char)118, t4, 32, (char)118, t13, 32, (char)118, t16, 32);
    goto LAB29;

LAB31:    xsi_set_current_line(59, ng0);

LAB34:    xsi_set_current_line(60, ng0);
    t14 = (t0 + 2008U);
    t17 = *((char **)t14);
    memset(t15, 0, 8);
    t14 = (t15 + 4);
    t18 = (t17 + 4);
    t44 = *((unsigned int *)t17);
    t45 = (t44 >> 0);
    *((unsigned int *)t15) = t45;
    t46 = *((unsigned int *)t18);
    t47 = (t46 >> 0);
    *((unsigned int *)t14) = t47;
    t49 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t49 & 65535U);
    t50 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t50 & 65535U);
    t19 = (t0 + 2888);
    t20 = (t0 + 2888);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t23 = (t0 + 2888);
    t24 = (t23 + 64U);
    t25 = *((char **)t24);
    t26 = (t0 + 2168U);
    t29 = *((char **)t26);
    memset(t52, 0, 8);
    t26 = (t52 + 4);
    t53 = (t29 + 4);
    t54 = *((unsigned int *)t29);
    t55 = (t54 >> 2);
    *((unsigned int *)t52) = t55;
    t56 = *((unsigned int *)t53);
    t57 = (t56 >> 2);
    *((unsigned int *)t26) = t57;
    t58 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t58 & 4095U);
    t59 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t59 & 4095U);
    xsi_vlog_generic_convert_array_indices(t16, t51, t22, t25, 2, 1, t52, 12, 2);
    t63 = (t0 + 2888);
    t64 = (t63 + 72U);
    t65 = *((char **)t64);
    t66 = ((char*)((ng5)));
    t67 = ((char*)((ng6)));
    xsi_vlog_convert_partindices(t60, t61, t62, ((int*)(t65)), 2, t66, 32, 1, t67, 32, 1);
    t68 = (t16 + 4);
    t69 = *((unsigned int *)t68);
    t28 = (!(t69));
    t70 = (t51 + 4);
    t71 = *((unsigned int *)t70);
    t31 = (!(t71));
    t32 = (t28 && t31);
    t72 = (t60 + 4);
    t73 = *((unsigned int *)t72);
    t35 = (!(t73));
    t36 = (t32 && t35);
    t74 = (t61 + 4);
    t75 = *((unsigned int *)t74);
    t76 = (!(t75));
    t77 = (t36 && t76);
    t78 = (t62 + 4);
    t79 = *((unsigned int *)t78);
    t80 = (!(t79));
    t81 = (t77 && t80);
    if (t81 == 1)
        goto LAB35;

LAB36:    goto LAB33;

LAB35:    t82 = *((unsigned int *)t62);
    t83 = (t82 + 0);
    t84 = *((unsigned int *)t51);
    t85 = *((unsigned int *)t61);
    t86 = (t84 + t85);
    t87 = *((unsigned int *)t60);
    t88 = *((unsigned int *)t61);
    t89 = (t87 - t88);
    t90 = (t89 + 1);
    xsi_vlogvar_assign_value(t19, t15, t83, t86, t90);
    goto LAB36;

LAB38:    t45 = *((unsigned int *)t61);
    t83 = (t45 + 0);
    t46 = *((unsigned int *)t16);
    t47 = *((unsigned int *)t60);
    t86 = (t46 + t47);
    t49 = *((unsigned int *)t52);
    t50 = *((unsigned int *)t60);
    t89 = (t49 - t50);
    t90 = (t89 + 1);
    xsi_vlogvar_assign_value(t5, t13, t83, t86, t90);
    goto LAB39;

LAB40:    xsi_set_current_line(67, ng0);

LAB43:    xsi_set_current_line(68, ng0);
    t4 = (t0 + 2168U);
    t5 = *((char **)t4);
    memset(t13, 0, 8);
    t4 = (t13 + 4);
    t11 = (t5 + 4);
    t27 = *((unsigned int *)t5);
    t30 = (t27 >> 0);
    *((unsigned int *)t13) = t30;
    t33 = *((unsigned int *)t11);
    t34 = (t33 >> 0);
    *((unsigned int *)t4) = t34;
    t37 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t37 & 3U);
    t38 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t38 & 3U);

LAB44:    t12 = ((char*)((ng8)));
    t28 = xsi_vlog_unsigned_case_compare(t13, 2, t12, 2);
    if (t28 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng10)));
    t28 = xsi_vlog_unsigned_case_compare(t13, 2, t2, 2);
    if (t28 == 1)
        goto LAB47;

LAB48:    t2 = ((char*)((ng12)));
    t28 = xsi_vlog_unsigned_case_compare(t13, 2, t2, 2);
    if (t28 == 1)
        goto LAB49;

LAB50:    t2 = ((char*)((ng14)));
    t28 = xsi_vlog_unsigned_case_compare(t13, 2, t2, 2);
    if (t28 == 1)
        goto LAB51;

LAB52:
LAB54:
LAB53:    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    t4 = (t0 + 2888);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 2888);
    t14 = (t12 + 64U);
    t17 = *((char **)t14);
    t18 = (t0 + 2168U);
    t19 = *((char **)t18);
    memset(t51, 0, 8);
    t18 = (t51 + 4);
    t20 = (t19 + 4);
    t6 = *((unsigned int *)t19);
    t7 = (t6 >> 2);
    *((unsigned int *)t51) = t7;
    t8 = *((unsigned int *)t20);
    t9 = (t8 >> 2);
    *((unsigned int *)t18) = t9;
    t10 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t10 & 4095U);
    t27 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t27 & 4095U);
    xsi_vlog_generic_convert_array_indices(t15, t16, t11, t17, 2, 1, t51, 12, 2);
    t21 = (t15 + 4);
    t30 = *((unsigned int *)t21);
    t28 = (!(t30));
    t22 = (t16 + 4);
    t33 = *((unsigned int *)t22);
    t31 = (!(t33));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB68;

LAB69:
LAB55:    xsi_set_current_line(88, ng0);
    t2 = xsi_vlog_time(t48, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 2328U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 2168U);
    t11 = *((char **)t5);
    memset(t16, 0, 8);
    t5 = (t16 + 4);
    t12 = (t11 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (t6 >> 2);
    *((unsigned int *)t16) = t7;
    t8 = *((unsigned int *)t12);
    t9 = (t8 >> 2);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t10 & 1073741823U);
    t27 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t27 & 1073741823U);
    xsi_vlogtype_concat(t15, 32, 32, 2U, t16, 30, t3, 2);
    t14 = (t0 + 2888);
    t17 = (t14 + 56U);
    t18 = *((char **)t17);
    t19 = (t0 + 2888);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = (t0 + 2888);
    t23 = (t22 + 64U);
    t24 = *((char **)t23);
    t25 = (t0 + 2168U);
    t26 = *((char **)t25);
    memset(t52, 0, 8);
    t25 = (t52 + 4);
    t29 = (t26 + 4);
    t30 = *((unsigned int *)t26);
    t33 = (t30 >> 2);
    *((unsigned int *)t52) = t33;
    t34 = *((unsigned int *)t29);
    t37 = (t34 >> 2);
    *((unsigned int *)t25) = t37;
    t38 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t38 & 4095U);
    t39 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t39 & 4095U);
    xsi_vlog_generic_get_array_select_value(t51, 32, t18, t21, t24, 2, 1, t52, 12, 2);
    xsi_vlogfile_write(1, 0, 0, ng4, 5, t0, (char)118, t48, 64, (char)118, t4, 32, (char)118, t15, 32, (char)118, t51, 32);
    goto LAB42;

LAB45:    xsi_set_current_line(70, ng0);

LAB56:    xsi_set_current_line(71, ng0);
    t14 = (t0 + 2008U);
    t17 = *((char **)t14);
    memset(t15, 0, 8);
    t14 = (t15 + 4);
    t18 = (t17 + 4);
    t39 = *((unsigned int *)t17);
    t40 = (t39 >> 0);
    *((unsigned int *)t15) = t40;
    t41 = *((unsigned int *)t18);
    t42 = (t41 >> 0);
    *((unsigned int *)t14) = t42;
    t43 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t43 & 255U);
    t44 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t44 & 255U);
    t19 = (t0 + 2888);
    t20 = (t0 + 2888);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t23 = (t0 + 2888);
    t24 = (t23 + 64U);
    t25 = *((char **)t24);
    t26 = (t0 + 2168U);
    t29 = *((char **)t26);
    memset(t52, 0, 8);
    t26 = (t52 + 4);
    t53 = (t29 + 4);
    t45 = *((unsigned int *)t29);
    t46 = (t45 >> 2);
    *((unsigned int *)t52) = t46;
    t47 = *((unsigned int *)t53);
    t49 = (t47 >> 2);
    *((unsigned int *)t26) = t49;
    t50 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t50 & 4095U);
    t54 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t54 & 4095U);
    xsi_vlog_generic_convert_array_indices(t16, t51, t22, t25, 2, 1, t52, 12, 2);
    t63 = (t0 + 2888);
    t64 = (t63 + 72U);
    t65 = *((char **)t64);
    t66 = ((char*)((ng9)));
    t67 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t60, t61, t62, ((int*)(t65)), 2, t66, 32, 1, t67, 32, 1);
    t68 = (t16 + 4);
    t55 = *((unsigned int *)t68);
    t31 = (!(t55));
    t70 = (t51 + 4);
    t56 = *((unsigned int *)t70);
    t32 = (!(t56));
    t35 = (t31 && t32);
    t72 = (t60 + 4);
    t57 = *((unsigned int *)t72);
    t36 = (!(t57));
    t76 = (t35 && t36);
    t74 = (t61 + 4);
    t58 = *((unsigned int *)t74);
    t77 = (!(t58));
    t80 = (t76 && t77);
    t78 = (t62 + 4);
    t59 = *((unsigned int *)t78);
    t81 = (!(t59));
    t83 = (t80 && t81);
    if (t83 == 1)
        goto LAB57;

LAB58:    goto LAB55;

LAB47:    xsi_set_current_line(74, ng0);

LAB59:    xsi_set_current_line(75, ng0);
    t3 = (t0 + 2008U);
    t4 = *((char **)t3);
    memset(t15, 0, 8);
    t3 = (t15 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t15) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t10 & 255U);
    t27 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t27 & 255U);
    t11 = (t0 + 2888);
    t12 = (t0 + 2888);
    t14 = (t12 + 72U);
    t17 = *((char **)t14);
    t18 = (t0 + 2888);
    t19 = (t18 + 64U);
    t20 = *((char **)t19);
    t21 = (t0 + 2168U);
    t22 = *((char **)t21);
    memset(t52, 0, 8);
    t21 = (t52 + 4);
    t23 = (t22 + 4);
    t30 = *((unsigned int *)t22);
    t33 = (t30 >> 2);
    *((unsigned int *)t52) = t33;
    t34 = *((unsigned int *)t23);
    t37 = (t34 >> 2);
    *((unsigned int *)t21) = t37;
    t38 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t38 & 4095U);
    t39 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t39 & 4095U);
    xsi_vlog_generic_convert_array_indices(t16, t51, t17, t20, 2, 1, t52, 12, 2);
    t24 = (t0 + 2888);
    t25 = (t24 + 72U);
    t26 = *((char **)t25);
    t29 = ((char*)((ng7)));
    t53 = ((char*)((ng11)));
    xsi_vlog_convert_partindices(t60, t61, t62, ((int*)(t26)), 2, t29, 32, 1, t53, 32, 1);
    t63 = (t16 + 4);
    t40 = *((unsigned int *)t63);
    t31 = (!(t40));
    t64 = (t51 + 4);
    t41 = *((unsigned int *)t64);
    t32 = (!(t41));
    t35 = (t31 && t32);
    t65 = (t60 + 4);
    t42 = *((unsigned int *)t65);
    t36 = (!(t42));
    t76 = (t35 && t36);
    t66 = (t61 + 4);
    t43 = *((unsigned int *)t66);
    t77 = (!(t43));
    t80 = (t76 && t77);
    t67 = (t62 + 4);
    t44 = *((unsigned int *)t67);
    t81 = (!(t44));
    t83 = (t80 && t81);
    if (t83 == 1)
        goto LAB60;

LAB61:    goto LAB55;

LAB49:    xsi_set_current_line(78, ng0);

LAB62:    xsi_set_current_line(79, ng0);
    t3 = (t0 + 2008U);
    t4 = *((char **)t3);
    memset(t15, 0, 8);
    t3 = (t15 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t15) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t10 & 255U);
    t27 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t27 & 255U);
    t11 = (t0 + 2888);
    t12 = (t0 + 2888);
    t14 = (t12 + 72U);
    t17 = *((char **)t14);
    t18 = (t0 + 2888);
    t19 = (t18 + 64U);
    t20 = *((char **)t19);
    t21 = (t0 + 2168U);
    t22 = *((char **)t21);
    memset(t52, 0, 8);
    t21 = (t52 + 4);
    t23 = (t22 + 4);
    t30 = *((unsigned int *)t22);
    t33 = (t30 >> 2);
    *((unsigned int *)t52) = t33;
    t34 = *((unsigned int *)t23);
    t37 = (t34 >> 2);
    *((unsigned int *)t21) = t37;
    t38 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t38 & 4095U);
    t39 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t39 & 4095U);
    xsi_vlog_generic_convert_array_indices(t16, t51, t17, t20, 2, 1, t52, 12, 2);
    t24 = (t0 + 2888);
    t25 = (t24 + 72U);
    t26 = *((char **)t25);
    t29 = ((char*)((ng13)));
    t53 = ((char*)((ng6)));
    xsi_vlog_convert_partindices(t60, t61, t62, ((int*)(t26)), 2, t29, 32, 1, t53, 32, 1);
    t63 = (t16 + 4);
    t40 = *((unsigned int *)t63);
    t31 = (!(t40));
    t64 = (t51 + 4);
    t41 = *((unsigned int *)t64);
    t32 = (!(t41));
    t35 = (t31 && t32);
    t65 = (t60 + 4);
    t42 = *((unsigned int *)t65);
    t36 = (!(t42));
    t76 = (t35 && t36);
    t66 = (t61 + 4);
    t43 = *((unsigned int *)t66);
    t77 = (!(t43));
    t80 = (t76 && t77);
    t67 = (t62 + 4);
    t44 = *((unsigned int *)t67);
    t81 = (!(t44));
    t83 = (t80 && t81);
    if (t83 == 1)
        goto LAB63;

LAB64:    goto LAB55;

LAB51:    xsi_set_current_line(82, ng0);

LAB65:    xsi_set_current_line(83, ng0);
    t3 = (t0 + 2008U);
    t4 = *((char **)t3);
    memset(t15, 0, 8);
    t3 = (t15 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t15) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t10 & 255U);
    t27 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t27 & 255U);
    t11 = (t0 + 2888);
    t12 = (t0 + 2888);
    t14 = (t12 + 72U);
    t17 = *((char **)t14);
    t18 = (t0 + 2888);
    t19 = (t18 + 64U);
    t20 = *((char **)t19);
    t21 = (t0 + 2168U);
    t22 = *((char **)t21);
    memset(t52, 0, 8);
    t21 = (t52 + 4);
    t23 = (t22 + 4);
    t30 = *((unsigned int *)t22);
    t33 = (t30 >> 2);
    *((unsigned int *)t52) = t33;
    t34 = *((unsigned int *)t23);
    t37 = (t34 >> 2);
    *((unsigned int *)t21) = t37;
    t38 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t38 & 4095U);
    t39 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t39 & 4095U);
    xsi_vlog_generic_convert_array_indices(t16, t51, t17, t20, 2, 1, t52, 12, 2);
    t24 = (t0 + 2888);
    t25 = (t24 + 72U);
    t26 = *((char **)t25);
    t29 = ((char*)((ng5)));
    t53 = ((char*)((ng15)));
    xsi_vlog_convert_partindices(t60, t61, t62, ((int*)(t26)), 2, t29, 32, 1, t53, 32, 1);
    t63 = (t16 + 4);
    t40 = *((unsigned int *)t63);
    t31 = (!(t40));
    t64 = (t51 + 4);
    t41 = *((unsigned int *)t64);
    t32 = (!(t41));
    t35 = (t31 && t32);
    t65 = (t60 + 4);
    t42 = *((unsigned int *)t65);
    t36 = (!(t42));
    t76 = (t35 && t36);
    t66 = (t61 + 4);
    t43 = *((unsigned int *)t66);
    t77 = (!(t43));
    t80 = (t76 && t77);
    t67 = (t62 + 4);
    t44 = *((unsigned int *)t67);
    t81 = (!(t44));
    t83 = (t80 && t81);
    if (t83 == 1)
        goto LAB66;

LAB67:    goto LAB55;

LAB57:    t69 = *((unsigned int *)t62);
    t86 = (t69 + 0);
    t71 = *((unsigned int *)t51);
    t73 = *((unsigned int *)t61);
    t89 = (t71 + t73);
    t75 = *((unsigned int *)t60);
    t79 = *((unsigned int *)t61);
    t90 = (t75 - t79);
    t91 = (t90 + 1);
    xsi_vlogvar_assign_value(t19, t15, t86, t89, t91);
    goto LAB58;

LAB60:    t45 = *((unsigned int *)t62);
    t86 = (t45 + 0);
    t46 = *((unsigned int *)t51);
    t47 = *((unsigned int *)t61);
    t89 = (t46 + t47);
    t49 = *((unsigned int *)t60);
    t50 = *((unsigned int *)t61);
    t90 = (t49 - t50);
    t91 = (t90 + 1);
    xsi_vlogvar_assign_value(t11, t15, t86, t89, t91);
    goto LAB61;

LAB63:    t45 = *((unsigned int *)t62);
    t86 = (t45 + 0);
    t46 = *((unsigned int *)t51);
    t47 = *((unsigned int *)t61);
    t89 = (t46 + t47);
    t49 = *((unsigned int *)t60);
    t50 = *((unsigned int *)t61);
    t90 = (t49 - t50);
    t91 = (t90 + 1);
    xsi_vlogvar_assign_value(t11, t15, t86, t89, t91);
    goto LAB64;

LAB66:    t45 = *((unsigned int *)t62);
    t86 = (t45 + 0);
    t46 = *((unsigned int *)t51);
    t47 = *((unsigned int *)t61);
    t89 = (t46 + t47);
    t49 = *((unsigned int *)t60);
    t50 = *((unsigned int *)t61);
    t90 = (t49 - t50);
    t91 = (t90 + 1);
    xsi_vlogvar_assign_value(t11, t15, t86, t89, t91);
    goto LAB67;

LAB68:    t34 = *((unsigned int *)t15);
    t37 = *((unsigned int *)t16);
    t35 = (t34 - t37);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t16), t36);
    goto LAB69;

}


extern void work_m_00000000004131119373_2924402094_init()
{
	static char *pe[] = {(void *)Cont_38_0,(void *)Initial_40_1,(void *)Always_46_2};
	xsi_register_didat("work_m_00000000004131119373_2924402094", "isim/mips_tb_isim_beh.exe.sim/work/m_00000000004131119373_2924402094.didat");
	xsi_register_executes(pe);
}
