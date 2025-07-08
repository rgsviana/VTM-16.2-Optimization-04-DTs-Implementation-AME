//RAMIRO - VTM 16.2 - Otimização Inter-Quadros - Implementação de DTs na Affine

#include "DT_AME_128x128.h"

#include <string.h>
void DT_AME_128x128::score(double * input, double * output) {
    double var0[2];
    if (input[9] <= 1.5) {
        if (input[35] <= 0.5) {
            if (input[8] <= 2.5) {
                if (input[36] <= 55557.0) {
                    if (input[9] <= 0.5) {
                        if (input[8] <= 1.5) {
                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                        } else {
                            if (input[44] <= 158.4384994506836) {
                                if (input[21] <= 770.0) {
                                    if (input[34] <= 1170.5) {
                                        memcpy(var0, (const double[]){0.9883720930232558, 0.011627906976744186}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.9998164464023495, 0.00018355359765051394}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.9714285714285714, 0.02857142857142857}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var0, (const double[]){0.9612903225806452, 0.03870967741935484}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[15] <= 2148070882.5) {
                        if (input[26] <= 38.0) {
                            if (input[0] <= 24.5) {
                                if (input[15] <= 51299.0) {
                                    if (input[22] <= 17736.0) {
                                        memcpy(var0, (const double[]){0.25, 0.75}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.864963503649635, 0.13503649635036497}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[15] <= 113005.5) {
                                        memcpy(var0, (const double[]){0.3702127659574468, 0.6297872340425532}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.16376306620209058, 0.8362369337979094}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[39] <= 7.902105093002319) {
                                    if (input[14] <= 41657.5) {
                                        memcpy(var0, (const double[]){0.128686327077748, 0.871313672922252}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.5, 0.5}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[15] <= 59372.5) {
                                        memcpy(var0, (const double[]){0.4739970282317979, 0.5260029717682021}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.21351766513056836, 0.7864823348694316}, 2 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[26] <= 43.0) {
                                if (input[22] <= 250529.0) {
                                    if (input[38] <= 97.4375) {
                                        memcpy(var0, (const double[]){0.05516431924882629, 0.9448356807511737}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.2108843537414966, 0.7891156462585034}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[25] <= 1.5) {
                                        memcpy(var0, (const double[]){0.9047619047619048, 0.09523809523809523}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.48717948717948717, 0.5128205128205128}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[9] <= 0.5) {
                            if (input[8] <= 0.5) {
                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                if (input[22] <= 9223372036855110000.0) {
                                    if (input[24] <= 0.5) {
                                        memcpy(var0, (const double[]){0.11030841900527924, 0.8896915809947208}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[16] <= 7.5) {
                                if (input[14] <= 291726.5) {
                                    if (input[26] <= 40.5) {
                                        memcpy(var0, (const double[]){0.5485148514851486, 0.4514851485148515}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.138860103626943, 0.861139896373057}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[43] <= 66.375) {
                                        memcpy(var0, (const double[]){0.8660779985283297, 0.13392200147167035}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.4584837545126354, 0.5415162454873647}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[8] <= 0.5) {
                                    if (input[20] <= -4256.0) {
                                        memcpy(var0, (const double[]){0.5789473684210527, 0.42105263157894735}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.12911903160726296, 0.8708809683927371}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[43] <= 212.14049530029297) {
                                        memcpy(var0, (const double[]){0.4598713508164275, 0.5401286491835725}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.2765957446808511, 0.723404255319149}, 2 * sizeof(double));
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[36] <= 55557.0) {
                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[8] <= 3.5) {
                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        if (input[9] <= 0.5) {
                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            if (input[0] <= 29.5) {
                                if (input[22] <= 38855.0) {
                                    memcpy(var0, (const double[]){0.7478991596638656, 0.25210084033613445}, 2 * sizeof(double));
                                } else {
                                    if (input[20] <= -112.0) {
                                        memcpy(var0, (const double[]){0.9534883720930233, 0.046511627906976744}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.2413793103448276, 0.7586206896551724}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[43] <= 132.99199676513672) {
                                    if (input[33] <= 0.5) {
                                        memcpy(var0, (const double[]){0.9150442477876106, 0.08495575221238938}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.5887850467289719, 0.411214953271028}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.28888888888888886, 0.7111111111111111}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (input[22] <= 9223372036855800000.0) {
                if (input[9] <= 0.5) {
                    if (input[14] <= 2148641486.0) {
                        if (input[20] <= 1558.0) {
                            if (input[37] <= 11622.5) {
                                if (input[39] <= 1459.530029296875) {
                                    if (input[5] <= 64.0) {
                                        memcpy(var0, (const double[]){0.8695652173913043, 0.13043478260869565}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.8734177215189873, 0.12658227848101267}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[20] <= 506.0) {
                                    if (input[23] <= 62.0) {
                                        memcpy(var0, (const double[]){0.9988463756969813, 0.0011536243030186503}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.9622641509433962, 0.03773584905660377}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.96875, 0.03125}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var0, (const double[]){0.8333333333333334, 0.16666666666666666}, 2 * sizeof(double));
                        }
                    } else {
                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        }
    } else {
        if (input[8] <= 0.5) {
            if (input[22] <= 420323.0) {
                if (input[9] <= 2.5) {
                    if (input[16] <= 7.5) {
                        if (input[23] <= 17.0) {
                            if (input[5] <= 960.0) {
                                if (input[38] <= 324.0500030517578) {
                                    if (input[38] <= 112.32150268554688) {
                                        memcpy(var0, (const double[]){0.41025641025641024, 0.5897435897435898}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.14893617021276595, 0.851063829787234}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[22] <= 101967.5) {
                                        memcpy(var0, (const double[]){0.9444444444444444, 0.05555555555555555}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.5114503816793893, 0.48854961832061067}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var0, (const double[]){0.8681318681318682, 0.13186813186813187}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[43] <= 62.19919967651367) {
                                if (input[34] <= 3207.0) {
                                    memcpy(var0, (const double[]){0.7272727272727273, 0.2727272727272727}, 2 * sizeof(double));
                                } else {
                                    if (input[43] <= 9.370114803314209) {
                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.9241379310344827, 0.07586206896551724}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var0, (const double[]){0.5733333333333334, 0.4266666666666667}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[22] <= 81740.0) {
                            if (input[26] <= 30.5) {
                                memcpy(var0, (const double[]){0.2815533980582524, 0.7184466019417476}, 2 * sizeof(double));
                            } else {
                                memcpy(var0, (const double[]){0.6744186046511628, 0.32558139534883723}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[20] <= -3616.0) {
                                memcpy(var0, (const double[]){0.4594594594594595, 0.5405405405405406}, 2 * sizeof(double));
                            } else {
                                if (input[38] <= 129.2459945678711) {
                                    if (input[19] <= -1184.0) {
                                        memcpy(var0, (const double[]){0.2235294117647059, 0.7764705882352941}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.056179775280898875, 0.9438202247191011}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[16] <= 9.5) {
                                        memcpy(var0, (const double[]){0.39759036144578314, 0.6024096385542169}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.16164383561643836, 0.8383561643835616}, 2 * sizeof(double));
                                    }
                                }
                            }
                        }
                    }
                } else {
                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                if (input[9] <= 2.5) {
                    if (input[4] <= 2880.0) {
                        if (input[4] <= 1344.0) {
                            if (input[22] <= 1505225.0) {
                                if (input[38] <= 297.66648864746094) {
                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.032679738562091505, 0.9673202614379085}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var0, (const double[]){0.07317073170731707, 0.926829268292683}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[40] <= 2432.0) {
                                memcpy(var0, (const double[]){0.21951219512195122, 0.7804878048780488}, 2 * sizeof(double));
                            } else {
                                if (input[16] <= 17.0) {
                                    memcpy(var0, (const double[]){0.09352517985611511, 0.9064748201438849}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        memcpy(var0, (const double[]){0.2235294117647059, 0.7764705882352941}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[35] <= 0.5) {
                if (input[23] <= 18.5) {
                    if (input[8] <= 1.5) {
                        if (input[43] <= 66.14839935302734) {
                            if (input[22] <= 718032.5) {
                                if (input[26] <= 35.5) {
                                    if (input[38] <= 74.67825317382812) {
                                        memcpy(var0, (const double[]){0.9239842726081258, 0.07601572739187418}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.7332474226804123, 0.2667525773195876}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[26] <= 40.5) {
                                        memcpy(var0, (const double[]){0.8966630785791173, 0.10333692142088267}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.9833795013850416, 0.01662049861495845}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var0, (const double[]){0.020833333333333332, 0.9791666666666666}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[22] <= 264907.0) {
                                if (input[9] <= 2.5) {
                                    if (input[5] <= 832.0) {
                                        memcpy(var0, (const double[]){0.5454545454545454, 0.45454545454545453}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.7647058823529411, 0.23529411764705882}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[5] <= 704.0) {
                                    if (input[16] <= 7.5) {
                                        memcpy(var0, (const double[]){0.1821561338289963, 0.8178438661710037}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.44642857142857145, 0.5535714285714286}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.5645161290322581, 0.43548387096774194}, 2 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[9] <= 2.5) {
                            if (input[8] <= 3.5) {
                                if (input[43] <= 0.031494149938225746) {
                                    memcpy(var0, (const double[]){0.95, 0.05}, 2 * sizeof(double));
                                } else {
                                    if (input[36] <= 55557.0) {
                                        memcpy(var0, (const double[]){0.8738738738738738, 0.12612612612612611}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.9996005392719828, 0.0003994607280171768}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[0] <= 29.5) {
                                    if (input[10] <= -96.0) {
                                        memcpy(var0, (const double[]){0.9523809523809523, 0.047619047619047616}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.5149253731343284, 0.48507462686567165}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[37] <= 45547.5) {
                                        memcpy(var0, (const double[]){0.36585365853658536, 0.6341463414634146}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.9292035398230089, 0.07079646017699115}, 2 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[4] <= 1472.0) {
                                if (input[22] <= 54200.0) {
                                    if (input[38] <= 114.21499633789062) {
                                        memcpy(var0, (const double[]){0.9482758620689655, 0.05172413793103448}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.7810650887573964, 0.21893491124260356}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[38] <= 205.69850158691406) {
                                        memcpy(var0, (const double[]){0.5299877600979193, 0.4700122399020808}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.9347319347319347, 0.06526806526806526}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[39] <= 5812.10009765625) {
                                    if (input[18] <= -12.0) {
                                        memcpy(var0, (const double[]){0.9971387696709585, 0.002861230329041488}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.940379403794038, 0.05962059620596206}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.8478260869565217, 0.15217391304347827}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if (input[8] <= 2.5) {
                        if (input[22] <= 40576.5) {
                            if (input[38] <= 121.38250350952148) {
                                if (input[26] <= 27.0) {
                                    if (input[10] <= -124.0) {
                                        memcpy(var0, (const double[]){0.5909090909090909, 0.4090909090909091}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.8770949720670391, 0.12290502793296089}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[22] <= 39010.5) {
                                        memcpy(var0, (const double[]){0.9760376551133932, 0.02396234488660676}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.8625954198473282, 0.13740458015267176}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[37] <= 317292.0) {
                                    if (input[4] <= 704.0) {
                                        memcpy(var0, (const double[]){0.4909090909090909, 0.509090909090909}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.8130841121495327, 0.18691588785046728}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[14] <= 30392.0) {
                                        memcpy(var0, (const double[]){0.9763313609467456, 0.023668639053254437}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.819672131147541, 0.18032786885245902}, 2 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[4] <= 1856.0) {
                                if (input[29] <= 0.5) {
                                    if (input[17] <= 14.0) {
                                        memcpy(var0, (const double[]){0.7072773536895675, 0.29272264631043254}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.37351778656126483, 0.6264822134387352}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[38] <= 78.25100326538086) {
                                        memcpy(var0, (const double[]){0.6392785571142284, 0.36072144288577157}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.29624664879356566, 0.7037533512064343}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[22] <= 357179.0) {
                                    if (input[43] <= 64.09375) {
                                        memcpy(var0, (const double[]){0.9653979238754326, 0.03460207612456748}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.863265306122449, 0.13673469387755102}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[15] <= 9223372039002260000.0) {
                                        memcpy(var0, (const double[]){0.5945945945945946, 0.40540540540540543}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.9302949061662198, 0.06970509383378017}, 2 * sizeof(double));
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[8] <= 3.5) {
                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            if (input[9] <= 2.5) {
                                memcpy(var0, (const double[]){0.7954545454545454, 0.20454545454545456}, 2 * sizeof(double));
                            } else {
                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        }
                    }
                }
            } else {
                if (input[26] <= 44.0) {
                    if (input[26] <= 37.0) {
                        if (input[14] <= 36728.0) {
                            memcpy(var0, (const double[]){0.48, 0.52}, 2 * sizeof(double));
                        } else {
                            if (input[37] <= 17059.5) {
                                if (input[43] <= 68.75) {
                                    memcpy(var0, (const double[]){0.425, 0.575}, 2 * sizeof(double));
                                } else {
                                    if (input[26] <= 24.5) {
                                        memcpy(var0, (const double[]){0.6080402010050251, 0.39195979899497485}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.8322147651006712, 0.16778523489932887}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[38] <= 132.72100067138672) {
                                    if (input[22] <= 112915.0) {
                                        memcpy(var0, (const double[]){0.8277153558052435, 0.17228464419475656}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.9454094292803971, 0.05459057071960298}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[16] <= 6.5) {
                                        memcpy(var0, (const double[]){0.9282868525896414, 0.07171314741035857}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.7044673539518901, 0.29553264604810997}, 2 * sizeof(double));
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[22] <= 211273.5) {
                            if (input[11] <= -32.0) {
                                if (input[22] <= 82001.5) {
                                    memcpy(var0, (const double[]){0.0958904109589041, 0.9041095890410958}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.3435114503816794, 0.6564885496183206}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[41] <= 31148.0) {
                                    memcpy(var0, (const double[]){0.6506024096385542, 0.3493975903614458}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.3979591836734694, 0.6020408163265306}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[17] <= -0.5) {
                                if (input[34] <= 222945.0) {
                                    if (input[22] <= 442888.0) {
                                        memcpy(var0, (const double[]){0.6481481481481481, 0.35185185185185186}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.8482758620689655, 0.15172413793103448}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.9540229885057471, 0.04597701149425287}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var0, (const double[]){0.3953488372093023, 0.6046511627906976}, 2 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if (input[14] <= 54921.0) {
                        memcpy(var0, (const double[]){0.024390243902439025, 0.975609756097561}, 2 * sizeof(double));
                    } else {
                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    memcpy(output, var0, 2 * sizeof(double));
}
