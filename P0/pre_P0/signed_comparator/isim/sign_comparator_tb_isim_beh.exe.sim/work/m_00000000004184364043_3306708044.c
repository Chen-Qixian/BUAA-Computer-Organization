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
static const char *ng0 = "C:/Users/cqx/Desktop/Assignment/Computer_Organization/P0/signed_comparator/comparator.v";
static int ng1[] = {3, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {2, 0};
static unsigned int ng4[] = {1U, 0U};
static int ng5[] = {1, 0};
static int ng6[] = {0, 0};
static unsigned int ng7[] = {2U, 0U};
static unsigned int ng8[] = {3U, 0U};



static void Cont_28_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;

LAB0:    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 4392);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 0);
    t16 = (t0 + 4328);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memset(t20, 0, 8);
    t21 = 2U;
    t22 = t21;
    t23 = (t3 + 4);
    t24 = *((unsigned int *)t3);
    t21 = (t21 & t24);
    t25 = *((unsigned int *)t23);
    t22 = (t22 & t25);
    t21 = (t21 >> 1);
    t22 = (t22 >> 1);
    t26 = (t20 + 4);
    t27 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t27 | t21);
    t28 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t28 | t22);
    xsi_driver_vfirst_trans(t16, 1, 1);
    t29 = (t0 + 4264);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memset(t33, 0, 8);
    t34 = 4U;
    t35 = t34;
    t36 = (t3 + 4);
    t37 = *((unsigned int *)t3);
    t34 = (t34 & t37);
    t38 = *((unsigned int *)t36);
    t35 = (t35 & t38);
    t34 = (t34 >> 2);
    t35 = (t35 >> 2);
    t39 = (t33 + 4);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t40 | t34);
    t41 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t41 | t35);
    xsi_driver_vfirst_trans(t29, 2, 2);
    t42 = (t0 + 4200);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    memset(t46, 0, 8);
    t47 = 8U;
    t48 = t47;
    t49 = (t3 + 4);
    t50 = *((unsigned int *)t3);
    t47 = (t47 & t50);
    t51 = *((unsigned int *)t49);
    t48 = (t48 & t51);
    t47 = (t47 >> 3);
    t48 = (t48 >> 3);
    t52 = (t46 + 4);
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t53 | t47);
    t54 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t54 | t48);
    xsi_driver_vfirst_trans(t42, 3, 3);
    t55 = (t0 + 4072);
    *((int *)t55) = 1;

LAB1:    return;
}

static void Cont_29_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;

LAB0:    t1 = (t0 + 3256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 4648);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 0);
    t16 = (t0 + 4584);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memset(t20, 0, 8);
    t21 = 2U;
    t22 = t21;
    t23 = (t3 + 4);
    t24 = *((unsigned int *)t3);
    t21 = (t21 & t24);
    t25 = *((unsigned int *)t23);
    t22 = (t22 & t25);
    t21 = (t21 >> 1);
    t22 = (t22 >> 1);
    t26 = (t20 + 4);
    t27 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t27 | t21);
    t28 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t28 | t22);
    xsi_driver_vfirst_trans(t16, 1, 1);
    t29 = (t0 + 4520);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memset(t33, 0, 8);
    t34 = 4U;
    t35 = t34;
    t36 = (t3 + 4);
    t37 = *((unsigned int *)t3);
    t34 = (t34 & t37);
    t38 = *((unsigned int *)t36);
    t35 = (t35 & t38);
    t34 = (t34 >> 2);
    t35 = (t35 >> 2);
    t39 = (t33 + 4);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t40 | t34);
    t41 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t41 | t35);
    xsi_driver_vfirst_trans(t29, 2, 2);
    t42 = (t0 + 4456);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    memset(t46, 0, 8);
    t47 = 8U;
    t48 = t47;
    t49 = (t3 + 4);
    t50 = *((unsigned int *)t3);
    t47 = (t47 & t50);
    t51 = *((unsigned int *)t49);
    t48 = (t48 & t51);
    t47 = (t47 >> 3);
    t48 = (t48 >> 3);
    t52 = (t46 + 4);
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t53 | t47);
    t54 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t54 | t48);
    xsi_driver_vfirst_trans(t42, 3, 3);
    t55 = (t0 + 4088);
    *((int *)t55) = 1;

LAB1:    return;
}

static void Cont_30_2(char *t0)
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

LAB0:    t1 = (t0 + 3504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4712);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
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
    t18 = (t0 + 4104);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_32_3(char *t0)
{
    char t4[8];
    char t7[8];
    char t16[8];
    char t27[8];
    char t34[8];
    char t46[8];
    char t49[8];
    char t63[8];
    char t71[8];
    char t111[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    int t24;
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t47;
    char *t48;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    int t95;
    int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    char *t109;
    char *t110;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    char *t129;

LAB0:    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 4120);
    *((int *)t2) = 1;
    t3 = (t0 + 3784);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(32, ng0);

LAB5:    xsi_set_current_line(33, ng0);
    t5 = (t0 + 1688U);
    t6 = *((char **)t5);
    t5 = (t0 + 1648U);
    t8 = (t5 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 1648U);
    t11 = (t10 + 48U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t7, 1, t6, t9, t12, 2, 1, t13, 32, 1);
    t14 = (t0 + 1528U);
    t15 = *((char **)t14);
    t14 = (t0 + 1488U);
    t17 = (t14 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 1488U);
    t20 = (t19 + 48U);
    t21 = *((char **)t20);
    t22 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t16, 1, t15, t18, t21, 2, 1, t22, 32, 1);
    xsi_vlogtype_concat(t4, 2, 2, 2U, t16, 1, t7, 1);

