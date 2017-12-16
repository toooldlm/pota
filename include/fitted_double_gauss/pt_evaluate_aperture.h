const float out_x =  + 66.2069 *dx + 0.5962 *x + 0.250805 *x*lambda + 17.9457 *dx*lambda + -0.631637 *y*dx*dy + -0.00169732 *x*y*dy + -0.00274299 *lens_ipow(x, 2)*dx + -48.5219 *lens_ipow(dx, 3) + -0.346547 *x*lens_ipow(lambda, 2) + -46.9272 *dx*lens_ipow(dy, 2) + -2.76025e-06 *lens_ipow(x, 3) + -0.29773 *x*lens_ipow(dy, 2) + -0.945888 *x*lens_ipow(dx, 2) + -0.00117191 *lens_ipow(y, 2)*dx + -24.4136 *dx*lens_ipow(lambda, 2) + 11.7019 *dx*lens_ipow(lambda, 3) + 0.167874 *x*lens_ipow(lambda, 3) + -4.80601e-06 *x*lens_ipow(y, 2)*lambda + -0.00107164 *x*y*dy*lambda + -0.00151481 *lens_ipow(x, 2)*dx*lambda + -0.0170197 *lens_ipow(x, 2)*lens_ipow(dx, 3) + 48.409 *lens_ipow(dx, 5) + -0.00013336 *x*lens_ipow(y, 2)*lens_ipow(dx, 2) + -0.0107591 *lens_ipow(y, 2)*lens_ipow(dx, 3) + -0.0237075 *lens_ipow(x, 2)*dx*lens_ipow(dy, 2)*lambda + 121.445 *lens_ipow(dx, 3)*lens_ipow(dy, 2)*lambda + -0.000262956 *lens_ipow(x, 3)*lens_ipow(dx, 2)*lambda + -0.000233004 *lens_ipow(x, 3)*lens_ipow(dy, 2)*lens_ipow(lambda, 2);
const float out_y =  + 0.623078 *y + 67.8437 *dy + 8.18959 *dy*lambda + 0.0989906 *y*lambda + -0.303511 *y*lens_ipow(dx, 2) + -0.00213596 *lens_ipow(y, 2)*dy + -0.858359 *y*lens_ipow(dy, 2) + -0.00237215 *x*y*dx + -0.067194 *y*lens_ipow(lambda, 2) + -4.29705e-06 *lens_ipow(x, 2)*y + -5.64735 *dy*lens_ipow(lambda, 2) + -45.5101 *lens_ipow(dy, 3) + -201.662 *lens_ipow(dx, 2)*dy*lambda + -0.00104475 *lens_ipow(y, 2)*dy*lambda + -2.35583 *x*dx*dy*lambda + 2.1099 *x*dx*dy*lens_ipow(lambda, 2) + -0.0133921 *lens_ipow(x, 2)*dy*lens_ipow(lambda, 2) + 259.61 *lens_ipow(dx, 2)*dy*lens_ipow(lambda, 2) + -1.13034e-05 *lens_ipow(y, 4)*dy*lambda + 41.9825 *lens_ipow(dx, 2)*lens_ipow(dy, 3)*lambda + -94.6589 *lens_ipow(dx, 2)*dy*lens_ipow(lambda, 3) + -0.00229265 *lens_ipow(y, 3)*lens_ipow(dy, 2)*lambda + -2.62607e-08 *lens_ipow(y, 5)*lambda + 0.015556 *lens_ipow(x, 2)*dy*lens_ipow(lambda, 3) + -8.02377 *y*lens_ipow(dy, 4)*lambda + -0.22871 *lens_ipow(y, 2)*lens_ipow(dy, 3)*lambda + -4.33424 *y*lens_ipow(dy, 4)*lens_ipow(lambda, 2) + -264.677 *lens_ipow(dy, 5)*lens_ipow(lambda, 2);
const float out_dx =  + 0.750736 *dx + -0.007991 *x + -0.325733 *dx*lambda + 0.023804 *y*dx*dy + 0.000322971 *lens_ipow(x, 2)*dx + -0.00144593 *x*lens_ipow(lambda, 2) + 1.78703 *dx*lens_ipow(dy, 2) + 0.000105249 *lens_ipow(y, 2)*dx + 0.245136 *dx*lens_ipow(lambda, 2) + 0.142763 *x*lens_ipow(dx, 2)*lambda + 6.35475 *lens_ipow(dx, 3)*lambda + 0.0458962 *x*lens_ipow(dy, 2)*lambda + 0.00174266 *x*lens_ipow(lambda, 3) + 6.53855e-07 *x*lens_ipow(y, 2)*lambda + 2.5233e-06 *lens_ipow(x, 3)*lambda + 0.000798757 *x*y*dy*lambda + 0.205025 *x*lens_ipow(dx, 4) + -6.30575 *lens_ipow(dx, 3)*lens_ipow(lambda, 2) + 10.3936 *lens_ipow(dx, 5) + -3.92589e-06 *lens_ipow(x, 3)*lens_ipow(lambda, 2) + -0.155157 *x*lens_ipow(dx, 2)*lens_ipow(lambda, 2) + -0.0439539 *x*lens_ipow(dy, 2)*lens_ipow(lambda, 2) + -0.000792449 *x*y*dy*lens_ipow(lambda, 2) + 0.00801955 *lens_ipow(x, 2)*lens_ipow(dx, 3)*lambda + 0.286882 *x*lens_ipow(dx, 4)*lambda + -0.000538618 *lens_ipow(x, 2)*dx*lens_ipow(lambda, 4) + 5.99453e-05 *lens_ipow(x, 3)*lens_ipow(dx, 2)*lens_ipow(lambda, 2) + -2.67236e-06 *x*lens_ipow(y, 2)*lens_ipow(lambda, 6);
const float out_dy =  + -0.00812867 *y + 0.782426 *dy + -0.552262 *dy*lambda + 0.0117314 *y*lens_ipow(dx, 2) + 0.000456385 *lens_ipow(y, 2)*dy + 0.043139 *y*lens_ipow(dy, 2) + 0.0230275 *x*dx*dy + 0.000199112 *x*y*dx + 1.74763 *lens_ipow(dx, 2)*dy + 2.44318e-07 *lens_ipow(x, 2)*y + 0.758713 *dy*lens_ipow(lambda, 2) + 1.10781e-06 *lens_ipow(y, 3) + 9.80018e-05 *lens_ipow(x, 2)*dy + 1.82849 *lens_ipow(dy, 3) + -0.030375 *y*lens_ipow(dy, 2)*lambda + -0.820966 *lens_ipow(dy, 3)*lambda + -0.000408932 *lens_ipow(y, 2)*dy*lambda + -0.363228 *dy*lens_ipow(lambda, 3) + -1.70969e-06 *lens_ipow(y, 3)*lambda + 1.61518e-07 *lens_ipow(y, 4)*dy + 15.3789 *lens_ipow(dy, 5) + 0.00882723 *lens_ipow(y, 2)*lens_ipow(dy, 3) + -2.19196e-05 *x*y*dx*lens_ipow(lambda, 2) + 0.000255095 *lens_ipow(y, 2)*lens_ipow(dx, 2)*dy + 0.596808 *y*lens_ipow(dy, 4) + 5.86072e-05 *lens_ipow(y, 3)*lens_ipow(dy, 2) + -0.00717465 *x*y*dx*lens_ipow(dy, 4) + 0.0044526 *lens_ipow(x, 2)*lens_ipow(dy, 5);
const float out_transmittance =  + 0.454394  + 1.51523 *lambda + -0.00141371 *y*dy + -5.03271e-06 *lens_ipow(y, 2) + -0.0939075 *lens_ipow(dy, 2) + -3.17544 *lens_ipow(lambda, 2) + 3.13143 *lens_ipow(lambda, 3) + -1.19715 *lens_ipow(lambda, 4) + -5.42339 *lens_ipow(dx, 4) + -0.168621 *x*lens_ipow(dx, 3) + -0.00195763 *lens_ipow(x, 2)*lens_ipow(dx, 2) + -1.00086e-05 *lens_ipow(x, 3)*dx + -2.09519e-08 *lens_ipow(x, 4) + -0.00248538 *x*lens_ipow(y, 2)*dx*lens_ipow(dy, 2) + -2.57939e-08 *x*lens_ipow(y, 4)*dx + -554.574 *lens_ipow(dx, 2)*lens_ipow(dy, 4) + -0.193902 *lens_ipow(y, 2)*lens_ipow(dx, 2)*lens_ipow(dy, 2) + -0.0010326 *lens_ipow(y, 3)*lens_ipow(dx, 2)*dy + -2.22564e-06 *lens_ipow(y, 4)*lens_ipow(dx, 2) + -0.235155 *x*y*dx*lens_ipow(dy, 3) + -16.7845 *y*lens_ipow(dx, 2)*lens_ipow(dy, 3) + -8.24418 *x*dx*lens_ipow(dy, 4) + -1.2083e-05 *x*lens_ipow(y, 3)*dx*dy + -8.52948e-06 *lens_ipow(x, 2)*lens_ipow(y, 3)*lens_ipow(dy, 3) + -0.00108129 *lens_ipow(x, 2)*lens_ipow(y, 2)*lens_ipow(dy, 4) + -0.0644253 *lens_ipow(x, 2)*y*lens_ipow(dy, 5) + -1.51424 *lens_ipow(x, 2)*lens_ipow(dy, 6) + -2.6816e-08 *lens_ipow(x, 2)*lens_ipow(y, 4)*lens_ipow(dy, 2);