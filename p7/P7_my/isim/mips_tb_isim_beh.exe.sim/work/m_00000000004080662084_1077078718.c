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
static const char *ng0 = "C:/Users/cqx/Desktop/Assignment/Computer_Organization/p7/P7_my/COCO.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {3, 0};
static int ng3[] = {0, 0};
static unsigned int ng4[] = {1U, 0U};
static int ng5[] = {1, 0};
static unsigned int ng6[] = {2U, 0U};



static void Initial_36_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(36, ng0);

LAB2:    xsi_set_current_line(37, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2408);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(38, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2568);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(39, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2728);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Always_42_1(char *t0)
{
    char t14[8];
    char t23[8];
    char t24[8];
    char t25[8];
    char t83[8];
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
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    int t33;
    char *t34;
    unsigned int t35;
    int t36;
    int t37;
    char *t38;
    unsigned int t39;
    int t40;
    int t41;
    unsigned int t42;
    int t43;
    unsigned int t44;
    unsigned int t45;
    int t46;
    int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t84;

LAB0:    t1 = (t0 + 3896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 4712);
    *((int *)t2) = 1;
    t3 = (t0 + 3928);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(42, ng0);

LAB5:    xsi_set_current_line(43, ng0);
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

LAB7:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(66, ng0);

LAB27:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t11 = (t14 + 4);
    t12 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 1);
    *((unsigned int *)t14) = t7;
    t8 = *((unsigned int *)t12);
    t9 = (t8 >> 1);
    *((unsigned int *)t11) = t9;
    t10 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t10 & 3U);
    t16 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t16 & 3U);
    t15 = ((char*)((ng1)));
    memset(t23, 0, 8);
    t22 = (t14 + 4);
    t26 = (t15 + 4);
    t17 = *((unsigned int *)t14);
    t18 = *((unsigned int *)t15);
    t19 = (t17 ^ t18);
    t20 = *((unsigned int *)t22);
    t21 = *((unsigned int *)t26);
    t32 = (t20 ^ t21);
    t35 = (t19 | t32);
    t39 = *((unsigned int *)t22);
    t42 = *((unsigned int *)t26);
    t44 = (t39 | t42);
    t45 = (~(t44));
    t48 = (t35 & t45);
    if (t48 != 0)
        goto LAB31;

LAB28:    if (t44 != 0)
        goto LAB30;

LAB29:    *((unsigned int *)t23) = 1;

LAB31:    t28 = (t23 + 4);
    t49 = *((unsigned int *)t28);
    t50 = (~(t49));
    t51 = *((unsigned int *)t23);
    t52 = (t51 & t50);
    t53 = (t52 != 0);
    if (t53 > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t11 = (t14 + 4);
    t12 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 1);
    *((unsigned int *)t14) = t7;
    t8 = *((unsigned int *)t12);
    t9 = (t8 >> 1);
    *((unsigned int *)t11) = t9;
    t10 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t10 & 3U);
    t16 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t16 & 3U);
    t15 = ((char*)((ng4)));
    memset(t23, 0, 8);
    t22 = (t14 + 4);
    t26 = (t15 + 4);
    t17 = *((unsigned int *)t14);
    t18 = *((unsigned int *)t15);
    t19 = (t17 ^ t18);
    t20 = *((unsigned int *)t22);
    t21 = *((unsigned int *)t26);
    t32 = (t20 ^ t21);
    t35 = (t19 | t32);
    t39 = *((unsigned int *)t22);
    t42 = *((unsigned int *)t26);
    t44 = (t39 | t42);
    t45 = (~(t44));
    t48 = (t35 & t45);
    if (t48 != 0)
        goto LAB55;

LAB52:    if (t44 != 0)
        goto LAB54;

LAB53:    *((unsigned int *)t23) = 1;

LAB55:    t28 = (t23 + 4);
    t49 = *((unsigned int *)t28);
    t50 = (~(t49));
    t51 = *((unsigned int *)t23);
    t52 = (t51 & t50);
    t53 = (t52 != 0);
    if (t53 > 0)
        goto LAB56;

