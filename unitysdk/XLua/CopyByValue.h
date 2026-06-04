#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Conflict_NormalGroupNPCIndexKey.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveBaseTeamInfo_SimpleSlotData.h"
#include "unitysdk/RPG/Client/ActivityIntroButton_ActivityIntroButtonConfig.h"
#include "unitysdk/RPG/Client/ActivityMarble/MarbleSealTalkConfig.h"
#include "unitysdk/RPG/Client/AdventureBuffData.h"
#include "unitysdk/RPG/Client/AlleyPackStatistics.h"
#include "unitysdk/RPG/Client/CakeBubbleOffset.h"
#include "unitysdk/RPG/Client/ChessRogueBoardCellEnterData.h"
#include "unitysdk/RPG/Client/FightFestProgress.h"
#include "unitysdk/RPG/Client/FindChestMarkConfig.h"
#include "unitysdk/RPG/Client/MazeAutoUseMPItemHintData_ItemEntry.h"
#include "unitysdk/RPG/Client/MissionModule_PlayMessage.h"
#include "unitysdk/RPG/Client/MissionModule_ResultValue.h"
#include "unitysdk/RPG/Client/MultipleDropTimesData.h"
#include "unitysdk/RPG/Client/PlayerLevelUpgradeData.h"
#include "unitysdk/RPG/Client/PlayerStaminaData.h"
#include "unitysdk/RPG/Client/PlayerWorldLevelUpgradeData.h"
#include "unitysdk/RPG/Client/Promises/TimeData.h"
#include "unitysdk/RPG/Client/QteCatchGhostRewindInstance_PathPoint.h"
#include "unitysdk/RPG/Client/RogueMiracleIdentifier.h"
#include "unitysdk/RPG/Client/ScheduleData_ScheduleDataUniqueKey.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/Client/TrainPartyBuildUtils_PhotoRarityData.h"
#include "unitysdk/RPG/Client/TrainPartyBuildUtils_PhotoWorldData.h"
#include "unitysdk/RPG/Client/UILineRenderer_Curve.h"
#include "unitysdk/RPG/Client/UIPolygon_VertexAttribute.h"
#include "unitysdk/RPG/Client/UIQuad_VertexAttribute.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayBossResult.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayPuzzleBoard_ReplaySaveData.h"
#include "unitysdk/RPG/GameCore/AbilityDynamicFloatInjection.h"
#include "unitysdk/RPG/GameCore/AbilityExtraProperty.h"
#include "unitysdk/RPG/GameCore/AbilityLinearProperty.h"
#include "unitysdk/RPG/GameCore/AbilityLinearPropertyWithOverride.h"
#include "unitysdk/RPG/GameCore/AvatarPromotionExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/AvatarServantSkillExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/AvatarSkillExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/AvatarSkillTreeExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/BattleEventExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/DialogueGroupExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FixPoint_FixPointParsePartData.h"
#include "unitysdk/RPG/GameCore/GuideChallengeTabExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/GuideRogueTabExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/ItemExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/LevelDataComponent_BattleScoringData.h"
#include "unitysdk/RPG/GameCore/MainMissionExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/MazeBuffExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/MessageItemExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/MonsterExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/MonsterSkillExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/PerformanceEExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/PlaneEventExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/PropExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/RaidConfigExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/RewardExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/RogueTalkNameColorExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/SpecialAvatarExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/SpecialNPCDataExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/StageExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/StatusExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/SubMissionExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/TalkSentenceConfigExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/TextmapExcelTable_IndexKey.h"
#include "unitysdk/RPG/GameCore/VoiceConfigExcelTable_IndexKey.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/SuperScrollView/RowColumnPair.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/BoundingSphere.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/Ray2D.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/UI/GridLayoutGroup_RowColumnPair.h"
#include "unitysdk/UnityEngine/UI/SmoothMaskMaterial_Params.h"
#include "unitysdk/UnityEngine/UI/TextPosition.h"
#include "unitysdk/UnityEngine/UI/TouchFilter_FilterParam.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class Type; }
namespace XLua { class ObjectTranslator; }

