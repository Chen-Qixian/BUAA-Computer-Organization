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
static const char *ng0 = "C:/Users/cqx/Desktop/Assignment/Computer_Organization/p7/P7_my/ALU.v";
static unsigned int ng1[] = {11U, 0U};
static unsigned int ng2[] = {12U, 0U};
static unsigned int ng3[] = {0U, 0U, 0U, 0U};
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {3U, 0U};
static unsigned int ng8[] = {4U, 0U};
static unsigned int ng9[] = {5U, 0U};
static unsigned int ng10[] = {6U, 0U};
static unsigned int ng11[] = {7U, 0U};
static unsigned int ng12[] = {8U, 0U};
static unsigned int ng13[] = {9U, 0U};
static unsigned int ng14[] = {10U, 0U};



static void NetDecl_43_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 4784);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t3, 8);
    xsi_driver_vfirst_trans(t2, 0, 31U);
    t8 = (t0 + 4640);
    *((int *)t8) = 1;

LAB1:    return;
}

static void NetDecl_44_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 3576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 4848);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t3, 8);
    xsi_driver_vfirst_trans(t2, 0, 31U);
    t8 = (t0 + 4656);
    *((int *)t8) = 1;

LAB1:    return;
}

static void Cont_47_2(char *t0)
{
    char t3[16];
    char t4[8];
    char t6[8];
    char t33[16];
    char t37[8];
    char t45[16];
    char t49[8];
    char t57[16];
    char t62[16];
    char t63[8];
    char t66[8];
    char t93[16];
    char t97[8];
    char t105[16];
    char t109[8];
    char t117[16];
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
    char *t34;
    char *t35;
    char *t36;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t46;
    char *t47;
    char *t48;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t64;
    char *t65;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t94;
    char *t95;
    char *t96;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t106;
    char *t107;
    char *t108;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    char *t122;
    char *t123;
    char *t124;
    char *t125;
    char *t126;
    char *t127;
    char *t128;

LAB0:    t1 = (t0 + 3824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
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

LAB13:    t58 = *((unsigned int *)t4);
    t59 = (~(t58));
    t60 = *((unsigned int *)t29);
    t61 = (t59 || t60);
    if (t61 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t62, 16);

LAB20:    t123 = (t0 + 4912);
    t124 = (t123 + 56U);
    t125 = *((char **)t124);
    t126 = (t125 + 56U);
    t127 = *((char **)t126);
    xsi_vlog_bit_copy(t127, 0, t3, 0, 33);
    xsi_driver_vfirst_trans(t123, 0, 32);
    t128 = (t0 + 4672);
    *((int *)t128) = 1;

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

LAB12:    t34 = (t0 + 1048U);
    t35 = *((char **)t34);
    t34 = (t0 + 1048U);
    t36 = *((char **)t34);
    memset(t37, 0, 8);
    t34 = (t37 + 4);
    t38 = (t36 + 4);
    t39 = *((unsigned int *)t36);
    t40 = (t39 >> 31);
    t41 = (t40 & 1);
    *((unsigned int *)t37) = t41;
    t42 = *((unsigned int *)t38);
    t43 = (t42 >> 31);
    t44 = (t43 & 1);
    *((unsigned int *)t34) = t44;
    xsi_vlogtype_concat(t33, 33, 33, 2U, t37, 1, t35, 32);
    t46 = (t0 + 1208U);
    t47 = *((char **)t46);
    t46 = (t0 + 1208U);
    t48 = *((char **)t46);
    memset(t49, 0, 8);
    t46 = (t49 + 4);
    t50 = (t48 + 4);
    t51 = *((unsigned int *)t48);
    t52 = (t51 >> 31);
    t53 = (t52 & 1);
    *((unsigned int *)t49) = t53;
    t54 = *((unsigned int *)t50);
    t55 = (t54 >> 31);
    t56 = (t55 & 1);
    *((unsigned int *)t46) = t56;
    xsi_vlogtype_concat(t45, 33, 33, 2U, t49, 1, t47, 32);
    xsi_vlog_unsigned_add(t57, 33, t33, 33, t45, 33);
    goto LAB13;

LAB14:    t64 = (t0 + 1368U);
    t65 = *((char **)t64);
    t64 = ((char*)((ng2)));
    memset(t66, 0, 8);
    t67 = (t65 + 4);
    t68 = (t64 + 4);
    t69 = *((unsigned int *)t65);
    t70 = *((unsigned int *)t64);
    t71 = (t69 ^ t70);
    t72 = *((unsigned int *)t67);
    t73 = *((unsigned int *)t68);
    t74 = (t72 ^ t73);
    t75 = (t71 | t74);
    t76 = *((unsigned int *)t67);
    t77 = *((unsigned int *)t68);
    t78 = (t76 | t77);
    t79 = (~(t78));
    t80 = (t75 & t79);
    if (t80 != 0)
        goto LAB24;

LAB21:    if (t78 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t66) = 1;

LAB24:    memset(t63, 0, 8);
    t82 = (t66 + 4);
    t83 = *((unsigned int *)t82);
    t84 = (~(t83));
    t85 = *((unsigned int *)t66);
    t86 = (t85 & t84);
    t87 = (t86 & 1U);
    if (t87 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t82) != 0)
        goto LAB27;

LAB28:    t89 = (t63 + 4);
    t90 = *((unsigned int *)t63);
    t91 = *((unsigned int *)t89);
    t92 = (t90 || t91);
    if (t92 > 0)
        goto LAB29;

LAB30:    t118 = *((unsigned int *)t63);
    t119 = (~(t118));
    t120 = *((unsigned int *)t89);
    t121 = (t119 || t120);
    if (t121 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t89) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t63) > 0)
        goto LAB35;

LAB36:    memcpy(t62, t122, 16);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 33, t57, 33, t62, 33);
    goto LAB20;

LAB18:    memcpy(t3, t57, 16);
    goto LAB20;

LAB23:    t81 = (t66 + 4);
    *((unsigned int *)t66) = 1;
    *((unsigned int *)t81) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t63) = 1;
    goto LAB28;

LAB27:    t88 = (t63 + 4);
    *((unsigned int *)t63) = 1;
    *((unsigned int *)t88) = 1;
    goto LAB28;

LAB29:    t94 = (t0 + 1048U);
    t95 = *((char **)t94);
    t94 = (t0 + 1048U);
    t96 = *((char **)t94);
    memset(t97, 0, 8);
    t94 = (t97 + 4);
    t98 = (t96 + 4);
    t99 = *((unsigned int *)t96);
    t100 = (t99 >> 31);
    t101 = (t100 & 1);
    *((unsigned int *)t97) = t101;
    t102 = *((unsigned int *)t98);
    t103 = (t102 >> 31);
    t104 = (t103 & 1);
    *((unsigned int *)t94) = t104;
    xsi_vlogtype_concat(t93, 33, 33, 2U, t97, 1, t95, 32);
    t106 = (t0 + 1208U);
    t107 = *((char **)t106);
    t106 = (t0 + 1208U);
    t108 = *((char **)t106);
    memset(t109, 0, 8);
    t106 = (t109 + 4);
    t110 = (t108 + 4);
    t111 = *((unsigned int *)t108);
    t112 = (t111 >> 31);
    t113 = (t112 & 1);
    *((unsigned int *)t109) = t113;
    t114 = *((unsigned int *)t110);
    t115 = (t114 >> 31);
    t116 = (t115 & 1);
    *((unsigned int *)t106) = t116;
    xsi_vlogtype_concat(t105, 33, 33, 2U, t109, 1, t107, 32);
    xsi_vlog_unsigned_minus(t117, 33, t93, 33, t105, 33);
    goto LAB30;

LAB31:    t122 = ((char*)((ng3)));
    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t62, 33, t117, 33, t122, 33);
    goto LAB37;

LAB35:    memcpy(t62, t117, 16);
    goto LAB37;

}

