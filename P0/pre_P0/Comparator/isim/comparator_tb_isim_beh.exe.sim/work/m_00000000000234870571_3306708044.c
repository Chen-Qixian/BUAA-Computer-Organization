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
static const char *ng0 = "C:/Users/cqx/Desktop/Assignment/Computer_Organization/P0/Comparator/comparator.v";
static int ng1[] = {3, 0};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {2, 0};
static int ng4[] = {1, 0};
static int ng5[] = {0, 0};
static unsigned int ng6[] = {0U, 0U};



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

static void Always_30_2(char *t0)
{
    char t6[8];
    char t13[8];
    char t25[8];
    char t28[8];
    char t42[8];
    char t50[8];
    char t90[8];
    char t99[8];
    char t102[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t26;
    char *t27;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    int t74;
    int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    char *t89;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    char *t96;
    char *t97;
    char *t98;
    char *t100;
    char *t101;
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    char *t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    char *t126;
    char *t127;

LAB0:    t1 = (t0 + 3504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 4104);
    *((int *)t2) = 1;
    t3 = (t0 + 3536);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);

LAB5:    xsi_set_current_line(31, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    t4 = (t0 + 1488U);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 1488U);
    t10 = (t9 + 48U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t6, 1, t5, t8, t11, 2, 1, t12, 32, 1);
    memset(t13, 0, 8);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t14) != 0)
        goto LAB8;

LAB9:    t21 = (t13 + 4);
    t22 = *((unsigned int *)t13);
    t23 = *((unsigned int *)t21);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB10;

LAB11:    memcpy(t50, t13, 8);

LAB12:    t82 = (t50 + 4);
    t83 = *((unsigned int *)t82);
    t84 = (~(t83));
    t85 = *((unsigned int *)t50);
    t86 = (t85 & t84);
    t87 = (t86 != 0);
    if (t87 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(34, ng0);

LAB28:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 1488U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t7 = (t0 + 1488U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t6, 1, t3, t5, t9, 2, 1, t10, 32, 1);
    t11 = (t0 + 1688U);
    t12 = *((char **)t11);
    t11 = (t0 + 1648U);
    t14 = (t11 + 72U);
    t20 = *((char **)t14);
    t21 = (t0 + 1648U);
    t26 = (t21 + 48U);
    t27 = *((char **)t26);
    t29 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t13, 1, t12, t20, t27, 2, 1, t29, 32, 1);
    memset(t25, 0, 8);
    t30 = (t6 + 4);
    t31 = (t13 + 4);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t13);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t30);
    t19 = *((unsigned int *)t31);
    t22 = (t18 ^ t19);
    t23 = (t17 | t22);
    t24 = *((unsigned int *)t30);
    t36 = *((unsigned int *)t31);
    t37 = (t24 | t36);
    t38 = (~(t37));
    t39 = (t23 & t38);
    if (t39 != 0)
        goto LAB32;

LAB29:    if (t37 != 0)
        goto LAB31;

LAB30:    *((unsigned int *)t25) = 1;

LAB32:    t33 = (t25 + 4);
    t40 = *((unsigned int *)t33);
    t44 = (~(t40));
    t45 = *((unsigned int *)t25);
    t46 = (t45 & t44);
    t47 = (t46 != 0);
    if (t47 > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(63, ng0);

LAB124:    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB35:
LAB26:    goto LAB2;

LAB6:    *((unsigned int *)t13) = 1;
    goto LAB9;

LAB8:    t20 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB9;

LAB10:    t26 = (t0 + 1688U);
    t27 = *((char **)t26);
    t26 = (t0 + 1648U);
    t29 = (t26 + 72U);
    t30 = *((char **)t29);
    t31 = (t0 + 1648U);
    t32 = (t31 + 48U);
    t33 = *((char **)t32);
    t34 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t28, 1, t27, t30, t33, 2, 1, t34, 32, 1);
    memset(t25, 0, 8);
    t35 = (t28 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (~(t36));
    t38 = *((unsigned int *)t28);
    t39 = (t38 & t37);
    t40 = (t39 & 1U);
    if (t40 != 0)
        goto LAB16;

LAB14:    if (*((unsigned int *)t35) == 0)
        goto LAB13;

LAB15:    t41 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t41) = 1;

