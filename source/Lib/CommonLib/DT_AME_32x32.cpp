//RAMIRO - VTM 16.2 - Otimização Inter-Quadros - Implementação de DTs na Affine

#include "DT_AME_32x32.h"

#include <string.h>
void DT_AME_32x32::score(double * input, double * output) {
    double var0[2];
    if (input[9] <= 1.5) {
        if (input[8] <= 2.5) {
            if (input[9] <= 0.5) {
                if (input[8] <= 1.5) {
                    if (input[8] <= 0.5) {
                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        if (input[36] <= 55557.0) {
                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                        } else {
                            if (input[22] <= 9223372036854802000.0) {
                                if (input[24] <= 0.5) {
                                    memcpy(var0, (const double[]){0.0838126540673788, 0.9161873459326212}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[20] <= -830.0) {
                                    memcpy(var0, (const double[]){0.7909090909090909, 0.20909090909090908}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.9407831900668577, 0.05921680993314231}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if (input[27] <= 0.5) {
                        if (input[31] <= 2147766415.0) {
                            if (input[12] <= 2228.0) {
                                if (input[31] <= 1031.5) {
                                    memcpy(var0, (const double[]){0.9940029985007496, 0.005997001499250375}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.9998704159647531, 0.0001295840352468576}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var0, (const double[]){0.9534883720930233, 0.046511627906976744}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[32] <= 0.5) {
                                if (input[41] <= 65436.0) {
                                    memcpy(var0, (const double[]){0.9954441913439636, 0.004555808656036446}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.9333333333333333, 0.06666666666666667}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var0, (const double[]){0.9393939393939394, 0.06060606060606061}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[32] <= 0.5) {
                            if (input[21] <= 1808.0) {
                                if (input[29] <= 0.5) {
                                    memcpy(var0, (const double[]){0.9873868933369893, 0.012613106663010694}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.9463687150837988, 0.053631284916201116}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var0, (const double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[10] <= 770.0) {
                                if (input[43] <= 1036.1300048828125) {
                                    memcpy(var0, (const double[]){0.945054945054945, 0.054945054945054944}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.7142857142857143, 0.2857142857142857}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[21] <= -10.0) {
                                    memcpy(var0, (const double[]){0.6585365853658537, 0.34146341463414637}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.9316239316239316, 0.06837606837606838}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[14] <= 158770.5) {
                    if (input[36] <= 55557.0) {
                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        if (input[2] <= 1.5) {
                            if (input[43] <= 127.82400131225586) {
                                if (input[16] <= 17.5) {
                                    memcpy(var0, (const double[]){0.11152091623798893, 0.888479083762011}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.1646414105313319, 0.8353585894686681}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[4] <= 1160.0) {
                                    memcpy(var0, (const double[]){0.06953290870488323, 0.9304670912951167}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.036323851203501095, 0.9636761487964989}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[28] <= 124367.5) {
                                if (input[34] <= 46030.5) {
                                    memcpy(var0, (const double[]){0.27089235127478756, 0.7291076487252125}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.1732449532991865, 0.8267550467008135}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[43] <= 32.6875) {
                                    memcpy(var0, (const double[]){0.025943396226415096, 0.9740566037735849}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.13248407643312102, 0.867515923566879}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if (input[16] <= 7.5) {
                        if (input[27] <= 0.5) {
                            if (input[37] <= 4323.0) {
                                memcpy(var0, (const double[]){0.5348837209302325, 0.46511627906976744}, 2 * sizeof(double));
                            } else {
                                if (input[43] <= 78.95705032348633) {
                                    memcpy(var0, (const double[]){0.9946617152141116, 0.00533828478588836}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.9352428393524284, 0.0647571606475716}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[34] <= 2147650457.0) {
                                if (input[26] <= 27.0) {
                                    memcpy(var0, (const double[]){0.5420875420875421, 0.45791245791245794}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.9094138543516874, 0.0905861456483126}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[22] <= 3521.5) {
                                    memcpy(var0, (const double[]){0.92, 0.08}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.43656716417910446, 0.5634328358208955}, 2 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[27] <= 0.5) {
                            if (input[26] <= 30.5) {
                                if (input[22] <= 25060.0) {
                                    memcpy(var0, (const double[]){0.8131101813110181, 0.18688981868898186}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.45980707395498394, 0.5401929260450161}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[34] <= 2147848105.5) {
                                    memcpy(var0, (const double[]){0.9570934256055363, 0.042906574394463666}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.8306878306878307, 0.1693121693121693}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[38] <= 207.3979949951172) {
                                if (input[8] <= 0.5) {
                                    memcpy(var0, (const double[]){0.22074636306135356, 0.7792536369386465}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.48601583113456465, 0.5139841688654354}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[18] <= -568.0) {
                                    memcpy(var0, (const double[]){0.8164251207729468, 0.18357487922705315}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.6038647342995169, 0.3961352657004831}, 2 * sizeof(double));
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
                if (input[9] <= 0.5) {
                    if (input[22] <= 30815.5) {
                        if (input[12] <= -38.0) {
                            memcpy(var0, (const double[]){0.5714285714285714, 0.42857142857142855}, 2 * sizeof(double));
                        } else {
                            if (input[43] <= 122.92200088500977) {
                                if (input[22] <= 1773.5) {
                                    memcpy(var0, (const double[]){0.5666666666666667, 0.43333333333333335}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.8100263852242744, 0.18997361477572558}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[31] <= 1232.0) {
                                    memcpy(var0, (const double[]){0.7560975609756098, 0.24390243902439024}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.9466666666666667, 0.05333333333333334}, 2 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[8] <= 3.5) {
                            if (input[20] <= -4256.0) {
                                if (input[0] <= 24.5) {
                                    memcpy(var0, (const double[]){0.5277777777777778, 0.4722222222222222}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.925, 0.075}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[28] <= 882.5) {
                                    memcpy(var0, (const double[]){0.627906976744186, 0.37209302325581395}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.9528455284552846, 0.04715447154471545}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[20] <= 730.0) {
                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var0, (const double[]){0.9354838709677419, 0.06451612903225806}, 2 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if (input[27] <= 0.5) {
                        if (input[37] <= 15173.0) {
                            if (input[44] <= 20.50059986114502) {
                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var0, (const double[]){0.8260869565217391, 0.17391304347826086}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[13] <= 216.0) {
                                if (input[42] <= 2024.625) {
                                    memcpy(var0, (const double[]){0.9990074441687344, 0.0009925558312655087}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.9333333333333333, 0.06666666666666667}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var0, (const double[]){0.9090909090909091, 0.09090909090909091}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[0] <= 29.5) {
                            if (input[20] <= 8.0) {
                                if (input[16] <= 9.5) {
                                    memcpy(var0, (const double[]){0.8974970202622169, 0.10250297973778308}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.9857549857549858, 0.014245014245014245}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[8] <= 3.5) {
                                    memcpy(var0, (const double[]){0.8787878787878788, 0.12121212121212122}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.6101694915254238, 0.3898305084745763}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[5] <= 72.0) {
                                memcpy(var0, (const double[]){0.8795180722891566, 0.12048192771084337}, 2 * sizeof(double));
                            } else {
                                if (input[21] <= 296.0) {
                                    memcpy(var0, (const double[]){0.9943767572633552, 0.005623242736644799}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.9506172839506173, 0.04938271604938271}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (input[36] <= 55557.0) {
            if (input[26] <= 30.5) {
                if (input[28] <= 39588.5) {
                    if (input[16] <= 38.0) {
                        if (input[38] <= 28.389400482177734) {
                            memcpy(var0, (const double[]){0.4576271186440678, 0.5423728813559322}, 2 * sizeof(double));
                        } else {
                            if (input[16] <= -41.5) {
                                memcpy(var0, (const double[]){0.4098360655737705, 0.5901639344262295}, 2 * sizeof(double));
                            } else {
                                if (input[31] <= 10131.0) {
                                    memcpy(var0, (const double[]){0.11049723756906077, 0.8895027624309392}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.19144144144144143, 0.8085585585585585}, 2 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        memcpy(var0, (const double[]){0.6190476190476191, 0.38095238095238093}, 2 * sizeof(double));
                    }
                } else {
                    if (input[38] <= 161.73450469970703) {
                        if (input[34] <= 4365.5) {
                            memcpy(var0, (const double[]){0.1111111111111111, 0.8888888888888888}, 2 * sizeof(double));
                        } else {
                            if (input[14] <= 26283.5) {
                                memcpy(var0, (const double[]){0.40540540540540543, 0.5945945945945946}, 2 * sizeof(double));
                            } else {
                                if (input[26] <= 24.5) {
                                    memcpy(var0, (const double[]){0.9428571428571428, 0.05714285714285714}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.6237623762376238, 0.37623762376237624}, 2 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[14] <= 17373.0) {
                            memcpy(var0, (const double[]){0.043478260869565216, 0.9565217391304348}, 2 * sizeof(double));
                        } else {
                            if (input[10] <= -288.0) {
                                memcpy(var0, (const double[]){0.14666666666666667, 0.8533333333333334}, 2 * sizeof(double));
                            } else {
                                memcpy(var0, (const double[]){0.3424657534246575, 0.6575342465753424}, 2 * sizeof(double));
                            }
                        }
                    }
                }
            } else {
                if (input[17] <= -39.0) {
                    memcpy(var0, (const double[]){0.28, 0.72}, 2 * sizeof(double));
                } else {
                    if (input[23] <= 72.5) {
                        if (input[26] <= 35.5) {
                            if (input[28] <= 50189.0) {
                                if (input[5] <= 216.0) {
                                    memcpy(var0, (const double[]){0.07958477508650519, 0.9204152249134948}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.026845637583892617, 0.9731543624161074}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[28] <= 59562.5) {
                                    memcpy(var0, (const double[]){0.22727272727272727, 0.7727272727272727}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.08527131782945736, 0.9147286821705426}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[4] <= 48.0) {
                                memcpy(var0, (const double[]){0.13513513513513514, 0.8648648648648649}, 2 * sizeof(double));
                            } else {
                                if (input[19] <= -480.0) {
                                    memcpy(var0, (const double[]){0.050359712230215826, 0.9496402877697842}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.011019283746556474, 0.9889807162534435}, 2 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        memcpy(var0, (const double[]){0.2903225806451613, 0.7096774193548387}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[27] <= 0.5) {
                if (input[16] <= 7.5) {
                    if (input[37] <= 4818.0) {
                        if (input[8] <= 1.5) {
                            memcpy(var0, (const double[]){0.543859649122807, 0.45614035087719296}, 2 * sizeof(double));
                        } else {
                            memcpy(var0, (const double[]){0.9285714285714286, 0.07142857142857142}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[34] <= 2147858040.5) {
                            if (input[9] <= 2.5) {
                                if (input[37] <= 26197.5) {
                                    memcpy(var0, (const double[]){0.9691119691119691, 0.03088803088803089}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.9977313050812949, 0.002268694918705099}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[44] <= 28.541549682617188) {
                                    memcpy(var0, (const double[]){0.9900908340214699, 0.00990916597853014}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.8974358974358975, 0.10256410256410256}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[9] <= 2.5) {
                                if (input[8] <= 1.5) {
                                    memcpy(var0, (const double[]){0.902158273381295, 0.09784172661870504}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.9961783439490446, 0.003821656050955414}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[14] <= 3896.5) {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.7478991596638656, 0.25210084033613445}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if (input[8] <= 0.5) {
                        if (input[9] <= 2.5) {
                            if (input[22] <= 25187.0) {
                                if (input[18] <= 160.0) {
                                    memcpy(var0, (const double[]){0.9059139784946236, 0.09408602150537634}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.6136363636363636, 0.38636363636363635}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[38] <= 155.18600463867188) {
                                    memcpy(var0, (const double[]){0.2517985611510791, 0.7482014388489209}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.7910447761194029, 0.208955223880597}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[10] <= -100.0) {
                            if (input[8] <= 1.5) {
                                if (input[9] <= 2.5) {
                                    memcpy(var0, (const double[]){0.9324324324324325, 0.06756756756756757}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[9] <= 2.5) {
                                    memcpy(var0, (const double[]){0.9964973730297724, 0.0035026269702276708}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.9809322033898306, 0.019067796610169493}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[9] <= 2.5) {
                                if (input[8] <= 1.5) {
                                    memcpy(var0, (const double[]){0.8544395924308588, 0.14556040756914118}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.9964391691394658, 0.0035608308605341245}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[15] <= 9223372039002260000.0) {
                                    memcpy(var0, (const double[]){0.9780329505741387, 0.02196704942586121}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.8971209213051824, 0.10287907869481766}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[32] <= 0.5) {
                    if (input[29] <= 0.5) {
                        if (input[8] <= 1.5) {
                            if (input[9] <= 2.5) {
                                if (input[22] <= 6050.5) {
                                    memcpy(var0, (const double[]){0.8094357076780758, 0.19056429232192415}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.5455431076473454, 0.45445689235265463}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[9] <= 2.5) {
                                if (input[8] <= 3.5) {
                                    memcpy(var0, (const double[]){0.9928505957836847, 0.007149404216315307}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.9650924024640657, 0.03490759753593429}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[14] <= 21665.0) {
                                    memcpy(var0, (const double[]){0.6700400992934886, 0.3299599007065114}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.9471488178025035, 0.05285118219749652}, 2 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[9] <= 2.5) {
                            if (input[8] <= 1.5) {
                                if (input[23] <= 18.5) {
                                    memcpy(var0, (const double[]){0.5572519083969466, 0.44274809160305345}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.2302839116719243, 0.7697160883280757}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[23] <= 21.5) {
                                    memcpy(var0, (const double[]){0.9848101265822785, 0.015189873417721518}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.9116022099447514, 0.08839779005524862}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[14] <= 46062.0) {
                                if (input[14] <= 2276.5) {
                                    memcpy(var0, (const double[]){0.8918918918918919, 0.10810810810810811}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.27740863787375414, 0.7225913621262459}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if (input[9] <= 2.5) {
                        if (input[8] <= 1.5) {
                            if (input[16] <= 7.5) {
                                if (input[22] <= 23149.5) {
                                    memcpy(var0, (const double[]){0.6081771720613288, 0.39182282793867124}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.13274336283185842, 0.8672566371681416}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[38] <= 52.20120048522949) {
                                    memcpy(var0, (const double[]){0.6, 0.4}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.19256308100929614, 0.8074369189907038}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[8] <= 3.5) {
                                if (input[24] <= 0.5) {
                                    memcpy(var0, (const double[]){0.9878587196467992, 0.012141280353200883}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.75, 0.25}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[22] <= 20953.0) {
                                    memcpy(var0, (const double[]){0.9090909090909091, 0.09090909090909091}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.6, 0.4}, 2 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[15] <= 9223372039002260000.0) {
                            if (input[14] <= 21354.0) {
                                memcpy(var0, (const double[]){0.5531914893617021, 0.44680851063829785}, 2 * sizeof(double));
                            } else {
                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[18] <= 92.0) {
                                if (input[14] <= 2785.0) {
                                    memcpy(var0, (const double[]){0.8028169014084507, 0.19718309859154928}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.3033175355450237, 0.6966824644549763}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[14] <= 5430.0) {
                                    memcpy(var0, (const double[]){0.26421404682274247, 0.7357859531772575}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.10629514963880289, 0.8937048503611971}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    memcpy(output, var0, 2 * sizeof(double));
}