static void Cont_50_3(char *t0)
{
    char t4[8];
    char t15[8];
    char t23[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;

LAB0:    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 8);
    t6 = (t3 + 12);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 0);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 0);
    t12 = (t11 & 1);
    *((unsigned int *)t2) = t12;
    t13 = (t0 + 2168U);
    t14 = *((char **)t13);
    memset(t15, 0, 8);
    t13 = (t15 + 4);
    t16 = (t14 + 4);
    t17 = *((unsigned int *)t14);
    t18 = (t17 >> 31);
    t19 = (t18 & 1);
    *((unsigned int *)t15) = t19;
    t20 = *((unsigned int *)t16);
    t21 = (t20 >> 31);
    t22 = (t21 & 1);
    *((unsigned int *)t13) = t22;
    memset(t23, 0, 8);
    t24 = (t4 + 4);
    t25 = (t15 + 4);
    t26 = *((unsigned int *)t4);
    t27 = *((unsigned int *)t15);
    t28 = (t26 ^ t27);
    t29 = *((unsigned int *)t24);
    t30 = *((unsigned int *)t25);
    t31 = (t29 ^ t30);
    t32 = (t28 | t31);
    t33 = *((unsigned int *)t24);
    t34 = *((unsigned int *)t25);
    t35 = (t33 | t34);
    t36 = (~(t35));
    t37 = (t32 & t36);
    if (t37 != 0)
        goto LAB5;

LAB4:    if (t35 != 0)
        goto LAB6;

LAB7:    t39 = (t0 + 4976);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    memset(t43, 0, 8);
    t44 = 1U;
    t45 = t44;
    t46 = (t23 + 4);
    t47 = *((unsigned int *)t23);
    t44 = (t44 & t47);
    t48 = *((unsigned int *)t46);
    t45 = (t45 & t48);
    t49 = (t43 + 4);
    t50 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t50 | t44);
    t51 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t51 | t45);
    xsi_driver_vfirst_trans(t39, 0, 0);
    t52 = (t0 + 4688);
    *((int *)t52) = 1;

LAB1:    return;
LAB5:    *((unsigned int *)t23) = 1;
    goto LAB7;

LAB6:    t38 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB7;

}

static void Cont_52_4(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t24[8];
    char t40[8];
    char t82[8];
    char t87[8];
    char t88[8];
    char t90[8];
    char t108[8];
    char t124[8];
    char t166[8];
    char t171[8];
    char t172[8];
    char t174[8];
    char t204[8];
    char t235[8];
    char t236[8];
    char t239[8];
    char t269[8];
    char t304[8];
    char t305[8];
    char t308[8];
    char t338[8];
    char t355[8];
    char t356[8];
    char t359[8];
    char t386[8];
    char t390[8];
    char t431[8];
    char t432[8];
    char t435[8];
    char t462[8];
    char t463[8];
    char t467[8];
    char t488[8];
    char t489[8];
    char t492[8];
    char t519[8];
    char t520[8];
    char t524[8];
    char t548[8];
    char t549[8];
    char t552[8];
    char t582[8];
    char t587[8];
    char t588[8];
    char t590[8];
    char t620[8];
    char t625[8];
    char t626[8];
    char t628[8];
    char t660[8];
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
    char *t23;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    char *t81;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t89;
    char *t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    char *t106;
    char *t107;
    char *t109;
    char *t110;
    unsigned int t111;
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
    char *t123;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    char *t128;
    char *t129;
    char *t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    char *t138;
    char *t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    char *t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    char *t158;
    char *t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    char *t163;
    char *t164;
    char *t165;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    char *t173;
    char *t175;
    char *t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    char *t189;
    char *t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    char *t196;
    char *t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    char *t201;
    char *t202;
    char *t203;
    unsigned int t205;
    unsigned int t206;
    unsigned int t207;
    char *t208;
    char *t209;
    unsigned int t210;
    unsigned int t211;
    unsigned int t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    unsigned int t216;
    char *t217;
    char *t218;
    unsigned int t219;
    unsigned int t220;
    unsigned int t221;
    int t222;
    unsigned int t223;
    unsigned int t224;
    unsigned int t225;
    int t226;
    unsigned int t227;
    unsigned int t228;
    unsigned int t229;
    unsigned int t230;
    unsigned int t231;
    unsigned int t232;
    unsigned int t233;
    unsigned int t234;
    char *t237;
    char *t238;
    char *t240;
    char *t241;
    unsigned int t242;
    unsigned int t243;
    unsigned int t244;
    unsigned int t245;
    unsigned int t246;
    unsigned int t247;
    unsigned int t248;
    unsigned int t249;
    unsigned int t250;
    unsigned int t251;
    unsigned int t252;
    unsigned int t253;
    char *t254;
    char *t255;
    unsigned int t256;
    unsigned int t257;
    unsigned int t258;
    unsigned int t259;
    unsigned int t260;
    char *t261;
    char *t262;
    unsigned int t263;
    unsigned int t264;
    unsigned int t265;
    char *t266;
    char *t267;
    char *t268;
    unsigned int t270;
    unsigned int t271;
    unsigned int t272;
    char *t273;
    char *t274;
    unsigned int t275;
    unsigned int t276;
    unsigned int t277;
    unsigned int t278;
    unsigned int t279;
    unsigned int t280;
    unsigned int t281;
    char *t282;
    char *t283;
    unsigned int t284;
    unsigned int t285;
    unsigned int t286;
    unsigned int t287;
    unsigned int t288;
    unsigned int t289;
    unsigned int t290;
    unsigned int t291;
    int t292;
    int t293;
    unsigned int t294;
    unsigned int t295;
    unsigned int t296;
    unsigned int t297;
    unsigned int t298;
    unsigned int t299;
    unsigned int t300;
    unsigned int t301;
    unsigned int t302;
    unsigned int t303;
    char *t306;
    char *t307;
    char *t309;
    char *t310;
    unsigned int t311;
    unsigned int t312;
    unsigned int t313;
    unsigned int t314;
    unsigned int t315;
    unsigned int t316;
    unsigned int t317;
    unsigned int t318;
    unsigned int t319;
    unsigned int t320;
    unsigned int t321;
    unsigned int t322;
    char *t323;
    char *t324;
    unsigned int t325;
    unsigned int t326;
    unsigned int t327;
    unsigned int t328;
    unsigned int t329;
    char *t330;
    char *t331;
    unsigned int t332;
    unsigned int t333;
    unsigned int t334;
    char *t335;
    char *t336;
    char *t337;
    unsigned int t339;
    unsigned int t340;
    unsigned int t341;
    char *t342;
    char *t343;
    unsigned int t344;
    unsigned int t345;
    unsigned int t346;
    unsigned int t347;
    unsigned int t348;
    unsigned int t349;
    unsigned int t350;
    unsigned int t351;
    unsigned int t352;
    unsigned int t353;
    unsigned int t354;
    char *t357;
    char *t358;
    char *t360;
    char *t361;
    unsigned int t362;
    unsigned int t363;
    unsigned int t364;
    unsigned int t365;
    unsigned int t366;
    unsigned int t367;
    unsigned int t368;
    unsigned int t369;
    unsigned int t370;
    unsigned int t371;
    unsigned int t372;
    unsigned int t373;
    char *t374;
    char *t375;
    unsigned int t376;
    unsigned int t377;
    unsigned int t378;
    unsigned int t379;
    unsigned int t380;
    char *t381;
    char *t382;
    unsigned int t383;
    unsigned int t384;
    unsigned int t385;
    char *t387;
    char *t388;
    char *t389;
    unsigned int t391;
    unsigned int t392;
    unsigned int t393;
    char *t394;
    char *t395;
    unsigned int t396;
    unsigned int t397;
    unsigned int t398;
    unsigned int t399;
    unsigned int t400;
    unsigned int t401;
    unsigned int t402;
    char *t403;
    char *t404;
    unsigned int t405;
    unsigned int t406;
    unsigned int t407;
    int t408;
    unsigned int t409;
    unsigned int t410;
    unsigned int t411;
    int t412;
    unsigned int t413;
    unsigned int t414;
    unsigned int t415;
    unsigned int t416;
    char *t417;
    char *t418;
    unsigned int t419;
    unsigned int t420;
    unsigned int t421;
    unsigned int t422;
    unsigned int t423;
    unsigned int t424;
    unsigned int t425;
    unsigned int t426;
    unsigned int t427;
    unsigned int t428;
    unsigned int t429;
    unsigned int t430;
    char *t433;
    char *t434;
    char *t436;
    char *t437;
    unsigned int t438;
    unsigned int t439;
    unsigned int t440;
    unsigned int t441;
    unsigned int t442;
    unsigned int t443;
    unsigned int t444;
    unsigned int t445;
    unsigned int t446;
    unsigned int t447;
    unsigned int t448;
    unsigned int t449;
    char *t450;
    char *t451;
    unsigned int t452;
    unsigned int t453;
    unsigned int t454;
    unsigned int t455;
    unsigned int t456;
    char *t457;
    char *t458;
    unsigned int t459;
    unsigned int t460;
    unsigned int t461;
    char *t464;
    char *t465;
    char *t466;
    unsigned int t468;
    unsigned int t469;
    unsigned int t470;
    unsigned int t471;
    unsigned int t472;
    char *t473;
    char *t474;
    unsigned int t475;
    unsigned int t476;
    unsigned int t477;
    char *t478;
    unsigned int t479;
    unsigned int t480;
    unsigned int t481;
    unsigned int t482;
    char *t483;
    unsigned int t484;
    unsigned int t485;
    unsigned int t486;
    unsigned int t487;
    char *t490;
    char *t491;
    char *t493;
    char *t494;
    unsigned int t495;
    unsigned int t496;
    unsigned int t497;
    unsigned int t498;
    unsigned int t499;
    unsigned int t500;
    unsigned int t501;
    unsigned int t502;
    unsigned int t503;
    unsigned int t504;
    unsigned int t505;
    unsigned int t506;
    char *t507;
    char *t508;
    unsigned int t509;
    unsigned int t510;
    unsigned int t511;
    unsigned int t512;
    unsigned int t513;
    char *t514;
    char *t515;
    unsigned int t516;
    unsigned int t517;
    unsigned int t518;
    char *t521;
    char *t522;
    char *t523;
    char *t525;
    char *t526;
    char *t527;
    unsigned int t528;
    unsigned int t529;
    unsigned int t530;
    unsigned int t531;
    unsigned int t532;
    char *t533;
    char *t534;
    unsigned int t535;
    unsigned int t536;
    unsigned int t537;
    char *t538;
    unsigned int t539;
    unsigned int t540;
    unsigned int t541;
    unsigned int t542;
    char *t543;
    unsigned int t544;
    unsigned int t545;
    unsigned int t546;
    unsigned int t547;
    char *t550;
    char *t551;
    char *t553;
    char *t554;
    unsigned int t555;
    unsigned int t556;
    unsigned int t557;
    unsigned int t558;
    unsigned int t559;
    unsigned int t560;
    unsigned int t561;
    unsigned int t562;
    unsigned int t563;
    unsigned int t564;
    unsigned int t565;
    unsigned int t566;
    char *t567;
    char *t568;
    unsigned int t569;
    unsigned int t570;
    unsigned int t571;
    unsigned int t572;
    unsigned int t573;
    char *t574;
    char *t575;
    unsigned int t576;
    unsigned int t577;
    unsigned int t578;
    char *t579;
    char *t580;
    char *t581;
    unsigned int t583;
    unsigned int t584;
    unsigned int t585;
    unsigned int t586;
    char *t589;
    char *t591;
    char *t592;
    unsigned int t593;
    unsigned int t594;
    unsigned int t595;
    unsigned int t596;
    unsigned int t597;
    unsigned int t598;
    unsigned int t599;
    unsigned int t600;
    unsigned int t601;
    unsigned int t602;
    unsigned int t603;
    unsigned int t604;
    char *t605;
    char *t606;
    unsigned int t607;
    unsigned int t608;
    unsigned int t609;
    unsigned int t610;
    unsigned int t611;
    char *t612;
    char *t613;
    unsigned int t614;
    unsigned int t615;
    unsigned int t616;
    char *t617;
    char *t618;
    char *t619;
    unsigned int t621;
    unsigned int t622;
    unsigned int t623;
    unsigned int t624;
    char *t627;
    char *t629;
    char *t630;
    unsigned int t631;
    unsigned int t632;
    unsigned int t633;
    unsigned int t634;
    unsigned int t635;
    unsigned int t636;
    unsigned int t637;
    unsigned int t638;
    unsigned int t639;
    unsigned int t640;
    unsigned int t641;
    unsigned int t642;
    char *t643;
    char *t644;
    unsigned int t645;
    unsigned int t646;
    unsigned int t647;
    unsigned int t648;
    unsigned int t649;
    char *t650;
    char *t651;
    unsigned int t652;
    unsigned int t653;
    unsigned int t654;
    char *t657;
    char *t658;
    char *t659;
    unsigned int t661;
    unsigned int t662;
    unsigned int t663;
    unsigned int t664;
    char *t665;
    char *t666;
    char *t667;
    char *t668;
    char *t669;
    char *t670;

LAB0:    t1 = (t0 + 4320U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng4)));
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