LAB16:    memset(t42, 0, 8);
    t43 = (t25 + 4);
    t44 = *((unsigned int *)t43);
    t45 = (~(t44));
    t46 = *((unsigned int *)t25);
    t47 = (t46 & t45);
    t48 = (t47 & 1U);
    if (t48 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t43) != 0)
        goto LAB19;

LAB20:    t51 = *((unsigned int *)t13);
    t52 = *((unsigned int *)t42);
    t53 = (t51 & t52);
    *((unsigned int *)t50) = t53;
    t54 = (t13 + 4);
    t55 = (t42 + 4);
    t56 = (t50 + 4);
    t57 = *((unsigned int *)t54);
    t58 = *((unsigned int *)t55);
    t59 = (t57 | t58);
    *((unsigned int *)t56) = t59;
    t60 = *((unsigned int *)t56);
    t61 = (t60 != 0);
    if (t61 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB12;

LAB13:    *((unsigned int *)t25) = 1;
    goto LAB16;

LAB17:    *((unsigned int *)t42) = 1;
    goto LAB20;

LAB19:    t49 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB20;

LAB21:    t62 = *((unsigned int *)t50);
    t63 = *((unsigned int *)t56);
    *((unsigned int *)t50) = (t62 | t63);
    t64 = (t13 + 4);
    t65 = (t42 + 4);
    t66 = *((unsigned int *)t13);
    t67 = (~(t66));
    t68 = *((unsigned int *)t64);
    t69 = (~(t68));
    t70 = *((unsigned int *)t42);
    t71 = (~(t70));
    t72 = *((unsigned int *)t65);
    t73 = (~(t72));
    t74 = (t67 & t69);
    t75 = (t71 & t73);
    t76 = (~(t74));
    t77 = (~(t75));
    t78 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t78 & t76);
    t79 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t79 & t77);
    t80 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t80 & t76);
    t81 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t81 & t77);
    goto LAB23;

LAB24:    xsi_set_current_line(31, ng0);

LAB27:    xsi_set_current_line(32, ng0);
    t88 = ((char*)((ng2)));
    t89 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t89, t88, 0, 0, 1, 0LL);
    goto LAB26;

LAB31:    t32 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB32;

LAB33:    xsi_set_current_line(35, ng0);

LAB36:    xsi_set_current_line(36, ng0);
    t34 = (t0 + 1528U);
    t35 = *((char **)t34);
    t34 = (t0 + 1488U);
    t41 = (t34 + 72U);
    t43 = *((char **)t41);
    t49 = (t0 + 1488U);
    t54 = (t49 + 48U);
    t55 = *((char **)t54);
    t56 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t28, 1, t35, t43, t55, 2, 1, t56, 32, 1);
    memset(t42, 0, 8);
    t64 = (t28 + 4);
    t48 = *((unsigned int *)t64);
    t51 = (~(t48));
    t52 = *((unsigned int *)t28);
    t53 = (t52 & t51);
    t57 = (t53 & 1U);
    if (t57 != 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t64) != 0)
        goto LAB39;

LAB40:    t82 = (t42 + 4);
    t58 = *((unsigned int *)t42);
    t59 = *((unsigned int *)t82);
    t60 = (t58 || t59);
    if (t60 > 0)
        goto LAB41;

LAB42:    memcpy(t102, t42, 8);

LAB43:    t120 = (t102 + 4);
    t121 = *((unsigned int *)t120);
    t122 = (~(t121));
    t123 = *((unsigned int *)t102);
    t124 = (t123 & t122);
    t125 = (t124 != 0);
    if (t125 > 0)
        goto LAB55;

LAB56:    xsi_set_current_line(39, ng0);

LAB59:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 1488U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t7 = (t0 + 1488U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t6, 1, t3, t5, t9, 2, 1, t10, 32, 1);
    t11 = (t0 + 1688U);
    t12 = *((char **)t11);
    t11 = (t0 + 1648U);
    t14 = (t11 + 72U);
    t20 = *((char **)t14);
    t21 = (t0 + 1648U);
    t26 = (t21 + 48U);
    t27 = *((char **)t26);
    t29 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t13, 1, t12, t20, t27, 2, 1, t29, 32, 1);
    memset(t25, 0, 8);
    t30 = (t6 + 4);
    t31 = (t13 + 4);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t13);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t30);
    t19 = *((unsigned int *)t31);
    t22 = (t18 ^ t19);
    t23 = (t17 | t22);
    t24 = *((unsigned int *)t30);
    t36 = *((unsigned int *)t31);
    t37 = (t24 | t36);
    t38 = (~(t37));
    t39 = (t23 & t38);
    if (t39 != 0)
        goto LAB63;

