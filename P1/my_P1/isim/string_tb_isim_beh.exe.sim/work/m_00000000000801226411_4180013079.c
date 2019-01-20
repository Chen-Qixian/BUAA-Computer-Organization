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
static const char *ng0 = "C:/Users/cqx/Desktop/Assignment/Computer_Organization/P1/my_P1/string.v";
static int ng1[] = {0, 0};
static int ng2[] = {48, 0};
static int ng3[] = {57, 0};
static int ng4[] = {1, 0};
static int ng5[] = {3, 0};
static int ng6[] = {43, 0};
static int ng7[] = {42, 0};
static int ng8[] = {2, 0};



static void Initial_32_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(32, ng0);

LAB2:    xsi_set_current_line(33, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1928);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Cont_36_1(char *t0)
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

LAB0:    t1 = (t0 + 3256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3920);
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
    t18 = (t0 + 3824);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_38_2(char *t0)
{
    char t14[8];
    char t18[8];
    char t27[8];
    char t31[8];
    char t39[8];
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
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    char *t30;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    int t63;
    int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
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
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;

LAB0:    t1 = (t0 + 3504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 3840);
    *((int *)t2) = 1;
    t3 = (t0 + 3536);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(38, ng0);

LAB5:    xsi_set_current_line(39, ng0);
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
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB11:    t5 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 32);
    if (t13 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 32);
    if (t13 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng8)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 32);
    if (t13 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 32);
    if (t13 == 1)
        goto LAB18;

LAB19:
LAB20:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(39, ng0);

LAB9:    xsi_set_current_line(40, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 2, 0LL);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB12:    xsi_set_current_line(46, ng0);

LAB21:    xsi_set_current_line(47, ng0);
    t11 = (t0 + 1368U);
    t12 = *((char **)t11);
    t11 = ((char*)((ng2)));
    memset(t14, 0, 8);
    t15 = (t12 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB23;

LAB22:    t16 = (t11 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB23;

LAB26:    if (*((unsigned int *)t12) < *((unsigned int *)t11))
        goto LAB25;

LAB24:    *((unsigned int *)t14) = 1;

LAB25:    memset(t18, 0, 8);
    t19 = (t14 + 4);
    t6 = *((unsigned int *)t19);
    t7 = (~(t6));
    t8 = *((unsigned int *)t14);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t19) != 0)
        goto LAB29;

LAB30:    t21 = (t18 + 4);
    t22 = *((unsigned int *)t18);
    t23 = *((unsigned int *)t21);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB31;

LAB32:    memcpy(t39, t18, 8);

LAB33:    t71 = (t39 + 4);
    t72 = *((unsigned int *)t71);
    t73 = (~(t72));
    t74 = *((unsigned int *)t39);
    t75 = (t74 & t73);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB46;

LAB47:    xsi_set_current_line(51, ng0);

LAB50:    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB48:    goto LAB20;

LAB14:    xsi_set_current_line(57, ng0);

LAB51:    xsi_set_current_line(58, ng0);
    t3 = (t0 + 1368U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t14, 0, 8);
    t11 = (t5 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB53;

LAB52:    t12 = (t3 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB53;

LAB56:    if (*((unsigned int *)t5) < *((unsigned int *)t3))
        goto LAB55;

LAB54:    *((unsigned int *)t14) = 1;

LAB55:    memset(t18, 0, 8);
    t16 = (t14 + 4);
    t6 = *((unsigned int *)t16);
    t7 = (~(t6));
    t8 = *((unsigned int *)t14);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t16) != 0)
        goto LAB59;

LAB60:    t19 = (t18 + 4);
    t22 = *((unsigned int *)t18);
    t23 = *((unsigned int *)t19);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB61;

LAB62:    memcpy(t39, t18, 8);

LAB63:    t53 = (t39 + 4);
    t72 = *((unsigned int *)t53);
    t73 = (~(t72));
    t74 = *((unsigned int *)t39);
    t75 = (t74 & t73);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB76;

