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
static const char *ng0 = "D:/My_BUAA/2017_Fall/Assignment/Computer_Organization/p6/P6_final/ALU.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {6U, 0U};
static unsigned int ng8[] = {7U, 0U};
static unsigned int ng9[] = {8U, 0U};
static unsigned int ng10[] = {9U, 0U};
static unsigned int ng11[] = {10U, 0U};



static void NetDecl_40_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 3936);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t3, 8);
    xsi_driver_vfirst_trans(t2, 0, 31U);
    t8 = (t0 + 3824);
    *((int *)t8) = 1;

LAB1:    return;
}

static void NetDecl_41_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 3256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 4000);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t3, 8);
    xsi_driver_vfirst_trans(t2, 0, 31U);
    t8 = (t0 + 3840);
    *((int *)t8) = 1;

LAB1:    return;
}

static void Cont_43_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t36[8];
    char t41[8];
    char t42[8];
    char t44[8];
    char t74[8];
    char t79[8];
    char t80[8];
    char t82[8];
    char t112[8];
    char t143[8];
    char t144[8];
    char t147[8];
    char t177[8];
    char t212[8];
    char t213[8];
    char t216[8];
    char t246[8];
    char t263[8];
    char t264[8];
    char t267[8];
    char t294[8];
    char t298[8];
    char t339[8];
    char t340[8];
    char t343[8];
    char t370[8];
    char t371[8];
    char t375[8];
    char t396[8];
    char t397[8];
    char t400[8];
    char t427[8];
    char t428[8];
    char t432[8];
    char t456[8];
    char t457[8];
    char t460[8];
    char t490[8];
    char t495[8];
    char t496[8];
    char t498[8];
    char t528[8];
    char t533[8];
    char t534[8];
    char t536[8];
    char t568[8];
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
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
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
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
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
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;
    char *t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    char *t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    char *t145;
    char *t146;
    char *t148;
    char *t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    char *t162;
    char *t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    char *t169;
    char *t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    char *t174;
    char *t175;
    char *t176;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    char *t181;
    char *t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    char *t190;
    char *t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    int t200;
    int t201;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    unsigned int t205;
    unsigned int t206;
    unsigned int t207;
    unsigned int t208;
    unsigned int t209;
    unsigned int t210;
    unsigned int t211;
    char *t214;
    char *t215;
    char *t217;
    char *t218;
    unsigned int t219;
    unsigned int t220;
    unsigned int t221;
    unsigned int t222;
    unsigned int t223;
    unsigned int t224;
    unsigned int t225;
    unsigned int t226;
    unsigned int t227;
    unsigned int t228;
    unsigned int t229;
    unsigned int t230;
    char *t231;
    char *t232;
    unsigned int t233;
    unsigned int t234;
    unsigned int t235;
    unsigned int t236;
    unsigned int t237;
    char *t238;
    char *t239;
    unsigned int t240;
    unsigned int t241;
    unsigned int t242;
    char *t243;
    char *t244;
    char *t245;
    unsigned int t247;
    unsigned int t248;
    unsigned int t249;
    char *t250;
    char *t251;
    unsigned int t252;
    unsigned int t253;
    unsigned int t254;
    unsigned int t255;
    unsigned int t256;
    unsigned int t257;
    unsigned int t258;
    unsigned int t259;
    unsigned int t260;
    unsigned int t261;
    unsigned int t262;
    char *t265;
    char *t266;
    char *t268;
    char *t269;
    unsigned int t270;
    unsigned int t271;
    unsigned int t272;
    unsigned int t273;
    unsigned int t274;
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
    char *t289;
    char *t290;
    unsigned int t291;
    unsigned int t292;
    unsigned int t293;
    char *t295;
    char *t296;
    char *t297;
    unsigned int t299;
    unsigned int t300;
    unsigned int t301;
    char *t302;
    char *t303;
    unsigned int t304;
    unsigned int t305;
    unsigned int t306;
    unsigned int t307;
    unsigned int t308;
    unsigned int t309;
    unsigned int t310;
    char *t311;
    char *t312;
    unsigned int t313;
    unsigned int t314;
    unsigned int t315;
    int t316;
    unsigned int t317;
    unsigned int t318;
    unsigned int t319;
    int t320;
    unsigned int t321;
    unsigned int t322;
    unsigned int t323;
    unsigned int t324;
    char *t325;
    char *t326;
    unsigned int t327;
    unsigned int t328;
    unsigned int t329;
    unsigned int t330;
    unsigned int t331;
    unsigned int t332;
    unsigned int t333;
    unsigned int t334;
    unsigned int t335;
    unsigned int t336;
    unsigned int t337;
    unsigned int t338;
    char *t341;
    char *t342;
    char *t344;
    char *t345;
    unsigned int t346;
    unsigned int t347;
    unsigned int t348;
    unsigned int t349;
    unsigned int t350;
    unsigned int t351;
    unsigned int t352;
    unsigned int t353;
    unsigned int t354;
    unsigned int t355;
    unsigned int t356;
    unsigned int t357;
    char *t358;
    char *t359;
    unsigned int t360;
    unsigned int t361;
    unsigned int t362;
    unsigned int t363;
    unsigned int t364;
    char *t365;
    char *t366;
    unsigned int t367;
    unsigned int t368;
    unsigned int t369;
    char *t372;
    char *t373;
    char *t374;
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
    char *t386;
    unsigned int t387;
    unsigned int t388;
    unsigned int t389;
    unsigned int t390;
    char *t391;
    unsigned int t392;
    unsigned int t393;
    unsigned int t394;
    unsigned int t395;
    char *t398;
    char *t399;
    char *t401;
    char *t402;
    unsigned int t403;
    unsigned int t404;
    unsigned int t405;
    unsigned int t406;
    unsigned int t407;
    unsigned int t408;
    unsigned int t409;
    unsigned int t410;
    unsigned int t411;
    unsigned int t412;
    unsigned int t413;
    unsigned int t414;
    char *t415;
    char *t416;
    unsigned int t417;
    unsigned int t418;
    unsigned int t419;
    unsigned int t420;
    unsigned int t421;
    char *t422;
    char *t423;
    unsigned int t424;
    unsigned int t425;
    unsigned int t426;
    char *t429;
    char *t430;
    char *t431;
    char *t433;
    char *t434;
    char *t435;
    unsigned int t436;
    unsigned int t437;
    unsigned int t438;
    unsigned int t439;
    unsigned int t440;
    char *t441;
    char *t442;
    unsigned int t443;
    unsigned int t444;
    unsigned int t445;
    char *t446;
    unsigned int t447;
    unsigned int t448;
    unsigned int t449;
    unsigned int t450;
    char *t451;
    unsigned int t452;
    unsigned int t453;
    unsigned int t454;
    unsigned int t455;
    char *t458;
    char *t459;
    char *t461;
    char *t462;
    unsigned int t463;
    unsigned int t464;
    unsigned int t465;
    unsigned int t466;
    unsigned int t467;
    unsigned int t468;
    unsigned int t469;
    unsigned int t470;
    unsigned int t471;
    unsigned int t472;
    unsigned int t473;
    unsigned int t474;
    char *t475;
    char *t476;
    unsigned int t477;
    unsigned int t478;
    unsigned int t479;
    unsigned int t480;
    unsigned int t481;
    char *t482;
    char *t483;
    unsigned int t484;
    unsigned int t485;
    unsigned int t486;
    char *t487;
    char *t488;
    char *t489;
    unsigned int t491;
    unsigned int t492;
    unsigned int t493;
    unsigned int t494;
    char *t497;
    char *t499;
    char *t500;
    unsigned int t501;
    unsigned int t502;
    unsigned int t503;
    unsigned int t504;
    unsigned int t505;
    unsigned int t506;
    unsigned int t507;
    unsigned int t508;
    unsigned int t509;
    unsigned int t510;
    unsigned int t511;
    unsigned int t512;
    char *t513;
    char *t514;
    unsigned int t515;
    unsigned int t516;
    unsigned int t517;
    unsigned int t518;
    unsigned int t519;
    char *t520;
    char *t521;
    unsigned int t522;
    unsigned int t523;
    unsigned int t524;
    char *t525;
    char *t526;
    char *t527;
    unsigned int t529;
    unsigned int t530;
    unsigned int t531;
    unsigned int t532;
    char *t535;
    char *t537;
    char *t538;
    unsigned int t539;
    unsigned int t540;
    unsigned int t541;
    unsigned int t542;
    unsigned int t543;
    unsigned int t544;
    unsigned int t545;
    unsigned int t546;
    unsigned int t547;
    unsigned int t548;
    unsigned int t549;
    unsigned int t550;
    char *t551;
    char *t552;
    unsigned int t553;
    unsigned int t554;
    unsigned int t555;
    unsigned int t556;
    unsigned int t557;
    char *t558;
    char *t559;
    unsigned int t560;
    unsigned int t561;
    unsigned int t562;
    char *t565;
    char *t566;
    char *t567;
    unsigned int t569;
    unsigned int t570;
    unsigned int t571;
    unsigned int t572;
    char *t573;
    char *t574;
    char *t575;
    char *t576;
    char *t577;
    char *t578;