LAB60:    if (t37 != 0)
        goto LAB62;

LAB61:    *((unsigned int *)t25) = 1;

LAB63:    t33 = (t25 + 4);
    t40 = *((unsigned int *)t33);
    t44 = (~(t40));
    t45 = *((unsigned int *)t25);
    t46 = (t45 & t44);
    t47 = (t46 != 0);
    if (t47 > 0)
        goto LAB64;

LAB65:    xsi_set_current_line(58, ng0);

LAB123:    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB66:
LAB57:    goto LAB35;

LAB37:    *((unsigned int *)t42) = 1;
    goto LAB40;

LAB39:    t65 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t65) = 1;
    goto LAB40;

LAB41:    t88 = (t0 + 1688U);
    t89 = *((char **)t88);
    t88 = (t0 + 1648U);
    t91 = (t88 + 72U);
    t92 = *((char **)t91);
    t93 = (t0 + 1648U);
    t94 = (t93 + 48U);
    t95 = *((char **)t94);
    t96 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t90, 1, t89, t92, t95, 2, 1, t96, 32, 1);
    memset(t50, 0, 8);
    t97 = (t90 + 4);
    t61 = *((unsigned int *)t97);
    t62 = (~(t61));
    t63 = *((unsigned int *)t90);
    t66 = (t63 & t62);
    t67 = (t66 & 1U);
    if (t67 != 0)
        goto LAB47;

LAB45:    if (*((unsigned int *)t97) == 0)
        goto LAB44;

LAB46:    t98 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t98) = 1;

LAB47:    memset(t99, 0, 8);
    t100 = (t50 + 4);
    t68 = *((unsigned int *)t100);
    t69 = (~(t68));
    t70 = *((unsigned int *)t50);
    t71 = (t70 & t69);
    t72 = (t71 & 1U);
    if (t72 != 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t100) != 0)
        goto LAB50;

LAB51:    t73 = *((unsigned int *)t42);
    t76 = *((unsigned int *)t99);
    t77 = (t73 & t76);
    *((unsigned int *)t102) = t77;
    t103 = (t42 + 4);
    t104 = (t99 + 4);
    t105 = (t102 + 4);
    t78 = *((unsigned int *)t103);
    t79 = *((unsigned int *)t104);
    t80 = (t78 | t79);
    *((unsigned int *)t105) = t80;
    t81 = *((unsigned int *)t105);
    t83 = (t81 != 0);
    if (t83 == 1)
        goto LAB52;

LAB53:
LAB54:    goto LAB43;

LAB44:    *((unsigned int *)t50) = 1;
    goto LAB47;

LAB48:    *((unsigned int *)t99) = 1;
    goto LAB51;

LAB50:    t101 = (t99 + 4);
    *((unsigned int *)t99) = 1;
    *((unsigned int *)t101) = 1;
    goto LAB51;

LAB52:    t84 = *((unsigned int *)t102);
    t85 = *((unsigned int *)t105);
    *((unsigned int *)t102) = (t84 | t85);
    t106 = (t42 + 4);
    t107 = (t99 + 4);
    t86 = *((unsigned int *)t42);
    t87 = (~(t86));
    t108 = *((unsigned int *)t106);
    t109 = (~(t108));
    t110 = *((unsigned int *)t99);
    t111 = (~(t110));
    t112 = *((unsigned int *)t107);
    t113 = (~(t112));
    t74 = (t87 & t109);
    t75 = (t111 & t113);
    t114 = (~(t74));
    t115 = (~(t75));
    t116 = *((unsigned int *)t105);
    *((unsigned int *)t105) = (t116 & t114);
    t117 = *((unsigned int *)t105);
    *((unsigned int *)t105) = (t117 & t115);
    t118 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t118 & t114);
    t119 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t119 & t115);
    goto LAB54;

LAB55:    xsi_set_current_line(36, ng0);

