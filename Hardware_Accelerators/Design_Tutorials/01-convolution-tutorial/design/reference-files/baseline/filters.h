
float gaussian[3 * 3] = {0.0625, 0.125, 0.0625,
                          0.125,  0.25,  0.125,
                         0.0625, 0.125, 0.0625};

float sobel[3 * 3] = {1, 0, -1,
                      2, 0, -2,
                      1, 0, -1};

float emboss[3 * 3] = {-2, -1, 0,
                       -1,  1, 1,
                        0,  1, 2};

float sharpen[3 * 3] = { 0, -1,  0,
                        -1,  5, -1,
                         0, -1,  0};

// sigma = 2
float gaussianLarge[19 * 19] = {0,        0,        0,        0,        0,        0,        0.000001, 0.000001, 0.000002, 0.000002, 0.000002, 0.000001, 0.000001, 0,        0,        0,        0,        0,        0,
                                0,        0,        0,        0,        0.000001, 0.000002, 0.000005, 0.000009, 0.000014, 0.000015, 0.000014, 0.000009, 0.000005, 0.000002, 0.000001, 0,        0,        0,        0,
                                0,        0,        0,        0.000001, 0.000005, 0.000014, 0.000032, 0.000059, 0.000085, 0.000097, 0.000085, 0.000059, 0.000032, 0.000014, 0.000005, 0.000001, 0,        0,        0,
                                0,        0,        0.000001, 0.000006, 0.000022, 0.000067, 0.000158, 0.000291, 0.00042,  0.000474, 0.00042,  0.000291, 0.000158, 0.000067, 0.000022, 0.000006, 0.000001, 0,        0,
                                0,        0.000001, 0.000005, 0.000022, 0.000085, 0.000257, 0.000606, 0.001118, 0.001615, 0.001825, 0.001615, 0.001118, 0.000606, 0.000257, 0.000085, 0.000022, 0.000005, 0.000001, 0,
                                0,        0.000002, 0.000014, 0.000067, 0.000257, 0.000775, 0.001826, 0.003367, 0.004862, 0.005495, 0.004862, 0.003367, 0.001826, 0.000775, 0.000257, 0.000067, 0.000014, 0.000002, 0,
                                0.000001, 0.000005, 0.000032, 0.000158, 0.000606, 0.001826, 0.004302, 0.007935, 0.011457, 0.012949, 0.011457, 0.007935, 0.004302, 0.001826, 0.000606, 0.000158, 0.000032, 0.000005, 0.000001,
                                0.000001, 0.000009, 0.000059, 0.000291, 0.001118, 0.003367, 0.007935, 0.014636, 0.021131, 0.023883, 0.021131, 0.014636, 0.007935, 0.003367, 0.001118, 0.000291, 0.000059, 0.000009, 0.000001,
                                0.000002, 0.000014, 0.000085, 0.00042,  0.001615, 0.004862, 0.011457, 0.021131, 0.030509, 0.034482, 0.030509, 0.021131, 0.011457, 0.004862, 0.001615, 0.00042,  0.000085, 0.000014, 0.000002,
                                0.000002, 0.000015, 0.000097, 0.000474, 0.001825, 0.005495, 0.012949, 0.023883, 0.034482, 0.038972, 0.034482, 0.023883, 0.012949, 0.005495, 0.001825, 0.000474, 0.000097, 0.000015, 0.000002,
                                0.000002, 0.000014, 0.000085, 0.00042,  0.001615, 0.004862, 0.011457, 0.021131, 0.030509, 0.034482, 0.030509, 0.021131, 0.011457, 0.004862, 0.001615, 0.00042,  0.000085, 0.000014, 0.000002,
                                0.000001, 0.000009, 0.000059, 0.000291, 0.001118, 0.003367, 0.007935, 0.014636, 0.021131, 0.023883, 0.021131, 0.014636, 0.007935, 0.003367, 0.001118, 0.000291, 0.000059, 0.000009, 0.000001,
                                0.000001, 0.000005, 0.000032, 0.000158, 0.000606, 0.001826, 0.004302, 0.007935, 0.011457, 0.012949, 0.011457, 0.007935, 0.004302, 0.001826, 0.000606, 0.000158, 0.000032, 0.000005, 0.000001,
                                0,        0.000002, 0.000014, 0.000067, 0.000257, 0.000775, 0.001826, 0.003367, 0.004862, 0.005495, 0.004862, 0.003367, 0.001826, 0.000775, 0.000257, 0.000067, 0.000014, 0.000002, 0,
                                0,        0.000001, 0.000005, 0.000022, 0.000085, 0.000257, 0.000606, 0.001118, 0.001615, 0.001825, 0.001615, 0.001118, 0.000606, 0.000257, 0.000085, 0.000022, 0.000005, 0.000001, 0,
                                0,        0,        0.000001, 0.000006, 0.000022, 0.000067, 0.000158, 0.000291, 0.00042,  0.000474, 0.00042,  0.000291, 0.000158, 0.000067, 0.000022, 0.000006, 0.000001, 0,        0,
                                0,        0,        0,        0.000001, 0.000005, 0.000014, 0.000032, 0.000059, 0.000085, 0.000097, 0.000085, 0.000059, 0.000032, 0.000014, 0.000005, 0.000001, 0,        0,        0,
                                0,        0,        0,        0,        0.000001, 0.000002, 0.000005, 0.000009, 0.000014, 0.000015, 0.000014, 0.000009, 0.000005, 0.000002, 0.000001, 0,        0,        0,        0,
                                0,        0,        0,        0,        0,        0,        0.000001, 0.000001, 0.000002, 0.000002, 0.000002, 0.000001, 0.000001, 0,        0,        0,        0,        0,        0};