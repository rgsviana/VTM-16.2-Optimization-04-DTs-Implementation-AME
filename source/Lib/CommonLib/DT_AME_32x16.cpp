//RAMIRO - VTM 16.2 - Otimização Inter-Quadros - Implementação de DTs na Affine

#include "DT_AME_32x16.h"

#include <string.h>
void DT_AME_32x16::score(double * input, double * output) {
    double var0[2];
    if (input[9] <= 1.5) {
        if (input[9] <= 0.5) {
            if (input[14] <= 2147543456.0) {
                if (input[22] <= 9223372036854827000.0) {
                    memcpy(var0, (const double[]){0.9796547030589584, 0.020345296941041622}, 2 * sizeof(double));
                } else {
                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                if (input[36] <= 55557.0) {
                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[8] <= 2.0) {
                        if (input[8] <= 0.5) {
                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                        } else {
                            if (input[22] <= 9223372036854796000.0) {
                                memcpy(var0, (const double[]){0.05830388692579505, 0.941696113074205}, 2 * sizeof(double));
                            } else {
                                memcpy(var0, (const double[]){0.8367683429513603, 0.16323165704863973}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        memcpy(var0, (const double[]){0.8672727272727273, 0.13272727272727272}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[14] <= 2147528822.5) {
                if (input[36] <= 55557.0) {
                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[16] <= 17.5) {
                        memcpy(var0, (const double[]){0.13340788938592923, 0.8665921106140707}, 2 * sizeof(double));
                    } else {
                        memcpy(var0, (const double[]){0.22659412955465588, 0.7734058704453441}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[27] <= 0.5) {
                    memcpy(var0, (const double[]){0.9806506228080784, 0.019349377191921636}, 2 * sizeof(double));
                } else {
                    if (input[8] <= 2.0) {
                        memcpy(var0, (const double[]){0.6824050876854886, 0.3175949123145115}, 2 * sizeof(double));
                    } else {
                        memcpy(var0, (const double[]){0.9664769133459835, 0.033523086654016446}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[36] <= 55557.0) {
            memcpy(var0, (const double[]){0.038128444494432576, 0.9618715555055675}, 2 * sizeof(double));
        } else {
            if (input[27] <= 0.5) {
                memcpy(var0, (const double[]){0.9825969905293015, 0.017403009470698526}, 2 * sizeof(double));
            } else {
                if (input[9] <= 2.5) {
                    if (input[8] <= 1.5) {
                        memcpy(var0, (const double[]){0.6177749154725487, 0.3822250845274513}, 2 * sizeof(double));
                    } else {
                        memcpy(var0, (const double[]){0.9829274965800273, 0.01707250341997264}, 2 * sizeof(double));
                    }
                } else {
                    if (input[14] <= 35341.5) {
                        if (input[32] <= 0.5) {
                            memcpy(var0, (const double[]){0.6190366972477064, 0.38096330275229356}, 2 * sizeof(double));
                        } else {
                            memcpy(var0, (const double[]){0.2681830946363381, 0.7318169053636618}, 2 * sizeof(double));
                        }
                    } else {
                        memcpy(var0, (const double[]){0.9963264235108895, 0.0036735764891104696}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    memcpy(output, var0, 2 * sizeof(double));
}