LAB77:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t14, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t22 = (t9 ^ t10);
    t23 = (t8 | t22);
    t24 = *((unsigned int *)t5);
    t33 = *((unsigned int *)t11);
    t34 = (t24 | t33);
    t35 = (~(t34));
    t36 = (t23 & t35);
    if (t36 != 0)
        goto LAB83;

LAB80:    if (t34 != 0)
        goto LAB82;

LAB81:    *((unsigned int *)t14) = 1;

LAB83:    memset(t18, 0, 8);
    t15 = (t14 + 4);
    t37 = *((unsigned int *)t15);
    t40 = (~(t37));
    t41 = *((unsigned int *)t14);
    t42 = (t41 & t40);
    t46 = (t42 & 1U);
    if (t46 != 0)
        goto LAB84;

LAB85:    if (*((unsigned int *)t15) != 0)
        goto LAB86;

LAB87:    t17 = (t18 + 4);
    t47 = *((unsigned int *)t18);
    t48 = (!(t47));
    t49 = *((unsigned int *)t17);
    t50 = (t48 || t49);
    if (t50 > 0)
        goto LAB88;

LAB89:    memcpy(t39, t18, 8);

LAB90:    t45 = (t39 + 4);
    t95 = *((unsigned int *)t45);
    t96 = (~(t95));
    t97 = *((unsigned int *)t39);
    t98 = (t97 & t96);
    t99 = (t98 != 0);
    if (t99 > 0)
        goto LAB102;

LAB103:    xsi_set_current_line(66, ng0);

LAB106:    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB104:
LAB78:    goto LAB20;

LAB16:    xsi_set_current_line(72, ng0);