LAB58:    xsi_set_current_line(37, ng0);
    t126 = ((char*)((ng2)));
    t127 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t127, t126, 0, 0, 1, 0LL);
    goto LAB57;

LAB62:    t32 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB63;

LAB64:    xsi_set_current_line(40, ng0);

LAB67:    xsi_set_current_line(41, ng0);
    t34 = (t0 + 1528U);
    t35 = *((char **)t34);
    t34 = (t0 + 1488U);
    t41 = (t34 + 72U);
    t43 = *((char **)t41);
    t49 = (t0 + 1488U);
    t54 = (t49 + 48U);
    t55 = *((char **)t54);
    t56 = ((char*)((ng4)));
    xsi_vlog_generic_get_array_select_value(t28, 1, t35, t43, t55, 2, 1, t56, 32, 1);
    memset(t42, 0, 8);
    t64 = (t28 + 4);
    t48 = *((unsigned int *)t64);
    t51 = (~(t48));
    t52 = *((unsigned int *)t28);
    t53 = (t52 & t51);
    t57 = (t53 & 1U);
    if (t57 != 0)
        goto LAB68;

LAB69:    if (*((unsigned int *)t64) != 0)
        goto LAB70;

LAB71:    t82 = (t42 + 4);
    t58 = *((unsigned int *)t42);
    t59 = *((unsigned int *)t82);
    t60 = (t58 || t59);
    if (t60 > 0)
        goto LAB72;

LAB73:    memcpy(t102, t42, 8);

LAB74:    t120 = (t102 + 4);
    t121 = *((unsigned int *)t120);
    t122 = (~(t121));
    t123 = *((unsigned int *)t102);
    t124 = (t123 & t122);
    t125 = (t124 != 0);
    if (t125 > 0)
        goto LAB86;

LAB87:    xsi_set_current_line(44, ng0);

LAB90:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 1488U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t7 = (t0 + 1488U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng4)));
    xsi_vlog_generic_get_array_select_value(t6, 1, t3, t5, t9, 2, 1, t10, 32, 1);
    t11 = (t0 + 1688U);
    t12 = *((char **)t11);
    t11 = (t0 + 1648U);
    t14 = (t11 + 72U);
    t20 = *((char **)t14);
    t21 = (t0 + 1648U);
    t26 = (t21 + 48U);
    t27 = *((char **)t26);
    t29 = ((char*)((ng4)));
    xsi_vlog_generic_get_array_select_value(t13, 1, t12, t20, t27, 2, 1, t29, 32, 1);
    memset(t25, 0, 8);
    t30 = (t6 + 4);
    t31 = (t13 + 4);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t13);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t30);
    t19 = *((unsigned int *)t31);
    t22 = (t18 ^ t19);
    t23 = (t17 | t22);
    t24 = *((unsigned int *)t30);
    t36 = *((unsigned int *)t31);
    t37 = (t24 | t36);
    t38 = (~(t37));
    t39 = (t23 & t38);
    if (t39 != 0)
        goto LAB94;

LAB91:    if (t37 != 0)
        goto LAB93;

LAB92:    *((unsigned int *)t25) = 1;

LAB94:    t33 = (t25 + 4);
    t40 = *((unsigned int *)t33);
    t44 = (~(t40));
    t45 = *((unsigned int *)t25);
    t46 = (t45 & t44);
    t47 = (t46 != 0);
    if (t47 > 0)
        goto LAB95;

LAB96:    xsi_set_current_line(53, ng0);

LAB122:    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB97:
LAB88:    goto LAB66;

LAB68:    *((unsigned int *)t42) = 1;
    goto LAB71;

LAB70:    t65 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t65) = 1;
    goto LAB71;

LAB72:    t88 = (t0 + 1688U);
    t89 = *((char **)t88);
    t88 = (t0 + 1648U);
    t91 = (t88 + 72U);
    t92 = *((char **)t91);
    t93 = (t0 + 1648U);
    t94 = (t93 + 48U);
    t95 = *((char **)t94);
    t96 = ((char*)((ng4)));
    xsi_vlog_generic_get_array_select_value(t90, 1, t89, t92, t95, 2, 1, t96, 32, 1);
    memset(t50, 0, 8);
    t97 = (t90 + 4);
    t61 = *((unsigned int *)t97);
    t62 = (~(t61));
    t63 = *((unsigned int *)t90);
    t66 = (t63 & t62);
    t67 = (t66 & 1U);
    if (t67 != 0)
        goto LAB78;