LAB6:    t23 = ((char*)((ng2)));
    t24 = xsi_vlog_unsigned_case_compare(t4, 2, t23, 2);
    if (t24 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t24 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t24 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng7)));
    t24 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t24 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng8)));
    t24 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t24 == 1)
        goto LAB13;

LAB14:
LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(35, ng0);
    t25 = (t0 + 1528U);
    t26 = *((char **)t25);
    t25 = (t0 + 1488U);
    t28 = (t25 + 72U);
    t29 = *((char **)t28);
    t30 = (t0 + 1488U);
    t31 = (t30 + 48U);
    t32 = *((char **)t31);
    t33 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t27, 1, t26, t29, t32, 2, 1, t33, 32, 1);
    memset(t34, 0, 8);
    t35 = (t27 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (~(t36));
    t38 = *((unsigned int *)t27);
    t39 = (t38 & t37);
    t40 = (t39 & 1U);
    if (t40 != 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t35) != 0)
        goto LAB18;

LAB19:    t42 = (t34 + 4);
    t43 = *((unsigned int *)t34);
    t44 = *((unsigned int *)t42);
    t45 = (t43 || t44);
    if (t45 > 0)
        goto LAB20;

LAB21:    memcpy(t71, t34, 8);

LAB22:    t103 = (t71 + 4);
    t104 = *((unsigned int *)t103);
    t105 = (~(t104));
    t106 = *((unsigned int *)t71);
    t107 = (t106 & t105);
    t108 = (t107 != 0);
    if (t108 > 0)
        goto LAB34;

LAB35:    xsi_set_current_line(38, ng0);

LAB38:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 1488U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t8 = (t0 + 1488U);
    t9 = (t8 + 48U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t7, 1, t3, t6, t10, 2, 1, t11, 32, 1);
    t12 = (t0 + 1688U);
    t13 = *((char **)t12);
    t12 = (t0 + 1648U);
    t14 = (t12 + 72U);
    t15 = *((char **)t14);
    t17 = (t0 + 1648U);
    t18 = (t17 + 48U);
    t19 = *((char **)t18);
    t20 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t16, 1, t13, t15, t19, 2, 1, t20, 32, 1);
    memset(t27, 0, 8);
    t21 = (t7 + 4);
    t22 = (t16 + 4);
    t36 = *((unsigned int *)t7);
    t37 = *((unsigned int *)t16);
    t38 = (t36 ^ t37);
    t39 = *((unsigned int *)t21);
    t40 = *((unsigned int *)t22);
    t43 = (t39 ^ t40);
    t44 = (t38 | t43);
    t45 = *((unsigned int *)t21);
    t57 = *((unsigned int *)t22);
    t58 = (t45 | t57);
    t59 = (~(t58));
    t60 = (t44 & t59);
    if (t60 != 0)
        goto LAB42;

LAB39:    if (t58 != 0)
        goto LAB41;

LAB40:    *((unsigned int *)t27) = 1;

LAB42:    t25 = (t27 + 4);
    t61 = *((unsigned int *)t25);
    t65 = (~(t61));
    t66 = *((unsigned int *)t27);
    t67 = (t66 & t65);
    t68 = (t67 != 0);
    if (t68 > 0)
        goto LAB43;

LAB44:    xsi_set_current_line(57, ng0);

LAB102:    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB45:
LAB36:    goto LAB15;

LAB9:    xsi_set_current_line(62, ng0);
    t3 = ((char*)((ng4)));
    t5 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    goto LAB15;

LAB11:    xsi_set_current_line(64, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    goto LAB15;

LAB13:    xsi_set_current_line(67, ng0);
    t3 = (t0 + 1528U);
    t5 = *((char **)t3);
    t3 = (t0 + 1488U);
    t6 = (t3 + 72U);
    t8 = *((char **)t6);
    t9 = (t0 + 1488U);
    t10 = (t9 + 48U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t16, 1, t5, t8, t11, 2, 1, t12, 32, 1);
    memset(t7, 0, 8);
    t13 = (t16 + 4);
    t36 = *((unsigned int *)t13);
    t37 = (~(t36));
    t38 = *((unsigned int *)t16);
    t39 = (t38 & t37);
    t40 = (t39 & 1U);
    if (t40 != 0)
        goto LAB106;

LAB104:    if (*((unsigned int *)t13) == 0)
        goto LAB103;

LAB105:    t14 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t14) = 1;

LAB106:    memset(t27, 0, 8);
    t15 = (t7 + 4);
    t43 = *((unsigned int *)t15);
    t44 = (~(t43));
    t45 = *((unsigned int *)t7);
    t57 = (t45 & t44);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB107;

LAB108:    if (*((unsigned int *)t15) != 0)
        goto LAB109;

LAB110:    t18 = (t27 + 4);
    t59 = *((unsigned int *)t27);
    t60 = *((unsigned int *)t18);
    t61 = (t59 || t60);
    if (t61 > 0)
        goto LAB111;

LAB112:    memcpy(t49, t27, 8);

LAB113:    t42 = (t49 + 4);
    t104 = *((unsigned int *)t42);
    t105 = (~(t104));
    t106 = *((unsigned int *)t49);
    t107 = (t106 & t105);
    t108 = (t107 != 0);
    if (t108 > 0)
        goto LAB121;

LAB122:    xsi_set_current_line(70, ng0);