LAB7:    t22 = (t0 + 1368U);
    t23 = *((char **)t22);
    t22 = ((char*)((ng1)));
    memset(t24, 0, 8);
    t25 = (t23 + 4);
    t26 = (t22 + 4);
    t27 = *((unsigned int *)t23);
    t28 = *((unsigned int *)t22);
    t29 = (t27 ^ t28);
    t30 = *((unsigned int *)t25);
    t31 = *((unsigned int *)t26);
    t32 = (t30 ^ t31);
    t33 = (t29 | t32);
    t34 = *((unsigned int *)t25);
    t35 = *((unsigned int *)t26);
    t36 = (t34 | t35);
    t37 = (~(t36));
    t38 = (t33 & t37);
    if (t38 != 0)
        goto LAB11;

LAB8:    if (t36 != 0)
        goto LAB10;

LAB9:    *((unsigned int *)t24) = 1;

LAB11:    t41 = *((unsigned int *)t6);
    t42 = *((unsigned int *)t24);
    t43 = (t41 | t42);
    *((unsigned int *)t40) = t43;
    t44 = (t6 + 4);
    t45 = (t24 + 4);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t44);
    t48 = *((unsigned int *)t45);
    t49 = (t47 | t48);
    *((unsigned int *)t46) = t49;
    t50 = *((unsigned int *)t46);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB12;

LAB13:
LAB14:    memset(t4, 0, 8);
    t68 = (t40 + 4);
    t69 = *((unsigned int *)t68);
    t70 = (~(t69));
    t71 = *((unsigned int *)t40);
    t72 = (t71 & t70);
    t73 = (t72 & 1U);
    if (t73 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t68) != 0)
        goto LAB17;

LAB18:    t75 = (t4 + 4);
    t76 = *((unsigned int *)t4);
    t77 = *((unsigned int *)t75);
    t78 = (t76 || t77);
    if (t78 > 0)
        goto LAB19;

LAB20:    t83 = *((unsigned int *)t4);
    t84 = (~(t83));
    t85 = *((unsigned int *)t75);
    t86 = (t84 || t85);
    if (t86 > 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t75) > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t4) > 0)
        goto LAB25;

LAB26:    memcpy(t3, t87, 8);

LAB27:    t665 = (t0 + 5040);
    t666 = (t665 + 56U);
    t667 = *((char **)t666);
    t668 = (t667 + 56U);
    t669 = *((char **)t668);
    memcpy(t669, t3, 8);
    xsi_driver_vfirst_trans(t665, 0, 31);
    t670 = (t0 + 4704);
    *((int *)t670) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB10:    t39 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB11;

LAB12:    t52 = *((unsigned int *)t40);
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t40) = (t52 | t53);
    t54 = (t6 + 4);
    t55 = (t24 + 4);
    t56 = *((unsigned int *)t54);
    t57 = (~(t56));
    t58 = *((unsigned int *)t6);
    t59 = (t58 & t57);
    t60 = *((unsigned int *)t55);
    t61 = (~(t60));
    t62 = *((unsigned int *)t24);
    t63 = (t62 & t61);
    t64 = (~(t59));
    t65 = (~(t63));
    t66 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t66 & t64);
    t67 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t67 & t65);
    goto LAB14;

LAB15:    *((unsigned int *)t4) = 1;
    goto LAB18;

LAB17:    t74 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t74) = 1;
    goto LAB18;

LAB19:    t79 = (t0 + 1048U);
    t80 = *((char **)t79);
    t79 = (t0 + 1208U);
    t81 = *((char **)t79);
    memset(t82, 0, 8);
    xsi_vlog_unsigned_add(t82, 32, t80, 32, t81, 32);
    goto LAB20;

