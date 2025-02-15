#include "common.h"

//proper names
extern unsigned char Global_poleWood_ci8_PAL[]; // pole palette
extern unsigned char Global_poleWood_ci8_PNG[]; // pole img
//build names
extern Vtx D_800FE7D8_Global[];
extern Vtx D_800FE8C8_Global[];

Mtx Global_IMtx1 = IDENTITY;

#include "assets/levelGroup/Global/globalScope/globalScope.light.inc.c"

#include "assets/levelGroup/Global/cannon/cannon.vtx.inc.c"
unsigned char Global_cannonHole_rgba16_PNG[] = {
#include "build/assets/levelGroup/Global/cannon/cannonHole.rgba16.png.inc.c"
};
unsigned char Global_cannonBarrel_rgba16_PNG[] = {
#include "build/assets/levelGroup/Global/cannon/cannonBarrel.rgba16.png.inc.c"
};
unsigned char Global_black_rgba16_PNG[] = {
#include "build/assets/levelGroup/Global/cannon/black.rgba16.png.inc.c"
};

#include "assets/levelGroup/Global/cannon/cannon.gfx.inc.c"

#include "assets/levelGroup/Global/cannonHolder/cannonHolder.vtx.inc.c"
unsigned char Global_woodWithBolt_rgba16_PNG[] = {
#include "build/assets/levelGroup/Global/cannonHolder/woodWithBolt.rgba16.png.inc.c"
};
unsigned char Global_darkWoodWithBolt_rgba16_PNG[] = {
#include "build/assets/levelGroup/Global/cannonHolder/darkWoodWithBolt.rgba16.png.inc.c"
};
unsigned char Global_darkWood_rgba16_PNG[] = {
#include "build/assets/levelGroup/Global/cannonHolder/darkWood.rgba16.png.inc.c"
};
unsigned char Global_lightWood_rgba16_PNG[] = {
#include "build/assets/levelGroup/Global/cannonHolder/lightWood.rgba16.png.inc.c"
};
unsigned char Global_midWood_rgba16_PNG[] = {
#include "build/assets/levelGroup/Global/cannonHolder/midWood.rgba16.png.inc.c"
};

#include "assets/levelGroup/Global/cannonHolder/cannonHolder.gfx.inc.c"

#include "assets/levelGroup/Global/pole/pole.vtx.inc.c"

#include "assets/levelGroup/Global/pole/pole.gfx.inc.c"

#include "assets/levelGroup/Global/unusedStructure/unusedStructure.vtx.inc.c"

#include "assets/levelGroup/Global/unusedStructure/unusedStructure.gfx.inc.c"

#include "assets/levelGroup/Global/shadow/shadow.vtx.inc.c"
unsigned char Global_shadow_ia8_PNG[] = {
#include "build/assets/levelGroup/Global/shadow/shadow.ia8.png.inc.c"
};

#include "assets/levelGroup/Global/shadow/shadow.gfx.inc.c"

#include "assets/levelGroup/Global/shadow/shadow2.gfx.inc.c"

#include "assets/levelGroup/Global/pole/pole.colV.inc.c"

#include "assets/levelGroup/Global/pole/pole.colT.inc.c"

#include "assets/levelGroup/Global/pole/pole.colS.inc.c"

#include "assets/levelGroup/Global/pole/pole.colH.inc.c"

#include "assets/levelGroup/Global/unk1/unk1.colV.inc.c"

#include "assets/levelGroup/Global/unk1/unk1.colT.inc.c"

#include "assets/levelGroup/Global/unk1/unk1.colS.inc.c"

#include "assets/levelGroup/Global/unk1/unk1.colH.inc.c"

#include "assets/levelGroup/Global/unk2/unk2.colV.inc.c"

#include "assets/levelGroup/Global/unk2/unk2.colT.inc.c"

#include "assets/levelGroup/Global/unk2/unk2.colS.inc.c"

#include "assets/levelGroup/Global/unk2/unk2.colH.inc.c"