LAB125:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 1488U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t8 = (t0 + 1488U);
    t9 = (t8 + 48U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t7, 1, t3, t6, t10, 2, 1, t11, 32, 1);
    t12 = (t0 + 1688U);
    t13 = *((char **)t12);
    t12 = (t0 + 1648U);
    t14 = (t12 + 72U);
    t15 = *((char **)t14);
    t17 = (t0 + 1648U);
    t18 = (t17 + 48U);
    t19 = *((char **)t18);
    t20 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t16, 1, t13, t15, t19, 2, 1, t20, 32, 1);
    memset(t27, 0, 8);
    t21 = (t7 + 4);
    t22 = (t16 + 4);
    t36 = *((unsigned int *)t7);
    t37 = *((unsigned int *)t16);
    t38 = (t36 ^ t37);
    t39 = *((unsigned int *)t21);
    t40 = *((unsigned int *)t22);
    t43 = (t39 ^ t40);
    t44 = (t38 | t43);
    t45 = *((unsigned int *)t21);
    t57 = *((unsigned int *)t22);
    t58 = (t45 | t57);
    t59 = (~(t58));
    t60 = (t44 & t59);
    if (t60 != 0)
        goto LAB129;

LAB126:    if (t58 != 0)
        goto LAB128;

LAB127:    *((unsigned int *)t27) = 1;

LAB129:    t25 = (t27 + 4);
    t61 = *((unsigned int *)t25);
    t65 = (~(t61));
    t66 = *((unsigned int *)t27);
    t67 = (t66 & t65);
    t68 = (t67 != 0);
    if (t68 > 0)
        goto LAB130;

LAB131:    xsi_set_current_line(89, ng0);

LAB189:    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB132:
LAB123:    goto LAB15;

LAB16:    *((unsigned int *)t34) = 1;
    goto LAB19;

LAB18:    t41 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB19;

LAB20:    t47 = (t0 + 1688U);
    t48 = *((char **)t47);
    t47 = (t0 + 1648U);
    t50 = (t47 + 72U);
    t51 = *((char **)t50);
    t52 = (t0 + 1648U);
    t53 = (t52 + 48U);
    t54 = *((char **)t53);
    t55 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t49, 1, t48, t51, t54, 2, 1, t55, 32, 1);
    memset(t46, 0, 8);
    t56 = (t49 + 4);
    t57 = *((unsigned int *)t56);
    t58 = (~(t57));
    t59 = *((unsigned int *)t49);
    t60 = (t59 & t58);
    t61 = (t60 & 1U);
    if (t61 != 0)
        goto LAB26;

LAB24:    if (*((unsigned int *)t56) == 0)
        goto LAB23;

LAB25:    t62 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t62) = 1;

LAB26:    memset(t63, 0, 8);
    t64 = (t46 + 4);
    t65 = *((unsigned int *)t64);
    t66 = (~(t65));
    t67 = *((unsigned int *)t46);
    t68 = (t67 & t66);
    t69 = (t68 & 1U);
    if (t69 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t64) != 0)
        goto LAB29;

LAB30:    t72 = *((unsigned int *)t34);
    t73 = *((unsigned int *)t63);
    t74 = (t72 & t73);
    *((unsigned int *)t71) = t74;
    t75 = (t34 + 4);
    t76 = (t63 + 4);
    t77 = (t71 + 4);
    t78 = *((unsigned int *)t75);
    t79 = *((unsigned int *)t76);
    t80 = (t78 | t79);
    *((unsigned int *)t77) = t80;
    t81 = *((unsigned int *)t77);
    t82 = (t81 != 0);
    if (t82 == 1)
        goto LAB31;

LAB32:
LAB33:    goto LAB22;

LAB23:    *((unsigned int *)t46) = 1;
    goto LAB26;

LAB27:    *((unsigned int *)t63) = 1;
    goto LAB30;

LAB29:    t70 = (t63 + 4);
    *((unsigned int *)t63) = 1;
    *((unsigned int *)t70) = 1;
    goto LAB30;

LAB31:    t83 = *((unsigned int *)t71);
    t84 = *((unsigned int *)t77);
    *((unsigned int *)t71) = (t83 | t84);
    t85 = (t34 + 4);
    t86 = (t63 + 4);
    t87 = *((unsigned int *)t34);
    t88 = (~(t87));
    t89 = *((unsigned int *)t85);
    t90 = (~(t89));
    t91 = *((unsigned int *)t63);
    t92 = (~(t91));
    t93 = *((unsigned int *)t86);
    t94 = (~(t93));
    t95 = (t88 & t90);
    t96 = (t92 & t94);
    t97 = (~(t95));
    t98 = (~(t96));
    t99 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t99 & t97);
    t100 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t100 & t98);
    t101 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t101 & t97);
    t102 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t102 & t98);
    goto LAB33;

LAB34:    xsi_set_current_line(35, ng0);

LAB37:    xsi_set_current_line(36, ng0);
    t109 = ((char*)((ng4)));
    t110 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t110, t109, 0, 0, 1, 0LL);
    goto LAB36;

LAB41:    t23 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB42;

LAB43:    xsi_set_current_line(39, ng0);

