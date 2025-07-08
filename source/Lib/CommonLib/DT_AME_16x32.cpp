//RAMIRO - VTM 16.2 - Otimização Inter-Quadros - Implementação de DTs na Affine

#include "DT_AME_16x32.h"

#include <string.h>
void DT_AME_16x32::score(double * input, double * output) {
    double var0[2];
    if (input[9] <= 1.5) {
        if (input[9] <= 0.5) {
            if (input[14] <= 2147528752.5) {
                if (input[22] <= 9223372036854815000.0) {
                    memcpy(var0, (const double[]){0.9780898674616573, 0.02191013253834273}, 2 * sizeof(double));
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
                            if (input[22] <= 9223372036854800000.0) {
                                memcpy(var0, (const double[]){0.05599562960939634, 0.9440043703906037}, 2 * sizeof(double));
                            } else {
                                memcpy(var0, (const double[]){0.8211091234347049, 0.17889087656529518}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        memcpy(var0, (const double[]){0.8800831107153458, 0.1199168892846542}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[14] <= 83336.5) {
                if (input[36] <= 55557.0) {
                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[16] <= 17.5) {
                        memcpy(var0, (const double[]){0.14094530666445348, 0.8590546933355465}, 2 * sizeof(double));
                    } else {
                        memcpy(var0, (const double[]){0.22837694373321676, 0.7716230562667833}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[27] <= 0.5) {
                    memcpy(var0, (const double[]){0.9759066700481867, 0.02409332995181334}, 2 * sizeof(double));
                } else {
                    if (input[8] <= 1.5) {
                        memcpy(var0, (const double[]){0.6617424242424242, 0.33825757575757576}, 2 * sizeof(double));
                    } else {
                        memcpy(var0, (const double[]){0.9536423841059603, 0.046357615894039736}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[36] <= 55557.0) {
            memcpy(var0, (const double[]){0.044895316209799266, 0.9551046837902007}, 2 * sizeof(double));
        } else {
            if (input[27] <= 0.5) {
                memcpy(var0, (const double[]){0.9788992438895727, 0.02110075611042729}, 2 * sizeof(double));
            } else {
                if (input[9] <= 2.5) {
                    if (input[8] <= 1.5) {
                        memcpy(var0, (const double[]){0.6257406188281764, 0.37425938117182356}, 2 * sizeof(double));
                    } else {
                        memcpy(var0, (const double[]){0.9833849161101157, 0.016615083889884346}, 2 * sizeof(double));
                    }
                } else {
                    if (input[14] <= 31836.0) {
                        if (input[32] <= 0.5) {
                            memcpy(var0, (const double[]){0.6182672347864089, 0.3817327652135912}, 2 * sizeof(double));
                        } else {
                            memcpy(var0, (const double[]){0.2612021857923497, 0.7387978142076502}, 2 * sizeof(double));
                        }
                    } else {
                        memcpy(var0, (const double[]){0.995764955002647, 0.004235044997353097}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    memcpy(output, var0, 2 * sizeof(double));
}