LAB21:    t79 = (t0 + 1368U);
    t89 = *((char **)t79);
    t79 = ((char*)((ng5)));
    memset(t90, 0, 8);
    t91 = (t89 + 4);
    t92 = (t79 + 4);
    t93 = *((unsigned int *)t89);
    t94 = *((unsigned int *)t79);
    t95 = (t93 ^ t94);
    t96 = *((unsigned int *)t91);
    t97 = *((unsigned int *)t92);
    t98 = (t96 ^ t97);
    t99 = (t95 | t98);
    t100 = *((unsigned int *)t91);
    t101 = *((unsigned int *)t92);
    t102 = (t100 | t101);
    t103 = (~(t102));
    t104 = (t99 & t103);
    if (t104 != 0)
        goto LAB31;

LAB28:    if (t102 != 0)
        goto LAB30;

LAB29:    *((unsigned int *)t90) = 1;

LAB31:    t106 = (t0 + 1368U);
    t107 = *((char **)t106);
    t106 = ((char*)((ng2)));
    memset(t108, 0, 8);
    t109 = (t107 + 4);
    t110 = (t106 + 4);
    t111 = *((unsigned int *)t107);
    t112 = *((unsigned int *)t106);
    t113 = (t111 ^ t112);
    t114 = *((unsigned int *)t109);
    t115 = *((unsigned int *)t110);
    t116 = (t114 ^ t115);
    t117 = (t113 | t116);
    t118 = *((unsigned int *)t109);
    t119 = *((unsigned int *)t110);
    t120 = (t118 | t119);
    t121 = (~(t120));
    t122 = (t117 & t121);
    if (t122 != 0)
        goto LAB35;

LAB32:    if (t120 != 0)
        goto LAB34;

LAB33:    *((unsigned int *)t108) = 1;

LAB35:    t125 = *((unsigned int *)t90);
    t126 = *((unsigned int *)t108);
    t127 = (t125 | t126);
    *((unsigned int *)t124) = t127;
    t128 = (t90 + 4);
    t129 = (t108 + 4);
    t130 = (t124 + 4);
    t131 = *((unsigned int *)t128);
    t132 = *((unsigned int *)t129);
    t133 = (t131 | t132);
    *((unsigned int *)t130) = t133;
    t134 = *((unsigned int *)t130);
    t135 = (t134 != 0);
    if (t135 == 1)
        goto LAB36;

LAB37:
LAB38:    memset(t88, 0, 8);
    t152 = (t124 + 4);
    t153 = *((unsigned int *)t152);
    t154 = (~(t153));
    t155 = *((unsigned int *)t124);
    t156 = (t155 & t154);
    t157 = (t156 & 1U);
    if (t157 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t152) != 0)
        goto LAB41;

LAB42:    t159 = (t88 + 4);
    t160 = *((unsigned int *)t88);
    t161 = *((unsigned int *)t159);
    t162 = (t160 || t161);
    if (t162 > 0)
        goto LAB43;

LAB44:    t167 = *((unsigned int *)t88);
    t168 = (~(t167));
    t169 = *((unsigned int *)t159);
    t170 = (t168 || t169);
    if (t170 > 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t159) > 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t88) > 0)
        goto LAB49;

LAB50:    memcpy(t87, t171, 8);

LAB51:    goto LAB22;

LAB23:    xsi_vlog_unsigned_bit_combine(t3, 32, t82, 32, t87, 32);
    goto LAB27;

LAB25:    memcpy(t3, t82, 8);
    goto LAB27;

LAB30:    t105 = (t90 + 4);
    *((unsigned int *)t90) = 1;
    *((unsigned int *)t105) = 1;
    goto LAB31;

LAB34:    t123 = (t108 + 4);
    *((unsigned int *)t108) = 1;
    *((unsigned int *)t123) = 1;
    goto LAB35;

LAB36:    t136 = *((unsigned int *)t124);
    t137 = *((unsigned int *)t130);
    *((unsigned int *)t124) = (t136 | t137);
    t138 = (t90 + 4);
    t139 = (t108 + 4);
    t140 = *((unsigned int *)t138);
    t141 = (~(t140));
    t142 = *((unsigned int *)t90);
    t143 = (t142 & t141);
    t144 = *((unsigned int *)t139);
    t145 = (~(t144));
    t146 = *((unsigned int *)t108);
    t147 = (t146 & t145);
    t148 = (~(t143));
    t149 = (~(t147));
    t150 = *((unsigned int *)t130);
    *((unsigned int *)t130) = (t150 & t148);
    t151 = *((unsigned int *)t130);
    *((unsigned int *)t130) = (t151 & t149);
    goto LAB38;

LAB39:    *((unsigned int *)t88) = 1;
    goto LAB42;

LAB41:    t158 = (t88 + 4);
    *((unsigned int *)t88) = 1;
    *((unsigned int *)t158) = 1;
    goto LAB42;

LAB43:    t163 = (t0 + 1048U);
    t164 = *((char **)t163);
    t163 = (t0 + 1208U);
    t165 = *((char **)t163);
    memset(t166, 0, 8);
    xsi_vlog_unsigned_minus(t166, 32, t164, 32, t165, 32);
    goto LAB44;

LAB45:    t163 = (t0 + 1368U);
    t173 = *((char **)t163);
    t163 = ((char*)((ng6)));
    memset(t174, 0, 8);
    t175 = (t173 + 4);
    t176 = (t163 + 4);
    t177 = *((unsigned int *)t173);
    t178 = *((unsigned int *)t163);
    t179 = (t177 ^ t178);
    t180 = *((unsigned int *)t175);
    t181 = *((unsigned int *)t176);
    t182 = (t180 ^ t181);
    t183 = (t179 | t182);
    t184 = *((unsigned int *)t175);
    t185 = *((unsigned int *)t176);
    t186 = (t184 | t185);
    t187 = (~(t186));
    t188 = (t183 & t187);
    if (t188 != 0)
        goto LAB55;

LAB52:    if (t186 != 0)
        goto LAB54;

LAB53:    *((unsigned int *)t174) = 1;

LAB55:    memset(t172, 0, 8);
    t190 = (t174 + 4);
    t191 = *((unsigned int *)t190);
    t192 = (~(t191));
    t193 = *((unsigned int *)t174);
    t194 = (t193 & t192);
    t195 = (t194 & 1U);
    if (t195 != 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t190) != 0)
        goto LAB58;

LAB59:    t197 = (t172 + 4);
    t198 = *((unsigned int *)t172);
    t199 = *((unsigned int *)t197);
    t200 = (t198 || t199);
    if (t200 > 0)
        goto LAB60;

LAB61:    t231 = *((unsigned int *)t172);
    t232 = (~(t231));
    t233 = *((unsigned int *)t197);
    t234 = (t232 || t233);
    if (t234 > 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t197) > 0)
        goto LAB64;

LAB65:    if (*((unsigned int *)t172) > 0)
        goto LAB66;

LAB67:    memcpy(t171, t235, 8);

LAB68:    goto LAB46;

LAB47:    xsi_vlog_unsigned_bit_combine(t87, 32, t166, 32, t171, 32);
    goto LAB51;

LAB49:    memcpy(t87, t166, 8);
    goto LAB51;

LAB54:    t189 = (t174 + 4);
    *((unsigned int *)t174) = 1;
    *((unsigned int *)t189) = 1;
    goto LAB55;

LAB56:    *((unsigned int *)t172) = 1;
    goto LAB59;

LAB58:    t196 = (t172 + 4);
    *((unsigned int *)t172) = 1;
    *((unsigned int *)t196) = 1;
    goto LAB59;

LAB60:    t201 = (t0 + 1048U);
    t202 = *((char **)t201);
    t201 = (t0 + 1208U);
    t203 = *((char **)t201);
    t205 = *((unsigned int *)t202);
    t206 = *((unsigned int *)t203);
    t207 = (t205 | t206);
    *((unsigned int *)t204) = t207;
    t201 = (t202 + 4);
    t208 = (t203 + 4);
    t209 = (t204 + 4);
    t210 = *((unsigned int *)t201);
    t211 = *((unsigned int *)t208);
    t212 = (t210 | t211);
    *((unsigned int *)t209) = t212;
    t213 = *((unsigned int *)t209);
    t214 = (t213 != 0);
    if (t214 == 1)
        goto LAB69;