LAB46:    xsi_set_current_line(40, ng0);
    t26 = (t0 + 1528U);
    t28 = *((char **)t26);
    t26 = (t0 + 1488U);
    t29 = (t26 + 72U);
    t30 = *((char **)t29);
    t31 = (t0 + 1488U);
    t32 = (t31 + 48U);
    t33 = *((char **)t32);
    t35 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t34, 1, t28, t30, t33, 2, 1, t35, 32, 1);
    memset(t46, 0, 8);
    t41 = (t34 + 4);
    t69 = *((unsigned int *)t41);
    t72 = (~(t69));
    t73 = *((unsigned int *)t34);
    t74 = (t73 & t72);
    t78 = (t74 & 1U);
    if (t78 != 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t41) != 0)
        goto LAB49;

LAB50:    t47 = (t46 + 4);
    t79 = *((unsigned int *)t46);
    t80 = *((unsigned int *)t47);
    t81 = (t79 || t80);
    if (t81 > 0)
        goto LAB51;

LAB52:    memcpy(t111, t46, 8);

LAB53:    t109 = (t111 + 4);
    t124 = *((unsigned int *)t109);
    t125 = (~(t124));
    t126 = *((unsigned int *)t111);
    t127 = (t126 & t125);
    t128 = (t127 != 0);
    if (t128 > 0)
        goto LAB65;

LAB66:    xsi_set_current_line(43, ng0);

LAB69:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 1488U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t8 = (t0 + 1488U);
    t9 = (t8 + 48U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t7, 1, t3, t6, t10, 2, 1, t11, 32, 1);
    t12 = (t0 + 1688U);
    t13 = *((char **)t12);
    t12 = (t0 + 1648U);
    t14 = (t12 + 72U);
    t15 = *((char **)t14);
    t17 = (t0 + 1648U);
    t18 = (t17 + 48U);
    t19 = *((char **)t18);
    t20 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t16, 1, t13, t15, t19, 2, 1, t20, 32, 1);
    memset(t27, 0, 8);
    t21 = (t7 + 4);
    t22 = (t16 + 4);
    t36 = *((unsigned int *)t7);
    t37 = *((unsigned int *)t16);
    t38 = (t36 ^ t37);
    t39 = *((unsigned int *)t21);
    t40 = *((unsigned int *)t22);
    t43 = (t39 ^ t40);
    t44 = (t38 | t43);
    t45 = *((unsigned int *)t21);
    t57 = *((unsigned int *)t22);
    t58 = (t45 | t57);
    t59 = (~(t58));
    t60 = (t44 & t59);
    if (t60 != 0)
        goto LAB73;

LAB70:    if (t58 != 0)
        goto LAB72;

LAB71:    *((unsigned int *)t27) = 1;

LAB73:    t25 = (t27 + 4);
    t61 = *((unsigned int *)t25);
    t65 = (~(t61));
    t66 = *((unsigned int *)t27);
    t67 = (t66 & t65);
    t68 = (t67 != 0);
    if (t68 > 0)
        goto LAB74;

LAB75:    xsi_set_current_line(52, ng0);

LAB101:    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB76:
LAB67:    goto LAB45;

LAB47:    *((unsigned int *)t46) = 1;
    goto LAB50;

LAB49:    t42 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB50;

LAB51:    t48 = (t0 + 1688U);
    t50 = *((char **)t48);
    t48 = (t0 + 1648U);
    t51 = (t48 + 72U);
    t52 = *((char **)t51);
    t53 = (t0 + 1648U);
    t54 = (t53 + 48U);
    t55 = *((char **)t54);
    t56 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t63, 1, t50, t52, t55, 2, 1, t56, 32, 1);
    memset(t49, 0, 8);
    t62 = (t63 + 4);
    t82 = *((unsigned int *)t62);
    t83 = (~(t82));
    t84 = *((unsigned int *)t63);
    t87 = (t84 & t83);
    t88 = (t87 & 1U);
    if (t88 != 0)
        goto LAB57;

LAB55:    if (*((unsigned int *)t62) == 0)
        goto LAB54;

LAB56:    t64 = (t49 + 4);
    *((unsigned int *)t49) = 1;
    *((unsigned int *)t64) = 1;

LAB57:    memset(t71, 0, 8);
    t70 = (t49 + 4);
    t89 = *((unsigned int *)t70);
    t90 = (~(t89));
    t91 = *((unsigned int *)t49);
    t92 = (t91 & t90);
    t93 = (t92 & 1U);
    if (t93 != 0)
        goto LAB58;

LAB59:    if (*((unsigned int *)t70) != 0)
        goto LAB60;

LAB61:    t94 = *((unsigned int *)t46);
    t97 = *((unsigned int *)t71);
    t98 = (t94 & t97);
    *((unsigned int *)t111) = t98;
    t76 = (t46 + 4);
    t77 = (t71 + 4);
    t85 = (t111 + 4);
    t99 = *((unsigned int *)t76);
    t100 = *((unsigned int *)t77);
    t101 = (t99 | t100);
    *((unsigned int *)t85) = t101;
    t102 = *((unsigned int *)t85);
    t104 = (t102 != 0);
    if (t104 == 1)
        goto LAB62;

LAB63:
LAB64:    goto LAB53;

LAB54:    *((unsigned int *)t49) = 1;
    goto LAB57;

LAB58:    *((unsigned int *)t71) = 1;
    goto LAB61;

LAB60:    t75 = (t71 + 4);
    *((unsigned int *)t71) = 1;
    *((unsigned int *)t75) = 1;
    goto LAB61;

