/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#pragma once

#if F_CPU == 16000000

  const uint16_t speed_lookuptable_fast[256][2] PROGMEM = {
    { 62500, 55556}, { 6944, 3268}, { 3676, 1176}, { 2500, 607}, { 1893, 369}, { 1524, 249}, { 1275, 179}, { 1096, 135},
    { 961, 105}, { 856, 85}, { 771, 69}, { 702, 58}, { 644, 49}, { 595, 42}, { 553, 37}, { 516, 32},
    { 484, 28}, { 456, 25}, { 431, 23}, { 408, 20}, { 388, 19}, { 369, 16}, { 353, 16}, { 337, 14},
    { 323, 13}, { 310, 11}, { 299, 11}, { 288, 11}, { 277, 9}, { 268, 9}, { 259, 8}, { 251, 8},
    { 243, 8}, { 235, 7}, { 228, 6}, { 222, 6}, { 216, 6}, { 210, 6}, { 204, 5}, { 199, 5},
    { 194, 5}, { 189, 4}, { 185, 4}, { 181, 4}, { 177, 4}, { 173, 4}, { 169, 4}, { 165, 3},
    { 162, 3}, { 159, 4}, { 155, 3}, { 152, 3}, { 149, 2}, { 147, 3}, { 144, 3}, { 141, 2},
    { 139, 3}, { 136, 2}, { 134, 2}, { 132, 3}, { 129, 2}, { 127, 2}, { 125, 2}, { 123, 2},
    { 121, 2}, { 119, 1}, { 118, 2}, { 116, 2}, { 114, 1}, { 113, 2}, { 111, 2}, { 109, 1},
    { 108, 2}, { 106, 1}, { 105, 2}, { 103, 1}, { 102, 1}, { 101, 1}, { 100, 2}, { 98, 1},
    { 97, 1}, { 96, 1}, { 95, 2}, { 93, 1}, { 92, 1}, { 91, 1}, { 90, 1}, { 89, 1},
    { 88, 1}, { 87, 1}, { 86, 1}, { 85, 1}, { 84, 1}, { 83, 0}, { 83, 1}, { 82, 1},
    { 81, 1}, { 80, 1}, { 79, 1}, { 78, 0}, { 78, 1}, { 77, 1}, { 76, 1}, { 75, 0},
    { 75, 1}, { 74, 1}, { 73, 1}, { 72, 0}, { 72, 1}, { 71, 1}, { 70, 0}, { 70, 1},
    { 69, 0}, { 69, 1}, { 68, 1}, { 67, 0}, { 67, 1}, { 66, 0}, { 66, 1}, { 65, 0},
    { 65, 1}, { 64, 1}, { 63, 0}, { 63, 1}, { 62, 0}, { 62, 1}, { 61, 0}, { 61, 1},
    { 60, 0}, { 60, 0}, { 60, 1}, { 59, 0}, { 59, 1}, { 58, 0}, { 58, 1}, { 57, 0},
    { 57, 1}, { 56, 0}, { 56, 0}, { 56, 1}, { 55, 0}, { 55, 1}, { 54, 0}, { 54, 0},
    { 54, 1}, { 53, 0}, { 53, 0}, { 53, 1}, { 52, 0}, { 52, 0}, { 52, 1}, { 51, 0},
    { 51, 0}, { 51, 1}, { 50, 0}, { 50, 0}, { 50, 1}, { 49, 0}, { 49, 0}, { 49, 1},
    { 48, 0}, { 48, 0}, { 48, 1}, { 47, 0}, { 47, 0}, { 47, 0}, { 47, 1}, { 46, 0},
    { 46, 0}, { 46, 1}, { 45, 0}, { 45, 0}, { 45, 0}, { 45, 1}, { 44, 0}, { 44, 0},
    { 44, 0}, { 44, 1}, { 43, 0}, { 43, 0}, { 43, 0}, { 43, 1}, { 42, 0}, { 42, 0},
    { 42, 0}, { 42, 1}, { 41, 0}, { 41, 0}, { 41, 0}, { 41, 0}, { 41, 1}, { 40, 0},
    { 40, 0}, { 40, 0}, { 40, 0}, { 40, 1}, { 39, 0}, { 39, 0}, { 39, 0}, { 39, 0},
    { 39, 1}, { 38, 0}, { 38, 0}, { 38, 0}, { 38, 0}, { 38, 1}, { 37, 0}, { 37, 0},
    { 37, 0}, { 37, 0}, { 37, 0}, { 37, 1}, { 36, 0}, { 36, 0}, { 36, 0}, { 36, 0},
    { 36, 1}, { 35, 0}, { 35, 0}, { 35, 0}, { 35, 0}, { 35, 0}, { 35, 0}, { 35, 1},
    { 34, 0}, { 34, 0}, { 34, 0}, { 34, 0}, { 34, 0}, { 34, 1}, { 33, 0}, { 33, 0},
    { 33, 0}, { 33, 0}, { 33, 0}, { 33, 0}, { 33, 1}, { 32, 0}, { 32, 0}, { 32, 0},
    { 32, 0}, { 32, 0}, { 32, 0}, { 32, 0}, { 32, 1}, { 31, 0}, { 31, 0}, { 31, 0},
    { 31, 0}, { 31, 0}, { 31, 0}, { 31, 1}, { 30, 0}, { 30, 0}, { 30, 0}, { 30, 0}
  };

  const uint16_t speed_lookuptable_slow[256][2] PROGMEM = {
    { 62500, 12500}, { 50000, 8334}, { 41666, 5952}, { 35714, 4464}, { 31250, 3473}, { 27777, 2777}, { 25000, 2273}, { 22727, 1894},
    { 20833, 1603}, { 19230, 1373}, { 17857, 1191}, { 16666, 1041}, { 15625, 920}, { 14705, 817}, { 13888, 731}, { 13157, 657},
    { 12500, 596}, { 11904, 541}, { 11363, 494}, { 10869, 453}, { 10416, 416}, { 10000, 385}, { 9615, 356}, { 9259, 331},
    { 8928, 308}, { 8620, 287}, { 8333, 269}, { 8064, 252}, { 7812, 237}, { 7575, 223}, { 7352, 210}, { 7142, 198},
    { 6944, 188}, { 6756, 178}, { 6578, 168}, { 6410, 160}, { 6250, 153}, { 6097, 145}, { 5952, 139}, { 5813, 132},
    { 5681, 126}, { 5555, 121}, { 5434, 115}, { 5319, 111}, { 5208, 106}, { 5102, 102}, { 5000, 99}, { 4901, 94},
    { 4807, 91}, { 4716, 87}, { 4629, 84}, { 4545, 81}, { 4464, 79}, { 4385, 75}, { 4310, 73}, { 4237, 71},
    { 4166, 68}, { 4098, 66}, { 4032, 64}, { 3968, 62}, { 3906, 60}, { 3846, 59}, { 3787, 56}, { 3731, 55},
    { 3676, 53}, { 3623, 52}, { 3571, 50}, { 3521, 49}, { 3472, 48}, { 3424, 46}, { 3378, 45}, { 3333, 44},
    { 3289, 43}, { 3246, 41}, { 3205, 41}, { 3164, 39}, { 3125, 39}, { 3086, 38}, { 3048, 36}, { 3012, 36},
    { 2976, 35}, { 2941, 35}, { 2906, 33}, { 2873, 33}, { 2840, 32}, { 2808, 31}, { 2777, 30}, { 2747, 30},
    { 2717, 29}, { 2688, 29}, { 2659, 28}, { 2631, 27}, { 2604, 27}, { 2577, 26}, { 2551, 26}, { 2525, 25},
    { 2500, 25}, { 2475, 25}, { 2450, 23}, { 2427, 24}, { 2403, 23}, { 2380, 22}, { 2358, 22}, { 2336, 22},
    { 2314, 21}, { 2293, 21}, { 2272, 20}, { 2252, 20}, { 2232, 20}, { 2212, 20}, { 2192, 19}, { 2173, 18},
    { 2155, 19}, { 2136, 18}, { 2118, 18}, { 2100, 17}, { 2083, 17}, { 2066, 17}, { 2049, 17}, { 2032, 16},
    { 2016, 16}, { 2000, 16}, { 1984, 16}, { 1968, 15}, { 1953, 16}, { 1937, 14}, { 1923, 15}, { 1908, 15},
    { 1893, 14}, { 1879, 14}, { 1865, 14}, { 1851, 13}, { 1838, 14}, { 1824, 13}, { 1811, 13}, { 1798, 13},
    { 1785, 12}, { 1773, 13}, { 1760, 12}, { 1748, 12}, { 1736, 12}, { 1724, 12}, { 1712, 12}, { 1700, 11},
    { 1689, 12}, { 1677, 11}, { 1666, 11}, { 1655, 11}, { 1644, 11}, { 1633, 10}, { 1623, 11}, { 1612, 10},
    { 1602, 10}, { 1592, 10}, { 1582, 10}, { 1572, 10}, { 1562, 10}, { 1552, 9}, { 1543, 10}, { 1533, 9},
    { 1524, 9}, { 1515, 9}, { 1506, 9}, { 1497, 9}, { 1488, 9}, { 1479, 9}, { 1470, 9}, { 1461, 8},
    { 1453, 8}, { 1445, 9}, { 1436, 8}, { 1428, 8}, { 1420, 8}, { 1412, 8}, { 1404, 8}, { 1396, 8},
    { 1388, 7}, { 1381, 8}, { 1373, 7}, { 1366, 8}, { 1358, 7}, { 1351, 7}, { 1344, 8}, { 1336, 7},
    { 1329, 7}, { 1322, 7}, { 1315, 7}, { 1308, 6}, { 1302, 7}, { 1295, 7}, { 1288, 6}, { 1282, 7},
    { 1275, 6}, { 1269, 7}, { 1262, 6}, { 1256, 6}, { 1250, 7}, { 1243, 6}, { 1237, 6}, { 1231, 6},
    { 1225, 6}, { 1219, 6}, { 1213, 6}, { 1207, 6}, { 1201, 5}, { 1196, 6}, { 1190, 6}, { 1184, 5},
    { 1179, 6}, { 1173, 5}, { 1168, 6}, { 1162, 5}, { 1157, 5}, { 1152, 6}, { 1146, 5}, { 1141, 5},
    { 1136, 5}, { 1131, 5}, { 1126, 5}, { 1121, 5}, { 1116, 5}, { 1111, 5}, { 1106, 5}, { 1101, 5},
    { 1096, 5}, { 1091, 5}, { 1086, 4}, { 1082, 5}, { 1077, 5}, { 1072, 4}, { 1068, 5}, { 1063, 4},
    { 1059, 5}, { 1054, 4}, { 1050, 4}, { 1046, 5}, { 1041, 4}, { 1037, 4}, { 1033, 5}, { 1028, 4},
    { 1024, 4}, { 1020, 4}, { 1016, 4}, { 1012, 4}, { 1008, 4}, { 1004, 4}, { 1000, 4}, { 996, 4},
    { 992, 4}, { 988, 4}, { 984, 4}, { 980, 4}, { 976, 4}, { 972, 4}, { 968, 3}, { 965, 3}
  };