LAB70:
LAB71:    goto LAB61;

LAB62:    t237 = (t0 + 1368U);
    t238 = *((char **)t237);
    t237 = ((char*)((ng7)));
    memset(t239, 0, 8);
    t240 = (t238 + 4);
    t241 = (t237 + 4);
    t242 = *((unsigned int *)t238);
    t243 = *((unsigned int *)t237);
    t244 = (t242 ^ t243);
    t245 = *((unsigned int *)t240);
    t246 = *((unsigned int *)t241);
    t247 = (t245 ^ t246);
    t248 = (t244 | t247);
    t249 = *((unsigned int *)t240);
    t250 = *((unsigned int *)t241);
    t251 = (t249 | t250);
    t252 = (~(t251));
    t253 = (t248 & t252);
    if (t253 != 0)
        goto LAB75;

LAB72:    if (t251 != 0)
        goto LAB74;

LAB73:    *((unsigned int *)t239) = 1;

LAB75:    memset(t236, 0, 8);
    t255 = (t239 + 4);
    t256 = *((unsigned int *)t255);
    t257 = (~(t256));
    t258 = *((unsigned int *)t239);
    t259 = (t258 & t257);
    t260 = (t259 & 1U);
    if (t260 != 0)
        goto LAB76;

LAB77:    if (*((unsigned int *)t255) != 0)
        goto LAB78;

LAB79:    t262 = (t236 + 4);
    t263 = *((unsigned int *)t236);
    t264 = *((unsigned int *)t262);
    t265 = (t263 || t264);
    if (t265 > 0)
        goto LAB80;

LAB81:    t300 = *((unsigned int *)t236);
    t301 = (~(t300));
    t302 = *((unsigned int *)t262);
    t303 = (t301 || t302);
    if (t303 > 0)
        goto LAB82;

LAB83:    if (*((unsigned int *)t262) > 0)
        goto LAB84;

LAB85:    if (*((unsigned int *)t236) > 0)
        goto LAB86;

LAB87:    memcpy(t235, t304, 8);

LAB88:    goto LAB63;

LAB64:    xsi_vlog_unsigned_bit_combine(t171, 32, t204, 32, t235, 32);
    goto LAB68;

LAB66:    memcpy(t171, t204, 8);
    goto LAB68;

LAB69:    t215 = *((unsigned int *)t204);
    t216 = *((unsigned int *)t209);
    *((unsigned int *)t204) = (t215 | t216);
    t217 = (t202 + 4);
    t218 = (t203 + 4);
    t219 = *((unsigned int *)t217);
    t220 = (~(t219));
    t221 = *((unsigned int *)t202);
    t222 = (t221 & t220);
    t223 = *((unsigned int *)t218);
    t224 = (~(t223));
    t225 = *((unsigned int *)t203);
    t226 = (t225 & t224);
    t227 = (~(t222));
    t228 = (~(t226));
    t229 = *((unsigned int *)t209);
    *((unsigned int *)t209) = (t229 & t227);
    t230 = *((unsigned int *)t209);
    *((unsigned int *)t209) = (t230 & t228);
    goto LAB71;

LAB74:    t254 = (t239 + 4);
    *((unsigned int *)t239) = 1;
    *((unsigned int *)t254) = 1;
    goto LAB75;

LAB76:    *((unsigned int *)t236) = 1;
    goto LAB79;

LAB78:    t261 = (t236 + 4);
    *((unsigned int *)t236) = 1;
    *((unsigned int *)t261) = 1;
    goto LAB79;

LAB80:    t266 = (t0 + 1048U);
    t267 = *((char **)t266);
    t266 = (t0 + 1208U);
    t268 = *((char **)t266);
    t270 = *((unsigned int *)t267);
    t271 = *((unsigned int *)t268);
    t272 = (t270 & t271);
    *((unsigned int *)t269) = t272;
    t266 = (t267 + 4);
    t273 = (t268 + 4);
    t274 = (t269 + 4);
    t275 = *((unsigned int *)t266);
    t276 = *((unsigned int *)t273);
    t277 = (t275 | t276);
    *((unsigned int *)t274) = t277;
    t278 = *((unsigned int *)t274);
    t279 = (t278 != 0);
    if (t279 == 1)
        goto LAB89;

LAB90:
LAB91:    goto LAB81;

LAB82:    t306 = (t0 + 1368U);
    t307 = *((char **)t306);
    t306 = ((char*)((ng8)));
    memset(t308, 0, 8);
    t309 = (t307 + 4);
    t310 = (t306 + 4);
    t311 = *((unsigned int *)t307);
    t312 = *((unsigned int *)t306);
    t313 = (t311 ^ t312);
    t314 = *((unsigned int *)t309);
    t315 = *((unsigned int *)t310);
    t316 = (t314 ^ t315);
    t317 = (t313 | t316);
    t318 = *((unsigned int *)t309);
    t319 = *((unsigned int *)t310);
    t320 = (t318 | t319);
    t321 = (~(t320));
    t322 = (t317 & t321);
    if (t322 != 0)
        goto LAB95;

LAB92:    if (t320 != 0)
        goto LAB94;

LAB93:    *((unsigned int *)t308) = 1;

LAB95:    memset(t305, 0, 8);
    t324 = (t308 + 4);
    t325 = *((unsigned int *)t324);
    t326 = (~(t325));
    t327 = *((unsigned int *)t308);
    t328 = (t327 & t326);
    t329 = (t328 & 1U);
    if (t329 != 0)
        goto LAB96;

LAB97:    if (*((unsigned int *)t324) != 0)
        goto LAB98;

LAB99:    t331 = (t305 + 4);
    t332 = *((unsigned int *)t305);
    t333 = *((unsigned int *)t331);
    t334 = (t332 || t333);
    if (t334 > 0)
        goto LAB100;

LAB101:    t351 = *((unsigned int *)t305);
    t352 = (~(t351));
    t353 = *((unsigned int *)t331);
    t354 = (t352 || t353);
    if (t354 > 0)
        goto LAB102;

LAB103:    if (*((unsigned int *)t331) > 0)
        goto LAB104;

LAB105:    if (*((unsigned int *)t305) > 0)
        goto LAB106;

LAB107:    memcpy(t304, t355, 8);

LAB108:    goto LAB83;

LAB84:    xsi_vlog_unsigned_bit_combine(t235, 32, t269, 32, t304, 32);
    goto LAB88;

LAB86:    memcpy(t235, t269, 8);
    goto LAB88;

LAB89:    t280 = *((unsigned int *)t269);
    t281 = *((unsigned int *)t274);
    *((unsigned int *)t269) = (t280 | t281);
    t282 = (t267 + 4);
    t283 = (t268 + 4);
    t284 = *((unsigned int *)t267);
    t285 = (~(t284));
    t286 = *((unsigned int *)t282);
    t287 = (~(t286));
    t288 = *((unsigned int *)t268);
    t289 = (~(t288));
    t290 = *((unsigned int *)t283);
    t291 = (~(t290));
    t292 = (t285 & t287);
    t293 = (t289 & t291);
    t294 = (~(t292));
    t295 = (~(t293));
    t296 = *((unsigned int *)t274);
    *((unsigned int *)t274) = (t296 & t294);
    t297 = *((unsigned int *)t274);
    *((unsigned int *)t274) = (t297 & t295);
    t298 = *((unsigned int *)t269);
    *((unsigned int *)t269) = (t298 & t294);
    t299 = *((unsigned int *)t269);
    *((unsigned int *)t269) = (t299 & t295);
    goto LAB91;

LAB94:    t323 = (t308 + 4);
    *((unsigned int *)t308) = 1;
    *((unsigned int *)t323) = 1;
    goto LAB95;

LAB96:    *((unsigned int *)t305) = 1;
    goto LAB99;

LAB98:    t330 = (t305 + 4);
    *((unsigned int *)t305) = 1;
    *((unsigned int *)t330) = 1;
    goto LAB99;

