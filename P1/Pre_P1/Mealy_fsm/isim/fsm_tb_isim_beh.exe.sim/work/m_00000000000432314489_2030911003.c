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
static const char *ng0 = "C:/Users/cqx/Desktop/Assignment/Computer_Organization/P1/Mealy_fsm/fsm.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};



static void Cont_30_0(char *t0)
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

LAB0:    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3672);
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
    t18 = (t0 + 3576);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_32_1(char *t0)
{
    char t14[8];
    char t15[8];
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
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    t1 = (t0 + 3256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 3592);
    *((int *)t2) = 1;
    t3 = (t0 + 3288);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(32, ng0);

LAB5:    xsi_set_current_line(33, ng0);
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

LAB7:
LAB8:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB10:    t5 = ((char*)((ng2)));
    t13 = xsi_vlog_signed_case_compare(t4, 32, t5, 32);
    if (t13 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t13 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t13 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB2;

LAB6:    xsi_set_current_line(33, ng0);

LAB9:    xsi_set_current_line(34, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB8;

LAB11:    xsi_set_current_line(38, ng0);

LAB18:    xsi_set_current_line(39, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t15, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t2) != 0)
        goto LAB21;

LAB22:    t11 = (t15 + 4);
    t16 = *((unsigned int *)t15);
    t17 = *((unsigned int *)t11);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB23;

LAB24:    t19 = *((unsigned int *)t15);
    t20 = (~(t19));
    t21 = *((unsigned int *)t11);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t11) > 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t15) > 0)
        goto LAB29;

LAB30:    memcpy(t14, t23, 8);

LAB31:    t24 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t24, t14, 0, 0, 32, 0LL);
    goto LAB17;

LAB13:    xsi_set_current_line(42, ng0);

LAB32:    xsi_set_current_line(43, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t15, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t2) != 0)
        goto LAB35;

LAB36:    t11 = (t15 + 4);
    t16 = *((unsigned int *)t15);
    t17 = *((unsigned int *)t11);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB37;

LAB38:    t19 = *((unsigned int *)t15);
    t20 = (~(t19));
    t21 = *((unsigned int *)t11);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t11) > 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t15) > 0)
        goto LAB43;

LAB44:    memcpy(t14, t23, 8);

LAB45:    t24 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t24, t14, 0, 0, 32, 0LL);
    goto LAB17;

LAB15:    xsi_set_current_line(46, ng0);

LAB46:    xsi_set_current_line(47, ng0);
    t3 = (t0 + 1368U);
    t5 = *((char **)t3);
    memset(t15, 0, 8);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t3) != 0)
        goto LAB49;

LAB50:    t12 = (t15 + 4);
    t16 = *((unsigned int *)t15);
    t17 = *((unsigned int *)t12);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB51;

LAB52:    t19 = *((unsigned int *)t15);
    t20 = (~(t19));
    t21 = *((unsigned int *)t12);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB53;

LAB54:    if (*((unsigned int *)t12) > 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t15) > 0)
        goto LAB57;

LAB58:    memcpy(t14, t24, 8);

LAB59:    t25 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t25, t14, 0, 0, 1, 0LL);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t15, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t2) != 0)
        goto LAB62;

LAB63:    t11 = (t15 + 4);
    t16 = *((unsigned int *)t15);
    t17 = *((unsigned int *)t11);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB64;

LAB65:    t19 = *((unsigned int *)t15);
    t20 = (~(t19));
    t21 = *((unsigned int *)t11);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB66;

LAB67:    if (*((unsigned int *)t11) > 0)
        goto LAB68;

LAB69:    if (*((unsigned int *)t15) > 0)
        goto LAB70;

LAB71:    memcpy(t14, t23, 8);

LAB72:    t24 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t24, t14, 0, 0, 32, 0LL);
    goto LAB17;

LAB19:    *((unsigned int *)t15) = 1;
    goto LAB22;

LAB21:    t5 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB22;

LAB23:    t12 = ((char*)((ng3)));
    goto LAB24;

LAB25:    t23 = ((char*)((ng2)));
    goto LAB26;

LAB27:    xsi_vlog_unsigned_bit_combine(t14, 32, t12, 32, t23, 32);
    goto LAB31;

LAB29:    memcpy(t14, t12, 8);
    goto LAB31;

LAB33:    *((unsigned int *)t15) = 1;
    goto LAB36;

LAB35:    t5 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB36;

LAB37:    t12 = ((char*)((ng3)));
    goto LAB38;

LAB39:    t23 = ((char*)((ng4)));
    goto LAB40;

LAB41:    xsi_vlog_unsigned_bit_combine(t14, 32, t12, 32, t23, 32);
    goto LAB45;

LAB43:    memcpy(t14, t12, 8);
    goto LAB45;

LAB47:    *((unsigned int *)t15) = 1;
    goto LAB50;

LAB49:    t11 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB50;

LAB51:    t23 = ((char*)((ng2)));
    goto LAB52;

LAB53:    t24 = ((char*)((ng1)));
    goto LAB54;

LAB55:    xsi_vlog_unsigned_bit_combine(t14, 32, t23, 32, t24, 32);
    goto LAB59;

LAB57:    memcpy(t14, t23, 8);
    goto LAB59;

LAB60:    *((unsigned int *)t15) = 1;
    goto LAB63;

LAB62:    t5 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB63;

LAB64:    t12 = ((char*)((ng3)));
    goto LAB65;

LAB66:    t23 = ((char*)((ng2)));
    goto LAB67;

LAB68:    xsi_vlog_unsigned_bit_combine(t14, 32, t12, 32, t23, 32);
    goto LAB72;

LAB70:    memcpy(t14, t12, 8);
    goto LAB72;

}


extern void work_m_00000000000432314489_2030911003_init()
{
	static char *pe[] = {(void *)Cont_30_0,(void *)Always_32_1};
	xsi_register_didat("work_m_00000000000432314489_2030911003", "isim/fsm_tb_isim_beh.exe.sim/work/m_00000000000432314489_2030911003.didat");
	xsi_register_executes(pe);
}
