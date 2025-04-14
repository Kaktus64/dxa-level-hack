#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "make_const_nonconst.h"
#include "levels/wf/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_wf_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x7, _wf_segment_7SegmentRomStart, _wf_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _cloud_floor_skybox_mio0SegmentRomStart, _cloud_floor_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario),
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, wf_area_1),
		WARP_NODE(0x0A, LEVEL_CASTLE_COURTYARD, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE_COURTYARD, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE_GROUNDS, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(E_MODEL_YELLOW_COIN, 6168, -9211, 165, 0, 90, 0, 0x00000000, id_bhvYellowCoin),
		OBJECT(E_MODEL_YELLOW_COIN, 6168, -9211, 381, 0, 90, 0, 0x00000000, id_bhvYellowCoin),
		OBJECT(E_MODEL_YELLOW_COIN, 5542, -9211, 2288, 0, 0, 0, 0x00000000, id_bhvYellowCoin),
		OBJECT(E_MODEL_GOOMBA, 6189, -9076, 1176, 0, 0, 0, 0x00000000, id_bhvGoomba),
		OBJECT(E_MODEL_GOOMBA, 4841, -9076, 2726, 0, 0, 0, 0x00000000, id_bhvGoomba),
		OBJECT(E_MODEL_YELLOW_COIN, 5326, -9211, 2288, 0, 0, 0, 0x00000000, id_bhvYellowCoin),
		OBJECT(E_MODEL_YELLOW_COIN, 5110, -9211, 2288, 0, 0, 0, 0x00000000, id_bhvYellowCoin),
		OBJECT(E_MODEL_YELLOW_COIN, 6168, -9211, 597, 0, 90, 0, 0x00000000, id_bhvYellowCoin),
		OBJECT(E_MODEL_THWOMP, 3143, -7228, 2294, 0, 0, 0, 0x00000000, id_bhvThwomp),
		OBJECT(E_MODEL_GOOMBA, 3208, -10015, 1176, 0, 0, 0, 0x00000000, id_bhvGoomba),
		OBJECT(E_MODEL_GOOMBA, 3679, -10015, 41, 0, 0, 0, 0x00000000, id_bhvGoomba),
		OBJECT(E_MODEL_THWOMP, 6123, -7228, -624, 0, 0, 0, 0x00000000, id_bhvThwomp),
		OBJECT(E_MODEL_STAR, 9433, -6673, 4755, 0, 0, 0, (1 << 24), id_bhvStar),
		OBJECT(E_MODEL_THWOMP, 6499, -7092, 4766, 0, 0, 0, 0x00000000, id_bhvThwomp),
		OBJECT(E_MODEL_BLACK_BOBOMB, 9766, -9123, 904, 0, 0, 0, 0x00000000, id_bhvRedCoinStarMarker),
		OBJECT(E_MODEL_RED_COIN, 4703, -8733, -2339, 0, 90, 0, 0x00000000, id_bhvRedCoin),
		OBJECT_WITH_ACTS(E_MODEL_WHOMP, -5423, -5055, -5727, 0, 0, 0, (0 << 24), id_bhvWhompKingBoss, ACT_1),
		OBJECT(E_MODEL_RED_COIN, 4703, -8477, -2200, 0, 90, 0, 0x00000000, id_bhvRedCoin),
		OBJECT(E_MODEL_RED_COIN, 4912, -8733, -2200, 0, 90, 0, 0x00000000, id_bhvRedCoin),
		OBJECT(E_MODEL_RED_COIN, 4912, -8477, -2200, 0, 90, 0, 0x00000000, id_bhvRedCoin),
		OBJECT(E_MODEL_RED_COIN, 4703, -8733, -2078, 0, 90, 0, 0x00000000, id_bhvRedCoin),
		OBJECT(E_MODEL_YELLOW_COIN, 5883, -7733, 7717, 0, 90, 0, 0x00000000, id_bhvYellowCoin),
		OBJECT(E_MODEL_YELLOW_COIN, 5883, -7733, 7893, 0, 90, 0, 0x00000000, id_bhvYellowCoin),
		OBJECT(E_MODEL_RED_COIN, 4703, -8477, -2078, 0, 90, 0, 0x00000000, id_bhvRedCoin),
		OBJECT(E_MODEL_GOOMBA, 8462, -7305, 7467, 0, 0, 0, 0x00000000, id_bhvGoomba),
		OBJECT(E_MODEL_BLACK_BOBOMB, 9722, -7305, 8227, 0, 0, 0, 0x00000000, id_bhvBobomb),
		OBJECT(E_MODEL_RED_COIN, 4703, -8733, -2200, 0, 90, 0, 0x00000000, id_bhvRedCoin),
		OBJECT(E_MODEL_GOOMBA, 9559, -7191, 6751, 0, 0, 0, 0x00000000, id_bhvGoomba),
		OBJECT(E_MODEL_BLACK_BOBOMB, 8288, -9798, 3488, 0, 0, 0, 0x00000000, id_bhvBobomb),
		OBJECT(E_MODEL_BLACK_BOBOMB, 8016, -9123, 1338, 0, 0, 0, 0x00000000, id_bhvBobomb),
		OBJECT(E_MODEL_BLACK_BOBOMB, 7215, -9123, 517, 0, 0, 0, 0x00000000, id_bhvBobomb),
		OBJECT(E_MODEL_BLACK_BOBOMB, 8979, -9798, 4058, 0, 0, 0, 0x00000000, id_bhvBobomb),
		OBJECT(E_MODEL_RED_COIN, 4912, -8733, -2078, 0, 90, 0, 0x00000000, id_bhvRedCoin),
		OBJECT(E_MODEL_RED_COIN, 4912, -8477, -2078, 0, 90, 0, 0x00000000, id_bhvRedCoin),
		OBJECT(E_MODEL_RED_COIN, 4703, -8477, -2339, 0, 90, 0, 0x00000000, id_bhvRedCoin),
		OBJECT(E_MODEL_RED_COIN, 4912, -8733, -2339, 0, 90, 0, 0x00000000, id_bhvRedCoin),
		OBJECT(E_MODEL_RED_COIN, 4912, -8477, -2339, 0, 90, 0, 0x00000000, id_bhvRedCoin),
		MARIO_POS(0x01, 0, 261, -7055, -6872),
		OBJECT(MODEL_NONE, 261, -7055, -6872, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		TERRAIN(wf_area_1_collision),
		MACRO_OBJECTS(wf_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_UNDERGROUND),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),
	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, 261, -7055, -6872),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};