LAB100:    t335 = (t0 + 1048U);
    t336 = *((char **)t335);
    t335 = (t0 + 1208U);
    t337 = *((char **)t335);
    t339 = *((unsigned int *)t336);
    t340 = *((unsigned int *)t337);
    t341 = (t339 ^ t340);
    *((unsigned int *)t338) = t341;
    t335 = (t336 + 4);
    t342 = (t337 + 4);
    t343 = (t338 + 4);
    t344 = *((unsigned int *)t335);
    t345 = *((unsigned int *)t342);
    t346 = (t344 | t345);
    *((unsigned int *)t343) = t346;
    t347 = *((unsigned int *)t343);
    t348 = (t347 != 0);
    if (t348 == 1)
        goto LAB109;

LAB110:
LAB111:    goto LAB101;

LAB102:    t357 = (t0 + 1368U);
    t358 = *((char **)t357);
    t357 = ((char*)((ng9)));
    memset(t359, 0, 8);
    t360 = (t358 + 4);
    t361 = (t357 + 4);
    t362 = *((unsigned int *)t358);
    t363 = *((unsigned int *)t357);
    t364 = (t362 ^ t363);
    t365 = *((unsigned int *)t360);
    t366 = *((unsigned int *)t361);
    t367 = (t365 ^ t366);
    t368 = (t364 | t367);
    t369 = *((unsigned int *)t360);
    t370 = *((unsigned int *)t361);
    t371 = (t369 | t370);
    t372 = (~(t371));
    t373 = (t368 & t372);
    if (t373 != 0)
        goto LAB115;

LAB112:    if (t371 != 0)
        goto LAB114;

LAB113:    *((unsigned int *)t359) = 1;

LAB115:    memset(t356, 0, 8);
    t375 = (t359 + 4);
    t376 = *((unsigned int *)t375);
    t377 = (~(t376));
    t378 = *((unsigned int *)t359);
    t379 = (t378 & t377);
    t380 = (t379 & 1U);
    if (t380 != 0)
        goto LAB116;

LAB117:    if (*((unsigned int *)t375) != 0)
        goto LAB118;

LAB119:    t382 = (t356 + 4);
    t383 = *((unsigned int *)t356);
    t384 = *((unsigned int *)t382);
    t385 = (t383 || t384);
    if (t385 > 0)
        goto LAB120;

LAB121:    t427 = *((unsigned int *)t356);
    t428 = (~(t427));
    t429 = *((unsigned int *)t382);
    t430 = (t428 || t429);
    if (t430 > 0)
        goto LAB122;

LAB123:    if (*((unsigned int *)t382) > 0)
        goto LAB124;

LAB125:    if (*((unsigned int *)t356) > 0)
        goto LAB126;

LAB127:    memcpy(t355, t431, 8);

LAB128:    goto LAB103;

LAB104:    xsi_vlog_unsigned_bit_combine(t304, 32, t338, 32, t355, 32);
    goto LAB108;

LAB106:    memcpy(t304, t338, 8);
    goto LAB108;

LAB109:    t349 = *((unsigned int *)t338);
    t350 = *((unsigned int *)t343);
    *((unsigned int *)t338) = (t349 | t350);
    goto LAB111;

LAB114:    t374 = (t359 + 4);
    *((unsigned int *)t359) = 1;
    *((unsigned int *)t374) = 1;
    goto LAB115;

LAB116:    *((unsigned int *)t356) = 1;
    goto LAB119;

LAB118:    t381 = (t356 + 4);
    *((unsigned int *)t356) = 1;
    *((unsigned int *)t381) = 1;
    goto LAB119;

LAB120:    t387 = (t0 + 1048U);
    t388 = *((char **)t387);
    t387 = (t0 + 1208U);
    t389 = *((char **)t387);
    t391 = *((unsigned int *)t388);
    t392 = *((unsigned int *)t389);
    t393 = (t391 | t392);
    *((unsigned int *)t390) = t393;
    t387 = (t388 + 4);
    t394 = (t389 + 4);
    t395 = (t390 + 4);
    t396 = *((unsigned int *)t387);
    t397 = *((unsigned int *)t394);
    t398 = (t396 | t397);
    *((unsigned int *)t395) = t398;
    t399 = *((unsigned int *)t395);
    t400 = (t399 != 0);
    if (t400 == 1)
        goto LAB129;

LAB130:
LAB131:    memset(t386, 0, 8);
    t417 = (t386 + 4);
    t418 = (t390 + 4);
    t419 = *((unsigned int *)t390);
    t420 = (~(t419));
    *((unsigned int *)t386) = t420;
    *((unsigned int *)t417) = 0;
    if (*((unsigned int *)t418) != 0)
        goto LAB133;

LAB132:    t425 = *((unsigned int *)t386);
    *((unsigned int *)t386) = (t425 & 4294967295U);
    t426 = *((unsigned int *)t417);
    *((unsigned int *)t417) = (t426 & 4294967295U);
    goto LAB121;

LAB122:    t433 = (t0 + 1368U);
    t434 = *((char **)t433);
    t433 = ((char*)((ng10)));
    memset(t435, 0, 8);
    t436 = (t434 + 4);
    t437 = (t433 + 4);
    t438 = *((unsigned int *)t434);
    t439 = *((unsigned int *)t433);
    t440 = (t438 ^ t439);
    t441 = *((unsigned int *)t436);
    t442 = *((unsigned int *)t437);
    t443 = (t441 ^ t442);
    t444 = (t440 | t443);
    t445 = *((unsigned int *)t436);
    t446 = *((unsigned int *)t437);
    t447 = (t445 | t446);
    t448 = (~(t447));
    t449 = (t444 & t448);
    if (t449 != 0)
        goto LAB137;

LAB134:    if (t447 != 0)
        goto LAB136;

LAB135:    *((unsigned int *)t435) = 1;

LAB137:    memset(t432, 0, 8);
    t451 = (t435 + 4);
    t452 = *((unsigned int *)t451);
    t453 = (~(t452));
    t454 = *((unsigned int *)t435);
    t455 = (t454 & t453);
    t456 = (t455 & 1U);
    if (t456 != 0)
        goto LAB138;

LAB139:    if (*((unsigned int *)t451) != 0)
        goto LAB140;

LAB141:    t458 = (t432 + 4);
    t459 = *((unsigned int *)t432);
    t460 = *((unsigned int *)t458);
    t461 = (t459 || t460);
    if (t461 > 0)
        goto LAB142;

LAB143:    t484 = *((unsigned int *)t432);
    t485 = (~(t484));
    t486 = *((unsigned int *)t458);
    t487 = (t485 || t486);
    if (t487 > 0)
        goto LAB144;

LAB145:    if (*((unsigned int *)t458) > 0)
        goto LAB146;

LAB147:    if (*((unsigned int *)t432) > 0)
        goto LAB148;

LAB149:    memcpy(t431, t488, 8);

LAB150:    goto LAB123;

LAB124:    xsi_vlog_unsigned_bit_combine(t355, 32, t386, 32, t431, 32);
    goto LAB128;

LAB126:    memcpy(t355, t386, 8);
    goto LAB128;

LAB129:    t401 = *((unsigned int *)t390);
    t402 = *((unsigned int *)t395);
    *((unsigned int *)t390) = (t401 | t402);
    t403 = (t388 + 4);
    t404 = (t389 + 4);
    t405 = *((unsigned int *)t403);
    t406 = (~(t405));
    t407 = *((unsigned int *)t388);
    t408 = (t407 & t406);
    t409 = *((unsigned int *)t404);
    t410 = (~(t409));
    t411 = *((unsigned int *)t389);
    t412 = (t411 & t410);
    t413 = (~(t408));
    t414 = (~(t412));
    t415 = *((unsigned int *)t395);
    *((unsigned int *)t395) = (t415 & t413);
    t416 = *((unsigned int *)t395);
    *((unsigned int *)t395) = (t416 & t414);
    goto LAB131;

LAB133:    t421 = *((unsigned int *)t386);
    t422 = *((unsigned int *)t418);
    *((unsigned int *)t386) = (t421 | t422);
    t423 = *((unsigned int *)t417);
    t424 = *((unsigned int *)t418);
    *((unsigned int *)t417) = (t423 | t424);
    goto LAB132;

LAB136:    t450 = (t435 + 4);
    *((unsigned int *)t435) = 1;
    *((unsigned int *)t450) = 1;
    goto LAB137;

LAB138:    *((unsigned int *)t432) = 1;
    goto LAB141;

