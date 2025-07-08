//RAMIRO - VTM 16.2 - Otimização Inter-Quadros - Implementação de DTs na Affine

#include "DT_AME_64x32.h"

#include <string.h>
void DT_AME_64x32::score(double * input, double * output) {
    double var0[2];
    if (input[9] <= 1.5) {
        if (input[27] <= 0.5) {
            if (input[8] <= 2.5) {
                if (input[36] <= 55557.0) {
                    if (input[8] <= 1.5) {
                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        if (input[9] <= 0.5) {
                            memcpy(var0, (const double[]){0.9979914933837429, 0.002008506616257089}, 2 * sizeof(double));
                        } else {
                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                        }
                    }
                } else {
                    if (input[14] <= 299577.5) {
                        if (input[26] <= 45.5) {
                            if (input[15] <= 14011.0) {
                                if (input[26] <= 28.5) {
                                    if (input[22] <= 3587.0) {
                                        memcpy(var0, (const double[]){0.1606864274570983, 0.8393135725429017}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.3836734693877551, 0.6163265306122448}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[1] <= 2.5) {
                                        if (input[26] <= 35.0) {
                                            if (input[26] <= 31.5) {
                                                memcpy(var0, (const double[]){0.061061946902654866, 0.9389380530973451}, 2 * sizeof(double));
                                            } else {
                                                if (input[5] <= 624.0) {
                                                    if (input[15] <= 2947.0) {
                                                        memcpy(var0, (const double[]){0.22772277227722773, 0.7722772277227723}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.6775818639798489, 0.3224181360201511}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.017543859649122806, 0.9824561403508771}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            if (input[0] <= 34.5) {
                                                memcpy(var0, (const double[]){0.04676018704074816, 0.9532398129592519}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.19460067491563554, 0.8053993250843644}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.17577948486217804, 0.8242205151378219}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[20] <= -360.0) {
                                    if (input[38] <= 135.80599975585938) {
                                        if (input[16] <= 31.5) {
                                            memcpy(var0, (const double[]){0.25758411472697185, 0.7424158852730282}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.4912891986062718, 0.5087108013937283}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[25] <= 1.5) {
                                            memcpy(var0, (const double[]){0.1984313725490196, 0.8015686274509803}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.1049498746867168, 0.8950501253132832}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[26] <= 35.5) {
                                        if (input[28] <= 20113.0) {
                                            if (input[43] <= 112.32050323486328) {
                                                if (input[5] <= 496.0) {
                                                    if (input[25] <= 2.5) {
                                                        if (input[1] <= 2.5) {
                                                            memcpy(var0, (const double[]){0.5029171528588098, 0.4970828471411902}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.27594627594627597, 0.724053724053724}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.25520333013128405, 0.744796669868716}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.22578433053317332, 0.7742156694668266}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.14123222748815165, 0.8587677725118483}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[16] <= 15.5) {
                                                if (input[34] <= 14537.0) {
                                                    memcpy(var0, (const double[]){0.19294117647058823, 0.8070588235294117}, 2 * sizeof(double));
                                                } else {
                                                    if (input[1] <= 2.5) {
                                                        if (input[34] <= 2147764668.5) {
                                                            memcpy(var0, (const double[]){0.6287128712871287, 0.3712871287128713}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.21518987341772153, 0.7848101265822784}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.3273809523809524, 0.6726190476190477}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[2] <= 0.5) {
                                                    if (input[28] <= 161715.5) {
                                                        if (input[33] <= 0.5) {
                                                            memcpy(var0, (const double[]){0.5905707196029777, 0.4094292803970223}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, (const double[]){0.20754716981132076, 0.7924528301886793}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, (const double[]){0.8287292817679558, 0.1712707182320442}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.21951219512195122, 0.7804878048780488}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[5] <= 2032.0) {
                                            if (input[1] <= 2.5) {
                                                if (input[44] <= 20.462249755859375) {
                                                    if (input[15] <= 18853.0) {
                                                        memcpy(var0, (const double[]){0.5300546448087432, 0.46994535519125685}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[15] <= 51083.5) {
                                                            memcpy(var0, (const double[]){0.07883082373782108, 0.9211691762621789}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[4] <= 1888.0) {
                                                                memcpy(var0, (const double[]){0.19597267170082705, 0.804027328299173}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[22] <= 15608.5) {
                                                                    memcpy(var0, (const double[]){0.7530864197530864, 0.24691358024691357}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.2751322751322751, 0.7248677248677249}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (input[15] <= 61899.0) {
                                                        if (input[18] <= -152.0) {
                                                            memcpy(var0, (const double[]){0.07127429805615551, 0.9287257019438445}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[0] <= 34.5) {
                                                                memcpy(var0, (const double[]){0.136431784107946, 0.863568215892054}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[5] <= 368.0) {
                                                                    memcpy(var0, (const double[]){0.6701030927835051, 0.32989690721649484}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, (const double[]){0.29523809523809524, 0.7047619047619048}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (input[37] <= 210198.5) {
                                                            memcpy(var0, (const double[]){0.2056451612903226, 0.7943548387096774}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[23] <= 22.0) {
                                                                if (input[22] <= 26191.5) {
                                                                    memcpy(var0, (const double[]){0.4082125603864734, 0.5917874396135265}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[44] <= 30.06659984588623) {
                                                                        memcpy(var0, (const double[]){0.9090909090909091, 0.09090909090909091}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var0, (const double[]){0.5762273901808785, 0.42377260981912146}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                memcpy(var0, (const double[]){0.24079320113314448, 0.7592067988668555}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                memcpy(var0, (const double[]){0.18541033434650456, 0.8145896656534954}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            memcpy(var0, (const double[]){0.007116499736425936, 0.9928835002635741}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[9] <= 0.5) {
                            if (input[22] <= 9223372036854820000.0) {
                                memcpy(var0, (const double[]){0.015479876160990712, 0.9845201238390093}, 2 * sizeof(double));
                            } else {
                                if (input[8] <= 0.5) {
                                    memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.8314014752370916, 0.16859852476290832}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[31] <= 2147760391.5) {
                                if (input[23] <= 23.5) {
                                    memcpy(var0, (const double[]){0.9784239186273502, 0.02157608137264975}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.8689567430025446, 0.13104325699745548}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[16] <= 7.5) {
                                    memcpy(var0, (const double[]){0.892436974789916, 0.10756302521008404}, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, (const double[]){0.6412078152753108, 0.35879218472468916}, 2 * sizeof(double));
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
                        if (input[22] <= 4000.5) {
                            memcpy(var0, (const double[]){0.6048387096774194, 0.3951612903225806}, 2 * sizeof(double));
                        } else {
                            memcpy(var0, (const double[]){0.9075364154528183, 0.09246358454718176}, 2 * sizeof(double));
                        }
                    } else {
                        memcpy(var0, (const double[]){0.9962653562653563, 0.0037346437346437345}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[22] <= 275806.0) {
                if (input[9] <= 0.5) {
                    if (input[14] <= 2147637582.0) {
                        memcpy(var0, (const double[]){0.9723620570526108, 0.0276379429473892}, 2 * sizeof(double));
                    } else {
                        if (input[8] <= 2.0) {
                            memcpy(var0, (const double[]){0.02468248262640786, 0.9753175173735922}, 2 * sizeof(double));
                        } else {
                            if (input[36] <= 55557.0) {
                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var0, (const double[]){0.8476190476190476, 0.1523809523809524}, 2 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if (input[14] <= 299769.0) {
                        if (input[36] <= 55557.0) {
                            memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                        } else {
                            if (input[16] <= 7.5) {
                                memcpy(var0, (const double[]){0.14351005484460694, 0.856489945155393}, 2 * sizeof(double));
                            } else {
                                memcpy(var0, (const double[]){0.0824375866851595, 0.9175624133148405}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[8] <= 1.5) {
                            if (input[16] <= 7.5) {
                                if (input[26] <= 33.0) {
                                    if (input[37] <= 1277010.5) {
                                        memcpy(var0, (const double[]){0.4972677595628415, 0.5027322404371585}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.7860082304526749, 0.2139917695473251}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[22] <= 27974.0) {
                                        memcpy(var0, (const double[]){0.8830242510699001, 0.11697574893009986}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.5841584158415841, 0.4158415841584158}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[8] <= 0.5) {
                                    if (input[20] <= -720.0) {
                                        memcpy(var0, (const double[]){0.48705882352941177, 0.5129411764705882}, 2 * sizeof(double));
                                    } else {
                                        if (input[2] <= 0.5) {
                                            memcpy(var0, (const double[]){0.3780160857908847, 0.6219839142091153}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.09065807639208467, 0.9093419236079153}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[32] <= 0.5) {
                                        if (input[28] <= 80930.0) {
                                            if (input[38] <= 54.35384941101074) {
                                                memcpy(var0, (const double[]){0.9411764705882353, 0.058823529411764705}, 2 * sizeof(double));
                                            } else {
                                                if (input[38] <= 207.64149475097656) {
                                                    if (input[39] <= 533.5809936523438) {
                                                        memcpy(var0, (const double[]){0.5186991869918699, 0.4813008130081301}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var0, (const double[]){0.2667509481668774, 0.7332490518331226}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var0, (const double[]){0.6842105263157895, 0.3157894736842105}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.782608695652174, 0.21739130434782608}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.18411552346570398, 0.8158844765342961}, 2 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            memcpy(var0, (const double[]){0.9303112313937754, 0.06968876860622462}, 2 * sizeof(double));
                        }
                    }
                }
            } else {
                if (input[36] <= 55557.0) {
                    memcpy(var0, (const double[]){0.00008556515786771627, 0.9999144348421323}, 2 * sizeof(double));
                } else {
                    if (input[8] <= 0.5) {
                        memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        if (input[3] <= 2.0) {
                            if (input[15] <= 9223372039002260000.0) {
                                memcpy(var0, (const double[]){0.9832985386221295, 0.016701461377870562}, 2 * sizeof(double));
                            } else {
                                memcpy(var0, (const double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[20] <= -372.0) {
                                if (input[8] <= 3.5) {
                                    if (input[38] <= 124.46649932861328) {
                                        memcpy(var0, (const double[]){0.9506172839506173, 0.04938271604938271}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.45017182130584193, 0.5498281786941581}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var0, (const double[]){0.9080459770114943, 0.09195402298850575}, 2 * sizeof(double));
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (input[36] <= 55557.0) {
            if (input[26] <= 30.5) {
                if (input[2] <= 0.5) {
                    memcpy(var0, (const double[]){0.12549019607843137, 0.8745098039215686}, 2 * sizeof(double));
                } else {
                    if (input[26] <= 24.5) {
                        memcpy(var0, (const double[]){0.7161290322580646, 0.2838709677419355}, 2 * sizeof(double));
                    } else {
                        if (input[22] <= 18913.5) {
                            memcpy(var0, (const double[]){0.22624434389140272, 0.7737556561085973}, 2 * sizeof(double));
                        } else {
                            memcpy(var0, (const double[]){0.4924924924924925, 0.5075075075075075}, 2 * sizeof(double));
                        }
                    }
                }
            } else {
                memcpy(var0, (const double[]){0.07459794613447006, 0.92540205386553}, 2 * sizeof(double));
            }
        } else {
            if (input[27] <= 0.5) {
                memcpy(var0, (const double[]){0.9821293696826324, 0.017870630317367575}, 2 * sizeof(double));
            } else {
                if (input[32] <= 0.5) {
                    if (input[8] <= 1.5) {
                        if (input[9] <= 2.5) {
                            if (input[16] <= 7.5) {
                                if (input[22] <= 53246.0) {
                                    if (input[34] <= 2147685976.0) {
                                        if (input[34] <= 7940.5) {
                                            if (input[22] <= 12287.0) {
                                                memcpy(var0, (const double[]){0.7897310513447433, 0.21026894865525672}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.49455337690631807, 0.5054466230936819}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.8504486540378864, 0.14955134596211367}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.4622823984526112, 0.5377176015473888}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.174496644295302, 0.825503355704698}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[8] <= 0.5) {
                                    if (input[20] <= -96.0) {
                                        memcpy(var0, (const double[]){0.38939670932358317, 0.6106032906764168}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.14852840520191649, 0.8514715947980835}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[16] <= 15.5) {
                                        if (input[38] <= 221.4445037841797) {
                                            if (input[26] <= 24.5) {
                                                memcpy(var0, (const double[]){0.6173913043478261, 0.3826086956521739}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.22413793103448276, 0.7758620689655172}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.7219730941704036, 0.27802690582959644}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[21] <= 160.0) {
                                            memcpy(var0, (const double[]){0.7759197324414716, 0.22408026755852842}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var0, (const double[]){0.36752136752136755, 0.6324786324786325}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            memcpy(var0, (const double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[9] <= 2.5) {
                            memcpy(var0, (const double[]){0.981674627156643, 0.018325372843357054}, 2 * sizeof(double));
                        } else {
                            if (input[14] <= 93104.0) {
                                if (input[18] <= -180.0) {
                                    if (input[29] <= 0.5) {
                                        if (input[39] <= 1759.2799682617188) {
                                            memcpy(var0, (const double[]){0.915758896151053, 0.08424110384894698}, 2 * sizeof(double));
                                        } else {
                                            if (input[28] <= 31542.5) {
                                                memcpy(var0, (const double[]){0.5146443514644351, 0.48535564853556484}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.8297872340425532, 0.1702127659574468}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.5224913494809689, 0.47750865051903113}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[44] <= 26.528099060058594) {
                                        if (input[5] <= 648.0) {
                                            if (input[22] <= 3888.5) {
                                                memcpy(var0, (const double[]){0.9550561797752809, 0.0449438202247191}, 2 * sizeof(double));
                                            } else {
                                                if (input[4] <= 1760.0) {
                                                    memcpy(var0, (const double[]){0.5215479331574319, 0.47845206684256814}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var0, (const double[]){0.9661016949152542, 0.03389830508474576}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.8595419847328244, 0.14045801526717558}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[28] <= 49379.5) {
                                            if (input[14] <= 8697.0) {
                                                memcpy(var0, (const double[]){0.5147058823529411, 0.4852941176470588}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.24152249134948098, 0.758477508650519}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, (const double[]){0.6039215686274509, 0.396078431372549}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                memcpy(var0, (const double[]){0.9931972789115646, 0.006802721088435374}, 2 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if (input[9] <= 2.5) {
                        if (input[8] <= 1.5) {
                            if (input[16] <= 7.5) {
                                if (input[22] <= 52684.0) {
                                    if (input[26] <= 33.0) {
                                        memcpy(var0, (const double[]){0.3900709219858156, 0.6099290780141844}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, (const double[]){0.7377892030848329, 0.2622107969151671}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var0, (const double[]){0.030303030303030304, 0.9696969696969697}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var0, (const double[]){0.11909262759924386, 0.8809073724007561}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var0, (const double[]){0.9387457462323773, 0.06125425376762275}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[14] <= 2147550927.5) {
                            if (input[18] <= -2944.0) {
                                memcpy(var0, (const double[]){0.9672131147540983, 0.03278688524590164}, 2 * sizeof(double));
                            } else {
                                if (input[14] <= 5275.5) {
                                    memcpy(var0, (const double[]){0.782608695652174, 0.21739130434782608}, 2 * sizeof(double));
                                } else {
                                    if (input[4] <= 1952.0) {
                                        if (input[26] <= 40.5) {
                                            memcpy(var0, (const double[]){0.15634771732332708, 0.8436522826766729}, 2 * sizeof(double));
                                        } else {
                                            if (input[39] <= 2591.1600341796875) {
                                                memcpy(var0, (const double[]){0.5692307692307692, 0.4307692307692308}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, (const double[]){0.18072289156626506, 0.8192771084337349}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        memcpy(var0, (const double[]){0.5454545454545454, 0.45454545454545453}, 2 * sizeof(double));
                                    }
                                }
                            }
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
