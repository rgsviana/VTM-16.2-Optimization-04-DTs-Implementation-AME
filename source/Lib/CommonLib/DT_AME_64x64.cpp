//RAMIRO - VTM 16.2 - Otimização Inter-Quadros - Implementação de DTs na Affine

#include "DT_AME_64x64.h"

#include <string.h>
void DT_AME_64x64::score(double * input, double * output) {
    double var0[2];
    if (input[9] <= 1.5) {
        if (input[35] <= 0.5) {
            if (input[8] <= 2.5) {
                if (input[36] <= 55557.0) {
                    if (input[9] <= 0.5) {
                        if (input[8] <= 1.5) {
                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                        } else {
                            memcpy(var0, (const double[]){0.9977064220183486, 0.0022935779816513763}, 2 * sizeof(double));
                        }
                    } else {
                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[9] <= 0.5) {
                        if (input[8] <= 0.5) {
                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                        } else {
                            if (input[22] <= 9223372036854876000.0) {
                                if (input[17] <= 3.0) {
                                    if (input[24] <= 0.5) {
                                        if (input[4] <= 1184.0) {
                                            if (input[18] <= -34.0) {
                                                if (input[20] <= 4.0) {
                                                    memcpy(var0, (const double[]){0.8715596330275229, 0.12844036697247707}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.02654867256637168, 0.9734513274336283}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.10898965791567224, 0.8910103420843277}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.005253940455341506, 0.9947460595446584}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[20] <= -356.0) {
                                    if (input[2] <= 0.5) {
                                        memcpy(var0, (const double[]){0.573943661971831, 0.426056338028169}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.8961424332344213, 0.10385756676557864}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.957418496340652, 0.04258150365934797}, 2 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[8] <= 1.5) {
                            if (input[2] <= 0.5) {
                                if (input[27] <= 0.5) {
                                    if (input[24] <= 0.5) {
                                        memcpy(var0, (const double[]){0.9521800281293952, 0.04781997187060478}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.9949494949494949, 0.005050505050505051}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[16] <= 7.5) {
                                        memcpy(var0, (const double[]){0.8093587521663779, 0.19064124783362218}, 2 * sizeof(double));
                                    } else {
                                        if (input[29] <= 0.5) {
                                            memcpy(var0, (const double[]){0.6267190569744597, 0.37328094302554027}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.24568965517241378, 0.7543103448275862}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[27] <= 0.5) {
                                    if (input[26] <= 40.5) {
                                        if (input[18] <= 8.0) {
                                            if (input[22] <= 24607.5) {
                                                memcpy(var0, (const double[]){0.8168264110756124, 0.18317358892438765}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.5666666666666667, 0.43333333333333335}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.35234215885947046, 0.6476578411405295}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.9727272727272728, 0.02727272727272727}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[38] <= 218.23450469970703) {
                                        if (input[8] <= 0.5) {
                                            if (input[20] <= 88.0) {
                                                memcpy(var0, (const double[]){0.1687624090006618, 0.8312375909993381}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.021917808219178082, 0.9780821917808219}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[18] <= -2856.0) {
                                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[23] <= 26.0) {
                                                    memcpy(var0, (const double[]){0.37652582159624415, 0.6234741784037559}, 2 * sizeof(double));
                                                } else {
                                                    if (input[26] <= 24.5) {
                                                        memcpy(var0, (const double[]){0.5602836879432624, 0.4397163120567376}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.14074074074074075, 0.8592592592592593}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.47560975609756095, 0.524390243902439}, 2 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[28] <= 328327.5) {
                                if (input[3] <= 1.0) {
                                    if (input[43] <= 64.01169967651367) {
                                        if (input[43] <= 13.664050102233887) {
                                            if (input[16] <= 9.5) {
                                                if (input[40] <= 15064.0) {
                                                    if (input[25] <= 2.5) {
                                                        if (input[14] <= 27235.0) {
                                                            memcpy(var0, (const double[]){0.46867167919799496, 0.531328320802005}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.7598499061913696, 0.2401500938086304}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[15] <= 21174.5) {
                                                            memcpy(var0, (const double[]){0.6395348837209303, 0.36046511627906974}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.24821428571428572, 0.7517857142857143}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[43] <= 8.00780987739563) {
                                                        memcpy(var0, (const double[]){0.1658291457286432, 0.8341708542713567}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.7117117117117117, 0.2882882882882883}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[15] <= 14293.0) {
                                                    memcpy(var0, (const double[]){0.5733333333333334, 0.4266666666666667}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.11826136042901496, 0.8817386395709851}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            if (input[16] <= 11.5) {
                                                if (input[37] <= 34868.5) {
                                                    memcpy(var0, (const double[]){0.1794871794871795, 0.8205128205128205}, 2 * sizeof(double));
                                                } else {
                                                    if (input[26] <= 35.5) {
                                                        if (input[44] <= 10.926149845123291) {
                                                            if (input[38] <= 95.19189834594727) {
                                                                memcpy(var0, (const double[]){0.8444846292947559, 0.15551537070524413}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, (const double[]){0.36875, 0.63125}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var0, (const double[]){0.3878437047756874, 0.6121562952243126}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[31] <= 12433.0) {
                                                            memcpy(var0, (const double[]){0.6134533396494553, 0.38654666035054475}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.7577108881456708, 0.24228911185432925}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.2898550724637681, 0.7101449275362319}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[26] <= 24.5) {
                                            if (input[25] <= 2.0) {
                                                memcpy(var0, (const double[]){0.2392857142857143, 0.7607142857142857}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.05299684542586751, 0.9470031545741325}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[20] <= -328.0) {
                                                memcpy(var0, (const double[]){0.11323102447117378, 0.8867689755288262}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.22380847792664177, 0.7761915220733582}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                } else {
                                    if (input[26] <= 39.0) {
                                        if (input[37] <= 1362077.5) {
                                            if (input[26] <= 33.0) {
                                                if (input[14] <= 7907.5) {
                                                    memcpy(var0, (const double[]){0.2291904218928164, 0.7708095781071835}, 2 * sizeof(double));
                                                } else {
                                                    if (input[0] <= 24.5) {
                                                        memcpy(var0, (const double[]){0.5124223602484472, 0.48757763975155277}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[22] <= 29367.5) {
                                                            memcpy(var0, (const double[]){0.2369995398067188, 0.7630004601932812}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.5218241042345277, 0.4781758957654723}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[14] <= 11623.0) {
                                                    memcpy(var0, (const double[]){0.14947368421052631, 0.8505263157894737}, 2 * sizeof(double));
                                                } else {
                                                    if (input[38] <= 28.02014923095703) {
                                                        memcpy(var0, (const double[]){0.7986577181208053, 0.20134228187919462}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[14] <= 125822.0) {
                                                            memcpy(var0, (const double[]){0.2774133083411434, 0.7225866916588566}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.9047619047619048, 0.09523809523809523}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[10] <= -8.0) {
                                                memcpy(var0, (const double[]){0.12446892210857592, 0.875531077891424}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.2302176696542894, 0.7697823303457106}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.14448594456457636, 0.8555140554354236}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[28] <= 1318930.0) {
                                    memcpy(var0, (const double[]){0.11186696900982615, 0.8881330309901738}, 2 * sizeof(double));
                                } else {
                                    if (input[26] <= 34.5) {
                                        memcpy(var0, (const double[]){0.13256113256113256, 0.8674388674388674}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.01694915254237288, 0.9830508474576272}, 2 * sizeof(double));
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
                    if (input[16] <= 8.5) {
                        if (input[27] <= 0.5) {
                            if (input[9] <= 0.5) {
                                memcpy(var0, (const double[]){0.9467802022352315, 0.05321979776476849}, 2 * sizeof(double));
                            } else {
                                memcpy(var0, (const double[]){0.9963844531485387, 0.0036155468514612837}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var0, (const double[]){0.9234188034188034, 0.07658119658119658}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[28] <= 113737.0) {
                            if (input[9] <= 0.5) {
                                if (input[8] <= 3.5) {
                                    memcpy(var0, (const double[]){0.762962962962963, 0.23703703703703705}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.9902794653705954, 0.009720534629404616}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[27] <= 0.5) {
                                    memcpy(var0, (const double[]){0.9927378358750908, 0.007262164124909223}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.8971774193548387, 0.1028225806451613}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var0, (const double[]){0.9645010046885466, 0.03549899531145345}, 2 * sizeof(double));
                        }
                    }
                }
            }
        } else {
            if (input[22] <= 9223372036855065000.0) {
                if (input[9] <= 0.5) {
                    if (input[15] <= 9223372039002260000.0) {
                        if (input[17] <= 3.0) {
                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                        } else {
                            memcpy(var0, (const double[]){0.9673590504451038, 0.032640949554896145}, 2 * sizeof(double));
                        }
                    } else {
                        memcpy(var0, (const double[]){0.9833378124160173, 0.0166621875839828}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        }
    } else {
        if (input[27] <= 0.5) {
            if (input[36] <= 55557.0) {
                if (input[31] <= 177184.0) {
                    memcpy(var0, (const double[]){0.20187793427230047, 0.7981220657276995}, 2 * sizeof(double));
                } else {
                    memcpy(var0, (const double[]){0.6335078534031413, 0.36649214659685864}, 2 * sizeof(double));
                }
            } else {
                if (input[3] <= 1.0) {
                    if (input[8] <= 1.5) {
                        if (input[22] <= 15104.0) {
                            memcpy(var0, (const double[]){0.9408866995073891, 0.059113300492610835}, 2 * sizeof(double));
                        } else {
                            if (input[9] <= 2.5) {
                                if (input[26] <= 44.0) {
                                    memcpy(var0, (const double[]){0.6434329065908013, 0.3565670934091987}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[9] <= 2.5) {
                            memcpy(var0, (const double[]){0.9973481835057014, 0.0026518164942985947}, 2 * sizeof(double));
                        } else {
                            if (input[8] <= 2.5) {
                                if (input[14] <= 14408.0) {
                                    memcpy(var0, (const double[]){0.9758828596037898, 0.024117140396210164}, 2 * sizeof(double));
                                } else {
                                    if (input[18] <= -156.0) {
                                        memcpy(var0, (const double[]){0.9448144624167459, 0.05518553758325404}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.748191027496382, 0.25180897250361794}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if (input[9] <= 2.5) {
                        if (input[8] <= 1.5) {
                            memcpy(var0, (const double[]){0.982472447218165, 0.01752755278183508}, 2 * sizeof(double));
                        } else {
                            memcpy(var0, (const double[]){0.9986082115518441, 0.0013917884481558804}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[44] <= 24.98040008544922) {
                            memcpy(var0, (const double[]){0.9875026036242449, 0.012497396375755051}, 2 * sizeof(double));
                        } else {
                            memcpy(var0, (const double[]){0.9244372990353698, 0.07556270096463022}, 2 * sizeof(double));
                        }
                    }
                }
            }
        } else {
            if (input[36] <= 55557.0) {
                if (input[3] <= 1.0) {
                    if (input[0] <= 29.5) {
                        if (input[36] <= 1.5) {
                            memcpy(var0, (const double[]){0.6853582554517134, 0.3146417445482866}, 2 * sizeof(double));
                        } else {
                            memcpy(var0, (const double[]){0.392914653784219, 0.607085346215781}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[28] <= 136299.5) {
                            memcpy(var0, (const double[]){0.049939098660170524, 0.9500609013398295}, 2 * sizeof(double));
                        } else {
                            memcpy(var0, (const double[]){0.28362573099415206, 0.716374269005848}, 2 * sizeof(double));
                        }
                    }
                } else {
                    memcpy(var0, (const double[]){0.07444907683144729, 0.9255509231685527}, 2 * sizeof(double));
                }
            } else {
                if (input[8] <= 2.5) {
                    if (input[29] <= 0.5) {
                        if (input[8] <= 1.5) {
                            if (input[16] <= 29.5) {
                                if (input[9] <= 2.5) {
                                    if (input[3] <= 1.0) {
                                        if (input[8] <= 0.5) {
                                            if (input[16] <= 7.5) {
                                                memcpy(var0, (const double[]){0.49356223175965663, 0.5064377682403434}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.16096866096866097, 0.8390313390313391}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[21] <= 160.0) {
                                                if (input[16] <= 17.5) {
                                                    if (input[22] <= 24636.5) {
                                                        memcpy(var0, (const double[]){0.6387832699619772, 0.3612167300380228}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.37252685132843416, 0.6274731486715659}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.7620396600566572, 0.23796033994334279}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.1631578947368421, 0.8368421052631579}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[16] <= 7.5) {
                                            memcpy(var0, (const double[]){0.837708830548926, 0.162291169451074}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.5780510879848628, 0.4219489120151372}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[9] <= 2.5) {
                                    memcpy(var0, (const double[]){0.6211453744493393, 0.3788546255506608}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[9] <= 2.5) {
                                memcpy(var0, (const double[]){0.9934992570579495, 0.00650074294205052}, 2 * sizeof(double));
                            } else {
                                if (input[18] <= -180.0) {
                                    if (input[20] <= 268.0) {
                                        if (input[32] <= 0.5) {
                                            memcpy(var0, (const double[]){0.8634028407373829, 0.13659715926261712}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.5179856115107914, 0.48201438848920863}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.4976958525345622, 0.5023041474654378}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[4] <= 1440.0) {
                                        if (input[14] <= 10528.5) {
                                            memcpy(var0, (const double[]){0.8331015299026425, 0.16689847009735745}, 2 * sizeof(double));
                                        } else {
                                            if (input[32] <= 0.5) {
                                                if (input[19] <= -484.0) {
                                                    memcpy(var0, (const double[]){0.9655172413793104, 0.034482758620689655}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.4602053915275995, 0.5397946084724005}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.22088353413654618, 0.7791164658634538}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[16] <= 25.5) {
                                            memcpy(var0, (const double[]){0.7075, 0.2925}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.9573333333333334, 0.042666666666666665}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[16] <= 7.5) {
                            if (input[9] <= 2.5) {
                                if (input[8] <= 1.5) {
                                    memcpy(var0, (const double[]){0.5743243243243243, 0.42567567567567566}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.9953271028037384, 0.004672897196261682}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var0, (const double[]){0.4336917562724014, 0.5663082437275986}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[20] <= -1896.0) {
                                memcpy(var0, (const double[]){0.8101694915254237, 0.18983050847457628}, 2 * sizeof(double));
                            } else {
                                if (input[22] <= 12894.5) {
                                    memcpy(var0, (const double[]){0.6912751677852349, 0.3087248322147651}, 2 * sizeof(double));
                                } else {
                                    if (input[31] <= 20566.0) {
                                        if (input[4] <= 1888.0) {
                                            memcpy(var0, (const double[]){0.175305381313965, 0.824694618686035}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.6285714285714286, 0.37142857142857144}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[9] <= 2.5) {
                                            if (input[8] <= 1.5) {
                                                memcpy(var0, (const double[]){0.24742268041237114, 0.7525773195876289}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.9615384615384616, 0.038461538461538464}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[14] <= 193667.0) {
                                                memcpy(var0, (const double[]){0.24829157175398633, 0.7517084282460137}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.9615384615384616, 0.038461538461538464}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[9] <= 2.5) {
                        memcpy(var0, (const double[]){0.9537750385208013, 0.046224961479198766}, 2 * sizeof(double));
                    } else {
                        memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    memcpy(output, var0, 2 * sizeof(double));
}