LAB140:    t457 = (t432 + 4);
    *((unsigned int *)t432) = 1;
    *((unsigned int *)t457) = 1;
    goto LAB141;

LAB142:    t464 = (t0 + 1848U);
    t465 = *((char **)t464);
    t464 = (t0 + 2008U);
    t466 = *((char **)t464);
    memset(t467, 0, 8);
    xsi_vlog_signed_less(t467, 32, t465, 32, t466, 32);
    memset(t463, 0, 8);
    t464 = (t467 + 4);
    t468 = *((unsigned int *)t464);
    t469 = (~(t468));
    t470 = *((unsigned int *)t467);
    t471 = (t470 & t469);
    t472 = (t471 & 1U);
    if (t472 != 0)
        goto LAB151;

LAB152:    if (*((unsigned int *)t464) != 0)
        goto LAB153;

LAB154:    t474 = (t463 + 4);
    t475 = *((unsigned int *)t463);
    t476 = *((unsigned int *)t474);
    t477 = (t475 || t476);
    if (t477 > 0)
        goto LAB155;

LAB156:    t479 = *((unsigned int *)t463);
    t480 = (~(t479));
    t481 = *((unsigned int *)t474);
    t482 = (t480 || t481);
    if (t482 > 0)
        goto LAB157;

LAB158:    if (*((unsigned int *)t474) > 0)
        goto LAB159;

LAB160:    if (*((unsigned int *)t463) > 0)
        goto LAB161;

LAB162:    memcpy(t462, t483, 8);

LAB163:    goto LAB143;

LAB144:    t490 = (t0 + 1368U);
    t491 = *((char **)t490);
    t490 = ((char*)((ng11)));
    memset(t492, 0, 8);
    t493 = (t491 + 4);
    t494 = (t490 + 4);
    t495 = *((unsigned int *)t491);
    t496 = *((unsigned int *)t490);
    t497 = (t495 ^ t496);
    t498 = *((unsigned int *)t493);
    t499 = *((unsigned int *)t494);
    t500 = (t498 ^ t499);
    t501 = (t497 | t500);
    t502 = *((unsigned int *)t493);
    t503 = *((unsigned int *)t494);
    t504 = (t502 | t503);
    t505 = (~(t504));
    t506 = (t501 & t505);
    if (t506 != 0)
        goto LAB167;

LAB164:    if (t504 != 0)
        goto LAB166;

LAB165:    *((unsigned int *)t492) = 1;

LAB167:    memset(t489, 0, 8);
    t508 = (t492 + 4);
    t509 = *((unsigned int *)t508);
    t510 = (~(t509));
    t511 = *((unsigned int *)t492);
    t512 = (t511 & t510);
    t513 = (t512 & 1U);
    if (t513 != 0)
        goto LAB168;

LAB169:    if (*((unsigned int *)t508) != 0)
        goto LAB170;

LAB171:    t515 = (t489 + 4);
    t516 = *((unsigned int *)t489);
    t517 = *((unsigned int *)t515);
    t518 = (t516 || t517);
    if (t518 > 0)
        goto LAB172;

LAB173:    t544 = *((unsigned int *)t489);
    t545 = (~(t544));
    t546 = *((unsigned int *)t515);
    t547 = (t545 || t546);
    if (t547 > 0)
        goto LAB174;

LAB175:    if (*((unsigned int *)t515) > 0)
        goto LAB176;

LAB177:    if (*((unsigned int *)t489) > 0)
        goto LAB178;

LAB179:    memcpy(t488, t548, 8);

LAB180:    goto LAB145;

LAB146:    xsi_vlog_unsigned_bit_combine(t431, 32, t462, 32, t488, 32);
    goto LAB150;

LAB148:    memcpy(t431, t462, 8);
    goto LAB150;

LAB151:    *((unsigned int *)t463) = 1;
    goto LAB154;

LAB153:    t473 = (t463 + 4);
    *((unsigned int *)t463) = 1;
    *((unsigned int *)t473) = 1;
    goto LAB154;

LAB155:    t478 = ((char*)((ng5)));
    goto LAB156;

LAB157:    t483 = ((char*)((ng4)));
    goto LAB158;

LAB159:    xsi_vlog_unsigned_bit_combine(t462, 32, t478, 32, t483, 32);
    goto LAB163;

LAB161:    memcpy(t462, t478, 8);
    goto LAB163;

LAB166:    t507 = (t492 + 4);
    *((unsigned int *)t492) = 1;
    *((unsigned int *)t507) = 1;
    goto LAB167;

LAB168:    *((unsigned int *)t489) = 1;
    goto LAB171;

LAB170:    t514 = (t489 + 4);
    *((unsigned int *)t489) = 1;
    *((unsigned int *)t514) = 1;
    goto LAB171;

LAB172:    t521 = (t0 + 1048U);
    t522 = *((char **)t521);
    t521 = (t0 + 1208U);
    t523 = *((char **)t521);
    memset(t524, 0, 8);
    t521 = (t522 + 4);
    if (*((unsigned int *)t521) != 0)
        goto LAB182;

LAB181:    t525 = (t523 + 4);
    if (*((unsigned int *)t525) != 0)
        goto LAB182;

LAB185:    if (*((unsigned int *)t522) < *((unsigned int *)t523))
        goto LAB183;

LAB184:    memset(t520, 0, 8);
    t527 = (t524 + 4);
    t528 = *((unsigned int *)t527);
    t529 = (~(t528));
    t530 = *((unsigned int *)t524);
    t531 = (t530 & t529);
    t532 = (t531 & 1U);
    if (t532 != 0)
        goto LAB186;

LAB187:    if (*((unsigned int *)t527) != 0)
        goto LAB188;

LAB189:    t534 = (t520 + 4);
    t535 = *((unsigned int *)t520);
    t536 = *((unsigned int *)t534);
    t537 = (t535 || t536);
    if (t537 > 0)
        goto LAB190;

LAB191:    t539 = *((unsigned int *)t520);
    t540 = (~(t539));
    t541 = *((unsigned int *)t534);
    t542 = (t540 || t541);
    if (t542 > 0)
        goto LAB192;

LAB193:    if (*((unsigned int *)t534) > 0)
        goto LAB194;

LAB195:    if (*((unsigned int *)t520) > 0)
        goto LAB196;

LAB197:    memcpy(t519, t543, 8);

LAB198:    goto LAB173;

LAB174:    t550 = (t0 + 1368U);
    t551 = *((char **)t550);
    t550 = ((char*)((ng12)));
    memset(t552, 0, 8);
    t553 = (t551 + 4);
    t554 = (t550 + 4);
    t555 = *((unsigned int *)t551);
    t556 = *((unsigned int *)t550);
    t557 = (t555 ^ t556);
    t558 = *((unsigned int *)t553);
    t559 = *((unsigned int *)t554);
    t560 = (t558 ^ t559);
    t561 = (t557 | t560);
    t562 = *((unsigned int *)t553);
    t563 = *((unsigned int *)t554);
    t564 = (t562 | t563);
    t565 = (~(t564));
    t566 = (t561 & t565);
    if (t566 != 0)
        goto LAB202;

LAB199:    if (t564 != 0)
        goto LAB201;

LAB200:    *((unsigned int *)t552) = 1;

LAB202:    memset(t549, 0, 8);
    t568 = (t552 + 4);
    t569 = *((unsigned int *)t568);
    t570 = (~(t569));
    t571 = *((unsigned int *)t552);
    t572 = (t571 & t570);
    t573 = (t572 & 1U);
    if (t573 != 0)
        goto LAB203;

LAB204:    if (*((unsigned int *)t568) != 0)
        goto LAB205;

LAB206:    t575 = (t549 + 4);
    t576 = *((unsigned int *)t549);
    t577 = *((unsigned int *)t575);
    t578 = (t576 || t577);
    if (t578 > 0)
        goto LAB207;

LAB208:    t583 = *((unsigned int *)t549);
    t584 = (~(t583));
    t585 = *((unsigned int *)t575);
    t586 = (t584 || t585);
    if (t586 > 0)
        goto LAB209;

LAB210:    if (*((unsigned int *)t575) > 0)
        goto LAB211;

LAB212:    if (*((unsigned int *)t549) > 0)
        goto LAB213;

LAB214:    memcpy(t548, t587, 8);