#include "build/assets/levelGroup/Global/what.inc.c"
unsigned char Global_brownBrickWall_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/brownBrickWall.ci4.png.inc.c"
};
unsigned char Global_brownBrickWall_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/brownBrickWall.ci4.pal.inc.c"
};
unsigned char Global_sandAgain_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/sandAgain.ci4.png.inc.c"
};
unsigned char Global_sandAgain_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/sandAgain.ci4.pal.inc.c"
};
unsigned char Global_gravel_i4_PNG[] = {
#include "build/assets/levelGroup/Global/img/gravel.i4.png.inc.c"
};
unsigned char Global_wall_i4_PNG[] = {
#include "build/assets/levelGroup/Global/img/wall.i4.png.inc.c"
};
unsigned char Global_gateGray_ia4_PNG[] = {
#include "build/assets/levelGroup/Global/img/gateGray.ia4.png.inc.c"
};
unsigned char Global_dcRockFloor_i4_PNG[] = {
#include "build/assets/levelGroup/Global/img/dcRockFloor.i4.png.inc.c"
};
unsigned char Global_dcRockFloorColor_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/dcRockFloorColor.ci4.png.inc.c"
};
unsigned char Global_dcRockFloorColor_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/dcRockFloorColor.ci4.pal.inc.c"
};
unsigned char Global_smallBrickWall_i4_PNG[] = {
#include "build/assets/levelGroup/Global/img/smallBrickWall.i4.png.inc.c"
};
unsigned char Global_longWoodTopper_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/longWoodTopper.ci4.png.inc.c"
};
unsigned char Global_longWoodTopper_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/longWoodTopper.ci4.pal.inc.c"
};
unsigned char Global_longWood_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/longWood.ci4.png.inc.c"
};
unsigned char Global_longWood_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/longWood.ci4.pal.inc.c"
};
unsigned char Global_yellowBrickWall_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/yellowBrickWall.ci4.png.inc.c"
};
unsigned char Global_yellowBrickWall_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/yellowBrickWall.ci4.pal.inc.c"
};
unsigned char Global_bigBrickWall2_i4_PNG[] = {
#include "build/assets/levelGroup/Global/img/bigBrickWall2.i4.png.inc.c"
};
unsigned char Global_bigBrickWall_i4_PNG[] = {
#include "build/assets/levelGroup/Global/img/bigBrickWall.i4.png.inc.c"
};
unsigned char Global_waterKinda_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/waterKinda.ci4.png.inc.c"
};
unsigned char Global_waterKinda_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/waterKinda.ci4.pal.inc.c"
};
unsigned char Global_brickWall2_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/brickWall2.ci4.png.inc.c"
};
unsigned char Global_brickWall2_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/brickWall2.ci4.pal.inc.c"
};
unsigned char Global_unk12_i4_PNG[] = {
#include "build/assets/levelGroup/Global/img/unk12.i4.png.inc.c"
};
unsigned char Global_goldStrip_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/goldStrip.ci4.png.inc.c"
};
unsigned char Global_goldStrip_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/goldStrip.ci4.pal.inc.c"
};
unsigned char Global_antMural4_i4_PNG[] = {
#include "build/assets/levelGroup/Global/img/antMural4.i4.png.inc.c"
};
unsigned char Global_antMural3_i4_PNG[] = {
#include "build/assets/levelGroup/Global/img/antMural3.i4.png.inc.c"
};
unsigned char Global_antMural2_i4_PNG[] = {
#include "build/assets/levelGroup/Global/img/antMural2.i4.png.inc.c"
};
unsigned char Global_antMural1_i4_PNG[] = {
#include "build/assets/levelGroup/Global/img/antMural1.i4.png.inc.c"
};
unsigned char Global_brickWall_i4_PNG[] = {
#include "build/assets/levelGroup/Global/img/brickWall.i4.png.inc.c"
};
unsigned char Global_strip2_i4_PNG[] = {
#include "build/assets/levelGroup/Global/img/strip2.i4.png.inc.c"
};
unsigned char Global_lavaSolid_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/lavaSolid.ci4.png.inc.c"
};
unsigned char Global_lavaSolid_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/lavaSolid.ci4.pal.inc.c"
};
unsigned char Global_fraMEd_ia4_PNG[] = {
#include "build/assets/levelGroup/Global/img/fraMEd.ia4.png.inc.c"
};
unsigned char Global_squares_i4_PNG[] = {
#include "build/assets/levelGroup/Global/img/squares.i4.png.inc.c"
};
unsigned char Global_metalPlate_i4_PNG[] = {
#include "build/assets/levelGroup/Global/img/metalPlate.i4.png.inc.c"
};
unsigned char Global_factoryPlates_i4_PNG[] = {
#include "build/assets/levelGroup/Global/img/factoryPlates.i4.png.inc.c"
};
unsigned char Global_steelPlate_i4_PNG[] = {
#include "build/assets/levelGroup/Global/img/steelPlate.i4.png.inc.c"
};
unsigned char Global_metalPlates_i4_PNG[] = {
#include "build/assets/levelGroup/Global/img/metalPlates.i4.png.inc.c"
};
unsigned char Global_ballGround_i4_PNG[] = {
#include "build/assets/levelGroup/Global/img/ballGround.i4.png.inc.c"
};
unsigned char Global_cube_i4_PNG[] = {
#include "build/assets/levelGroup/Global/img/cube.i4.png.inc.c"
};
unsigned char Global_hexComb_i4_PNG[] = {
#include "build/assets/levelGroup/Global/img/hexComb.i4.png.inc.c"
};
unsigned char Global_hexCombFade_i8_PNG[] = {
#include "build/assets/levelGroup/Global/img/hexCombFade.i8.png.inc.c"
};
unsigned char Global_brokenCube_i4_PNG[] = {
#include "build/assets/levelGroup/Global/img/brokenCube.i4.png.inc.c"
};
unsigned char Global_klTILE_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/klTILE.ci4.png.inc.c"
};
unsigned char Global_klTILE_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/klTILE.ci4.pal.inc.c"
};
unsigned char Global_gateCompressed_ci8_PNG[] = {
#include "build/assets/levelGroup/Global/img/gateCompressed.ci8.png.inc.c"
};
unsigned char Global_gateCompressed_ci8_PAL[] = {
#include "build/assets/levelGroup/Global/img/gateCompressed.ci8.pal.inc.c"
};
unsigned char Global_strip_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/strip.ci4.png.inc.c"
};
unsigned char Global_strip_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/strip.ci4.pal.inc.c"
};
unsigned char Global_chocoKidsLabel_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/chocoKidsLabel.ci4.png.inc.c"
};
unsigned char Global_chocoKidsLabel_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/chocoKidsLabel.ci4.pal.inc.c"
};
unsigned char Global_justBlack_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/justBlack.ci4.png.inc.c"
};
unsigned char Global_justBlack_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/justBlack.ci4.pal.inc.c"
};
unsigned char Global_cracker_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/cracker.ci4.png.inc.c"
};
unsigned char Global_cracker_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/cracker.ci4.pal.inc.c"
};
unsigned char Global_KLThing1_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/KLThing1.ci4.png.inc.c"
};
unsigned char Global_KLThing1_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/KLThing1.ci4.pal.inc.c"
};
unsigned char Global_KLFloor3_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/KLFloor3.ci4.png.inc.c"
};
unsigned char Global_KLFloor3_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/KLFloor3.ci4.pal.inc.c"
};
unsigned char Global_KLFloor2_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/KLFloor2.ci4.png.inc.c"
};
unsigned char Global_KLFloor2_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/KLFloor2.ci4.pal.inc.c"
};
unsigned char Global_waferSide_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/waferSide.ci4.png.inc.c"
};
unsigned char Global_waferSide_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/waferSide.ci4.pal.inc.c"
};
unsigned char Global_chocoKIDS_ci8_PNG[] = {
#include "build/assets/levelGroup/Global/img/chocoKIDS.ci8.png.inc.c"
};
unsigned char Global_chocoKIDS_ci8_PAL[] = {
#include "build/assets/levelGroup/Global/img/chocoKIDS.ci8.pal.inc.c"
};
unsigned char Global_sandwSide_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/sandwSide.ci4.png.inc.c"
};
unsigned char Global_sandwSide_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/sandwSide.ci4.pal.inc.c"
};
unsigned char Global_giftSide_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/giftSide.ci4.png.inc.c"
};
unsigned char Global_giftSide_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/giftSide.ci4.pal.inc.c"
};
unsigned char Global_giftTop_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/giftTop.ci4.png.inc.c"
};
unsigned char Global_giftTop_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/giftTop.ci4.pal.inc.c"
};
unsigned char Global_blueBrickFade_ci8_PNG[] = {
#include "build/assets/levelGroup/Global/img/blueBrickFade.ci8.png.inc.c"
};
unsigned char Global_blueBrickFade_ci8_PAL[] = {
#include "build/assets/levelGroup/Global/img/blueBrickFade.ci8.pal.inc.c"
};
unsigned char Global_rainbow_ci8_PNG[] = {
#include "build/assets/levelGroup/Global/img/rainbow.ci8.png.inc.c"
};
unsigned char Global_rainbow_ci8_PAL[] = {
#include "build/assets/levelGroup/Global/img/rainbow.ci8.pal.inc.c"
};
unsigned char Global_blueBrick_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/blueBrick.ci4.png.inc.c"
};
unsigned char Global_blueBrick_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/blueBrick.ci4.pal.inc.c"
};
unsigned char Global_orangeBrick_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/orangeBrick.ci4.png.inc.c"
};
unsigned char Global_orangeBrick_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/orangeBrick.ci4.pal.inc.c"
};
unsigned char Global_orangeLego_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/orangeLego.ci4.png.inc.c"
};
unsigned char Global_orangeLego_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/orangeLego.ci4.pal.inc.c"
};
unsigned char Global_blueLego_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/blueLego.ci4.png.inc.c"
};
unsigned char Global_blueLego_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/blueLego.ci4.pal.inc.c"
};
unsigned char Global_ropeChroma_ci8_PNG[] = {
#include "build/assets/levelGroup/Global/img/ropeChroma.ci8.png.inc.c"
};
unsigned char Global_ropeChroma_ci8_PAL[] = {
#include "build/assets/levelGroup/Global/img/ropeChroma.ci8.pal.inc.c"
};
unsigned char Global_pebbles_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/pebbles.ci4.png.inc.c"
};
unsigned char Global_pebbles_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/pebbles.ci4.pal.inc.c"
};
unsigned char Global_chain2_rgba16_PNG[] = {
#include "build/assets/levelGroup/Global/img/chain2.rgba16.png.inc.c"
};
unsigned char Global_chain1_rgba16_PNG[] = {
#include "build/assets/levelGroup/Global/img/chain1.rgba16.png.inc.c"
};
unsigned char Global_DCSmallTiles_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/DCSmallTiles.ci4.png.inc.c"
};
unsigned char Global_DCSmallTiles_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/DCSmallTiles.ci4.pal.inc.c"
};
unsigned char Global_DCSandFloor_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/DCSandFloor.ci4.png.inc.c"
};
unsigned char Global_DCSandFloor_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/DCSandFloor.ci4.pal.inc.c"
};
unsigned char Global_dcTHING2_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/dcTHING2.ci4.png.inc.c"
};
unsigned char Global_dcTHING2_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/dcTHING2.ci4.pal.inc.c"
};
unsigned char Global_jlText3_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/jlText3.ci4.png.inc.c"
};
unsigned char Global_jlText3_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/jlText3.ci4.pal.inc.c"
};
unsigned char Global_DCBricks_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/DCBricks.ci4.png.inc.c"
};
unsigned char Global_DCBricks_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/DCBricks.ci4.pal.inc.c"
};
unsigned char Global_DCFloor2_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/DCFloor2.ci4.png.inc.c"
};
unsigned char Global_DCFloor2_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/DCFloor2.ci4.pal.inc.c"
};
unsigned char Global_DCWall3_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/DCWall3.ci4.png.inc.c"
};
unsigned char Global_DCWall3_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/DCWall3.ci4.pal.inc.c"
};
unsigned char Global_DCWall2_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/DCWall2.ci4.png.inc.c"
};
unsigned char Global_DCWall2_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/DCWall2.ci4.pal.inc.c"
};
unsigned char Global_DCWall1_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/DCWall1.ci4.png.inc.c"
};
unsigned char Global_DCWall1_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/DCWall1.ci4.pal.inc.c"
};
unsigned char Global_DCThing3_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/DCThing3.ci4.png.inc.c"
};
unsigned char Global_DCThing3_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/DCThing3.ci4.pal.inc.c"
};
unsigned char Global_DCThing2_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/DCThing2.ci4.png.inc.c"
};
unsigned char Global_DCThing2_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/DCThing2.ci4.pal.inc.c"
};
unsigned char Global_DCThing1_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/DCThing1.ci4.png.inc.c"
};
unsigned char Global_DCThing1_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/DCThing1.ci4.pal.inc.c"
};
unsigned char Global_DCSandWallFadeUp_ci8_PNG[] = {
#include "build/assets/levelGroup/Global/img/DCSandWallFadeUp.ci8.png.inc.c"
};
unsigned char Global_DCSandWallFadeUp_ci8_PAL[] = {
#include "build/assets/levelGroup/Global/img/DCSandWallFadeUp.ci8.pal.inc.c"
};
unsigned char Global_GCThing1_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/GCThing1.ci4.png.inc.c"
};
unsigned char Global_GCThing1_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/GCThing1.ci4.pal.inc.c"
};
unsigned char Global_DCTiles_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/DCTiles.ci4.png.inc.c"
};
unsigned char Global_DCTiles_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/DCTiles.ci4.pal.inc.c"
};
unsigned char Global_DCFloor_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/DCFloor.ci4.png.inc.c"
};
unsigned char Global_DCFloor_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/DCFloor.ci4.pal.inc.c"
};
unsigned char Global_rope_rgba16_PNG[] = {
#include "build/assets/levelGroup/Global/img/rope.rgba16.png.inc.c"
};
unsigned char Global_ropeConnector_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/ropeConnector.ci4.png.inc.c"
};
unsigned char Global_ropeConnector_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/ropeConnector.ci4.pal.inc.c"
};
unsigned char Global_bigLog_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/bigLog.ci4.png.inc.c"
};
unsigned char Global_bigLog_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/bigLog.ci4.pal.inc.c"
};
unsigned char Global_sander_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/sander.ci4.png.inc.c"
};
unsigned char Global_sander_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/sander.ci4.pal.inc.c"
};
unsigned char Global_jllogTop_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/jllogTop.ci4.png.inc.c"
};
unsigned char Global_jllogTop_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/jllogTop.ci4.pal.inc.c"
};
unsigned char Global_jlLog_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/jlLog.ci4.png.inc.c"
};
unsigned char Global_jlLog_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/jlLog.ci4.pal.inc.c"
};
unsigned char Global_jlText1_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/jlText1.ci4.png.inc.c"
};
unsigned char Global_jlText1_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/jlText1.ci4.pal.inc.c"
};
unsigned char Global_gate_rgba16_PNG[] = {
#include "build/assets/levelGroup/Global/img/gate.rgba16.png.inc.c"
};
unsigned char Global_poleWood_ci8_PNG[] = {
#include "build/assets/levelGroup/Global/img/poleWood.ci8.png.inc.c"
};
unsigned char Global_poleWood_ci8_PAL[] = {
#include "build/assets/levelGroup/Global/img/poleWood.ci8.pal.inc.c"
};
unsigned char Global_Darkwood_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/Darkwood.ci4.png.inc.c"
};
unsigned char Global_Darkwood_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/Darkwood.ci4.pal.inc.c"
};
unsigned char Global_wood_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/wood.ci4.png.inc.c"
};
unsigned char Global_wood_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/wood.ci4.pal.inc.c"
};
unsigned char Global_GCFloorboard_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/GCFloorboard.ci4.png.inc.c"
};
unsigned char Global_GCFloorboard_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/GCFloorboard.ci4.pal.inc.c"
};
unsigned char Global_GCTiles_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/GCTiles.ci4.png.inc.c"
};
unsigned char Global_GCTiles_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/GCTiles.ci4.pal.inc.c"
};
unsigned char Global_GCWall2_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/GCWall2.ci4.png.inc.c"
};
unsigned char Global_GCWall2_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/GCWall2.ci4.pal.inc.c"
};
unsigned char Global_windows_ia4_PNG[] = {
#include "build/assets/levelGroup/Global/img/windows.ia4.png.inc.c"
};
unsigned char Global_water_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/water.ci4.png.inc.c"
};
unsigned char Global_water_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/water.ci4.pal.inc.c"
};
unsigned char Global_GCWall_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/GCWall.ci4.png.inc.c"
};
unsigned char Global_GCWall_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/GCWall.ci4.pal.inc.c"
};
unsigned char Global_GCBigCabinet_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/GCBigCabinet.ci4.png.inc.c"
};
unsigned char Global_GCBigCabinet_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/GCBigCabinet.ci4.pal.inc.c"
};
unsigned char Global_GCWood_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/GCWood.ci4.png.inc.c"
};
unsigned char Global_GCWood_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/GCWood.ci4.pal.inc.c"
};
unsigned char Global_sandFadeTop_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/sandFadeTop.ci4.png.inc.c"
};
unsigned char Global_sandFadeTop_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/sandFadeTop.ci4.pal.inc.c"
};
unsigned char Global_JLMountain_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/JLMountain.ci4.png.inc.c"
};
unsigned char Global_JLMountain_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/JLMountain.ci4.pal.inc.c"
};
unsigned char Global_JLCaveFadeTop_ci8_PNG[] = {
#include "build/assets/levelGroup/Global/img/JLCaveFadeTop.ci8.png.inc.c"
};
unsigned char Global_JLCaveFadeTop_ci8_PAL[] = {
#include "build/assets/levelGroup/Global/img/JLCaveFadeTop.ci8.pal.inc.c"
};
unsigned char Global_jlText5_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/jlText5.ci4.png.inc.c"
};
unsigned char Global_jlText5_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/jlText5.ci4.pal.inc.c"
};
unsigned char Global_jlText2_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/jlText2.ci4.png.inc.c"
};
unsigned char Global_jlText2_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/jlText2.ci4.pal.inc.c"
};
unsigned char Global_jlText4_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/jlText4.ci4.png.inc.c"
};
unsigned char Global_jlText4_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/jlText4.ci4.pal.inc.c"
};
unsigned char Global_JLCave_ci8_PNG[] = {
#include "build/assets/levelGroup/Global/img/JLCave.ci8.png.inc.c"
};
unsigned char Global_JLCave_ci8_PAL[] = {
#include "build/assets/levelGroup/Global/img/JLCave.ci8.pal.inc.c"
};
unsigned char Global_JLCaveFade_ci8_PNG[] = {
#include "build/assets/levelGroup/Global/img/JLCaveFade.ci8.png.inc.c"
};
unsigned char Global_JLCaveFade_ci8_PAL[] = {
#include "build/assets/levelGroup/Global/img/JLCaveFade.ci8.pal.inc.c"
};
unsigned char Global_BLRedYellowPlate_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/BLRedYellowPlate.ci4.png.inc.c"
};
unsigned char Global_BLRedYellowPlate_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/BLRedYellowPlate.ci4.pal.inc.c"
};
unsigned char Global_KLOrangeBrickFade_ci8_PNG[] = {
#include "build/assets/levelGroup/Global/img/KLOrangeBrickFade.ci8.png.inc.c"
};
unsigned char Global_KLOrangeBrickFade_ci8_PAL[] = {
#include "build/assets/levelGroup/Global/img/KLOrangeBrickFade.ci8.pal.inc.c"
};
unsigned char Global_KLCrackerFade_ci8_PNG[] = {
#include "build/assets/levelGroup/Global/img/KLCrackerFade.ci8.png.inc.c"
};
unsigned char Global_KLCrackerFade_ci8_PAL[] = {
#include "build/assets/levelGroup/Global/img/KLCrackerFade.ci8.pal.inc.c"
};
unsigned char Global_KLFloor_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/KLFloor.ci4.png.inc.c"
};
unsigned char Global_KLFloor_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/KLFloor.ci4.pal.inc.c"
};
unsigned char Global_woodFade_ci8_PNG[] = {
#include "build/assets/levelGroup/Global/img/woodFade.ci8.png.inc.c"
};
unsigned char Global_woodFade_ci8_PAL[] = {
#include "build/assets/levelGroup/Global/img/woodFade.ci8.pal.inc.c"
};
unsigned char Global_cabinetFade_ci8_PNG[] = {
#include "build/assets/levelGroup/Global/img/cabinetFade.ci8.png.inc.c"
};
unsigned char Global_cabinetFade_ci8_PAL[] = {
#include "build/assets/levelGroup/Global/img/cabinetFade.ci8.pal.inc.c"
};
unsigned char Global_cabinet_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/img/cabinet.ci4.png.inc.c"
};
unsigned char Global_cabinet_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/img/cabinet.ci4.pal.inc.c"
};
unsigned char Global_fogFade_ia8_PNG[] = {
#include "build/assets/levelGroup/Global/img/fogFade.ia8.png.inc.c"
};