LAB107:    xsi_set_current_line(73, ng0);
    t3 = (t0 + 1368U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t14, 0, 8);
    t11 = (t5 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB109;

LAB108:    t12 = (t3 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB109;

LAB112:    if (*((unsigned int *)t5) < *((unsigned int *)t3))
        goto LAB111;

LAB110:    *((unsigned int *)t14) = 1;

LAB111:    memset(t18, 0, 8);
    t16 = (t14 + 4);
    t6 = *((unsigned int *)t16);
    t7 = (~(t6));
    t8 = *((unsigned int *)t14);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB113;

LAB114:    if (*((unsigned int *)t16) != 0)
        goto LAB115;

LAB116:    t19 = (t18 + 4);
    t22 = *((unsigned int *)t18);
    t23 = *((unsigned int *)t19);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB117;

LAB118:    memcpy(t39, t18, 8);

LAB119:    t53 = (t39 + 4);
    t72 = *((unsigned int *)t53);
    t73 = (~(t72));
    t74 = *((unsigned int *)t39);
    t75 = (t74 & t73);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB132;

LAB133:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t14, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t22 = (t9 ^ t10);
    t23 = (t8 | t22);
    t24 = *((unsigned int *)t5);
    t33 = *((unsigned int *)t11);
    t34 = (t24 | t33);
    t35 = (~(t34));
    t36 = (t23 & t35);
    if (t36 != 0)
        goto LAB139;

LAB136:    if (t34 != 0)
        goto LAB138;

LAB137:    *((unsigned int *)t14) = 1;

LAB139:    memset(t18, 0, 8);
    t15 = (t14 + 4);
    t37 = *((unsigned int *)t15);
    t40 = (~(t37));
    t41 = *((unsigned int *)t14);
    t42 = (t41 & t40);
    t46 = (t42 & 1U);
    if (t46 != 0)
        goto LAB140;

LAB141:    if (*((unsigned int *)t15) != 0)
        goto LAB142;

LAB143:    t17 = (t18 + 4);
    t47 = *((unsigned int *)t18);
    t48 = (!(t47));
    t49 = *((unsigned int *)t17);
    t50 = (t48 || t49);
    if (t50 > 0)
        goto LAB144;

LAB145:    memcpy(t39, t18, 8);

LAB146:    t45 = (t39 + 4);
    t95 = *((unsigned int *)t45);
    t96 = (~(t95));
    t97 = *((unsigned int *)t39);
    t98 = (t97 & t96);
    t99 = (t98 != 0);
    if (t99 > 0)
        goto LAB158;

LAB159:
LAB160:
LAB134:    goto LAB20;

LAB18:    xsi_set_current_line(83, ng0);

LAB162:    xsi_set_current_line(84, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB20;

LAB23:    t17 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB25;

LAB27:    *((unsigned int *)t18) = 1;
    goto LAB30;

LAB29:    t20 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB30;

LAB31:    t25 = (t0 + 1368U);
    t26 = *((char **)t25);
    t25 = ((char*)((ng3)));
    memset(t27, 0, 8);
    t28 = (t26 + 4);
    if (*((unsigned int *)t28) != 0)
        goto LAB35;

LAB34:    t29 = (t25 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB35;

LAB38:    if (*((unsigned int *)t26) > *((unsigned int *)t25))
        goto LAB37;

LAB36:    *((unsigned int *)t27) = 1;

LAB37:    memset(t31, 0, 8);
    t32 = (t27 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t27);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t32) != 0)
        goto LAB41;

LAB42:    t40 = *((unsigned int *)t18);
    t41 = *((unsigned int *)t31);
    t42 = (t40 & t41);
    *((unsigned int *)t39) = t42;
    t43 = (t18 + 4);
    t44 = (t31 + 4);
    t45 = (t39 + 4);
    t46 = *((unsigned int *)t43);
    t47 = *((unsigned int *)t44);
    t48 = (t46 | t47);
    *((unsigned int *)t45) = t48;
    t49 = *((unsigned int *)t45);
    t50 = (t49 != 0);
    if (t50 == 1)
        goto LAB43;

LAB44:
LAB45:    goto LAB33;

LAB35:    t30 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB37;

LAB39:    *((unsigned int *)t31) = 1;
    goto LAB42;

LAB41:    t38 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB42;

LAB43:    t51 = *((unsigned int *)t39);
    t52 = *((unsigned int *)t45);
    *((unsigned int *)t39) = (t51 | t52);
    t53 = (t18 + 4);
    t54 = (t31 + 4);
    t55 = *((unsigned int *)t18);
    t56 = (~(t55));
    t57 = *((unsigned int *)t53);
    t58 = (~(t57));
    t59 = *((unsigned int *)t31);
    t60 = (~(t59));
    t61 = *((unsigned int *)t54);
    t62 = (~(t61));
    t63 = (t56 & t58);
    t64 = (t60 & t62);
    t65 = (~(t63));
    t66 = (~(t64));
    t67 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t67 & t65);
    t68 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t68 & t66);
    t69 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t69 & t65);
    t70 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t70 & t66);
    goto LAB45;

LAB46:    xsi_set_current_line(47, ng0);

LAB49:    xsi_set_current_line(48, ng0);
    t77 = ((char*)((ng4)));
    t78 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t78, t77, 0, 0, 2, 0LL);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB48;

LAB53:    t15 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB55;

LAB57:    *((unsigned int *)t18) = 1;
    goto LAB60;

LAB59:    t17 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB60;

LAB61:    t20 = (t0 + 1368U);
    t21 = *((char **)t20);
    t20 = ((char*)((ng3)));
    memset(t27, 0, 8);
    t25 = (t21 + 4);
    if (*((unsigned int *)t25) != 0)
        goto LAB65;

LAB64:    t26 = (t20 + 4);
    if (*((unsigned int *)t26) != 0)
        goto LAB65;

LAB68:    if (*((unsigned int *)t21) > *((unsigned int *)t20))
        goto LAB67;

LAB66:    *((unsigned int *)t27) = 1;