LAB0:    t1 = (t0 + 3504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
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

LAB13:    t37 = *((unsigned int *)t4);
    t38 = (~(t37));
    t39 = *((unsigned int *)t29);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t41, 8);

LAB20:    t573 = (t0 + 4064);
    t574 = (t573 + 56U);
    t575 = *((char **)t574);
    t576 = (t575 + 56U);
    t577 = *((char **)t576);
    memcpy(t577, t3, 8);
    xsi_driver_vfirst_trans(t573, 0, 31);
    t578 = (t0 + 3856);
    *((int *)t578) = 1;

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

LAB12:    t33 = (t0 + 1048U);
    t34 = *((char **)t33);
    t33 = (t0 + 1208U);
    t35 = *((char **)t33);
    memset(t36, 0, 8);
    xsi_vlog_unsigned_add(t36, 32, t34, 32, t35, 32);
    goto LAB13;

LAB14:    t33 = (t0 + 1368U);
    t43 = *((char **)t33);
    t33 = ((char*)((ng2)));
    memset(t44, 0, 8);
    t45 = (t43 + 4);
    t46 = (t33 + 4);
    t47 = *((unsigned int *)t43);
    t48 = *((unsigned int *)t33);
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

LAB24:    memset(t42, 0, 8);
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

LAB28:    t67 = (t42 + 4);
    t68 = *((unsigned int *)t42);
    t69 = *((unsigned int *)t67);
    t70 = (t68 || t69);
    if (t70 > 0)
        goto LAB29;

LAB30:    t75 = *((unsigned int *)t42);
    t76 = (~(t75));
    t77 = *((unsigned int *)t67);
    t78 = (t76 || t77);
    if (t78 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t67) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t42) > 0)
        goto LAB35;

LAB36:    memcpy(t41, t79, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t36, 32, t41, 32);
    goto LAB20;

LAB18:    memcpy(t3, t36, 8);
    goto LAB20;

LAB23:    t59 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t42) = 1;
    goto LAB28;

LAB27:    t66 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t66) = 1;
    goto LAB28;

LAB29:    t71 = (t0 + 1048U);
    t72 = *((char **)t71);
    t71 = (t0 + 1208U);
    t73 = *((char **)t71);
    memset(t74, 0, 8);
    xsi_vlog_unsigned_minus(t74, 32, t72, 32, t73, 32);
    goto LAB30;

