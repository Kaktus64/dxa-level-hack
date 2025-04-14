-- name: DXA Hack
-- description: the hack r98ewh78973242374239874273894879243978248

smlua_text_utils_course_acts_replace(COURSE_WF, (" 1 CONSTRUCTION LEVEL"),    ("ON THE COLUMNS"),    ("FIND THE GRILL SWTICH"),    ("MYSTIC STONES OF THE LAKE"),    ("SECRET OVER THE LONE BLUE COIN"),    ("CAVE OF THE LAKE -SB-"),    ("OVER THE RAILROAD -WB-"))

local starPositions = gLevelValues.starPositions
vec3f_set(starPositions.KingWhompStarPos, -5116, -4306, -5381)

E_MODEL_CAVESTAR = smlua_model_util_get_id("cavestar_geo")