LAB67:    memset(t31, 0, 8);
    t29 = (t27 + 4);
    t33 = *((unsigned int *)t29);
    t34 = (~(t33));
    t35 = *((unsigned int *)t27);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB69;

LAB70:    if (*((unsigned int *)t29) != 0)
        goto LAB71;

LAB72:    t40 = *((unsigned int *)t18);
    t41 = *((unsigned int *)t31);
    t42 = (t40 & t41);
    *((unsigned int *)t39) = t42;
    t32 = (t18 + 4);
    t38 = (t31 + 4);
    t43 = (t39 + 4);
    t46 = *((unsigned int *)t32);
    t47 = *((unsigned int *)t38);
    t48 = (t46 | t47);
    *((unsigned int *)t43) = t48;
    t49 = *((unsigned int *)t43);
    t50 = (t49 != 0);
    if (t50 == 1)
        goto LAB73;

LAB74:
LAB75:    goto LAB63;

LAB65:    t28 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB67;

LAB69:    *((unsigned int *)t31) = 1;
    goto LAB72;

LAB71:    t30 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB72;

LAB73:    t51 = *((unsigned int *)t39);
    t52 = *((unsigned int *)t43);
    *((unsigned int *)t39) = (t51 | t52);
    t44 = (t18 + 4);
    t45 = (t31 + 4);
    t55 = *((unsigned int *)t18);
    t56 = (~(t55));
    t57 = *((unsigned int *)t44);
    t58 = (~(t57));
    t59 = *((unsigned int *)t31);
    t60 = (~(t59));
    t61 = *((unsigned int *)t45);
    t62 = (~(t61));
    t63 = (t56 & t58);
    t64 = (t60 & t62);
    t65 = (~(t63));
    t66 = (~(t64));
    t67 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t67 & t65);
    t68 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t68 & t66);
    t69 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t69 & t65);
    t70 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t70 & t66);
    goto LAB75;

LAB76:    xsi_set_current_line(58, ng0);

LAB79:    xsi_set_current_line(59, ng0);
    t54 = ((char*)((ng5)));
    t71 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t71, t54, 0, 0, 2, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB78;

LAB82:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB83;

LAB84:    *((unsigned int *)t18) = 1;
    goto LAB87;

LAB86:    t16 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB87;

LAB88:    t19 = (t0 + 1368U);
    t20 = *((char **)t19);
    t19 = ((char*)((ng7)));
    memset(t27, 0, 8);
    t21 = (t20 + 4);
    t25 = (t19 + 4);
    t51 = *((unsigned int *)t20);
    t52 = *((unsigned int *)t19);
    t55 = (t51 ^ t52);
    t56 = *((unsigned int *)t21);
    t57 = *((unsigned int *)t25);
    t58 = (t56 ^ t57);
    t59 = (t55 | t58);
    t60 = *((unsigned int *)t21);
    t61 = *((unsigned int *)t25);
    t62 = (t60 | t61);
    t65 = (~(t62));
    t66 = (t59 & t65);
    if (t66 != 0)
        goto LAB94;

LAB91:    if (t62 != 0)
        goto LAB93;

LAB92:    *((unsigned int *)t27) = 1;

LAB94:    memset(t31, 0, 8);
    t28 = (t27 + 4);
    t67 = *((unsigned int *)t28);
    t68 = (~(t67));
    t69 = *((unsigned int *)t27);
    t70 = (t69 & t68);
    t72 = (t70 & 1U);
    if (t72 != 0)
        goto LAB95;

LAB96:    if (*((unsigned int *)t28) != 0)
        goto LAB97;

LAB98:    t73 = *((unsigned int *)t18);
    t74 = *((unsigned int *)t31);
    t75 = (t73 | t74);
    *((unsigned int *)t39) = t75;
    t30 = (t18 + 4);
    t32 = (t31 + 4);
    t38 = (t39 + 4);
    t76 = *((unsigned int *)t30);
    t79 = *((unsigned int *)t32);
    t80 = (t76 | t79);
    *((unsigned int *)t38) = t80;
    t81 = *((unsigned int *)t38);
    t82 = (t81 != 0);
    if (t82 == 1)
        goto LAB99;