#include "assets/levelGroup/Global/fallbackCube/fallbackCube.vtx.inc.c"

#include "assets/levelGroup/Global/fallbackCube/fallbackCube.gfx.inc.c"

#include "assets/levelGroup/Global/fallbackCube/fallbackCube.colV.inc.c"

#include "assets/levelGroup/Global/fallbackCube/fallbackCube.colT.inc.c"

#include "assets/levelGroup/Global/fallbackCube/fallbackCube.colS.inc.c"

#include "assets/levelGroup/Global/fallbackCube/fallbackCube.colH.inc.c"

#include "assets/levelGroup/Global/exitShadowSouth/exitShadowSouth.vtx.inc.c"

#include "assets/levelGroup/Global/exitShadowSouth/exitShadowSouth.gfx.inc.c"

#include "assets/levelGroup/Global/exitShadowSouth/exitShadowSouth.colV.inc.c"

#include "assets/levelGroup/Global/exitShadowSouth/exitShadowSouth.colT.inc.c"

#include "assets/levelGroup/Global/exitShadowSouth/exitShadowSouth.colS.inc.c"

#include "assets/levelGroup/Global/exitShadowSouth/exitShadowSouth.colH.inc.c"

#include "assets/levelGroup/Global/exitShadowNorth/exitShadowNorth.vtx.inc.c"