LAB62:    t105 = *((unsigned int *)t111);
    t106 = *((unsigned int *)t85);
    *((unsigned int *)t111) = (t105 | t106);
    t86 = (t46 + 4);
    t103 = (t71 + 4);
    t107 = *((unsigned int *)t46);
    t108 = (~(t107));
    t112 = *((unsigned int *)t86);
    t113 = (~(t112));
    t114 = *((unsigned int *)t71);
    t115 = (~(t114));
    t116 = *((unsigned int *)t103);
    t117 = (~(t116));
    t24 = (t108 & t113);
    t95 = (t115 & t117);
    t118 = (~(t24));
    t119 = (~(t95));
    t120 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t120 & t118);
    t121 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t121 & t119);
    t122 = *((unsigned int *)t111);
    *((unsigned int *)t111) = (t122 & t118);
    t123 = *((unsigned int *)t111);
    *((unsigned int *)t111) = (t123 & t119);
    goto LAB64;

LAB65:    xsi_set_current_line(40, ng0);

LAB68:    xsi_set_current_line(41, ng0);
    t110 = ((char*)((ng4)));
    t129 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t129, t110, 0, 0, 1, 0LL);
    goto LAB67;

LAB72:    t23 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB73;

LAB74:    xsi_set_current_line(44, ng0);

LAB77:    xsi_set_current_line(45, ng0);
    t26 = (t0 + 1528U);
    t28 = *((char **)t26);
    t26 = (t0 + 1488U);
    t29 = (t26 + 72U);
    t30 = *((char **)t29);
    t31 = (t0 + 1488U);
    t32 = (t31 + 48U);
    t33 = *((char **)t32);
    t35 = ((char*)((ng6)));
    xsi_vlog_generic_get_array_select_value(t34, 1, t28, t30, t33, 2, 1, t35, 32, 1);
    memset(t46, 0, 8);
    t41 = (t34 + 4);
    t69 = *((unsigned int *)t41);
    t72 = (~(t69));
    t73 = *((unsigned int *)t34);
    t74 = (t73 & t72);
    t78 = (t74 & 1U);
    if (t78 != 0)
        goto LAB78;

LAB79:    if (*((unsigned int *)t41) != 0)
        goto LAB80;

LAB81:    t47 = (t46 + 4);
    t79 = *((unsigned int *)t46);
    t80 = *((unsigned int *)t47);
    t81 = (t79 || t80);
    if (t81 > 0)
        goto LAB82;

LAB83:    memcpy(t111, t46, 8);

LAB84:    t109 = (t111 + 4);
    t124 = *((unsigned int *)t109);
    t125 = (~(t124));
    t126 = *((unsigned int *)t111);
    t127 = (t126 & t125);
    t128 = (t127 != 0);
    if (t128 > 0)
        goto LAB96;

LAB97:    xsi_set_current_line(48, ng0);

LAB100:    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB98:    goto LAB76;

LAB78:    *((unsigned int *)t46) = 1;
    goto LAB81;

LAB80:    t42 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB81;

LAB82:    t48 = (t0 + 1688U);
    t50 = *((char **)t48);
    t48 = (t0 + 1648U);
    t51 = (t48 + 72U);
    t52 = *((char **)t51);
    t53 = (t0 + 1648U);
    t54 = (t53 + 48U);
    t55 = *((char **)t54);
    t56 = ((char*)((ng6)));
    xsi_vlog_generic_get_array_select_value(t63, 1, t50, t52, t55, 2, 1, t56, 32, 1);
    memset(t49, 0, 8);
    t62 = (t63 + 4);
    t82 = *((unsigned int *)t62);
    t83 = (~(t82));
    t84 = *((unsigned int *)t63);
    t87 = (t84 & t83);
    t88 = (t87 & 1U);
    if (t88 != 0)
        goto LAB88;

LAB86:    if (*((unsigned int *)t62) == 0)
        goto LAB85;

LAB87:    t64 = (t49 + 4);
    *((unsigned int *)t49) = 1;
    *((unsigned int *)t64) = 1;

LAB88:    memset(t71, 0, 8);
    t70 = (t49 + 4);
    t89 = *((unsigned int *)t70);
    t90 = (~(t89));
    t91 = *((unsigned int *)t49);
    t92 = (t91 & t90);
    t93 = (t92 & 1U);
    if (t93 != 0)
        goto LAB89;

LAB90:    if (*((unsigned int *)t70) != 0)
        goto LAB91;

LAB92:    t94 = *((unsigned int *)t46);
    t97 = *((unsigned int *)t71);
    t98 = (t94 & t97);
    *((unsigned int *)t111) = t98;
    t76 = (t46 + 4);
    t77 = (t71 + 4);
    t85 = (t111 + 4);
    t99 = *((unsigned int *)t76);
    t100 = *((unsigned int *)t77);
    t101 = (t99 | t100);
    *((unsigned int *)t85) = t101;
    t102 = *((unsigned int *)t85);
    t104 = (t102 != 0);
    if (t104 == 1)
        goto LAB93;

LAB94:
LAB95:    goto LAB84;

LAB85:    *((unsigned int *)t49) = 1;
    goto LAB88;

LAB89:    *((unsigned int *)t71) = 1;
    goto LAB92;

LAB91:    t75 = (t71 + 4);
    *((unsigned int *)t71) = 1;
    *((unsigned int *)t75) = 1;
    goto LAB92;