#define XLUA_COPYBYVALUE_ISSTRUCT_OFFSET UNITYSDK_OFFSET(0xE57B7E0)
#define XLUA_COPYBYVALUE_PACK_10_OFFSET UNITYSDK_OFFSET(0xE565670)
#define XLUA_COPYBYVALUE_PACK_11_OFFSET UNITYSDK_OFFSET(0xE565910)
#define XLUA_COPYBYVALUE_PACK_12_OFFSET UNITYSDK_OFFSET(0xE565CD0)
#define XLUA_COPYBYVALUE_PACK_13_OFFSET UNITYSDK_OFFSET(0xE565F80)
#define XLUA_COPYBYVALUE_PACK_14_OFFSET UNITYSDK_OFFSET(0xE5662F0)
#define XLUA_COPYBYVALUE_PACK_15_OFFSET UNITYSDK_OFFSET(0xE5666B0)
#define XLUA_COPYBYVALUE_PACK_16_OFFSET UNITYSDK_OFFSET(0xE566A20)
#define XLUA_COPYBYVALUE_PACK_17_OFFSET UNITYSDK_OFFSET(0xE566DE0)
#define XLUA_COPYBYVALUE_PACK_18_OFFSET UNITYSDK_OFFSET(0xE567150)
#define XLUA_COPYBYVALUE_PACK_19_OFFSET UNITYSDK_OFFSET(0xE567510)
#define XLUA_COPYBYVALUE_PACK_1_OFFSET UNITYSDK_OFFSET(0xE562280)
#define XLUA_COPYBYVALUE_PACK_20_OFFSET UNITYSDK_OFFSET(0xE5677C0)
#define XLUA_COPYBYVALUE_PACK_21_OFFSET UNITYSDK_OFFSET(0xE567A70)
#define XLUA_COPYBYVALUE_PACK_22_OFFSET UNITYSDK_OFFSET(0xE567DE0)
#define XLUA_COPYBYVALUE_PACK_23_OFFSET UNITYSDK_OFFSET(0xE5681A0)
#define XLUA_COPYBYVALUE_PACK_24_OFFSET UNITYSDK_OFFSET(0xE5685E0)
#define XLUA_COPYBYVALUE_PACK_25_OFFSET UNITYSDK_OFFSET(0xE568910)
#define XLUA_COPYBYVALUE_PACK_26_OFFSET UNITYSDK_OFFSET(0xE568BC0)
#define XLUA_COPYBYVALUE_PACK_27_OFFSET UNITYSDK_OFFSET(0xE568F30)
#define XLUA_COPYBYVALUE_PACK_28_OFFSET UNITYSDK_OFFSET(0xE5693B0)
#define XLUA_COPYBYVALUE_PACK_29_OFFSET UNITYSDK_OFFSET(0xE569830)
#define XLUA_COPYBYVALUE_PACK_2_OFFSET UNITYSDK_OFFSET(0xE562810)
#define XLUA_COPYBYVALUE_PACK_30_OFFSET UNITYSDK_OFFSET(0xE569C90)
#define XLUA_COPYBYVALUE_PACK_31_OFFSET UNITYSDK_OFFSET(0xE56A050)
#define XLUA_COPYBYVALUE_PACK_32_OFFSET UNITYSDK_OFFSET(0xE56A300)
#define XLUA_COPYBYVALUE_PACK_33_OFFSET UNITYSDK_OFFSET(0xE56A5B0)
#define XLUA_COPYBYVALUE_PACK_34_OFFSET UNITYSDK_OFFSET(0xE56A860)
#define XLUA_COPYBYVALUE_PACK_35_OFFSET UNITYSDK_OFFSET(0xE56AB10)
#define XLUA_COPYBYVALUE_PACK_36_OFFSET UNITYSDK_OFFSET(0xE56B090)
#define XLUA_COPYBYVALUE_PACK_37_OFFSET UNITYSDK_OFFSET(0xE56B3E0)
#define XLUA_COPYBYVALUE_PACK_38_OFFSET UNITYSDK_OFFSET(0xE56B8A0)
#define XLUA_COPYBYVALUE_PACK_39_OFFSET UNITYSDK_OFFSET(0xE56BE00)
#define XLUA_COPYBYVALUE_PACK_3_OFFSET UNITYSDK_OFFSET(0xE562DD0)
#define XLUA_COPYBYVALUE_PACK_40_OFFSET UNITYSDK_OFFSET(0xE56C9B0)
#define XLUA_COPYBYVALUE_PACK_41_OFFSET UNITYSDK_OFFSET(0xE56D330)
#define XLUA_COPYBYVALUE_PACK_42_OFFSET UNITYSDK_OFFSET(0xE56D6F0)
#define XLUA_COPYBYVALUE_PACK_43_OFFSET UNITYSDK_OFFSET(0xE56DA60)
#define XLUA_COPYBYVALUE_PACK_44_OFFSET UNITYSDK_OFFSET(0xE56DA70)
#define XLUA_COPYBYVALUE_PACK_45_OFFSET UNITYSDK_OFFSET(0xE56E010)
#define XLUA_COPYBYVALUE_PACK_46_OFFSET UNITYSDK_OFFSET(0xE56EB20)
#define XLUA_COPYBYVALUE_PACK_47_OFFSET UNITYSDK_OFFSET(0xE56F110)
#define XLUA_COPYBYVALUE_PACK_48_OFFSET UNITYSDK_OFFSET(0xE56F3C0)
#define XLUA_COPYBYVALUE_PACK_49_OFFSET UNITYSDK_OFFSET(0xE56F830)
#define XLUA_COPYBYVALUE_PACK_4_OFFSET UNITYSDK_OFFSET(0xE563390)
#define XLUA_COPYBYVALUE_PACK_50_OFFSET UNITYSDK_OFFSET(0xE570050)
#define XLUA_COPYBYVALUE_PACK_51_OFFSET UNITYSDK_OFFSET(0xE570A40)
#define XLUA_COPYBYVALUE_PACK_52_OFFSET UNITYSDK_OFFSET(0xE570FA0)
#define XLUA_COPYBYVALUE_PACK_53_OFFSET UNITYSDK_OFFSET(0xE5715A0)
#define XLUA_COPYBYVALUE_PACK_54_OFFSET UNITYSDK_OFFSET(0xE571AB0)
#define XLUA_COPYBYVALUE_PACK_55_OFFSET UNITYSDK_OFFSET(0xE572130)
#define XLUA_COPYBYVALUE_PACK_56_OFFSET UNITYSDK_OFFSET(0xE572610)
#define XLUA_COPYBYVALUE_PACK_57_OFFSET UNITYSDK_OFFSET(0xE5729A0)
#define XLUA_COPYBYVALUE_PACK_58_OFFSET UNITYSDK_OFFSET(0xE572F70)
#define XLUA_COPYBYVALUE_PACK_59_OFFSET UNITYSDK_OFFSET(0xE573430)
#define XLUA_COPYBYVALUE_PACK_5_OFFSET UNITYSDK_OFFSET(0xE563890)
#define XLUA_COPYBYVALUE_PACK_60_OFFSET UNITYSDK_OFFSET(0xE5737D0)
#define XLUA_COPYBYVALUE_PACK_61_OFFSET UNITYSDK_OFFSET(0xE573C30)
#define XLUA_COPYBYVALUE_PACK_62_OFFSET UNITYSDK_OFFSET(0xE574230)
#define XLUA_COPYBYVALUE_PACK_63_OFFSET UNITYSDK_OFFSET(0xE574A50)
#define XLUA_COPYBYVALUE_PACK_64_OFFSET UNITYSDK_OFFSET(0xE575350)
#define XLUA_COPYBYVALUE_PACK_65_OFFSET UNITYSDK_OFFSET(0xE575680)
#define XLUA_COPYBYVALUE_PACK_66_OFFSET UNITYSDK_OFFSET(0xE575A70)
#define XLUA_COPYBYVALUE_PACK_67_OFFSET UNITYSDK_OFFSET(0xE576140)
#define XLUA_COPYBYVALUE_PACK_68_OFFSET UNITYSDK_OFFSET(0xE576AA0)
#define XLUA_COPYBYVALUE_PACK_69_OFFSET UNITYSDK_OFFSET(0xE577130)
#define XLUA_COPYBYVALUE_PACK_6_OFFSET UNITYSDK_OFFSET(0xE563F00)
#define XLUA_COPYBYVALUE_PACK_70_OFFSET UNITYSDK_OFFSET(0xE577680)
#define XLUA_COPYBYVALUE_PACK_71_OFFSET UNITYSDK_OFFSET(0xE577CF0)
#define XLUA_COPYBYVALUE_PACK_72_OFFSET UNITYSDK_OFFSET(0xE5782C0)
#define XLUA_COPYBYVALUE_PACK_73_OFFSET UNITYSDK_OFFSET(0xE578740)
#define XLUA_COPYBYVALUE_PACK_74_OFFSET UNITYSDK_OFFSET(0xE578AF0)
#define XLUA_COPYBYVALUE_PACK_75_OFFSET UNITYSDK_OFFSET(0xE578EA0)
#define XLUA_COPYBYVALUE_PACK_76_OFFSET UNITYSDK_OFFSET(0xE579420)
#define XLUA_COPYBYVALUE_PACK_77_OFFSET UNITYSDK_OFFSET(0xE5798E0)
#define XLUA_COPYBYVALUE_PACK_78_OFFSET UNITYSDK_OFFSET(0xE579C60)
#define XLUA_COPYBYVALUE_PACK_79_OFFSET UNITYSDK_OFFSET(0xE57A1E0)
#define XLUA_COPYBYVALUE_PACK_7_OFFSET UNITYSDK_OFFSET(0xE564500)
#define XLUA_COPYBYVALUE_PACK_80_OFFSET UNITYSDK_OFFSET(0xE57A9B0)
#define XLUA_COPYBYVALUE_PACK_81_OFFSET UNITYSDK_OFFSET(0xE57AEC0)
#define XLUA_COPYBYVALUE_PACK_82_OFFSET UNITYSDK_OFFSET(0xE57B030)
#define XLUA_COPYBYVALUE_PACK_83_OFFSET UNITYSDK_OFFSET(0xE57B150)
#define XLUA_COPYBYVALUE_PACK_84_OFFSET UNITYSDK_OFFSET(0xE57B280)
#define XLUA_COPYBYVALUE_PACK_85_OFFSET UNITYSDK_OFFSET(0xE57B3A0)
#define XLUA_COPYBYVALUE_PACK_86_OFFSET UNITYSDK_OFFSET(0xE565170)
#define XLUA_COPYBYVALUE_PACK_87_OFFSET UNITYSDK_OFFSET(0xE564BA0)
#define XLUA_COPYBYVALUE_PACK_88_OFFSET UNITYSDK_OFFSET(0xE571C40)
#define XLUA_COPYBYVALUE_PACK_89_OFFSET UNITYSDK_OFFSET(0xE565200)
#define XLUA_COPYBYVALUE_PACK_8_OFFSET UNITYSDK_OFFSET(0xE564A90)
#define XLUA_COPYBYVALUE_PACK_90_OFFSET UNITYSDK_OFFSET(0xE570370)
#define XLUA_COPYBYVALUE_PACK_91_OFFSET UNITYSDK_OFFSET(0xE57B4E0)
#define XLUA_COPYBYVALUE_PACK_92_OFFSET UNITYSDK_OFFSET(0xE57B610)
#define XLUA_COPYBYVALUE_PACK_9_OFFSET UNITYSDK_OFFSET(0xE565050)
#define XLUA_COPYBYVALUE_PACK_OFFSET UNITYSDK_OFFSET(0xE561E10)
#define XLUA_COPYBYVALUE_UNPACK_100_OFFSET UNITYSDK_OFFSET(0xE570410)
#define XLUA_COPYBYVALUE_UNPACK_101_OFFSET UNITYSDK_OFFSET(0xE570810)
#define XLUA_COPYBYVALUE_UNPACK_102_OFFSET UNITYSDK_OFFSET(0xE570B50)
#define XLUA_COPYBYVALUE_UNPACK_103_OFFSET UNITYSDK_OFFSET(0xE570C90)
#define XLUA_COPYBYVALUE_UNPACK_104_OFFSET UNITYSDK_OFFSET(0xE5711B0)
#define XLUA_COPYBYVALUE_UNPACK_105_OFFSET UNITYSDK_OFFSET(0xE571430)
#define XLUA_COPYBYVALUE_UNPACK_106_OFFSET UNITYSDK_OFFSET(0xE571630)
#define XLUA_COPYBYVALUE_UNPACK_107_OFFSET UNITYSDK_OFFSET(0xE5716E0)
#define XLUA_COPYBYVALUE_UNPACK_108_OFFSET UNITYSDK_OFFSET(0xE571CD0)
#define XLUA_COPYBYVALUE_UNPACK_109_OFFSET UNITYSDK_OFFSET(0xE571F00)
#define XLUA_COPYBYVALUE_UNPACK_10_OFFSET UNITYSDK_OFFSET(0xE563580)
#define XLUA_COPYBYVALUE_UNPACK_110_OFFSET UNITYSDK_OFFSET(0xE5722D0)
#define XLUA_COPYBYVALUE_UNPACK_111_OFFSET UNITYSDK_OFFSET(0xE5724A0)
#define XLUA_COPYBYVALUE_UNPACK_112_OFFSET UNITYSDK_OFFSET(0xE5726A0)
#define XLUA_COPYBYVALUE_UNPACK_113_OFFSET UNITYSDK_OFFSET(0xE572750)
#define XLUA_COPYBYVALUE_UNPACK_114_OFFSET UNITYSDK_OFFSET(0xE572B40)
#define XLUA_COPYBYVALUE_UNPACK_115_OFFSET UNITYSDK_OFFSET(0xE572D00)
#define XLUA_COPYBYVALUE_UNPACK_116_OFFSET UNITYSDK_OFFSET(0xE573080)
#define XLUA_COPYBYVALUE_UNPACK_117_OFFSET UNITYSDK_OFFSET(0xE5731C0)
#define XLUA_COPYBYVALUE_UNPACK_118_OFFSET UNITYSDK_OFFSET(0xE5734D0)
#define XLUA_COPYBYVALUE_UNPACK_119_OFFSET UNITYSDK_OFFSET(0xE5735A0)
#define XLUA_COPYBYVALUE_UNPACK_11_OFFSET UNITYSDK_OFFSET(0xE563A00)
#define XLUA_COPYBYVALUE_UNPACK_120_OFFSET UNITYSDK_OFFSET(0xE5738E0)
#define XLUA_COPYBYVALUE_UNPACK_121_OFFSET UNITYSDK_OFFSET(0xE573A00)
#define XLUA_COPYBYVALUE_UNPACK_122_OFFSET UNITYSDK_OFFSET(0xE573CC0)
#define XLUA_COPYBYVALUE_UNPACK_123_OFFSET UNITYSDK_OFFSET(0xE573D70)
#define XLUA_COPYBYVALUE_UNPACK_124_OFFSET UNITYSDK_OFFSET(0xE574240)
#define XLUA_COPYBYVALUE_UNPACK_125_OFFSET UNITYSDK_OFFSET(0xE574260)
#define XLUA_COPYBYVALUE_UNPACK_126_OFFSET UNITYSDK_OFFSET(0xE574A60)
#define XLUA_COPYBYVALUE_UNPACK_127_OFFSET UNITYSDK_OFFSET(0xE574A90)
#define XLUA_COPYBYVALUE_UNPACK_128_OFFSET UNITYSDK_OFFSET(0xE575360)
#define XLUA_COPYBYVALUE_UNPACK_129_OFFSET UNITYSDK_OFFSET(0xE575380)
#define XLUA_COPYBYVALUE_UNPACK_12_OFFSET UNITYSDK_OFFSET(0xE563C50)
#define XLUA_COPYBYVALUE_UNPACK_130_OFFSET UNITYSDK_OFFSET(0xE575750)
#define XLUA_COPYBYVALUE_UNPACK_131_OFFSET UNITYSDK_OFFSET(0xE575840)
#define XLUA_COPYBYVALUE_UNPACK_132_OFFSET UNITYSDK_OFFSET(0xE575B80)
#define XLUA_COPYBYVALUE_UNPACK_133_OFFSET UNITYSDK_OFFSET(0xE575CA0)
#define XLUA_COPYBYVALUE_UNPACK_134_OFFSET UNITYSDK_OFFSET(0xE5763E0)
#define XLUA_COPYBYVALUE_UNPACK_135_OFFSET UNITYSDK_OFFSET(0xE5766D0)
#define XLUA_COPYBYVALUE_UNPACK_136_OFFSET UNITYSDK_OFFSET(0xE576CC0)
#define XLUA_COPYBYVALUE_UNPACK_137_OFFSET UNITYSDK_OFFSET(0xE576F00)
#define XLUA_COPYBYVALUE_UNPACK_138_OFFSET UNITYSDK_OFFSET(0xE577240)
#define XLUA_COPYBYVALUE_UNPACK_139_OFFSET UNITYSDK_OFFSET(0xE577380)
#define XLUA_COPYBYVALUE_UNPACK_13_OFFSET UNITYSDK_OFFSET(0xE564070)
#define XLUA_COPYBYVALUE_UNPACK_140_OFFSET UNITYSDK_OFFSET(0xE577820)
#define XLUA_COPYBYVALUE_UNPACK_141_OFFSET UNITYSDK_OFFSET(0xE5779F0)
#define XLUA_COPYBYVALUE_UNPACK_142_OFFSET UNITYSDK_OFFSET(0xE577E90)
#define XLUA_COPYBYVALUE_UNPACK_143_OFFSET UNITYSDK_OFFSET(0xE578050)
#define XLUA_COPYBYVALUE_UNPACK_144_OFFSET UNITYSDK_OFFSET(0xE5783F0)
#define XLUA_COPYBYVALUE_UNPACK_145_OFFSET UNITYSDK_OFFSET(0xE578510)
#define XLUA_COPYBYVALUE_UNPACK_146_OFFSET UNITYSDK_OFFSET(0xE578850)
#define XLUA_COPYBYVALUE_UNPACK_147_OFFSET UNITYSDK_OFFSET(0xE578980)
#define XLUA_COPYBYVALUE_UNPACK_148_OFFSET UNITYSDK_OFFSET(0xE578B80)
#define XLUA_COPYBYVALUE_UNPACK_149_OFFSET UNITYSDK_OFFSET(0xE578C30)
#define XLUA_COPYBYVALUE_UNPACK_14_OFFSET UNITYSDK_OFFSET(0xE564230)
#define XLUA_COPYBYVALUE_UNPACK_150_OFFSET UNITYSDK_OFFSET(0xE578FB0)
#define XLUA_COPYBYVALUE_UNPACK_151_OFFSET UNITYSDK_OFFSET(0xE5790F0)
#define XLUA_COPYBYVALUE_UNPACK_152_OFFSET UNITYSDK_OFFSET(0xE5795C0)
#define XLUA_COPYBYVALUE_UNPACK_153_OFFSET UNITYSDK_OFFSET(0xE579770)
#define XLUA_COPYBYVALUE_UNPACK_154_OFFSET UNITYSDK_OFFSET(0xE579970)
#define XLUA_COPYBYVALUE_UNPACK_155_OFFSET UNITYSDK_OFFSET(0xE579A10)
#define XLUA_COPYBYVALUE_UNPACK_156_OFFSET UNITYSDK_OFFSET(0xE579D80)
#define XLUA_COPYBYVALUE_UNPACK_157_OFFSET UNITYSDK_OFFSET(0xE579EA0)
#define XLUA_COPYBYVALUE_UNPACK_158_OFFSET UNITYSDK_OFFSET(0xE57A440)
#define XLUA_COPYBYVALUE_UNPACK_159_OFFSET UNITYSDK_OFFSET(0xE57A780)
#define XLUA_COPYBYVALUE_UNPACK_15_OFFSET UNITYSDK_OFFSET(0xE564640)
#define XLUA_COPYBYVALUE_UNPACK_160_OFFSET UNITYSDK_OFFSET(0xE57AB10)
#define XLUA_COPYBYVALUE_UNPACK_161_OFFSET UNITYSDK_OFFSET(0xE57AC90)
#define XLUA_COPYBYVALUE_UNPACK_162_OFFSET UNITYSDK_OFFSET(0xE57AF60)
#define XLUA_COPYBYVALUE_UNPACK_163_OFFSET UNITYSDK_OFFSET(0xE57B0C0)
#define XLUA_COPYBYVALUE_UNPACK_164_OFFSET UNITYSDK_OFFSET(0xE57B1E0)
#define XLUA_COPYBYVALUE_UNPACK_165_OFFSET UNITYSDK_OFFSET(0xE57B310)
#define XLUA_COPYBYVALUE_UNPACK_166_OFFSET UNITYSDK_OFFSET(0xE57B430)
#define XLUA_COPYBYVALUE_UNPACK_167_OFFSET UNITYSDK_OFFSET(0xE5653C0)
#define XLUA_COPYBYVALUE_UNPACK_168_OFFSET UNITYSDK_OFFSET(0xE564D70)
#define XLUA_COPYBYVALUE_UNPACK_169_OFFSET UNITYSDK_OFFSET(0xE571E70)
#define XLUA_COPYBYVALUE_UNPACK_16_OFFSET UNITYSDK_OFFSET(0xE564820)
#define XLUA_COPYBYVALUE_UNPACK_170_OFFSET UNITYSDK_OFFSET(0xE565450)
#define XLUA_COPYBYVALUE_UNPACK_171_OFFSET UNITYSDK_OFFSET(0xE570780)
#define XLUA_COPYBYVALUE_UNPACK_172_OFFSET UNITYSDK_OFFSET(0xE57B580)
#define XLUA_COPYBYVALUE_UNPACK_173_OFFSET UNITYSDK_OFFSET(0xE57B6A0)
#define XLUA_COPYBYVALUE_UNPACK_17_OFFSET UNITYSDK_OFFSET(0xE564C30)
#define XLUA_COPYBYVALUE_UNPACK_18_OFFSET UNITYSDK_OFFSET(0xE564E20)
#define XLUA_COPYBYVALUE_UNPACK_19_OFFSET UNITYSDK_OFFSET(0xE565290)
#define XLUA_COPYBYVALUE_UNPACK_1_OFFSET UNITYSDK_OFFSET(0xE561EB0)
#define XLUA_COPYBYVALUE_UNPACK_20_OFFSET UNITYSDK_OFFSET(0xE565500)
#define XLUA_COPYBYVALUE_UNPACK_21_OFFSET UNITYSDK_OFFSET(0xE565700)
#define XLUA_COPYBYVALUE_UNPACK_22_OFFSET UNITYSDK_OFFSET(0xE5657B0)
#define XLUA_COPYBYVALUE_UNPACK_23_OFFSET UNITYSDK_OFFSET(0xE565A30)
#define XLUA_COPYBYVALUE_UNPACK_24_OFFSET UNITYSDK_OFFSET(0xE565B60)
#define XLUA_COPYBYVALUE_UNPACK_25_OFFSET UNITYSDK_OFFSET(0xE565D60)
#define XLUA_COPYBYVALUE_UNPACK_26_OFFSET UNITYSDK_OFFSET(0xE565E10)
#define XLUA_COPYBYVALUE_UNPACK_27_OFFSET UNITYSDK_OFFSET(0xE566010)
#define XLUA_COPYBYVALUE_UNPACK_28_OFFSET UNITYSDK_OFFSET(0xE5660C0)
#define XLUA_COPYBYVALUE_UNPACK_29_OFFSET UNITYSDK_OFFSET(0xE566400)
#define XLUA_COPYBYVALUE_UNPACK_2_OFFSET UNITYSDK_OFFSET(0xE561F80)
#define XLUA_COPYBYVALUE_UNPACK_30_OFFSET UNITYSDK_OFFSET(0xE566540)
#define XLUA_COPYBYVALUE_UNPACK_31_OFFSET UNITYSDK_OFFSET(0xE566740)
#define XLUA_COPYBYVALUE_UNPACK_32_OFFSET UNITYSDK_OFFSET(0xE5667F0)
#define XLUA_COPYBYVALUE_UNPACK_33_OFFSET UNITYSDK_OFFSET(0xE566B30)
#define XLUA_COPYBYVALUE_UNPACK_34_OFFSET UNITYSDK_OFFSET(0xE566C70)
#define XLUA_COPYBYVALUE_UNPACK_35_OFFSET UNITYSDK_OFFSET(0xE566E70)
#define XLUA_COPYBYVALUE_UNPACK_36_OFFSET UNITYSDK_OFFSET(0xE566F20)
#define XLUA_COPYBYVALUE_UNPACK_37_OFFSET UNITYSDK_OFFSET(0xE567260)
#define XLUA_COPYBYVALUE_UNPACK_38_OFFSET UNITYSDK_OFFSET(0xE5673A0)
#define XLUA_COPYBYVALUE_UNPACK_39_OFFSET UNITYSDK_OFFSET(0xE5675A0)
#define XLUA_COPYBYVALUE_UNPACK_3_OFFSET UNITYSDK_OFFSET(0xE562350)
#define XLUA_COPYBYVALUE_UNPACK_40_OFFSET UNITYSDK_OFFSET(0xE567650)
#define XLUA_COPYBYVALUE_UNPACK_41_OFFSET UNITYSDK_OFFSET(0xE567850)
#define XLUA_COPYBYVALUE_UNPACK_42_OFFSET UNITYSDK_OFFSET(0xE567900)
#define XLUA_COPYBYVALUE_UNPACK_43_OFFSET UNITYSDK_OFFSET(0xE567B00)
#define XLUA_COPYBYVALUE_UNPACK_44_OFFSET UNITYSDK_OFFSET(0xE567BB0)
#define XLUA_COPYBYVALUE_UNPACK_45_OFFSET UNITYSDK_OFFSET(0xE567EF0)
#define XLUA_COPYBYVALUE_UNPACK_46_OFFSET UNITYSDK_OFFSET(0xE568030)
#define XLUA_COPYBYVALUE_UNPACK_47_OFFSET UNITYSDK_OFFSET(0xE568230)
#define XLUA_COPYBYVALUE_UNPACK_48_OFFSET UNITYSDK_OFFSET(0xE5682E0)
#define XLUA_COPYBYVALUE_UNPACK_49_OFFSET UNITYSDK_OFFSET(0xE5686B0)
#define XLUA_COPYBYVALUE_UNPACK_4_OFFSET UNITYSDK_OFFSET(0xE562440)
#define XLUA_COPYBYVALUE_UNPACK_50_OFFSET UNITYSDK_OFFSET(0xE5687A0)
#define XLUA_COPYBYVALUE_UNPACK_51_OFFSET UNITYSDK_OFFSET(0xE5689A0)
#define XLUA_COPYBYVALUE_UNPACK_52_OFFSET UNITYSDK_OFFSET(0xE568A50)
#define XLUA_COPYBYVALUE_UNPACK_53_OFFSET UNITYSDK_OFFSET(0xE568C50)
#define XLUA_COPYBYVALUE_UNPACK_54_OFFSET UNITYSDK_OFFSET(0xE568D00)
#define XLUA_COPYBYVALUE_UNPACK_55_OFFSET UNITYSDK_OFFSET(0xE569040)
#define XLUA_COPYBYVALUE_UNPACK_56_OFFSET UNITYSDK_OFFSET(0xE569180)
#define XLUA_COPYBYVALUE_UNPACK_57_OFFSET UNITYSDK_OFFSET(0xE5694C0)
#define XLUA_COPYBYVALUE_UNPACK_58_OFFSET UNITYSDK_OFFSET(0xE569600)
#define XLUA_COPYBYVALUE_UNPACK_59_OFFSET UNITYSDK_OFFSET(0xE569940)
#define XLUA_COPYBYVALUE_UNPACK_5_OFFSET UNITYSDK_OFFSET(0xE562900)
#define XLUA_COPYBYVALUE_UNPACK_60_OFFSET UNITYSDK_OFFSET(0xE569A60)
#define XLUA_COPYBYVALUE_UNPACK_61_OFFSET UNITYSDK_OFFSET(0xE569DA0)
#define XLUA_COPYBYVALUE_UNPACK_62_OFFSET UNITYSDK_OFFSET(0xE569EE0)
#define XLUA_COPYBYVALUE_UNPACK_63_OFFSET UNITYSDK_OFFSET(0xE56A0E0)
#define XLUA_COPYBYVALUE_UNPACK_64_OFFSET UNITYSDK_OFFSET(0xE56A190)
#define XLUA_COPYBYVALUE_UNPACK_65_OFFSET UNITYSDK_OFFSET(0xE56A390)
#define XLUA_COPYBYVALUE_UNPACK_66_OFFSET UNITYSDK_OFFSET(0xE56A440)
#define XLUA_COPYBYVALUE_UNPACK_67_OFFSET UNITYSDK_OFFSET(0xE56A640)
#define XLUA_COPYBYVALUE_UNPACK_68_OFFSET UNITYSDK_OFFSET(0xE56A6F0)
#define XLUA_COPYBYVALUE_UNPACK_69_OFFSET UNITYSDK_OFFSET(0xE56A8F0)
#define XLUA_COPYBYVALUE_UNPACK_6_OFFSET UNITYSDK_OFFSET(0xE562A00)
#define XLUA_COPYBYVALUE_UNPACK_70_OFFSET UNITYSDK_OFFSET(0xE56A9A0)
#define XLUA_COPYBYVALUE_UNPACK_71_OFFSET UNITYSDK_OFFSET(0xE56ABA0)
#define XLUA_COPYBYVALUE_UNPACK_72_OFFSET UNITYSDK_OFFSET(0xE56AC50)
#define XLUA_COPYBYVALUE_UNPACK_73_OFFSET UNITYSDK_OFFSET(0xE56B180)
#define XLUA_COPYBYVALUE_UNPACK_74_OFFSET UNITYSDK_OFFSET(0xE56B280)
#define XLUA_COPYBYVALUE_UNPACK_75_OFFSET UNITYSDK_OFFSET(0xE56B500)
#define XLUA_COPYBYVALUE_UNPACK_76_OFFSET UNITYSDK_OFFSET(0xE56B630)
#define XLUA_COPYBYVALUE_UNPACK_77_OFFSET UNITYSDK_OFFSET(0xE56B9B0)
#define XLUA_COPYBYVALUE_UNPACK_78_OFFSET UNITYSDK_OFFSET(0xE56BAF0)
#define XLUA_COPYBYVALUE_UNPACK_79_OFFSET UNITYSDK_OFFSET(0xE56C010)
#define XLUA_COPYBYVALUE_UNPACK_7_OFFSET UNITYSDK_OFFSET(0xE562EC0)
#define XLUA_COPYBYVALUE_UNPACK_80_OFFSET UNITYSDK_OFFSET(0xE56C290)
#define XLUA_COPYBYVALUE_UNPACK_81_OFFSET UNITYSDK_OFFSET(0xE56CD00)
#define XLUA_COPYBYVALUE_UNPACK_82_OFFSET UNITYSDK_OFFSET(0xE56D0C0)
#define XLUA_COPYBYVALUE_UNPACK_83_OFFSET UNITYSDK_OFFSET(0xE56D440)
#define XLUA_COPYBYVALUE_UNPACK_84_OFFSET UNITYSDK_OFFSET(0xE56D580)
#define XLUA_COPYBYVALUE_UNPACK_85_OFFSET UNITYSDK_OFFSET(0xE56D780)
#define XLUA_COPYBYVALUE_UNPACK_86_OFFSET UNITYSDK_OFFSET(0xE56D830)
#define XLUA_COPYBYVALUE_UNPACK_87_OFFSET UNITYSDK_OFFSET(0xE56DA80)
#define XLUA_COPYBYVALUE_UNPACK_88_OFFSET UNITYSDK_OFFSET(0xE56DA90)
#define XLUA_COPYBYVALUE_UNPACK_89_OFFSET UNITYSDK_OFFSET(0xE56DAA0)
#define XLUA_COPYBYVALUE_UNPACK_8_OFFSET UNITYSDK_OFFSET(0xE562FC0)
#define XLUA_COPYBYVALUE_UNPACK_90_OFFSET UNITYSDK_OFFSET(0xE56E360)
#define XLUA_COPYBYVALUE_UNPACK_91_OFFSET UNITYSDK_OFFSET(0xE56E750)
#define XLUA_COPYBYVALUE_UNPACK_92_OFFSET UNITYSDK_OFFSET(0xE56ED40)
#define XLUA_COPYBYVALUE_UNPACK_93_OFFSET UNITYSDK_OFFSET(0xE56EFA0)
#define XLUA_COPYBYVALUE_UNPACK_94_OFFSET UNITYSDK_OFFSET(0xE56F1A0)
#define XLUA_COPYBYVALUE_UNPACK_95_OFFSET UNITYSDK_OFFSET(0xE56F250)
#define XLUA_COPYBYVALUE_UNPACK_96_OFFSET UNITYSDK_OFFSET(0xE56F450)
#define XLUA_COPYBYVALUE_UNPACK_97_OFFSET UNITYSDK_OFFSET(0xE56F500)
#define XLUA_COPYBYVALUE_UNPACK_98_OFFSET UNITYSDK_OFFSET(0xE56F9D0)
#define XLUA_COPYBYVALUE_UNPACK_99_OFFSET UNITYSDK_OFFSET(0xE56FBA0)
#define XLUA_COPYBYVALUE_UNPACK_9_OFFSET UNITYSDK_OFFSET(0xE563480)
#define XLUA_COPYBYVALUE_UNPACK_OFFSET UNITYSDK_OFFSET(0xE561BE0)