#include "assets/levelGroup/Global/exitShadowNorth/exitShadowNorth.gfx.inc.c"

#include "assets/levelGroup/Global/exitShadowNorth/exitShadowNorth.colV.inc.c"

#include "assets/levelGroup/Global/exitShadowNorth/exitShadowNorth.colT.inc.c"

#include "assets/levelGroup/Global/exitShadowNorth/exitShadowNorth.colS.inc.c"

#include "assets/levelGroup/Global/exitShadowNorth/exitShadowNorth.colH.inc.c"

#include "assets/levelGroup/Global/exitShadowEast/exitShadowEast.vtx.inc.c"

#include "assets/levelGroup/Global/exitShadowEast/exitShadowEast.gfx.inc.c"

#include "assets/levelGroup/Global/exitShadowEast/exitShadowEast.colV.inc.c"

#include "assets/levelGroup/Global/exitShadowEast/exitShadowEast.colT.inc.c"

#include "assets/levelGroup/Global/exitShadowEast/exitShadowEast.colS.inc.c"

#include "assets/levelGroup/Global/exitShadowEast/exitShadowEast.colH.inc.c"

#include "assets/levelGroup/Global/exitShadowWest/exitShadowWest.vtx.inc.c"

#include "assets/levelGroup/Global/exitShadowWest/exitShadowWest.gfx.inc.c"