LAB31:    t71 = (t0 + 1368U);
    t81 = *((char **)t71);
    t71 = ((char*)((ng3)));
    memset(t82, 0, 8);
    t83 = (t81 + 4);
    t84 = (t71 + 4);
    t85 = *((unsigned int *)t81);
    t86 = *((unsigned int *)t71);
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

LAB41:    memset(t80, 0, 8);
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

LAB45:    t105 = (t80 + 4);
    t106 = *((unsigned int *)t80);
    t107 = *((unsigned int *)t105);
    t108 = (t106 || t107);
    if (t108 > 0)
        goto LAB46;

LAB47:    t139 = *((unsigned int *)t80);
    t140 = (~(t139));
    t141 = *((unsigned int *)t105);
    t142 = (t140 || t141);
    if (t142 > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t105) > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t80) > 0)
        goto LAB52;

LAB53:    memcpy(t79, t143, 8);

LAB54:    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t41, 32, t74, 32, t79, 32);
    goto LAB37;

LAB35:    memcpy(t41, t74, 8);
    goto LAB37;

LAB40:    t97 = (t82 + 4);
    *((unsigned int *)t82) = 1;
    *((unsigned int *)t97) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t80) = 1;
    goto LAB45;

LAB44:    t104 = (t80 + 4);
    *((unsigned int *)t80) = 1;
    *((unsigned int *)t104) = 1;
    goto LAB45;

LAB46:    t109 = (t0 + 1048U);
    t110 = *((char **)t109);
    t109 = (t0 + 1208U);
    t111 = *((char **)t109);
    t113 = *((unsigned int *)t110);
    t114 = *((unsigned int *)t111);
    t115 = (t113 | t114);
    *((unsigned int *)t112) = t115;
    t109 = (t110 + 4);
    t116 = (t111 + 4);
    t117 = (t112 + 4);
    t118 = *((unsigned int *)t109);
    t119 = *((unsigned int *)t116);
    t120 = (t118 | t119);
    *((unsigned int *)t117) = t120;
    t121 = *((unsigned int *)t117);
    t122 = (t121 != 0);
    if (t122 == 1)
        goto LAB55;

LAB56:
LAB57:    goto LAB47;

LAB48:    t145 = (t0 + 1368U);
    t146 = *((char **)t145);
    t145 = ((char*)((ng4)));
    memset(t147, 0, 8);
    t148 = (t146 + 4);
    t149 = (t145 + 4);
    t150 = *((unsigned int *)t146);
    t151 = *((unsigned int *)t145);
    t152 = (t150 ^ t151);
    t153 = *((unsigned int *)t148);
    t154 = *((unsigned int *)t149);
    t155 = (t153 ^ t154);
    t156 = (t152 | t155);
    t157 = *((unsigned int *)t148);
    t158 = *((unsigned int *)t149);
    t159 = (t157 | t158);
    t160 = (~(t159));
    t161 = (t156 & t160);
    if (t161 != 0)
        goto LAB61;

LAB58:    if (t159 != 0)
        goto LAB60;

LAB59:    *((unsigned int *)t147) = 1;

LAB61:    memset(t144, 0, 8);
    t163 = (t147 + 4);
    t164 = *((unsigned int *)t163);
    t165 = (~(t164));
    t166 = *((unsigned int *)t147);
    t167 = (t166 & t165);
    t168 = (t167 & 1U);
    if (t168 != 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t163) != 0)
        goto LAB64;

LAB65:    t170 = (t144 + 4);
    t171 = *((unsigned int *)t144);
    t172 = *((unsigned int *)t170);
    t173 = (t171 || t172);
    if (t173 > 0)
        goto LAB66;

LAB67:    t208 = *((unsigned int *)t144);
    t209 = (~(t208));
    t210 = *((unsigned int *)t170);
    t211 = (t209 || t210);
    if (t211 > 0)
        goto LAB68;

LAB69:    if (*((unsigned int *)t170) > 0)
        goto LAB70;

LAB71:    if (*((unsigned int *)t144) > 0)
        goto LAB72;

LAB73:    memcpy(t143, t212, 8);

LAB74:    goto LAB49;

LAB50:    xsi_vlog_unsigned_bit_combine(t79, 32, t112, 32, t143, 32);
    goto LAB54;

LAB52:    memcpy(t79, t112, 8);
    goto LAB54;

LAB55:    t123 = *((unsigned int *)t112);
    t124 = *((unsigned int *)t117);
    *((unsigned int *)t112) = (t123 | t124);
    t125 = (t110 + 4);
    t126 = (t111 + 4);
    t127 = *((unsigned int *)t125);
    t128 = (~(t127));
    t129 = *((unsigned int *)t110);
    t130 = (t129 & t128);
    t131 = *((unsigned int *)t126);
    t132 = (~(t131));
    t133 = *((unsigned int *)t111);
    t134 = (t133 & t132);
    t135 = (~(t130));
    t136 = (~(t134));
    t137 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t137 & t135);
    t138 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t138 & t136);
    goto LAB57;

LAB60:    t162 = (t147 + 4);
    *((unsigned int *)t147) = 1;
    *((unsigned int *)t162) = 1;
    goto LAB61;

LAB62:    *((unsigned int *)t144) = 1;
    goto LAB65;

LAB64:    t169 = (t144 + 4);
    *((unsigned int *)t144) = 1;
    *((unsigned int *)t169) = 1;
    goto LAB65;

LAB66:    t174 = (t0 + 1048U);
    t175 = *((char **)t174);
    t174 = (t0 + 1208U);
    t176 = *((char **)t174);
    t178 = *((unsigned int *)t175);
    t179 = *((unsigned int *)t176);
    t180 = (t178 & t179);
    *((unsigned int *)t177) = t180;
    t174 = (t175 + 4);
    t181 = (t176 + 4);
    t182 = (t177 + 4);
    t183 = *((unsigned int *)t174);
    t184 = *((unsigned int *)t181);
    t185 = (t183 | t184);
    *((unsigned int *)t182) = t185;
    t186 = *((unsigned int *)t182);
    t187 = (t186 != 0);
    if (t187 == 1)
        goto LAB75;