namespace XLua
{
	inline static constexpr unsigned int CopyByValue_TypeDefinitionIndex = 46889;

	class CopyByValue : public ::System::Object
	{
	public:
		static ::System::Void UnPack(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::UnityEngine::Vector2& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack(::System::IntPtr a1, ::System::Int32 a2, ::UnityEngine::Vector2 a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_1(::System::IntPtr a1, ::System::Int32 a2, ::UnityEngine::Vector2& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_2(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::UnityEngine::Vector3& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_2_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_1(::System::IntPtr a1, ::System::Int32 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_3(::System::IntPtr a1, ::System::Int32 a2, ::UnityEngine::Vector3& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_3_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_4(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::UnityEngine::Vector4& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_4_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_2(::System::IntPtr a1, ::System::Int32 a2, ::UnityEngine::Vector4 a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_2_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_5(::System::IntPtr a1, ::System::Int32 a2, ::UnityEngine::Vector4& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_5_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_6(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::UnityEngine::Color& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_6_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_3(::System::IntPtr a1, ::System::Int32 a2, ::UnityEngine::Color a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_3_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_7(::System::IntPtr a1, ::System::Int32 a2, ::UnityEngine::Color& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_7_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_8(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::UnityEngine::Quaternion& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_8_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_4(::System::IntPtr a1, ::System::Int32 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_4_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_9(::System::IntPtr a1, ::System::Int32 a2, ::UnityEngine::Quaternion& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_9_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_10(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::UnityEngine::Ray& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::UnityEngine::Ray&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_10_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_5(::System::IntPtr a1, ::System::Int32 a2, ::UnityEngine::Ray a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Ray))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_5_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_11(::System::IntPtr a1, ::System::Int32 a2, ::UnityEngine::Ray& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Ray&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_11_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_12(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::UnityEngine::Bounds& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_12_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_6(::System::IntPtr a1, ::System::Int32 a2, ::UnityEngine::Bounds a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_6_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_13(::System::IntPtr a1, ::System::Int32 a2, ::UnityEngine::Bounds& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_13_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_14(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::UnityEngine::Ray2D& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::UnityEngine::Ray2D&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_14_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_7(::System::IntPtr a1, ::System::Int32 a2, ::UnityEngine::Ray2D a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Ray2D))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_7_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_15(::System::IntPtr a1, ::System::Int32 a2, ::UnityEngine::Ray2D& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Ray2D&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_15_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_16(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::Client::ActivityMarble::MarbleSealTalkConfig& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::ActivityMarble::MarbleSealTalkConfig&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_16_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_8(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::ActivityMarble::MarbleSealTalkConfig a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::ActivityMarble::MarbleSealTalkConfig))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_8_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_17(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::ActivityMarble::MarbleSealTalkConfig& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::ActivityMarble::MarbleSealTalkConfig&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_17_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_18(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::Client::TextID& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::TextID&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_18_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_9(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::TextID a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_9_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_19(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::TextID& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::TextID&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_19_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_20(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::RewardExcelTable_IndexKey& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::RewardExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_20_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_10(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::RewardExcelTable_IndexKey a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::RewardExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_10_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_21(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::RewardExcelTable_IndexKey& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::RewardExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_21_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_22(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::TextmapExcelTable_IndexKey& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::TextmapExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_22_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_11(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::TextmapExcelTable_IndexKey a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::TextmapExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_11_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_23(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::TextmapExcelTable_IndexKey& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::TextmapExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_23_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_24(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::ItemExcelTable_IndexKey& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::ItemExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_24_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_12(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::ItemExcelTable_IndexKey a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::ItemExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_12_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_25(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::ItemExcelTable_IndexKey& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::ItemExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_25_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_26(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::MainMissionExcelTable_IndexKey& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::MainMissionExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_26_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_13(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::MainMissionExcelTable_IndexKey a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::MainMissionExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_13_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_27(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::MainMissionExcelTable_IndexKey& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::MainMissionExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_27_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_28(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::AvatarPromotionExcelTable_IndexKey& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::AvatarPromotionExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_28_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_14(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::AvatarPromotionExcelTable_IndexKey a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::AvatarPromotionExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_14_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_29(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::AvatarPromotionExcelTable_IndexKey& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::AvatarPromotionExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_29_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_30(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::StageExcelTable_IndexKey& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::StageExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_30_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_15(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::StageExcelTable_IndexKey a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::StageExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_15_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_31(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::StageExcelTable_IndexKey& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::StageExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_31_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_32(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::AvatarSkillExcelTable_IndexKey& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::AvatarSkillExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_32_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_16(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::AvatarSkillExcelTable_IndexKey a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::AvatarSkillExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_16_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_33(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::AvatarSkillExcelTable_IndexKey& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::AvatarSkillExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_33_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_34(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::SubMissionExcelTable_IndexKey& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::SubMissionExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_34_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_17(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::SubMissionExcelTable_IndexKey a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::SubMissionExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_17_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_35(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::SubMissionExcelTable_IndexKey& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::SubMissionExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_35_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_36(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::AvatarSkillTreeExcelTable_IndexKey& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::AvatarSkillTreeExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_36_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_18(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::AvatarSkillTreeExcelTable_IndexKey a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::AvatarSkillTreeExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_18_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_37(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::AvatarSkillTreeExcelTable_IndexKey& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::AvatarSkillTreeExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_37_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_38(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::StatusExcelTable_IndexKey& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::StatusExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_38_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_19(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::StatusExcelTable_IndexKey a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::StatusExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_19_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_39(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::StatusExcelTable_IndexKey& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::StatusExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_39_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_40(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::MonsterExcelTable_IndexKey& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::MonsterExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_40_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_20(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::MonsterExcelTable_IndexKey a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::MonsterExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_20_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_41(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::MonsterExcelTable_IndexKey& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::MonsterExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_41_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_42(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::MonsterSkillExcelTable_IndexKey& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::MonsterSkillExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_42_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_21(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::MonsterSkillExcelTable_IndexKey a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::MonsterSkillExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_21_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_43(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::MonsterSkillExcelTable_IndexKey& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::MonsterSkillExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_43_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_44(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::MazeBuffExcelTable_IndexKey& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::MazeBuffExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_44_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_22(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::MazeBuffExcelTable_IndexKey a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::MazeBuffExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_22_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_45(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::MazeBuffExcelTable_IndexKey& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::MazeBuffExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_45_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_46(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::PropExcelTable_IndexKey& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::PropExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_46_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_23(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::PropExcelTable_IndexKey a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::PropExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_23_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_47(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::PropExcelTable_IndexKey& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::PropExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_47_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_48(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::MVector3& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::MVector3&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_48_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_24(::System::IntPtr a1, ::System::Int32 a2, ::RPG::MVector3 a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::MVector3))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_24_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_49(::System::IntPtr a1, ::System::Int32 a2, ::RPG::MVector3& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::MVector3&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_49_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_50(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::VoiceConfigExcelTable_IndexKey& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::VoiceConfigExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_50_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_25(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::VoiceConfigExcelTable_IndexKey a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::VoiceConfigExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_25_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_51(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::VoiceConfigExcelTable_IndexKey& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::VoiceConfigExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_51_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_52(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::DialogueGroupExcelTable_IndexKey& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::DialogueGroupExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_52_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_26(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::DialogueGroupExcelTable_IndexKey a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::DialogueGroupExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_26_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_53(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::DialogueGroupExcelTable_IndexKey& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::DialogueGroupExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_53_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_54(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::PlaneEventExcelTable_IndexKey& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::PlaneEventExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_54_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_27(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::PlaneEventExcelTable_IndexKey a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::PlaneEventExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_27_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_55(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::PlaneEventExcelTable_IndexKey& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::PlaneEventExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_55_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_56(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::SpecialAvatarExcelTable_IndexKey& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::SpecialAvatarExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_56_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_28(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::SpecialAvatarExcelTable_IndexKey a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::SpecialAvatarExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_28_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_57(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::SpecialAvatarExcelTable_IndexKey& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::SpecialAvatarExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_57_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_58(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::UnityEngine::UI::GridLayoutGroup_RowColumnPair& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::UnityEngine::UI::GridLayoutGroup_RowColumnPair&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_58_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_29(::System::IntPtr a1, ::System::Int32 a2, ::UnityEngine::UI::GridLayoutGroup_RowColumnPair a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::UI::GridLayoutGroup_RowColumnPair))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_29_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_59(::System::IntPtr a1, ::System::Int32 a2, ::UnityEngine::UI::GridLayoutGroup_RowColumnPair& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::UI::GridLayoutGroup_RowColumnPair&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_59_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_60(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::RaidConfigExcelTable_IndexKey& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::RaidConfigExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_60_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_30(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::RaidConfigExcelTable_IndexKey a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::RaidConfigExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_30_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_61(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::RaidConfigExcelTable_IndexKey& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::RaidConfigExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_61_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_62(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::TalkSentenceConfigExcelTable_IndexKey& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::TalkSentenceConfigExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_62_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_31(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::TalkSentenceConfigExcelTable_IndexKey a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::TalkSentenceConfigExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_31_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_63(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::TalkSentenceConfigExcelTable_IndexKey& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::TalkSentenceConfigExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_63_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_64(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::BattleEventExcelTable_IndexKey& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::BattleEventExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_64_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_32(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::BattleEventExcelTable_IndexKey a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::BattleEventExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_32_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_65(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::BattleEventExcelTable_IndexKey& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::BattleEventExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_65_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_66(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::MessageItemExcelTable_IndexKey& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::MessageItemExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_66_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_33(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::MessageItemExcelTable_IndexKey a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::MessageItemExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_33_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_67(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::MessageItemExcelTable_IndexKey& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::MessageItemExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_67_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_68(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::PerformanceEExcelTable_IndexKey& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::PerformanceEExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_68_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_34(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::PerformanceEExcelTable_IndexKey a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::PerformanceEExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_34_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_69(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::PerformanceEExcelTable_IndexKey& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::PerformanceEExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_69_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_70(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::SpecialNPCDataExcelTable_IndexKey& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::SpecialNPCDataExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_70_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_35(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::SpecialNPCDataExcelTable_IndexKey a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::SpecialNPCDataExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_35_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_71(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::SpecialNPCDataExcelTable_IndexKey& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::SpecialNPCDataExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_71_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_72(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::UnityEngine::Rect& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_72_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_36(::System::IntPtr a1, ::System::Int32 a2, ::UnityEngine::Rect a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_36_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_73(::System::IntPtr a1, ::System::Int32 a2, ::UnityEngine::Rect& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_73_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_74(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::RogueTalkNameColorExcelTable_IndexKey& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::RogueTalkNameColorExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_74_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_37(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::RogueTalkNameColorExcelTable_IndexKey a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::RogueTalkNameColorExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_37_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_75(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::RogueTalkNameColorExcelTable_IndexKey& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::RogueTalkNameColorExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_75_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_76(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::Client::MultipleDropTimesData& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::MultipleDropTimesData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_76_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_38(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::MultipleDropTimesData a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::MultipleDropTimesData))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_38_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_77(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::MultipleDropTimesData& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::MultipleDropTimesData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_77_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_78(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::Client::UIQuad_VertexAttribute& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::UIQuad_VertexAttribute&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_78_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_39(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::UIQuad_VertexAttribute a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::UIQuad_VertexAttribute))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_39_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_79(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::UIQuad_VertexAttribute& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::UIQuad_VertexAttribute&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_79_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_80(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::Client::AlleyPackStatistics& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::AlleyPackStatistics&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_80_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_40(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::AlleyPackStatistics a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::AlleyPackStatistics))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_40_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_81(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::AlleyPackStatistics& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::AlleyPackStatistics&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_81_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_82(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::Client::ChessRogueBoardCellEnterData& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::ChessRogueBoardCellEnterData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_82_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_41(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::ChessRogueBoardCellEnterData a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::ChessRogueBoardCellEnterData))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_41_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_83(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::ChessRogueBoardCellEnterData& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::ChessRogueBoardCellEnterData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_83_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_84(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::GuideChallengeTabExcelTable_IndexKey& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::GuideChallengeTabExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_84_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_42(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::GuideChallengeTabExcelTable_IndexKey a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::GuideChallengeTabExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_42_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_85(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::GuideChallengeTabExcelTable_IndexKey& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::GuideChallengeTabExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_85_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_86(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::LevelDataComponent_BattleScoringData& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::LevelDataComponent_BattleScoringData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_86_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_43(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::LevelDataComponent_BattleScoringData a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::LevelDataComponent_BattleScoringData))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_43_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_87(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::LevelDataComponent_BattleScoringData& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::LevelDataComponent_BattleScoringData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_87_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean Pack_44(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_44_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_88(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::FixPoint& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_88_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_89(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::Client::UILineRenderer_Curve& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::UILineRenderer_Curve&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_89_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_45(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::UILineRenderer_Curve a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::UILineRenderer_Curve))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_45_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_90(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::UILineRenderer_Curve& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::UILineRenderer_Curve&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_90_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_91(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::Client::ScheduleData_ScheduleDataUniqueKey& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::ScheduleData_ScheduleDataUniqueKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_91_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_46(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::ScheduleData_ScheduleDataUniqueKey a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::ScheduleData_ScheduleDataUniqueKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_46_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_92(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::ScheduleData_ScheduleDataUniqueKey& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::ScheduleData_ScheduleDataUniqueKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_92_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_93(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::Client::MissionModule_PlayMessage& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::MissionModule_PlayMessage&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_93_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_47(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::MissionModule_PlayMessage a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::MissionModule_PlayMessage))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_47_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_94(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::MissionModule_PlayMessage& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::MissionModule_PlayMessage&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_94_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_95(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::GuideRogueTabExcelTable_IndexKey& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::GuideRogueTabExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_95_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_48(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::GuideRogueTabExcelTable_IndexKey a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::GuideRogueTabExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_48_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_96(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::GuideRogueTabExcelTable_IndexKey& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::GuideRogueTabExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_96_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_97(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::Conflict_NormalGroupNPCIndexKey& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::Conflict_NormalGroupNPCIndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_97_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_49(::System::IntPtr a1, ::System::Int32 a2, ::Conflict_NormalGroupNPCIndexKey a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::Conflict_NormalGroupNPCIndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_49_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_98(::System::IntPtr a1, ::System::Int32 a2, ::Conflict_NormalGroupNPCIndexKey& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::Conflict_NormalGroupNPCIndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_98_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_99(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::Client::QteCatchGhostRewindInstance_PathPoint& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::QteCatchGhostRewindInstance_PathPoint&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_99_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_50(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::QteCatchGhostRewindInstance_PathPoint a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::QteCatchGhostRewindInstance_PathPoint))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_50_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_100(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::QteCatchGhostRewindInstance_PathPoint& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::QteCatchGhostRewindInstance_PathPoint&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_100_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_101(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::AvatarServantSkillExcelTable_IndexKey& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::AvatarServantSkillExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_101_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_51(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::AvatarServantSkillExcelTable_IndexKey a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::AvatarServantSkillExcelTable_IndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_51_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_102(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::AvatarServantSkillExcelTable_IndexKey& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::AvatarServantSkillExcelTable_IndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_102_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_103(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::Client::UIPolygon_VertexAttribute& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::UIPolygon_VertexAttribute&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_103_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_52(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::UIPolygon_VertexAttribute a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::UIPolygon_VertexAttribute))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_52_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_104(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::UIPolygon_VertexAttribute& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::UIPolygon_VertexAttribute&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_104_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_105(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::Client::MissionModule_ResultValue& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::MissionModule_ResultValue&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_105_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_53(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::MissionModule_ResultValue a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::MissionModule_ResultValue))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_53_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_106(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::MissionModule_ResultValue& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::MissionModule_ResultValue&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_106_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_107(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::FixPoint_FixPointParsePartData& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::FixPoint_FixPointParsePartData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_107_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_54(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::FixPoint_FixPointParsePartData a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::FixPoint_FixPointParsePartData))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_54_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_108(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::FixPoint_FixPointParsePartData& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::FixPoint_FixPointParsePartData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_108_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_109(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::Client::TrainPartyBuildUtils_PhotoWorldData& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::TrainPartyBuildUtils_PhotoWorldData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_109_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_55(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::TrainPartyBuildUtils_PhotoWorldData a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::TrainPartyBuildUtils_PhotoWorldData))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_55_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_110(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::TrainPartyBuildUtils_PhotoWorldData& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::TrainPartyBuildUtils_PhotoWorldData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_110_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_111(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::Client::RogueMiracleIdentifier& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::RogueMiracleIdentifier&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_111_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_56(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::RogueMiracleIdentifier a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::RogueMiracleIdentifier))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_56_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_112(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::RogueMiracleIdentifier& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::RogueMiracleIdentifier&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_112_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_113(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::Client::TrainPartyBuildUtils_PhotoRarityData& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::TrainPartyBuildUtils_PhotoRarityData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_113_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_57(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::TrainPartyBuildUtils_PhotoRarityData a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::TrainPartyBuildUtils_PhotoRarityData))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_57_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_114(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::TrainPartyBuildUtils_PhotoRarityData& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::TrainPartyBuildUtils_PhotoRarityData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_114_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_115(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo_SimpleSlotData& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo_SimpleSlotData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_115_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_58(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo_SimpleSlotData a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo_SimpleSlotData))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_58_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_116(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo_SimpleSlotData& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo_SimpleSlotData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_116_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_117(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::UnityEngine::UI::TouchFilter_FilterParam& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::UnityEngine::UI::TouchFilter_FilterParam&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_117_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_59(::System::IntPtr a1, ::System::Int32 a2, ::UnityEngine::UI::TouchFilter_FilterParam a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::UI::TouchFilter_FilterParam))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_59_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_118(::System::IntPtr a1, ::System::Int32 a2, ::UnityEngine::UI::TouchFilter_FilterParam& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::UI::TouchFilter_FilterParam&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_118_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_119(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::SuperScrollView::RowColumnPair& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::SuperScrollView::RowColumnPair&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_119_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_60(::System::IntPtr a1, ::System::Int32 a2, ::SuperScrollView::RowColumnPair a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::SuperScrollView::RowColumnPair))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_60_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_120(::System::IntPtr a1, ::System::Int32 a2, ::SuperScrollView::RowColumnPair& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::SuperScrollView::RowColumnPair&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_120_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_121(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::AbilityDynamicFloatInjection& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::AbilityDynamicFloatInjection&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_121_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_61(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::AbilityDynamicFloatInjection a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::AbilityDynamicFloatInjection))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_61_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_122(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::AbilityDynamicFloatInjection& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::AbilityDynamicFloatInjection&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_122_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_123(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::AbilityExtraProperty& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::AbilityExtraProperty&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_123_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_62(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::AbilityExtraProperty a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::AbilityExtraProperty))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_62_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_124(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::AbilityExtraProperty& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::AbilityExtraProperty&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_124_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_125(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::AbilityLinearProperty& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::AbilityLinearProperty&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_125_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_63(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::AbilityLinearProperty a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::AbilityLinearProperty))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_63_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_126(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::AbilityLinearProperty& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::AbilityLinearProperty&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_126_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_127(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::AbilityLinearPropertyWithOverride& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::AbilityLinearPropertyWithOverride&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_127_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_64(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::AbilityLinearPropertyWithOverride a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::AbilityLinearPropertyWithOverride))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_64_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_128(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::AbilityLinearPropertyWithOverride& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::AbilityLinearPropertyWithOverride&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_128_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_129(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::Client::CakeBubbleOffset& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::CakeBubbleOffset&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_129_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_65(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::CakeBubbleOffset a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::CakeBubbleOffset))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_65_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_130(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::CakeBubbleOffset& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::CakeBubbleOffset&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_130_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_131(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::Client::FightFestProgress& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::FightFestProgress&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_131_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_66(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::FightFestProgress a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::FightFestProgress))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_66_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_132(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::FightFestProgress& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::FightFestProgress&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_132_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_133(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::Client::FindChestMarkConfig& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::FindChestMarkConfig&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_133_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_67(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::FindChestMarkConfig a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::FindChestMarkConfig))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_67_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_134(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::FindChestMarkConfig& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::FindChestMarkConfig&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_134_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_135(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::Client::PlayerStaminaData& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::PlayerStaminaData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_135_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_68(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::PlayerStaminaData a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::PlayerStaminaData))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_68_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_136(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::PlayerStaminaData& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::PlayerStaminaData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_136_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_137(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::Client::PlayerWorldLevelUpgradeData& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::PlayerWorldLevelUpgradeData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_137_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_69(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::PlayerWorldLevelUpgradeData a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::PlayerWorldLevelUpgradeData))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_69_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_138(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::PlayerWorldLevelUpgradeData& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::PlayerWorldLevelUpgradeData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_138_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_139(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::Client::PlayerLevelUpgradeData& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::PlayerLevelUpgradeData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_139_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_70(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::PlayerLevelUpgradeData a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::PlayerLevelUpgradeData))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_70_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_140(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::PlayerLevelUpgradeData& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::PlayerLevelUpgradeData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_140_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_141(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::Client::AdventureBuffData& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::AdventureBuffData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_141_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_71(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::AdventureBuffData a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::AdventureBuffData))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_71_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_142(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::AdventureBuffData& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::AdventureBuffData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_142_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_143(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::Client::WolfBroGunPlayBossResult& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::WolfBroGunPlayBossResult&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_143_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_72(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::WolfBroGunPlayBossResult a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::WolfBroGunPlayBossResult))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_72_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_144(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::WolfBroGunPlayBossResult& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::WolfBroGunPlayBossResult&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_144_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_145(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::Client::MazeAutoUseMPItemHintData_ItemEntry& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::MazeAutoUseMPItemHintData_ItemEntry&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_145_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_73(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::MazeAutoUseMPItemHintData_ItemEntry a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::MazeAutoUseMPItemHintData_ItemEntry))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_73_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_146(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::MazeAutoUseMPItemHintData_ItemEntry& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::MazeAutoUseMPItemHintData_ItemEntry&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_146_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_147(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::Client::WolfBroGunPlayPuzzleBoard_ReplaySaveData& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::WolfBroGunPlayPuzzleBoard_ReplaySaveData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_147_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_74(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::WolfBroGunPlayPuzzleBoard_ReplaySaveData a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::WolfBroGunPlayPuzzleBoard_ReplaySaveData))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_74_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_148(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::WolfBroGunPlayPuzzleBoard_ReplaySaveData& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::WolfBroGunPlayPuzzleBoard_ReplaySaveData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_148_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_149(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::Client::ActivityIntroButton_ActivityIntroButtonConfig& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::ActivityIntroButton_ActivityIntroButtonConfig&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_149_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_75(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::ActivityIntroButton_ActivityIntroButtonConfig a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::ActivityIntroButton_ActivityIntroButtonConfig))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_75_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_150(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::ActivityIntroButton_ActivityIntroButtonConfig& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::ActivityIntroButton_ActivityIntroButtonConfig&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_150_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_151(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::Client::Promises::TimeData& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::Client::Promises::TimeData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_151_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_76(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::Promises::TimeData a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::Promises::TimeData))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_76_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_152(::System::IntPtr a1, ::System::Int32 a2, ::RPG::Client::Promises::TimeData& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::Client::Promises::TimeData&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_152_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_153(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::GameCore::CommonIndexKey& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::GameCore::CommonIndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_153_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_77(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::CommonIndexKey a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::CommonIndexKey))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_77_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_154(::System::IntPtr a1, ::System::Int32 a2, ::RPG::GameCore::CommonIndexKey& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::GameCore::CommonIndexKey&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_154_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_155(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::UnityEngine::UI::TextPosition& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::UnityEngine::UI::TextPosition&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_155_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_78(::System::IntPtr a1, ::System::Int32 a2, ::UnityEngine::UI::TextPosition a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::UI::TextPosition))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_78_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_156(::System::IntPtr a1, ::System::Int32 a2, ::UnityEngine::UI::TextPosition& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::UI::TextPosition&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_156_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_157(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::UnityEngine::UI::SmoothMaskMaterial_Params& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::UnityEngine::UI::SmoothMaskMaterial_Params&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_157_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_79(::System::IntPtr a1, ::System::Int32 a2, ::UnityEngine::UI::SmoothMaskMaterial_Params a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::UI::SmoothMaskMaterial_Params))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_79_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_158(::System::IntPtr a1, ::System::Int32 a2, ::UnityEngine::UI::SmoothMaskMaterial_Params& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::UI::SmoothMaskMaterial_Params&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_158_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_159(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::UnityEngine::BoundingSphere& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::UnityEngine::BoundingSphere&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_159_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_80(::System::IntPtr a1, ::System::Int32 a2, ::UnityEngine::BoundingSphere a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::BoundingSphere))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_80_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_160(::System::IntPtr a1, ::System::Int32 a2, ::UnityEngine::BoundingSphere& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::UnityEngine::BoundingSphere&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_160_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UnPack_161(::XLua::ObjectTranslator* a1, ::System::IntPtr a2, ::System::Int32 a3, ::RPG::MVector2& a4)
		{
			return ((::System::Void(*)(::XLua::ObjectTranslator*, ::System::IntPtr, ::System::Int32, ::RPG::MVector2&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_161_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean Pack_81(::System::IntPtr a1, ::System::Int32 a2, ::RPG::MVector2 a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::MVector2))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_81_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_162(::System::IntPtr a1, ::System::Int32 a2, ::RPG::MVector2& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::RPG::MVector2&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_162_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean Pack_82(::System::IntPtr a1, ::System::Int32 a2, ::System::Byte a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_82_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_163(::System::IntPtr a1, ::System::Int32 a2, ::System::Byte& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Byte&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_163_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean Pack_83(::System::IntPtr a1, ::System::Int32 a2, ::System::SByte a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::SByte))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_83_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_164(::System::IntPtr a1, ::System::Int32 a2, ::System::SByte& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::SByte&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_164_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean Pack_84(::System::IntPtr a1, ::System::Int32 a2, ::System::Int16 a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Int16))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_84_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_165(::System::IntPtr a1, ::System::Int32 a2, ::System::Int16& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Int16&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_165_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean Pack_85(::System::IntPtr a1, ::System::Int32 a2, ::System::UInt16 a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::UInt16))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_85_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_166(::System::IntPtr a1, ::System::Int32 a2, ::System::UInt16& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::UInt16&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_166_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean Pack_86(::System::IntPtr a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_86_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_167(::System::IntPtr a1, ::System::Int32 a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_167_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean Pack_87(::System::IntPtr a1, ::System::Int32 a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_87_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_168(::System::IntPtr a1, ::System::Int32 a2, ::System::UInt32& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::UInt32&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_168_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean Pack_88(::System::IntPtr a1, ::System::Int32 a2, ::System::Int64 a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_88_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_169(::System::IntPtr a1, ::System::Int32 a2, ::System::Int64& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Int64&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_169_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean Pack_89(::System::IntPtr a1, ::System::Int32 a2, ::System::UInt64 a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_89_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_170(::System::IntPtr a1, ::System::Int32 a2, ::System::UInt64& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::UInt64&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_170_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean Pack_90(::System::IntPtr a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_90_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_171(::System::IntPtr a1, ::System::Int32 a2, ::System::Single& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_171_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean Pack_91(::System::IntPtr a1, ::System::Int32 a2, ::System::Double a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Double))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_91_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_172(::System::IntPtr a1, ::System::Int32 a2, ::System::Double& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Double&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_172_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean Pack_92(::System::IntPtr a1, ::System::Int32 a2, ::System::Decimal a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Decimal))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_PACK_92_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean UnPack_173(::System::IntPtr a1, ::System::Int32 a2, ::System::Decimal& a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Decimal&))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_UNPACK_173_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean IsStruct(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_COPYBYVALUE_ISSTRUCT_OFFSET))(a1);
		}
	};
}
