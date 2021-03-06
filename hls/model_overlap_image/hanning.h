#ifndef _HANNING_H_
#define _HANNING_H_

/*
// Q2.8
typedef ap_fixed<10,2,AP_RND,AP_SAT> hanning_t;

const hanning_t hanning[64] = {
    0.,0.00248461,0.00991376,0.0222136,0.03926189,0.06088921,
    0.08688061,0.11697778,0.15088159,0.1882551,0.22872687,0.27189467,
    0.31732949,0.36457977,0.41317591,0.46263495,0.51246535,0.56217185,
    0.61126047,0.65924333,0.70564355,0.75,0.79187184,0.83084292,
    0.86652594,0.89856625,0.92664544,0.95048443,0.96984631,0.98453864,
    0.99441541,0.99937846,0.99937846,0.99441541,0.98453864,0.96984631,
    0.95048443,0.92664544,0.89856625,0.86652594,0.83084292,0.79187184,
    0.75,0.70564355,0.65924333,0.61126047,0.56217185,0.51246535,
    0.46263495,0.41317591,0.36457977,0.31732949,0.27189467,0.22872687,
    0.1882551,0.15088159,0.11697778,0.08688061,0.06088921,0.03926189,
    0.0222136,0.00991376,0.00248461,0.
};
*/

// 8b unsigned
const ap_uint<8> hanning[64] = {
    0,1,3,6,10,16,22,30,38,48,58,69,81,93,105,118,131,143,
    156,168,180,191,202,212,221,229,236,242,247,251,254,255,255,254,251,247,
    242,236,229,221,212,202,191,180,168,156,143,131,118,105,93,81,69,58,
    48,38,30,22,16,10,6,3,1,0
};

#endif // _HANNING_H_