LAB57:
LAB58:
LAB34:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(43, ng0);

LAB9:    xsi_set_current_line(44, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2408);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB8;

LAB10:    xsi_set_current_line(48, ng0);

LAB13:    xsi_set_current_line(49, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);

LAB14:    t4 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t13 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t13 == 1)
        goto LAB17;

LAB18:
LAB20:
LAB19:    xsi_set_current_line(61, ng0);

LAB26:
LAB21:    goto LAB12;

LAB15:    xsi_set_current_line(51, ng0);

LAB22:    xsi_set_current_line(52, ng0);
    t11 = (t0 + 1688U);
    t12 = *((char **)t11);
    memset(t14, 0, 8);
    t11 = (t14 + 4);
    t15 = (t12 + 4);
    t16 = *((unsigned int *)t12);
    t17 = (t16 >> 0);
    *((unsigned int *)t14) = t17;
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 0);
    *((unsigned int *)t11) = t19;
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t20 & 15U);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t21 & 15U);
    t22 = (t0 + 2408);
    t26 = (t0 + 2408);
    t27 = (t26 + 72U);
    t28 = *((char **)t27);
    t29 = ((char*)((ng2)));
    t30 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t23, t24, t25, ((int*)(t28)), 2, t29, 32, 1, t30, 32, 1);
    t31 = (t23 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (!(t32));
    t34 = (t24 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (!(t35));
    t37 = (t33 && t36);
    t38 = (t25 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (!(t39));
    t41 = (t37 && t40);
    if (t41 == 1)
        goto LAB23;

LAB24:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t11 = (t0 + 2728);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 32);
    goto LAB21;

LAB17:    xsi_set_current_line(56, ng0);

LAB25:    xsi_set_current_line(57, ng0);
    t3 = (t0 + 1688U);
    t4 = *((char **)t3);
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 2728);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    goto LAB21;

LAB23:    t42 = *((unsigned int *)t25);
    t43 = (t42 + 0);
    t44 = *((unsigned int *)t23);
    t45 = *((unsigned int *)t24);
    t46 = (t44 - t45);
    t47 = (t46 + 1);
    xsi_vlogvar_assign_value(t22, t14, t43, *((unsigned int *)t24), t47);
    goto LAB24;

LAB30:    t27 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB31;

LAB32:    xsi_set_current_line(67, ng0);

LAB35:    xsi_set_current_line(68, ng0);
    t29 = (t0 + 2408);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    memset(t24, 0, 8);
    t34 = (t24 + 4);
    t38 = (t31 + 4);
    t54 = *((unsigned int *)t31);
    t55 = (t54 >> 0);
    t56 = (t55 & 1);
    *((unsigned int *)t24) = t56;
    t57 = *((unsigned int *)t38);
    t58 = (t57 >> 0);
    t59 = (t58 & 1);
    *((unsigned int *)t34) = t59;
    t60 = (t24 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t24);
    t64 = (t63 & t62);
    t65 = (t64 != 0);
    if (t65 > 0)
        goto LAB36;

LAB37:
LAB38:    goto LAB34;

LAB36:    xsi_set_current_line(68, ng0);

LAB39:    xsi_set_current_line(69, ng0);
    t66 = (t0 + 2728);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    t69 = ((char*)((ng3)));
    memset(t25, 0, 8);
    t70 = (t68 + 4);
    if (*((unsigned int *)t70) != 0)
        goto LAB41;

LAB40:    t71 = (t69 + 4);
    if (*((unsigned int *)t71) != 0)
        goto LAB41;

LAB44:    if (*((unsigned int *)t68) > *((unsigned int *)t69))
        goto LAB42;

LAB43:    t73 = (t25 + 4);
    t74 = *((unsigned int *)t73);
    t75 = (~(t74));
    t76 = *((unsigned int *)t25);
    t77 = (t76 & t75);
    t78 = (t77 != 0);
    if (t78 > 0)
        goto LAB45;

LAB46:    xsi_set_current_line(72, ng0);

LAB49:    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2408);
    t4 = (t0 + 2408);
    t11 = (t4 + 72U);
    t12 = *((char **)t11);
    t15 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t14, t12, 2, t15, 32, 1);
    t22 = (t14 + 4);
    t6 = *((unsigned int *)t22);
    t13 = (!(t6));
    if (t13 == 1)
        goto LAB50;