LAB76:
LAB77:    goto LAB67;

LAB68:    t214 = (t0 + 1368U);
    t215 = *((char **)t214);
    t214 = ((char*)((ng5)));
    memset(t216, 0, 8);
    t217 = (t215 + 4);
    t218 = (t214 + 4);
    t219 = *((unsigned int *)t215);
    t220 = *((unsigned int *)t214);
    t221 = (t219 ^ t220);
    t222 = *((unsigned int *)t217);
    t223 = *((unsigned int *)t218);
    t224 = (t222 ^ t223);
    t225 = (t221 | t224);
    t226 = *((unsigned int *)t217);
    t227 = *((unsigned int *)t218);
    t228 = (t226 | t227);
    t229 = (~(t228));
    t230 = (t225 & t229);
    if (t230 != 0)
        goto LAB81;

LAB78:    if (t228 != 0)
        goto LAB80;

LAB79:    *((unsigned int *)t216) = 1;

LAB81:    memset(t213, 0, 8);
    t232 = (t216 + 4);
    t233 = *((unsigned int *)t232);
    t234 = (~(t233));
    t235 = *((unsigned int *)t216);
    t236 = (t235 & t234);
    t237 = (t236 & 1U);
    if (t237 != 0)
        goto LAB82;

LAB83:    if (*((unsigned int *)t232) != 0)
        goto LAB84;

LAB85:    t239 = (t213 + 4);
    t240 = *((unsigned int *)t213);
    t241 = *((unsigned int *)t239);
    t242 = (t240 || t241);
    if (t242 > 0)
        goto LAB86;

LAB87:    t259 = *((unsigned int *)t213);
    t260 = (~(t259));
    t261 = *((unsigned int *)t239);
    t262 = (t260 || t261);
    if (t262 > 0)
        goto LAB88;

LAB89:    if (*((unsigned int *)t239) > 0)
        goto LAB90;

LAB91:    if (*((unsigned int *)t213) > 0)
        goto LAB92;

LAB93:    memcpy(t212, t263, 8);

LAB94:    goto LAB69;

LAB70:    xsi_vlog_unsigned_bit_combine(t143, 32, t177, 32, t212, 32);
    goto LAB74;

LAB72:    memcpy(t143, t177, 8);
    goto LAB74;

LAB75:    t188 = *((unsigned int *)t177);
    t189 = *((unsigned int *)t182);
    *((unsigned int *)t177) = (t188 | t189);
    t190 = (t175 + 4);
    t191 = (t176 + 4);
    t192 = *((unsigned int *)t175);
    t193 = (~(t192));
    t194 = *((unsigned int *)t190);
    t195 = (~(t194));
    t196 = *((unsigned int *)t176);
    t197 = (~(t196));
    t198 = *((unsigned int *)t191);
    t199 = (~(t198));
    t200 = (t193 & t195);
    t201 = (t197 & t199);
    t202 = (~(t200));
    t203 = (~(t201));
    t204 = *((unsigned int *)t182);
    *((unsigned int *)t182) = (t204 & t202);
    t205 = *((unsigned int *)t182);
    *((unsigned int *)t182) = (t205 & t203);
    t206 = *((unsigned int *)t177);
    *((unsigned int *)t177) = (t206 & t202);
    t207 = *((unsigned int *)t177);
    *((unsigned int *)t177) = (t207 & t203);
    goto LAB77;

LAB80:    t231 = (t216 + 4);
    *((unsigned int *)t216) = 1;
    *((unsigned int *)t231) = 1;
    goto LAB81;

LAB82:    *((unsigned int *)t213) = 1;
    goto LAB85;

LAB84:    t238 = (t213 + 4);
    *((unsigned int *)t213) = 1;
    *((unsigned int *)t238) = 1;
    goto LAB85;

LAB86:    t243 = (t0 + 1048U);
    t244 = *((char **)t243);
    t243 = (t0 + 1208U);
    t245 = *((char **)t243);
    t247 = *((unsigned int *)t244);
    t248 = *((unsigned int *)t245);
    t249 = (t247 ^ t248);
    *((unsigned int *)t246) = t249;
    t243 = (t244 + 4);
    t250 = (t245 + 4);
    t251 = (t246 + 4);
    t252 = *((unsigned int *)t243);
    t253 = *((unsigned int *)t250);
    t254 = (t252 | t253);
    *((unsigned int *)t251) = t254;
    t255 = *((unsigned int *)t251);
    t256 = (t255 != 0);
    if (t256 == 1)
        goto LAB95;

LAB96:
LAB97:    goto LAB87;

LAB88:    t265 = (t0 + 1368U);
    t266 = *((char **)t265);
    t265 = ((char*)((ng6)));
    memset(t267, 0, 8);
    t268 = (t266 + 4);
    t269 = (t265 + 4);
    t270 = *((unsigned int *)t266);
    t271 = *((unsigned int *)t265);
    t272 = (t270 ^ t271);
    t273 = *((unsigned int *)t268);
    t274 = *((unsigned int *)t269);
    t275 = (t273 ^ t274);
    t276 = (t272 | t275);
    t277 = *((unsigned int *)t268);
    t278 = *((unsigned int *)t269);
    t279 = (t277 | t278);
    t280 = (~(t279));
    t281 = (t276 & t280);
    if (t281 != 0)
        goto LAB101;

LAB98:    if (t279 != 0)
        goto LAB100;

LAB99:    *((unsigned int *)t267) = 1;

LAB101:    memset(t264, 0, 8);
    t283 = (t267 + 4);
    t284 = *((unsigned int *)t283);
    t285 = (~(t284));
    t286 = *((unsigned int *)t267);
    t287 = (t286 & t285);
    t288 = (t287 & 1U);
    if (t288 != 0)
        goto LAB102;

