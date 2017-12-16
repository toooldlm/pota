const float dx00 =  + -0.45111  + 0.222106 *lens_ipow(dy, 2) + 0.325749 *lens_ipow(dx, 2) + 0.00588602 *y*dy + -0.000925557 *lens_ipow(y, 2) + -0.000107256 *x*dy + 0.0196702 *x*dx + -0.00317804 *lens_ipow(x, 2) + 0.327477 *lens_ipow(lambda, 3) + 1.70099 *lens_ipow(dx, 2)*lens_ipow(dy, 2) + 0.121221 *y*lens_ipow(dx, 2)*dy + 0.126604 *x*lens_ipow(dx, 3) + -0.00147991 *x*y*dx*dy + -7.19194e-06 *lens_ipow(x, 2)*lens_ipow(y, 2) + 4.44504 *lens_ipow(dx, 6) + -2.32777e-06 *lens_ipow(y, 4)*lens_ipow(dx, 2) + -4.70582e-09 *lens_ipow(y, 6) + 0.256849 *x*dx*lens_ipow(dy, 4) + -3.23698e-07 *lens_ipow(x, 2)*lens_ipow(y, 3)*dy + 0.182123 *y*lens_ipow(dy, 7) + -1.3638 *y*lens_ipow(dx, 6)*dy + 1.69021e-07 *lens_ipow(x, 5)*y*dx*dy + -8.00768e-11 *lens_ipow(x, 8) + 1.59487e-05 *lens_ipow(x, 2)*lens_ipow(y, 2)*lens_ipow(lambda, 5) + 1.06055e-05 *lens_ipow(x, 4)*lens_ipow(lambda, 5) + -2.09036 *lens_ipow(lambda, 10) + 7.36594e-09 *lens_ipow(y, 6)*lens_ipow(lambda, 4) + 0.12839 *lens_ipow(x, 2)*lens_ipow(dy, 8) + -1.18828e-12 *lens_ipow(x, 6)*lens_ipow(y, 4)+0.0f;
const float dx01 =  + 0.158343 *dx*dy + 0.0108099 *y*dx + 0.00588602 *x*dy + -0.00185111 *x*y + 0.121221 *x*lens_ipow(dx, 2)*dy + -0.000739957 *lens_ipow(x, 2)*dx*dy + -4.79463e-06 *lens_ipow(x, 3)*y + 9.06137 *lens_ipow(dx, 3)*lens_ipow(dy, 3) + 0.0013036 *lens_ipow(y, 3)*dx*lens_ipow(dy, 2) + -9.31109e-06 *x*lens_ipow(y, 3)*lens_ipow(dx, 2) + -2.82349e-08 *x*lens_ipow(y, 5) + -3.23698e-07 *lens_ipow(x, 3)*lens_ipow(y, 2)*dy + 0.182123 *x*lens_ipow(dy, 7) + -1.3638 *x*lens_ipow(dx, 6)*dy + 2.81701e-08 *lens_ipow(x, 6)*dx*dy + 1.06325e-05 *lens_ipow(x, 3)*y*lens_ipow(lambda, 5) + 4.41956e-08 *x*lens_ipow(y, 5)*lens_ipow(lambda, 4) + -6.7902e-13 *lens_ipow(x, 7)*lens_ipow(y, 3)+0.0f;
const float dx02 =  + 49.7564  + -20.6769 *lens_ipow(dy, 2) + -64.9886 *lens_ipow(dx, 2) + 0.158343 *y*dy + 0.00540493 *lens_ipow(y, 2) + 0.651498 *x*dx + 0.00983509 *lens_ipow(x, 2) + 3.40198 *x*dx*lens_ipow(dy, 2) + 0.242442 *x*y*dx*dy + 0.189905 *lens_ipow(x, 2)*lens_ipow(dx, 2) + -0.000739957 *lens_ipow(x, 2)*y*dy + 1.18041 *lens_ipow(lambda, 5) + 332.093 *lens_ipow(dx, 2)*lens_ipow(dy, 4) + 483.71 *lens_ipow(dx, 4)*lens_ipow(dy, 2) + 27.1841 *y*lens_ipow(dx, 2)*lens_ipow(dy, 3) + 0.000325899 *lens_ipow(y, 4)*lens_ipow(dy, 2) + 26.6703 *x*lens_ipow(dx, 5) + -4.65554e-06 *x*lens_ipow(y, 4)*dx + 0.128425 *lens_ipow(x, 2)*lens_ipow(dy, 4) + 1219.53 *lens_ipow(dx, 8) + -8.18283 *x*y*lens_ipow(dx, 5)*dy + 2.81701e-08 *lens_ipow(x, 6)*y*dy+0.0f;
const float dx03 =  + -41.3538 *dx*dy + 0.158343 *y*dx + 0.444212 *x*dy + 0.00588602 *x*y + -5.36279e-05 *lens_ipow(x, 2) + 3.40198 *x*lens_ipow(dx, 2)*dy + 0.121221 *x*y*lens_ipow(dx, 2) + -0.000739957 *lens_ipow(x, 2)*y*dx + 442.79 *lens_ipow(dx, 3)*lens_ipow(dy, 3) + 193.484 *lens_ipow(dx, 5)*dy + 27.1841 *y*lens_ipow(dx, 3)*lens_ipow(dy, 2) + 0.000651798 *lens_ipow(y, 4)*dx*dy + 0.513698 *lens_ipow(x, 2)*dx*lens_ipow(dy, 3) + -1.07899e-07 *lens_ipow(x, 3)*lens_ipow(y, 3) + 1.27486 *x*y*lens_ipow(dy, 6) + -1.3638 *x*y*lens_ipow(dx, 6) + 2.81701e-08 *lens_ipow(x, 6)*y*dx + 0.342373 *lens_ipow(x, 3)*lens_ipow(dy, 7)+0.0f;
const float dx04 =  + 0.982432 *x*lens_ipow(lambda, 2) + 5.90206 *dx*lens_ipow(lambda, 4) + 2.65812e-05 *lens_ipow(x, 3)*lens_ipow(y, 2)*lens_ipow(lambda, 4) + 1.06055e-05 *lens_ipow(x, 5)*lens_ipow(lambda, 4) + -20.9036 *x*lens_ipow(lambda, 9) + 2.94637e-08 *x*lens_ipow(y, 6)*lens_ipow(lambda, 3)+0.0f;
const float dx10 =  + 0.0158971 *dx*dy + 0.00801017 *y*dx + 0.0115638 *x*dy + -0.00180514 *x*y + 1.55084 *dx*lens_ipow(dy, 3) + 0.908836 *lens_ipow(dx, 3)*dy + 0.120407 *y*dx*lens_ipow(dy, 2) + -2.19662e-05 *lens_ipow(y, 3)*dx + -3.46833e-05 *x*lens_ipow(y, 2)*dy + -5.79686e-06 *x*lens_ipow(y, 3) + 0.519407 *x*lens_ipow(dx, 2)*lens_ipow(dy, 3) + 0.000869293 *lens_ipow(x, 3)*lens_ipow(dx, 2)*dy + -9.97936e-06 *lens_ipow(x, 3)*y*lens_ipow(dy, 2) + -2.58254e-08 *lens_ipow(x, 5)*y + -8.03377e-07 *lens_ipow(x, 4)*y*dx*lambda + 1.4486e-05 *x*lens_ipow(y, 3)*lens_ipow(lambda, 5) + -5.79023e-13 *lens_ipow(x, 3)*lens_ipow(y, 7)+0.0f;
const float dx11 =  + -0.450998  + 0.302858 *lens_ipow(dy, 2) + 0.213691 *lens_ipow(dx, 2) + 0.0217405 *y*dy + -0.00312566 *lens_ipow(y, 2) + 0.00801017 *x*dx + -0.000902568 *lens_ipow(x, 2) + 0.324103 *lens_ipow(lambda, 3) + 2.21888 *lens_ipow(dx, 2)*lens_ipow(dy, 2) + 0.139182 *y*lens_ipow(dy, 3) + 0.0516703 *y*lens_ipow(dx, 2)*dy + 0.120407 *x*dx*lens_ipow(dy, 2) + -6.58986e-05 *x*lens_ipow(y, 2)*dx + -3.46833e-05 *lens_ipow(x, 2)*y*dy + -8.6953e-06 *lens_ipow(x, 2)*lens_ipow(y, 2) + 6.00745 *lens_ipow(dy, 6) + -2.49484e-06 *lens_ipow(x, 4)*lens_ipow(dy, 2) + -4.30423e-09 *lens_ipow(x, 6) + -4.3498e-07 *lens_ipow(y, 5)*dy*lambda + -1.60675e-07 *lens_ipow(x, 5)*dx*lambda + 0.0195634 *lens_ipow(y, 2)*lens_ipow(dx, 6) + -8.82861e-11 *lens_ipow(y, 8) + 7.78736e-06 *lens_ipow(y, 4)*lens_ipow(lambda, 5) + 2.1729e-05 *lens_ipow(x, 2)*lens_ipow(y, 2)*lens_ipow(lambda, 5) + -2.0189 *lens_ipow(lambda, 10) + -1.01329e-12 *lens_ipow(x, 4)*lens_ipow(y, 6)+0.0f;
const float dx12 =  + -40.9442 *dx*dy + 0.427383 *y*dx + 0.0158971 *x*dy + 0.00801017 *x*y + 4.43777 *y*dx*lens_ipow(dy, 2) + 0.0516703 *lens_ipow(y, 2)*dx*dy + 1.55084 *x*lens_ipow(dy, 3) + 2.72651 *x*lens_ipow(dx, 2)*dy + 0.120407 *x*y*lens_ipow(dy, 2) + -2.19662e-05 *x*lens_ipow(y, 3) + 215.85 *dx*lens_ipow(dy, 5) + 0.519407 *lens_ipow(x, 2)*dx*lens_ipow(dy, 3) + 0.000434646 *lens_ipow(x, 4)*dx*dy + -1.60675e-07 *lens_ipow(x, 5)*y*lambda + 3356.1 *lens_ipow(dx, 5)*lens_ipow(dy, 3) + 0.0391267 *lens_ipow(y, 3)*lens_ipow(dx, 5)+0.0f;
const float dx13 =  + 49.7076  + -65.1406 *lens_ipow(dy, 2) + -20.4721 *lens_ipow(dx, 2) + 0.605716 *y*dy + 0.0108702 *lens_ipow(y, 2) + 0.0158971 *x*dx + 0.0057819 *lens_ipow(x, 2) + 4.43777 *y*lens_ipow(dx, 2)*dy + 0.208773 *lens_ipow(y, 2)*lens_ipow(dy, 2) + 0.0258352 *lens_ipow(y, 2)*lens_ipow(dx, 2) + 4.65252 *x*dx*lens_ipow(dy, 2) + 0.908836 *x*lens_ipow(dx, 3) + 0.240813 *x*y*dx*dy + -1.73416e-05 *lens_ipow(x, 2)*lens_ipow(y, 2) + 1.24163 *lens_ipow(lambda, 5) + 539.624 *lens_ipow(dx, 2)*lens_ipow(dy, 4) + 36.0447 *y*lens_ipow(dy, 5) + 0.779111 *lens_ipow(x, 2)*lens_ipow(dx, 2)*lens_ipow(dy, 2) + 0.000217323 *lens_ipow(x, 4)*lens_ipow(dx, 2) + -4.98968e-06 *lens_ipow(x, 4)*y*dy + -7.24966e-08 *lens_ipow(y, 6)*lambda + 1626.63 *lens_ipow(dy, 8) + 1678.05 *lens_ipow(dx, 6)*lens_ipow(dy, 2)+0.0f;
const float dx14 =  + 0.97231 *y*lens_ipow(lambda, 2) + 6.20817 *dy*lens_ipow(lambda, 4) + -7.24966e-08 *lens_ipow(y, 6)*dy + -1.60675e-07 *lens_ipow(x, 5)*y*dx + 7.78736e-06 *lens_ipow(y, 5)*lens_ipow(lambda, 4) + 3.6215e-05 *lens_ipow(x, 2)*lens_ipow(y, 3)*lens_ipow(lambda, 4) + -20.189 *y*lens_ipow(lambda, 9)+0.0f;
const float dx20 =  + -0.0145462  + -0.0020595 *lens_ipow(dy, 2) + -7.26888e-05 *y*dy + 1.41104e-05 *lens_ipow(y, 2) + 1.71063e-06 *x*dy + -0.000347702 *x*dx + 4.46265e-05 *lens_ipow(x, 2) + -0.00396336 *lens_ipow(lambda, 3) + 9.97076e-06 *lens_ipow(y, 2)*lens_ipow(dy, 2) + 0.00159468 *x*dx*lens_ipow(dy, 2) + 0.0020118 *x*lens_ipow(dx, 3) + 9.02219e-05 *x*y*dx*dy + 0.00300323 *y*lens_ipow(dx, 4)*dy + 5.05886e-11 *lens_ipow(y, 6) + -5.89038e-09 *lens_ipow(x, 2)*lens_ipow(y, 3)*dy + 5.751e-08 *lens_ipow(x, 4)*lens_ipow(dy, 2) + 7.01811e-10 *lens_ipow(x, 4)*lens_ipow(y, 2) + 0.0197079 *y*lens_ipow(dx, 2)*lens_ipow(dy, 5) + -3.53467e-08 *lens_ipow(y, 4)*lens_ipow(lambda, 4) + 3.55804e-05 *lens_ipow(x, 2)*y*lens_ipow(dy, 5) + -1.02986e-07 *lens_ipow(x, 2)*lens_ipow(y, 3)*lens_ipow(dx, 2)*dy + -5.35194e-09 *lens_ipow(x, 3)*lens_ipow(y, 3)*dx*dy + -4.93652e-11 *lens_ipow(x, 3)*lens_ipow(y, 4)*dx + -1.17325e-07 *lens_ipow(x, 4)*lens_ipow(lambda, 4) + 3.19222e-06 *lens_ipow(x, 4)*lens_ipow(dx, 4) + -7.09808e-13 *lens_ipow(x, 7)*dx + 9.55899e-13 *lens_ipow(x, 8) + 0.0267101 *lens_ipow(lambda, 10) + -1.20572e-09 *lens_ipow(x, 4)*lens_ipow(y, 2)*lens_ipow(lambda, 4) + 9.54661e-15 *lens_ipow(x, 4)*lens_ipow(y, 6)+0.0f;
const float dx21 =  + -4.15568e-05 *y*dx + -7.26888e-05 *x*dy + 2.82208e-05 *x*y + -0.00373201 *dx*lens_ipow(dy, 3) + 0.00100422 *y*lens_ipow(dx, 3) + 2.77835e-05 *lens_ipow(y, 2)*dx*dy + 1.99415e-05 *x*y*lens_ipow(dy, 2) + 4.51109e-05 *lens_ipow(x, 2)*dx*dy + 0.00079547 *y*dx*lens_ipow(dy, 2)*lambda + 0.00300323 *x*lens_ipow(dx, 4)*dy + 3.03532e-10 *x*lens_ipow(y, 5) + -5.89038e-09 *lens_ipow(x, 3)*lens_ipow(y, 2)*dy + 2.80724e-10 *lens_ipow(x, 5)*y + 0.0197079 *x*lens_ipow(dx, 2)*lens_ipow(dy, 5) + -1.41387e-07 *x*lens_ipow(y, 3)*lens_ipow(lambda, 4) + 1.18601e-05 *lens_ipow(x, 3)*lens_ipow(dy, 5) + -1.02986e-07 *lens_ipow(x, 3)*lens_ipow(y, 2)*lens_ipow(dx, 2)*dy + -4.01396e-09 *lens_ipow(x, 4)*lens_ipow(y, 2)*dx*dy + -4.93652e-11 *lens_ipow(x, 4)*lens_ipow(y, 3)*dx + -0.0201057 *y*lens_ipow(dx, 9) + -4.8229e-10 *lens_ipow(x, 5)*y*lens_ipow(lambda, 4) + 1.14559e-14 *lens_ipow(x, 5)*lens_ipow(y, 5)+0.0f;
const float dx22 =  + -0.606975  + 0.139927 *lens_ipow(dy, 2) + 0.690353 *lens_ipow(dx, 2) + -2.07784e-05 *lens_ipow(y, 2) + -0.000173851 *lens_ipow(x, 2) + 0.0083638 *lens_ipow(lambda, 3) + -0.00373201 *y*lens_ipow(dy, 3) + 0.00150633 *lens_ipow(y, 2)*lens_ipow(dx, 2) + 9.26117e-06 *lens_ipow(y, 3)*dy + 0.000797341 *lens_ipow(x, 2)*lens_ipow(dy, 2) + 0.0030177 *lens_ipow(x, 2)*lens_ipow(dx, 2) + 4.51109e-05 *lens_ipow(x, 2)*y*dy + 0.000397735 *lens_ipow(y, 2)*lens_ipow(dy, 2)*lambda + 0.0120129 *x*y*lens_ipow(dx, 3)*dy + 0.0394159 *x*y*dx*lens_ipow(dy, 5) + -6.86571e-08 *lens_ipow(x, 3)*lens_ipow(y, 3)*dx*dy + -1.33799e-09 *lens_ipow(x, 4)*lens_ipow(y, 3)*dy + -1.23413e-11 *lens_ipow(x, 4)*lens_ipow(y, 4) + 2.55377e-06 *lens_ipow(x, 5)*lens_ipow(dx, 3) + -8.8726e-14 *lens_ipow(x, 8) + -0.0904755 *lens_ipow(y, 2)*lens_ipow(dx, 8)+0.0f;
const float dx23 =  + 0.279853 *dx*dy + -0.004119 *x*dy + -7.26888e-05 *x*y + 8.55316e-07 *lens_ipow(x, 2) + -0.011196 *y*dx*lens_ipow(dy, 2) + 9.26117e-06 *lens_ipow(y, 3)*dx + 1.99415e-05 *x*lens_ipow(y, 2)*dy + 0.00159468 *lens_ipow(x, 2)*dx*dy + 4.51109e-05 *lens_ipow(x, 2)*y*dx + 0.00079547 *lens_ipow(y, 2)*dx*dy*lambda + 0.00300323 *x*y*lens_ipow(dx, 4) + -1.96346e-09 *lens_ipow(x, 3)*lens_ipow(y, 3) + 2.3004e-08 *lens_ipow(x, 5)*dy + 0.0985397 *x*y*lens_ipow(dx, 2)*lens_ipow(dy, 4) + 5.93007e-05 *lens_ipow(x, 3)*y*lens_ipow(dy, 4) + -3.43286e-08 *lens_ipow(x, 3)*lens_ipow(y, 3)*lens_ipow(dx, 2) + -1.33799e-09 *lens_ipow(x, 4)*lens_ipow(y, 3)*dx+0.0f;
const float dx24 =  + 0.0250914 *dx*lens_ipow(lambda, 2) + -0.0118901 *x*lens_ipow(lambda, 2) + 0.000397735 *lens_ipow(y, 2)*dx*lens_ipow(dy, 2) + -1.41387e-07 *x*lens_ipow(y, 4)*lens_ipow(lambda, 3) + -9.38597e-08 *lens_ipow(x, 5)*lens_ipow(lambda, 3) + 0.267101 *x*lens_ipow(lambda, 9) + -9.6458e-10 *lens_ipow(x, 5)*lens_ipow(y, 2)*lens_ipow(lambda, 3)+0.0f;
const float dx30 =  + 0.00366859 *dx*dy + 1.2712e-06 *y*dy + -0.000104641 *y*dx + -0.000143003 *x*dy + 2.89344e-05 *x*y + 1.98884e-05 *lens_ipow(y, 2)*dx*dy + 0.000780584 *x*lens_ipow(dy, 3) + 0.00102654 *x*lens_ipow(dx, 2)*dy + 0.000773699 *y*lens_ipow(dx, 5) + -9.57632e-07 *x*lens_ipow(y, 2)*lens_ipow(dx, 2)*dy + 2.60389e-10 *x*lens_ipow(y, 5) + -2.39554e-09 *lens_ipow(x, 3)*lens_ipow(y, 2)*dy + 4.23112e-10 *lens_ipow(x, 3)*lens_ipow(y, 3) + 2.58859e-10 *lens_ipow(x, 5)*y + 0.0370831 *y*lens_ipow(dx, 3)*lens_ipow(dy, 4) + 1.20305e-07 *x*lens_ipow(y, 2)*lens_ipow(dy, 3)*lens_ipow(lambda, 2) + -9.14582e-08 *lens_ipow(x, 3)*y*lens_ipow(lambda, 4) + -1.56692e-07 *x*lens_ipow(y, 3)*lens_ipow(lambda, 5)+0.0f;
const float dx31 =  + -0.0145595  + -0.00316615 *lens_ipow(dx, 2) + -0.000292578 *y*dy + 4.40258e-05 *lens_ipow(y, 2) + 1.2712e-06 *x*dy + -0.000104641 *x*dx + 1.44672e-05 *lens_ipow(x, 2) + -0.00396411 *lens_ipow(lambda, 3) + -0.00494903 *lens_ipow(dy, 4) + 0.00139907 *y*lens_ipow(dy, 3) + 0.00128023 *y*lens_ipow(dx, 2)*dy + 4.84893e-05 *lens_ipow(y, 2)*lens_ipow(dy, 2) + -1.7264e-05 *lens_ipow(y, 2)*lens_ipow(dx, 2) + 3.97767e-05 *x*y*dx*dy + -0.000156708 *lens_ipow(y, 2)*lens_ipow(dx, 2)*lens_ipow(dy, 2) + 0.000773699 *x*lens_ipow(dx, 5) + -9.57632e-07 *lens_ipow(x, 2)*y*lens_ipow(dx, 2)*dy + 6.50972e-10 *lens_ipow(x, 2)*lens_ipow(y, 4) + -1.19777e-09 *lens_ipow(x, 4)*y*dy + 3.17334e-10 *lens_ipow(x, 4)*lens_ipow(y, 2) + 4.31431e-11 *lens_ipow(x, 6) + 1.07272e-12 *lens_ipow(y, 7)*dy + 1.00819e-12 *lens_ipow(y, 8) + 0.0370831 *x*lens_ipow(dx, 3)*lens_ipow(dy, 4) + 1.20305e-07 *lens_ipow(x, 2)*y*lens_ipow(dy, 3)*lens_ipow(lambda, 2) + -2.28646e-08 *lens_ipow(x, 4)*lens_ipow(lambda, 4) + -1.62818e-07 *lens_ipow(y, 4)*lens_ipow(lambda, 5) + -2.35038e-07 *lens_ipow(x, 2)*lens_ipow(y, 2)*lens_ipow(lambda, 5) + 0.0273723 *lens_ipow(lambda, 10)+0.0f;
const float dx32 =  + 0.681819 *dx*dy + -0.00633231 *y*dx + 0.00366859 *x*dy + -0.000104641 *x*y + 0.00128023 *lens_ipow(y, 2)*dx*dy + -1.15093e-05 *lens_ipow(y, 3)*dx + 1.98884e-05 *x*lens_ipow(y, 2)*dy + 0.00102654 *lens_ipow(x, 2)*dx*dy + -2.53915 *dx*lens_ipow(dy, 5) + -3.31502 *lens_ipow(dx, 5)*dy + -0.000104472 *lens_ipow(y, 3)*dx*lens_ipow(dy, 2) + 0.00386849 *x*y*lens_ipow(dx, 4) + -9.57632e-07 *lens_ipow(x, 2)*lens_ipow(y, 2)*dx*dy + 0.111249 *x*y*lens_ipow(dx, 2)*lens_ipow(dy, 4)+0.0f;
const float dx33 =  + -0.60801  + 0.735819 *lens_ipow(dy, 2) + 0.34091 *lens_ipow(dx, 2) + -0.000146289 *lens_ipow(y, 2) + 0.00366859 *x*dx + 1.2712e-06 *x*y + -7.15017e-05 *lens_ipow(x, 2) + 0.009071 *lens_ipow(lambda, 3) + -0.0197961 *y*lens_ipow(dy, 3) + 0.00209861 *lens_ipow(y, 2)*lens_ipow(dy, 2) + 0.000640116 *lens_ipow(y, 2)*lens_ipow(dx, 2) + 3.23262e-05 *lens_ipow(y, 3)*dy + 1.98884e-05 *x*lens_ipow(y, 2)*dx + 0.00117088 *lens_ipow(x, 2)*lens_ipow(dy, 2) + 0.000513268 *lens_ipow(x, 2)*lens_ipow(dx, 2) + -6.34788 *lens_ipow(dx, 2)*lens_ipow(dy, 4) + -0.552503 *lens_ipow(dx, 6) + -0.000104472 *lens_ipow(y, 3)*lens_ipow(dx, 2)*dy + -4.78816e-07 *lens_ipow(x, 2)*lens_ipow(y, 2)*lens_ipow(dx, 2) + -5.98885e-10 *lens_ipow(x, 4)*lens_ipow(y, 2) + -8.49575 *lens_ipow(dy, 8) + 1.3409e-13 *lens_ipow(y, 8) + 0.148332 *x*y*lens_ipow(dx, 3)*lens_ipow(dy, 3) + 1.80458e-07 *lens_ipow(x, 2)*lens_ipow(y, 2)*lens_ipow(dy, 2)*lens_ipow(lambda, 2)+0.0f;
const float dx34 =  + 0.027213 *dy*lens_ipow(lambda, 2) + -0.0118923 *y*lens_ipow(lambda, 2) + 1.20305e-07 *lens_ipow(x, 2)*lens_ipow(y, 2)*lens_ipow(dy, 3)*lambda + -9.14582e-08 *lens_ipow(x, 4)*y*lens_ipow(lambda, 3) + -1.62818e-07 *lens_ipow(y, 5)*lens_ipow(lambda, 4) + -3.91729e-07 *lens_ipow(x, 2)*lens_ipow(y, 3)*lens_ipow(lambda, 4) + 0.273723 *y*lens_ipow(lambda, 9)+0.0f;
const float dx40 =  + -0.000388471 *dx + -2.71069e-05 *x + -0.00595614 *dx*lens_ipow(dy, 2) + -0.00731767 *lens_ipow(dx, 3) + -0.000428209 *y*dx*dy + 4.8241e-06 *lens_ipow(x, 2)*dx + -1.10345e-09 *lens_ipow(y, 4)*dx + -0.000845766 *x*lens_ipow(dy, 4) + -0.00349685 *x*lens_ipow(dx, 4) + 2.67183e-05 *x*y*lens_ipow(dy, 3) + -2.39747e-08 *x*lens_ipow(y, 3)*dy + -1.80215e-08 *lens_ipow(x, 2)*lens_ipow(y, 2)*dx + -3.84381e-05 *x*lens_ipow(y, 2)*lens_ipow(dx, 2)*lens_ipow(dy, 2) + -4.33571e-12 *x*lens_ipow(y, 6) + 2.22527e-05 *lens_ipow(x, 2)*y*dx*lens_ipow(dy, 3) + 2.52225e-11 *lens_ipow(x, 5)*y*dy + -1.38086e-11 *lens_ipow(x, 5)*lens_ipow(y, 2) + 3.22353e-09 *lens_ipow(x, 6)*dx*lens_ipow(dy, 2)+0.0f;
const float dx41 =  + -0.000337426 *dy + -1.32888e-05 *y + -0.00688131 *lens_ipow(dy, 3) + -0.00592774 *lens_ipow(dx, 2)*dy + -0.000649155 *y*lens_ipow(dy, 2) + -2.26804e-06 *lens_ipow(y, 2)*dy + -0.000428209 *x*dx*dy + -0.00107201 *y*lens_ipow(dx, 4) + -6.04616e-10 *lens_ipow(y, 5) + -4.4138e-09 *x*lens_ipow(y, 3)*dx + 1.33591e-05 *lens_ipow(x, 2)*lens_ipow(dy, 3) + -3.5962e-08 *lens_ipow(x, 2)*lens_ipow(y, 2)*dy + -1.20143e-08 *lens_ipow(x, 3)*y*dx + -4.01806e-09 *lens_ipow(y, 5)*lens_ipow(dx, 2) + -3.84381e-05 *lens_ipow(x, 2)*y*lens_ipow(dx, 2)*lens_ipow(dy, 2) + -1.30071e-11 *lens_ipow(x, 2)*lens_ipow(y, 5) + 7.41756e-06 *lens_ipow(x, 3)*dx*lens_ipow(dy, 3) + 4.20375e-12 *lens_ipow(x, 6)*dy + -4.60287e-12 *lens_ipow(x, 6)*y+0.0f;
const float dx42 =  + -1.76181e-06  + -0.0643582 *dx + -0.000388471 *x + -0.0118555 *y*dx*dy + -0.00595614 *x*lens_ipow(dy, 2) + -0.021953 *x*lens_ipow(dx, 2) + -0.000428209 *x*y*dy + 1.60803e-06 *lens_ipow(x, 3) + -3.20156 *dx*lens_ipow(dy, 4) + -5.63396 *lens_ipow(dx, 3)*lens_ipow(dy, 2) + -2.61044 *lens_ipow(dx, 5) + -0.00214402 *lens_ipow(y, 2)*lens_ipow(dx, 3) + -1.10345e-09 *x*lens_ipow(y, 4) + -0.0069937 *lens_ipow(x, 2)*lens_ipow(dx, 3) + -6.00716e-09 *lens_ipow(x, 3)*lens_ipow(y, 2) + -1.33935e-09 *lens_ipow(y, 6)*dx + -3.84381e-05 *lens_ipow(x, 2)*lens_ipow(y, 2)*dx*lens_ipow(dy, 2) + 7.41756e-06 *lens_ipow(x, 3)*y*lens_ipow(dy, 3) + -1.49818 *dx*lens_ipow(dy, 2)*lens_ipow(lambda, 5) + 4.60505e-10 *lens_ipow(x, 7)*lens_ipow(dy, 2)+0.0f;
const float dx43 =  + -2.84557e-06  + -0.054242 *dy + -0.000337426 *y + -0.0206439 *y*lens_ipow(dy, 2) + -0.00592774 *y*lens_ipow(dx, 2) + -0.000649155 *lens_ipow(y, 2)*dy + -7.56015e-07 *lens_ipow(y, 3) + -0.0119123 *x*dx*dy + -0.000428209 *x*y*dx + -3.32598 *lens_ipow(dy, 5) + -6.40312 *lens_ipow(dx, 2)*lens_ipow(dy, 3) + -2.81698 *lens_ipow(dx, 4)*dy + -0.00169153 *lens_ipow(x, 2)*lens_ipow(dy, 3) + 4.00774e-05 *lens_ipow(x, 2)*y*lens_ipow(dy, 2) + -1.19873e-08 *lens_ipow(x, 2)*lens_ipow(y, 3) + -3.84381e-05 *lens_ipow(x, 2)*lens_ipow(y, 2)*lens_ipow(dx, 2)*dy + 2.22527e-05 *lens_ipow(x, 3)*y*dx*lens_ipow(dy, 2) + 4.20375e-12 *lens_ipow(x, 6)*y + -1.49818 *lens_ipow(dx, 2)*dy*lens_ipow(lambda, 5) + 9.21009e-10 *lens_ipow(x, 7)*dx*dy+0.0f;
const float dx44 =  + 0.280781  + -0.696304 *lens_ipow(lambda, 2) + -3.74545 *lens_ipow(dx, 2)*lens_ipow(dy, 2)*lens_ipow(lambda, 4) + 4.62021 *lens_ipow(lambda, 10)+0.0f;