LAB215:    goto LAB175;

LAB176:    xsi_vlog_unsigned_bit_combine(t488, 32, t519, 32, t548, 32);
    goto LAB180;

LAB178:    memcpy(t488, t519, 8);
    goto LAB180;

LAB182:    t526 = (t524 + 4);
    *((unsigned int *)t524) = 1;
    *((unsigned int *)t526) = 1;
    goto LAB184;

LAB183:    *((unsigned int *)t524) = 1;
    goto LAB184;

LAB186:    *((unsigned int *)t520) = 1;
    goto LAB189;

LAB188:    t533 = (t520 + 4);
    *((unsigned int *)t520) = 1;
    *((unsigned int *)t533) = 1;
    goto LAB189;

LAB190:    t538 = ((char*)((ng5)));
    goto LAB191;

LAB192:    t543 = ((char*)((ng4)));
    goto LAB193;

LAB194:    xsi_vlog_unsigned_bit_combine(t519, 32, t538, 32, t543, 32);
    goto LAB198;

LAB196:    memcpy(t519, t538, 8);
    goto LAB198;

LAB201:    t567 = (t552 + 4);
    *((unsigned int *)t552) = 1;
    *((unsigned int *)t567) = 1;
    goto LAB202;

LAB203:    *((unsigned int *)t549) = 1;
    goto LAB206;

LAB205:    t574 = (t549 + 4);
    *((unsigned int *)t549) = 1;
    *((unsigned int *)t574) = 1;
    goto LAB206;

LAB207:    t579 = (t0 + 1048U);
    t580 = *((char **)t579);
    t579 = (t0 + 1208U);
    t581 = *((char **)t579);
    memset(t582, 0, 8);
    xsi_vlog_unsigned_lshift(t582, 32, t580, 32, t581, 32);
    goto LAB208;

LAB209:    t579 = (t0 + 1368U);
    t589 = *((char **)t579);
    t579 = ((char*)((ng13)));
    memset(t590, 0, 8);
    t591 = (t589 + 4);
    t592 = (t579 + 4);
    t593 = *((unsigned int *)t589);
    t594 = *((unsigned int *)t579);
    t595 = (t593 ^ t594);
    t596 = *((unsigned int *)t591);
    t597 = *((unsigned int *)t592);
    t598 = (t596 ^ t597);
    t599 = (t595 | t598);
    t600 = *((unsigned int *)t591);
    t601 = *((unsigned int *)t592);
    t602 = (t600 | t601);
    t603 = (~(t602));
    t604 = (t599 & t603);
    if (t604 != 0)
        goto LAB219;

LAB216:    if (t602 != 0)
        goto LAB218;

LAB217:    *((unsigned int *)t590) = 1;

LAB219:    memset(t588, 0, 8);
    t606 = (t590 + 4);
    t607 = *((unsigned int *)t606);
    t608 = (~(t607));
    t609 = *((unsigned int *)t590);
    t610 = (t609 & t608);
    t611 = (t610 & 1U);
    if (t611 != 0)
        goto LAB220;

LAB221:    if (*((unsigned int *)t606) != 0)
        goto LAB222;

LAB223:    t613 = (t588 + 4);
    t614 = *((unsigned int *)t588);
    t615 = *((unsigned int *)t613);
    t616 = (t614 || t615);
    if (t616 > 0)
        goto LAB224;

LAB225:    t621 = *((unsigned int *)t588);
    t622 = (~(t621));
    t623 = *((unsigned int *)t613);
    t624 = (t622 || t623);
    if (t624 > 0)
        goto LAB226;

LAB227:    if (*((unsigned int *)t613) > 0)
        goto LAB228;

LAB229:    if (*((unsigned int *)t588) > 0)
        goto LAB230;

LAB231:    memcpy(t587, t625, 8);

LAB232:    goto LAB210;

LAB211:    xsi_vlog_unsigned_bit_combine(t548, 32, t582, 32, t587, 32);
    goto LAB215;

LAB213:    memcpy(t548, t582, 8);
    goto LAB215;

LAB218:    t605 = (t590 + 4);
    *((unsigned int *)t590) = 1;
    *((unsigned int *)t605) = 1;
    goto LAB219;

LAB220:    *((unsigned int *)t588) = 1;
    goto LAB223;

LAB222:    t612 = (t588 + 4);
    *((unsigned int *)t588) = 1;
    *((unsigned int *)t612) = 1;
    goto LAB223;

LAB224:    t617 = (t0 + 1048U);
    t618 = *((char **)t617);
    t617 = (t0 + 1208U);
    t619 = *((char **)t617);
    memset(t620, 0, 8);
    xsi_vlog_unsigned_rshift(t620, 32, t618, 32, t619, 32);
    goto LAB225;

LAB226:    t617 = (t0 + 1368U);
    t627 = *((char **)t617);
    t617 = ((char*)((ng14)));
    memset(t628, 0, 8);
    t629 = (t627 + 4);
    t630 = (t617 + 4);
    t631 = *((unsigned int *)t627);
    t632 = *((unsigned int *)t617);
    t633 = (t631 ^ t632);
    t634 = *((unsigned int *)t629);
    t635 = *((unsigned int *)t630);
    t636 = (t634 ^ t635);
    t637 = (t633 | t636);
    t638 = *((unsigned int *)t629);
    t639 = *((unsigned int *)t630);
    t640 = (t638 | t639);
    t641 = (~(t640));
    t642 = (t637 & t641);
    if (t642 != 0)
        goto LAB236;

LAB233:    if (t640 != 0)
        goto LAB235;

LAB234:    *((unsigned int *)t628) = 1;

LAB236:    memset(t626, 0, 8);
    t644 = (t628 + 4);
    t645 = *((unsigned int *)t644);
    t646 = (~(t645));
    t647 = *((unsigned int *)t628);
    t648 = (t647 & t646);
    t649 = (t648 & 1U);
    if (t649 != 0)
        goto LAB237;

LAB238:    if (*((unsigned int *)t644) != 0)
        goto LAB239;

LAB240:    t651 = (t626 + 4);
    t652 = *((unsigned int *)t626);
    t653 = *((unsigned int *)t651);
    t654 = (t652 || t653);
    if (t654 > 0)
        goto LAB241;

LAB242:    t661 = *((unsigned int *)t626);
    t662 = (~(t661));
    t663 = *((unsigned int *)t651);
    t664 = (t662 || t663);
    if (t664 > 0)
        goto LAB243;

LAB244:    if (*((unsigned int *)t651) > 0)
        goto LAB245;

LAB246:    if (*((unsigned int *)t626) > 0)
        goto LAB247;

LAB248:    memcpy(t625, t657, 8);

LAB249:    goto LAB227;

LAB228:    xsi_vlog_unsigned_bit_combine(t587, 32, t620, 32, t625, 32);
    goto LAB232;

LAB230:    memcpy(t587, t620, 8);
    goto LAB232;

LAB235:    t643 = (t628 + 4);
    *((unsigned int *)t628) = 1;
    *((unsigned int *)t643) = 1;
    goto LAB236;

LAB237:    *((unsigned int *)t626) = 1;
    goto LAB240;

LAB239:    t650 = (t626 + 4);
    *((unsigned int *)t626) = 1;
    *((unsigned int *)t650) = 1;
    goto LAB240;

LAB241:    t657 = (t0 + 1048U);
    t658 = *((char **)t657);
    t657 = (t0 + 1208U);
    t659 = *((char **)t657);
    memset(t660, 0, 8);
    xsi_vlog_signed_arith_rshift(t660, 32, t658, 32, t659, 32);
    goto LAB242;

LAB243:    t657 = ((char*)((ng4)));
    goto LAB244;

LAB245:    xsi_vlog_unsigned_bit_combine(t625, 32, t660, 32, t657, 32);
    goto LAB249;

LAB247:    memcpy(t625, t660, 8);
    goto LAB249;

}


extern void work_m_00000000002886961799_0886308060_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)NetDecl_44_1,(void *)Cont_47_2,(void *)Cont_50_3,(void *)Cont_52_4};
	xsi_register_didat("work_m_00000000002886961799_0886308060", "isim/mips_tb_isim_beh.exe.sim/work/m_00000000002886961799_0886308060.didat");
	xsi_register_executes(pe);
}
