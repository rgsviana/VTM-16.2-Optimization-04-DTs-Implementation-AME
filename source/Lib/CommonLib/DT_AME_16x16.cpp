//RAMIRO - VTM 16.2 - Otimização Inter-Quadros - Implementação de DTs na Affine

#include "DT_AME_16x16.h"

#include <string.h>
void DT_AME_16x16::score(double * input, double * output) {
    double var0[2];
    if (input[9] <= 1.5) {
        if (input[9] <= 0.5) {
            if (input[14] <= 2147505788.0) {
                if (input[22] <= 9223372036854798000.0) {
                    if (input[26] <= 30.5) {
                        if (input[27] <= 0.5) {
                            memcpy(var0, (const double[]){0.9994123696195093, 0.0005876303804906713}, 2 * sizeof(double));
                        } else {
                            if (input[14] <= 2415.5) {
                                memcpy(var0, (const double[]){0.9790888722927558, 0.020911127707244213}, 2 * sizeof(double));
                            } else {
                                memcpy(var0, (const double[]){0.9962877030162413, 0.0037122969837587007}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[27] <= 0.5) {
                            if (input[43] <= 258.3909912109375) {
                                if (input[29] <= 0.5) {
                                    memcpy(var0, (const double[]){0.9977946243969676, 0.0022053756030323913}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.9804305283757339, 0.019569471624266144}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var0, (const double[]){0.9781078967943706, 0.0218921032056294}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[28] <= 14634.0) {
                                if (input[44] <= 26.957550048828125) {
                                    if (input[2] <= 1.5) {
                                        memcpy(var0, (const double[]){0.9849624060150376, 0.015037593984962405}, 2 * sizeof(double));
                                    } else {
                                        if (input[21] <= -126.0) {
                                            memcpy(var0, (const double[]){0.7475728155339806, 0.2524271844660194}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.9407806191117093, 0.059219380888290714}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[28] <= 5163.5) {
                                        if (input[26] <= 37.0) {
                                            memcpy(var0, (const double[]){0.8694638694638694, 0.13053613053613053}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.6345177664974619, 0.36548223350253806}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[20] <= 98.0) {
                                            memcpy(var0, (const double[]){0.9206349206349206, 0.07936507936507936}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.7980456026058632, 0.20195439739413681}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[43] <= 89.29294967651367) {
                                    memcpy(var0, (const double[]){0.9955995599559956, 0.0044004400440044}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.9424, 0.0576}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
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
                            if (input[22] <= 9223372036854788000.0) {
                                if (input[24] <= 0.5) {
                                    if (input[17] <= 3.0) {
                                        if (input[4] <= 1260.0) {
                                            if (input[21] <= -38.0) {
                                                memcpy(var0, (const double[]){0.04, 0.96}, 2 * sizeof(double));
                                            } else {
                                                if (input[11] <= -30.0) {
                                                    memcpy(var0, (const double[]){0.05405405405405406, 0.9459459459459459}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.37438423645320196, 0.625615763546798}, 2 * sizeof(double));
                                                }
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
                            } else {
                                memcpy(var0, (const double[]){0.8992332968236583, 0.10076670317634173}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[22] <= 2749.5) {
                            if (input[8] <= 3.5) {
                                if (input[43] <= 1024.2200012207031) {
                                    if (input[34] <= 1422.0) {
                                        memcpy(var0, (const double[]){0.3877551020408163, 0.6122448979591837}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.7906458797327395, 0.20935412026726058}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.06666666666666667, 0.9333333333333333}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[8] <= 3.5) {
                                memcpy(var0, (const double[]){0.9398359161349134, 0.0601640838650866}, 2 * sizeof(double));
                            } else {
                                memcpy(var0, (const double[]){0.9952038369304557, 0.004796163069544364}, 2 * sizeof(double));
                            }
                        }
                    }
                }
            }
        } else {
            if (input[15] <= 9223372039002260000.0) {
                if (input[15] <= 2147501812.0) {
                    if (input[43] <= 109.44549942016602) {
                        if (input[37] <= 71198.5) {
                            memcpy(var0, (const double[]){0.13402061855670103, 0.865979381443299}, 2 * sizeof(double));
                        } else {
                            memcpy(var0, (const double[]){0.03155339805825243, 0.9684466019417476}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[1] <= 3.5) {
                            if (input[28] <= 109839.0) {
                                memcpy(var0, (const double[]){0.3193916349809886, 0.6806083650190115}, 2 * sizeof(double));
                            } else {
                                memcpy(var0, (const double[]){0.0594059405940594, 0.9405940594059405}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[27] <= 0.5) {
                                memcpy(var0, (const double[]){0.12839293408013788, 0.8716070659198621}, 2 * sizeof(double));
                            } else {
                                memcpy(var0, (const double[]){0.0675422138836773, 0.9324577861163227}, 2 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if (input[27] <= 0.5) {
                        if (input[8] <= 2.0) {
                            if (input[16] <= 7.5) {
                                if (input[26] <= 33.0) {
                                    if (input[44] <= 15.184250354766846) {
                                        memcpy(var0, (const double[]){0.9980139026812314, 0.0019860973187686196}, 2 * sizeof(double));
                                    } else {
                                        if (input[37] <= 19276.5) {
                                            memcpy(var0, (const double[]){0.8048780487804879, 0.1951219512195122}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.9798534798534798, 0.020146520146520148}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.9972870320130223, 0.0027129679869777536}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[34] <= 7352.0) {
                                    memcpy(var0, (const double[]){0.9739049394221808, 0.0260950605778192}, 2 * sizeof(double));
                                } else {
                                    if (input[38] <= 204.5009994506836) {
                                        if (input[42] <= 0.0035858199698850513) {
                                            memcpy(var0, (const double[]){0.5609756097560976, 0.43902439024390244}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.8987626546681665, 0.10123734533183353}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[39] <= 19937.75) {
                                            memcpy(var0, (const double[]){0.9764982373678026, 0.023501762632197415}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.8620689655172413, 0.13793103448275862}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            memcpy(var0, (const double[]){0.9981197958635509, 0.0018802041364491002}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[8] <= 2.0) {
                            if (input[26] <= 33.0) {
                                if (input[38] <= 297.03199768066406) {
                                    if (input[22] <= 1205.5) {
                                        if (input[16] <= 7.5) {
                                            memcpy(var0, (const double[]){0.977961432506887, 0.02203856749311295}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.7674418604651163, 0.23255813953488372}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[18] <= -632.0) {
                                            memcpy(var0, (const double[]){0.7846153846153846, 0.2153846153846154}, 2 * sizeof(double));
                                        } else {
                                            if (input[22] <= 2076.5) {
                                                memcpy(var0, (const double[]){0.6638655462184874, 0.33613445378151263}, 2 * sizeof(double));
                                            } else {
                                                if (input[28] <= 5464.0) {
                                                    memcpy(var0, (const double[]){0.3081395348837209, 0.6918604651162791}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.550351288056206, 0.4496487119437939}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.9049429657794676, 0.09505703422053231}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[16] <= 7.5) {
                                    memcpy(var0, (const double[]){0.9897058823529412, 0.010294117647058823}, 2 * sizeof(double));
                                } else {
                                    if (input[8] <= 0.5) {
                                        if (input[5] <= 216.0) {
                                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.7232375979112271, 0.27676240208877284}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.9035250463821892, 0.09647495361781076}, 2 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[23] <= 17.0) {
                                memcpy(var0, (const double[]){0.997229916897507, 0.002770083102493075}, 2 * sizeof(double));
                            } else {
                                if (input[10] <= -72.0) {
                                    memcpy(var0, (const double[]){0.9973579920739762, 0.002642007926023778}, 2 * sizeof(double));
                                } else {
                                    if (input[26] <= 28.5) {
                                        memcpy(var0, (const double[]){0.8319327731092437, 0.16806722689075632}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.965, 0.035}, 2 * sizeof(double));
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
                    if (input[1] <= 3.5) {
                        if (input[16] <= 17.5) {
                            if (input[28] <= 2147696981.5) {
                                if (input[4] <= 1928.0) {
                                    if (input[14] <= 8333.5) {
                                        if (input[14] <= 2231.5) {
                                            if (input[37] <= 1619.5) {
                                                memcpy(var0, (const double[]){0.9310344827586207, 0.06896551724137931}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.29034976822587444, 0.7096502317741256}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[37] <= 15178.5) {
                                                memcpy(var0, (const double[]){0.1489841986455982, 0.8510158013544018}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.27175080558539205, 0.728249194414608}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.5113636363636364, 0.48863636363636365}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[38] <= 190.83599853515625) {
                                        memcpy(var0, (const double[]){0.7016574585635359, 0.2983425414364641}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.3403019744483159, 0.6596980255516841}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var0, (const double[]){0.05392156862745098, 0.946078431372549}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[16] <= 31.5) {
                                memcpy(var0, (const double[]){0.5455381784728611, 0.45446182152713893}, 2 * sizeof(double));
                            } else {
                                memcpy(var0, (const double[]){0.7832817337461301, 0.21671826625386997}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[27] <= 0.5) {
                            if (input[16] <= 17.5) {
                                if (input[37] <= 349420.0) {
                                    if (input[43] <= 125.57400131225586) {
                                        if (input[41] <= 51684.0) {
                                            if (input[2] <= 1.5) {
                                                if (input[37] <= 49161.0) {
                                                    if (input[14] <= 1093.5) {
                                                        memcpy(var0, (const double[]){0.11132623426911907, 0.888673765730881}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.1968503937007874, 0.8031496062992126}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[38] <= 339.4459991455078) {
                                                        if (input[37] <= 169268.0) {
                                                            if (input[38] <= 82.8286018371582) {
                                                                memcpy(var0, (const double[]){0.03234686854783207, 0.9676531314521679}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[0] <= 29.5) {
                                                                    if (input[37] <= 87826.0) {
                                                                        memcpy(var0, (const double[]){0.22822822822822822, 0.7717717717717718}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.10546139359698682, 0.8945386064030132}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[38] <= 164.69249725341797) {
                                                                        if (input[37] <= 95078.5) {
                                                                            memcpy(var0, (const double[]){0.10384615384615385, 0.8961538461538462}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var0, (const double[]){0.02759276879162702, 0.972407231208373}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.14701986754966886, 0.8529801324503311}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.02662037037037037, 0.9733796296296297}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.17139001349527666, 0.8286099865047234}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[34] <= 32648.5) {
                                                    if (input[31] <= 375359.0) {
                                                        memcpy(var0, (const double[]){0.20222376650451704, 0.797776233495483}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.13548387096774195, 0.864516129032258}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.1197436924309171, 0.8802563075690829}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            if (input[40] <= 9188.0) {
                                                if (input[43] <= 71.92580032348633) {
                                                    memcpy(var0, (const double[]){0.03333333333333333, 0.9666666666666667}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.14718019257221457, 0.8528198074277854}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.027615713730066122, 0.9723842862699339}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[43] <= 511.781005859375) {
                                            if (input[34] <= 154148.0) {
                                                if (input[33] <= 0.5) {
                                                    if (input[31] <= 2147822094.5) {
                                                        if (input[31] <= 905.5) {
                                                            if (input[44] <= 12.815849781036377) {
                                                                memcpy(var0, (const double[]){0.1891891891891892, 0.8108108108108109}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.06188925081433225, 0.9381107491856677}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[37] <= 54312.5) {
                                                                if (input[25] <= 2.0) {
                                                                    memcpy(var0, (const double[]){0.22957198443579765, 0.7704280155642024}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.30662782228696284, 0.6933721777130372}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[38] <= 106.40149688720703) {
                                                                    memcpy(var0, (const double[]){0.020202020202020204, 0.9797979797979798}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.20990613141601758, 0.7900938685839825}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (input[20] <= -1608.0) {
                                                            memcpy(var0, (const double[]){0.04960835509138381, 0.9503916449086162}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[26] <= 24.5) {
                                                                memcpy(var0, (const double[]){0.2822429906542056, 0.7177570093457943}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.14433302947432392, 0.8556669705256761}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (input[31] <= 199179.5) {
                                                        memcpy(var0, (const double[]){0.1543677702433187, 0.8456322297566813}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.08646998982706001, 0.91353001017294}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.14020246845097767, 0.8597975315490223}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.06157112526539278, 0.9384288747346072}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[38] <= 630.2455139160156) {
                                        memcpy(var0, (const double[]){0.0272892662219527, 0.9727107337780473}, 2 * sizeof(double));
                                    } else {
                                        if (input[37] <= 663077.5) {
                                            memcpy(var0, (const double[]){0.1161217587373168, 0.8838782412626832}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.033816425120772944, 0.966183574879227}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[43] <= 108.81999969482422) {
                                    if (input[41] <= 49712.0) {
                                        if (input[40] <= 53208.0) {
                                            if (input[37] <= 316499.0) {
                                                if (input[31] <= 189957.5) {
                                                    if (input[26] <= 33.5) {
                                                        if (input[22] <= 6961.5) {
                                                            memcpy(var0, (const double[]){0.30008453085376163, 0.6999154691462384}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.488, 0.512}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[22] <= 2648.0) {
                                                            if (input[37] <= 37978.5) {
                                                                memcpy(var0, (const double[]){0.2076923076923077, 0.7923076923076923}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.045454545454545456, 0.9545454545454546}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.2612765957446809, 0.7387234042553191}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[37] <= 136377.0) {
                                                        memcpy(var0, (const double[]){0.14010507880910683, 0.8598949211908932}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.2737430167597765, 0.7262569832402235}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[38] <= 603.2900085449219) {
                                                    memcpy(var0, (const double[]){0.06750392464678179, 0.9324960753532182}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.19834710743801653, 0.8016528925619835}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.04781704781704782, 0.9521829521829522}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.05560165975103734, 0.9443983402489626}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[43] <= 511.6719970703125) {
                                        if (input[0] <= 29.5) {
                                            if (input[31] <= 264344.5) {
                                                if (input[34] <= 169955.5) {
                                                    if (input[41] <= 62996.0) {
                                                        if (input[31] <= 913.5) {
                                                            memcpy(var0, (const double[]){0.13636363636363635, 0.8636363636363636}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[3] <= 2.5) {
                                                                memcpy(var0, (const double[]){0.44341372912801486, 0.5565862708719852}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.600609756097561, 0.39939024390243905}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        if (input[43] <= 127.74599838256836) {
                                                            memcpy(var0, (const double[]){0.19572953736654805, 0.8042704626334519}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.44332210998877664, 0.5566778900112234}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.29286300246103364, 0.7071369975389664}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[26] <= 24.5) {
                                                    memcpy(var0, (const double[]){0.3139418254764293, 0.6860581745235708}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.19819004524886877, 0.8018099547511313}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            if (input[22] <= 894.0) {
                                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[22] <= 13240.0) {
                                                    if (input[34] <= 2399.0) {
                                                        memcpy(var0, (const double[]){0.38557993730407525, 0.6144200626959248}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[43] <= 125.46099853515625) {
                                                            if (input[41] <= 61628.0) {
                                                                memcpy(var0, (const double[]){0.2205128205128205, 0.7794871794871795}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.04, 0.96}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.25129533678756477, 0.7487046632124352}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[37] <= 67842.5) {
                                                        memcpy(var0, (const double[]){0.09243697478991597, 0.907563025210084}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.4026745913818722, 0.5973254086181278}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.08300395256916997, 0.9169960474308301}, 2 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[3] <= 2.5) {
                                if (input[43] <= 508.4844970703125) {
                                    if (input[16] <= 19.5) {
                                        if (input[14] <= 8275.0) {
                                            memcpy(var0, (const double[]){0.10729795572502913, 0.8927020442749709}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.1872871736662883, 0.8127128263337117}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[33] <= 0.5) {
                                            memcpy(var0, (const double[]){0.20734251147267418, 0.7926574885273259}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.11379310344827587, 0.8862068965517241}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.06671961874503574, 0.9332803812549643}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[14] <= 8638.5) {
                                    if (input[43] <= 127.24599838256836) {
                                        if (input[26] <= 33.0) {
                                            if (input[37] <= 380024.5) {
                                                if (input[16] <= 20.5) {
                                                    memcpy(var0, (const double[]){0.07285031847133758, 0.9271496815286624}, 2 * sizeof(double));
                                                } else {
                                                    if (input[31] <= 2147577065.5) {
                                                        if (input[34] <= 6712.5) {
                                                            memcpy(var0, (const double[]){0.1553030303030303, 0.8446969696969697}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.05486284289276808, 0.9451371571072319}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.21282798833819241, 0.7871720116618076}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.043173862310385065, 0.9568261376896149}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[37] <= 124221.0) {
                                                if (input[14] <= 3681.5) {
                                                    if (input[37] <= 41320.0) {
                                                        memcpy(var0, (const double[]){0.10276679841897234, 0.8972332015810277}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[39] <= 603.0700073242188) {
                                                            memcpy(var0, (const double[]){0.02484169508037019, 0.9751583049196298}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.06071871127633209, 0.9392812887236679}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.11742892459826947, 0.8825710754017305}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.03346767128088313, 0.9665323287191169}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[23] <= 34.0) {
                                            memcpy(var0, (const double[]){0.0932475884244373, 0.9067524115755627}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.21810699588477367, 0.7818930041152263}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[0] <= 29.5) {
                                        memcpy(var0, (const double[]){0.291970802919708, 0.708029197080292}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.12136752136752137, 0.8786324786324786}, 2 * sizeof(double));
                                    }
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
                memcpy(var0, (const double[]){0.044977511244377814, 0.9550224887556222}, 2 * sizeof(double));
            } else {
                memcpy(var0, (const double[]){0.008369601606963508, 0.9916303983930365}, 2 * sizeof(double));
            }
        } else {
            if (input[27] <= 0.5) {
                if (input[9] <= 2.5) {
                    if (input[8] <= 1.5) {
                        if (input[16] <= 7.5) {
                            if (input[34] <= 26854.5) {
                                memcpy(var0, (const double[]){0.9947739743924745, 0.005226025607525477}, 2 * sizeof(double));
                            } else {
                                if (input[22] <= 20661.5) {
                                    if (input[37] <= 159468.5) {
                                        memcpy(var0, (const double[]){0.9604685212298683, 0.03953147877013177}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.2, 0.8}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[14] <= 9223372039002260000.0) {
                                if (input[37] <= 96014.0) {
                                    if (input[22] <= 1735.5) {
                                        memcpy(var0, (const double[]){0.9804878048780488, 0.01951219512195122}, 2 * sizeof(double));
                                    } else {
                                        if (input[4] <= 1880.0) {
                                            if (input[21] <= 32.0) {
                                                memcpy(var0, (const double[]){0.8716577540106952, 0.12834224598930483}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.6463414634146342, 0.35365853658536583}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.9732142857142857, 0.026785714285714284}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[39] <= 32017.3994140625) {
                                        memcpy(var0, (const double[]){0.980276134122288, 0.01972386587771203}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.7313432835820896, 0.26865671641791045}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[4] <= 2516.0) {
                            memcpy(var0, (const double[]){0.9972825186412593, 0.0027174813587406794}, 2 * sizeof(double));
                        } else {
                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    }
                } else {
                    if (input[14] <= 19981.0) {
                        if (input[18] <= -148.0) {
                            if (input[10] <= -2956.0) {
                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var0, (const double[]){0.973224043715847, 0.026775956284153007}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[22] <= 1636.0) {
                                if (input[32] <= 0.5) {
                                    memcpy(var0, (const double[]){0.9833333333333333, 0.016666666666666666}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.8829268292682927, 0.11707317073170732}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[25] <= 2.5) {
                                    if (input[28] <= 3869.5) {
                                        if (input[26] <= 37.0) {
                                            memcpy(var0, (const double[]){0.7971014492753623, 0.2028985507246377}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.930635838150289, 0.06936416184971098}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[39] <= 30532.900390625) {
                                            if (input[4] <= 632.0) {
                                                if (input[41] <= 2336.0) {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.8878504672897196, 0.11214953271028037}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.975925925925926, 0.024074074074074074}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.6744186046511628, 0.32558139534883723}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[16] <= 17.5) {
                                        if (input[23] <= 18.0) {
                                            memcpy(var0, (const double[]){0.5891891891891892, 0.41081081081081083}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.8164705882352942, 0.18352941176470589}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.987012987012987, 0.012987012987012988}, 2 * sizeof(double));
                                    }
                                }
                            }
                        }
                    } else {
                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[9] <= 2.5) {
                    if (input[8] <= 1.5) {
                        if (input[25] <= 6.5) {
                            if (input[22] <= 1718.5) {
                                if (input[16] <= 8.5) {
                                    if (input[26] <= 27.0) {
                                        memcpy(var0, (const double[]){0.85, 0.15}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.9876084262701363, 0.012391573729863693}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.6331877729257642, 0.36681222707423583}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[16] <= 7.5) {
                                    if (input[31] <= 2147645000.5) {
                                        if (input[31] <= 1910.0) {
                                            memcpy(var0, (const double[]){0.5, 0.5}, 2 * sizeof(double));
                                        } else {
                                            if (input[23] <= 15.5) {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[22] <= 3412.5) {
                                                    memcpy(var0, (const double[]){0.9728813559322034, 0.02711864406779661}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.835820895522388, 0.16417910447761194}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[23] <= 15.5) {
                                            memcpy(var0, (const double[]){0.9, 0.1}, 2 * sizeof(double));
                                        } else {
                                            if (input[26] <= 41.5) {
                                                memcpy(var0, (const double[]){0.5918367346938775, 0.40816326530612246}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                } else {
                                    if (input[28] <= 13159.5) {
                                        if (input[32] <= 0.5) {
                                            if (input[8] <= 0.5) {
                                                if (input[22] <= 7255.0) {
                                                    memcpy(var0, (const double[]){0.49707602339181284, 0.5029239766081871}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.17307692307692307, 0.8269230769230769}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.6785714285714286, 0.32142857142857145}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.21649484536082475, 0.7835051546391752}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[8] <= 0.5) {
                                            memcpy(var0, (const double[]){0.6637168141592921, 0.336283185840708}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.8439306358381503, 0.15606936416184972}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[44] <= 30.11275005340576) {
                            memcpy(var0, (const double[]){0.994672478508294, 0.005327521491706018}, 2 * sizeof(double));
                        } else {
                            if (input[28] <= 7374.0) {
                                memcpy(var0, (const double[]){0.9726134585289515, 0.027386541471048513}, 2 * sizeof(double));
                            } else {
                                memcpy(var0, (const double[]){0.9916043073553568, 0.008395692644643182}, 2 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if (input[14] <= 14195.0) {
                        if (input[28] <= 11116.0) {
                            if (input[32] <= 0.5) {
                                if (input[14] <= 1533.5) {
                                    if (input[14] <= 773.5) {
                                        memcpy(var0, (const double[]){0.9424460431654677, 0.05755395683453238}, 2 * sizeof(double));
                                    } else {
                                        if (input[26] <= 34.5) {
                                            if (input[38] <= 89.78514862060547) {
                                                if (input[28] <= 1959.5) {
                                                    memcpy(var0, (const double[]){0.5445544554455446, 0.45544554455445546}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.8346666666666667, 0.16533333333333333}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.5127478753541076, 0.48725212464589235}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.9657142857142857, 0.03428571428571429}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[10] <= -132.0) {
                                        if (input[38] <= 201.38899993896484) {
                                            if (input[21] <= 156.0) {
                                                memcpy(var0, (const double[]){0.6534954407294833, 0.3465045592705167}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.3225806451612903, 0.6774193548387096}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.8898071625344353, 0.11019283746556474}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[26] <= 35.5) {
                                            if (input[23] <= 18.0) {
                                                memcpy(var0, (const double[]){0.21839080459770116, 0.7816091954022989}, 2 * sizeof(double));
                                            } else {
                                                if (input[44] <= 31.009349822998047) {
                                                    if (input[37] <= 71521.0) {
                                                        memcpy(var0, (const double[]){0.4663677130044843, 0.5336322869955157}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.84, 0.16}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[30] <= 0.5) {
                                                        memcpy(var0, (const double[]){0.37073170731707317, 0.6292682926829268}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.10236220472440945, 0.8976377952755905}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[14] <= 2754.0) {
                                                memcpy(var0, (const double[]){0.8616352201257862, 0.13836477987421383}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.529113924050633, 0.4708860759493671}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                }
                            } else {
                                if (input[4] <= 460.0) {
                                    if (input[20] <= 60.0) {
                                        memcpy(var0, (const double[]){0.7017543859649122, 0.2982456140350877}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.29411764705882354, 0.7058823529411765}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[4] <= 1516.0) {
                                        if (input[14] <= 752.5) {
                                            memcpy(var0, (const double[]){0.8064516129032258, 0.1935483870967742}, 2 * sizeof(double));
                                        } else {
                                            if (input[26] <= 30.5) {
                                                if (input[38] <= 314.0705032348633) {
                                                    memcpy(var0, (const double[]){0.0998185117967332, 0.9001814882032668}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[14] <= 2911.5) {
                                                    memcpy(var0, (const double[]){0.4926829268292683, 0.5073170731707317}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.13011152416356878, 0.8698884758364313}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.5223880597014925, 0.47761194029850745}, 2 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[16] <= 19.5) {
                                if (input[18] <= 44.0) {
                                    if (input[18] <= -788.0) {
                                        memcpy(var0, (const double[]){0.9360730593607306, 0.0639269406392694}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.7777777777777778, 0.2222222222222222}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.5621621621621622, 0.43783783783783786}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[4] <= 680.0) {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.9145569620253164, 0.08544303797468354}, 2 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[14] <= 26093.0) {
                            memcpy(var0, (const double[]){0.9338422391857506, 0.06615776081424936}, 2 * sizeof(double));
                        } else {
                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    }
                }
            }
        }
    }
    memcpy(output, var0, 2 * sizeof(double));
}