LAB93:    t105 = *((unsigned int *)t111);
    t106 = *((unsigned int *)t85);
    *((unsigned int *)t111) = (t105 | t106);
    t86 = (t46 + 4);
    t103 = (t71 + 4);
    t107 = *((unsigned int *)t46);
    t108 = (~(t107));
    t112 = *((unsigned int *)t86);
    t113 = (~(t112));
    t114 = *((unsigned int *)t71);
    t115 = (~(t114));
    t116 = *((unsigned int *)t103);
    t117 = (~(t116));
    t24 = (t108 & t113);
    t95 = (t115 & t117);
    t118 = (~(t24));
    t119 = (~(t95));
    t120 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t120 & t118);
    t121 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t121 & t119);
    t122 = *((unsigned int *)t111);
    *((unsigned int *)t111) = (t122 & t118);
    t123 = *((unsigned int *)t111);
    *((unsigned int *)t111) = (t123 & t119);
    goto LAB95;

LAB96:    xsi_set_current_line(45, ng0);

LAB99:    xsi_set_current_line(46, ng0);
    t110 = ((char*)((ng4)));
    t129 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t129, t110, 0, 0, 1, 0LL);
    goto LAB98;

LAB103:    *((unsigned int *)t7) = 1;
    goto LAB106;

LAB107:    *((unsigned int *)t27) = 1;
    goto LAB110;

LAB109:    t17 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB110;

LAB111:    t19 = (t0 + 1688U);
    t20 = *((char **)t19);
    t19 = (t0 + 1648U);
    t21 = (t19 + 72U);
    t22 = *((char **)t21);
    t23 = (t0 + 1648U);
    t25 = (t23 + 48U);
    t26 = *((char **)t25);
    t28 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t34, 1, t20, t22, t26, 2, 1, t28, 32, 1);
    memset(t46, 0, 8);
    t29 = (t34 + 4);
    t65 = *((unsigned int *)t29);
    t66 = (~(t65));
    t67 = *((unsigned int *)t34);
    t68 = (t67 & t66);
    t69 = (t68 & 1U);
    if (t69 != 0)
        goto LAB114;

LAB115:    if (*((unsigned int *)t29) != 0)
        goto LAB116;

LAB117:    t72 = *((unsigned int *)t27);
    t73 = *((unsigned int *)t46);
    t74 = (t72 & t73);
    *((unsigned int *)t49) = t74;
    t31 = (t27 + 4);
    t32 = (t46 + 4);
    t33 = (t49 + 4);
    t78 = *((unsigned int *)t31);
    t79 = *((unsigned int *)t32);
    t80 = (t78 | t79);
    *((unsigned int *)t33) = t80;
    t81 = *((unsigned int *)t33);
    t82 = (t81 != 0);
    if (t82 == 1)
        goto LAB118;

LAB119:
LAB120:    goto LAB113;

LAB114:    *((unsigned int *)t46) = 1;
    goto LAB117;

LAB116:    t30 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB117;

LAB118:    t83 = *((unsigned int *)t49);
    t84 = *((unsigned int *)t33);
    *((unsigned int *)t49) = (t83 | t84);
    t35 = (t27 + 4);
    t41 = (t46 + 4);
    t87 = *((unsigned int *)t27);
    t88 = (~(t87));
    t89 = *((unsigned int *)t35);
    t90 = (~(t89));
    t91 = *((unsigned int *)t46);
    t92 = (~(t91));
    t93 = *((unsigned int *)t41);
    t94 = (~(t93));
    t95 = (t88 & t90);
    t96 = (t92 & t94);
    t97 = (~(t95));
    t98 = (~(t96));
    t99 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t99 & t97);
    t100 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t100 & t98);
    t101 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t101 & t97);
    t102 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t102 & t98);
    goto LAB120;

LAB121:    xsi_set_current_line(67, ng0);

LAB124:    xsi_set_current_line(68, ng0);
    t47 = ((char*)((ng4)));
    t48 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t48, t47, 0, 0, 1, 0LL);
    goto LAB123;

LAB128:    t23 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB129;

LAB130:    xsi_set_current_line(71, ng0);

LAB133:    xsi_set_current_line(72, ng0);
    t26 = (t0 + 1528U);
    t28 = *((char **)t26);
    t26 = (t0 + 1488U);
    t29 = (t26 + 72U);
    t30 = *((char **)t29);
    t31 = (t0 + 1488U);
    t32 = (t31 + 48U);
    t33 = *((char **)t32);
    t35 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t46, 1, t28, t30, t33, 2, 1, t35, 32, 1);
    memset(t34, 0, 8);
    t41 = (t46 + 4);
    t69 = *((unsigned int *)t41);
    t72 = (~(t69));
    t73 = *((unsigned int *)t46);
    t74 = (t73 & t72);
    t78 = (t74 & 1U);
    if (t78 != 0)
        goto LAB137;

LAB135:    if (*((unsigned int *)t41) == 0)
        goto LAB134;

LAB136:    t42 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t42) = 1;

LAB137:    memset(t49, 0, 8);
    t47 = (t34 + 4);
    t79 = *((unsigned int *)t47);
    t80 = (~(t79));
    t81 = *((unsigned int *)t34);
    t82 = (t81 & t80);
    t83 = (t82 & 1U);
    if (t83 != 0)
        goto LAB138;

LAB139:    if (*((unsigned int *)t47) != 0)
        goto LAB140;

LAB141:    t50 = (t49 + 4);
    t84 = *((unsigned int *)t49);
    t87 = *((unsigned int *)t50);
    t88 = (t84 || t87);
    if (t88 > 0)
        goto LAB142;

LAB143:    memcpy(t111, t49, 8);

LAB144:    t109 = (t111 + 4);
    t124 = *((unsigned int *)t109);
    t125 = (~(t124));
    t126 = *((unsigned int *)t111);
    t127 = (t126 & t125);
    t128 = (t127 != 0);
    if (t128 > 0)
        goto LAB152;