LAB51:
LAB47:    goto LAB38;

LAB41:    t72 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t72) = 1;
    goto LAB43;

LAB42:    *((unsigned int *)t25) = 1;
    goto LAB43;

LAB45:    xsi_set_current_line(69, ng0);

LAB48:    xsi_set_current_line(70, ng0);
    t79 = (t0 + 2728);
    t80 = (t79 + 56U);
    t81 = *((char **)t80);
    t82 = ((char*)((ng5)));
    memset(t83, 0, 8);
    xsi_vlog_unsigned_minus(t83, 32, t81, 32, t82, 32);
    t84 = (t0 + 2728);
    xsi_vlogvar_assign_value(t84, t83, 0, 0, 32);
    goto LAB47;

LAB50:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t14), 1);
    goto LAB51;

LAB54:    t27 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB55;

LAB56:    xsi_set_current_line(77, ng0);

LAB59:    xsi_set_current_line(78, ng0);
    t29 = (t0 + 2408);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    memset(t24, 0, 8);
    t34 = (t24 + 4);
    t38 = (t31 + 4);
    t54 = *((unsigned int *)t31);
    t55 = (t54 >> 0);
    t56 = (t55 & 1);
    *((unsigned int *)t24) = t56;
    t57 = *((unsigned int *)t38);
    t58 = (t57 >> 0);
    t59 = (t58 & 1);
    *((unsigned int *)t34) = t59;
    t60 = (t24 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t24);
    t64 = (t63 & t62);
    t65 = (t64 != 0);
    if (t65 > 0)
        goto LAB60;

LAB61:
LAB62:    goto LAB58;

LAB60:    xsi_set_current_line(78, ng0);

LAB63:    xsi_set_current_line(79, ng0);
    t66 = (t0 + 2728);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    t69 = ((char*)((ng3)));
    memset(t25, 0, 8);
    t70 = (t68 + 4);
    if (*((unsigned int *)t70) != 0)
        goto LAB65;

LAB64:    t71 = (t69 + 4);
    if (*((unsigned int *)t71) != 0)
        goto LAB65;

LAB68:    if (*((unsigned int *)t68) > *((unsigned int *)t69))
        goto LAB66;

LAB67:    t73 = (t25 + 4);
    t74 = *((unsigned int *)t73);
    t75 = (~(t74));
    t76 = *((unsigned int *)t25);
    t77 = (t76 & t75);
    t78 = (t77 != 0);
    if (t78 > 0)
        goto LAB69;

LAB70:    xsi_set_current_line(82, ng0);

LAB73:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t11 = (t0 + 2728);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 32);

LAB71:    goto LAB62;

LAB65:    t72 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t72) = 1;
    goto LAB67;

LAB66:    *((unsigned int *)t25) = 1;
    goto LAB67;

LAB69:    xsi_set_current_line(79, ng0);

LAB72:    xsi_set_current_line(80, ng0);
    t79 = (t0 + 2728);
    t80 = (t79 + 56U);
    t81 = *((char **)t80);
    t82 = ((char*)((ng5)));
    memset(t83, 0, 8);
    xsi_vlog_unsigned_minus(t83, 32, t81, 32, t82, 32);
    t84 = (t0 + 2728);
    xsi_vlogvar_assign_value(t84, t83, 0, 0, 32);
    goto LAB71;

}