LAB76:    if (*((unsigned int *)t97) == 0)
        goto LAB75;

LAB77:    t98 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t98) = 1;

LAB78:    memset(t99, 0, 8);
    t100 = (t50 + 4);
    t68 = *((unsigned int *)t100);
    t69 = (~(t68));
    t70 = *((unsigned int *)t50);
    t71 = (t70 & t69);
    t72 = (t71 & 1U);
    if (t72 != 0)
        goto LAB79;

LAB80:    if (*((unsigned int *)t100) != 0)
        goto LAB81;

LAB82:    t73 = *((unsigned int *)t42);
    t76 = *((unsigned int *)t99);
    t77 = (t73 & t76);
    *((unsigned int *)t102) = t77;
    t103 = (t42 + 4);
    t104 = (t99 + 4);
    t105 = (t102 + 4);
    t78 = *((unsigned int *)t103);
    t79 = *((unsigned int *)t104);
    t80 = (t78 | t79);
    *((unsigned int *)t105) = t80;
    t81 = *((unsigned int *)t105);
    t83 = (t81 != 0);
    if (t83 == 1)
        goto LAB83;

LAB84:
LAB85:    goto LAB74;

LAB75:    *((unsigned int *)t50) = 1;
    goto LAB78;

LAB79:    *((unsigned int *)t99) = 1;
    goto LAB82;

LAB81:    t101 = (t99 + 4);
    *((unsigned int *)t99) = 1;
    *((unsigned int *)t101) = 1;
    goto LAB82;

LAB83:    t84 = *((unsigned int *)t102);
    t85 = *((unsigned int *)t105);
    *((unsigned int *)t102) = (t84 | t85);
    t106 = (t42 + 4);
    t107 = (t99 + 4);
    t86 = *((unsigned int *)t42);
    t87 = (~(t86));
    t108 = *((unsigned int *)t106);
    t109 = (~(t108));
    t110 = *((unsigned int *)t99);
    t111 = (~(t110));
    t112 = *((unsigned int *)t107);
    t113 = (~(t112));
    t74 = (t87 & t109);
    t75 = (t111 & t113);
    t114 = (~(t74));
    t115 = (~(t75));
    t116 = *((unsigned int *)t105);
    *((unsigned int *)t105) = (t116 & t114);
    t117 = *((unsigned int *)t105);
    *((unsigned int *)t105) = (t117 & t115);
    t118 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t118 & t114);
    t119 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t119 & t115);
    goto LAB85;

LAB86:    xsi_set_current_line(41, ng0);

LAB89:    xsi_set_current_line(42, ng0);
    t126 = ((char*)((ng2)));
    t127 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t127, t126, 0, 0, 1, 0LL);
    goto LAB88;

LAB93:    t32 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB94;

LAB95:    xsi_set_current_line(45, ng0);

LAB98:    xsi_set_current_line(46, ng0);
    t34 = (t0 + 1528U);
    t35 = *((char **)t34);
    t34 = (t0 + 1488U);
    t41 = (t34 + 72U);
    t43 = *((char **)t41);
    t49 = (t0 + 1488U);
    t54 = (t49 + 48U);
    t55 = *((char **)t54);
    t56 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t28, 1, t35, t43, t55, 2, 1, t56, 32, 1);
    memset(t42, 0, 8);
    t64 = (t28 + 4);
    t48 = *((unsigned int *)t64);
    t51 = (~(t48));
    t52 = *((unsigned int *)t28);
    t53 = (t52 & t51);
    t57 = (t53 & 1U);
    if (t57 != 0)
        goto LAB99;

LAB100:    if (*((unsigned int *)t64) != 0)
        goto LAB101;

LAB102:    t82 = (t42 + 4);
    t58 = *((unsigned int *)t42);
    t59 = *((unsigned int *)t82);
    t60 = (t58 || t59);
    if (t60 > 0)
        goto LAB103;

LAB104:    memcpy(t102, t42, 8);

LAB105:    t120 = (t102 + 4);
    t121 = *((unsigned int *)t120);
    t122 = (~(t121));
    t123 = *((unsigned int *)t102);
    t124 = (t123 & t122);
    t125 = (t124 != 0);
    if (t125 > 0)
        goto LAB117;