LAB103:    if (*((unsigned int *)t283) != 0)
        goto LAB104;

LAB105:    t290 = (t264 + 4);
    t291 = *((unsigned int *)t264);
    t292 = *((unsigned int *)t290);
    t293 = (t291 || t292);
    if (t293 > 0)
        goto LAB106;

LAB107:    t335 = *((unsigned int *)t264);
    t336 = (~(t335));
    t337 = *((unsigned int *)t290);
    t338 = (t336 || t337);
    if (t338 > 0)
        goto LAB108;

LAB109:    if (*((unsigned int *)t290) > 0)
        goto LAB110;

LAB111:    if (*((unsigned int *)t264) > 0)
        goto LAB112;

LAB113:    memcpy(t263, t339, 8);

LAB114:    goto LAB89;

LAB90:    xsi_vlog_unsigned_bit_combine(t212, 32, t246, 32, t263, 32);
    goto LAB94;

LAB92:    memcpy(t212, t246, 8);
    goto LAB94;

LAB95:    t257 = *((unsigned int *)t246);
    t258 = *((unsigned int *)t251);
    *((unsigned int *)t246) = (t257 | t258);
    goto LAB97;

LAB100:    t282 = (t267 + 4);
    *((unsigned int *)t267) = 1;
    *((unsigned int *)t282) = 1;
    goto LAB101;

LAB102:    *((unsigned int *)t264) = 1;
    goto LAB105;

LAB104:    t289 = (t264 + 4);
    *((unsigned int *)t264) = 1;
    *((unsigned int *)t289) = 1;
    goto LAB105;

LAB106:    t295 = (t0 + 1048U);
    t296 = *((char **)t295);
    t295 = (t0 + 1208U);
    t297 = *((char **)t295);
    t299 = *((unsigned int *)t296);
    t300 = *((unsigned int *)t297);
    t301 = (t299 | t300);
    *((unsigned int *)t298) = t301;
    t295 = (t296 + 4);
    t302 = (t297 + 4);
    t303 = (t298 + 4);
    t304 = *((unsigned int *)t295);
    t305 = *((unsigned int *)t302);
    t306 = (t304 | t305);
    *((unsigned int *)t303) = t306;
    t307 = *((unsigned int *)t303);
    t308 = (t307 != 0);
    if (t308 == 1)
        goto LAB115;

LAB116:
LAB117:    memset(t294, 0, 8);
    t325 = (t294 + 4);
    t326 = (t298 + 4);
    t327 = *((unsigned int *)t298);
    t328 = (~(t327));
    *((unsigned int *)t294) = t328;
    *((unsigned int *)t325) = 0;
    if (*((unsigned int *)t326) != 0)
        goto LAB119;

LAB118:    t333 = *((unsigned int *)t294);
    *((unsigned int *)t294) = (t333 & 4294967295U);
    t334 = *((unsigned int *)t325);
    *((unsigned int *)t325) = (t334 & 4294967295U);
    goto LAB107;

LAB108:    t341 = (t0 + 1368U);
    t342 = *((char **)t341);
    t341 = ((char*)((ng7)));
    memset(t343, 0, 8);
    t344 = (t342 + 4);
    t345 = (t341 + 4);
    t346 = *((unsigned int *)t342);
    t347 = *((unsigned int *)t341);
    t348 = (t346 ^ t347);
    t349 = *((unsigned int *)t344);
    t350 = *((unsigned int *)t345);
    t351 = (t349 ^ t350);
    t352 = (t348 | t351);
    t353 = *((unsigned int *)t344);
    t354 = *((unsigned int *)t345);
    t355 = (t353 | t354);
    t356 = (~(t355));
    t357 = (t352 & t356);
    if (t357 != 0)
        goto LAB123;

LAB120:    if (t355 != 0)
        goto LAB122;

LAB121:    *((unsigned int *)t343) = 1;

LAB123:    memset(t340, 0, 8);
    t359 = (t343 + 4);
    t360 = *((unsigned int *)t359);
    t361 = (~(t360));
    t362 = *((unsigned int *)t343);
    t363 = (t362 & t361);
    t364 = (t363 & 1U);
    if (t364 != 0)
        goto LAB124;

LAB125:    if (*((unsigned int *)t359) != 0)
        goto LAB126;

LAB127:    t366 = (t340 + 4);
    t367 = *((unsigned int *)t340);
    t368 = *((unsigned int *)t366);
    t369 = (t367 || t368);
    if (t369 > 0)
        goto LAB128;

LAB129:    t392 = *((unsigned int *)t340);
    t393 = (~(t392));
    t394 = *((unsigned int *)t366);
    t395 = (t393 || t394);
    if (t395 > 0)
        goto LAB130;

LAB131:    if (*((unsigned int *)t366) > 0)
        goto LAB132;

LAB133:    if (*((unsigned int *)t340) > 0)
        goto LAB134;

LAB135:    memcpy(t339, t396, 8);

LAB136:    goto LAB109;

LAB110:    xsi_vlog_unsigned_bit_combine(t263, 32, t294, 32, t339, 32);
    goto LAB114;

LAB112:    memcpy(t263, t294, 8);
    goto LAB114;

LAB115:    t309 = *((unsigned int *)t298);
    t310 = *((unsigned int *)t303);
    *((unsigned int *)t298) = (t309 | t310);
    t311 = (t296 + 4);
    t312 = (t297 + 4);
    t313 = *((unsigned int *)t311);
    t314 = (~(t313));
    t315 = *((unsigned int *)t296);
    t316 = (t315 & t314);
    t317 = *((unsigned int *)t312);
    t318 = (~(t317));
    t319 = *((unsigned int *)t297);
    t320 = (t319 & t318);
    t321 = (~(t316));
    t322 = (~(t320));
    t323 = *((unsigned int *)t303);
    *((unsigned int *)t303) = (t323 & t321);
    t324 = *((unsigned int *)t303);
    *((unsigned int *)t303) = (t324 & t322);
    goto LAB117;