#include "assets/levelGroup/Global/exitShadowWest/exitShadowWest.colV.inc.c"

#include "assets/levelGroup/Global/exitShadowWest/exitShadowWest.colT.inc.c"

#include "assets/levelGroup/Global/exitShadowWest/exitShadowWest.colS.inc.c"

#include "assets/levelGroup/Global/exitShadowWest/exitShadowWest.colH.inc.c"

#include "assets/levelGroup/Global/ALBLExit/ALBLExit.vtx.inc.c"

#include "assets/levelGroup/Global/ALBLExit/ALBLExit.gfx.inc.c"

#include "assets/levelGroup/Global/ALBLExit/ALBLExit.colV.inc.c"

#include "assets/levelGroup/Global/ALBLExit/ALBLExit.colT.inc.c"

#include "assets/levelGroup/Global/ALBLExit/ALBLExit.colS.inc.c"

#include "assets/levelGroup/Global/ALBLExit/ALBLExit.colH.inc.c"


#include "assets/levelGroup/Global/unk3/unk3.gfx.inc.c"

#include "assets/levelGroup/Global/unk3/unk3.colV.inc.c"

#include "assets/levelGroup/Global/unk3/unk3.colT.inc.c"

#include "assets/levelGroup/Global/unk3/unk3.colS.inc.c"

#include "assets/levelGroup/Global/unk3/unk3.colH.inc.c"

#include "assets/levelGroup/Global/BossBridge/BossBridge.vtx.inc.c"

#include "assets/levelGroup/Global/BossBridge/BossBridge.gfx.inc.c"

#include "assets/levelGroup/Global/BossBridge/BossBridge.colV.inc.c"

#include "assets/levelGroup/Global/BossBridge/BossBridge.colT.inc.c"

#include "assets/levelGroup/Global/BossBridge/BossBridge.colS.inc.c"

#include "assets/levelGroup/Global/BossBridge/BossBridge.colH.inc.c"

#include "assets/levelGroup/Global/ALPole/ALPole.vtx.inc.c"
unsigned char Global_side_i4_PNG[] = {
#include "build/assets/levelGroup/Global/ALPole/side.i4.png.inc.c"
};
unsigned char Global_topper_i4_PNG[] = {
#include "build/assets/levelGroup/Global/ALPole/topper.i4.png.inc.c"
};

#include "assets/levelGroup/Global/ALPole/ALPole.gfx.inc.c"

#include "assets/levelGroup/Global/ALPole/ALPole.colV.inc.c"

#include "assets/levelGroup/Global/ALPole/ALPole.colT.inc.c"

#include "assets/levelGroup/Global/ALPole/ALPole.colS.inc.c"

#include "assets/levelGroup/Global/ALPole/ALPole.colH.inc.c"

#include "assets/levelGroup/Global/ALBLDoor/ALBLDoor.vtx.inc.c"
unsigned char Global_ALBLDoor_i4_PNG[] = {
#include "build/assets/levelGroup/Global/ALBLDoor/ALBLDoor.i4.png.inc.c"
};

