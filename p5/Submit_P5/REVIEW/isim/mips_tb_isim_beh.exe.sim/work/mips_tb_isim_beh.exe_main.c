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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000000079941273_2229158355_init();
    work_m_00000000002516898596_1733832700_init();
    work_m_00000000000152311791_0467708899_init();
    work_m_00000000002551386103_1323371864_init();
    work_m_00000000001629819351_1213024400_init();
    work_m_00000000002497180696_1785967555_init();
    work_m_00000000004259931468_4091113797_init();
    work_m_00000000001561651895_1579609468_init();
    work_m_00000000000556673240_2320839585_init();
    work_m_00000000000011148364_0757879789_init();
    work_m_00000000003082137102_0886308060_init();
    work_m_00000000002907659041_2924402094_init();
    work_m_00000000003079039439_2081794187_init();
    work_m_00000000001410677492_3877310806_init();
    work_m_00000000002047498008_0258635663_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002047498008_0258635663");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}