LAB153:    xsi_set_current_line(75, ng0);

LAB156:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 1488U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t8 = (t0 + 1488U);
    t9 = (t8 + 48U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t7, 1, t3, t6, t10, 2, 1, t11, 32, 1);
    t12 = (t0 + 1688U);
    t13 = *((char **)t12);
    t12 = (t0 + 1648U);
    t14 = (t12 + 72U);
    t15 = *((char **)t14);
    t17 = (t0 + 1648U);
    t18 = (t17 + 48U);
    t19 = *((char **)t18);
    t20 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t16, 1, t13, t15, t19, 2, 1, t20, 32, 1);
    memset(t27, 0, 8);
    t21 = (t7 + 4);
    t22 = (t16 + 4);
    t36 = *((unsigned int *)t7);
    t37 = *((unsigned int *)t16);
    t38 = (t36 ^ t37);
    t39 = *((unsigned int *)t21);
    t40 = *((unsigned int *)t22);
    t43 = (t39 ^ t40);
    t44 = (t38 | t43);
    t45 = *((unsigned int *)t21);
    t57 = *((unsigned int *)t22);
    t58 = (t45 | t57);
    t59 = (~(t58));
    t60 = (t44 & t59);
    if (t60 != 0)
        goto LAB160;

LAB157:    if (t58 != 0)
        goto LAB159;

LAB158:    *((unsigned int *)t27) = 1;

LAB160:    t25 = (t27 + 4);
    t61 = *((unsigned int *)t25);
    t65 = (~(t61));
    t66 = *((unsigned int *)t27);
    t67 = (t66 & t65);
    t68 = (t67 != 0);
    if (t68 > 0)
        goto LAB161;

LAB162:    xsi_set_current_line(84, ng0);

LAB188:    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB163:
LAB154:    goto LAB132;

LAB134:    *((unsigned int *)t34) = 1;
    goto LAB137;

LAB138:    *((unsigned int *)t49) = 1;
    goto LAB141;

LAB140:    t48 = (t49 + 4);
    *((unsigned int *)t49) = 1;
    *((unsigned int *)t48) = 1;
    goto LAB141;

LAB142:    t51 = (t0 + 1688U);
    t52 = *((char **)t51);
    t51 = (t0 + 1648U);
    t53 = (t51 + 72U);
    t54 = *((char **)t53);
    t55 = (t0 + 1648U);
    t56 = (t55 + 48U);
    t62 = *((char **)t56);
    t64 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t63, 1, t52, t54, t62, 2, 1, t64, 32, 1);
    memset(t71, 0, 8);
    t70 = (t63 + 4);
    t89 = *((unsigned int *)t70);
    t90 = (~(t89));
    t91 = *((unsigned int *)t63);
    t92 = (t91 & t90);
    t93 = (t92 & 1U);
    if (t93 != 0)
        goto LAB145;

LAB146:    if (*((unsigned int *)t70) != 0)
        goto LAB147;

LAB148:    t94 = *((unsigned int *)t49);
    t97 = *((unsigned int *)t71);
    t98 = (t94 & t97);
    *((unsigned int *)t111) = t98;
    t76 = (t49 + 4);
    t77 = (t71 + 4);
    t85 = (t111 + 4);
    t99 = *((unsigned int *)t76);
    t100 = *((unsigned int *)t77);
    t101 = (t99 | t100);
    *((unsigned int *)t85) = t101;
    t102 = *((unsigned int *)t85);
    t104 = (t102 != 0);
    if (t104 == 1)
        goto LAB149;

LAB150:
LAB151:    goto LAB144;

LAB145:    *((unsigned int *)t71) = 1;
    goto LAB148;

LAB147:    t75 = (t71 + 4);
    *((unsigned int *)t71) = 1;
    *((unsigned int *)t75) = 1;
    goto LAB148;

LAB149:    t105 = *((unsigned int *)t111);
    t106 = *((unsigned int *)t85);
    *((unsigned int *)t111) = (t105 | t106);
    t86 = (t49 + 4);
    t103 = (t71 + 4);
    t107 = *((unsigned int *)t49);
    t108 = (~(t107));
    t112 = *((unsigned int *)t86);
    t113 = (~(t112));
    t114 = *((unsigned int *)t71);
    t115 = (~(t114));
    t116 = *((unsigned int *)t103);
    t117 = (~(t116));
    t24 = (t108 & t113);
    t95 = (t115 & t117);
    t118 = (~(t24));
    t119 = (~(t95));
    t120 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t120 & t118);
    t121 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t121 & t119);
    t122 = *((unsigned int *)t111);
    *((unsigned int *)t111) = (t122 & t118);
    t123 = *((unsigned int *)t111);
    *((unsigned int *)t111) = (t123 & t119);
    goto LAB151;

LAB152:    xsi_set_current_line(72, ng0);

LAB155:    xsi_set_current_line(73, ng0);
    t110 = ((char*)((ng4)));
    t129 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t129, t110, 0, 0, 1, 0LL);
    goto LAB154;

LAB159:    t23 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB160;

LAB161:    xsi_set_current_line(76, ng0);

