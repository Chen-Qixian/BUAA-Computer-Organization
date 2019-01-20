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
static const char *ng0 = "C:/Users/cqx/Desktop/Assignment/Computer_Organization/P4/Pre_P4/EXT.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {65535U, 0U};



static void Cont_31_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t16[8];
    char t24[8];
    char t25[8];
    char t37[8];
    char t38[8];
    char t41[8];
    char t60[8];
    char t67[8];
    char t74[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t39;
    char *t40;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t20 = *((unsigned int *)t4);
    t21 = (~(t20));
    t22 = *((unsigned int *)t12);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t24, 8);

LAB16:    t77 = (t0 + 3088);
    t78 = (t77 + 56U);
    t79 = *((char **)t78);
    t80 = (t79 + 56U);
    t81 = *((char **)t80);
    memcpy(t81, t3, 8);
    xsi_driver_vfirst_trans(t77, 0, 31);
    t82 = (t0 + 3008);
    *((int *)t82) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t17 = ((char*)((ng1)));
    t18 = (t0 + 1048U);
    t19 = *((char **)t18);
    xsi_vlogtype_concat(t16, 32, 32, 2U, t19, 16, t17, 16);
    goto LAB9;

LAB10:    t18 = (t0 + 1208U);
    t26 = *((char **)t18);
    memset(t25, 0, 8);
    t18 = (t26 + 4);
    t27 = *((unsigned int *)t18);
    t28 = (~(t27));
    t29 = *((unsigned int *)t26);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t18) != 0)
        goto LAB19;

LAB20:    t33 = (t25 + 4);
    t34 = *((unsigned int *)t25);
    t35 = *((unsigned int *)t33);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB21;

LAB22:    t70 = *((unsigned int *)t25);
    t71 = (~(t70));
    t72 = *((unsigned int *)t33);
    t73 = (t71 || t72);
    if (t73 > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t33) > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t25) > 0)
        goto LAB27;

LAB28:    memcpy(t24, t74, 8);

LAB29:    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t16, 32, t24, 32);
    goto LAB16;

LAB14:    memcpy(t3, t16, 8);
    goto LAB16;

LAB17:    *((unsigned int *)t25) = 1;
    goto LAB20;

LAB19:    t32 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB20;

LAB21:    t39 = (t0 + 1048U);
    t40 = *((char **)t39);
    memset(t41, 0, 8);
    t39 = (t41 + 4);
    t42 = (t40 + 4);
    t43 = *((unsigned int *)t40);
    t44 = (t43 >> 15);
    t45 = (t44 & 1);
    *((unsigned int *)t41) = t45;
    t46 = *((unsigned int *)t42);
    t47 = (t46 >> 15);
    t48 = (t47 & 1);
    *((unsigned int *)t39) = t48;
    memset(t38, 0, 8);
    t49 = (t41 + 4);
    t50 = *((unsigned int *)t49);
    t51 = (~(t50));
    t52 = *((unsigned int *)t41);
    t53 = (t52 & t51);
    t54 = (t53 & 1U);
    if (t54 != 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t49) != 0)
        goto LAB32;

LAB33:    t56 = (t38 + 4);
    t57 = *((unsigned int *)t38);
    t58 = *((unsigned int *)t56);
    t59 = (t57 || t58);
    if (t59 > 0)
        goto LAB34;

LAB35:    t63 = *((unsigned int *)t38);
    t64 = (~(t63));
    t65 = *((unsigned int *)t56);
    t66 = (t64 || t65);
    if (t66 > 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t56) > 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t38) > 0)
        goto LAB40;

LAB41:    memcpy(t37, t67, 8);

LAB42:    goto LAB22;

LAB23:    t75 = (t0 + 1048U);
    t76 = *((char **)t75);
    t75 = ((char*)((ng1)));
    xsi_vlogtype_concat(t74, 32, 32, 2U, t75, 16, t76, 16);
    goto LAB24;

LAB25:    xsi_vlog_unsigned_bit_combine(t24, 32, t37, 32, t74, 32);
    goto LAB29;

LAB27:    memcpy(t24, t37, 8);
    goto LAB29;

LAB30:    *((unsigned int *)t38) = 1;
    goto LAB33;

LAB32:    t55 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t55) = 1;
    goto LAB33;

LAB34:    t61 = (t0 + 1048U);
    t62 = *((char **)t61);
    t61 = ((char*)((ng2)));
    xsi_vlogtype_concat(t60, 32, 32, 2U, t61, 16, t62, 16);
    goto LAB35;

LAB36:    t68 = (t0 + 1048U);
    t69 = *((char **)t68);
    t68 = ((char*)((ng1)));
    xsi_vlogtype_concat(t67, 32, 32, 2U, t68, 16, t69, 16);
    goto LAB37;

LAB38:    xsi_vlog_unsigned_bit_combine(t37, 32, t60, 32, t67, 32);
    goto LAB42;

LAB40:    memcpy(t37, t60, 8);
    goto LAB42;

}


extern void work_m_00000000001628471236_1785967555_init()
{
	static char *pe[] = {(void *)Cont_31_0};
	xsi_register_didat("work_m_00000000001628471236_1785967555", "isim/DATAPATH_tb_isim_beh.exe.sim/work/m_00000000001628471236_1785967555.didat");
	xsi_register_executes(pe);
}