#include "assets/levelGroup/Global/ALBLDoor/ALBLDoor.gfx.inc.c"

#include "assets/levelGroup/Global/ALBLDoor/ALBLDoor.colV.inc.c"

#include "assets/levelGroup/Global/ALBLDoor/ALBLDoor.colT.inc.c"

#include "assets/levelGroup/Global/ALBLDoor/ALBLDoor.colS.inc.c"

#include "assets/levelGroup/Global/ALBLDoor/ALBLDoor.colH.inc.c"

#include "assets/levelGroup/Global/ALSpinDoor/ALSpinDoor.vtx.inc.c"
unsigned char Global_ALSpinDoor_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/ALSpinDoor/ALSpinDoor.ci4.png.inc.c"
};
unsigned char Global_ALSpinDoor_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/ALSpinDoor/ALSpinDoor.ci4.pal.inc.c"
};

#include "assets/levelGroup/Global/ALSpinDoor/ALSpinDoor.gfx.inc.c"

#include "assets/levelGroup/Global/ALSpinDoor/ALSpinDoor.colV.inc.c"

#include "assets/levelGroup/Global/ALSpinDoor/ALSpinDoor.colT.inc.c"

#include "assets/levelGroup/Global/ALSpinDoor/ALSpinDoor.colS.inc.c"

#include "assets/levelGroup/Global/ALSpinDoor/ALSpinDoor.colH.inc.c"

#include "assets/levelGroup/Global/BLLavaFloor/BLLavaFloor.vtx.inc.c"

#include "assets/levelGroup/Global/BLLavaFloor/BLLavaFloor.gfx.inc.c"

#include "assets/levelGroup/Global/BLLavaFloor/BLLavaFloor.colV.inc.c"

#include "assets/levelGroup/Global/BLLavaFloor/BLLavaFloor.colT.inc.c"

#include "assets/levelGroup/Global/BLLavaFloor/BLLavaFloor.colS.inc.c"

#include "assets/levelGroup/Global/BLLavaFloor/BLLavaFloor.colH.inc.c"

#include "assets/levelGroup/Global/BLLava/BLLava.vtx.inc.c"
unsigned char Global_BLLava_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/BLLava/BLLava.ci4.png.inc.c"
};
unsigned char Global_BLLava_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/BLLava/BLLava.ci4.pal.inc.c"
};

#include "assets/levelGroup/Global/BLLava/BLLava.gfx.inc.c"

#include "assets/levelGroup/Global/BLLava/BLLava.colV.inc.c"

#include "assets/levelGroup/Global/BLLava/BLLava.colT.inc.c"

#include "assets/levelGroup/Global/BLLava/BLLava.colS.inc.c"

#include "assets/levelGroup/Global/BLLava/BLLava.colH.inc.c"

#include "assets/levelGroup/Global/BLLava2/BLLava2.vtx.inc.c"
unsigned char Global_BLLava2_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/BLLava2/BLLava2.ci4.png.inc.c"
};
unsigned char Global_BLLava2_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/BLLava2/BLLava2.ci4.pal.inc.c"
};

#include "assets/levelGroup/Global/BLLava2/BLLava2.gfx.inc.c"

#include "assets/levelGroup/Global/BLLava2/BLLava2.colV.inc.c"

#include "assets/levelGroup/Global/BLLava2/BLLava2.colT.inc.c"

#include "assets/levelGroup/Global/BLLava2/BLLava2.colS.inc.c"

#include "assets/levelGroup/Global/BLLava2/BLLava2.colH.inc.c"

#include "assets/levelGroup/Global/BLLava3/BLLava3.vtx.inc.c"
unsigned char Global_BLLava3_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/BLLava3/BLLava3.ci4.png.inc.c"
};
unsigned char Global_BLLava3_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/BLLava3/BLLava3.ci4.pal.inc.c"
};

#include "assets/levelGroup/Global/BLLava3/BLLava3.gfx.inc.c"

#include "assets/levelGroup/Global/BLLava3/BLLava3.colV.inc.c"

#include "assets/levelGroup/Global/BLLava3/BLLava3.colT.inc.c"

#include "assets/levelGroup/Global/BLLava3/BLLava3.colS.inc.c"

#include "assets/levelGroup/Global/BLLava3/BLLava3.colH.inc.c"

#include "assets/levelGroup/Global/BLLava4/BLLava4.vtx.inc.c"
unsigned char Global_BLLava4_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/BLLava4/BLLava4.ci4.png.inc.c"
};
unsigned char Global_BLLava4_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/BLLava4/BLLava4.ci4.pal.inc.c"
};

#include "assets/levelGroup/Global/BLLava4/BLLava4.gfx.inc.c"

#include "assets/levelGroup/Global/BLLava4/BLLava4.colV.inc.c"

#include "assets/levelGroup/Global/BLLava4/BLLava4.colT.inc.c"

#include "assets/levelGroup/Global/BLLava4/BLLava4.colS.inc.c"

#include "assets/levelGroup/Global/BLLava4/BLLava4.colH.inc.c"

#include "assets/levelGroup/Global/BLLava5/BLLava5.vtx.inc.c"
unsigned char Global_BLLava5_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/BLLava5/BLLava5.ci4.png.inc.c"
};
unsigned char Global_BLLava5_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/BLLava5/BLLava5.ci4.pal.inc.c"
};

#include "assets/levelGroup/Global/BLLava5/BLLava5.gfx.inc.c"

#include "assets/levelGroup/Global/BLLava5/BLLava5.colV.inc.c"

#include "assets/levelGroup/Global/BLLava5/BLLava5.colT.inc.c"

#include "assets/levelGroup/Global/BLLava5/BLLava5.colS.inc.c"

#include "assets/levelGroup/Global/BLLava5/BLLava5.colH.inc.c"

#include "assets/levelGroup/Global/BLLava6/BLLava6.vtx.inc.c"
unsigned char Global_BLLava6_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/BLLava6/BLLava6.ci4.png.inc.c"
};
unsigned char Global_BLLava6_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/BLLava6/BLLava6.ci4.pal.inc.c"
};

#include "assets/levelGroup/Global/BLLava6/BLLava6.gfx.inc.c"

#include "assets/levelGroup/Global/BLLava6/BLLava6.colV.inc.c"

