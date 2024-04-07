#include "game/assets.hpp"

namespace assets {
    const u16 airspeed_indicator[70][70] {
        {65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535},
        {65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535},
        {65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,63390,48663,42292,44373,46518,48632,50777,52825,52858,54970,55003,59196,59196,61277,61309,63390,63422,63422,63454,63454,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535},
        {65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,59229,44373,23211,12711,14791,14824,14791,14792,14824,12776,12711,10631,10566,8452,6371,2178,2146,4226,4226,4259,4291,6372,6372,8484,8517,12678,14823,16904,16936,16937,16937,16904,16937,16969,16969,21163,29582,46551,63422,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535},
        {65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,61309,46518,25388,14791,14791,19018,19083,19050,14791,19017,19051,16970,16904,10566,6372,2179,2146,65,65,2113,2146,4226,4259,2178,4194,2146,65,33,2113,2146,4259,8485,12678,14856,16969,19049,19018,17001,17001,16937,10630,14856,35986,54970,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535},
        {65535,65535,65535,65535,65535,65535,65535,65535,65535,63422,48631,27469,12711,14791,19017,19050,19050,19050,19050,8517,8517,10630,12711,8485,4227,33,2114,4291,8517,12711,16937,19017,19050,21163,23276,21195,19082,19083,19018,14824,12710,8485,4227,65,2114,4259,8549,12743,16937,12711,14824,16936,19017,19050,16904,10598,21195,46518,63422,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535},
        {65535,65535,65535,65535,65535,65535,65535,65535,46486,16904,14791,19050,19050,21131,19082,19050,19050,17002,16937,16937,8452,6372,2146,4194,8485,12711,21163,23276,25421,25357,23308,23308,23276,21163,21163,21163,21163,23308,23308,25389,25421,27469,23276,16905,10631,4291,98,2211,8485,8452,8485,14791,19017,19050,19050,16969,16969,12679,16969,31727,57083,65535,65535,65535,65535,65535,65535,65535,65535,65535},
        {65535,65535,65535,65535,65535,65535,65535,48663,14824,19050,19050,21130,19050,19082,19050,19018,16970,16937,12743,8517,2178,4259,12678,21163,25389,27470,25389,16969,12711,8453,4259,4227,4227,2147,2179,2179,2179,4291,4291,6372,8485,14824,23276,23341,27535,23308,12744,8453,2146,2146,6372,14857,16937,16970,19050,19050,19050,19050,19082,16937,12743,31728,63422,65535,65535,65535,65535,65535,65535,65535},
        {65535,65535,65535,65535,65535,65535,65535,25389,19050,19082,21163,23276,19050,19050,16970,16937,14824,8518,4259,4259,10630,21163,27534,27469,17002,10598,6340,4227,6372,8517,12711,12744,12776,14857,14889,14857,14857,12776,10696,8582,6436,4260,2146,6372,12744,23276,29615,25325,16937,6372,2146,6340,10631,16905,16937,19050,19050,19082,19050,19050,19050,19049,31728,65535,65535,65535,65535,65535,65535,65535},
        {65535,65535,65535,65535,65535,65535,54938,16937,19050,10565,25356,25389,21195,19050,16937,12711,6404,2147,8485,16937,27502,25357,14824,6405,2179,6405,12744,14856,14856,14856,14857,14857,14889,14889,14889,14889,14889,14889,14889,14889,14888,14857,12776,8485,2211,2147,8485,19050,29583,25357,12711,4259,4259,10598,14856,16937,19050,19050,23244,23276,19050,19050,19017,54938,65535,65535,65535,65535,65535,65535},
        {65535,65535,65535,65535,65535,65535,33808,19050,19050,4227,23276,25389,19050,16969,12679,6340,4259,14824,21131,27534,16969,6372,6340,10599,14825,14825,21228,14856,14856,14856,14857,14857,12809,14889,14889,14889,14889,14889,14889,14889,14889,14889,14889,14857,14857,10631,4260,2147,8453,21164,29583,16969,6372,2179,8453,14824,16970,19082,23276,25357,14824,19018,19050,38066,65535,65535,65535,65535,65535,65535},
        {65535,65535,65535,65535,65535,63422,21163,19082,19050,14856,10598,21163,14824,12711,4260,6340,19083,27470,21163,8485,4259,10631,14889,16970,14857,14857,38132,14889,14856,14857,14857,12809,14889,14889,14889,14889,14889,14889,16970,16970,14922,14857,16938,14890,16938,14889,14889,10663,4259,2179,12743,29615,21163,12679,4227,6405,14824,19050,23276,23309,14856,19050,19050,21130,63422,65535,65535,65535,65535,65535},
        {65535,65535,65535,65535,65535,48631,16937,19050,19050,19050,16970,16937,12679,4259,8485,19083,25389,16937,6308,6405,12776,14889,14889,27534,12808,14889,21228,27566,14856,14857,14856,14857,14889,14889,14889,14889,14889,14889,14889,14890,14922,16938,16938,16938,16938,19115,25454,14921,14857,6404,2178,10630,23308,23277,14824,4227,6372,12743,19050,21163,16937,19082,19050,19017,52825,65535,65535,65535,65535,65535},
        {65535,65535,65535,65535,65535,27534,19050,19018,19018,16969,14889,12711,4292,8486,21163,27502,16937,4260,10631,14889,14889,14889,14890,31793,17034,14857,14856,33906,14856,14857,14856,14857,14857,14889,14889,14889,14889,14889,16970,14922,14922,16970,16970,16938,14889,42325,14921,16969,16969,14921,10695,2210,4291,21195,25421,14856,2179,8453,14824,16970,19050,19050,19050,19050,29647,65535,65535,65535,65535,65535},
        {65535,65535,65535,65535,55003,16969,19050,19050,16969,16937,12743,6372,8485,21163,27502,14856,4291,12744,14857,19083,38132,14857,14889,14889,25454,14857,14857,35986,14889,14856,14889,14889,14857,14889,14889,14889,14889,14889,16970,14922,14890,16970,16970,14922,23341,27534,17002,14889,14921,25454,14921,12775,2211,4292,19050,27535,12711,4227,8518,14824,16970,19050,19050,19050,19050,61341,65535,65535,65535,65535},
        {65535,65535,65535,65535,40179,19050,19082,17002,16937,14824,8485,8485,19050,25421,12776,4292,12776,14890,16906,14857,25486,25486,16970,14890,14922,17002,16970,14857,14889,14889,14857,14857,14889,14889,14889,14889,14889,14889,14890,16938,16938,14922,16938,14921,38164,16969,16970,16970,17034,29712,14921,16969,14825,4227,4259,16938,25422,10566,4259,10598,14824,19018,19050,19050,16937,48663,65535,65535,65535,65535},
        {65535,65535,65535,63454,21163,19083,19083,17002,16937,10631,6340,14856,27502,14856,2179,14857,16970,16970,16938,14889,14889,31858,19148,14890,14890,38165,46616,27599,44438,27567,40277,33874,14890,14889,14889,14889,14889,14889,14922,16970,16970,16970,19083,17002,31793,14922,16970,17002,29713,14922,17002,17002,14922,12777,4227,2147,19082,23276,10599,4292,12712,16937,19050,19050,19050,29647,65535,65535,65535,65535},
        {65535,65535,65535,52825,14856,19050,19050,16970,12744,4292,16937,27502,17002,2211,12744,14890,16938,27534,16970,14889,14921,16970,33906,17002,14889,19083,46583,33938,14888,44470,33905,33905,14857,14889,14889,14889,14889,14889,14890,16938,14890,36019,33873,42325,40244,21261,16970,14922,14922,17002,17002,17002,38132,17035,12776,2147,6405,25389,16937,6405,8453,14824,16970,19051,19083,19050,59196,65535,65535,65535},
        {65535,65535,65535,42260,19050,16905,12679,16905,8453,10631,21163,21196,4324,10631,14889,16938,16970,17002,23308,14889,14922,16938,17002,16970,14889,46584,36051,29712,38164,33873,42357,42357,12808,14889,14889,14889,14889,14889,14922,16970,23308,50777,42325,40213,29679,27534,16970,14954,17002,17002,19148,38131,21228,16970,14890,10631,2179,10599,23276,16969,4260,10599,16937,19050,19083,16969,46486,65535,65535,65535},
        {65535,65535,65535,35889,16937,8485,10598,10566,6372,19083,23309,8550,6405,14857,23309,14889,14922,16970,14857,14889,14921,16970,16970,16970,14889,17002,19115,14857,21196,14889,21228,19082,14856,14889,14889,14889,14889,14889,14890,16970,14922,23341,25454,33906,44470,17002,17002,17035,16970,19115,40245,21228,16970,17002,16970,14889,6405,2147,12743,27502,10663,6373,14792,12776,14824,19082,31728,65535,65535,65535},
        {65535,65535,65535,31728,19018,12711,8485,8420,14824,25389,14824,2211,12776,14889,17002,36051,19147,14890,14890,14889,14889,16970,14890,14890,14857,14857,14889,14889,14889,14889,14857,14889,14857,14889,14889,14889,14889,14857,14889,14890,14921,14921,16970,16970,16969,17002,17002,14922,14922,27535,19083,16970,17002,16970,14922,25454,12809,2146,4291,23276,19115,6373,10599,6373,8486,16937,29582,65535,65535,65535},
        {65535,65535,65535,27469,19018,16937,12711,8485,21163,21228,4291,8550,14857,14889,16970,17002,31825,23373,14889,17034,14889,14889,14922,14890,14889,14889,14889,14889,14889,14889,14857,14857,14857,14889,14889,14889,14889,14857,14889,14889,14889,14890,16970,16970,14889,16970,16969,14921,14922,14890,14922,16970,16970,21228,33906,17035,14889,8518,2114,8550,27502,12744,6372,8421,10566,16970,31663,65535,65535,65535},
        {65535,65535,65535,23275,16969,14824,8421,14792,23276,10631,2179,12776,14857,14890,16938,16970,14889,21228,25454,36019,19115,38164,31825,31793,36019,14890,14857,14857,14889,14889,14889,14889,14889,14889,14889,14889,14889,14857,14889,14857,14857,14890,14889,14889,14890,14890,16970,14890,14890,14890,14922,16970,14890,21196,16970,14889,14889,14856,4259,4259,21163,19050,8453,10631,16970,16970,31728,65535,65535,65535},
        {65535,65535,65535,23243,16937,14792,6405,19050,21196,6373,8550,14889,27568,23309,14889,14922,14922,14921,17035,31826,23341,44503,42325,38132,31793,19115,14889,14889,14889,14857,14857,14889,14857,14889,14889,14889,14889,14857,14857,14857,14857,14857,14889,14889,14890,14890,14890,14890,14890,16938,16970,16970,16970,16938,16970,14890,14889,14889,8550,98,8550,23276,10663,6437,14857,16970,31760,65535,65535,65535},
        {65535,65535,65535,21163,16905,10599,10631,21196,14824,2211,12776,14889,14890,19115,25454,14922,14922,14922,14889,33906,31792,29712,36051,38164,42325,16970,14890,14890,14889,14889,14889,14889,14857,14889,14889,14889,14889,14889,14857,14857,14857,14857,14857,14857,14890,14890,16970,14890,14890,16938,16970,16970,16970,16970,16970,14922,27567,31825,12808,2146,4259,21228,16937,6373,12744,16937,31760,65535,65535,65535},
        {65535,65535,65535,21163,16905,8453,14857,23244,8485,6405,12777,14889,16970,16970,14890,14922,14922,14922,16970,16970,14889,27566,19115,23341,27567,14889,14890,14890,14889,14889,14889,14889,14889,14889,14889,14889,14889,14889,14857,14857,14857,14889,14889,14857,14890,14890,14890,14890,16970,14890,17002,16970,16970,14890,31826,36052,23373,14922,14889,6405,2114,16937,19115,8550,10631,14889,31760,65535,65535,65535},
        {65535,65535,65535,19082,14824,8517,19050,19083,2179,10631,21229,33874,19116,14889,14889,14922,14922,16970,16938,14890,14890,14889,14890,14890,25422,16970,14889,14890,31761,14889,33906,40212,29648,14889,14889,29647,40212,23341,16970,40180,38132,23309,14889,35954,40212,33841,16970,14890,14889,42390,33906,29712,38164,27600,23341,14922,14890,14922,14889,10663,66,8453,21196,12776,8518,14857,33841,65535,65535,65535},
        {65535,65535,65535,19082,10631,10631,21164,12776,2147,12744,14857,16970,31793,33939,31826,16970,16938,16970,14922,14890,14890,14890,14890,14890,46551,31761,14889,16970,50712,14857,50745,27535,46551,25454,25454,46551,21228,27535,19083,50744,27535,50777,19115,50777,27502,33874,48632,17002,23341,48729,36018,38164,27599,23342,17002,14922,14922,14922,14922,14857,2179,2211,19083,16937,8485,14857,33873,65535,65535,65535},
        {65535,65535,65535,19050,8518,14824,19083,8485,4260,12744,14889,14857,14889,14922,19083,14890,16938,16970,16938,14890,14890,14922,14889,21196,44438,48632,14889,16970,50712,14857,48664,16970,38099,29648,21228,50777,27567,14889,19083,48664,14889,46551,23309,50745,14890,14889,35987,31793,21228,40212,44470,38164,33938,23374,14922,14922,14922,14889,14889,12809,4324,2179,16969,17002,8550,12776,33873,65535,65535,65535},
        {65535,65535,65535,16969,8485,16970,19083,6340,8485,12776,14857,14857,14889,14890,14890,14890,16970,16970,16938,16970,14890,14890,14889,40180,33841,50777,25454,16970,48664,14889,54938,48664,57051,17034,14889,19115,38067,42358,19083,59196,48632,38067,14889,50745,14889,14889,31761,31793,14889,25454,17002,21228,25454,16970,14890,14890,19051,23309,29713,23341,6470,98,12744,17003,10631,10631,35954,65535,65535,65535},
        {65535,65535,65503,16969,8550,16970,19051,4227,8550,17035,27535,27567,23309,14890,14889,14890,14890,14890,14890,14890,14889,14889,17003,48664,27567,31728,46519,16970,50712,14889,48664,14889,46519,23309,19115,17002,17002,52858,17003,48664,14889,14889,14889,50745,17002,23341,50777,21196,14857,14857,14889,14889,14889,14889,14890,14890,23309,19115,14890,14857,8583,98,8518,19083,14824,10630,35986,65535,65535,65535},
        {65535,65535,65503,14824,8518,19051,16937,2179,8615,12808,14857,14889,17002,14890,14922,14889,14857,14857,14889,14889,14889,14857,23341,27567,14857,14857,38099,14889,38099,14857,35954,14857,19115,33906,23276,40212,42325,27534,14890,38067,14857,14857,14889,38099,42325,42325,21228,14890,14889,14889,14889,14889,14889,14889,14890,14890,14890,14889,14857,14857,12744,99,4325,17002,14824,10630,38099,65535,65535,65535},
        {65535,65535,63454,14791,12679,19050,12712,2146,10663,12776,14857,14889,14889,14890,14889,17002,14890,19115,14857,14890,16970,14889,14857,12809,12777,12809,12777,12744,12776,12776,12777,12776,12777,12776,12776,12776,12776,12777,12776,14857,14856,14857,14857,14889,14857,14857,14857,14889,14889,14889,14889,14889,14889,14857,14890,14890,14890,14889,14889,12809,12744,2179,4292,14889,14889,8518,40180,65535,65535,65535},
        {65535,65535,63455,12711,12711,19018,10631,2114,10663,14921,14889,14889,14857,14922,27567,36019,25422,42326,29712,40277,42358,14889,14857,12809,12777,12809,12777,10664,8518,12744,12776,12776,8550,10664,12777,8550,10664,12776,12776,12808,12776,12809,12777,14857,14857,14857,14857,14857,14889,14889,14857,14889,14889,14889,14890,16970,16969,16969,14922,12841,12776,2179,4260,14857,16970,8550,42293,65535,65535,65535},
        {65535,65535,63454,12743,12743,19050,10631,2179,10631,25422,27600,29713,33874,29680,14889,33874,31793,33938,38164,33873,33906,14857,14857,14857,12777,12777,12744,8551,10631,10631,12776,12744,8551,14889,12777,14857,8551,12744,12776,10631,8550,10663,12809,14857,14857,14857,14857,14889,14857,14889,14889,14889,14889,14889,14889,42358,48729,31793,29745,29745,12776,2179,4260,14857,16937,10631,42293,65535,65535,65535},
        {65535,65535,63454,12743,12744,19050,10599,2179,10663,12744,12809,12777,14888,14889,12776,27534,23341,40244,31792,46551,40212,14889,14857,14857,12777,12744,12744,12777,14890,12777,12776,12744,10631,12809,14890,14889,10631,12776,12776,12744,14825,14857,12777,14857,14857,14857,14857,14857,14857,14889,14889,14889,14889,14889,14889,40245,46616,19116,17067,17035,12776,2212,4292,12744,16970,10631,42325,65535,65535,65535},
        {65535,65535,63422,12743,14824,16970,10566,2146,10631,14759,16806,16839,18919,20967,14856,12809,12777,14857,14856,12776,14889,14857,12809,12777,12776,12776,12744,10664,10664,10696,12744,10664,8551,12744,12777,10663,12744,12776,12776,12776,12776,12744,12777,14857,14857,14857,14857,14857,14857,14889,14889,14889,14889,14889,14889,42390,42358,14922,14922,12809,12776,2147,4260,12744,16970,10631,42260,65535,65535,65535},
        {65535,65535,61309,14792,14824,16969,10631,2114,10629,27205,37509,31207,29127,27080,16904,14857,14857,14857,12808,14857,14857,14857,12776,12776,12776,12744,12744,10696,10664,10664,10696,12744,10696,12776,12776,10696,12776,12776,12776,12776,12777,12776,12777,14857,14857,14857,14857,14857,14857,14857,14857,14889,14889,16970,14890,50778,38164,14921,14890,14889,12744,99,2212,12712,16970,10631,42292,65535,65535,65535},
        {65535,65535,59196,14856,14856,16969,10663,2146,10565,31524,39910,14823,14792,12776,14856,12777,14857,14857,14857,14857,14857,12809,12776,12776,12744,12776,12744,12744,10696,10696,12776,12776,12776,12776,12776,12776,12776,12776,12776,12776,12777,12776,14857,14857,14857,14857,14857,14857,14889,14889,14889,14890,14890,14890,14889,55100,29712,14890,14890,14857,10664,2179,2179,12744,16969,12744,42293,65535,65535,65535},
        {65535,65535,57083,16969,14824,14889,10663,2179,8484,27333,42117,12742,16969,25453,19083,14857,14857,14857,12809,12777,12777,12777,12777,12776,12744,12744,12776,12777,12744,12777,12808,12776,12776,12808,12776,14889,12809,12776,14889,14889,12776,14889,14857,14857,14857,14857,14857,14857,14857,14857,14889,14922,14890,14922,19148,57181,29647,17002,14890,12776,10631,2147,6373,14824,17002,12744,42325,65535,65535,65535},
        {65535,65535,54970,16969,14824,16938,10663,4227,6372,18982,50509,38065,27600,17066,14889,14857,14857,14857,12809,12776,12776,12776,12776,12776,12776,12776,12777,33906,27567,25454,35986,19115,14922,27599,27567,36019,36051,21195,35986,44438,19114,40212,31761,14857,14857,14857,14857,14857,14857,14857,14921,16970,14889,14921,29712,57180,21227,27535,29681,19115,6438,2147,6404,14856,14888,14824,46518,65535,65535,65535},
        {65535,65535,54938,16969,14824,16937,12744,4324,4291,12677,44198,25318,12777,12808,12808,14857,14889,16969,12808,12777,12776,12744,12776,12744,12776,12776,12809,46551,40212,12809,35986,35986,23308,29680,38099,12776,12776,36019,21196,33906,14921,38099,31761,14857,14857,14857,14857,14857,31793,42358,25454,40277,27535,14921,42390,46616,14888,14857,14857,12808,4324,2147,6405,14889,14921,16905,48599,65535,65535,65535},
        {65535,65535,52890,16969,16905,16937,14856,6437,2178,10596,35748,33733,12808,12776,12808,14856,17035,46583,12776,33905,31793,31825,38131,14857,12776,12776,12776,38131,35987,19116,35986,12809,38164,29680,36019,17002,19148,33873,19148,33874,14889,16970,42325,14857,14857,14857,14857,14856,46615,48729,40244,21195,40245,19114,52955,31825,14889,14857,12776,10696,2179,2147,8486,14889,14824,16905,50744,65535,65535,65535},
        {65535,65535,52857,16969,16937,16969,14889,8518,2113,8453,27333,40070,25419,21163,14857,12840,14856,38132,17034,48729,38132,38164,27534,25454,12776,12776,12808,25422,14889,27535,23341,12776,14857,19115,14889,33905,33873,12776,17002,23341,17002,35986,29616,14857,14857,14857,14857,12776,46583,33905,46648,27566,42357,36018,55036,17003,14890,14857,12808,8550,66,2179,12744,19050,14824,16938,50777,65535,65535,65535},
        {65535,65535,52825,19050,17001,14888,16969,10598,6307,4226,12677,48493,27463,14888,14857,14889,14857,38099,14889,23341,31761,40245,38131,17002,12776,12776,12776,12776,12776,12776,12776,12776,12744,12744,12712,10696,12776,12776,12776,12776,12809,14825,14857,14825,14857,14857,14857,14857,21228,27599,17002,31857,19115,52955,48697,21196,14857,12809,12776,4292,66,4259,14856,16970,14857,16938,52825,65535,65535,65535},
        {65535,65535,52825,19018,17002,16969,19050,16905,6340,2146,8516,31556,37924,14887,14922,25487,25422,12776,14856,12776,14857,14889,16969,12776,12777,12776,12776,12776,12776,12744,12776,12776,12744,10696,12744,12744,12744,12776,12776,12777,14825,12777,12777,14825,14857,14857,14857,14857,12809,12809,14889,14889,33938,55100,25455,31761,36019,16970,10663,98,2179,6405,16970,16905,16970,19050,50745,65535,65535,65535},
        {65535,65535,52857,19049,19050,16970,16938,16938,8485,2179,4323,16869,42086,36015,31825,17002,14856,12776,14857,14889,14857,14889,12808,14857,12777,12776,12776,12776,12776,12776,12776,12776,12744,12744,12744,12744,12744,12776,12777,12809,14857,14825,14825,14825,14857,14857,14825,14857,12809,12841,14889,19180,55036,36051,14922,14889,14889,14889,6405,66,2179,10663,19083,12744,17002,16970,52825,65535,65535,65535},
        {65535,65535,52825,19050,19082,19050,16905,21164,10631,4259,2178,8550,25482,19596,10856,12808,14856,12776,14857,14857,14857,14857,14857,14857,14857,12776,12776,12776,12776,12776,12776,12776,12744,12744,12744,12744,12776,12776,12777,12809,12777,12777,12777,12777,14825,14857,14825,14857,12809,12841,12841,44471,52923,17034,14889,12808,10696,8551,98,2146,6372,14889,17002,16937,17002,16970,52857,65535,65535,65535},
        {65535,65535,52825,19050,14856,8518,10598,16938,14857,6437,2178,4324,8743,7272,7048,12873,23341,14857,14857,14857,14857,14889,14857,14857,12777,12776,12776,12776,12776,12776,12776,12776,12744,12776,12744,12744,12776,12808,12777,12777,14825,12777,14825,14857,14857,14857,14825,14857,12809,12809,33938,55100,23308,12873,11083,8808,8647,4324,2146,6405,10695,19083,14825,16970,16970,16969,52857,65535,65535,65535},
        {65535,65535,54938,19050,10598,10566,12712,14825,19083,10630,2243,2178,6437,8967,17676,25711,14888,12776,14825,23341,14857,14857,14857,12777,12776,12744,10696,10728,10696,10696,12776,12776,12744,12776,12744,12744,12776,12776,12809,12777,12777,12777,14857,14825,14857,14857,12809,12809,12776,33906,57181,33874,31792,15209,9387,8937,6502,98,4227,4292,16937,16970,10631,8518,16937,14889,54938,65535,65535,65535},
        {65535,65535,59228,19082,19050,14856,19050,19018,19083,16937,6405,2179,4227,6565,17420,9321,8871,12808,27600,23341,14857,12809,12809,12776,23309,33939,23373,42390,27600,38165,31826,14889,12776,12776,12744,17035,12776,14922,14922,12808,16969,12809,12777,12777,14857,12809,12841,14922,36019,57213,36051,12873,8904,26033,13260,8646,4260,2114,4292,12744,19115,12776,10630,8518,14824,14856,57083,65535,65535,65535},
        {65535,65535,65535,27502,19050,19050,19050,19050,16938,21196,14792,4260,2146,4292,6565,7241,9257,29808,21261,12808,14856,14857,14857,14857,12744,31826,14889,29744,36084,33906,31858,17002,12776,12776,17035,46617,12776,38165,40277,31793,36019,23341,12776,12809,12809,12809,14954,36084,55068,36019,12840,10921,7275,9258,10792,4324,66,4227,8485,16970,14857,16970,16970,12744,16937,23276,61342,65535,65535,65535},
        {65535,65535,65535,40212,19083,19050,19050,19050,19050,19050,19083,10630,4259,2146,4324,6629,21775,21710,8775,12808,14824,14857,14857,12809,10696,31825,27567,44503,23341,38165,40245,14857,12777,12776,12776,36052,21228,31793,31825,38132,19147,29712,12809,12809,12809,23341,52987,55068,40276,21292,10921,7242,7275,8774,6404,98,6340,6373,16970,21196,14889,19050,19083,19051,19050,33841,65535,65535,65535,65535},
        {65535,65535,65535,55003,21163,19050,19083,19083,19050,19050,16938,19050,8485,2179,98,4356,8711,9257,7241,8871,14888,25421,12809,12777,16970,19148,14922,21228,17002,19115,14922,12809,12777,12777,12809,29681,12808,42390,38131,33873,42390,21229,14889,21293,42390,55101,44471,19115,12808,31920,17549,7274,6759,6469,130,2178,4259,12744,19050,14824,16938,19083,19083,19051,19083,48599,65535,65535,65535,65535},
        {65535,65535,65535,65503,31760,19050,19083,19083,19083,19051,16970,23309,14824,4292,2178,130,4324,4581,7176,7241,29937,14920,12744,12745,29680,17002,12776,12776,14922,10663,12809,12776,12776,12777,12777,12777,12776,12777,12776,12776,21228,27600,44503,55068,50842,31793,16970,12841,8968,9323,30065,6694,6469,130,2178,2178,12776,23341,16937,16970,19050,19051,19051,19051,23244,61309,65535,65535,65535,65535},
        {65535,65535,65535,65535,44405,19050,19083,19083,19083,19083,19051,16938,21163,14856,6405,130,130,4292,6565,11112,17709,9096,8776,12841,36018,12776,12776,12776,40277,55035,40244,31825,27567,21261,19115,19116,23341,29680,33938,44503,57213,57214,48697,31825,25486,14889,10888,9192,5354,7145,8647,6404,98,4259,4291,12743,19115,16970,16970,19050,19083,19083,19083,19051,35954,65535,65535,65535,65535,65535},
        {65535,65535,65535,65535,59196,21163,19083,19083,19083,19083,19083,19051,16905,21195,14857,6372,98,2114,4259,4421,4806,7274,7274,25743,10824,10760,10728,19115,25454,33906,48696,59261,59229,59262,59262,59262,59261,57213,55035,48729,31760,19116,14888,14920,27630,9098,7370,9386,6856,6565,2276,98,4259,6340,10695,21195,21163,16938,19050,19051,19050,19082,19083,21131,57083,65535,65535,65535,65535,65535},
        {65535,65535,65535,65535,65535,27501,19050,21163,16904,21163,21163,21131,19082,16970,21196,19050,10566,2114,33,66,2243,4517,8968,25935,7305,9064,6790,23437,10727,12743,10695,27566,14889,21228,23276,31728,19115,12808,14921,31793,14857,10792,10952,7145,15564,17743,7015,6662,6436,2211,2179,2179,4292,14792,23309,17003,16970,19051,19083,19050,19082,19082,19082,33841,65535,65535,65535,65535,65535,65535},
        {65535,65535,65535,65535,65535,40212,19050,21130,8453,23244,23243,21130,19082,19050,19050,21163,14792,10598,4227,33,33,2147,4324,6565,4935,9321,7338,23887,9063,8871,8744,27631,10728,10727,10727,25550,10792,10792,10824,32051,9129,7241,7435,7338,9032,8774,4420,2211,66,2146,4259,8485,14889,19083,14857,16970,19050,21163,19082,16969,19082,19082,19115,48599,65535,65535,65535,65535,65535,65535},
        {65535,65535,65535,65535,65535,57115,21163,19082,4227,21163,23276,19050,19082,19082,19050,19082,16969,23276,14824,6372,2114,66,66,2146,2243,2371,4678,15307,5256,7433,15660,21839,9354,7273,7241,23886,7305,7369,7401,26064,11434,5032,6790,4484,6372,2211,2114,66,66,2211,12711,21196,21164,17002,16937,19051,21131,21163,23243,12679,21131,19082,23276,63390,65535,65535,65535,65535,65535,65535},
        {65535,65535,65535,65535,65535,65535,31695,19082,16937,12679,16970,19050,19082,19050,19050,19050,19050,14825,21196,19050,12711,2211,66,65,65,98,98,2211,2307,2436,8839,11049,4903,4967,5032,11144,6983,6886,6757,4484,4388,4323,2178,2114,66,66,2114,2179,8453,16969,25422,14889,17002,17002,19083,19083,19051,21131,23244,8485,19082,19050,38034,65535,65535,65535,65535,65535,65535,65535},
        {65535,65535,65535,65535,65535,65535,54938,21195,17002,19050,19082,19050,19083,19050,19050,19082,19082,19051,16970,19050,21196,19083,10599,4292,2114,33,33,33,2113,2113,65,65,2146,130,2178,4162,2146,2145,2178,2113,2114,65,33,66,2114,2179,8518,14856,25454,19083,16937,19115,17002,16970,19050,19083,19050,16905,16969,16937,19050,21163,55003,65535,65535,65535,65535,65535,65535,65535},
        {65535,65535,65535,65535,65535,65535,65535,59196,38034,25356,19082,19050,19050,19050,19050,19051,19082,19051,16938,14792,16970,16970,19115,21164,14824,6405,2179,2114,65,65,65,65,2081,33,33,33,33,2081,33,33,66,2114,2146,6405,12743,17002,23276,21163,16969,19018,19083,17002,17002,17002,19051,19051,19051,17002,17034,19082,21195,42325,65535,65535,65535,65535,65535,65535,65535,65535},
        {65535,65535,65535,65535,65535,65535,65535,65535,65535,61341,46518,31728,19050,21130,19050,19050,19083,19082,12679,14792,14824,19050,16970,16937,19051,21164,21163,14824,10631,8453,4291,4259,2146,2146,2113,2114,2114,2179,4259,6372,10598,12712,17002,23277,21163,16937,16937,16969,12679,10631,19051,19051,19050,19050,19050,19050,19018,19082,21196,35921,52857,65535,65535,65535,65535,65535,65535,65535,65535,65535},
        {65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,57051,38066,23244,19018,19083,19082,14792,10598,16969,19083,19018,16970,19051,16905,16970,16938,19050,21163,19051,19083,19082,19018,16970,19050,19050,19083,21163,23244,21163,19083,17002,19083,16969,19050,17002,14857,12679,10598,19050,19050,19050,19017,19050,19082,29582,46486,61309,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535},
        {65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,63422,46518,31695,19050,21163,19083,21163,21131,19083,19050,19050,19018,19050,19083,16969,16937,14856,16905,16970,19050,19050,16970,16970,16937,14825,16970,16970,16970,16970,17002,19018,17002,19050,19050,14824,14824,19050,19050,19050,29582,42325,59228,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535},
        {65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,54970,44373,38099,38066,38067,38067,38099,40147,40180,40147,38099,38066,38034,35986,33808,29615,27469,25389,25389,23276,25356,23276,21163,23212,23244,23244,21163,21163,21163,21163,19082,19050,19050,25389,38099,57083,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535},
        {65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65503,65503,63454,65503,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535},
        {65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535},
        {65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535,65535},

    };
}