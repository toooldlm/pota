const float out_x =  + 147.842 *dx + 0.549491 *x + -0.103186 *x*lambda + -45.4974 *dx*lambda + 1.44752 *y*dx*dy + 0.0262441 *x*y*dy + 0.0663009 *x*lens_ipow(lambda, 2) + -14.243 *dx*lens_ipow(dy, 2) + 0.000188283 *x*lens_ipow(y, 2) + 0.000217267 *lens_ipow(x, 3) + 0.540053 *x*lens_ipow(dy, 2) + 0.0157306 *lens_ipow(y, 2)*dx + 66.7136 *dx*lens_ipow(lambda, 2) + 18.5134 *x*lens_ipow(dx, 2)*lambda + -34.6687 *dx*lens_ipow(lambda, 3) + 0.31381 *lens_ipow(x, 2)*dx*lambda + -111.474 *lens_ipow(dx, 3)*lens_ipow(lambda, 2) + -40.0336 *x*lens_ipow(dx, 2)*lens_ipow(lambda, 2) + 0.000149611 *lens_ipow(x, 3)*lens_ipow(dy, 2) + -0.620631 *lens_ipow(x, 2)*dx*lens_ipow(lambda, 2) + 0.000182623 *lens_ipow(x, 3)*lens_ipow(dx, 2) + 112.026 *lens_ipow(dx, 3)*lens_ipow(dy, 2) + 26.4292 *x*lens_ipow(dx, 2)*lens_ipow(lambda, 3) + 0.000279274 *x*lens_ipow(y, 2)*lens_ipow(dx, 2)*lambda + 0.39161 *lens_ipow(x, 2)*dx*lens_ipow(lambda, 3) + -7.3669e-11 *lens_ipow(x, 5)*lens_ipow(y, 2) + 588.508 *lens_ipow(dx, 7) + 151.827 *lens_ipow(dx, 3)*lens_ipow(lambda, 5);
const float out_y =  + 0.28577 *y + 101.636 *dy + 2.52522 *dy*lambda + 1.07359 *y*lens_ipow(dx, 2) + 0.0157958 *lens_ipow(y, 2)*dy + 1.23895 *x*dx*dy + 0.0289015 *x*y*dx + 0.000167325 *lens_ipow(x, 2)*y + -1.64973 *dy*lens_ipow(lambda, 2) + 9.03013e-05 *lens_ipow(y, 3) + 0.0109587 *lens_ipow(x, 2)*dy + -63.6032 *lens_ipow(dy, 3) + 109.057 *lens_ipow(dx, 2)*lens_ipow(dy, 3) + 9.53403e-05 *lens_ipow(y, 4)*dy + 2293.25 *lens_ipow(dy, 5) + -0.0144726 *x*y*dx*lens_ipow(dy, 2) + 1.9289 *lens_ipow(y, 2)*lens_ipow(dy, 3) + 9.78084e-05 *lens_ipow(x, 2)*y*lens_ipow(dx, 2) + 102.796 *y*lens_ipow(dy, 4) + 1.7794e-07 *lens_ipow(y, 5) + 0.0189447 *lens_ipow(y, 3)*lens_ipow(dy, 2) + 451.978 *lens_ipow(dx, 6)*dy + -3.191e-11 *lens_ipow(x, 4)*lens_ipow(y, 3) + -1704.18 *y*lens_ipow(dy, 6)*lens_ipow(lambda, 2) + -28.2403 *lens_ipow(y, 2)*lens_ipow(dy, 5)*lens_ipow(lambda, 2) + -37070.9 *lens_ipow(dy, 7)*lens_ipow(lambda, 2) + -0.174262 *lens_ipow(y, 3)*lens_ipow(dy, 4)*lens_ipow(lambda, 2) + -3.04904e-08 *lens_ipow(y, 6)*dy*lens_ipow(lambda, 2);
const float out_dx =  + -1.22583 *dx + -0.0115335 *x + 3.72489e-05 *x*lambda + 0.388564 *dx*lambda + -0.00243346 *y*dx*dy + -0.0001031 *x*y*dy + -0.000207958 *lens_ipow(x, 2)*dx + 0.546634 *dx*lens_ipow(dy, 2) + -3.89927e-07 *x*lens_ipow(y, 2) + -6.55528e-07 *lens_ipow(x, 3) + -0.00491666 *x*lens_ipow(dx, 2) + -4.33029e-05 *lens_ipow(y, 2)*dx + -0.540983 *dx*lens_ipow(lambda, 2) + -0.00182509 *x*lens_ipow(dx, 2)*lambda + 0.265823 *dx*lens_ipow(lambda, 3) + 3.94963 *lens_ipow(dx, 3)*lambda + 0.131347 *x*lens_ipow(dx, 4) + 0.00174461 *lens_ipow(x, 2)*lens_ipow(dx, 3) + -7.63304 *lens_ipow(dx, 3)*lens_ipow(lambda, 2) + 0.0169351 *y*lens_ipow(dx, 3)*dy + 3.21435 *lens_ipow(dx, 5) + 0.00013855 *lens_ipow(y, 2)*lens_ipow(dx, 3) + 6.7179e-05 *lens_ipow(x, 2)*dx*lens_ipow(dy, 2) + 7.96049e-06 *lens_ipow(x, 3)*lens_ipow(dx, 2) + 9.81199e-05 *x*y*lens_ipow(dy, 3)*lambda + -0.614038 *dx*lens_ipow(dy, 4)*lambda + 12.9919 *lens_ipow(dx, 3)*lens_ipow(lambda, 4) + -9.4279 *lens_ipow(dx, 3)*lens_ipow(lambda, 5);
const float out_dy =  + -0.012339 *y + -0.907962 *dy + 7.66706e-05 *y*lambda + -0.001447 *y*lens_ipow(dx, 2) + -3.1298e-05 *lens_ipow(y, 2)*dy + 0.00386463 *y*lens_ipow(dy, 2) + 0.0111068 *x*dx*dy + -6.98903e-05 *x*y*dx + 1.05098 *lens_ipow(dx, 2)*dy + -1.13115e-07 *lens_ipow(x, 2)*y + 1.60241e-05 *lens_ipow(x, 2)*dy + 0.592125 *lens_ipow(dy, 3) + 5.34109e-07 *lens_ipow(y, 3)*lens_ipow(lambda, 2) + -8.83134e-07 *lens_ipow(y, 3)*lens_ipow(lambda, 4) + 0.00698877 *lens_ipow(x, 2)*lens_ipow(dy, 5) + 9.70047e-05 *x*lens_ipow(y, 2)*lens_ipow(dx, 3)*dy + 8.14901e-06 *lens_ipow(x, 2)*lens_ipow(y, 2)*lens_ipow(dx, 2)*dy*lambda + 0.000197141 *lens_ipow(x, 2)*y*lens_ipow(dy, 4)*lambda + 0.72148 *y*lens_ipow(dx, 4)*lens_ipow(dy, 2)*lambda + 6.96393e-08 *lens_ipow(x, 3)*lens_ipow(y, 2)*dx*dy*lambda + -0.0577875 *x*y*dx*lens_ipow(dy, 4)*lambda + -12.0402 *y*lens_ipow(dx, 4)*lens_ipow(dy, 4) + -0.00203494 *x*lens_ipow(y, 2)*dx*lens_ipow(dy, 3)*lens_ipow(lambda, 2) + -2.86475e-08 *lens_ipow(x, 4)*y*lens_ipow(dy, 2)*lens_ipow(lambda, 2) + 13390.4 *lens_ipow(dx, 2)*lens_ipow(dy, 9) + 219.637 *y*lens_ipow(dx, 2)*lens_ipow(dy, 8) + -2.03286e-05 *x*lens_ipow(y, 3)*dx*lens_ipow(dy, 2)*lens_ipow(lambda, 4) + 0.00812089 *x*lens_ipow(y, 2)*lens_ipow(dx, 3)*lens_ipow(dy, 3)*lens_ipow(lambda, 2);
const float out_transmittance =  + 3.29506 *lambda + -0.00137751 *y*dy + -0.00180612 *x*dx + -8.2307e-06 *lens_ipow(y, 2) + -0.0686622 *lens_ipow(dy, 2) + -1.01567e-05 *lens_ipow(x, 2) + -0.0815586 *lens_ipow(dx, 2) + -9.53966 *lens_ipow(lambda, 2) + 14.6284 *lens_ipow(lambda, 3) + -11.5867 *lens_ipow(lambda, 4) + -2.46469 *lens_ipow(dx, 2)*lens_ipow(dy, 2) + -9.39554e-05 *lens_ipow(x, 2)*lens_ipow(dx, 2) + -0.0187356 *y*lens_ipow(dx, 2)*dy + -0.0187029 *x*dx*lens_ipow(dy, 2) + -0.00014993 *x*y*dx*dy + 3.74265 *lens_ipow(lambda, 5) + -8.54763e-06 *lens_ipow(y, 4)*lens_ipow(dy, 2) + -4.59691e-11 *lens_ipow(x, 6) + -46.0789 *lens_ipow(dx, 6) + -1.04574e-08 *lens_ipow(x, 5)*dx + -1.50845 *x*lens_ipow(dx, 5) + -0.00104505 *lens_ipow(y, 3)*lens_ipow(dy, 3) + -0.0141085 *lens_ipow(x, 2)*lens_ipow(dx, 4) + -4.231e-08 *lens_ipow(y, 5)*dy + -69.8346 *lens_ipow(dy, 6) + -9.64471e-11 *lens_ipow(y, 6) + -0.0792566 *lens_ipow(y, 2)*lens_ipow(dy, 4) + -3.47393 *y*lens_ipow(dy, 5);