LAB100:
LAB101:    goto LAB90;

LAB93:    t26 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB94;

LAB95:    *((unsigned int *)t31) = 1;
    goto LAB98;

LAB97:    t29 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB98;

LAB99:    t83 = *((unsigned int *)t39);
    t84 = *((unsigned int *)t38);
    *((unsigned int *)t39) = (t83 | t84);
    t43 = (t18 + 4);
    t44 = (t31 + 4);
    t85 = *((unsigned int *)t43);
    t86 = (~(t85));
    t87 = *((unsigned int *)t18);
    t13 = (t87 & t86);
    t88 = *((unsigned int *)t44);
    t89 = (~(t88));
    t90 = *((unsigned int *)t31);
    t63 = (t90 & t89);
    t91 = (~(t13));
    t92 = (~(t63));
    t93 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t93 & t91);
    t94 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t94 & t92);
    goto LAB101;

LAB102:    xsi_set_current_line(62, ng0);

LAB105:    xsi_set_current_line(63, ng0);
    t53 = ((char*)((ng8)));
    t54 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t54, t53, 0, 0, 2, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB104;

LAB109:    t15 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB111;

LAB113:    *((unsigned int *)t18) = 1;
    goto LAB116;

LAB115:    t17 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB116;

LAB117:    t20 = (t0 + 1368U);
    t21 = *((char **)t20);
    t20 = ((char*)((ng3)));
    memset(t27, 0, 8);
    t25 = (t21 + 4);
    if (*((unsigned int *)t25) != 0)
        goto LAB121;

LAB120:    t26 = (t20 + 4);
    if (*((unsigned int *)t26) != 0)
        goto LAB121;

LAB124:    if (*((unsigned int *)t21) > *((unsigned int *)t20))
        goto LAB123;

LAB122:    *((unsigned int *)t27) = 1;

LAB123:    memset(t31, 0, 8);
    t29 = (t27 + 4);
    t33 = *((unsigned int *)t29);
    t34 = (~(t33));
    t35 = *((unsigned int *)t27);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB125;

LAB126:    if (*((unsigned int *)t29) != 0)
        goto LAB127;

LAB128:    t40 = *((unsigned int *)t18);
    t41 = *((unsigned int *)t31);
    t42 = (t40 & t41);
    *((unsigned int *)t39) = t42;
    t32 = (t18 + 4);
    t38 = (t31 + 4);
    t43 = (t39 + 4);
    t46 = *((unsigned int *)t32);
    t47 = *((unsigned int *)t38);
    t48 = (t46 | t47);
    *((unsigned int *)t43) = t48;
    t49 = *((unsigned int *)t43);
    t50 = (t49 != 0);
    if (t50 == 1)
        goto LAB129;

LAB130:
LAB131:    goto LAB119;

LAB121:    t28 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB123;

LAB125:    *((unsigned int *)t31) = 1;
    goto LAB128;

LAB127:    t30 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB128;

LAB129:    t51 = *((unsigned int *)t39);
    t52 = *((unsigned int *)t43);
    *((unsigned int *)t39) = (t51 | t52);
    t44 = (t18 + 4);
    t45 = (t31 + 4);
    t55 = *((unsigned int *)t18);
    t56 = (~(t55));
    t57 = *((unsigned int *)t44);
    t58 = (~(t57));
    t59 = *((unsigned int *)t31);
    t60 = (~(t59));
    t61 = *((unsigned int *)t45);
    t62 = (~(t61));
    t63 = (t56 & t58);
    t64 = (t60 & t62);
    t65 = (~(t63));
    t66 = (~(t64));
    t67 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t67 & t65);
    t68 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t68 & t66);
    t69 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t69 & t65);
    t70 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t70 & t66);
    goto LAB131;