static void Cont_90_2(char *t0)
{
    char t6[8];
    char t25[8];
    char t34[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
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
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    int t58;
    int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;

LAB0:    t1 = (t0 + 4144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    t22 = (t0 + 2408);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memset(t25, 0, 8);
    t26 = (t25 + 4);
    t27 = (t24 + 4);
    t28 = *((unsigned int *)t24);
    t29 = (t28 >> 3);
    t30 = (t29 & 1);
    *((unsigned int *)t25) = t30;
    t31 = *((unsigned int *)t27);
    t32 = (t31 >> 3);
    t33 = (t32 & 1);
    *((unsigned int *)t26) = t33;
    t35 = *((unsigned int *)t6);
    t36 = *((unsigned int *)t25);
    t37 = (t35 & t36);
    *((unsigned int *)t34) = t37;
    t38 = (t6 + 4);
    t39 = (t25 + 4);
    t40 = (t34 + 4);
    t41 = *((unsigned int *)t38);
    t42 = *((unsigned int *)t39);
    t43 = (t41 | t42);
    *((unsigned int *)t40) = t43;
    t44 = *((unsigned int *)t40);
    t45 = (t44 != 0);
    if (t45 == 1)
        goto LAB8;

LAB9:
LAB10:    t66 = (t0 + 4824);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    t69 = (t68 + 56U);
    t70 = *((char **)t69);
    memset(t70, 0, 8);
    t71 = 1U;
    t72 = t71;
    t73 = (t34 + 4);
    t74 = *((unsigned int *)t34);
    t71 = (t71 & t74);
    t75 = *((unsigned int *)t73);
    t72 = (t72 & t75);
    t76 = (t70 + 4);
    t77 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t77 | t71);
    t78 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t78 | t72);
    xsi_driver_vfirst_trans(t66, 0, 0);
    t79 = (t0 + 4728);
    *((int *)t79) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    t46 = *((unsigned int *)t34);
    t47 = *((unsigned int *)t40);
    *((unsigned int *)t34) = (t46 | t47);
    t48 = (t6 + 4);
    t49 = (t25 + 4);
    t50 = *((unsigned int *)t6);
    t51 = (~(t50));
    t52 = *((unsigned int *)t48);
    t53 = (~(t52));
    t54 = *((unsigned int *)t25);
    t55 = (~(t54));
    t56 = *((unsigned int *)t49);
    t57 = (~(t56));
    t58 = (t51 & t53);
    t59 = (t55 & t57);
    t60 = (~(t58));
    t61 = (~(t59));
    t62 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t62 & t60);
    t63 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t63 & t61);
    t64 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t64 & t60);
    t65 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t65 & t61);
    goto LAB10;

}

static void Cont_92_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t40[8];
    char t41[8];
    char t44[8];
    char t78[8];
    char t79[8];
    char t82[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
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
    char *t21;
    char *t22;
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
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t42;
    char *t43;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t80;
    char *t81;
    char *t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    char *t109;
    char *t110;
    char *t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;
    char *t117;
    char *t118;
    char *t119;
    char *t120;
    char *t121;
    char *t122;

LAB0:    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t22) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t36 = *((unsigned int *)t4);
    t37 = (~(t36));
    t38 = *((unsigned int *)t29);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t40, 8);

LAB20:    t117 = (t0 + 4888);
    t118 = (t117 + 56U);
    t119 = *((char **)t118);
    t120 = (t119 + 56U);
    t121 = *((char **)t120);
    memcpy(t121, t3, 8);
    xsi_driver_vfirst_trans(t117, 0, 31);
    t122 = (t0 + 4744);
    *((int *)t122) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB11;

LAB12:    t33 = (t0 + 2408);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    goto LAB13;

LAB14:    t42 = (t0 + 1368U);
    t43 = *((char **)t42);
    t42 = ((char*)((ng4)));
    memset(t44, 0, 8);
    t45 = (t43 + 4);
    t46 = (t42 + 4);
    t47 = *((unsigned int *)t43);
    t48 = *((unsigned int *)t42);
    t49 = (t47 ^ t48);
    t50 = *((unsigned int *)t45);
    t51 = *((unsigned int *)t46);
    t52 = (t50 ^ t51);
    t53 = (t49 | t52);
    t54 = *((unsigned int *)t45);
    t55 = *((unsigned int *)t46);
    t56 = (t54 | t55);
    t57 = (~(t56));
    t58 = (t53 & t57);
    if (t58 != 0)
        goto LAB24;

LAB21:    if (t56 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t44) = 1;