#include "assets/levelGroup/Global/BLLava6/BLLava6.colT.inc.c"

#include "assets/levelGroup/Global/BLLava6/BLLava6.colS.inc.c"

#include "assets/levelGroup/Global/BLLava6/BLLava6.colH.inc.c"

#include "assets/levelGroup/Global/BLLava7/BLLava7.vtx.inc.c"
unsigned char Global_BLLava7_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/BLLava7/BLLava7.ci4.png.inc.c"
};
unsigned char Global_BLLava7_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/BLLava7/BLLava7.ci4.pal.inc.c"
};

#include "assets/levelGroup/Global/BLLava7/BLLava7.gfx.inc.c"

#include "assets/levelGroup/Global/BLLava7/BLLava7.colV.inc.c"

#include "assets/levelGroup/Global/BLLava7/BLLava7.colT.inc.c"

#include "assets/levelGroup/Global/BLLava7/BLLava7.colS.inc.c"

#include "assets/levelGroup/Global/BLLava7/BLLava7.colH.inc.c"

#include "assets/levelGroup/Global/BLLava8/BLLava8.vtx.inc.c"
unsigned char Global_BLLava8_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/BLLava8/BLLava8.ci4.png.inc.c"
};
unsigned char Global_BLLava8_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/BLLava8/BLLava8.ci4.pal.inc.c"
};

#include "assets/levelGroup/Global/BLLava8/BLLava8.gfx.inc.c"

#include "assets/levelGroup/Global/BLLava8/BLLava8.colV.inc.c"

#include "assets/levelGroup/Global/BLLava8/BLLava8.colT.inc.c"

#include "assets/levelGroup/Global/BLLava8/BLLava8.colS.inc.c"

#include "assets/levelGroup/Global/BLLava8/BLLava8.colH.inc.c"

#include "assets/levelGroup/Global/BLDestructableTop/BLDestructableTop.vtx.inc.c"

#include "assets/levelGroup/Global/BLDestructableTop/BLDestructableTop.gfx.inc.c"

#include "assets/levelGroup/Global/BLDestructableTop/BLDestructableTop.colV.inc.c"

#include "assets/levelGroup/Global/BLDestructableTop/BLDestructableTop.colT.inc.c"

#include "assets/levelGroup/Global/BLDestructableTop/BLDestructableTop.colS.inc.c"

#include "assets/levelGroup/Global/BLDestructableTop/BLDestructableTop.colH.inc.c"

#include "assets/levelGroup/Global/BLMetalBridge/BLMetalBridge.vtx.inc.c"

#include "assets/levelGroup/Global/BLMetalBridge/BLMetalBridge.gfx.inc.c"

#include "assets/levelGroup/Global/BLMetalBridge/BLMetalBridge.colV.inc.c"

#include "assets/levelGroup/Global/BLMetalBridge/BLMetalBridge.colT.inc.c"

#include "assets/levelGroup/Global/BLMetalBridge/BLMetalBridge.colS.inc.c"

#include "assets/levelGroup/Global/BLMetalBridge/BLMetalBridge.colH.inc.c"

#include "assets/levelGroup/Global/KLExit/KLExit.vtx.inc.c"

#include "assets/levelGroup/Global/KLExit/KLExit.gfx.inc.c"

#include "assets/levelGroup/Global/KLExit/KLExit.colV.inc.c"

#include "assets/levelGroup/Global/KLExit/KLExit.colT.inc.c"

#include "assets/levelGroup/Global/KLExit/KLExit.colS.inc.c"

#include "assets/levelGroup/Global/KLExit/KLExit.colH.inc.c"

#include "assets/levelGroup/Global/KLDoor/KLDoor.vtx.inc.c"
unsigned char Global_KLDoor_ci4_PNG[] = {
#include "build/assets/levelGroup/Global/KLDoor/KLDoor.ci4.png.inc.c"
};
unsigned char Global_KLDoor_ci4_PAL[] = {
#include "build/assets/levelGroup/Global/KLDoor/KLDoor.ci4.pal.inc.c"
};

#include "assets/levelGroup/Global/KLDoor/KLDoor.gfx.inc.c"

#include "assets/levelGroup/Global/KLDoor/KLDoor.colV.inc.c"

#include "assets/levelGroup/Global/KLDoor/KLDoor.colT.inc.c"

#include "assets/levelGroup/Global/KLDoor/KLDoor.colS.inc.c"

#include "assets/levelGroup/Global/KLDoor/KLDoor.colH.inc.c"

#include "assets/levelGroup/Global/DCExit/DCExit.vtx.inc.c"

#include "assets/levelGroup/Global/DCExit/DCExit.gfx.inc.c"

#include "assets/levelGroup/Global/DCExit/DCExit.colV.inc.c"

#include "assets/levelGroup/Global/DCExit/DCExit.colT.inc.c"

#include "assets/levelGroup/Global/DCExit/DCExit.colS.inc.c"

#include "assets/levelGroup/Global/DCExit/DCExit.colH.inc.c"

#include "assets/levelGroup/Global/TallExitShadow1/TallExitShadow1.vtx.inc.c"

#include "assets/levelGroup/Global/TallExitShadow1/TallExitShadow1.gfx.inc.c"

#include "assets/levelGroup/Global/TallExitShadow1/TallExitShadow1.colV.inc.c"

#include "assets/levelGroup/Global/TallExitShadow1/TallExitShadow1.colT.inc.c"

#include "assets/levelGroup/Global/TallExitShadow1/TallExitShadow1.colS.inc.c"

#include "assets/levelGroup/Global/TallExitShadow1/TallExitShadow1.colH.inc.c"

#include "assets/levelGroup/Global/TallExitShadow2/TallExitShadow2.vtx.inc.c"

#include "assets/levelGroup/Global/TallExitShadow2/TallExitShadow2.gfx.inc.c"

#include "assets/levelGroup/Global/TallExitShadow2/TallExitShadow2.colV.inc.c"

#include "assets/levelGroup/Global/TallExitShadow2/TallExitShadow2.colT.inc.c"

#include "assets/levelGroup/Global/TallExitShadow2/TallExitShadow2.colS.inc.c"

#include "assets/levelGroup/Global/TallExitShadow2/TallExitShadow2.colH.inc.c"