LAB164:    xsi_set_current_line(77, ng0);
    t26 = (t0 + 1528U);
    t28 = *((char **)t26);
    t26 = (t0 + 1488U);
    t29 = (t26 + 72U);
    t30 = *((char **)t29);
    t31 = (t0 + 1488U);
    t32 = (t31 + 48U);
    t33 = *((char **)t32);
    t35 = ((char*)((ng6)));
    xsi_vlog_generic_get_array_select_value(t46, 1, t28, t30, t33, 2, 1, t35, 32, 1);
    memset(t34, 0, 8);
    t41 = (t46 + 4);
    t69 = *((unsigned int *)t41);
    t72 = (~(t69));
    t73 = *((unsigned int *)t46);
    t74 = (t73 & t72);
    t78 = (t74 & 1U);
    if (t78 != 0)
        goto LAB168;

LAB166:    if (*((unsigned int *)t41) == 0)
        goto LAB165;

LAB167:    t42 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t42) = 1;

LAB168:    memset(t49, 0, 8);
    t47 = (t34 + 4);
    t79 = *((unsigned int *)t47);
    t80 = (~(t79));
    t81 = *((unsigned int *)t34);
    t82 = (t81 & t80);
    t83 = (t82 & 1U);
    if (t83 != 0)
        goto LAB169;

LAB170:    if (*((unsigned int *)t47) != 0)
        goto LAB171;

LAB172:    t50 = (t49 + 4);
    t84 = *((unsigned int *)t49);
    t87 = *((unsigned int *)t50);
    t88 = (t84 || t87);
    if (t88 > 0)
        goto LAB173;

LAB174:    memcpy(t111, t49, 8);

LAB175:    t109 = (t111 + 4);
    t124 = *((unsigned int *)t109);
    t125 = (~(t124));
    t126 = *((unsigned int *)t111);
    t127 = (t126 & t125);
    t128 = (t127 != 0);
    if (t128 > 0)
        goto LAB183;

LAB184:    xsi_set_current_line(80, ng0);

LAB187:    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB185:    goto LAB163;

LAB165:    *((unsigned int *)t34) = 1;
    goto LAB168;

LAB169:    *((unsigned int *)t49) = 1;
    goto LAB172;

LAB171:    t48 = (t49 + 4);
    *((unsigned int *)t49) = 1;
    *((unsigned int *)t48) = 1;
    goto LAB172;

LAB173:    t51 = (t0 + 1688U);
    t52 = *((char **)t51);
    t51 = (t0 + 1648U);
    t53 = (t51 + 72U);
    t54 = *((char **)t53);
    t55 = (t0 + 1648U);
    t56 = (t55 + 48U);
    t62 = *((char **)t56);
    t64 = ((char*)((ng6)));
    xsi_vlog_generic_get_array_select_value(t63, 1, t52, t54, t62, 2, 1, t64, 32, 1);
    memset(t71, 0, 8);
    t70 = (t63 + 4);
    t89 = *((unsigned int *)t70);
    t90 = (~(t89));
    t91 = *((unsigned int *)t63);
    t92 = (t91 & t90);
    t93 = (t92 & 1U);
    if (t93 != 0)
        goto LAB176;

LAB177:    if (*((unsigned int *)t70) != 0)
        goto LAB178;

LAB179:    t94 = *((unsigned int *)t49);
    t97 = *((unsigned int *)t71);
    t98 = (t94 & t97);
    *((unsigned int *)t111) = t98;
    t76 = (t49 + 4);
    t77 = (t71 + 4);
    t85 = (t111 + 4);
    t99 = *((unsigned int *)t76);
    t100 = *((unsigned int *)t77);
    t101 = (t99 | t100);
    *((unsigned int *)t85) = t101;
    t102 = *((unsigned int *)t85);
    t104 = (t102 != 0);
    if (t104 == 1)
        goto LAB180;

LAB181:
LAB182:    goto LAB175;

LAB176:    *((unsigned int *)t71) = 1;
    goto LAB179;

LAB178:    t75 = (t71 + 4);
    *((unsigned int *)t71) = 1;
    *((unsigned int *)t75) = 1;
    goto LAB179;

LAB180:    t105 = *((unsigned int *)t111);
    t106 = *((unsigned int *)t85);
    *((unsigned int *)t111) = (t105 | t106);
    t86 = (t49 + 4);
    t103 = (t71 + 4);
    t107 = *((unsigned int *)t49);
    t108 = (~(t107));
    t112 = *((unsigned int *)t86);
    t113 = (~(t112));
    t114 = *((unsigned int *)t71);
    t115 = (~(t114));
    t116 = *((unsigned int *)t103);
    t117 = (~(t116));
    t24 = (t108 & t113);
    t95 = (t115 & t117);
    t118 = (~(t24));
    t119 = (~(t95));
    t120 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t120 & t118);
    t121 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t121 & t119);
    t122 = *((unsigned int *)t111);
    *((unsigned int *)t111) = (t122 & t118);
    t123 = *((unsigned int *)t111);
    *((unsigned int *)t111) = (t123 & t119);
    goto LAB182;

LAB183:    xsi_set_current_line(77, ng0);

LAB186:    xsi_set_current_line(78, ng0);
    t110 = ((char*)((ng4)));
    t129 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t129, t110, 0, 0, 1, 0LL);
    goto LAB185;

}


extern void work_m_00000000004184364043_3306708044_init()
{
	static char *pe[] = {(void *)Cont_28_0,(void *)Cont_29_1,(void *)Cont_30_2,(void *)Always_32_3};
	xsi_register_didat("work_m_00000000004184364043_3306708044", "isim/sign_comparator_tb_isim_beh.exe.sim/work/m_00000000004184364043_3306708044.didat");
	xsi_register_executes(pe);
}