LAB24:    memset(t41, 0, 8);
    t60 = (t44 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t44);
    t64 = (t63 & t62);
    t65 = (t64 & 1U);
    if (t65 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t60) != 0)
        goto LAB27;

LAB28:    t67 = (t41 + 4);
    t68 = *((unsigned int *)t41);
    t69 = *((unsigned int *)t67);
    t70 = (t68 || t69);
    if (t70 > 0)
        goto LAB29;

LAB30:    t74 = *((unsigned int *)t41);
    t75 = (~(t74));
    t76 = *((unsigned int *)t67);
    t77 = (t75 || t76);
    if (t77 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t67) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t41) > 0)
        goto LAB35;

LAB36:    memcpy(t40, t78, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t35, 32, t40, 32);
    goto LAB20;

LAB18:    memcpy(t3, t35, 8);
    goto LAB20;

LAB23:    t59 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t41) = 1;
    goto LAB28;

LAB27:    t66 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t66) = 1;
    goto LAB28;

LAB29:    t71 = (t0 + 2568);
    t72 = (t71 + 56U);
    t73 = *((char **)t72);
    goto LAB30;

LAB31:    t80 = (t0 + 1368U);
    t81 = *((char **)t80);
    t80 = ((char*)((ng6)));
    memset(t82, 0, 8);
    t83 = (t81 + 4);
    t84 = (t80 + 4);
    t85 = *((unsigned int *)t81);
    t86 = *((unsigned int *)t80);
    t87 = (t85 ^ t86);
    t88 = *((unsigned int *)t83);
    t89 = *((unsigned int *)t84);
    t90 = (t88 ^ t89);
    t91 = (t87 | t90);
    t92 = *((unsigned int *)t83);
    t93 = *((unsigned int *)t84);
    t94 = (t92 | t93);
    t95 = (~(t94));
    t96 = (t91 & t95);
    if (t96 != 0)
        goto LAB41;

LAB38:    if (t94 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t82) = 1;

LAB41:    memset(t79, 0, 8);
    t98 = (t82 + 4);
    t99 = *((unsigned int *)t98);
    t100 = (~(t99));
    t101 = *((unsigned int *)t82);
    t102 = (t101 & t100);
    t103 = (t102 & 1U);
    if (t103 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t98) != 0)
        goto LAB44;

LAB45:    t105 = (t79 + 4);
    t106 = *((unsigned int *)t79);
    t107 = *((unsigned int *)t105);
    t108 = (t106 || t107);
    if (t108 > 0)
        goto LAB46;

LAB47:    t112 = *((unsigned int *)t79);
    t113 = (~(t112));
    t114 = *((unsigned int *)t105);
    t115 = (t113 || t114);
    if (t115 > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t105) > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t79) > 0)
        goto LAB52;

LAB53:    memcpy(t78, t116, 8);

LAB54:    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t40, 32, t73, 32, t78, 32);
    goto LAB37;

LAB35:    memcpy(t40, t73, 8);
    goto LAB37;

LAB40:    t97 = (t82 + 4);
    *((unsigned int *)t82) = 1;
    *((unsigned int *)t97) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t79) = 1;
    goto LAB45;

LAB44:    t104 = (t79 + 4);
    *((unsigned int *)t79) = 1;
    *((unsigned int *)t104) = 1;
    goto LAB45;

LAB46:    t109 = (t0 + 2728);
    t110 = (t109 + 56U);
    t111 = *((char **)t110);
    goto LAB47;

LAB48:    t116 = ((char*)((ng3)));
    goto LAB49;

LAB50:    xsi_vlog_unsigned_bit_combine(t78, 32, t111, 32, t116, 32);
    goto LAB54;

LAB52:    memcpy(t78, t111, 8);
    goto LAB54;

}


extern void work_m_00000000004080662084_1077078718_init()
{
	static char *pe[] = {(void *)Initial_36_0,(void *)Always_42_1,(void *)Cont_90_2,(void *)Cont_92_3};
	xsi_register_didat("work_m_00000000004080662084_1077078718", "isim/mips_tb_isim_beh.exe.sim/work/m_00000000004080662084_1077078718.didat");
	xsi_register_executes(pe);
}
