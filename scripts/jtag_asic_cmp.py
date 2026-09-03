import json, sys
t = json.load(open(sys.argv[1])); j = json.load(open(sys.argv[2]))
keys = ["timing__setup__ws__corner:nom_tt_025C_1v80","timing__hold__ws__corner:nom_tt_025C_1v80",
 "timing__setup__ws__corner:nom_ss_100C_1v60","timing__hold__ws__corner:nom_ss_100C_1v60",
 "timing__setup__ws__corner:nom_ff_n40C_1v95","timing__hold__ws__corner:nom_ff_n40C_1v95",
 "timing__setup__tns__corner:nom_ss_100C_1v60","timing__hold__tns__corner:nom_ff_n40C_1v95","timing__hold__tns__corner:nom_tt_025C_1v80",
 "route__drc_errors","klayout__drc_error__count","magic__drc_error__count","design__lvs_error__count","design__xor_difference__count",
 "antenna__violating__nets","antenna__violating__pins","route__antenna_violation__count",
 "design__instance__count__stdcell","design__instance__area__stdcell","design__instance__count__class:sequential_cell",
 "design__instance__count__class:antenna_cell","design__instance__count__hold_buffer","design__instance__count__setup_buffer",
 "design__instance__utilization","design__instance__utilization__stdcell","design__max_slew_violation__count","design__max_cap_violation__count",
 "design__max_fanout_violation__count","timing__unannotated_net__count","power__total","ir__drop__worst","ir__drop__avg",
 "clock__skew__worst_setup__corner:nom_ss_100C_1v60","design__disconnected_pin__count","synthesis__check_error__count"]
print("%-62s %14s %14s %12s" % ("metrik","teslim","jtag","fark"))
for k in keys:
    a, b = t.get(k), j.get(k)
    if isinstance(a,(int,float)) and isinstance(b,(int,float)):
        print("%-62s %14.4g %14.4g %+12.4g" % (k, a, b, b-a))
    else:
        print("%-62s %14s %14s" % (k, a, b))
