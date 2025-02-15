#include "common.h"

Gfx Rabbit_body_Gfx[] = {
    gsSPMatrix(&AnimationSlots[6], G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    
    //lights. yeah
    gsSPSetLights1(Rabbit_grouplight_Light),
    //idk, global?
    gsDPSetCycleType(G_CYC_1CYCLE),
    //idk
    gsDPSetRenderMode(G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2),
    //inits geometry modes for the entire gfx
    gsSPClearGeometryMode(G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_LIGHTING | G_SHADING_SMOOTH),
    //dither setting
    gsDPSetColorDither(G_CD_BAYER),

    //general texture settings ; global??? i guess??? just make sure to change it when you need to
    gsSPTexture(0x8000, 0x8000, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetTexturePersp(G_TP_PERSP),
    gsDPSetTextureDetail(G_TD_CLAMP),
    gsDPSetTextureLOD(G_TL_TILE),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetTextureConvert(G_TC_FILT),
    //sets palette type (?)
    gsDPSetTextureLUT(G_TT_RGBA16),

    gsDPLoadTLUT_pal16(0, Rabbit_tuxedo_ci4_PAL),
    gsDPLoadTextureTile_4b(Rabbit_tuxedo_ci4_PNG, G_IM_FMT_CI, 64, 0, 0, 0, 63, 63, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEIA, G_CC_MODULATEIA),

    gsSPVertex(&Rabbit_body_Vtx[0], 10, 0),
    gsSP1Triangle(0, 2, 4, 0),
    gsSP1Triangle(2, 3, 4, 0),
    gsSP1Triangle(1, 6, 2, 0),
    gsSP1Triangle(2, 6, 3, 0),
    gsSP1Triangle(3, 6, 9, 0),
    gsSP1Triangle(3, 9, 4, 0),
    gsSP1Triangle(5, 8, 9, 0),
    gsSP1Triangle(9, 7, 4, 0),
    gsSP1Triangle(6, 5, 9, 0),
    gsSP1Triangle(9, 8, 7, 0),
    gsDPPipeSync(),

    gsDPLoadTLUT_pal16(0, Rabbit_tuxedoTop_ci4_PAL),
    gsDPLoadTextureTile_4b(Rabbit_tuxedoTop_ci4_PNG, G_IM_FMT_CI, 64, 0, 0, 0, 63, 31, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEIA, G_CC_MODULATEIA),

    gsSPVertex(&Rabbit_body_Vtx[10], 5, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(1, 4, 2, 0),
    gsSP1Triangle(4, 3, 2, 0),
    gsDPPipeSync(),

    gsDPSetCombineLERP(PRIMITIVE, 0, SHADE, 0, PRIMITIVE, 0, SHADE, 0, PRIMITIVE, 0, SHADE, 0, PRIMITIVE, 0, SHADE, 0),
    gsDPSetPrimColor(0, 0, 0x00, 0x00, 0x00, 0xFF),

    gsSPVertex(&Rabbit_body_Vtx[15], 16, 0),
    gsSP1Triangle(9, 8, 7, 0),
    gsSP1Triangle(9, 7, 5, 0),
    gsSP1Triangle(0, 14, 11, 0),
    gsSP1Triangle(14, 0, 1, 0),
    gsSP1Triangle(11, 14, 10, 0),
    gsSP1Triangle(14, 1, 2, 0),
    gsSP1Triangle(12, 14, 13, 0),
    gsSP1Triangle(2, 13, 14, 0),
    gsDPSetPrimColor(0, 0, 0xFF, 0xFF, 0xFF, 0xFF),
    gsSP1Triangle(6, 7, 3, 0),
    gsSP1Triangle(14, 12, 15, 0),
    gsSP1Triangle(4, 14, 3, 0),
    gsSP1Triangle(15, 3, 14, 0),

    gsSPVertex(&Rabbit_body_Vtx[31], 7, 9),
    gsDPSetPrimColor(0, 0, 0x00, 0x00, 0x00, 0xFF),
    gsSP1Triangle(11, 9, 1, 0),
    gsSP1Triangle(12, 1, 0, 0),
    gsSP1Triangle(9, 2, 1, 0),
    gsSP1Triangle(15, 10, 7, 0),
    gsSP1Triangle(10, 13, 7, 0),
    gsSP1Triangle(15, 7, 14, 0),
    gsSP1Triangle(8, 14, 7, 0),
    gsDPSetPrimColor(0, 0, 0xFF, 0xFF, 0xFF, 0xFF),
    gsSP1Triangle(4, 3, 7, 0),
    gsSP1Triangle(7, 6, 5, 0),

    gsSPVertex(&Rabbit_body_Vtx[38], 10, 0),
    gsSP1Triangle(6, 1, 5, 0),
    gsSP1Triangle(6, 5, 4, 0),
    gsDPSetPrimColor(0, 0, 0x00, 0x00, 0x00, 0xFF),
    gsSP1Triangle(7, 15, 14, 0),
    gsSP1Triangle(2, 3, 14, 0),
    gsSP1Triangle(3, 8, 14, 0),
    gsSP1Triangle(7, 14, 13, 0),
    gsSP1Triangle(13, 14, 8, 0),
    gsSP1Triangle(9, 12, 0, 0),
    gsSP1Triangle(0, 11, 9, 0),

    gsSPVertex(&Rabbit_body_Vtx[48], 10, 6),
    gsSP1Triangle(13, 0, 12, 0),
    gsSP1Triangle(7, 9, 11, 0),
    gsSP1Triangle(7, 8, 2, 0),
    gsSP1Triangle(2, 9, 7, 0),
    gsSP1Triangle(3, 2, 8, 0),
    gsSP1Triangle(9, 10, 11, 0),
    gsSP1Triangle(5, 11, 10, 0),
    gsDPSetPrimColor(0, 0, 0xFF, 0xFF, 0xFF, 0xFF),
    gsSP1Triangle(15, 6, 14, 0),
    gsSP1Triangle(1, 14, 6, 0),
    gsSP1Triangle(4, 10, 15, 0),
    gsSP1Triangle(10, 4, 5, 0),

    gsSPVertex(&Rabbit_body_Vtx[58], 10, 0),
    gsSP1Triangle(1, 0, 14, 0),
    gsSP1Triangle(15, 14, 0, 0),
    gsSP1Triangle(2, 1, 14, 0),
    gsSP1Triangle(7, 5, 4, 0),
    gsSP1Triangle(7, 4, 6, 0),
    gsSP1Triangle(7, 6, 5, 0),
    gsSP1Triangle(9, 8, 13, 0),
    gsSP1Triangle(9, 13, 12, 0),
    gsSP1Triangle(9, 12, 8, 0),
    gsDPSetPrimColor(0, 0, 0x00, 0x00, 0x00, 0xFF),
    gsSP1Triangle(4, 5, 3, 0),

    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};