LAB119:    t329 = *((unsigned int *)t294);
    t330 = *((unsigned int *)t326);
    *((unsigned int *)t294) = (t329 | t330);
    t331 = *((unsigned int *)t325);
    t332 = *((unsigned int *)t326);
    *((unsigned int *)t325) = (t331 | t332);
    goto LAB118;

LAB122:    t358 = (t343 + 4);
    *((unsigned int *)t343) = 1;
    *((unsigned int *)t358) = 1;
    goto LAB123;

LAB124:    *((unsigned int *)t340) = 1;
    goto LAB127;

LAB126:    t365 = (t340 + 4);
    *((unsigned int *)t340) = 1;
    *((unsigned int *)t365) = 1;
    goto LAB127;

LAB128:    t372 = (t0 + 1688U);
    t373 = *((char **)t372);
    t372 = (t0 + 1848U);
    t374 = *((char **)t372);
    memset(t375, 0, 8);
    xsi_vlog_signed_less(t375, 32, t373, 32, t374, 32);
    memset(t371, 0, 8);
    t372 = (t375 + 4);
    t376 = *((unsigned int *)t372);
    t377 = (~(t376));
    t378 = *((unsigned int *)t375);
    t379 = (t378 & t377);
    t380 = (t379 & 1U);
    if (t380 != 0)
        goto LAB137;

LAB138:    if (*((unsigned int *)t372) != 0)
        goto LAB139;

LAB140:    t382 = (t371 + 4);
    t383 = *((unsigned int *)t371);
    t384 = *((unsigned int *)t382);
    t385 = (t383 || t384);
    if (t385 > 0)
        goto LAB141;

LAB142:    t387 = *((unsigned int *)t371);
    t388 = (~(t387));
    t389 = *((unsigned int *)t382);
    t390 = (t388 || t389);
    if (t390 > 0)
        goto LAB143;

LAB144:    if (*((unsigned int *)t382) > 0)
        goto LAB145;

LAB146:    if (*((unsigned int *)t371) > 0)
        goto LAB147;

LAB148:    memcpy(t370, t391, 8);

LAB149:    goto LAB129;

LAB130:    t398 = (t0 + 1368U);
    t399 = *((char **)t398);
    t398 = ((char*)((ng8)));
    memset(t400, 0, 8);
    t401 = (t399 + 4);
    t402 = (t398 + 4);
    t403 = *((unsigned int *)t399);
    t404 = *((unsigned int *)t398);
    t405 = (t403 ^ t404);
    t406 = *((unsigned int *)t401);
    t407 = *((unsigned int *)t402);
    t408 = (t406 ^ t407);
    t409 = (t405 | t408);
    t410 = *((unsigned int *)t401);
    t411 = *((unsigned int *)t402);
    t412 = (t410 | t411);
    t413 = (~(t412));
    t414 = (t409 & t413);
    if (t414 != 0)
        goto LAB153;

LAB150:    if (t412 != 0)
        goto LAB152;

LAB151:    *((unsigned int *)t400) = 1;

LAB153:    memset(t397, 0, 8);
    t416 = (t400 + 4);
    t417 = *((unsigned int *)t416);
    t418 = (~(t417));
    t419 = *((unsigned int *)t400);
    t420 = (t419 & t418);
    t421 = (t420 & 1U);
    if (t421 != 0)
        goto LAB154;

LAB155:    if (*((unsigned int *)t416) != 0)
        goto LAB156;

LAB157:    t423 = (t397 + 4);
    t424 = *((unsigned int *)t397);
    t425 = *((unsigned int *)t423);
    t426 = (t424 || t425);
    if (t426 > 0)
        goto LAB158;

LAB159:    t452 = *((unsigned int *)t397);
    t453 = (~(t452));
    t454 = *((unsigned int *)t423);
    t455 = (t453 || t454);
    if (t455 > 0)
        goto LAB160;

LAB161:    if (*((unsigned int *)t423) > 0)
        goto LAB162;

LAB163:    if (*((unsigned int *)t397) > 0)
        goto LAB164;

LAB165:    memcpy(t396, t456, 8);

LAB166:    goto LAB131;

LAB132:    xsi_vlog_unsigned_bit_combine(t339, 32, t370, 32, t396, 32);
    goto LAB136;

LAB134:    memcpy(t339, t370, 8);
    goto LAB136;

LAB137:    *((unsigned int *)t371) = 1;
    goto LAB140;

LAB139:    t381 = (t371 + 4);
    *((unsigned int *)t371) = 1;
    *((unsigned int *)t381) = 1;
    goto LAB140;

LAB141:    t386 = ((char*)((ng2)));
    goto LAB142;

LAB143:    t391 = ((char*)((ng1)));
    goto LAB144;

LAB145:    xsi_vlog_unsigned_bit_combine(t370, 32, t386, 32, t391, 32);
    goto LAB149;

LAB147:    memcpy(t370, t386, 8);
    goto LAB149;

LAB152:    t415 = (t400 + 4);
    *((unsigned int *)t400) = 1;
    *((unsigned int *)t415) = 1;
    goto LAB153;

LAB154:    *((unsigned int *)t397) = 1;
    goto LAB157;

LAB156:    t422 = (t397 + 4);
    *((unsigned int *)t397) = 1;
    *((unsigned int *)t422) = 1;
    goto LAB157;

LAB158:    t429 = (t0 + 1048U);
    t430 = *((char **)t429);
    t429 = (t0 + 1208U);
    t431 = *((char **)t429);
    memset(t432, 0, 8);
    t429 = (t430 + 4);
    if (*((unsigned int *)t429) != 0)
        goto LAB168;