LAB118:    xsi_set_current_line(49, ng0);

LAB121:    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB119:    goto LAB97;

LAB99:    *((unsigned int *)t42) = 1;
    goto LAB102;

LAB101:    t65 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t65) = 1;
    goto LAB102;

LAB103:    t88 = (t0 + 1688U);
    t89 = *((char **)t88);
    t88 = (t0 + 1648U);
    t91 = (t88 + 72U);
    t92 = *((char **)t91);
    t93 = (t0 + 1648U);
    t94 = (t93 + 48U);
    t95 = *((char **)t94);
    t96 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t90, 1, t89, t92, t95, 2, 1, t96, 32, 1);
    memset(t50, 0, 8);
    t97 = (t90 + 4);
    t61 = *((unsigned int *)t97);
    t62 = (~(t61));
    t63 = *((unsigned int *)t90);
    t66 = (t63 & t62);
    t67 = (t66 & 1U);
    if (t67 != 0)
        goto LAB109;

LAB107:    if (*((unsigned int *)t97) == 0)
        goto LAB106;

LAB108:    t98 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t98) = 1;

LAB109:    memset(t99, 0, 8);
    t100 = (t50 + 4);
    t68 = *((unsigned int *)t100);
    t69 = (~(t68));
    t70 = *((unsigned int *)t50);
    t71 = (t70 & t69);
    t72 = (t71 & 1U);
    if (t72 != 0)
        goto LAB110;

LAB111:    if (*((unsigned int *)t100) != 0)
        goto LAB112;

LAB113:    t73 = *((unsigned int *)t42);
    t76 = *((unsigned int *)t99);
    t77 = (t73 & t76);
    *((unsigned int *)t102) = t77;
    t103 = (t42 + 4);
    t104 = (t99 + 4);
    t105 = (t102 + 4);
    t78 = *((unsigned int *)t103);
    t79 = *((unsigned int *)t104);
    t80 = (t78 | t79);
    *((unsigned int *)t105) = t80;
    t81 = *((unsigned int *)t105);
    t83 = (t81 != 0);
    if (t83 == 1)
        goto LAB114;

LAB115:
LAB116:    goto LAB105;

LAB106:    *((unsigned int *)t50) = 1;
    goto LAB109;

LAB110:    *((unsigned int *)t99) = 1;
    goto LAB113;

LAB112:    t101 = (t99 + 4);
    *((unsigned int *)t99) = 1;
    *((unsigned int *)t101) = 1;
    goto LAB113;

LAB114:    t84 = *((unsigned int *)t102);
    t85 = *((unsigned int *)t105);
    *((unsigned int *)t102) = (t84 | t85);
    t106 = (t42 + 4);
    t107 = (t99 + 4);
    t86 = *((unsigned int *)t42);
    t87 = (~(t86));
    t108 = *((unsigned int *)t106);
    t109 = (~(t108));
    t110 = *((unsigned int *)t99);
    t111 = (~(t110));
    t112 = *((unsigned int *)t107);
    t113 = (~(t112));
    t74 = (t87 & t109);
    t75 = (t111 & t113);
    t114 = (~(t74));
    t115 = (~(t75));
    t116 = *((unsigned int *)t105);
    *((unsigned int *)t105) = (t116 & t114);
    t117 = *((unsigned int *)t105);
    *((unsigned int *)t105) = (t117 & t115);
    t118 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t118 & t114);
    t119 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t119 & t115);
    goto LAB116;

LAB117:    xsi_set_current_line(46, ng0);

LAB120:    xsi_set_current_line(47, ng0);
    t126 = ((char*)((ng2)));
    t127 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t127, t126, 0, 0, 1, 0LL);
    goto LAB119;

}

static void Cont_68_3(char *t0)
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

LAB0:    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(68, ng0);
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
    t18 = (t0 + 4120);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000000234870571_3306708044_init()
{
	static char *pe[] = {(void *)Cont_28_0,(void *)Cont_29_1,(void *)Always_30_2,(void *)Cont_68_3};
	xsi_register_didat("work_m_00000000000234870571_3306708044", "isim/comparator_tb_isim_beh.exe.sim/work/m_00000000000234870571_3306708044.didat");
	xsi_register_executes(pe);
}