LAB132:    xsi_set_current_line(73, ng0);

LAB135:    xsi_set_current_line(74, ng0);
    t54 = ((char*)((ng4)));
    t71 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t71, t54, 0, 0, 2, 0LL);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB134;

LAB138:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB139;

LAB140:    *((unsigned int *)t18) = 1;
    goto LAB143;

LAB142:    t16 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB143;

LAB144:    t19 = (t0 + 1368U);
    t20 = *((char **)t19);
    t19 = ((char*)((ng7)));
    memset(t27, 0, 8);
    t21 = (t20 + 4);
    t25 = (t19 + 4);
    t51 = *((unsigned int *)t20);
    t52 = *((unsigned int *)t19);
    t55 = (t51 ^ t52);
    t56 = *((unsigned int *)t21);
    t57 = *((unsigned int *)t25);
    t58 = (t56 ^ t57);
    t59 = (t55 | t58);
    t60 = *((unsigned int *)t21);
    t61 = *((unsigned int *)t25);
    t62 = (t60 | t61);
    t65 = (~(t62));
    t66 = (t59 & t65);
    if (t66 != 0)
        goto LAB150;

LAB147:    if (t62 != 0)
        goto LAB149;

LAB148:    *((unsigned int *)t27) = 1;

LAB150:    memset(t31, 0, 8);
    t28 = (t27 + 4);
    t67 = *((unsigned int *)t28);
    t68 = (~(t67));
    t69 = *((unsigned int *)t27);
    t70 = (t69 & t68);
    t72 = (t70 & 1U);
    if (t72 != 0)
        goto LAB151;

LAB152:    if (*((unsigned int *)t28) != 0)
        goto LAB153;

LAB154:    t73 = *((unsigned int *)t18);
    t74 = *((unsigned int *)t31);
    t75 = (t73 | t74);
    *((unsigned int *)t39) = t75;
    t30 = (t18 + 4);
    t32 = (t31 + 4);
    t38 = (t39 + 4);
    t76 = *((unsigned int *)t30);
    t79 = *((unsigned int *)t32);
    t80 = (t76 | t79);
    *((unsigned int *)t38) = t80;
    t81 = *((unsigned int *)t38);
    t82 = (t81 != 0);
    if (t82 == 1)
        goto LAB155;

LAB156:
LAB157:    goto LAB146;

LAB149:    t26 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB150;

LAB151:    *((unsigned int *)t31) = 1;
    goto LAB154;

LAB153:    t29 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB154;

LAB155:    t83 = *((unsigned int *)t39);
    t84 = *((unsigned int *)t38);
    *((unsigned int *)t39) = (t83 | t84);
    t43 = (t18 + 4);
    t44 = (t31 + 4);
    t85 = *((unsigned int *)t43);
    t86 = (~(t85));
    t87 = *((unsigned int *)t18);
    t13 = (t87 & t86);
    t88 = *((unsigned int *)t44);
    t89 = (~(t88));
    t90 = *((unsigned int *)t31);
    t63 = (t90 & t89);
    t91 = (~(t13));
    t92 = (~(t63));
    t93 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t93 & t91);
    t94 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t94 & t92);
    goto LAB157;

LAB158:    xsi_set_current_line(77, ng0);

LAB161:    xsi_set_current_line(78, ng0);
    t53 = ((char*)((ng5)));
    t54 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t54, t53, 0, 0, 2, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB160;

}


extern void work_m_00000000000801226411_4180013079_init()
{
	static char *pe[] = {(void *)Initial_32_0,(void *)Cont_36_1,(void *)Always_38_2};
	xsi_register_didat("work_m_00000000000801226411_4180013079", "isim/string_tb_isim_beh.exe.sim/work/m_00000000000801226411_4180013079.didat");
	xsi_register_executes(pe);
}