LAB167:    t433 = (t431 + 4);
    if (*((unsigned int *)t433) != 0)
        goto LAB168;

LAB171:    if (*((unsigned int *)t430) < *((unsigned int *)t431))
        goto LAB169;

LAB170:    memset(t428, 0, 8);
    t435 = (t432 + 4);
    t436 = *((unsigned int *)t435);
    t437 = (~(t436));
    t438 = *((unsigned int *)t432);
    t439 = (t438 & t437);
    t440 = (t439 & 1U);
    if (t440 != 0)
        goto LAB172;

LAB173:    if (*((unsigned int *)t435) != 0)
        goto LAB174;

LAB175:    t442 = (t428 + 4);
    t443 = *((unsigned int *)t428);
    t444 = *((unsigned int *)t442);
    t445 = (t443 || t444);
    if (t445 > 0)
        goto LAB176;

LAB177:    t447 = *((unsigned int *)t428);
    t448 = (~(t447));
    t449 = *((unsigned int *)t442);
    t450 = (t448 || t449);
    if (t450 > 0)
        goto LAB178;

LAB179:    if (*((unsigned int *)t442) > 0)
        goto LAB180;

LAB181:    if (*((unsigned int *)t428) > 0)
        goto LAB182;

LAB183:    memcpy(t427, t451, 8);

LAB184:    goto LAB159;

LAB160:    t458 = (t0 + 1368U);
    t459 = *((char **)t458);
    t458 = ((char*)((ng9)));
    memset(t460, 0, 8);
    t461 = (t459 + 4);
    t462 = (t458 + 4);
    t463 = *((unsigned int *)t459);
    t464 = *((unsigned int *)t458);
    t465 = (t463 ^ t464);
    t466 = *((unsigned int *)t461);
    t467 = *((unsigned int *)t462);
    t468 = (t466 ^ t467);
    t469 = (t465 | t468);
    t470 = *((unsigned int *)t461);
    t471 = *((unsigned int *)t462);
    t472 = (t470 | t471);
    t473 = (~(t472));
    t474 = (t469 & t473);
    if (t474 != 0)
        goto LAB188;

LAB185:    if (t472 != 0)
        goto LAB187;

LAB186:    *((unsigned int *)t460) = 1;

LAB188:    memset(t457, 0, 8);
    t476 = (t460 + 4);
    t477 = *((unsigned int *)t476);
    t478 = (~(t477));
    t479 = *((unsigned int *)t460);
    t480 = (t479 & t478);
    t481 = (t480 & 1U);
    if (t481 != 0)
        goto LAB189;

LAB190:    if (*((unsigned int *)t476) != 0)
        goto LAB191;

LAB192:    t483 = (t457 + 4);
    t484 = *((unsigned int *)t457);
    t485 = *((unsigned int *)t483);
    t486 = (t484 || t485);
    if (t486 > 0)
        goto LAB193;

LAB194:    t491 = *((unsigned int *)t457);
    t492 = (~(t491));
    t493 = *((unsigned int *)t483);
    t494 = (t492 || t493);
    if (t494 > 0)
        goto LAB195;

LAB196:    if (*((unsigned int *)t483) > 0)
        goto LAB197;

LAB198:    if (*((unsigned int *)t457) > 0)
        goto LAB199;

LAB200:    memcpy(t456, t495, 8);

LAB201:    goto LAB161;

LAB162:    xsi_vlog_unsigned_bit_combine(t396, 32, t427, 32, t456, 32);
    goto LAB166;

LAB164:    memcpy(t396, t427, 8);
    goto LAB166;

LAB168:    t434 = (t432 + 4);
    *((unsigned int *)t432) = 1;
    *((unsigned int *)t434) = 1;
    goto LAB170;

LAB169:    *((unsigned int *)t432) = 1;
    goto LAB170;

LAB172:    *((unsigned int *)t428) = 1;
    goto LAB175;

LAB174:    t441 = (t428 + 4);
    *((unsigned int *)t428) = 1;
    *((unsigned int *)t441) = 1;
    goto LAB175;

LAB176:    t446 = ((char*)((ng2)));
    goto LAB177;

LAB178:    t451 = ((char*)((ng1)));
    goto LAB179;

LAB180:    xsi_vlog_unsigned_bit_combine(t427, 32, t446, 32, t451, 32);
    goto LAB184;

LAB182:    memcpy(t427, t446, 8);
    goto LAB184;

LAB187:    t475 = (t460 + 4);
    *((unsigned int *)t460) = 1;
    *((unsigned int *)t475) = 1;
    goto LAB188;

LAB189:    *((unsigned int *)t457) = 1;
    goto LAB192;

LAB191:    t482 = (t457 + 4);
    *((unsigned int *)t457) = 1;
    *((unsigned int *)t482) = 1;
    goto LAB192;

LAB193:    t487 = (t0 + 1048U);
    t488 = *((char **)t487);
    t487 = (t0 + 1208U);
    t489 = *((char **)t487);
    memset(t490, 0, 8);
    xsi_vlog_unsigned_lshift(t490, 32, t488, 32, t489, 32);
    goto LAB194;

LAB195:    t487 = (t0 + 1368U);
    t497 = *((char **)t487);
    t487 = ((char*)((ng10)));
    memset(t498, 0, 8);
    t499 = (t497 + 4);
    t500 = (t487 + 4);
    t501 = *((unsigned int *)t497);
    t502 = *((unsigned int *)t487);
    t503 = (t501 ^ t502);
    t504 = *((unsigned int *)t499);
    t505 = *((unsigned int *)t500);
    t506 = (t504 ^ t505);
    t507 = (t503 | t506);
    t508 = *((unsigned int *)t499);
    t509 = *((unsigned int *)t500);
    t510 = (t508 | t509);
    t511 = (~(t510));
    t512 = (t507 & t511);
    if (t512 != 0)
        goto LAB205;