#elif F_CPU == 20000000

  const uint16_t speed_lookuptable_fast[256][2] PROGMEM = {
    {62500, 54055}, {8445, 3917}, {4528, 1434}, {3094, 745}, {2349, 456}, {1893, 307}, {1586, 222}, {1364, 167},
    {1197, 131}, {1066, 105}, {961, 86}, {875, 72}, {803, 61}, {742, 53}, {689, 45}, {644, 40},
    {604, 35}, {569, 32}, {537, 28}, {509, 25}, {484, 23}, {461, 21}, {440, 19}, {421, 17},
    {404, 16}, {388, 15}, {373, 14}, {359, 13}, {346, 12}, {334, 11}, {323, 10}, {313, 10},
    {303, 9}, {294, 9}, {285, 8}, {277, 7}, {270, 8}, {262, 7}, {255, 6}, {249, 6},
    {243, 6}, {237, 6}, {231, 5}, {226, 5}, {221, 5}, {216, 5}, {211, 4}, {207, 5},
    {202, 4}, {198, 4}, {194, 4}, {190, 3}, {187, 4}, {183, 3}, {180, 3}, {177, 4},
    {173, 3}, {170, 3}, {167, 2}, {165, 3}, {162, 3}, {159, 2}, {157, 3}, {154, 2},
    {152, 3}, {149, 2}, {147, 2}, {145, 2}, {143, 2}, {141, 2}, {139, 2}, {137, 2},
    {135, 2}, {133, 2}, {131, 2}, {129, 1}, {128, 2}, {126, 2}, {124, 1}, {123, 2},
    {121, 1}, {120, 2}, {118, 1}, {117, 1}, {116, 2}, {114, 1}, {113, 1}, {112, 2},
    {110, 1}, {109, 1}, {108, 1}, {107, 2}, {105, 1}, {104, 1}, {103, 1}, {102, 1},
    {101, 1}, {100, 1}, {99, 1}, {98, 1}, {97, 1}, {96, 1}, {95, 1}, {94, 1},
    {93, 1}, {92, 1}, {91, 0}, {91, 1}, {90, 1}, {89, 1}, {88, 1}, {87, 0},
    {87, 1}, {86, 1}, {85, 1}, {84, 0}, {84, 1}, {83, 1}, {82, 1}, {81, 0},
    {81, 1}, {80, 1}, {79, 0}, {79, 1}, {78, 0}, {78, 1}, {77, 1}, {76, 0},
    {76, 1}, {75, 0}, {75, 1}, {74, 1}, {73, 0}, {73, 1}, {72, 0}, {72, 1},
    {71, 0}, {71, 1}, {70, 0}, {70, 1}, {69, 0}, {69, 1}, {68, 0}, {68, 1},
    {67, 0}, {67, 1}, {66, 0}, {66, 1}, {65, 0}, {65, 0}, {65, 1}, {64, 0},
    {64, 1}, {63, 0}, {63, 1}, {62, 0}, {62, 0}, {62, 1}, {61, 0}, {61, 1},
    {60, 0}, {60, 0}, {60, 1}, {59, 0}, {59, 0}, {59, 1}, {58, 0}, {58, 0},
    {58, 1}, {57, 0}, {57, 0}, {57, 1}, {56, 0}, {56, 0}, {56, 1}, {55, 0},
    {55, 0}, {55, 1}, {54, 0}, {54, 0}, {54, 1}, {53, 0}, {53, 0}, {53, 0},
    {53, 1}, {52, 0}, {52, 0}, {52, 1}, {51, 0}, {51, 0}, {51, 0}, {51, 1},
    {50, 0}, {50, 0}, {50, 0}, {50, 1}, {49, 0}, {49, 0}, {49, 0}, {49, 1},
    {48, 0}, {48, 0}, {48, 0}, {48, 1}, {47, 0}, {47, 0}, {47, 0}, {47, 1},
    {46, 0}, {46, 0}, {46, 0}, {46, 0}, {46, 1}, {45, 0}, {45, 0}, {45, 0},
    {45, 1}, {44, 0}, {44, 0}, {44, 0}, {44, 0}, {44, 1}, {43, 0}, {43, 0},
    {43, 0}, {43, 0}, {43, 1}, {42, 0}, {42, 0}, {42, 0}, {42, 0}, {42, 0},
    {42, 1}, {41, 0}, {41, 0}, {41, 0}, {41, 0}, {41, 0}, {41, 1}, {40, 0},
    {40, 0}, {40, 0}, {40, 0}, {40, 1}, {39, 0}, {39, 0}, {39, 0}, {39, 0},
    {39, 0}, {39, 0}, {39, 1}, {38, 0}, {38, 0}, {38, 0}, {38, 0}, {38, 0},
  };

  const uint16_t speed_lookuptable_slow[256][2] PROGMEM = {
    {62500, 10417}, {52083, 7441}, {44642, 5580}, {39062, 4340}, {34722, 3472}, {31250, 2841}, {28409, 2368}, {26041, 2003},
    {24038, 1717}, {22321, 1488}, {20833, 1302}, {19531, 1149}, {18382, 1021}, {17361, 914}, {16447, 822}, {15625, 745},
    {14880, 676}, {14204, 618}, {13586, 566}, {13020, 520}, {12500, 481}, {12019, 445}, {11574, 414}, {11160, 385},
    {10775, 359}, {10416, 336}, {10080, 315}, {9765, 296}, {9469, 278}, {9191, 263}, {8928, 248}, {8680, 235},
    {8445, 222}, {8223, 211}, {8012, 200}, {7812, 191}, {7621, 181}, {7440, 173}, {7267, 165}, {7102, 158},
    {6944, 151}, {6793, 145}, {6648, 138}, {6510, 133}, {6377, 127}, {6250, 123}, {6127, 118}, {6009, 113},
    {5896, 109}, {5787, 106}, {5681, 101}, {5580, 98}, {5482, 95}, {5387, 91}, {5296, 88}, {5208, 86},
    {5122, 82}, {5040, 80}, {4960, 78}, {4882, 75}, {4807, 73}, {4734, 70}, {4664, 69}, {4595, 67},
    {4528, 64}, {4464, 63}, {4401, 61}, {4340, 60}, {4280, 58}, {4222, 56}, {4166, 55}, {4111, 53},
    {4058, 52}, {4006, 51}, {3955, 49}, {3906, 48}, {3858, 48}, {3810, 45}, {3765, 45}, {3720, 44},
    {3676, 43}, {3633, 42}, {3591, 40}, {3551, 40}, {3511, 39}, {3472, 38}, {3434, 38}, {3396, 36},
    {3360, 36}, {3324, 35}, {3289, 34}, {3255, 34}, {3221, 33}, {3188, 32}, {3156, 31}, {3125, 31},
    {3094, 31}, {3063, 30}, {3033, 29}, {3004, 28}, {2976, 28}, {2948, 28}, {2920, 27}, {2893, 27},
    {2866, 26}, {2840, 25}, {2815, 25}, {2790, 25}, {2765, 24}, {2741, 24}, {2717, 24}, {2693, 23},
    {2670, 22}, {2648, 22}, {2626, 22}, {2604, 22}, {2582, 21}, {2561, 21}, {2540, 20}, {2520, 20},
    {2500, 20}, {2480, 20}, {2460, 19}, {2441, 19}, {2422, 19}, {2403, 18}, {2385, 18}, {2367, 18},
    {2349, 17}, {2332, 18}, {2314, 17}, {2297, 16}, {2281, 17}, {2264, 16}, {2248, 16}, {2232, 16},
    {2216, 16}, {2200, 15}, {2185, 15}, {2170, 15}, {2155, 15}, {2140, 15}, {2125, 14}, {2111, 14},
    {2097, 14}, {2083, 14}, {2069, 14}, {2055, 13}, {2042, 13}, {2029, 13}, {2016, 13}, {2003, 13},
    {1990, 13}, {1977, 12}, {1965, 12}, {1953, 13}, {1940, 11}, {1929, 12}, {1917, 12}, {1905, 12},
    {1893, 11}, {1882, 11}, {1871, 11}, {1860, 11}, {1849, 11}, {1838, 11}, {1827, 11}, {1816, 10},
    {1806, 11}, {1795, 10}, {1785, 10}, {1775, 10}, {1765, 10}, {1755, 10}, {1745, 9}, {1736, 10},
    {1726, 9}, {1717, 10}, {1707, 9}, {1698, 9}, {1689, 9}, {1680, 9}, {1671, 9}, {1662, 9},
    {1653, 9}, {1644, 8}, {1636, 9}, {1627, 8}, {1619, 9}, {1610, 8}, {1602, 8}, {1594, 8},
    {1586, 8}, {1578, 8}, {1570, 8}, {1562, 8}, {1554, 7}, {1547, 8}, {1539, 8}, {1531, 7},
    {1524, 8}, {1516, 7}, {1509, 7}, {1502, 7}, {1495, 7}, {1488, 7}, {1481, 7}, {1474, 7},
    {1467, 7}, {1460, 7}, {1453, 7}, {1446, 6}, {1440, 7}, {1433, 7}, {1426, 6}, {1420, 6},
    {1414, 7}, {1407, 6}, {1401, 6}, {1395, 7}, {1388, 6}, {1382, 6}, {1376, 6}, {1370, 6},
    {1364, 6}, {1358, 6}, {1352, 6}, {1346, 5}, {1341, 6}, {1335, 6}, {1329, 5}, {1324, 6},
    {1318, 5}, {1313, 6}, {1307, 5}, {1302, 6}, {1296, 5}, {1291, 5}, {1286, 6}, {1280, 5},
    {1275, 5}, {1270, 5}, {1265, 5}, {1260, 5}, {1255, 5}, {1250, 5}, {1245, 5}, {1240, 5},
    {1235, 5}, {1230, 5}, {1225, 5}, {1220, 5}, {1215, 4}, {1211, 5}, {1206, 5}, {1201, 5},
  };

#endif