#include "assets/levelGroup/Global/GCExit1/GCExit1.vtx.inc.c"

#include "assets/levelGroup/Global/GCExit1/GCExit1.gfx.inc.c"

#include "assets/levelGroup/Global/GCExit1/GCExit1.colV.inc.c"

#include "assets/levelGroup/Global/GCExit1/GCExit1.colT.inc.c"

#include "assets/levelGroup/Global/GCExit1/GCExit1.colS.inc.c"

#include "assets/levelGroup/Global/GCExit1/GCExit1.colH.inc.c"

#include "assets/levelGroup/Global/GCExit2/GCExit2.vtx.inc.c"

#include "assets/levelGroup/Global/GCExit2/GCExit2.gfx.inc.c"

#include "assets/levelGroup/Global/GCExit2/GCExit2.colV.inc.c"

#include "assets/levelGroup/Global/GCExit2/GCExit2.colT.inc.c"

#include "assets/levelGroup/Global/GCExit2/GCExit2.colS.inc.c"

#include "assets/levelGroup/Global/GCExit2/GCExit2.colH.inc.c"

#include "assets/levelGroup/Global/trainingRoomLight/trainingRoomLight.vtx.inc.c"

#include "assets/levelGroup/Global/trainingRoomLight/trainingRoomLight.gfx.inc.c"

#include "assets/levelGroup/Global/trainingRoomLight/trainingRoomLight.colV.inc.c"

#include "assets/levelGroup/Global/trainingRoomLight/trainingRoomLight.colT.inc.c"

#include "assets/levelGroup/Global/trainingRoomLight/trainingRoomLight.colS.inc.c"

#include "assets/levelGroup/Global/trainingRoomLight/trainingRoomLight.colH.inc.c"

#include "assets/levelGroup/Global/JLCaveExit1/JLCaveExit1.vtx.inc.c"

#include "assets/levelGroup/Global/JLCaveExit1/JLCaveExit1.gfx.inc.c"

#include "assets/levelGroup/Global/JLCaveExit1/JLCaveExit1.colV.inc.c"

#include "assets/levelGroup/Global/JLCaveExit1/JLCaveExit1.colT.inc.c"

#include "assets/levelGroup/Global/JLCaveExit1/JLCaveExit1.colS.inc.c"

#include "assets/levelGroup/Global/JLCaveExit1/JLCaveExit1.colH.inc.c"

#include "assets/levelGroup/Global/JLCaveExit2/JLCaveExit2.vtx.inc.c"

#include "assets/levelGroup/Global/JLCaveExit2/JLCaveExit2.gfx.inc.c"

#include "assets/levelGroup/Global/JLCaveExit2/JLCaveExit2.colV.inc.c"

#include "assets/levelGroup/Global/JLCaveExit2/JLCaveExit2.colT.inc.c"

#include "assets/levelGroup/Global/JLCaveExit2/JLCaveExit2.colS.inc.c"

#include "assets/levelGroup/Global/JLCaveExit2/JLCaveExit2.colH.inc.c"

#include "assets/levelGroup/Global/JLCaveExit3/JLCaveExit3.vtx.inc.c"

#include "assets/levelGroup/Global/JLCaveExit3/JLCaveExit3.gfx.inc.c"

#include "assets/levelGroup/Global/JLCaveExit3/JLCaveExit3.colV.inc.c"

#include "assets/levelGroup/Global/JLCaveExit3/JLCaveExit3.colT.inc.c"

#include "assets/levelGroup/Global/JLCaveExit3/JLCaveExit3.colS.inc.c"

#include "assets/levelGroup/Global/JLCaveExit3/JLCaveExit3.colH.inc.c"

#include "assets/levelGroup/Global/JLCaveExit4/JLCaveExit4.vtx.inc.c"

#include "assets/levelGroup/Global/JLCaveExit4/JLCaveExit4.gfx.inc.c"

#include "assets/levelGroup/Global/JLCaveExit4/JLCaveExit4.colV.inc.c"

#include "assets/levelGroup/Global/JLCaveExit4/JLCaveExit4.colT.inc.c"

#include "assets/levelGroup/Global/JLCaveExit4/JLCaveExit4.colS.inc.c"

#include "assets/levelGroup/Global/JLCaveExit4/JLCaveExit4.colH.inc.c"

#include "assets/levelGroup/Global/JLOutsideEntrance/JLOutsideEntrance.vtx.inc.c"

#include "assets/levelGroup/Global/JLOutsideEntrance/JLOutsideEntrance.gfx.inc.c"

#include "assets/levelGroup/Global/JLOutsideEntrance/JLOutsideEntrance.colV.inc.c"

#include "assets/levelGroup/Global/JLOutsideEntrance/JLOutsideEntrance.colT.inc.c"

#include "assets/levelGroup/Global/JLOutsideEntrance/JLOutsideEntrance.colS.inc.c"

#include "assets/levelGroup/Global/JLOutsideEntrance/JLOutsideEntrance.colH.inc.c"

#include "assets/levelGroup/Global/JLFxCamPillar/JLFxCamPillar.vtx.inc.c"

#include "assets/levelGroup/Global/JLFxCamPillar/JLFxCamPillar.gfx.inc.c"

#include "assets/levelGroup/Global/JLFxCamPillar/JLFxCamPillar.colV.inc.c"

#include "assets/levelGroup/Global/JLFxCamPillar/JLFxCamPillar.colT.inc.c"

#include "assets/levelGroup/Global/JLFxCamPillar/JLFxCamPillar.colS.inc.c"

#include "assets/levelGroup/Global/JLFxCamPillar/JLFxCamPillar.colH.inc.c"

#include "assets/levelGroup/Global/JLCaveDoor/JLCaveDoor.vtx.inc.c"

#include "assets/levelGroup/Global/JLCaveDoor/JLCaveDoor.gfx.inc.c"

#include "assets/levelGroup/Global/JLCaveDoor/JLCaveDoor.colV.inc.c"

#include "assets/levelGroup/Global/JLCaveDoor/JLCaveDoor.colT.inc.c"

#include "assets/levelGroup/Global/JLCaveDoor/JLCaveDoor.colS.inc.c"

#include "assets/levelGroup/Global/JLCaveDoor/JLCaveDoor.colH.inc.c"