LAB202:    if (t510 != 0)
        goto LAB204;

LAB203:    *((unsigned int *)t498) = 1;

LAB205:    memset(t496, 0, 8);
    t514 = (t498 + 4);
    t515 = *((unsigned int *)t514);
    t516 = (~(t515));
    t517 = *((unsigned int *)t498);
    t518 = (t517 & t516);
    t519 = (t518 & 1U);
    if (t519 != 0)
        goto LAB206;

LAB207:    if (*((unsigned int *)t514) != 0)
        goto LAB208;

LAB209:    t521 = (t496 + 4);
    t522 = *((unsigned int *)t496);
    t523 = *((unsigned int *)t521);
    t524 = (t522 || t523);
    if (t524 > 0)
        goto LAB210;

LAB211:    t529 = *((unsigned int *)t496);
    t530 = (~(t529));
    t531 = *((unsigned int *)t521);
    t532 = (t530 || t531);
    if (t532 > 0)
        goto LAB212;

LAB213:    if (*((unsigned int *)t521) > 0)
        goto LAB214;

LAB215:    if (*((unsigned int *)t496) > 0)
        goto LAB216;

LAB217:    memcpy(t495, t533, 8);

LAB218:    goto LAB196;

LAB197:    xsi_vlog_unsigned_bit_combine(t456, 32, t490, 32, t495, 32);
    goto LAB201;

LAB199:    memcpy(t456, t490, 8);
    goto LAB201;

LAB204:    t513 = (t498 + 4);
    *((unsigned int *)t498) = 1;
    *((unsigned int *)t513) = 1;
    goto LAB205;

LAB206:    *((unsigned int *)t496) = 1;
    goto LAB209;

LAB208:    t520 = (t496 + 4);
    *((unsigned int *)t496) = 1;
    *((unsigned int *)t520) = 1;
    goto LAB209;

LAB210:    t525 = (t0 + 1048U);
    t526 = *((char **)t525);
    t525 = (t0 + 1208U);
    t527 = *((char **)t525);
    memset(t528, 0, 8);
    xsi_vlog_unsigned_rshift(t528, 32, t526, 32, t527, 32);
    goto LAB211;

LAB212:    t525 = (t0 + 1368U);
    t535 = *((char **)t525);
    t525 = ((char*)((ng11)));
    memset(t536, 0, 8);
    t537 = (t535 + 4);
    t538 = (t525 + 4);
    t539 = *((unsigned int *)t535);
    t540 = *((unsigned int *)t525);
    t541 = (t539 ^ t540);
    t542 = *((unsigned int *)t537);
    t543 = *((unsigned int *)t538);
    t544 = (t542 ^ t543);
    t545 = (t541 | t544);
    t546 = *((unsigned int *)t537);
    t547 = *((unsigned int *)t538);
    t548 = (t546 | t547);
    t549 = (~(t548));
    t550 = (t545 & t549);
    if (t550 != 0)
        goto LAB222;

LAB219:    if (t548 != 0)
        goto LAB221;

LAB220:    *((unsigned int *)t536) = 1;

LAB222:    memset(t534, 0, 8);
    t552 = (t536 + 4);
    t553 = *((unsigned int *)t552);
    t554 = (~(t553));
    t555 = *((unsigned int *)t536);
    t556 = (t555 & t554);
    t557 = (t556 & 1U);
    if (t557 != 0)
        goto LAB223;

LAB224:    if (*((unsigned int *)t552) != 0)
        goto LAB225;

LAB226:    t559 = (t534 + 4);
    t560 = *((unsigned int *)t534);
    t561 = *((unsigned int *)t559);
    t562 = (t560 || t561);
    if (t562 > 0)
        goto LAB227;

LAB228:    t569 = *((unsigned int *)t534);
    t570 = (~(t569));
    t571 = *((unsigned int *)t559);
    t572 = (t570 || t571);
    if (t572 > 0)
        goto LAB229;

LAB230:    if (*((unsigned int *)t559) > 0)
        goto LAB231;

LAB232:    if (*((unsigned int *)t534) > 0)
        goto LAB233;

LAB234:    memcpy(t533, t565, 8);

LAB235:    goto LAB213;

LAB214:    xsi_vlog_unsigned_bit_combine(t495, 32, t528, 32, t533, 32);
    goto LAB218;

LAB216:    memcpy(t495, t528, 8);
    goto LAB218;

LAB221:    t551 = (t536 + 4);
    *((unsigned int *)t536) = 1;
    *((unsigned int *)t551) = 1;
    goto LAB222;

LAB223:    *((unsigned int *)t534) = 1;
    goto LAB226;

LAB225:    t558 = (t534 + 4);
    *((unsigned int *)t534) = 1;
    *((unsigned int *)t558) = 1;
    goto LAB226;

LAB227:    t565 = (t0 + 1048U);
    t566 = *((char **)t565);
    t565 = (t0 + 1208U);
    t567 = *((char **)t565);
    memset(t568, 0, 8);
    xsi_vlog_signed_arith_rshift(t568, 32, t566, 32, t567, 32);
    goto LAB228;

LAB229:    t565 = ((char*)((ng1)));
    goto LAB230;

LAB231:    xsi_vlog_unsigned_bit_combine(t533, 32, t568, 32, t565, 32);
    goto LAB235;

LAB233:    memcpy(t533, t568, 8);
    goto LAB235;

}


extern void work_m_00000000000859107521_0886308060_init()
{
	static char *pe[] = {(void *)NetDecl_40_0,(void *)NetDecl_41_1,(void *)Cont_43_2};
	xsi_register_didat("work_m_00000000000859107521_0886308060", "isim/mips_tb_isim_beh.exe.sim/work/m_00000000000859107521_0886308060.didat");
	xsi_register_executes(pe);
}
