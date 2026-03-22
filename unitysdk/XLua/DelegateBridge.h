#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKRESULT.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/AkMonitorErrorCode.h"
#include "unitysdk/AkMonitorErrorLevel.h"
#include "unitysdk/Enum_3_DFCB42601400F441.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503_4.h"
#include "unitysdk/InControl/BindingSourceType.h"
#include "unitysdk/RPG/Client/ActivityModule_ActivityType.h"
#include "unitysdk/RPG/Client/AlleyEventInfo.h"
#include "unitysdk/RPG/Client/AlleyTransportRouteState.h"
#include "unitysdk/RPG/Client/ClockParkAttributeType.h"
#include "unitysdk/RPG/Client/Data/EventIndex.h"
#include "unitysdk/RPG/Client/FightActivityGroupInfo.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/MiniGameEventReason.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/Match3GameState.h"
#include "unitysdk/RPG/Client/PayProductResult.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/RPG/Client/UILayer.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/BattleResultState.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GachaType.h"
#include "unitysdk/RPG/GameCore/GridFightEquipCategory.h"
#include "unitysdk/RPG/GameCore/HipplenGameGradeType.h"
#include "unitysdk/RPG/GameCore/HudType.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/RPG/GameCore/ScreenTransferReason.h"
#include "unitysdk/RPG/GameCore/SubMissionState.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/Spine/Unity/MeshGeneratorBuffers.h"
#include "unitysdk/Struct_2_8B48740F46FC53FC.h"
#include "unitysdk/Struct_2_FEFADCB82FEB841E_3.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/AnimatorTransitionInfo.h"
#include "unitysdk/UnityEngine/EventSystems/MoveDirection.h"
#include "unitysdk/UnityEngine/EventSystems/RaycastResult.h"
#include "unitysdk/UnityEngine/LogType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/XLua/DelegateBridgeBase.h"

class AkCallbackInfo;
class Class_0_16E4307DCC419505_295;
class Class_0_16E4307DCC419505_296;
class Class_0_16E4307DCC419505_297;
class Class_0_16E4307DCC419505_299;
class Class_0_16E4307DCC419505_300;
class Class_0_16E4307DCC419505_301;
class Class_0_16E4307DCC419505_302;
class Class_0_16E4307DCC419505_303;
class Class_1_2CF43CF3CB5182D0;
class Class_1_303D5A33D1401D59;
class Class_1_3301DE64BF05426F;
class Class_1_43BD383C98B4C0C5_101;
class Class_1_43BD383C98B4C0C5_102;
class Class_1_47EB23CB5C4B2615_33;
class Class_1_5469D397DAE62876;
class Class_1_7D41D5D948382242;
class Class_1_99BD961747420BEB_17;
class Class_1_B1050BB558D637BF;
class Class_1_BDA8DEEF59BE3031;
class Class_1_BEB73AACF0CDA957;
class Class_1_D0948460F4810867;
class Class_1_D6D8D891CDDE5DED;
class Class_1_E3A8B05AA1BBEE81;
class Class_1_EA80EBCE663FE95A;
class Class_1_F19AB08624168191;
class Class_1_FA4F4A67B1C04320_288;
class Class_1_FA4F4A67B1C04320_289;
class Class_1_FA4F4A67B1C04320_291;
class Class_2_BD898AE9C0E88E25;
class Class_2_CFE01593AA29BD1C_Class_1_22046C69D06B0F53;
class Class_2_E6C0556C909C8254;
namespace Google::Protobuf { class ByteString; }
namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace InControl { class InputDevice; }
namespace Proto { class ItemCost; }
namespace Proto { class StrongChallengeAvatar; }
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::Client { class ActivityHotCoreRewardData; }
namespace RPG::Client { class ActivityHotData; }
namespace RPG::Client { class ActivityPanelData; }
namespace RPG::Client { class ActivitySummonStage; }
namespace RPG::Client { class AetherDivideGymDataItem; }
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class AssistData; }
namespace RPG::Client { class AvatarData; }
namespace RPG::Client { class AvatarEnhancedHint; }
namespace RPG::Client { class AvatarOutfitUnit; }
namespace RPG::Client { class AvatarPathData; }
namespace RPG::Client { class BaseGachaGroupData; }
namespace RPG::Client { class BaseGachaPoolData; }
namespace RPG::Client { class BaseGameFlow; }
namespace RPG::Client { class BaseLobby; }
namespace RPG::Client { class BattleAssetPreload_AssetPreloadGroup; }
namespace RPG::Client { class BookContentData; }
namespace RPG::Client { class BookletLuaPanelParam; }
namespace RPG::Client { class CakeRaceBattleItemDataItem; }
namespace RPG::Client { class CakeRaceHandbookCatItem; }
namespace RPG::Client { class ChallengeData; }
namespace RPG::Client { class ChallengeGroupData; }
namespace RPG::Client { class ChatReportReason; }
namespace RPG::Client { class ChessRogueBoardCellDataItem; }
namespace RPG::Client { class ChessRogueSubMissionReplayDataItem; }
namespace RPG::Client { class ChimeraDuelMasterData; }
namespace RPG::Client { class ClockParkCardItem; }
namespace RPG::Client { class CompanionMissionActivityBannerData; }
namespace RPG::Client { class DiceCombatDiceConfigData; }
namespace RPG::Client { class DrinkMakerCheersBartendDrinkDataExtend; }
namespace RPG::Client { class DrinkMakerCheersGroupData; }
namespace RPG::Client { class DrinkMakerCheersGuestCommentData; }
namespace RPG::Client { class ElfRestaurantRecipeData; }
namespace RPG::Client { class ElfShopItemData; }
namespace RPG::Client { class EquipmentItemData; }
namespace RPG::Client { class EvolveBuildCard; }
namespace RPG::Client { class EvolveBuildMixData; }
namespace RPG::Client { class EvolveBuildScMixData; }
namespace RPG::Client { class FantasticStoryChapterData; }
namespace RPG::Client { class FantasticStoryParagraphData; }
namespace RPG::Client { class FateHandbookHouguItem; }
namespace RPG::Client { class FateHandbookReijuItem; }
namespace RPG::Client { class FightFestCoachSkill; }
namespace RPG::Client { class FightFestPhase; }
namespace RPG::Client { class FriendRankingInfo; }
namespace RPG::Client { class FuncEntranceData; }
namespace RPG::Client { class GachaGroupData; }
namespace RPG::Client { class GachaItemData; }
namespace RPG::Client { class GlobalDispatchData_ServerData; }
namespace RPG::Client { class GridFightAugment; }
namespace RPG::Client { class GridFightConsumableInfo_GridFightConsumableItemUseParam; }
namespace RPG::Client { class GridFightConsumableItemConfig; }
namespace RPG::Client { class GridFightConsumableItemData; }
namespace RPG::Client { class GridFightDivisionConfig; }
namespace RPG::Client { class GridFightDivisionLevelConfig; }
namespace RPG::Client { class GridFightDivisionLevelReward; }
namespace RPG::Client { class GridFightDivisionStageConfig; }
namespace RPG::Client { class GridFightEnemyDifficultyLvConfig; }
namespace RPG::Client { class GridFightEquipCategoryInfoConfig; }
namespace RPG::Client { class GridFightEquipItemConfig; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightForgeConfig; }
namespace RPG::Client { class GridFightGameRefData; }
namespace RPG::Client { class GridFightGridData; }
namespace RPG::Client { class GridFightHandBookEquipItemConfig; }
namespace RPG::Client { class GridFightHandbookRole; }
namespace RPG::Client { class GridFightItemConfig; }
namespace RPG::Client { class GridFightMonsterAffixConfig; }
namespace RPG::Client { class GridFightMonsterCampConfig; }
namespace RPG::Client { class GridFightMonsterData; }
namespace RPG::Client { class GridFightNPCConfig; }
namespace RPG::Client { class GridFightOrbData; }
namespace RPG::Client { class GridFightOrbEntityData; }
namespace RPG::Client { class GridFightPortalData; }
namespace RPG::Client { class GridFightPresentEntity; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightRoleProperty; }
namespace RPG::Client { class GridFightRolePropertyConfig; }
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightTutorialStageConfig; }
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class IFateGameRoundSettleDmgSourceItem; }
namespace RPG::Client { class IPlanetFesBuff; }
namespace RPG::Client { class IResidentActivityPanelData; }
namespace RPG::Client { class IRogueTournBuildRefDataItem; }
namespace RPG::Client { class IRogueTournBuildRefTeamMemberData; }
namespace RPG::Client { class ItemData; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class LightConeRecommendData; }
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class MainMissionData; }
namespace RPG::Client { class MapEntityDef; }
namespace RPG::Client { class MapProp; }
namespace RPG::Client { class MatchPlayRecord; }
namespace RPG::Client { class MatchThreeBirdData; }
namespace RPG::Client { class MessageItemData; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoRogueHexChessBoardItem; }
namespace RPG::Client { class MonoSceneObjClickHint; }
namespace RPG::Client { class MonsterData; }
namespace RPG::Client { class MultipleDropData; }
namespace RPG::Client { class NPCWarningTipConfig; }
namespace RPG::Client { class NewsTickerItem; }
namespace RPG::Client { class PCResolution; }
namespace RPG::Client { class ParkourRank; }
namespace RPG::Client { class PenaconyEndmostChronicleEvent; }
namespace RPG::Client { class PlanetFesCardData; }
namespace RPG::Client { class PlanetFesMiniGameBingoRewardLevel; }
namespace RPG::Client { class PlanetFesSkillPhase; }
namespace RPG::Client { class PlanetFesThemeData; }
namespace RPG::Client { class PlanetFesToastItem; }
namespace RPG::Client { class PlanetFesTradingCardApplyItem; }
namespace RPG::Client { class PlanetFesTradingCardExchangeHistoryItem; }
namespace RPG::Client { class PlanetFesTradingCardOfferItem; }
namespace RPG::Client { class PlayerBoardInfo; }
namespace RPG::Client { class PlayerBriefDisplayData; }
namespace RPG::Client { class PopupMenuProxy_Option; }
namespace RPG::Client { class PunkLordData; }
namespace RPG::Client { class QuestData; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client { class RelicRecommendData; }
namespace RPG::Client { class RogueBuffData; }
namespace RPG::Client { class RogueMagicAreaDataItem; }
namespace RPG::Client { class RogueMagicScepterDataItem; }
namespace RPG::Client { class RogueMagicUnitDataItem; }
namespace RPG::Client { class RogueNousDiceBranchDataItem; }
namespace RPG::Client { class RogueNousDiceSlotDataItem; }
namespace RPG::Client { class RogueNousDiceSurfaceDataItem; }
namespace RPG::Client { class RogueTournArchiveData; }
namespace RPG::Client { class RogueTournAreaDataItem; }
namespace RPG::Client { class RoleTrialActivityData; }
namespace RPG::Client { class RuntimeGroupManager_HoYoGroupUnit; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client { class ScheduleTask; }
namespace RPG::Client { class SettledPunkLordData; }
namespace RPG::Client { class StaticListView; }
namespace RPG::Client { class StaticListViewItem; }
namespace RPG::Client { class SubMissionData; }
namespace RPG::Client { class SuitRecommendAvatarData; }
namespace RPG::Client { class SuperDropDown; }
namespace RPG::Client { class SwitchHandCoinData; }
namespace RPG::Client { class SwordTrainingEndingDataItem; }
namespace RPG::Client { class SwordTrainingSkillData; }
namespace RPG::Client { class TarotBookCard; }
namespace RPG::Client { class TarotBookCharacter; }
namespace RPG::Client { class TarotBookClue; }
namespace RPG::Client { class TarotBookDeleteData; }
namespace RPG::Client { class TarotBookInteraction; }
namespace RPG::Client { class TarotBookReadReward; }
namespace RPG::Client { class TarotBookStory; }
namespace RPG::Client { class TeamBuild; }
namespace RPG::Client { class TriggerEffectParams; }
namespace RPG::Client { class UIBubbleItem; }
namespace RPG::Client { class UIBubbleManager; }
namespace RPG::Client { class UIController; }
namespace RPG::Client { class UIFollow3DTarget; }
namespace RPG::Client { class VirtualRankChimeraTeam; }
namespace RPG::Client { class WheelItem; }
namespace RPG::Client { template <typename T1, typename T2> class PrefDictionary_2; }
namespace RPG::Client { template <typename T> class GridFightGameRefHttpRspBody_1; }
namespace RPG::Client { template <typename T> class PrefHashSet_1; }
namespace RPG::Client::ActivityAlley { class AlleyPackComponent; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenGiftData; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenInteractPropData; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenTraitData; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenWorkData; }
namespace RPG::Client::ActivityMarble { class MarbleSealData; }
namespace RPG::Client::DiceCombat { class DiceCombatCollectionCardInfo; }
namespace RPG::Client::DiceCombat { class DiceCombatCollectionDiceInfo; }
namespace RPG::Client::DiceCombat { class DiceCombatCommunicateData; }
namespace RPG::Client::DiceCombat { class DiceCombatGlossaryTermData; }
namespace RPG::Client::DiceCombat { class DiceCombatRankLevelData; }
namespace RPG::Client::DiceCombat { class DiceCombatSpecialRuleGroupData; }
namespace RPG::Client::DiceCombat { class IDiceCombatAvatarInfo; }
namespace RPG::Client::NavMap { class MappingInfoNode; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::Promises { class ExceptionEventArgs; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Prop { class JigsawItemData; }
namespace RPG::Client::Recommend { class RelicRecommendBigData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCalculationResultData; }
namespace RPG::Client::SwordTraining { class SwordTrainingCandidatePartnerAbilityData; }
namespace RPG::Client::TrainParty { class TrainPartyMeetingRankInfo; }
namespace RPG::Client::TrainParty { class TrainPartyRecordGroup; }
namespace RPG::GameCore { class ActivityFightGroupRow; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class AdventurePlayerRow; }
namespace RPG::GameCore { class AdventurePlayerRow_AdventurePlayerCommonRowWrap; }
namespace RPG::GameCore { class AvatarPromotionRow; }
namespace RPG::GameCore { class AvatarServantSkillRow; }
namespace RPG::GameCore { class AvatarSkillRow; }
namespace RPG::GameCore { class AvatarSkillTreeRow; }
namespace RPG::GameCore { class BattleEventRow; }
namespace RPG::GameCore { class BuffConfig; }
namespace RPG::GameCore { class CEBattlePresetConfig; }
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class ConditionParam; }
namespace RPG::GameCore { class DialogueGroupRow; }
namespace RPG::GameCore { class EvolveBuildGearEquipInfo; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GridFightManager_GridFightCustomValue; }
namespace RPG::GameCore { class IAdventurePlayerCommonRowWrap; }
namespace RPG::GameCore { class ItemComefromRow; }
namespace RPG::GameCore { class ItemConfig; }
namespace RPG::GameCore { class ItemRow; }
namespace RPG::GameCore { class LevelMinimapSection; }
namespace RPG::GameCore { class MainMissionRow; }
namespace RPG::GameCore { class MainMissionSortedItem; }
namespace RPG::GameCore { class MapEntryRow; }
namespace RPG::GameCore { class MarblePVPRankConfigRow; }
namespace RPG::GameCore { class MazeBuffData; }
namespace RPG::GameCore { class MazeBuffRow; }
namespace RPG::GameCore { class MessageItemRow; }
namespace RPG::GameCore { class MissionCondition; }
namespace RPG::GameCore { class MonsterRow; }
namespace RPG::GameCore { class MonsterSkillRow; }
namespace RPG::GameCore { class PerformanceERow; }
namespace RPG::GameCore { class PerformanceIDPair; }
namespace RPG::GameCore { class PerformanceSkipOverrideRow; }
namespace RPG::GameCore { class PlaneEventRow; }
namespace RPG::GameCore { class PropRow; }
namespace RPG::GameCore { class RewardRow; }
namespace RPG::GameCore { class RogueBuffRow; }
namespace RPG::GameCore { class RogueDLCAeonCrossRow; }
namespace RPG::GameCore { class RogueDLCMainStoryRewardRow; }
namespace RPG::GameCore { class RogueImageRow; }
namespace RPG::GameCore { class RogueNousAeonCrossRow; }
namespace RPG::GameCore { class RogueNousAeonRow; }
namespace RPG::GameCore { class SpecialAvatarRow; }
namespace RPG::GameCore { class StageMonsterRewardItem; }
namespace RPG::GameCore { class StageRow; }
namespace RPG::GameCore { class StatusRow; }
namespace RPG::GameCore { class SubMissionRow; }
namespace RPG::GameCore { class TalkSentenceConfigRow; }
namespace RPG::GameCore { class TextmapRow; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace RPG::GameCore { class VoiceConfigRow; }
namespace Spine { class Event; }
namespace Spine { class TrackEntry; }
namespace Spine::Unity { class ISkeletonAnimation; }
namespace Spine::Unity { class SkeletonGraphic; }
namespace Spine::Unity { class SkeletonRendererInstruction; }
namespace SuperScrollView { class LoopFlexibleGridView; }
namespace SuperScrollView { class LoopFlexibleGridViewItem; }
namespace SuperScrollView { class LoopGridView; }
namespace SuperScrollView { class LoopGridViewItem; }
namespace SuperScrollView { class LoopListView2; }
namespace SuperScrollView { class LoopListViewItem2; }
namespace SuperScrollView { class LoopStaggeredGridView; }
namespace SuperScrollView { class LoopStaggeredGridViewItem; }
namespace System { class Delegate; }
namespace System { class Exception; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventArgs; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }
namespace System::Reflection { class Assembly; }
namespace System::Reflection { class AssemblyName; }
namespace System::Reflection { class MemberInfo; }
namespace TMPro { class TMP_FontAsset; }
namespace TMPro { class TMP_SpriteAsset; }
namespace TMPro { class TMP_TextInfo; }
namespace UnityEngine { class AsyncOperation; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class AxisEventData; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class EventTrigger_Entry; }
namespace UnityEngine::EventSystems { class IBeginDragHandler; }
namespace UnityEngine::EventSystems { class ICancelHandler; }
namespace UnityEngine::EventSystems { class IDeselectHandler; }
namespace UnityEngine::EventSystems { class IDragHandler; }
namespace UnityEngine::EventSystems { class IDropHandler; }
namespace UnityEngine::EventSystems { class IEndDragHandler; }
namespace UnityEngine::EventSystems { class IIgnoreHandler; }
namespace UnityEngine::EventSystems { class IInitializePotentialDragHandler; }
namespace UnityEngine::EventSystems { class IMoveHandler; }
namespace UnityEngine::EventSystems { class IPointerClickHandler; }
namespace UnityEngine::EventSystems { class IPointerDownHandler; }
namespace UnityEngine::EventSystems { class IPointerEnterHandler; }
namespace UnityEngine::EventSystems { class IPointerExitHandler; }
namespace UnityEngine::EventSystems { class IPointerUpHandler; }
namespace UnityEngine::EventSystems { class IScrollHandler; }
namespace UnityEngine::EventSystems { class ISelectHandler; }
namespace UnityEngine::EventSystems { class ISubmitHandler; }
namespace UnityEngine::EventSystems { class IUpdateSelectedHandler; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::UI { class Dropdown_DropdownItem; }
namespace UnityEngine::UI { class Graphic; }
namespace UnityEngine::UI { class ILayoutElement; }
namespace UnityEngine::UI { class Selectable; }
namespace UnityEngine::UI { class Toggle; }
namespace XLua { class LuaBase; }
namespace XLua { class LuaEnv; }
namespace XLua { class LuaTable; }

#define XLUA_DELEGATEBRIDGE_ACTION_OFFSET UNITYSDK_OFFSET(0xF827390)
#define XLUA_DELEGATEBRIDGE_GETDELEGATEBYTYPE_OFFSET UNITYSDK_OFFSET(0xF81A170)
#define XLUA_DELEGATEBRIDGE_PCALL_OFFSET UNITYSDK_OFFSET(0xF7C9930)
#define XLUA_DELEGATEBRIDGE__CCTOR_OFFSET UNITYSDK_OFFSET(0xF815CE0)
#define XLUA_DELEGATEBRIDGE__CTOR_OFFSET UNITYSDK_OFFSET(0xF827080)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP0_OFFSET UNITYSDK_OFFSET(0xF77B9B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP100_OFFSET UNITYSDK_OFFSET(0xF78DDD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP101_OFFSET UNITYSDK_OFFSET(0xF78E000)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP102_OFFSET UNITYSDK_OFFSET(0xF78E3D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP103_OFFSET UNITYSDK_OFFSET(0xF78E6B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP104_OFFSET UNITYSDK_OFFSET(0xF78E8E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP105_OFFSET UNITYSDK_OFFSET(0xF78EC00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP106_OFFSET UNITYSDK_OFFSET(0xF78EEE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP107_OFFSET UNITYSDK_OFFSET(0xF78F110)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP108_OFFSET UNITYSDK_OFFSET(0xF78F430)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP109_OFFSET UNITYSDK_OFFSET(0xF78F710)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP10_OFFSET UNITYSDK_OFFSET(0xF77D210)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP110_OFFSET UNITYSDK_OFFSET(0xF78F940)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP111_OFFSET UNITYSDK_OFFSET(0xF78FC60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP112_OFFSET UNITYSDK_OFFSET(0xF78FE90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP113_OFFSET UNITYSDK_OFFSET(0xF790170)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP114_OFFSET UNITYSDK_OFFSET(0xF7903A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP115_OFFSET UNITYSDK_OFFSET(0xF7906C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP116_OFFSET UNITYSDK_OFFSET(0xF7909A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP117_OFFSET UNITYSDK_OFFSET(0xF790BD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP118_OFFSET UNITYSDK_OFFSET(0xF790EF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP119_OFFSET UNITYSDK_OFFSET(0xF791120)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP11_OFFSET UNITYSDK_OFFSET(0xF77D520)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP120_OFFSET UNITYSDK_OFFSET(0xF7913C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP121_OFFSET UNITYSDK_OFFSET(0xF7916F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP122_OFFSET UNITYSDK_OFFSET(0xF791AB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP123_OFFSET UNITYSDK_OFFSET(0xF791DB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP124_OFFSET UNITYSDK_OFFSET(0xF791FE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP125_OFFSET UNITYSDK_OFFSET(0xF792280)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP126_OFFSET UNITYSDK_OFFSET(0xF792630)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP127_OFFSET UNITYSDK_OFFSET(0xF792860)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP128_OFFSET UNITYSDK_OFFSET(0xF792BE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP129_OFFSET UNITYSDK_OFFSET(0xF792EC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP12_OFFSET UNITYSDK_OFFSET(0xF77D7E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP130_OFFSET UNITYSDK_OFFSET(0xF7930F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP131_OFFSET UNITYSDK_OFFSET(0xF793410)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP132_OFFSET UNITYSDK_OFFSET(0xF7936F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP133_OFFSET UNITYSDK_OFFSET(0xF793920)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP134_OFFSET UNITYSDK_OFFSET(0xF793B50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP135_OFFSET UNITYSDK_OFFSET(0xF793E60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP136_OFFSET UNITYSDK_OFFSET(0xF794140)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP137_OFFSET UNITYSDK_OFFSET(0xF794370)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP138_OFFSET UNITYSDK_OFFSET(0xF794670)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP139_OFFSET UNITYSDK_OFFSET(0xF794A10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP13_OFFSET UNITYSDK_OFFSET(0xF77DA90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP140_OFFSET UNITYSDK_OFFSET(0xF794DB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP141_OFFSET UNITYSDK_OFFSET(0xF7950C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP142_OFFSET UNITYSDK_OFFSET(0xF7952F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP143_OFFSET UNITYSDK_OFFSET(0xF795520)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP144_OFFSET UNITYSDK_OFFSET(0xF7957B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP145_OFFSET UNITYSDK_OFFSET(0xF795B20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP146_OFFSET UNITYSDK_OFFSET(0xF795D50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP147_OFFSET UNITYSDK_OFFSET(0xF795F80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP148_OFFSET UNITYSDK_OFFSET(0xF796220)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP149_OFFSET UNITYSDK_OFFSET(0xF7964E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP14_OFFSET UNITYSDK_OFFSET(0xF77DDA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP150_OFFSET UNITYSDK_OFFSET(0xF796710)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP151_OFFSET UNITYSDK_OFFSET(0xF7969B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP152_OFFSET UNITYSDK_OFFSET(0xF796BE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP153_OFFSET UNITYSDK_OFFSET(0xF796F80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP154_OFFSET UNITYSDK_OFFSET(0xF7971E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP155_OFFSET UNITYSDK_OFFSET(0xF7974C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP156_OFFSET UNITYSDK_OFFSET(0xF7976F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP157_OFFSET UNITYSDK_OFFSET(0xF797A10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP158_OFFSET UNITYSDK_OFFSET(0xF797C40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP159_OFFSET UNITYSDK_OFFSET(0xF797EF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP15_OFFSET UNITYSDK_OFFSET(0xF77E090)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP160_OFFSET UNITYSDK_OFFSET(0xF798120)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP161_OFFSET UNITYSDK_OFFSET(0xF798400)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP162_OFFSET UNITYSDK_OFFSET(0xF798630)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP163_OFFSET UNITYSDK_OFFSET(0xF798880)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP164_OFFSET UNITYSDK_OFFSET(0xF798AF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP165_OFFSET UNITYSDK_OFFSET(0xF798DC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP166_OFFSET UNITYSDK_OFFSET(0xF799060)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP167_OFFSET UNITYSDK_OFFSET(0xF799290)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP168_OFFSET UNITYSDK_OFFSET(0xF7994C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP169_OFFSET UNITYSDK_OFFSET(0xF7997E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP16_OFFSET UNITYSDK_OFFSET(0xF77E400)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP170_OFFSET UNITYSDK_OFFSET(0xF799B10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP171_OFFSET UNITYSDK_OFFSET(0xF799DF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP172_OFFSET UNITYSDK_OFFSET(0xF79A020)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP173_OFFSET UNITYSDK_OFFSET(0xF79A340)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP174_OFFSET UNITYSDK_OFFSET(0xF79A570)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP175_OFFSET UNITYSDK_OFFSET(0xF79A850)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP176_OFFSET UNITYSDK_OFFSET(0xF79AA80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP177_OFFSET UNITYSDK_OFFSET(0xF79ADA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP178_OFFSET UNITYSDK_OFFSET(0xF79B0B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP179_OFFSET UNITYSDK_OFFSET(0xF79B3F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP17_OFFSET UNITYSDK_OFFSET(0xF77E710)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP180_OFFSET UNITYSDK_OFFSET(0xF79B620)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP181_OFFSET UNITYSDK_OFFSET(0xF79B8C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP182_OFFSET UNITYSDK_OFFSET(0xF79BB60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP183_OFFSET UNITYSDK_OFFSET(0xF79BE40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP184_OFFSET UNITYSDK_OFFSET(0xF79C070)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP185_OFFSET UNITYSDK_OFFSET(0xF79C390)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP186_OFFSET UNITYSDK_OFFSET(0xF79C670)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP187_OFFSET UNITYSDK_OFFSET(0xF79C8A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP188_OFFSET UNITYSDK_OFFSET(0xF79CBC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP189_OFFSET UNITYSDK_OFFSET(0xF79CEA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP18_OFFSET UNITYSDK_OFFSET(0xF77EA80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP190_OFFSET UNITYSDK_OFFSET(0xF79D0D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP191_OFFSET UNITYSDK_OFFSET(0xF79D3F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP192_OFFSET UNITYSDK_OFFSET(0xF79D620)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP193_OFFSET UNITYSDK_OFFSET(0xF79D8D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP194_OFFSET UNITYSDK_OFFSET(0xF79DB00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP195_OFFSET UNITYSDK_OFFSET(0xF79DE20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP196_OFFSET UNITYSDK_OFFSET(0xF79E050)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP197_OFFSET UNITYSDK_OFFSET(0xF79E280)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP198_OFFSET UNITYSDK_OFFSET(0xF79E4D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP199_OFFSET UNITYSDK_OFFSET(0xF79E770)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP19_OFFSET UNITYSDK_OFFSET(0xF77EDA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1_OFFSET UNITYSDK_OFFSET(0xF77BBE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP200_OFFSET UNITYSDK_OFFSET(0xF79EA50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP201_OFFSET UNITYSDK_OFFSET(0xF79EC80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP202_OFFSET UNITYSDK_OFFSET(0xF79EF60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP203_OFFSET UNITYSDK_OFFSET(0xF79F190)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP204_OFFSET UNITYSDK_OFFSET(0xF79F4B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP205_OFFSET UNITYSDK_OFFSET(0xF79F790)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP206_OFFSET UNITYSDK_OFFSET(0xF79F9C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP207_OFFSET UNITYSDK_OFFSET(0xF79FCE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP208_OFFSET UNITYSDK_OFFSET(0xF79FFC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP209_OFFSET UNITYSDK_OFFSET(0xF7A01F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP20_OFFSET UNITYSDK_OFFSET(0xF77F0B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP210_OFFSET UNITYSDK_OFFSET(0xF7A0510)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP211_OFFSET UNITYSDK_OFFSET(0xF7A0740)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP212_OFFSET UNITYSDK_OFFSET(0xF7A0B30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP213_OFFSET UNITYSDK_OFFSET(0xF7A0E10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP214_OFFSET UNITYSDK_OFFSET(0xF7A1040)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP215_OFFSET UNITYSDK_OFFSET(0xF7A1360)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP216_OFFSET UNITYSDK_OFFSET(0xF7A1640)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP217_OFFSET UNITYSDK_OFFSET(0xF7A1870)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP218_OFFSET UNITYSDK_OFFSET(0xF7A1B90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP219_OFFSET UNITYSDK_OFFSET(0xF7A1E70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP21_OFFSET UNITYSDK_OFFSET(0xF77F3D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP220_OFFSET UNITYSDK_OFFSET(0xF7A20A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP221_OFFSET UNITYSDK_OFFSET(0xF7A23C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP222_OFFSET UNITYSDK_OFFSET(0xF7A25F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP223_OFFSET UNITYSDK_OFFSET(0xF7A2860)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP224_OFFSET UNITYSDK_OFFSET(0xF7A2AE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP225_OFFSET UNITYSDK_OFFSET(0xF7A2D10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP226_OFFSET UNITYSDK_OFFSET(0xF7A2FF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP227_OFFSET UNITYSDK_OFFSET(0xF7A3390)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP228_OFFSET UNITYSDK_OFFSET(0xF7A3730)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP229_OFFSET UNITYSDK_OFFSET(0xF7A3A60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP22_OFFSET UNITYSDK_OFFSET(0xF77F650)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP230_OFFSET UNITYSDK_OFFSET(0xF7A3DA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP231_OFFSET UNITYSDK_OFFSET(0xF7A40E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP232_OFFSET UNITYSDK_OFFSET(0xF7A4310)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP233_OFFSET UNITYSDK_OFFSET(0xF7A4640)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP234_OFFSET UNITYSDK_OFFSET(0xF7A4980)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP235_OFFSET UNITYSDK_OFFSET(0xF7A4CC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP236_OFFSET UNITYSDK_OFFSET(0xF7A4EF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP237_OFFSET UNITYSDK_OFFSET(0xF7A52F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP238_OFFSET UNITYSDK_OFFSET(0xF7A5680)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP239_OFFSET UNITYSDK_OFFSET(0xF7A5960)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP23_OFFSET UNITYSDK_OFFSET(0xF77F8C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP240_OFFSET UNITYSDK_OFFSET(0xF7A5C30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP241_OFFSET UNITYSDK_OFFSET(0xF7A5E60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP242_OFFSET UNITYSDK_OFFSET(0xF7A6090)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP243_OFFSET UNITYSDK_OFFSET(0xF7A6370)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP244_OFFSET UNITYSDK_OFFSET(0xF7A65A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP245_OFFSET UNITYSDK_OFFSET(0xF7A68C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP246_OFFSET UNITYSDK_OFFSET(0xF7A6C40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP247_OFFSET UNITYSDK_OFFSET(0xF7A6E70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP248_OFFSET UNITYSDK_OFFSET(0xF7A70A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP249_OFFSET UNITYSDK_OFFSET(0xF7A7440)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP24_OFFSET UNITYSDK_OFFSET(0xF77FBD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP250_OFFSET UNITYSDK_OFFSET(0xF7A77E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP251_OFFSET UNITYSDK_OFFSET(0xF7A7A10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP252_OFFSET UNITYSDK_OFFSET(0xF7A7C40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP253_OFFSET UNITYSDK_OFFSET(0xF7A7F40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP254_OFFSET UNITYSDK_OFFSET(0xF7A8170)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP255_OFFSET UNITYSDK_OFFSET(0xF7A8440)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP256_OFFSET UNITYSDK_OFFSET(0xF7A8720)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP257_OFFSET UNITYSDK_OFFSET(0xF7A8950)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP258_OFFSET UNITYSDK_OFFSET(0xF7A8C70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP259_OFFSET UNITYSDK_OFFSET(0xF7A8EA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP25_OFFSET UNITYSDK_OFFSET(0xF77FF60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP260_OFFSET UNITYSDK_OFFSET(0xF7A9200)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP261_OFFSET UNITYSDK_OFFSET(0xF7A9540)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP262_OFFSET UNITYSDK_OFFSET(0xF7A9880)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP263_OFFSET UNITYSDK_OFFSET(0xF7A9B60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP264_OFFSET UNITYSDK_OFFSET(0xF7A9D90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP265_OFFSET UNITYSDK_OFFSET(0xF7AA0B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP266_OFFSET UNITYSDK_OFFSET(0xF7AA310)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP267_OFFSET UNITYSDK_OFFSET(0xF7AA5E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP268_OFFSET UNITYSDK_OFFSET(0xF7AA8C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP269_OFFSET UNITYSDK_OFFSET(0xF7AAAF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP26_OFFSET UNITYSDK_OFFSET(0xF780290)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP270_OFFSET UNITYSDK_OFFSET(0xF7AAE10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP271_OFFSET UNITYSDK_OFFSET(0xF7AB0F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP272_OFFSET UNITYSDK_OFFSET(0xF7AB320)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP273_OFFSET UNITYSDK_OFFSET(0xF7AB640)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP274_OFFSET UNITYSDK_OFFSET(0xF7AB870)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP275_OFFSET UNITYSDK_OFFSET(0xF7ABAE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP276_OFFSET UNITYSDK_OFFSET(0xF7ABDC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP277_OFFSET UNITYSDK_OFFSET(0xF7ABFF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP278_OFFSET UNITYSDK_OFFSET(0xF7AC310)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP279_OFFSET UNITYSDK_OFFSET(0xF7AC5F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP27_OFFSET UNITYSDK_OFFSET(0xF7805A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP280_OFFSET UNITYSDK_OFFSET(0xF7AC820)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP281_OFFSET UNITYSDK_OFFSET(0xF7ACB40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP282_OFFSET UNITYSDK_OFFSET(0xF7ACE80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP283_OFFSET UNITYSDK_OFFSET(0xF7AD100)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP284_OFFSET UNITYSDK_OFFSET(0xF7AD490)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP285_OFFSET UNITYSDK_OFFSET(0xF7AD770)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP286_OFFSET UNITYSDK_OFFSET(0xF7AD9A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP287_OFFSET UNITYSDK_OFFSET(0xF7ADCC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP288_OFFSET UNITYSDK_OFFSET(0xF7ADEF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP289_OFFSET UNITYSDK_OFFSET(0xF7AE220)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP28_OFFSET UNITYSDK_OFFSET(0xF780810)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP290_OFFSET UNITYSDK_OFFSET(0xF7AE560)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP291_OFFSET UNITYSDK_OFFSET(0xF7AE8A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP292_OFFSET UNITYSDK_OFFSET(0xF7AEAD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP293_OFFSET UNITYSDK_OFFSET(0xF7AEE00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP294_OFFSET UNITYSDK_OFFSET(0xF7AF140)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP295_OFFSET UNITYSDK_OFFSET(0xF7AF480)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP296_OFFSET UNITYSDK_OFFSET(0xF7AF790)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP297_OFFSET UNITYSDK_OFFSET(0xF7AFA70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP298_OFFSET UNITYSDK_OFFSET(0xF7AFCA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP299_OFFSET UNITYSDK_OFFSET(0xF7AFFC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP29_OFFSET UNITYSDK_OFFSET(0xF780A70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP2_OFFSET UNITYSDK_OFFSET(0xF77BE10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP300_OFFSET UNITYSDK_OFFSET(0xF7B0260)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP301_OFFSET UNITYSDK_OFFSET(0xF7B0590)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP302_OFFSET UNITYSDK_OFFSET(0xF7B0950)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP303_OFFSET UNITYSDK_OFFSET(0xF7B0D10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP304_OFFSET UNITYSDK_OFFSET(0xF7B0F40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP305_OFFSET UNITYSDK_OFFSET(0xF7B11E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP306_OFFSET UNITYSDK_OFFSET(0xF7B1410)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP307_OFFSET UNITYSDK_OFFSET(0xF7B1720)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP308_OFFSET UNITYSDK_OFFSET(0xF7B1950)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP309_OFFSET UNITYSDK_OFFSET(0xF7B1C30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP30_OFFSET UNITYSDK_OFFSET(0xF780CD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP310_OFFSET UNITYSDK_OFFSET(0xF7B1E60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP311_OFFSET UNITYSDK_OFFSET(0xF7B2180)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP312_OFFSET UNITYSDK_OFFSET(0xF7B2460)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP313_OFFSET UNITYSDK_OFFSET(0xF7B2690)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP314_OFFSET UNITYSDK_OFFSET(0xF7B29B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP315_OFFSET UNITYSDK_OFFSET(0xF7B2BE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP316_OFFSET UNITYSDK_OFFSET(0xF7B2F40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP317_OFFSET UNITYSDK_OFFSET(0xF7B3280)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP318_OFFSET UNITYSDK_OFFSET(0xF7B35C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP319_OFFSET UNITYSDK_OFFSET(0xF7B3810)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP31_OFFSET UNITYSDK_OFFSET(0xF781190)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP320_OFFSET UNITYSDK_OFFSET(0xF7B3A40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP321_OFFSET UNITYSDK_OFFSET(0xF7B3D70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP322_OFFSET UNITYSDK_OFFSET(0xF7B4050)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP323_OFFSET UNITYSDK_OFFSET(0xF7B4280)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP324_OFFSET UNITYSDK_OFFSET(0xF7B45A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP325_OFFSET UNITYSDK_OFFSET(0xF7B47D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP326_OFFSET UNITYSDK_OFFSET(0xF7B4A00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP327_OFFSET UNITYSDK_OFFSET(0xF7B4C30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP328_OFFSET UNITYSDK_OFFSET(0xF7B4E60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP329_OFFSET UNITYSDK_OFFSET(0xF7B5090)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP32_OFFSET UNITYSDK_OFFSET(0xF781740)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP330_OFFSET UNITYSDK_OFFSET(0xF7B53D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP331_OFFSET UNITYSDK_OFFSET(0xF7B5650)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP332_OFFSET UNITYSDK_OFFSET(0xF7B59E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP333_OFFSET UNITYSDK_OFFSET(0xF7B5CC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP334_OFFSET UNITYSDK_OFFSET(0xF7B5EF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP335_OFFSET UNITYSDK_OFFSET(0xF7B6210)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP336_OFFSET UNITYSDK_OFFSET(0xF7B6550)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP337_OFFSET UNITYSDK_OFFSET(0xF7B6780)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP338_OFFSET UNITYSDK_OFFSET(0xF7B6AB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP339_OFFSET UNITYSDK_OFFSET(0xF7B6DF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP33_OFFSET UNITYSDK_OFFSET(0xF781C00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP340_OFFSET UNITYSDK_OFFSET(0xF7B7130)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP341_OFFSET UNITYSDK_OFFSET(0xF7B7360)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP342_OFFSET UNITYSDK_OFFSET(0xF7B7690)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP343_OFFSET UNITYSDK_OFFSET(0xF7B79D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP344_OFFSET UNITYSDK_OFFSET(0xF7B7D10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP345_OFFSET UNITYSDK_OFFSET(0xF7B7FF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP346_OFFSET UNITYSDK_OFFSET(0xF7B8220)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP347_OFFSET UNITYSDK_OFFSET(0xF7B8540)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP348_OFFSET UNITYSDK_OFFSET(0xF7B88E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP349_OFFSET UNITYSDK_OFFSET(0xF7B8BA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP34_OFFSET UNITYSDK_OFFSET(0xF7820C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP350_OFFSET UNITYSDK_OFFSET(0xF7B8E40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP351_OFFSET UNITYSDK_OFFSET(0xF7B9070)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP352_OFFSET UNITYSDK_OFFSET(0xF7B92A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP353_OFFSET UNITYSDK_OFFSET(0xF7B9530)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP354_OFFSET UNITYSDK_OFFSET(0xF7B9810)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP355_OFFSET UNITYSDK_OFFSET(0xF7B9A40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP356_OFFSET UNITYSDK_OFFSET(0xF7B9D60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP357_OFFSET UNITYSDK_OFFSET(0xF7B9FD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP358_OFFSET UNITYSDK_OFFSET(0xF7BA2B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP359_OFFSET UNITYSDK_OFFSET(0xF7BA4E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP35_OFFSET UNITYSDK_OFFSET(0xF7825C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP360_OFFSET UNITYSDK_OFFSET(0xF7BA800)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP361_OFFSET UNITYSDK_OFFSET(0xF7BAB50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP362_OFFSET UNITYSDK_OFFSET(0xF7BADF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP363_OFFSET UNITYSDK_OFFSET(0xF7BB210)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP364_OFFSET UNITYSDK_OFFSET(0xF7BB4F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP365_OFFSET UNITYSDK_OFFSET(0xF7BB720)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP366_OFFSET UNITYSDK_OFFSET(0xF7BBA40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP367_OFFSET UNITYSDK_OFFSET(0xF7BBD20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP368_OFFSET UNITYSDK_OFFSET(0xF7BBF50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP369_OFFSET UNITYSDK_OFFSET(0xF7BC270)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP36_OFFSET UNITYSDK_OFFSET(0xF782990)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP370_OFFSET UNITYSDK_OFFSET(0xF7BC550)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP371_OFFSET UNITYSDK_OFFSET(0xF7BC780)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP372_OFFSET UNITYSDK_OFFSET(0xF7BCAA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP373_OFFSET UNITYSDK_OFFSET(0xF7BCD80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP374_OFFSET UNITYSDK_OFFSET(0xF7BCFB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP375_OFFSET UNITYSDK_OFFSET(0xF7BD2D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP376_OFFSET UNITYSDK_OFFSET(0xF7BD500)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP377_OFFSET UNITYSDK_OFFSET(0xF7BD7E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP378_OFFSET UNITYSDK_OFFSET(0xF7BDAC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP379_OFFSET UNITYSDK_OFFSET(0xF7BDCF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP37_OFFSET UNITYSDK_OFFSET(0xF782DB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP380_OFFSET UNITYSDK_OFFSET(0xF7BE010)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP381_OFFSET UNITYSDK_OFFSET(0xF7BE240)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP382_OFFSET UNITYSDK_OFFSET(0xF7BE4E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP383_OFFSET UNITYSDK_OFFSET(0xF7BE7C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP384_OFFSET UNITYSDK_OFFSET(0xF7BE9F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP385_OFFSET UNITYSDK_OFFSET(0xF7BED10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP386_OFFSET UNITYSDK_OFFSET(0xF7BEFF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP387_OFFSET UNITYSDK_OFFSET(0xF7BF220)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP388_OFFSET UNITYSDK_OFFSET(0xF7BF540)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP389_OFFSET UNITYSDK_OFFSET(0xF7BF820)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP38_OFFSET UNITYSDK_OFFSET(0xF7830C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP390_OFFSET UNITYSDK_OFFSET(0xF7BFA50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP391_OFFSET UNITYSDK_OFFSET(0xF7BFD70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP392_OFFSET UNITYSDK_OFFSET(0xF7C0050)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP393_OFFSET UNITYSDK_OFFSET(0xF7C0280)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP394_OFFSET UNITYSDK_OFFSET(0xF7C05A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP395_OFFSET UNITYSDK_OFFSET(0xF7C0880)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP396_OFFSET UNITYSDK_OFFSET(0xF7C0AB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP397_OFFSET UNITYSDK_OFFSET(0xF7C0DD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP398_OFFSET UNITYSDK_OFFSET(0xF7C10B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP399_OFFSET UNITYSDK_OFFSET(0xF7C12E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP39_OFFSET UNITYSDK_OFFSET(0xF7833E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP3_OFFSET UNITYSDK_OFFSET(0xF77C070)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP400_OFFSET UNITYSDK_OFFSET(0xF7C1600)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP401_OFFSET UNITYSDK_OFFSET(0xF7C18C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP402_OFFSET UNITYSDK_OFFSET(0xF7C1B70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP403_OFFSET UNITYSDK_OFFSET(0xF7C1DA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP404_OFFSET UNITYSDK_OFFSET(0xF7C2080)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP405_OFFSET UNITYSDK_OFFSET(0xF7C22B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP406_OFFSET UNITYSDK_OFFSET(0xF7C25D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP407_OFFSET UNITYSDK_OFFSET(0xF7C28B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP408_OFFSET UNITYSDK_OFFSET(0xF7C2AE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP409_OFFSET UNITYSDK_OFFSET(0xF7C2E00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP40_OFFSET UNITYSDK_OFFSET(0xF7836E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP410_OFFSET UNITYSDK_OFFSET(0xF7C30E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP411_OFFSET UNITYSDK_OFFSET(0xF7C3310)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP412_OFFSET UNITYSDK_OFFSET(0xF7C3630)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP413_OFFSET UNITYSDK_OFFSET(0xF7C38F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP414_OFFSET UNITYSDK_OFFSET(0xF7C3BB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP415_OFFSET UNITYSDK_OFFSET(0xF7C3E90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP416_OFFSET UNITYSDK_OFFSET(0xF7C40C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP417_OFFSET UNITYSDK_OFFSET(0xF7C43E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP418_OFFSET UNITYSDK_OFFSET(0xF7C46C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP419_OFFSET UNITYSDK_OFFSET(0xF7C48F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP41_OFFSET UNITYSDK_OFFSET(0xF7838D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP420_OFFSET UNITYSDK_OFFSET(0xF7C4C10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP421_OFFSET UNITYSDK_OFFSET(0xF7C4F60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP422_OFFSET UNITYSDK_OFFSET(0xF7C5200)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP423_OFFSET UNITYSDK_OFFSET(0xF7C5620)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP424_OFFSET UNITYSDK_OFFSET(0xF7C5910)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP425_OFFSET UNITYSDK_OFFSET(0xF7C5B50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP426_OFFSET UNITYSDK_OFFSET(0xF7C5E80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP427_OFFSET UNITYSDK_OFFSET(0xF7C6190)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP428_OFFSET UNITYSDK_OFFSET(0xF7C6530)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP429_OFFSET UNITYSDK_OFFSET(0xF7C6810)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP42_OFFSET UNITYSDK_OFFSET(0xF783B00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP430_OFFSET UNITYSDK_OFFSET(0xF7C6A40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP431_OFFSET UNITYSDK_OFFSET(0xF7C6D60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP432_OFFSET UNITYSDK_OFFSET(0xF7C7040)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP433_OFFSET UNITYSDK_OFFSET(0xF7C7270)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP434_OFFSET UNITYSDK_OFFSET(0xF7C7590)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP435_OFFSET UNITYSDK_OFFSET(0xF7C7870)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP436_OFFSET UNITYSDK_OFFSET(0xF7C7AA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP437_OFFSET UNITYSDK_OFFSET(0xF7C7DC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP438_OFFSET UNITYSDK_OFFSET(0xF7C80A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP439_OFFSET UNITYSDK_OFFSET(0xF7C82D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP43_OFFSET UNITYSDK_OFFSET(0xF783D00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP440_OFFSET UNITYSDK_OFFSET(0xF7C85F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP441_OFFSET UNITYSDK_OFFSET(0xF7C88D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP442_OFFSET UNITYSDK_OFFSET(0xF7C8B00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP443_OFFSET UNITYSDK_OFFSET(0xF7C8E20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP444_OFFSET UNITYSDK_OFFSET(0xF7C9130)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP445_OFFSET UNITYSDK_OFFSET(0xF7C93B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP446_OFFSET UNITYSDK_OFFSET(0xF7C95E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP447_OFFSET UNITYSDK_OFFSET(0xF7C9A70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP448_OFFSET UNITYSDK_OFFSET(0xF7C9DE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP449_OFFSET UNITYSDK_OFFSET(0xF7CA010)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP44_OFFSET UNITYSDK_OFFSET(0xF783F30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP450_OFFSET UNITYSDK_OFFSET(0xF7CA3C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP451_OFFSET UNITYSDK_OFFSET(0xF7CA6A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP452_OFFSET UNITYSDK_OFFSET(0xF7CA8D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP453_OFFSET UNITYSDK_OFFSET(0xF7CABF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP454_OFFSET UNITYSDK_OFFSET(0xF7CAE70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP455_OFFSET UNITYSDK_OFFSET(0xF7CB150)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP456_OFFSET UNITYSDK_OFFSET(0xF7CB380)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP457_OFFSET UNITYSDK_OFFSET(0xF7CB6A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP458_OFFSET UNITYSDK_OFFSET(0xF7CB980)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP459_OFFSET UNITYSDK_OFFSET(0xF7CBBB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP45_OFFSET UNITYSDK_OFFSET(0xF784260)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP460_OFFSET UNITYSDK_OFFSET(0xF7CBED0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP461_OFFSET UNITYSDK_OFFSET(0xF7CC1B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP462_OFFSET UNITYSDK_OFFSET(0xF7CC3E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP463_OFFSET UNITYSDK_OFFSET(0xF7CC700)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP464_OFFSET UNITYSDK_OFFSET(0xF7CC9E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP465_OFFSET UNITYSDK_OFFSET(0xF7CCC10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP466_OFFSET UNITYSDK_OFFSET(0xF7CCF30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP467_OFFSET UNITYSDK_OFFSET(0xF7CD160)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP468_OFFSET UNITYSDK_OFFSET(0xF7CD440)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP469_OFFSET UNITYSDK_OFFSET(0xF7CD670)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP46_OFFSET UNITYSDK_OFFSET(0xF784500)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP470_OFFSET UNITYSDK_OFFSET(0xF7CD990)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP471_OFFSET UNITYSDK_OFFSET(0xF7CDC70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP472_OFFSET UNITYSDK_OFFSET(0xF7CDEA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP473_OFFSET UNITYSDK_OFFSET(0xF7CE1C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP474_OFFSET UNITYSDK_OFFSET(0xF7CE4A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP475_OFFSET UNITYSDK_OFFSET(0xF7CE6D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP476_OFFSET UNITYSDK_OFFSET(0xF7CE9F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP477_OFFSET UNITYSDK_OFFSET(0xF7CECD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP478_OFFSET UNITYSDK_OFFSET(0xF7CEF00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP479_OFFSET UNITYSDK_OFFSET(0xF7CF220)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP47_OFFSET UNITYSDK_OFFSET(0xF784810)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP480_OFFSET UNITYSDK_OFFSET(0xF7CF450)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP481_OFFSET UNITYSDK_OFFSET(0xF7CF780)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP482_OFFSET UNITYSDK_OFFSET(0xF7CFAC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP483_OFFSET UNITYSDK_OFFSET(0xF7CFE00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP484_OFFSET UNITYSDK_OFFSET(0xF7D0030)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP485_OFFSET UNITYSDK_OFFSET(0xF7D0310)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP486_OFFSET UNITYSDK_OFFSET(0xF7D0540)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP487_OFFSET UNITYSDK_OFFSET(0xF7D0860)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP488_OFFSET UNITYSDK_OFFSET(0xF7D0AB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP489_OFFSET UNITYSDK_OFFSET(0xF7D0D90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP48_OFFSET UNITYSDK_OFFSET(0xF784A80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP490_OFFSET UNITYSDK_OFFSET(0xF7D0FC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP491_OFFSET UNITYSDK_OFFSET(0xF7D12E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP492_OFFSET UNITYSDK_OFFSET(0xF7D15E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP493_OFFSET UNITYSDK_OFFSET(0xF7D1830)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP494_OFFSET UNITYSDK_OFFSET(0xF7D1B90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP495_OFFSET UNITYSDK_OFFSET(0xF7D1E70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP496_OFFSET UNITYSDK_OFFSET(0xF7D20A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP497_OFFSET UNITYSDK_OFFSET(0xF7D23C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP498_OFFSET UNITYSDK_OFFSET(0xF7D26A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP499_OFFSET UNITYSDK_OFFSET(0xF7D28D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP49_OFFSET UNITYSDK_OFFSET(0xF784CD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP4_OFFSET UNITYSDK_OFFSET(0xF77C2A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP500_OFFSET UNITYSDK_OFFSET(0xF7D2BF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP501_OFFSET UNITYSDK_OFFSET(0xF7D2ED0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP502_OFFSET UNITYSDK_OFFSET(0xF7D3100)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP503_OFFSET UNITYSDK_OFFSET(0xF7D3420)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP504_OFFSET UNITYSDK_OFFSET(0xF7D36C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP505_OFFSET UNITYSDK_OFFSET(0xF7D39F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP506_OFFSET UNITYSDK_OFFSET(0xF7D3DB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP507_OFFSET UNITYSDK_OFFSET(0xF7D4170)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP508_OFFSET UNITYSDK_OFFSET(0xF7D4450)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP509_OFFSET UNITYSDK_OFFSET(0xF7D4680)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP50_OFFSET UNITYSDK_OFFSET(0xF784EF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP510_OFFSET UNITYSDK_OFFSET(0xF7D49A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP511_OFFSET UNITYSDK_OFFSET(0xF7D4C80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP512_OFFSET UNITYSDK_OFFSET(0xF7D4EB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP513_OFFSET UNITYSDK_OFFSET(0xF7D51D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP514_OFFSET UNITYSDK_OFFSET(0xF7D54B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP515_OFFSET UNITYSDK_OFFSET(0xF7D56E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP516_OFFSET UNITYSDK_OFFSET(0xF7D5A00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP517_OFFSET UNITYSDK_OFFSET(0xF7D5C30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP518_OFFSET UNITYSDK_OFFSET(0xF7D5E60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP519_OFFSET UNITYSDK_OFFSET(0xF7D6140)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP51_OFFSET UNITYSDK_OFFSET(0xF785200)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP520_OFFSET UNITYSDK_OFFSET(0xF7D6370)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP521_OFFSET UNITYSDK_OFFSET(0xF7D6690)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP522_OFFSET UNITYSDK_OFFSET(0xF7D6970)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP523_OFFSET UNITYSDK_OFFSET(0xF7D6BA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP524_OFFSET UNITYSDK_OFFSET(0xF7D6EC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP525_OFFSET UNITYSDK_OFFSET(0xF7D71A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP526_OFFSET UNITYSDK_OFFSET(0xF7D73D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP527_OFFSET UNITYSDK_OFFSET(0xF7D76F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP528_OFFSET UNITYSDK_OFFSET(0xF7D79D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP529_OFFSET UNITYSDK_OFFSET(0xF7D7C00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP52_OFFSET UNITYSDK_OFFSET(0xF7854A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP530_OFFSET UNITYSDK_OFFSET(0xF7D7F20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP531_OFFSET UNITYSDK_OFFSET(0xF7D81C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP532_OFFSET UNITYSDK_OFFSET(0xF7D84A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP533_OFFSET UNITYSDK_OFFSET(0xF7D88D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP534_OFFSET UNITYSDK_OFFSET(0xF7D8BF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP535_OFFSET UNITYSDK_OFFSET(0xF7D8ED0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP536_OFFSET UNITYSDK_OFFSET(0xF7D9100)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP537_OFFSET UNITYSDK_OFFSET(0xF7D9420)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP538_OFFSET UNITYSDK_OFFSET(0xF7D9700)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP539_OFFSET UNITYSDK_OFFSET(0xF7D9930)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP53_OFFSET UNITYSDK_OFFSET(0xF7857D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP540_OFFSET UNITYSDK_OFFSET(0xF7D9C50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP541_OFFSET UNITYSDK_OFFSET(0xF7D9F30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP542_OFFSET UNITYSDK_OFFSET(0xF7DA160)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP543_OFFSET UNITYSDK_OFFSET(0xF7DA480)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP544_OFFSET UNITYSDK_OFFSET(0xF7DA980)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP545_OFFSET UNITYSDK_OFFSET(0xF7DABD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP546_OFFSET UNITYSDK_OFFSET(0xF7DAE00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP547_OFFSET UNITYSDK_OFFSET(0xF7DB140)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP548_OFFSET UNITYSDK_OFFSET(0xF7DB470)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP549_OFFSET UNITYSDK_OFFSET(0xF7DB750)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP54_OFFSET UNITYSDK_OFFSET(0xF785B70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP550_OFFSET UNITYSDK_OFFSET(0xF7DB980)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP551_OFFSET UNITYSDK_OFFSET(0xF7DBCA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP552_OFFSET UNITYSDK_OFFSET(0xF7DBF80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP553_OFFSET UNITYSDK_OFFSET(0xF7DC1B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP554_OFFSET UNITYSDK_OFFSET(0xF7DC4D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP555_OFFSET UNITYSDK_OFFSET(0xF7DC7F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP556_OFFSET UNITYSDK_OFFSET(0xF7DCAD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP557_OFFSET UNITYSDK_OFFSET(0xF7DCD00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP558_OFFSET UNITYSDK_OFFSET(0xF7DD020)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP559_OFFSET UNITYSDK_OFFSET(0xF7DD3B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP55_OFFSET UNITYSDK_OFFSET(0xF785EB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP560_OFFSET UNITYSDK_OFFSET(0xF7DD690)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP561_OFFSET UNITYSDK_OFFSET(0xF7DD8C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP562_OFFSET UNITYSDK_OFFSET(0xF7DDBE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP563_OFFSET UNITYSDK_OFFSET(0xF7DDEC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP564_OFFSET UNITYSDK_OFFSET(0xF7DE0F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP565_OFFSET UNITYSDK_OFFSET(0xF7DE410)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP566_OFFSET UNITYSDK_OFFSET(0xF7DE6F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP567_OFFSET UNITYSDK_OFFSET(0xF7DE920)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP568_OFFSET UNITYSDK_OFFSET(0xF7DEC40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP569_OFFSET UNITYSDK_OFFSET(0xF7DEF20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP56_OFFSET UNITYSDK_OFFSET(0xF786150)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP570_OFFSET UNITYSDK_OFFSET(0xF7DF150)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP571_OFFSET UNITYSDK_OFFSET(0xF7DF470)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP572_OFFSET UNITYSDK_OFFSET(0xF7DF6C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP573_OFFSET UNITYSDK_OFFSET(0xF7DF910)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP574_OFFSET UNITYSDK_OFFSET(0xF7DFB60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP575_OFFSET UNITYSDK_OFFSET(0xF7DFDB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP576_OFFSET UNITYSDK_OFFSET(0xF7E0000)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP577_OFFSET UNITYSDK_OFFSET(0xF7E0250)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP578_OFFSET UNITYSDK_OFFSET(0xF7E04A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP579_OFFSET UNITYSDK_OFFSET(0xF7E06F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP57_OFFSET UNITYSDK_OFFSET(0xF786380)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP580_OFFSET UNITYSDK_OFFSET(0xF7E0940)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP581_OFFSET UNITYSDK_OFFSET(0xF7E0B90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP582_OFFSET UNITYSDK_OFFSET(0xF7E0DE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP583_OFFSET UNITYSDK_OFFSET(0xF7E1030)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP584_OFFSET UNITYSDK_OFFSET(0xF7E1280)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP585_OFFSET UNITYSDK_OFFSET(0xF7E14D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP586_OFFSET UNITYSDK_OFFSET(0xF7E1720)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP587_OFFSET UNITYSDK_OFFSET(0xF7E1970)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP588_OFFSET UNITYSDK_OFFSET(0xF7E1BC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP589_OFFSET UNITYSDK_OFFSET(0xF7E1E10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP58_OFFSET UNITYSDK_OFFSET(0xF786620)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP590_OFFSET UNITYSDK_OFFSET(0xF7E2040)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP591_OFFSET UNITYSDK_OFFSET(0xF7E23A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP592_OFFSET UNITYSDK_OFFSET(0xF7E26E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP593_OFFSET UNITYSDK_OFFSET(0xF7E2A20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP594_OFFSET UNITYSDK_OFFSET(0xF7E2D00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP595_OFFSET UNITYSDK_OFFSET(0xF7E2F30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP596_OFFSET UNITYSDK_OFFSET(0xF7E3250)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP597_OFFSET UNITYSDK_OFFSET(0xF7E3530)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP598_OFFSET UNITYSDK_OFFSET(0xF7E3760)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP599_OFFSET UNITYSDK_OFFSET(0xF7E3A80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP59_OFFSET UNITYSDK_OFFSET(0xF786850)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP5_OFFSET UNITYSDK_OFFSET(0xF77C580)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP600_OFFSET UNITYSDK_OFFSET(0xF7E3E70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP601_OFFSET UNITYSDK_OFFSET(0xF7E40A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP602_OFFSET UNITYSDK_OFFSET(0xF7E4380)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP603_OFFSET UNITYSDK_OFFSET(0xF7E45B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP604_OFFSET UNITYSDK_OFFSET(0xF7E48D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP605_OFFSET UNITYSDK_OFFSET(0xF7E4BB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP606_OFFSET UNITYSDK_OFFSET(0xF7E4DE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP607_OFFSET UNITYSDK_OFFSET(0xF7E5100)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP608_OFFSET UNITYSDK_OFFSET(0xF7E53E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP609_OFFSET UNITYSDK_OFFSET(0xF7E5610)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP60_OFFSET UNITYSDK_OFFSET(0xF786AF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP610_OFFSET UNITYSDK_OFFSET(0xF7E5930)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP611_OFFSET UNITYSDK_OFFSET(0xF7E5B60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP612_OFFSET UNITYSDK_OFFSET(0xF7E5EC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP613_OFFSET UNITYSDK_OFFSET(0xF7E6200)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP614_OFFSET UNITYSDK_OFFSET(0xF7E6540)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP615_OFFSET UNITYSDK_OFFSET(0xF7E6800)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP616_OFFSET UNITYSDK_OFFSET(0xF7E6A30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP617_OFFSET UNITYSDK_OFFSET(0xF7E6D50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP618_OFFSET UNITYSDK_OFFSET(0xF7E7030)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP619_OFFSET UNITYSDK_OFFSET(0xF7E7260)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP61_OFFSET UNITYSDK_OFFSET(0xF786DA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP620_OFFSET UNITYSDK_OFFSET(0xF7E7580)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP621_OFFSET UNITYSDK_OFFSET(0xF7E7860)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP622_OFFSET UNITYSDK_OFFSET(0xF7E7A90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP623_OFFSET UNITYSDK_OFFSET(0xF7E7DB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP624_OFFSET UNITYSDK_OFFSET(0xF7E7FE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP625_OFFSET UNITYSDK_OFFSET(0xF7E8310)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP626_OFFSET UNITYSDK_OFFSET(0xF7E8650)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP627_OFFSET UNITYSDK_OFFSET(0xF7E8990)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP628_OFFSET UNITYSDK_OFFSET(0xF7E8C70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP629_OFFSET UNITYSDK_OFFSET(0xF7E8EA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP62_OFFSET UNITYSDK_OFFSET(0xF787000)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP630_OFFSET UNITYSDK_OFFSET(0xF7E91C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP631_OFFSET UNITYSDK_OFFSET(0xF7E94A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP632_OFFSET UNITYSDK_OFFSET(0xF7E96D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP633_OFFSET UNITYSDK_OFFSET(0xF7E99F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP634_OFFSET UNITYSDK_OFFSET(0xF7E9CD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP635_OFFSET UNITYSDK_OFFSET(0xF7E9F00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP636_OFFSET UNITYSDK_OFFSET(0xF7EA220)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP637_OFFSET UNITYSDK_OFFSET(0xF7EA500)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP638_OFFSET UNITYSDK_OFFSET(0xF7EA730)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP639_OFFSET UNITYSDK_OFFSET(0xF7EAA50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP63_OFFSET UNITYSDK_OFFSET(0xF787230)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP640_OFFSET UNITYSDK_OFFSET(0xF7EAD60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP641_OFFSET UNITYSDK_OFFSET(0xF7EAFC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP642_OFFSET UNITYSDK_OFFSET(0xF7EB360)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP643_OFFSET UNITYSDK_OFFSET(0xF7EB640)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP644_OFFSET UNITYSDK_OFFSET(0xF7EB870)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP645_OFFSET UNITYSDK_OFFSET(0xF7EBB90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP646_OFFSET UNITYSDK_OFFSET(0xF7EBE70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP647_OFFSET UNITYSDK_OFFSET(0xF7EC0A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP648_OFFSET UNITYSDK_OFFSET(0xF7EC3C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP649_OFFSET UNITYSDK_OFFSET(0xF7EC660)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP64_OFFSET UNITYSDK_OFFSET(0xF787510)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP650_OFFSET UNITYSDK_OFFSET(0xF7EC940)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP651_OFFSET UNITYSDK_OFFSET(0xF7ECB70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP652_OFFSET UNITYSDK_OFFSET(0xF7ECE90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP653_OFFSET UNITYSDK_OFFSET(0xF7ED170)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP654_OFFSET UNITYSDK_OFFSET(0xF7ED3A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP655_OFFSET UNITYSDK_OFFSET(0xF7ED6C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP656_OFFSET UNITYSDK_OFFSET(0xF7ED9A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP657_OFFSET UNITYSDK_OFFSET(0xF7EDBD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP658_OFFSET UNITYSDK_OFFSET(0xF7EDEF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP659_OFFSET UNITYSDK_OFFSET(0xF7EE1D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP65_OFFSET UNITYSDK_OFFSET(0xF787780)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP660_OFFSET UNITYSDK_OFFSET(0xF7EE400)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP661_OFFSET UNITYSDK_OFFSET(0xF7EE720)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP662_OFFSET UNITYSDK_OFFSET(0xF7EEA00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP663_OFFSET UNITYSDK_OFFSET(0xF7EEC30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP664_OFFSET UNITYSDK_OFFSET(0xF7EEF50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP665_OFFSET UNITYSDK_OFFSET(0xF7EF230)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP666_OFFSET UNITYSDK_OFFSET(0xF7EF460)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP667_OFFSET UNITYSDK_OFFSET(0xF7EF780)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP668_OFFSET UNITYSDK_OFFSET(0xF7EFA60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP669_OFFSET UNITYSDK_OFFSET(0xF7EFC90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP66_OFFSET UNITYSDK_OFFSET(0xF7879E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP670_OFFSET UNITYSDK_OFFSET(0xF7EFFB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP671_OFFSET UNITYSDK_OFFSET(0xF7F0290)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP672_OFFSET UNITYSDK_OFFSET(0xF7F04C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP673_OFFSET UNITYSDK_OFFSET(0xF7F07E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP674_OFFSET UNITYSDK_OFFSET(0xF7F0AC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP675_OFFSET UNITYSDK_OFFSET(0xF7F0CF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP676_OFFSET UNITYSDK_OFFSET(0xF7F1010)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP677_OFFSET UNITYSDK_OFFSET(0xF7F12F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP678_OFFSET UNITYSDK_OFFSET(0xF7F1520)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP679_OFFSET UNITYSDK_OFFSET(0xF7F1840)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP67_OFFSET UNITYSDK_OFFSET(0xF787C50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP680_OFFSET UNITYSDK_OFFSET(0xF7F1B20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP681_OFFSET UNITYSDK_OFFSET(0xF7F1D50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP682_OFFSET UNITYSDK_OFFSET(0xF7F2070)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP683_OFFSET UNITYSDK_OFFSET(0xF7F2350)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP684_OFFSET UNITYSDK_OFFSET(0xF7F2580)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP685_OFFSET UNITYSDK_OFFSET(0xF7F28A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP686_OFFSET UNITYSDK_OFFSET(0xF7F2B80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP687_OFFSET UNITYSDK_OFFSET(0xF7F2DB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP688_OFFSET UNITYSDK_OFFSET(0xF7F30D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP689_OFFSET UNITYSDK_OFFSET(0xF7F33B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP68_OFFSET UNITYSDK_OFFSET(0xF787F10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP690_OFFSET UNITYSDK_OFFSET(0xF7F35E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP691_OFFSET UNITYSDK_OFFSET(0xF7F3900)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP692_OFFSET UNITYSDK_OFFSET(0xF7F3B30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP693_OFFSET UNITYSDK_OFFSET(0xF7F3D60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP694_OFFSET UNITYSDK_OFFSET(0xF7F4040)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP695_OFFSET UNITYSDK_OFFSET(0xF7F4320)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP696_OFFSET UNITYSDK_OFFSET(0xF7F4570)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP697_OFFSET UNITYSDK_OFFSET(0xF7F47C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP698_OFFSET UNITYSDK_OFFSET(0xF7F4AA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP699_OFFSET UNITYSDK_OFFSET(0xF7F4CD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP69_OFFSET UNITYSDK_OFFSET(0xF7881D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP6_OFFSET UNITYSDK_OFFSET(0xF77C7F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP700_OFFSET UNITYSDK_OFFSET(0xF7F4FF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP701_OFFSET UNITYSDK_OFFSET(0xF7F5390)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP702_OFFSET UNITYSDK_OFFSET(0xF7F5670)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP703_OFFSET UNITYSDK_OFFSET(0xF7F58A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP704_OFFSET UNITYSDK_OFFSET(0xF7F5BC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP705_OFFSET UNITYSDK_OFFSET(0xF7F5EA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP706_OFFSET UNITYSDK_OFFSET(0xF7F60D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP707_OFFSET UNITYSDK_OFFSET(0xF7F63F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP708_OFFSET UNITYSDK_OFFSET(0xF7F66D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP709_OFFSET UNITYSDK_OFFSET(0xF7F6900)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP70_OFFSET UNITYSDK_OFFSET(0xF788500)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP710_OFFSET UNITYSDK_OFFSET(0xF7F6C20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP711_OFFSET UNITYSDK_OFFSET(0xF7F6F00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP712_OFFSET UNITYSDK_OFFSET(0xF7F7130)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP713_OFFSET UNITYSDK_OFFSET(0xF7F7450)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP714_OFFSET UNITYSDK_OFFSET(0xF7F7730)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP715_OFFSET UNITYSDK_OFFSET(0xF7F7960)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP716_OFFSET UNITYSDK_OFFSET(0xF7F7C80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP717_OFFSET UNITYSDK_OFFSET(0xF7F7F00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP718_OFFSET UNITYSDK_OFFSET(0xF7F8210)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP719_OFFSET UNITYSDK_OFFSET(0xF7F85A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP71_OFFSET UNITYSDK_OFFSET(0xF788870)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP720_OFFSET UNITYSDK_OFFSET(0xF7F8930)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP721_OFFSET UNITYSDK_OFFSET(0xF7F8C10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP722_OFFSET UNITYSDK_OFFSET(0xF7F8E40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP723_OFFSET UNITYSDK_OFFSET(0xF7F9160)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP724_OFFSET UNITYSDK_OFFSET(0xF7F9390)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP725_OFFSET UNITYSDK_OFFSET(0xF7F9670)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP726_OFFSET UNITYSDK_OFFSET(0xF7F98A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP727_OFFSET UNITYSDK_OFFSET(0xF7F9BC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP728_OFFSET UNITYSDK_OFFSET(0xF7FA0C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP729_OFFSET UNITYSDK_OFFSET(0xF7FA3A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP72_OFFSET UNITYSDK_OFFSET(0xF788AD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP730_OFFSET UNITYSDK_OFFSET(0xF7FA5D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP731_OFFSET UNITYSDK_OFFSET(0xF7FA8F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP732_OFFSET UNITYSDK_OFFSET(0xF7FABD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP733_OFFSET UNITYSDK_OFFSET(0xF7FAE00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP734_OFFSET UNITYSDK_OFFSET(0xF7FB120)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP735_OFFSET UNITYSDK_OFFSET(0xF7FB350)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP736_OFFSET UNITYSDK_OFFSET(0xF7FB670)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP737_OFFSET UNITYSDK_OFFSET(0xF7FB950)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP738_OFFSET UNITYSDK_OFFSET(0xF7FBB80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP739_OFFSET UNITYSDK_OFFSET(0xF7FBEA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP73_OFFSET UNITYSDK_OFFSET(0xF788D00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP740_OFFSET UNITYSDK_OFFSET(0xF7FC180)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP741_OFFSET UNITYSDK_OFFSET(0xF7FC3B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP742_OFFSET UNITYSDK_OFFSET(0xF7FC6D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP743_OFFSET UNITYSDK_OFFSET(0xF7FC9E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP744_OFFSET UNITYSDK_OFFSET(0xF7FCD80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP745_OFFSET UNITYSDK_OFFSET(0xF7FD060)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP746_OFFSET UNITYSDK_OFFSET(0xF7FD290)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP747_OFFSET UNITYSDK_OFFSET(0xF7FD5B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP748_OFFSET UNITYSDK_OFFSET(0xF7FD900)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP749_OFFSET UNITYSDK_OFFSET(0xF7FDBA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP74_OFFSET UNITYSDK_OFFSET(0xF789020)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP750_OFFSET UNITYSDK_OFFSET(0xF7FDF80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP751_OFFSET UNITYSDK_OFFSET(0xF7FE1B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP752_OFFSET UNITYSDK_OFFSET(0xF7FE4E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP753_OFFSET UNITYSDK_OFFSET(0xF7FE820)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP754_OFFSET UNITYSDK_OFFSET(0xF7FEB60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP755_OFFSET UNITYSDK_OFFSET(0xF7FEE40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP756_OFFSET UNITYSDK_OFFSET(0xF7FF070)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP757_OFFSET UNITYSDK_OFFSET(0xF7FF390)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP758_OFFSET UNITYSDK_OFFSET(0xF7FF5C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP759_OFFSET UNITYSDK_OFFSET(0xF7FF7F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP75_OFFSET UNITYSDK_OFFSET(0xF7892C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP760_OFFSET UNITYSDK_OFFSET(0xF7FFA20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP761_OFFSET UNITYSDK_OFFSET(0xF7FFC50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP762_OFFSET UNITYSDK_OFFSET(0xF7FFF30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP763_OFFSET UNITYSDK_OFFSET(0xF800160)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP764_OFFSET UNITYSDK_OFFSET(0xF800480)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP765_OFFSET UNITYSDK_OFFSET(0xF800900)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP766_OFFSET UNITYSDK_OFFSET(0xF800BE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP767_OFFSET UNITYSDK_OFFSET(0xF800E10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP768_OFFSET UNITYSDK_OFFSET(0xF801130)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP769_OFFSET UNITYSDK_OFFSET(0xF801410)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP76_OFFSET UNITYSDK_OFFSET(0xF7894F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP770_OFFSET UNITYSDK_OFFSET(0xF801640)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP771_OFFSET UNITYSDK_OFFSET(0xF801960)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP772_OFFSET UNITYSDK_OFFSET(0xF801C40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP773_OFFSET UNITYSDK_OFFSET(0xF801E70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP774_OFFSET UNITYSDK_OFFSET(0xF802190)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP775_OFFSET UNITYSDK_OFFSET(0xF8023C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP776_OFFSET UNITYSDK_OFFSET(0xF8025F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP777_OFFSET UNITYSDK_OFFSET(0xF802920)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP778_OFFSET UNITYSDK_OFFSET(0xF802C60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP779_OFFSET UNITYSDK_OFFSET(0xF802FA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP77_OFFSET UNITYSDK_OFFSET(0xF789790)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP780_OFFSET UNITYSDK_OFFSET(0xF8032D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP781_OFFSET UNITYSDK_OFFSET(0xF803610)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP782_OFFSET UNITYSDK_OFFSET(0xF803950)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP783_OFFSET UNITYSDK_OFFSET(0xF803C30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP784_OFFSET UNITYSDK_OFFSET(0xF803E60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP785_OFFSET UNITYSDK_OFFSET(0xF804180)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP786_OFFSET UNITYSDK_OFFSET(0xF804480)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP787_OFFSET UNITYSDK_OFFSET(0xF804760)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP788_OFFSET UNITYSDK_OFFSET(0xF804990)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP789_OFFSET UNITYSDK_OFFSET(0xF804CB0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP78_OFFSET UNITYSDK_OFFSET(0xF789A90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP790_OFFSET UNITYSDK_OFFSET(0xF804F90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP791_OFFSET UNITYSDK_OFFSET(0xF8051C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP792_OFFSET UNITYSDK_OFFSET(0xF8054E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP793_OFFSET UNITYSDK_OFFSET(0xF8057C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP794_OFFSET UNITYSDK_OFFSET(0xF8059F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP795_OFFSET UNITYSDK_OFFSET(0xF805D10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP796_OFFSET UNITYSDK_OFFSET(0xF805FF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP797_OFFSET UNITYSDK_OFFSET(0xF806220)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP798_OFFSET UNITYSDK_OFFSET(0xF806540)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP799_OFFSET UNITYSDK_OFFSET(0xF806820)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP79_OFFSET UNITYSDK_OFFSET(0xF789E20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP7_OFFSET UNITYSDK_OFFSET(0xF77CA70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP800_OFFSET UNITYSDK_OFFSET(0xF806A50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP801_OFFSET UNITYSDK_OFFSET(0xF806D70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP802_OFFSET UNITYSDK_OFFSET(0xF806FA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP803_OFFSET UNITYSDK_OFFSET(0xF807300)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP804_OFFSET UNITYSDK_OFFSET(0xF807640)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP805_OFFSET UNITYSDK_OFFSET(0xF807980)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP806_OFFSET UNITYSDK_OFFSET(0xF807C60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP807_OFFSET UNITYSDK_OFFSET(0xF807E90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP808_OFFSET UNITYSDK_OFFSET(0xF8081B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP809_OFFSET UNITYSDK_OFFSET(0xF808490)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP80_OFFSET UNITYSDK_OFFSET(0xF78A050)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP810_OFFSET UNITYSDK_OFFSET(0xF8086C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP811_OFFSET UNITYSDK_OFFSET(0xF8089E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP812_OFFSET UNITYSDK_OFFSET(0xF808C10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP813_OFFSET UNITYSDK_OFFSET(0xF808F40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP814_OFFSET UNITYSDK_OFFSET(0xF809280)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP815_OFFSET UNITYSDK_OFFSET(0xF8095C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP816_OFFSET UNITYSDK_OFFSET(0xF809880)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP817_OFFSET UNITYSDK_OFFSET(0xF809B60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP818_OFFSET UNITYSDK_OFFSET(0xF809D90)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP819_OFFSET UNITYSDK_OFFSET(0xF80A0B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP81_OFFSET UNITYSDK_OFFSET(0xF78A280)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP820_OFFSET UNITYSDK_OFFSET(0xF80A390)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP821_OFFSET UNITYSDK_OFFSET(0xF80A5C0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP822_OFFSET UNITYSDK_OFFSET(0xF80A8E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP823_OFFSET UNITYSDK_OFFSET(0xF80ABC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP824_OFFSET UNITYSDK_OFFSET(0xF80ADF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP825_OFFSET UNITYSDK_OFFSET(0xF80B110)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP826_OFFSET UNITYSDK_OFFSET(0xF80B3F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP827_OFFSET UNITYSDK_OFFSET(0xF80B620)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP828_OFFSET UNITYSDK_OFFSET(0xF80B940)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP829_OFFSET UNITYSDK_OFFSET(0xF80BC20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP82_OFFSET UNITYSDK_OFFSET(0xF78A4B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP830_OFFSET UNITYSDK_OFFSET(0xF80BE50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP831_OFFSET UNITYSDK_OFFSET(0xF80C170)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP832_OFFSET UNITYSDK_OFFSET(0xF80C450)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP833_OFFSET UNITYSDK_OFFSET(0xF80C680)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP834_OFFSET UNITYSDK_OFFSET(0xF80C9A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP835_OFFSET UNITYSDK_OFFSET(0xF80CC40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP836_OFFSET UNITYSDK_OFFSET(0xF80CF20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP837_OFFSET UNITYSDK_OFFSET(0xF80D150)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP838_OFFSET UNITYSDK_OFFSET(0xF80D470)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP839_OFFSET UNITYSDK_OFFSET(0xF80D750)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP83_OFFSET UNITYSDK_OFFSET(0xF78A840)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP840_OFFSET UNITYSDK_OFFSET(0xF80D980)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP841_OFFSET UNITYSDK_OFFSET(0xF80DCA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP842_OFFSET UNITYSDK_OFFSET(0xF80DF80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP843_OFFSET UNITYSDK_OFFSET(0xF80E1B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP844_OFFSET UNITYSDK_OFFSET(0xF80E4D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP845_OFFSET UNITYSDK_OFFSET(0xF80E7B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP846_OFFSET UNITYSDK_OFFSET(0xF80E9E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP847_OFFSET UNITYSDK_OFFSET(0xF80ED00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP848_OFFSET UNITYSDK_OFFSET(0xF80EFE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP849_OFFSET UNITYSDK_OFFSET(0xF80F210)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP84_OFFSET UNITYSDK_OFFSET(0xF78ABD0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP850_OFFSET UNITYSDK_OFFSET(0xF80F530)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP851_OFFSET UNITYSDK_OFFSET(0xF80F820)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP852_OFFSET UNITYSDK_OFFSET(0xF80FB00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP853_OFFSET UNITYSDK_OFFSET(0xF80FD30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP854_OFFSET UNITYSDK_OFFSET(0xF810050)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP855_OFFSET UNITYSDK_OFFSET(0xF810310)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP856_OFFSET UNITYSDK_OFFSET(0xF8105F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP857_OFFSET UNITYSDK_OFFSET(0xF810820)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP858_OFFSET UNITYSDK_OFFSET(0xF810B40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP859_OFFSET UNITYSDK_OFFSET(0xF810D70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP85_OFFSET UNITYSDK_OFFSET(0xF78AE20)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP860_OFFSET UNITYSDK_OFFSET(0xF8110D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP861_OFFSET UNITYSDK_OFFSET(0xF811410)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP862_OFFSET UNITYSDK_OFFSET(0xF811750)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP863_OFFSET UNITYSDK_OFFSET(0xF811A30)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP864_OFFSET UNITYSDK_OFFSET(0xF811C60)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP865_OFFSET UNITYSDK_OFFSET(0xF811F80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP866_OFFSET UNITYSDK_OFFSET(0xF8122A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP867_OFFSET UNITYSDK_OFFSET(0xF8126D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP868_OFFSET UNITYSDK_OFFSET(0xF812900)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP869_OFFSET UNITYSDK_OFFSET(0xF812BE0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP86_OFFSET UNITYSDK_OFFSET(0xF78B150)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP870_OFFSET UNITYSDK_OFFSET(0xF812E10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP871_OFFSET UNITYSDK_OFFSET(0xF813090)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP872_OFFSET UNITYSDK_OFFSET(0xF813310)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP873_OFFSET UNITYSDK_OFFSET(0xF813540)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP874_OFFSET UNITYSDK_OFFSET(0xF813770)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP875_OFFSET UNITYSDK_OFFSET(0xF8139A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP876_OFFSET UNITYSDK_OFFSET(0xF813CC0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP877_OFFSET UNITYSDK_OFFSET(0xF813FA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP878_OFFSET UNITYSDK_OFFSET(0xF8142F0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP879_OFFSET UNITYSDK_OFFSET(0xF814520)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP87_OFFSET UNITYSDK_OFFSET(0xF78B4E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP880_OFFSET UNITYSDK_OFFSET(0xF8147E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP881_OFFSET UNITYSDK_OFFSET(0xF814A10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP882_OFFSET UNITYSDK_OFFSET(0xF814D50)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP883_OFFSET UNITYSDK_OFFSET(0xF814F80)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP884_OFFSET UNITYSDK_OFFSET(0xF8152B0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP885_OFFSET UNITYSDK_OFFSET(0xF8154E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP886_OFFSET UNITYSDK_OFFSET(0xF815730)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP887_OFFSET UNITYSDK_OFFSET(0xF8159D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP88_OFFSET UNITYSDK_OFFSET(0xF78B780)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP89_OFFSET UNITYSDK_OFFSET(0xF78BB10)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP8_OFFSET UNITYSDK_OFFSET(0xF77CCF0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP90_OFFSET UNITYSDK_OFFSET(0xF78BEA0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP91_OFFSET UNITYSDK_OFFSET(0xF78C2A0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP92_OFFSET UNITYSDK_OFFSET(0xF78C4D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP93_OFFSET UNITYSDK_OFFSET(0xF78C8D0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP94_OFFSET UNITYSDK_OFFSET(0xF78CB70)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP95_OFFSET UNITYSDK_OFFSET(0xF78CF00)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP96_OFFSET UNITYSDK_OFFSET(0xF78D290)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP97_OFFSET UNITYSDK_OFFSET(0xF78D4E0)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP98_OFFSET UNITYSDK_OFFSET(0xF78D710)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP99_OFFSET UNITYSDK_OFFSET(0xF78DA40)
#define XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP9_OFFSET UNITYSDK_OFFSET(0xF77CF80)

namespace XLua
{
	inline static constexpr unsigned int DelegateBridge_TypeDefinitionIndex = 39403;

	class DelegateBridge : public ::XLua::DelegateBridgeBase
	{
	public:
		static ::RPG::Client::RPGProfilerMarker** StaticGet_LuaSystemMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x47170);
		}
		static ::Il2CppArray<::XLua::DelegateBridge*>** StaticGet_DelegateBridgeList()
		{
			return (::Il2CppArray<::XLua::DelegateBridge*>**)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x47178);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_AssistData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10C10);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightPortalData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10C18);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_uint_uint_RPG_Client_GridFightEnemyDifficultyLvConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10C20);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_XLua_LuaTable_uint_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10C28);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_PlanetFesTradingCardOfferItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10C30);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_PlayerBoardInfo_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10C38);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_EvolveBuildGearEquipInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10C40);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_DiceCombat_DiceCombatCollectionCardInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10C48);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_StageMonsterRewardItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10C50);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_SubMissionData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10C58);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_GameObject_RPG_Client_OpenWorld_StreamingItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10C60);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10C68);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_RogueDLCMainStoryRewardRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10C70);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_MonsterExcelTable_IndexKey_RPG_GameCore_MonsterRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10C78);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_EvolveBuildScMixData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10C80);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_DiceCombat_DiceCombatCollectionCardInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10C88);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_LittleGame_Match3_Match3GameState()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10C90);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_SwordTrainingSkillData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10C98);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Events_UnityAction_UnityEngine_UI_Graphic()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10CA0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaActionNoRet2_string_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10CA8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_DiceCombatDiceConfigData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10CB0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_StatusExcelTable_IndexKey_RPG_GameCore_StatusRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10CB8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10CC0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_FateHandbookReijuItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10CC8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RogueNousDiceBranchDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10CD0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_HudType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10CD8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_RelicType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10CE0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_object()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10CE8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_IFateGameRoundSettleDmgSourceItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10CF0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_BattleEventExcelTable_IndexKey_RPG_GameCore_BattleEventRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10CF8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_uint_RPG_Client_GridFightTutorialStageConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10D00);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_PinchEndHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10D08);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_TarotBookReadReward()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10D10);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightOrbData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10D18);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_GameEntity()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10D20);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RogueNousDiceSurfaceDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10D28);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_LevelMinimapSection()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10D30);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_RenderTexture()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10D38);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_XLua_LuaTable_SuperScrollView_LoopListViewItem2_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10D40);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Collections_Generic_List_RPG_Client_ActivityHotData_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10D48);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_string_UnityEngine_Sprite()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10D50);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_RogueNousDiceBranchDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10D58);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_MainMissionSortedItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10D60);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_AssistData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10D68);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_Proto_StrongChallengeAvatar()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10D70);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RogueNousDiceSlotDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10D78);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_OnSceneOperationDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10D80);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_PlanetFesSkillPhase()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10D88);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_GridFightGridData_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10D90);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_PlayGoSample_IPSPlayGo_StartParam()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10D98);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_EventTriggerListener_VoidDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10DA0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_AkCallbackManager_MonitoringCallback()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10DA8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_AsyncCallback()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10DB0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RogueBuffData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10DB8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_ValueTuple_bool_Proto_FightGameMode_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10DC0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ParkourRank()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10DC8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Collections_Generic_List_RPG_Client_FriendRankingInfo_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10DD0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_SwordTraining_SwordTrainingCandidatePartnerAbilityData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10DD8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IPointerEnterHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10DE0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_EvolveBuildCard()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10DE8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_LightConeRecommendData_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10DF0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ChatReportReason()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10DF8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_LightConeRecommendData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10E00);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PunkLordData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10E08);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_int_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10E10);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_List_RPG_Client_GridFightMonsterData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10E18);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_FuncEntranceData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10E20);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_CustomRP_CaptureCb()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10E28);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_RPG_Client_ActivityAlley_AlleyPackComponent()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10E30);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_PlaneEventExcelTable_IndexKey_RPG_GameCore_PlaneEventRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10E38);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ElfRestaurantRecipeData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10E40);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_System_Collections_Generic_List_RPG_Client_GridFightRoleProperty()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10E48);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_AvatarEnhancedHint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10E50);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_EventTriggerListener_VoidBaseEventDataDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10E58);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_GameEntity_bool_string()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10E60);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightHandbookRole()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10E68);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_EnviromentSystem_EnviromentClip_OnEnvironmentClipLoadDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10E70);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightMonsterCampConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10E78);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightPresentEntity()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10E80);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_GameCore_BattleResultState_System_Collections_IEnumerator()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10E88);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_SimpleTapHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10E90);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ElfShopItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10E98);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_System_Collections_Generic_List_RPG_GameCore_BuffConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10EA0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_RogueMagicAreaDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10EA8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RelicRecommendData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10EB0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RelicSmartSuit_RelicSmartSuitCalculationResultData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10EB8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_TalkSentenceConfigExcelTable_IndexKey_RPG_GameCore_TalkSentenceConfigRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10EC0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_uint_RPG_Client_GridFightDivisionConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10EC8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IUpdateSelectedHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10ED0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_LuaUIController()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10ED8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_System_Collections_Generic_List_RPG_Client_GridFightMonsterData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10EE0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_UI_Graphic_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10EE8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_EvolveBuildGearEquipInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10EF0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_CompanionMissionActivityBannerData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10EF8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_int_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10F00);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_bool_string()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10F08);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_DragEnd2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10F10);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_UIFollow3DTarget_PostProcessDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10F18);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_DiceCombatDiceConfigData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10F20);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_AvatarData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10F28);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_FateHandbookHouguItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10F30);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_FightFestCoachSkill()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10F38);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TarotBookDeleteData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10F40);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_PerformanceIDPair()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10F48);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IBeginDragHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10F50);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_ValueTuple_bool_Proto_FightGameMode_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10F58);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_TeamBuild()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10F60);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_Spine_Unity_SkeletonGraphic_MeshAssignmentDelegateSingle()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10F68);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_uint_RPG_Client_GridFightItemConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10F70);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityPanelData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10F78);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_SwitchHandSaveData_RPG_Client_SwitchHandCustomData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10F80);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_int_XLua_LuaEnv_XLua_LuaBase()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10F88);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_DiceCombat_IDiceCombatAvatarInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10F90);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_FantasticStoryParagraphData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10F98);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_Prop_JigsawItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10FA0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_UnityEngine_EventSystems_RaycastResult()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10FA8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TarotBookInteraction()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10FB0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ChallengeGroupData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10FB8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightDivisionLevelReward()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10FC0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_WheelItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10FC8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_FantasticStoryChapterData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10FD0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_AdventurePlayerRow_AdventurePlayerCommonRowWrap()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10FD8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_Proto_MultiPathAvatarType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10FE0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PlanetFesMiniGameBingoRewardLevel()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10FE8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ScheduleData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10FF0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PSSessionData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x10FF8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_SwipeStart2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11000);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IPointerUpHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11008);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_FightFestPhase()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11010);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_CakeRaceBattleItemDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11018);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_RelicRecommendData_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11020);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GachaItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11028);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_AvatarEnhancedHint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11030);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IDragHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11038);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivitySummonStage()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11040);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_FantasticStoryChapterData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11048);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_BaseLobby_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11050);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_uint_RPG_Client_GridFightNPCConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11058);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction2_string_string_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11060);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_float()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11068);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_UnityEngine_Transform()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11070);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_LongTapEndHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11078);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IPointerExitHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11080);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_PlayGoSample_IPSPlayGo_AllChunkDownloadComplete()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11088);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_RoleTrialActivityData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11090);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_TouchUp2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11098);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_PlanetFesMiniGameBingoRewardLevel()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x110A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_UnityEngine_Texture_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x110A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_NavMap_MappingInfoNode()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x110B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_FateHandbookReijuItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x110B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_SettledPunkLordData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x110C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_Spine_AnimationState_TrackEntryDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x110C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_object_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x110D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction1_XLua_LuaTable_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x110D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_CakeRaceHandbookCatItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x110E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_AdventurePlayerRow_AdventurePlayerCommonRowWrap()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x110E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_List_RPG_Client_GridFightGameRefData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x110F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_System_Collections_Generic_List_RPG_Client_PopupMenuProxy_Option()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x110F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_System_ValueTuple_uint_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11100);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RelicItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11108);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_TextID()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11110);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_MissionCondition()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11118);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_RPG_Client_LightConeRecommendData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11120);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_MonsterSkillExcelTable_IndexKey_RPG_GameCore_MonsterSkillRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11128);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaActionNoRet2_XLua_LuaTable_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11130);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityPanelData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11138);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RogueMagicAreaDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11140);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_LevelMinimapSection()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11148);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_UIController_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11150);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_HipplenGameGradeType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11158);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_LightConeRecommendData_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11160);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_CustomButton_VoidDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11168);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_EvolveBuildCard()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11170);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_AdventurePlayerRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11178);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_LongTapStart2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11180);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_MonsterData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11188);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_uint_RPG_Client_GridFightEquipItemConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11190);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_CakeRaceBattleItemDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11198);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_BaseGachaPoolData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x111A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_RogueImageRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x111A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_TwistHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x111B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_GachaType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x111B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_UnityEngine_EventSystems_RaycastResult()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x111C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_uint_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x111C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Collections_Generic_List_RPG_GameCore_MissionCondition_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x111D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MonoSceneObjClickHint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x111D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x111E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_RPG_Client_Recommend_RelicRecommendBigData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x111E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_SuperDropDown_VoidDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x111F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_BaseGachaPoolData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x111F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_Proto_EnterFiveDimGameScRsp()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11200);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction1_string_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11208);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_XLua_LuaTable_SuperScrollView_LoopStaggeredGridView_int_SuperScrollView_LoopStaggeredGridViewItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11210);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Exception()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11218);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_WheelItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11220);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityHipplen_ActivityHipplenWorkData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11228);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GlobalDispatchData_ServerData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11230);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ClockParkCardItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11238);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_ConditionParam()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11240);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_LocalizedInputField_VoidDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11248);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_PerformanceIDPair()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11250);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_PlanetFesCardData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11258);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11260);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_DiceCombat_IDiceCombatAvatarInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11268);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_uint_System_Collections_Generic_List_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11270);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityHipplen_ActivityHipplenTraitData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11278);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MainMissionData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11280);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction2_string_int_XLua_LuaTable()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11288);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_Prop_JigsawItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11290);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_IRogueTournBuildRefDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11298);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_DiceCombat_DiceCombatCollectionCardInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x112A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_ulong()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x112A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_int_int_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x112B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PrefDictionary_string_string()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x112B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_object()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x112C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_TarotBookDeleteData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x112C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TarotBookCharacter()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x112D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_FantasticStoryParagraphData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x112D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_Proto_ItemCost()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x112E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_MessageItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x112E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TarotBookStory()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x112F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityHipplen_ActivityHipplenGiftData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x112F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ChallengeData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11300);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_LuaUIController_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11308);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityHotCoreRewardData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11310);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RogueMagicUnitDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11318);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_RogueImageRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11320);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction2_string_string_XLua_LuaTable()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11328);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_ulong()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11330);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_DrinkMakerCheersGroupData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11338);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_ItemExcelTable_IndexKey_RPG_GameCore_ItemRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11340);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_DragHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11348);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Events_UnityAction_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11350);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_RogueDLCAeonCrossRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11358);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_SpecialAvatarExcelTable_IndexKey_RPG_GameCore_SpecialAvatarRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11360);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_XLua_LuaTable_SuperScrollView_LoopFlexibleGridView_int_SuperScrollView_LoopFlexibleGridViewItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11368);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PayProductResult()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11370);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_BaseGachaGroupData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11378);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_IRogueTournBuildRefDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11380);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_RectTransform_ReapplyDrivenProperties()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11388);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightEquipItemConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11390);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_BookContentData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11398);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_PunkLordData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x113A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_AvatarPathData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x113A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_System_Collections_Generic_List_RPG_GameCore_BuffConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x113B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Events_UnityAction_string()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x113B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IPointerDownHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x113C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_RogueBuffRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x113C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Collections_Generic_List_RPG_Client_FriendRankingInfo_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x113D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_TriggerPerformanceEndParam()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x113D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_QuestData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x113E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RogueNousDiceSlotDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x113E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ElfRestaurantRecipeData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x113F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_SwipeEndHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x113F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_TouchDownHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11400);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_RogueNousAeonCrossRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11408);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction1_XLua_LuaTable_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11410);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_SubMissionData_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11418);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GachaItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11420);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MultipleDropData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11428);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_TarotBookCard()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11430);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_Spine_AnimationState_TrackEntryEventDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11438);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_GameEntity_RPG_GameCore_GameEntity_RPG_GameCore_AliveState()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11440);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_SwordTraining_SwordTrainingCandidatePartnerAbilityData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11448);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_RelicType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11450);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_Spine_Unity_SkeletonGraphic_SkeletonRendererDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11458);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_StageMonsterRewardItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11460);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Reflection_TypeFilter()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11468);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_XLua_LuaTable_SuperScrollView_LoopGridView_int_int_int_SuperScrollView_LoopGridViewItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11470);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightPortalData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11478);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_DoubleTap2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11480);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_BaseGameFlow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11488);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_EvolveBuildMixData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11490);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_GameEntity_RPG_GameCore_AliveState()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11498);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TarotBookClue()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x114A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_IAdventurePlayerCommonRowWrap()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x114A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_PlanetFesSkillPhase()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x114B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_Vector2Int_UnityEngine_Vector2Int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x114B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_ulong()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x114C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_TarotBookStory()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x114C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_UIFollow3DTarget()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x114D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_RogueNousAeonRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x114D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_ItemComefromRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x114E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_TarotBookCharacter()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x114E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_SuperScrollView_LoopListView2_SuperScrollView_LoopListViewItem2()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x114F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_ActivityFightGroupRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x114F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_ActivityFightGroupRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11500);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_AvatarData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11508);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_MainMissionData_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11510);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_Proto_MultiPathAvatarType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11518);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_RogueNousAeonCrossRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11520);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_QuestData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11528);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_UINavigation_UINavigationArea_FirstSelectableDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11530);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MapProp()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11538);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_EquipmentItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11540);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_DiceCombat_IDiceCombatAvatarInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11548);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Events_UnityAction_UnityEngine_EventSystems_PointerEventData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11550);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightOrbEntityData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11558);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RoleTrialActivityData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11560);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_ParticleSystem_OnParticleEmissionBeginEvent()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11568);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_string()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11570);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_ICancelHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11578);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_RogueDLCMainStoryRewardRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11580);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_Spine_Unity_MeshGeneratorDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11588);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_ValueTuple_bool_Proto_FightGameMode()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11590);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_Proto_StrongChallengeAvatar()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11598);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_SwordTrainingEndingDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x115A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_TurnBasedModifierInstance()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x115A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PrefHashSet_RPG_Client_ActivityModule_ActivityType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x115B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_Motions_MonoEffectMotion_VoidDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x115B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_List_RPG_Client_ActivityHotData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x115C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_Proto_ItemCost()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x115C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PlanetFesTradingCardApplyItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x115D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_CEBattlePresetConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x115D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_string_string_string()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x115E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivitySummonStage()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x115E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction1_string_XLua_LuaTable()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x115F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_SuperScrollView_OnRecycleChanged()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x115F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ChimeraDuelMasterData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11600);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_StageExcelTable_IndexKey_RPG_GameCore_StageRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11608);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_System_Collections_Generic_List_RPG_Client_ChessRogueSubMissionReplayDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11610);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MonoEffect_RPG_Client_TriggerEffectCallbackParams()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11618);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_SubMissionData_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11620);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_int_string_TMPro_TMP_FontAsset()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11628);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_OnAssetOperationDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11630);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_BaseGachaGroupData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11638);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TarotBookReadReward()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11640);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_MarblePVPRankConfigRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11648);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11650);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ChimeraDuelMasterData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11658);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PlanetFesTradingCardExchangeHistoryItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11660);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_PerformanceIDPair()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11668);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_DiceCombat_DiceCombatCollectionDiceInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11670);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_List_RPG_GameCore_MissionCondition()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11678);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_RelicType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11680);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_TrainParty_TrainPartyRecordGroup()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11688);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_MonoSceneObjClickHint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11690);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_GridFightRole_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11698);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_AlleyEventInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x116A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_UIController()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x116A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_SwordTrainingSkillData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x116B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_SwipeHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x116B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_GachaType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x116C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_ItemConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x116C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Reflection_AssemblyName_System_Reflection_Assembly()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x116D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_CakeRaceHandbookCatItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x116D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Application_AdvertisingIdentifierCallback()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x116E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TarotBookCard()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x116E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_UnityEngine_Vector2()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x116F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_AkCallbackManager_EventCallback()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x116F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_SimpleTap2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11700);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_PlanetFesTradingCardOfferItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11708);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_Proto_FiveDimGameTransferScRsp()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11710);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_TMPro_TMP_TextInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11718);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_FateHandbookHouguItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11720);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_XLua_LuaDLL_lua_CSFunction()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11728);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_TouchDown2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11730);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MatchPlayRecord()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11738);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Application_LowMemoryCallback()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11740);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_System_Collections_Generic_Dictionary_RPG_GameCore_AttackDamageType_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11748);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_PerformanceSkipOverrideExcelTable_IndexKey_RPG_GameCore_PerformanceSkipOverrideRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11750);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightAugment()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11758);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_MonsterData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11760);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightTrait()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11768);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_MainMissionSortedItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11770);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PrefDictionary_uint_System_Collections_Generic_List_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11778);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_RPG_Client_MainMissionData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11780);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_Playables_PlayableDirector()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11788);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_HudType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11790);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_IntPtr()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11798);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ItemDisplayData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x117A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_RPG_Client_RelicRecommendData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x117A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_UnityEngine_RenderTexture_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x117B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_NPCWarningTipConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x117B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_StaticListViewItem_UnityEngine_Vector2()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x117C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_CakeRaceHandbookCatItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x117C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_AetherDivideGymDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x117D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Collections_Generic_List_RPG_Client_ItemDisplayData_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x117D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PCResolution()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x117E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_string_string()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x117E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_Spine_Unity_SkeletonGraphic_MeshAssignmentDelegateMultiple()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x117F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_EvolveBuildScMixData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x117F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_RogueNousDiceSurfaceDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11800);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_OpenWorld_StreamingItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11808);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_SubMissionData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11810);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_MazeBuffData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11818);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_LongTapStartHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11820);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_List_RPG_Client_ChessRogueSubMissionReplayDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11828);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11830);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_string_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11838);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightHandbookRole()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11840);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_XLua_LuaTable_SuperScrollView_LoopListView2_int_SuperScrollView_LoopListViewItem2()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11848);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_UIEventHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11850);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Animator_OnAnimatorDispatchMovementJobFinishDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11858);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_BaseGachaGroupData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11860);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_DiceCombat_DiceCombatCollectionDiceInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11868);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_RPG_Client_ChessRogueBoardCellDataItem_RPG_Client_MonoRogueHexChessBoardItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11870);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_DrinkMakerCheersGroupData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11878);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_uint_RPG_Client_GridFightDivisionStageConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11880);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_ActivityFightGroupRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11888);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Collections_Generic_List_RPG_Client_SubMissionData_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11890);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_AvatarServantSkillExcelTable_IndexKey_RPG_GameCore_AvatarServantSkillRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11898);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_CompanionMissionActivityBannerData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x118A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_RPG_Client_PlanetFesToastItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x118A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_FateHandbookReijuItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x118B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_ulong_float()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x118B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightAugment()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x118C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_DiceCombat_DiceCombatCollectionDiceInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x118C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Application_LogCallback()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x118D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_PlayerBoardInfo_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x118D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_SuperScrollView_LoopListViewItem2()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x118E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MonoEffect()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x118E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_CEBattlePresetConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x118F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_NavMap_MappingInfoNode()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x118F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_List_RPG_Client_ItemDisplayData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11900);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_DiceCombat_DiceCombatGlossaryTermData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11908);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction1_string_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11910);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_MainMissionData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11918);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_TarotBookInteraction()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11920);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_uint_uint_RPG_PoolList_UnityEngine_Vector2Int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11928);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_uint_uint_RPG_Client_GridFightDivisionLevelConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11930);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightMonsterAffixConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11938);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_System_ValueTuple_bool_Proto_FightGameMode()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11940);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RogueNousDiceBranchDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11948);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_RPG_Client_PenaconyEndmostChronicleEvent()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11950);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_MazeBuffData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11958);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_List_RPG_Client_SubMissionData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11960);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_Spine_Unity_SkeletonGraphic_InstructionDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11968);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_AssistData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11970);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_IRogueTournBuildRefTeamMemberData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11978);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_Swipe2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11980);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RogueMagicAreaDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11988);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_AvatarPathData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11990);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_uint_float()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11998);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_RogueDLCAeonCrossRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x119A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_DrinkMakerCheersGuestCommentData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x119A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_TwistEndHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x119B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Reflection_Assembly_string_bool_System_Type()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x119B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ChallengeData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x119C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_DiceCombat_DiceCombatCommunicateData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x119C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightMonsterAffixConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x119D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_ItemComefromRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x119D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_Transform()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x119E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x119E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_DrinkMakerCheersBartendDrinkDataExtend()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x119F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightAugment()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x119F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightGameRefData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11A00);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_XLua_LuaTable_int_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11A08);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ChatReportReason()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11A10);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_AvatarSkillTreeExcelTable_IndexKey_RPG_GameCore_AvatarSkillTreeRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11A18);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RogueMagicScepterDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11A20);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightTrait()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11A28);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GlobalDispatchData_ServerData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11A30);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction2_string_uint_XLua_LuaTable()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11A38);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_System_Collections_Generic_List_RPG_Client_SubMissionData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11A40);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_UnityEngine_Transform_UnityEngine_GameObject()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11A48);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightRole()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11A50);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_FightActivityGroupInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11A58);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_PlanetFesThemeData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11A60);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_TarotBookInteraction()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11A68);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_GameEntity_RPG_GameCore_AliveState_RPG_GameCore_EntityReviveParamBase()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11A70);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Events_UnityAction_float()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11A78);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_RuntimeGroupManager_HoYoGroupUnit_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11A80);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_IModifierInstance()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11A88);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_uint_RPG_Client_GridFightConsumableItemConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11A90);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_MatchThreeBirdData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11A98);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_int_object()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11AA0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_TurnInsertAbilityInstance()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11AA8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_uint_RPG_Client_GridFightForgeConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11AB0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_int_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11AB8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_uint_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11AC0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Collections_Generic_List_RPG_Client_MainMissionData_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11AC8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_EvolveBuildScMixData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11AD0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_ItemConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11AD8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightPresentEntity()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11AE0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_IPlanetFesBuff()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11AE8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_DrinkMakerCheersGuestCommentData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11AF0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Collections_Generic_List_RPG_GameCore_MissionCondition_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11AF8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_OpenWorld_StreamingBlock()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11B00);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightDivisionLevelReward()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11B08);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PrefDictionary_string_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11B10);
		}
		static ::System::Boolean* StaticGet_Gen_Flag()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11B18);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Editor_MainMissionChain()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11B20);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_LongTapHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11B28);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Canvas_WillRenderCanvases()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11B30);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_Proto_FightActivityGroup()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11B38);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_PlanetFesThemeData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11B40);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityHotCoreRewardData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11B48);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_long_long()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11B50);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_LightConeZoom_UpdateFunc()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11B58);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_DrinkMakerCheersBartendDrinkDataExtend()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11B60);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_DiceCombat_DiceCombatRankLevelData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11B68);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_FantasticStoryParagraphData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11B70);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_System_ValueTuple_uint_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11B78);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightHandBookEquipItemConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11B80);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_PlanetFesTradingCardApplyItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11B88);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RoleTrialActivityData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11B90);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightRole()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11B98);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_DiceCombat_DiceCombatRankLevelData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11BA0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_HudType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11BA8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IDeselectHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11BB0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_FantasticStoryChapterData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11BB8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Events_UnityAction_UnityEngine_Vector2()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11BC0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_TouchUpHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11BC8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_RPG_Client_UIController()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11BD0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Events_UnityAction_UnityEngine_EventSystems_MoveDirection()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11BD8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11BE0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_RPG_Client_DiceCombat_IDiceCombatBattleEvent()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11BE8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_AvatarPathData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11BF0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_HipplenGameWaitEventTask_HipplenGameEventInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11BF8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_MessageItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11C00);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_ParseUrlCallBack()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11C08);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Events_UnityAction_UnityEngine_UI_Toggle_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11C10);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_TarotBookCard()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11C18);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_VirtualRankChimeraTeam_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11C20);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_EvolveBuildMixData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11C28);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_Proto_ItemCost()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11C30);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MapGroupDef()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11C38);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_RelicSmartSuit_RelicSmartSuitCalculationResultData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11C40);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_DrinkMakerCheersBartendDrinkDataExtend()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11C48);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_PlayGoSample_IPSPlayGo_ProgressParam()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11C50);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11C58);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_SwordTraining_SwordTrainingCandidatePartnerAbilityData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11C60);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_MapEntryRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11C68);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_RogueNousAeonCrossRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11C70);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_SwipeStartHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11C78);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_AdventureCharacterController()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11C80);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_RogueBuffRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11C88);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Collections_Generic_List_RPG_Client_ActivityHotData_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11C90);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_XLua_LuaTable_RPG_Client_SuperDropDown_UnityEngine_UI_Dropdown_DropdownItem_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11C98);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_int_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11CA0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_FightFestCoachSkill()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11CA8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_uint_string()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11CB0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_MainMissionData_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11CB8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TriggerEffectParams()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11CC0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_XLua_LuaTable_RPG_GameCore_ScreenTransferReason_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11CC8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_string()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11CD0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_DiceCombat_DiceCombatCommunicateData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11CD8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_IResidentActivityPanelData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11CE0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_PinchHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11CE8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_SuperScrollView_LoopGridView()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11CF0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RogueBuffData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11CF8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_Prop_JigsawItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11D00);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_RogueTournAreaDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11D08);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_Spine_Unity_UpdateBonesDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11D10);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_SubMissionData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11D18);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_Spine_Unity_ISkeletonAnimationDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11D20);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_DiceCombat_DiceCombatSpecialRuleGroupData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11D28);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_TarotBookClue()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11D30);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_Drag2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11D38);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_AvatarPromotionExcelTable_IndexKey_RPG_GameCore_AvatarPromotionRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11D40);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_EvolveBuildMixData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11D48);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_AdventurePlayerRow_AdventurePlayerCommonRowWrap()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11D50);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_RelicItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11D58);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PrefDictionary_RPG_Client_ActivityModule_ActivityType_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11D60);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_RogueNousAeonRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11D68);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_LoadingManager_WorkDefCounter()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11D70);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_DialogueGroupExcelTable_IndexKey_RPG_GameCore_DialogueGroupRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11D78);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PrefHashSet_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11D80);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_SwordTrainingEndingDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11D88);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_EquipmentItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11D90);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_SwipeEnd2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11D98);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ChallengeGroupData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11DA0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_System_Collections_Generic_List_RPG_Client_GridFightRoleProperty()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11DA8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_DragStart2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11DB0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Collections_Generic_IEnumerable_System_Func_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11DB8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RogueTournArchiveData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11DC0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Reflection_MemberFilter()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11DC8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_Proto_FightActivityGroup()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11DD0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IIgnoreHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11DD8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_SuitRecommendAvatarData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11DE0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_int_string_TMPro_TMP_SpriteAsset()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11DE8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_DiceCombat_OnServerConnectedDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11DF0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_ItemConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11DF8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_Texture()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11E00);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_NewsTickerItem_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11E08);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RogueTournAreaDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11E10);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityMarble_MarbleSealData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11E18);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Collections_Generic_List_RPG_Client_SubMissionData_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11E20);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction0_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11E28);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_NavMap_MappingInfoNode()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11E30);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RelicSmartSuit_RelicSmartSuitCalculationResultData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11E38);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_TarotBookDeleteData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11E40);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_Cancel2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11E48);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_DiceCombat_DiceCombatGlossaryTermData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11E50);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_string_string()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11E58);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_GameObject_UnityEngine_EventSystems_PointerEventData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11E60);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_AvatarData_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11E68);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ClockParkAttributeType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11E70);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_GameCore_TurnBasedModifierInstance_RPG_GameCore_GameCoreParamData_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11E78);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityHipplen_ActivityHipplenGiftData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11E80);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TrainParty_TrainPartyRecordGroup()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11E88);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_TarotBookCharacter()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11E90);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11E98);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_ParticleSystem_OnNewParticleEmissionEvent()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11EA0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_LuaUIController_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11EA8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_GameCore_MissionCondition_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11EB0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_Proto_FightActivityGroup()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11EB8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_SuitRecommendAvatarData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11EC0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11EC8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Events_UnityAction_UnityEngine_EventSystems_BaseEventData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11ED0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityMarble_MarbleSealData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11ED8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_CompanionMissionActivityBannerData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11EE0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_AnimatorButton()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11EE8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_System_Collections_Generic_List_RPG_Client_ChessRogueSubMissionReplayDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11EF0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaActionNoRet2_RPG_Client_Data_EventIndex_RPG_Client_Data_DataModel()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11EF8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_AvatarEnhancedHint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11F00);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_AlleyEventInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11F08);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_PinchOutHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11F10);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_IComparer_RPG_Client_AvatarData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11F18);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_SubMissionExcelTable_IndexKey_RPG_GameCore_SubMissionRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11F20);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityHipplen_ActivityHipplenTraitData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11F28);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightPresentEntity()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11F30);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightMonsterCampConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11F38);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_Data_EventIndex_RPG_Client_Data_DataModel()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11F40);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_HedgehogTeam_EasyTouch_Gesture()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11F48);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_LongTap2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11F50);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RogueTournArchiveData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11F58);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_MainMissionSortedItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11F60);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_BaseGameFlow_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11F68);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityHipplen_ActivityHipplenInteractPropData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11F70);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_BattleAssetPreload_AssetPreloadGroup()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11F78);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_ISelectHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11F80);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_Dictionary_string_RPG_Client_GridFightGameRefInterectData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11F88);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IScrollHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11F90);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Collections_Specialized_NotifyCollectionChangedEventHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11F98);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_AvatarOutfitUnit()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11FA0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_AvatarData_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11FA8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_OnBackPressedCallback()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11FB0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightEquipItemConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11FB8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_IRogueTournBuildRefTeamMemberData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11FC0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_MessageItemExcelTable_IndexKey_RPG_GameCore_MessageItemRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11FC8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11FD0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityHipplen_ActivityHipplenInteractPropData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11FD8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_RPG_Client_PlanetFesToastItem_object()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11FE0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_PlayerBriefDisplayData_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11FE8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ClockParkAttributeType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11FF0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityHipplen_ActivityHipplenTraitData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x11FF8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_IResidentActivityPanelData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12000);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_ConditionParam()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12008);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_ConditionParam()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12010);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_RPG_Client_BaseLobby()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12018);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_IPlanetFesBuff()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12020);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_EvolveBuildGearEquipInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12028);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_PlayerBriefDisplayData_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12030);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_EquipmentItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12038);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction1_XLua_LuaTable_RPG_Client_UILayer()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12040);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_GameEntity_RPG_GameCore_TeamType_RPG_GameCore_TeamType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12048);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_RPG_Client_SuperDropDown_UnityEngine_UI_Dropdown_DropdownItem_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12050);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ItemDisplayData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12058);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_EasyTouchIsReadyHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12060);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightRole()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12068);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_MarblePVPRankConfigRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12070);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PrefHashSet_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12078);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TrainParty_TrainPartyMeetingRankInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12080);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_CakeRaceBattleItemDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12088);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MonsterData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12090);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PrefDictionary_uint_float()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12098);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PlanetFesTradingCardOfferItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x120A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_RPG_Client_PlayerBriefDisplayData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x120A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_PlanetFesCardData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x120B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_AdventurePlayerRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x120B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_InControl_InputDevice()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x120C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Collections_Generic_List_RPG_Client_ItemDisplayData_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x120C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_IRogueTournBuildRefDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x120D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightGameRefHttpRspBody_RPG_Client_GridFightGameRefShareCodeRspBody()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x120D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_BaseLobby()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x120E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_SettledPunkLordData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x120E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction1_XLua_LuaTable_string()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x120F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_PlayGoSample_PSPlayGoReceiveParamBase()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x120F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_EvolveBuildCard()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12100);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightConsumableItemData_RPG_Client_GridFightConsumableInfo_GridFightConsumableItemUseParam()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12108);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_RogueMagicUnitDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12110);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IEndDragHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12118);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_RogueNousDiceSlotDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12120);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IPointerClickHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12128);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightPortalData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12130);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_GameEntity_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12138);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_object_RPG_Client_AlleyTransportRouteState()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12140);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_List_RPG_Client_FriendRankingInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12148);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_long()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12150);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_RogueNousAeonRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12158);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_RPG_Client_SuperDropDown_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12160);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12168);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_AkCallbackManager_BGMCallback()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12170);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_MainMissionData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12178);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PlanetFesThemeData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12180);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_PropExcelTable_IndexKey_RPG_GameCore_PropRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12188);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_IAdventurePlayerCommonRowWrap()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12190);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_string()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12198);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x121A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_VoiceConfigExcelTable_IndexKey_RPG_GameCore_VoiceConfigRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x121A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_RogueMagicScepterDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x121B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_BaseGachaPoolData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x121B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_XLua_LuaEnv_CustomLoader()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x121C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_SuperScrollView_LoopListViewItem2_object()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x121C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityHotData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x121D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_SuitRecommendAvatarData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x121D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IInitializePotentialDragHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x121E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_BaseLobby_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x121E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_AvatarOutfitUnit()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x121F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_MultipleDropData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x121F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_RPG_GameCore_MissionCondition()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12200);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_BookContentData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12208);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ScheduleTask()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12210);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GachaItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12218);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityHipplen_ActivityHipplenGiftData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12220);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_string()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12228);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_RogueTournArchiveData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12230);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_TrainParty_TrainPartyRecordGroup()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12238);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_AsyncOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12240);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityHipplen_ActivityHipplenInteractPropData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12248);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Editor_MainMissionChain()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12250);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_DiceCombat_DiceCombatSpecialRuleGroupData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12258);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_SwitchHandCoinData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12260);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_RogueBuffData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12268);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_RspHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12270);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightDivisionLevelReward()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12278);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityHipplen_ActivityHipplenWorkData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12280);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_Recommend_RelicRecommendBigData_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12288);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12290);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_LongTapEnd2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12298);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_uint_RPG_Client_ICommand()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x122A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_AlleyEventInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x122A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_RogueDLCMainStoryRewardRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x122B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_DiceCombatDiceConfigData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x122B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_FightFestPhase()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x122C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_TurnBasedModifierInstance()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x122C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_DragEndHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x122D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_System_Collections_Generic_List_RPG_GameCore_MissionCondition()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x122D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_MainMissionExcelTable_IndexKey_RPG_GameCore_MainMissionRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x122E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_IAdventurePlayerCommonRowWrap()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x122E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_EventSystems_AxisEventData_UnityEngine_UI_Selectable_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x122F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_MatchThreeBirdData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x122F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GlobalDispatchData_ServerData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12300);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MapGroupDef_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12308);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityMarble_MarbleSealData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12310);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_DiceCombat_DiceCombatGlossaryTermData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12318);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_UnityEngine_EventSystems_EventTrigger_Entry()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12320);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_LevelMinimapSection()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12328);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PlayerBoardInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12330);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightOrbEntityData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12338);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_TouchCancelHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12340);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Events_UnityAction_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12348);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ElfShopItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12350);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivitySummonStage()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12358);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_DiceCombat_OnGeneralNotifyDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12360);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_CEBattlePresetConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12368);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_QuestData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12370);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightOrbData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12378);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_GridFightEquipItemData_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12380);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_XLua_LuaTable_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12388);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_SwordTrainingEndingDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12390);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_MapEntryRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12398);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_LittleGame_FiveDim_MiniGameEventReason()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x123A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_FightFestCoachSkill()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x123A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_GameEntity()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x123B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_EventSystems_PointerEventData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x123B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_AvatarOutfitUnit()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x123C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_System_Collections_Generic_List_RPG_Client_ActivityHotData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x123C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_ComponentModel_PropertyChangedEventHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x123D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightHandbookRole()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x123D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_PlanetFesTradingCardExchangeHistoryItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x123E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_FateHandbookHouguItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x123E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaActionNoRet2_XLua_LuaTable_float()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x123F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_GachaType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x123F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaActionNoRet3_XLua_LuaTable_int_float()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12400);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ParkourRank()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12408);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_AvatarSkillExcelTable_IndexKey_RPG_GameCore_AvatarSkillRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12410);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_EventSystems_EventTrigger_Entry()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12418);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_MonoSceneObjClickHint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12420);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_bool_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12428);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_BookContentData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12430);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MessageItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12438);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12440);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_DrinkMakerCheersGroupData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12448);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_IMapObject()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12450);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_GameCore_AvatarPropertyType_RPG_Client_GridFightRolePropertyConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12458);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_AdventurePlayerRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12460);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Editor_MainMissionChain()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12468);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_WheelItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12470);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaActionNoRet1_float()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12478);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_UnityEngine_Texture()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12480);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_LightCone3D_UpdateFunc()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12488);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_SwitchHandCoinData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12490);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_RewardExcelTable_IndexKey_RPG_GameCore_RewardRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12498);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_UnityEngine_Transform()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x124A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_System_Collections_Generic_List_RPG_Client_MainMissionData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x124A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_List_RPG_GameCore_BuffConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x124B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x124B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_SuperScrollView_FlexibleGridItemPool_OnNewPrefabIns()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x124C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_NotifyHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x124C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_Proto_StrongChallengeAvatar()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x124D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RelicItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x124D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Events_UnityAction()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x124E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_EventHandler_RPG_Client_Promises_ExceptionEventArgs()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x124E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x124F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_BookletLuaPanelParam()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x124F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction2_string_object_XLua_LuaTable()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12500);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction2_string_string_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12508);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ChatReportReason()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12510);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_Recommend_RelicRecommendBigData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12518);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ChimeraDuelMasterData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12520);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_RPG_Client_SubMissionData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12528);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_UIElementTouchUpHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12530);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_DrinkMakerCheersGuestCommentData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12538);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_XLua_LuaTable_RPG_Client_StaticListView_int_RPG_Client_StaticListViewItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12540);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_TurnBasedModifierInstance()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12548);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MatchThreeBirdData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12550);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_GameEntity_RPG_GameCore_GameEntity()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12558);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_InControl_BindingSourceType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12560);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_IRogueTournBuildRefTeamMemberData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12568);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_TouchStart2FingersHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12570);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_System_Collections_Generic_List_RPG_Client_ItemDisplayData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12578);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_IModifierInstance()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12580);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_SuperScrollView_LoopGridView_SuperScrollView_LoopGridViewItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12588);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_DiceCombat_OnOnGeneralRspDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12590);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_TeamBuild()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12598);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_ValueTuple_uint_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x125A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_GameCore_CharacterInputData_UnityEngine_Vector3_UnityEngine_Vector3()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x125A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_TarotBookClue()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x125B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_PlayGoSample_PSPlayGo_EstimatedTimeParam()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x125B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_GameEntity()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x125C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ParkourRank()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x125C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_OverUIElementHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x125D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_FightActivityGroupInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x125D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_System_Collections_Generic_Dictionary_RPG_GameCore_AttackDamageType_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x125E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_string_UnityEngine_SkinnedMeshRenderer_UnityEngine_Mesh()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x125E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Camera_CameraCallback()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x125F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_FuncEntranceData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x125F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_bool_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12600);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_List_RPG_Client_GridFightRoleProperty()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12608);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_SwitchHandCoinData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12610);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_GameCore_MissionCondition_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12618);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_System_Collections_Generic_List_RPG_Client_GridFightMonsterData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12620);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_PCResolution()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12628);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityPanelData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12630);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ElfRestaurantRecipeData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12638);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_ISubmitHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12640);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Collections_Generic_List_RPG_Client_MainMissionData_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12648);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ChallengeData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12650);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_AvatarData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12658);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GachaGroupData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12660);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightTrait()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12668);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TextID()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12670);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_DiceCombatDice()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12678);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_PinchInHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12680);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_SettledPunkLordData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12688);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_StageMonsterRewardItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12690);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_EventSystems_RaycastResult()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12698);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_RogueImageRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x126A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_Proto_LeaveFiveDimGameScRsp()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x126A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_GameObject_UnityEngine_GameObject_RPG_Client_OpenWorld_StreamingItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x126B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightMonsterCampConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x126B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_MarblePVPRankConfigRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x126C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_PlanetFesTradingCardExchangeHistoryItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x126C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_uint_AkCallbackType_AkCallbackInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x126D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_Recommend_RelicRecommendBigData_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x126D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_ChimeraGameInstance_ActionReplayHook()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x126E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_PunkLordData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x126E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PlanetFesCardData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x126F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_RPG_Client_LuaUIController()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x126F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_RPG_Client_TextID()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12700);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_IFateGameRoundSettleDmgSourceItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12708);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_UIController_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12710);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ItemDisplayData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12718);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_Animator_ThreadDelegate()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12720);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_FightActivityGroupInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12728);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RogueMagicScepterDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12730);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_TeamBuild()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12738);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_NPCWarningTipConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12740);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ElfShopItemData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12748);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_TarotBookStory()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12750);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_float()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12758);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_RPG_Client_BaseGameFlow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12760);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_DiceCombat_DiceCombatRankLevelData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12768);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ChallengeGroupData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12770);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_PlanetFesTradingCardApplyItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12778);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_TextmapExcelTable_IndexKey_RPG_GameCore_TextmapRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12780);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_AkCallbackManager_BankCallback()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12788);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ClockParkAttributeType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12790);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_GridFightManager_GridFightCustomValue()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12798);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_IResidentActivityPanelData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x127A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_uint_RPG_GameCore_SubMissionState_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x127A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_FightFestPhase()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x127B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityModule_ActivityType_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x127B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RogueNousDiceSurfaceDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x127C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_GameCore_GameEntity_RPG_GameCore_FixPoint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x127C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_MapEntityDef()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x127D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_PCResolution()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x127D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_GameObject()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x127E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightHandBookEquipItemConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x127E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_SuperScrollView_LoopListViewItem2_float()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x127F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_UI_InputField_OnValidateInput()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x127F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityHotCoreRewardData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12800);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_UnityEngine_Texture_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12808);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_System_Collections_Generic_List_RPG_Client_FriendRankingInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12810);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaActionNoRet2_XLua_LuaTable_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12818);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_MazeBuffData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12820);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_ActivityHipplen_ActivityHipplenWorkData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12828);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GachaGroupData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12830);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_IFateGameRoundSettleDmgSourceItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12838);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_XLua_LuaTable_SuperScrollView_LoopListViewItem2_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12840);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_AetherDivideGymDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12848);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PrefDictionary_uint_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12850);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_DiceCombat_DiceCombatSpecialRuleGroupData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12858);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_FuncEntranceData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12860);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_CustomRP_CaptureSetupCb()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12868);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12870);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_DiceCombat_DiceCombatCommunicateData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12878);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightOrbData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12880);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_AetherDivideGymDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12888);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_MultipleDropData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12890);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightHandBookEquipItemConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12898);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_GridFightOrbEntityData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x128A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_MVector3()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x128A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_UnityEngine_UI_ILayoutElement_float()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x128B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_GameCore_GridFightEquipCategory_RPG_Client_GridFightEquipCategoryInfoConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x128B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_ActivityHotData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x128C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_GameCore_TurnBasedModifierInstance_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x128C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_TextID()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x128D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_TarotBookReadReward()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x128D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_HandleResult()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x128E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_GameCore_GameEntity_bool()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x128E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_UnityEngine_RenderTexture()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x128F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_CharacterInputData_float()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x128F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_Proto_MultiPathAvatarType()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12900);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_PlanetFesMiniGameBingoRewardLevel()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12908);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_RogueMagicUnitDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12910);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_TouchStartHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12918);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PlayerBriefDisplayData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12920);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_RPGAnimationEvent_AnimationEventCallBack()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12928);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction3_string_string_string_XLua_LuaTable()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12930);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_int()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12938);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_MapEntryRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12940);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_GridFightMonsterAffixConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12948);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_UnityEngine_EventSystems_EventTrigger_Entry()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12950);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_Dictionary_RPG_GameCore_AttackDamageType_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12958);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_RogueTournAreaDataItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12960);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GachaGroupData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12968);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_UnityEngine_RenderTexture_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12970);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_System_Collections_Generic_List_RPG_Client_MainMissionData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12978);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_GridFightEquipItemConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12980);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12988);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12990);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_MazeBuffExcelTable_IndexKey_RPG_GameCore_MazeBuffRow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12998);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_IPlanetFesBuff()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x129A0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PlanetFesSkillPhase()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x129A8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_XLua_LuaTable_RPG_Client_NewsTickerItem_uint()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x129B0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_Client_XLuaAction2_string_RPG_GameCore_GameEntity_XLua_LuaTable()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x129B8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_System_Exception_RPG_Client_PlayerBoardInfo()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x129C0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_int_int_SuperScrollView_LoopStaggeredGridViewItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x129C8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_GameCore_RogueDLCAeonCrossRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x129D0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IDropHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x129D8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_BaseGameFlow_System_Collections_Generic_IEnumerable_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x129E0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_NPCWarningTipConfig()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x129E8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_RPG_Client_RelicRecommendData_RPG_Client_Promises_IPromise()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x129F0);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_UnityEngine_EventSystems_ExecuteEvents_EventFunction_UnityEngine_EventSystems_IMoveHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x129F8);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_DoubleTapHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12A00);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_HedgehogTeam_EasyTouch_EasyTouch_DragStartHandler()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12A08);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Func_XLua_LuaTable_RPG_Client_UIBubbleManager_RPG_Client_UIBubbleItem()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12A10);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_ItemComefromRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12A18);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Predicate_RPG_Client_SwordTrainingSkillData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12A20);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_GameCore_IRIBuildingRendererList_object()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12A28);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_SuperScrollView_GridItemPool_OnNewPrefabIns()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12A30);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_RPG_GameCore_TableLRUCache_RPG_GameCore_PerformanceEExcelTable_IndexKey_RPG_GameCore_PerformanceERow_CacheOperation()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12A38);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_UnityEngine_Vector2()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12A40);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_Client_ActivityHotData()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12A48);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Comparison_RPG_GameCore_RogueBuffRow()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12A50);
		}
		static ::System::RuntimeTypeHandle* StaticGet__typeHandle_System_Action_RPG_Client_PrefHashSet_string()
		{
			return (::System::RuntimeTypeHandle*)Il2CppClass::FromTypeDefinitionIndex(DelegateBridge_TypeDefinitionIndex)->GetStaticField(0x12A58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::System::Int32 reference, ::XLua::LuaEnv* luaenv)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::XLua::LuaEnv*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE__CTOR_OFFSET))(this, reference, luaenv);
		}

		::System::Void __Gen_Delegate_Imp0(::UnityEngine::Vector2 p0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP0_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp1(::UnityEngine::EventSystems::MoveDirection p0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::MoveDirection))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP1_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp2(::System::Object* p0, ::AkCallbackType p1, ::AkCallbackInfo* p2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP2_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp3(::System::Object* p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP3_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp4(::RPG::Client::IAssetOperation* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP4_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp5(::System::Boolean& p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP5_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp6(::System::String* p0, ::System::Boolean& p1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean&))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP6_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp7(::System::String* p0, ::System::Int32& p1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP7_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp8(::System::String* p0, ::System::String* p1, ::System::Boolean& p2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean&))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP8_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp9(::System::String* p0, ::System::String* p1, ::System::Int32& p2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP9_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp10(::XLua::LuaTable* p0, ::System::Boolean& p1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::Boolean&))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP10_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp11(::XLua::LuaTable* p0, ::RPG::Client::UILayer& p1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::UILayer&))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP11_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp12(::XLua::LuaTable* p0, ::System::String*& p1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::String*&))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP12_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp13(::XLua::LuaTable* p0, ::System::Int32& p1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::Int32&))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP13_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp14(::System::String* p0, ::XLua::LuaTable*& p1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::XLua::LuaTable*&))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP14_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp15(::System::String* p0, ::System::Int32 p1, ::XLua::LuaTable*& p2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::XLua::LuaTable*&))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP15_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp16(::System::String* p0, ::System::String* p1, ::XLua::LuaTable*& p2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::XLua::LuaTable*&))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP16_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp17(::System::String* p0, ::System::UInt32 p1, ::XLua::LuaTable*& p2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::XLua::LuaTable*&))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP17_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp18(::System::String* p0, ::System::Object* p1, ::XLua::LuaTable*& p2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::XLua::LuaTable*&))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP18_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp19(::System::String* p0, ::RPG::GameCore::GameEntity* p1, ::XLua::LuaTable*& p2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameEntity*, ::XLua::LuaTable*&))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP19_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp20(::System::String* p0, ::System::String* p1, ::System::String* p2, ::XLua::LuaTable*& p3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::XLua::LuaTable*&))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP20_OFFSET))(this, p0, p1, p2, p3);
		}

		::System::Void __Gen_Delegate_Imp21(::System::Single p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP21_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp22(::System::String* p0, ::System::Boolean p1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP22_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp23(::XLua::LuaTable* p0, ::System::Int32 p1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP23_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp24(::XLua::LuaTable* p0, ::System::Int32 p1, ::System::Single p2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP24_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp25(::XLua::LuaTable* p0, ::System::Single p1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::Single))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP25_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp26(::XLua::LuaTable* p0, ::System::Boolean p1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP26_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp27(::RPG::Client::Data::EventIndex p0, ::Class_1_F19AB08624168191* p1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Data::EventIndex, ::Class_1_F19AB08624168191*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP27_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp28(::System::Boolean p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP28_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp29(::System::Int32 p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP29_OFFSET))(this, p0);
		}

		::SuperScrollView::LoopListViewItem2* __Gen_Delegate_Imp30(::XLua::LuaTable* p0, ::SuperScrollView::LoopListView2* p1, ::System::Int32 p2)
		{
			return ((::SuperScrollView::LoopListViewItem2*(*)(::PVOID, ::XLua::LuaTable*, ::SuperScrollView::LoopListView2*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP30_OFFSET))(this, p0, p1, p2);
		}

		::SuperScrollView::LoopGridViewItem* __Gen_Delegate_Imp31(::XLua::LuaTable* p0, ::SuperScrollView::LoopGridView* p1, ::System::Int32 p2, ::System::Int32 p3, ::System::Int32 p4)
		{
			return ((::SuperScrollView::LoopGridViewItem*(*)(::PVOID, ::XLua::LuaTable*, ::SuperScrollView::LoopGridView*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP31_OFFSET))(this, p0, p1, p2, p3, p4);
		}

		::RPG::Client::StaticListViewItem* __Gen_Delegate_Imp32(::XLua::LuaTable* p0, ::RPG::Client::StaticListView* p1, ::System::Int32 p2)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::StaticListView*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP32_OFFSET))(this, p0, p1, p2);
		}

		::System::Int32 __Gen_Delegate_Imp33(::XLua::LuaTable* p0, ::RPG::Client::SuperDropDown* p1, ::UnityEngine::UI::Dropdown_DropdownItem* p2)
		{
			return ((::System::Int32(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::SuperDropDown*, ::UnityEngine::UI::Dropdown_DropdownItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP33_OFFSET))(this, p0, p1, p2);
		}

		::SuperScrollView::LoopStaggeredGridViewItem* __Gen_Delegate_Imp34(::XLua::LuaTable* p0, ::SuperScrollView::LoopStaggeredGridView* p1, ::System::Int32 p2)
		{
			return ((::SuperScrollView::LoopStaggeredGridViewItem*(*)(::PVOID, ::XLua::LuaTable*, ::SuperScrollView::LoopStaggeredGridView*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP34_OFFSET))(this, p0, p1, p2);
		}

		::System::Boolean __Gen_Delegate_Imp35(::XLua::LuaTable* p0, ::System::Int32 p1)
		{
			return ((::System::Boolean(*)(::PVOID, ::XLua::LuaTable*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP35_OFFSET))(this, p0, p1);
		}

		::System::Int32 __Gen_Delegate_Imp36(::XLua::LuaTable* p0, ::SuperScrollView::LoopListViewItem2* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::XLua::LuaTable*, ::SuperScrollView::LoopListViewItem2*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP36_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp37(::UnityEngine::UI::Toggle* p0, ::System::Boolean p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Toggle*, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP37_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp38(::XLua::LuaTable* p0, ::RPG::Client::NewsTickerItem* p1, ::System::UInt32 p2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::NewsTickerItem*, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP38_OFFSET))(this, p0, p1, p2);
		}

		::System::Boolean __Gen_Delegate_Imp39(::System::Reflection::MemberInfo* p0, ::System::Object* p1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MemberInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP39_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp40()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP40_OFFSET))(this);
		}

		::System::Void __Gen_Delegate_Imp41(::System::String* p0, ::System::String* p1, ::System::String* p2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP41_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp42(::System::String* p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP42_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp43(::UnityEngine::EventSystems::PointerEventData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP43_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp44(::SuperScrollView::LoopGridView* p0, ::SuperScrollView::LoopGridViewItem* p1)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopGridView*, ::SuperScrollView::LoopGridViewItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP44_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp45(::SuperScrollView::LoopGridView* p0)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopGridView*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP45_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp46(::System::UInt32 p0, ::RPG::GameCore::SubMissionState p1, ::System::Boolean p2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::SubMissionState, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP46_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp47(::System::UInt32 p0, ::System::String* p1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP47_OFFSET))(this, p0, p1);
		}

		::System::String* __Gen_Delegate_Imp48()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP48_OFFSET))(this);
		}

		::System::Void __Gen_Delegate_Imp49(::System::String* p0, ::System::String* p1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP49_OFFSET))(this, p0, p1);
		}

		::UnityEngine::Sprite* __Gen_Delegate_Imp50(::System::String* p0)
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP50_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp51(::SuperScrollView::LoopListViewItem2* p0)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopListViewItem2*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP51_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp52(::SuperScrollView::LoopListView2* p0, ::SuperScrollView::LoopListViewItem2* p1)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopListView2*, ::SuperScrollView::LoopListViewItem2*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP52_OFFSET))(this, p0, p1);
		}

		::System::Single __Gen_Delegate_Imp53(::SuperScrollView::LoopListViewItem2* p0)
		{
			return ((::System::Single(*)(::PVOID, ::SuperScrollView::LoopListViewItem2*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP53_OFFSET))(this, p0);
		}

		::UnityEngine::Vector2 __Gen_Delegate_Imp54(::RPG::Client::StaticListViewItem* p0)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::RPG::Client::StaticListViewItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP54_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp55(::UnityEngine::Camera* p0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP55_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp56(::RPG::Client::MapEntityDef* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP56_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp57(::Class_2_BD898AE9C0E88E25* p0, ::System::UInt32 p1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_BD898AE9C0E88E25*, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP57_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp58(::Class_2_BD898AE9C0E88E25* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_BD898AE9C0E88E25*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP58_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp59(::UnityEngine::GameObject* p0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP59_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp60(::RPG::GameCore::GameEntity* p0, ::System::Boolean p1, ::System::String* p2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP60_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp61(::RPG::GameCore::GameEntity* p0, ::RPG::GameCore::TeamType p1, ::RPG::GameCore::TeamType p2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TeamType, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP61_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp62(::RPG::GameCore::GameEntity* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP62_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp63(::RPG::GameCore::GameEntity* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP63_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp64(::RPG::GameCore::GameEntity* p0, ::RPG::GameCore::GameEntity* p1, ::RPG::GameCore::AliveState p2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP64_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp65(::RPG::GameCore::GameEntity* p0, ::RPG::GameCore::AliveState p1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP65_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp66(::RPG::GameCore::GameEntity* p0, ::RPG::GameCore::AliveState p1, ::Class_1_43BD383C98B4C0C5_102* p2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState, ::Class_1_43BD383C98B4C0C5_102*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP66_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp67(::UnityEngine::GameObject* p0, ::UnityEngine::EventSystems::PointerEventData* p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP67_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp68(::UnityEngine::GameObject* p0, ::UnityEngine::EventSystems::BaseEventData* p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP68_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp69(::System::UInt32 p0, ::System::IntPtr p1, ::AKRESULT p2, ::System::Object* p3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::IntPtr, ::AKRESULT, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP69_OFFSET))(this, p0, p1, p2, p3);
		}

		::AKRESULT __Gen_Delegate_Imp70(::System::Boolean p0, ::System::Object* p1)
		{
			return ((::AKRESULT(*)(::PVOID, ::System::Boolean, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP70_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp71(::System::UInt32 p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP71_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp72(::HedgehogTeam::EasyTouch::Gesture* p0)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP72_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp73(::UnityEngine::EventSystems::AxisEventData* p0, ::UnityEngine::UI::Selectable* p1, ::System::Boolean p2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::AxisEventData*, ::UnityEngine::UI::Selectable*, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP73_OFFSET))(this, p0, p1, p2);
		}

		::System::Boolean __Gen_Delegate_Imp74()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP74_OFFSET))(this);
		}

		::System::Void __Gen_Delegate_Imp75(::RPG::Client::TriggerEffectParams* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP75_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp76(::RPG::Client::MonoEffect* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP76_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp77(::RPG::Client::MonoEffect* p0, ::RPG::Client::TriggerEffectCallbackParams p1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP77_OFFSET))(this, p0, p1);
		}

		::System::Collections::IEnumerator* __Gen_Delegate_Imp78(::RPG::GameCore::BattleResultState p0)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP78_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp79(::Class_1_FA4F4A67B1C04320_288* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_288*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP79_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp80(::Class_1_FA4F4A67B1C04320_291* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_291*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP80_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp81(::Class_1_FA4F4A67B1C04320_289* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_289*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP81_OFFSET))(this, p0);
		}

		::RPG::Client::GridFightEquipItemConfig* __Gen_Delegate_Imp82(::System::UInt32 p0)
		{
			return ((::RPG::Client::GridFightEquipItemConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP82_OFFSET))(this, p0);
		}

		::RPG::Client::GridFightItemConfig* __Gen_Delegate_Imp83(::System::UInt32 p0)
		{
			return ((::RPG::Client::GridFightItemConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP83_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp84(::RPG::Client::GridFightConsumableItemData* p0, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam* p1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightConsumableItemData*, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP84_OFFSET))(this, p0, p1);
		}

		::RPG::Client::GridFightRolePropertyConfig* __Gen_Delegate_Imp85(::RPG::GameCore::AvatarPropertyType p0)
		{
			return ((::RPG::Client::GridFightRolePropertyConfig*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP85_OFFSET))(this, p0);
		}

		::RPG::Client::GridFightConsumableItemConfig* __Gen_Delegate_Imp86(::System::UInt32 p0)
		{
			return ((::RPG::Client::GridFightConsumableItemConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP86_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp87(::UnityEngine::ParticleSystem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP87_OFFSET))(this, p0);
		}

		::RPG::Client::GridFightDivisionStageConfig* __Gen_Delegate_Imp88(::System::UInt32 p0)
		{
			return ((::RPG::Client::GridFightDivisionStageConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP88_OFFSET))(this, p0);
		}

		::RPG::Client::GridFightDivisionConfig* __Gen_Delegate_Imp89(::System::UInt32 p0)
		{
			return ((::RPG::Client::GridFightDivisionConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP89_OFFSET))(this, p0);
		}

		::RPG::Client::GridFightEnemyDifficultyLvConfig* __Gen_Delegate_Imp90(::System::UInt32 p0, ::System::UInt32 p1)
		{
			return ((::RPG::Client::GridFightEnemyDifficultyLvConfig*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP90_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp91(::RPG::GameCore::GridFightManager_GridFightCustomValue* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightManager_GridFightCustomValue*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP91_OFFSET))(this, p0);
		}

		::RPG::Client::GridFightDivisionLevelConfig* __Gen_Delegate_Imp92(::System::UInt32 p0, ::System::UInt32 p1)
		{
			return ((::RPG::Client::GridFightDivisionLevelConfig*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP92_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp93(::XLua::LuaTable* p0)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP93_OFFSET))(this, p0);
		}

		::RPG::Client::GridFightTutorialStageConfig* __Gen_Delegate_Imp94(::System::UInt32 p0)
		{
			return ((::RPG::Client::GridFightTutorialStageConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP94_OFFSET))(this, p0);
		}

		::RPG::Client::GridFightNPCConfig* __Gen_Delegate_Imp95(::System::UInt32 p0)
		{
			return ((::RPG::Client::GridFightNPCConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP95_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp96(::RPG::MVector3 p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP96_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp97(::RPG::Client::ClockParkCardItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkCardItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP97_OFFSET))(this, p0);
		}

		::RPG::Client::GridFightEquipCategoryInfoConfig* __Gen_Delegate_Imp98(::RPG::GameCore::GridFightEquipCategory p0)
		{
			return ((::RPG::Client::GridFightEquipCategoryInfoConfig*(*)(::PVOID, ::RPG::GameCore::GridFightEquipCategory))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP98_OFFSET))(this, p0);
		}

		::RPG::Client::GridFightForgeConfig* __Gen_Delegate_Imp99(::System::UInt32 p0)
		{
			return ((::RPG::Client::GridFightForgeConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP99_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp100(::RPG::Client::ScheduleTask* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleTask*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP100_OFFSET))(this, p0);
		}

		::Class_0_16E4307DCC419505_299* __Gen_Delegate_Imp101(::System::UInt32 p0)
		{
			return ((::Class_0_16E4307DCC419505_299*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP101_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp102(::RPG::GameCore::HudType p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::HudType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP102_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp103(::RPG::GameCore::HudType p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HudType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP103_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp104(::RPG::GameCore::HudType p0, ::RPG::GameCore::HudType p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::HudType, ::RPG::GameCore::HudType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP104_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp105(::RPG::Client::MessageItemData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MessageItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP105_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp106(::RPG::Client::MessageItemData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP106_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp107(::RPG::Client::MessageItemData* p0, ::RPG::Client::MessageItemData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MessageItemData*, ::RPG::Client::MessageItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP107_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp108(::RPG::Client::NPCWarningTipConfig* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NPCWarningTipConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP108_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp109(::RPG::Client::NPCWarningTipConfig* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NPCWarningTipConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP109_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp110(::RPG::Client::NPCWarningTipConfig* p0, ::RPG::Client::NPCWarningTipConfig* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::NPCWarningTipConfig*, ::RPG::Client::NPCWarningTipConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP110_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp111(::UnityEngine::EventSystems::BaseEventData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP111_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp112(::UnityEngine::EventSystems::EventTrigger_Entry* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::EventTrigger_Entry*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP112_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp113(::UnityEngine::EventSystems::EventTrigger_Entry* p0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::EventTrigger_Entry*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP113_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp114(::UnityEngine::EventSystems::EventTrigger_Entry* p0, ::UnityEngine::EventSystems::EventTrigger_Entry* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::EventSystems::EventTrigger_Entry*, ::UnityEngine::EventSystems::EventTrigger_Entry*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP114_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp115(::RPG::GameCore::GachaType p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GachaType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP115_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp116(::RPG::GameCore::GachaType p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GachaType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP116_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp117(::RPG::GameCore::GachaType p0, ::RPG::GameCore::GachaType p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GachaType, ::RPG::GameCore::GachaType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP117_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp118(::Class_1_D0948460F4810867* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D0948460F4810867*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP118_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp119(::System::UInt16 p0, ::System::Object* p1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP119_OFFSET))(this, p0, p1);
		}

		::System::Reflection::Assembly* __Gen_Delegate_Imp120(::System::Reflection::AssemblyName* p0)
		{
			return ((::System::Reflection::Assembly*(*)(::PVOID, ::System::Reflection::AssemblyName*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP120_OFFSET))(this, p0);
		}

		::System::Type* __Gen_Delegate_Imp121(::System::Reflection::Assembly* p0, ::System::String* p1, ::System::Boolean p2)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Reflection::Assembly*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP121_OFFSET))(this, p0, p1, p2);
		}

		::System::Boolean __Gen_Delegate_Imp122(::System::Type* p0, ::System::Object* p1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP122_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp123(::System::IAsyncResult* p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP123_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp124(::UnityEngine::RectTransform* p0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP124_OFFSET))(this, p0);
		}

		::System::Char __Gen_Delegate_Imp125(::System::String* p0, ::System::Int32 p1, ::System::Char p2)
		{
			return ((::System::Char(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Char))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP125_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp126(::Class_1_D6D8D891CDDE5DED* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D6D8D891CDDE5DED*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP126_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp127(::XLua::LuaTable* p0, ::RPG::GameCore::ScreenTransferReason p1)
		{
			return ((::System::Boolean(*)(::PVOID, ::XLua::LuaTable*, ::RPG::GameCore::ScreenTransferReason))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP127_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp128(::RPG::Client::GlobalDispatchData_ServerData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GlobalDispatchData_ServerData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP128_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp129(::RPG::Client::GlobalDispatchData_ServerData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GlobalDispatchData_ServerData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP129_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp130(::RPG::Client::GlobalDispatchData_ServerData* p0, ::RPG::Client::GlobalDispatchData_ServerData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GlobalDispatchData_ServerData*, ::RPG::Client::GlobalDispatchData_ServerData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP130_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp131(::RPG::Client::MainMissionData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP131_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp132(::RPG::GameCore::RewardRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RewardRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP132_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp133(::RPG::GameCore::TextmapRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TextmapRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP133_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp134(::System::UInt32 p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP134_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp135(::RPG::Client::EquipmentItemData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::EquipmentItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP135_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp136(::System::Exception* p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP136_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp137(::System::Exception* p0)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP137_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp138(::System::Int32 p0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP138_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp139(::System::Int32 p0)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP139_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp140()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP140_OFFSET))(this);
		}

		::System::Void __Gen_Delegate_Imp141(::RPG::GameCore::ItemRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ItemRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP141_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp142(::RPG::GameCore::MainMissionRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MainMissionRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP142_OFFSET))(this, p0);
		}

		::Il2CppArray<::System::Byte>* __Gen_Delegate_Imp143(::System::String*& p0)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP143_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp144(::UnityEngine::AnimatorStateInfo p0, ::UnityEngine::AnimatorStateInfo p1, ::UnityEngine::AnimatorTransitionInfo p2, ::System::Boolean p3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorTransitionInfo, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP144_OFFSET))(this, p0, p1, p2, p3);
		}

		::System::Void __Gen_Delegate_Imp145(::RPG::GameCore::AvatarPromotionRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPromotionRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP145_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp146(::RPG::GameCore::StageRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP146_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp147(::System::Object* p0, ::System::Boolean p1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP147_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp148(::SuperScrollView::LoopListViewItem2* p0, ::System::Object* p1)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopListViewItem2*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP148_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp149(::RPG::GameCore::AvatarSkillRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarSkillRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP149_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp150(::Unity::Collections::NativeArray_1<::System::Byte>& p0)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::System::Byte>&))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP150_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp151(::RPG::GameCore::SubMissionRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SubMissionRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP151_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp152(::System::UInt32 p0, ::System::UInt32 p1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP152_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp153(::Struct_2_8B48740F46FC53FC p0, ::System::Object* p1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_8B48740F46FC53FC, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP153_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp154(::Proto::ItemCost* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::ItemCost*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP154_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp155(::Proto::ItemCost* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemCost*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP155_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp156(::Proto::ItemCost* p0, ::Proto::ItemCost* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::Proto::ItemCost*, ::Proto::ItemCost*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP156_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp157(::RPG::GameCore::AvatarSkillTreeRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarSkillTreeRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP157_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp158(::System::UInt32 p0, ::AkCallbackType p1, ::AkCallbackInfo* p2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP158_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp159(::RPG::GameCore::TurnBasedModifierInstance* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP159_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp160(::RPG::GameCore::TurnBasedModifierInstance* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP160_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp161(::RPG::GameCore::StatusRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StatusRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP161_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp162(::RPG::GameCore::GameEntity* p0, ::RPG::GameCore::GameEntity* p1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP162_OFFSET))(this, p0, p1);
		}

		::System::String* __Gen_Delegate_Imp163(::System::String* p0)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP163_OFFSET))(this, p0);
		}

		::RPG::GameCore::FixPoint __Gen_Delegate_Imp164(::RPG::GameCore::GameEntity* p0)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP164_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp165(::RPG::GameCore::GameEntity* p0, ::System::Boolean p1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP165_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp166(::RPG::GameCore::MonsterRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MonsterRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP166_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp167(::RPG::GameCore::MonsterSkillRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MonsterSkillRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP167_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp168(::RPG::GameCore::GameEntity* p0, ::RPG::GameCore::GameEntity* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP168_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp169(::System::String* p0, ::UnityEngine::SkinnedMeshRenderer* p1, ::UnityEngine::Mesh* p2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::SkinnedMeshRenderer*, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP169_OFFSET))(this, p0, p1, p2);
		}

		::System::Boolean __Gen_Delegate_Imp170(::RPG::Client::BookContentData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BookContentData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP170_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp171(::RPG::Client::BookContentData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BookContentData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP171_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp172(::RPG::Client::BookContentData* p0, ::RPG::Client::BookContentData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::BookContentData*, ::RPG::Client::BookContentData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP172_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp173(::RPG::GameCore::MazeBuffRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MazeBuffRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP173_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp174(::RPG::Client::ChallengeData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengeData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP174_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp175(::RPG::Client::ChallengeData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP175_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp176(::RPG::Client::ChallengeData* p0, ::RPG::Client::ChallengeData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChallengeData*, ::RPG::Client::ChallengeData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP176_OFFSET))(this, p0, p1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp177()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP177_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Func_1<::RPG::Client::Promises::IPromise*>*>* __Gen_Delegate_Imp178()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Func_1<::RPG::Client::Promises::IPromise*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP178_OFFSET))(this);
		}

		::System::Void __Gen_Delegate_Imp179(::RPG::GameCore::PropRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP179_OFFSET))(this, p0);
		}

		::UnityEngine::Vector3 __Gen_Delegate_Imp180(::UnityEngine::Vector3 p0)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP180_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp181(::RPG::Client::UIFollow3DTarget* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIFollow3DTarget*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP181_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp182(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::UInt32>* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::UInt32>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP182_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp183(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::UInt32>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::UInt32>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP183_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp184(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::UInt32>* p0, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::UInt32>* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::UInt32>*, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::UInt32>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP184_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp185(::RPG::Client::PCResolution* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PCResolution*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP185_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp186(::RPG::Client::PCResolution* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PCResolution*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP186_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp187(::RPG::Client::PCResolution* p0, ::RPG::Client::PCResolution* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PCResolution*, ::RPG::Client::PCResolution*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP187_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp188(::RPG::GameCore::StageMonsterRewardItem* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::StageMonsterRewardItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP188_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp189(::RPG::GameCore::StageMonsterRewardItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageMonsterRewardItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP189_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp190(::RPG::GameCore::StageMonsterRewardItem* p0, ::RPG::GameCore::StageMonsterRewardItem* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::StageMonsterRewardItem*, ::RPG::GameCore::StageMonsterRewardItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP190_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp191(::RPG::GameCore::VoiceConfigRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::VoiceConfigRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP191_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp192(::System::String* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP192_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp193(::RPG::Client::MainMissionData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP193_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp194(::RPG::Client::MainMissionData* p0, ::RPG::Client::MainMissionData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MainMissionData*, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP194_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp195(::RPG::GameCore::DialogueGroupRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DialogueGroupRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP195_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp196(::RPG::GameCore::PlaneEventRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlaneEventRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP196_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp197(::System::Object* p0, ::RPG::Client::Promises::ExceptionEventArgs* p1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::RPG::Client::Promises::ExceptionEventArgs*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP197_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp198(::RPG::Client::AnimatorButton* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AnimatorButton*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP198_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp199(::System::String* p0, ::System::String* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP199_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp200(::RPG::Client::PrefHashSet_1<::System::UInt32>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PrefHashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP200_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp201(::RPG::Client::BaseGachaPoolData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BaseGachaPoolData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP201_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp202(::RPG::Client::BaseGachaPoolData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGachaPoolData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP202_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp203(::RPG::Client::BaseGachaPoolData* p0, ::RPG::Client::BaseGachaPoolData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::BaseGachaPoolData*, ::RPG::Client::BaseGachaPoolData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP203_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp204(::RPG::Client::ItemData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP204_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp205(::RPG::Client::ItemData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP205_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp206(::RPG::Client::ItemData* p0, ::RPG::Client::ItemData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ItemData*, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP206_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp207(::RPG::Client::GachaItemData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GachaItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP207_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp208(::RPG::Client::GachaItemData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GachaItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP208_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp209(::RPG::Client::GachaItemData* p0, ::RPG::Client::GachaItemData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GachaItemData*, ::RPG::Client::GachaItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP209_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp210(::RPG::GameCore::SpecialAvatarRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SpecialAvatarRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP210_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp211(::XLua::LuaTable* p0, ::SuperScrollView::LoopListViewItem2* p1)
		{
			return ((::System::Boolean(*)(::PVOID, ::XLua::LuaTable*, ::SuperScrollView::LoopListViewItem2*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP211_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp212(::RPG::GameCore::AdventurePlayerRow* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdventurePlayerRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP212_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp213(::RPG::GameCore::AdventurePlayerRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventurePlayerRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP213_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp214(::RPG::GameCore::AdventurePlayerRow* p0, ::RPG::GameCore::AdventurePlayerRow* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::AdventurePlayerRow*, ::RPG::GameCore::AdventurePlayerRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP214_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp215(::RPG::Client::ChallengeGroupData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP215_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp216(::RPG::Client::ChallengeGroupData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP216_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp217(::RPG::Client::ChallengeGroupData* p0, ::RPG::Client::ChallengeGroupData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChallengeGroupData*, ::RPG::Client::ChallengeGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP217_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp218(::RPG::Client::RogueBuffData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueBuffData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP218_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp219(::RPG::Client::RogueBuffData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueBuffData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP219_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp220(::RPG::Client::RogueBuffData* p0, ::RPG::Client::RogueBuffData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueBuffData*, ::RPG::Client::RogueBuffData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP220_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp221(::RPG::Client::PrefHashSet_1<::System::String*>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PrefHashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP221_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp222(::System::String* p0, ::System::String* p1, ::UnityEngine::LogType p2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::LogType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP222_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp223(::System::String* p0, ::System::Boolean p1, ::System::String* p2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP223_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp224(::RPG::Client::PayProductResult p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PayProductResult))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP224_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp225(::System::Exception* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP225_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp226(::System::Boolean p0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP226_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp227(::System::Boolean p0)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP227_OFFSET))(this, p0);
		}

		::RPG::Client::MainMissionData* __Gen_Delegate_Imp228(::System::Exception* p0)
		{
			return ((::RPG::Client::MainMissionData*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP228_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp229(::RPG::Client::MainMissionData* p0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP229_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp230(::RPG::Client::MainMissionData* p0)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP230_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp231(::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP231_OFFSET))(this, p0);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>* __Gen_Delegate_Imp232(::System::Exception* p0)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP232_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp233(::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>* p0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP233_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp234(::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>* p0)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP234_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp235(::RPG::Client::ScheduleData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP235_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp236(::XLua::LuaTable* p0, ::RPG::Client::SuperDropDown* p1, ::UnityEngine::UI::Dropdown_DropdownItem* p2, ::System::Int32 p3)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::SuperDropDown*, ::UnityEngine::UI::Dropdown_DropdownItem*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP236_OFFSET))(this, p0, p1, p2, p3);
		}

		::System::Void __Gen_Delegate_Imp237(::XLua::LuaTable* p0, ::RPG::Client::SuperDropDown* p1, ::System::Int32 p2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::SuperDropDown*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP237_OFFSET))(this, p0, p1, p2);
		}

		::System::Boolean __Gen_Delegate_Imp238(::RPG::Client::RuntimeGroupManager_HoYoGroupUnit* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP238_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp239(::System::UInt32 p0, ::System::UInt32 p1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP239_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp240(::RPG::GameCore::TalkSentenceConfigRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TalkSentenceConfigRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP240_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp241(::RPG::GameCore::BattleEventRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleEventRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP241_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp242(::RPG::Client::ItemDisplayData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ItemDisplayData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP242_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp243(::RPG::Client::ItemDisplayData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemDisplayData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP243_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp244(::RPG::Client::ItemDisplayData* p0, ::RPG::Client::ItemDisplayData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ItemDisplayData*, ::RPG::Client::ItemDisplayData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP244_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp245(::AkMonitorErrorCode p0, ::AkMonitorErrorLevel p1, ::System::UInt32 p2, ::System::UInt64 p3, ::System::String* p4)
		{
			return ((::System::Void(*)(::PVOID, ::AkMonitorErrorCode, ::AkMonitorErrorLevel, ::System::UInt32, ::System::UInt64, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP245_OFFSET))(this, p0, p1, p2, p3, p4);
		}

		::System::Void __Gen_Delegate_Imp246(::RPG::GameCore::MessageItemRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MessageItemRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP246_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp247(::RPG::Client::PrefDictionary_2<::System::UInt32, ::System::UInt32>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PrefDictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP247_OFFSET))(this, p0);
		}

		::TMPro::TMP_FontAsset* __Gen_Delegate_Imp248(::System::Int32 p0, ::System::String* p1)
		{
			return ((::TMPro::TMP_FontAsset*(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP248_OFFSET))(this, p0, p1);
		}

		::TMPro::TMP_SpriteAsset* __Gen_Delegate_Imp249(::System::Int32 p0, ::System::String* p1)
		{
			return ((::TMPro::TMP_SpriteAsset*(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP249_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp250(::TMPro::TMP_TextInfo* p0)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_TextInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP250_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp251(::UnityEngine::AsyncOperation* p0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AsyncOperation*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP251_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp252(::RPG::GameCore::TurnBasedModifierInstance* p0, ::Class_1_5469D397DAE62876* p1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::Class_1_5469D397DAE62876*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP252_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp253(::RPG::GameCore::PerformanceERow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PerformanceERow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP253_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp254(::System::Int32 p0, ::System::Int32 p1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP254_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp255(::RPG::Client::PunkLordData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PunkLordData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP255_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp256(::RPG::Client::PunkLordData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PunkLordData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP256_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp257(::RPG::Client::PunkLordData* p0, ::RPG::Client::PunkLordData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PunkLordData*, ::RPG::Client::PunkLordData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP257_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp258(::RPG::Client::PlayerBriefDisplayData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerBriefDisplayData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP258_OFFSET))(this, p0);
		}

		::RPG::Client::PlayerBriefDisplayData* __Gen_Delegate_Imp259(::System::Exception* p0)
		{
			return ((::RPG::Client::PlayerBriefDisplayData*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP259_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp260(::RPG::Client::PlayerBriefDisplayData* p0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::PlayerBriefDisplayData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP260_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp261(::RPG::Client::PlayerBriefDisplayData* p0)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::Client::PlayerBriefDisplayData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP261_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp262(::RPG::Client::SubMissionData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP262_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp263(::RPG::Client::SubMissionData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP263_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp264(::RPG::Client::SubMissionData* p0, ::RPG::Client::SubMissionData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::SubMissionData*, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP264_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp265(::System::Int64 p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP265_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp266(::System::Int64 p0, ::System::Int64 p1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP266_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp267(::RPG::GameCore::MapEntryRow* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MapEntryRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP267_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp268(::RPG::GameCore::MapEntryRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MapEntryRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP268_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp269(::RPG::GameCore::MapEntryRow* p0, ::RPG::GameCore::MapEntryRow* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::MapEntryRow*, ::RPG::GameCore::MapEntryRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP269_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp270(::RPG::GameCore::LevelMinimapSection* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LevelMinimapSection*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP270_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp271(::RPG::GameCore::LevelMinimapSection* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelMinimapSection*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP271_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp272(::RPG::GameCore::LevelMinimapSection* p0, ::RPG::GameCore::LevelMinimapSection* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::LevelMinimapSection*, ::RPG::GameCore::LevelMinimapSection*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP272_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp273(::RPG::Client::PrefDictionary_2<::System::String*, ::System::UInt32>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PrefDictionary_2<::System::String*, ::System::UInt32>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP273_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp274(::System::String* p0, ::System::UInt32 p1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP274_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp275(::RPG::Client::SettledPunkLordData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SettledPunkLordData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP275_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp276(::RPG::Client::SettledPunkLordData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SettledPunkLordData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP276_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp277(::RPG::Client::SettledPunkLordData* p0, ::RPG::Client::SettledPunkLordData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::SettledPunkLordData*, ::RPG::Client::SettledPunkLordData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP277_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp278(::RPG::GameCore::ActivityFightGroupRow* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ActivityFightGroupRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP278_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp279(::RPG::GameCore::ActivityFightGroupRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivityFightGroupRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP279_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp280(::RPG::GameCore::ActivityFightGroupRow* p0, ::RPG::GameCore::ActivityFightGroupRow* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::ActivityFightGroupRow*, ::RPG::GameCore::ActivityFightGroupRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP280_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp281(::RPG::Client::FightActivityGroupInfo p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FightActivityGroupInfo))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP281_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp282(::RPG::Client::FightActivityGroupInfo p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FightActivityGroupInfo))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP282_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp283(::RPG::Client::FightActivityGroupInfo p0, ::RPG::Client::FightActivityGroupInfo p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FightActivityGroupInfo, ::RPG::Client::FightActivityGroupInfo))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP283_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp284(::Class_1_99BD961747420BEB_17* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_99BD961747420BEB_17*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP284_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp285(::Class_1_99BD961747420BEB_17* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_99BD961747420BEB_17*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP285_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp286(::Class_1_99BD961747420BEB_17* p0, ::Class_1_99BD961747420BEB_17* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_99BD961747420BEB_17*, ::Class_1_99BD961747420BEB_17*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP286_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp287(::RPG::GameCore::MissionCondition* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MissionCondition*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP287_OFFSET))(this, p0);
		}

		::RPG::GameCore::MissionCondition* __Gen_Delegate_Imp288(::System::Exception* p0)
		{
			return ((::RPG::GameCore::MissionCondition*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP288_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp289(::RPG::GameCore::MissionCondition* p0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::GameCore::MissionCondition*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP289_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp290(::RPG::GameCore::MissionCondition* p0)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::GameCore::MissionCondition*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP290_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp291(::RPG::Client::RelicRecommendData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicRecommendData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP291_OFFSET))(this, p0);
		}

		::RPG::Client::RelicRecommendData* __Gen_Delegate_Imp292(::System::Exception* p0)
		{
			return ((::RPG::Client::RelicRecommendData*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP292_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp293(::RPG::Client::RelicRecommendData* p0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::RelicRecommendData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP293_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp294(::RPG::Client::RelicRecommendData* p0)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::Client::RelicRecommendData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP294_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp295(::XLua::LuaTable* p0, ::System::UInt32 p1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP295_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp296(::Class_1_2CF43CF3CB5182D0* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_2CF43CF3CB5182D0*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP296_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp297(::Class_1_2CF43CF3CB5182D0* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2CF43CF3CB5182D0*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP297_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp298(::Class_1_2CF43CF3CB5182D0* p0, ::Class_1_2CF43CF3CB5182D0* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_2CF43CF3CB5182D0*, ::Class_1_2CF43CF3CB5182D0*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP298_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp299(::UnityEngine::RenderTexture* p0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP299_OFFSET))(this, p0);
		}

		::UnityEngine::RenderTexture* __Gen_Delegate_Imp300(::System::Exception* p0)
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP300_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp301(::UnityEngine::RenderTexture* p0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP301_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp302(::UnityEngine::RenderTexture* p0)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP302_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp303(::RPG::Client::PrefDictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PrefDictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP303_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp304(::System::UInt32 p0, ::System::Collections::Generic::List_1<::System::UInt32>* p1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP304_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp305(::RPG::Client::LuaUIController* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LuaUIController*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP305_OFFSET))(this, p0);
		}

		::System::Collections::Generic::List_1<::Class_1_3301DE64BF05426F*>* __Gen_Delegate_Imp306()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_3301DE64BF05426F*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP306_OFFSET))(this);
		}

		::System::Void __Gen_Delegate_Imp307(::RPG::Client::BattleAssetPreload_AssetPreloadGroup* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleAssetPreload_AssetPreloadGroup*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP307_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp308(::RPG::Client::AvatarData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP308_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp309(::RPG::Client::AvatarData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP309_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp310(::RPG::Client::AvatarData* p0, ::RPG::Client::AvatarData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::AvatarData*, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP310_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp311(::RPG::Client::AetherDivideGymDataItem* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AetherDivideGymDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP311_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp312(::RPG::Client::AetherDivideGymDataItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AetherDivideGymDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP312_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp313(::RPG::Client::AetherDivideGymDataItem* p0, ::RPG::Client::AetherDivideGymDataItem* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::AetherDivideGymDataItem*, ::RPG::Client::AetherDivideGymDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP313_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp314(::System::Collections::Generic::List_1<::RPG::GameCore::MissionCondition*>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::MissionCondition*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP314_OFFSET))(this, p0);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::MissionCondition*>* __Gen_Delegate_Imp315(::System::Exception* p0)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::MissionCondition*>*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP315_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp316(::System::Collections::Generic::List_1<::RPG::GameCore::MissionCondition*>* p0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::MissionCondition*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP316_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp317(::System::Collections::Generic::List_1<::RPG::GameCore::MissionCondition*>* p0)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::MissionCondition*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP317_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp318(::System::Object* p0, ::RPG::Client::AlleyTransportRouteState p1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::RPG::Client::AlleyTransportRouteState))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP318_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp319(::RPG::Client::PrefHashSet_1<::RPG::Client::ActivityModule_ActivityType>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PrefHashSet_1<::RPG::Client::ActivityModule_ActivityType>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP319_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp320(::XLua::LuaTable* p0, ::RPG::Client::ActivityAlley::AlleyPackComponent* p1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::ActivityAlley::AlleyPackComponent*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP320_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp321(::System::Collections::Generic::List_1<::RPG::GameCore::BuffConfig*>* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::BuffConfig*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP321_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp322(::System::Collections::Generic::List_1<::RPG::GameCore::BuffConfig*>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::BuffConfig*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP322_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp323(::System::Collections::Generic::List_1<::RPG::GameCore::BuffConfig*>* p0, ::System::Collections::Generic::List_1<::RPG::GameCore::BuffConfig*>* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::BuffConfig*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::BuffConfig*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP323_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp324(::Class_1_43BD383C98B4C0C5_101* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_101*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP324_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp325(::Class_2_E6C0556C909C8254* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_E6C0556C909C8254*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP325_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp326(::Class_0_16E4307DCC419505_296* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_296*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP326_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp327(::Class_0_16E4307DCC419505_297* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_297*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP327_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp328(::Class_0_16E4307DCC419505_295* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_295*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP328_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp329(::RPG::Client::AlleyEventInfo p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AlleyEventInfo))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP329_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp330(::RPG::Client::AlleyEventInfo p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AlleyEventInfo))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP330_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp331(::RPG::Client::AlleyEventInfo p0, ::RPG::Client::AlleyEventInfo p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::AlleyEventInfo, ::RPG::Client::AlleyEventInfo))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP331_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp332(::RPG::Client::FantasticStoryParagraphData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FantasticStoryParagraphData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP332_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp333(::RPG::Client::FantasticStoryParagraphData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FantasticStoryParagraphData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP333_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp334(::RPG::Client::FantasticStoryParagraphData* p0, ::RPG::Client::FantasticStoryParagraphData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FantasticStoryParagraphData*, ::RPG::Client::FantasticStoryParagraphData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP334_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp335(::XLua::LuaTable* p0, ::RPG::Client::ChessRogueBoardCellDataItem* p1, ::RPG::Client::MonoRogueHexChessBoardItem* p2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::ChessRogueBoardCellDataItem*, ::RPG::Client::MonoRogueHexChessBoardItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP335_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp336(::Class_1_7D41D5D948382242* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7D41D5D948382242*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP336_OFFSET))(this, p0);
		}

		::RPG::Client::SubMissionData* __Gen_Delegate_Imp337(::System::Exception* p0)
		{
			return ((::RPG::Client::SubMissionData*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP337_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp338(::RPG::Client::SubMissionData* p0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP338_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp339(::RPG::Client::SubMissionData* p0)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP339_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp340(::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP340_OFFSET))(this, p0);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>* __Gen_Delegate_Imp341(::System::Exception* p0)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP341_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp342(::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>* p0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP342_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp343(::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>* p0)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP343_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp344(::RPG::Client::FuncEntranceData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FuncEntranceData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP344_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp345(::RPG::Client::FuncEntranceData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FuncEntranceData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP345_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp346(::RPG::Client::FuncEntranceData* p0, ::RPG::Client::FuncEntranceData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FuncEntranceData*, ::RPG::Client::FuncEntranceData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP346_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp347(::UnityEngine::Mesh* p0, ::UnityEngine::Material* p1, ::UnityEngine::Texture* p2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::UnityEngine::Material*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP347_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp348(::System::Int32 p0, ::Il2CppArray<::UnityEngine::Mesh*>* p1, ::Il2CppArray<::UnityEngine::Material*>* p2, ::Il2CppArray<::UnityEngine::Texture*>* p3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Mesh*>*, ::Il2CppArray<::UnityEngine::Material*>*, ::Il2CppArray<::UnityEngine::Texture*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP348_OFFSET))(this, p0, p1, p2, p3);
		}

		::System::Void __Gen_Delegate_Imp349(::Spine::Unity::SkeletonGraphic* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonGraphic*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP349_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp350(::Spine::Unity::SkeletonRendererInstruction* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRendererInstruction*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP350_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp351(::Spine::Unity::ISkeletonAnimation* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::ISkeletonAnimation*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP351_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp352(::Spine::Unity::MeshGeneratorBuffers p0)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::MeshGeneratorBuffers))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP352_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp353(::RPG::Client::Prop::JigsawItemData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::JigsawItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP353_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp354(::RPG::Client::Prop::JigsawItemData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::JigsawItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP354_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp355(::RPG::Client::Prop::JigsawItemData* p0, ::RPG::Client::Prop::JigsawItemData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::Prop::JigsawItemData*, ::RPG::Client::Prop::JigsawItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP355_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp356(::System::Boolean p0, ::System::String* p1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP356_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp357(::RPG::Client::FantasticStoryChapterData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FantasticStoryChapterData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP357_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp358(::RPG::Client::FantasticStoryChapterData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FantasticStoryChapterData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP358_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp359(::RPG::Client::FantasticStoryChapterData* p0, ::RPG::Client::FantasticStoryChapterData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FantasticStoryChapterData*, ::RPG::Client::FantasticStoryChapterData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP359_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp360(::UnityEngine::Transform* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP360_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp361(::UnityEngine::Transform* p0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP361_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp362(::UnityEngine::Transform* p0, ::UnityEngine::Transform* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP362_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp363(::System::Collections::Generic::List_1<::RPG::Client::ChessRogueSubMissionReplayDataItem*>* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChessRogueSubMissionReplayDataItem*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP363_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp364(::System::Collections::Generic::List_1<::RPG::Client::ChessRogueSubMissionReplayDataItem*>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChessRogueSubMissionReplayDataItem*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP364_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp365(::System::Collections::Generic::List_1<::RPG::Client::ChessRogueSubMissionReplayDataItem*>* p0, ::System::Collections::Generic::List_1<::RPG::Client::ChessRogueSubMissionReplayDataItem*>* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChessRogueSubMissionReplayDataItem*>*, ::System::Collections::Generic::List_1<::RPG::Client::ChessRogueSubMissionReplayDataItem*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP365_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp366(::RPG::GameCore::RogueImageRow* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RogueImageRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP366_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp367(::RPG::GameCore::RogueImageRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueImageRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP367_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp368(::RPG::GameCore::RogueImageRow* p0, ::RPG::GameCore::RogueImageRow* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::RogueImageRow*, ::RPG::GameCore::RogueImageRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP368_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp369(::RPG::GameCore::RogueDLCMainStoryRewardRow* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RogueDLCMainStoryRewardRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP369_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp370(::RPG::GameCore::RogueDLCMainStoryRewardRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueDLCMainStoryRewardRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP370_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp371(::RPG::GameCore::RogueDLCMainStoryRewardRow* p0, ::RPG::GameCore::RogueDLCMainStoryRewardRow* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::RogueDLCMainStoryRewardRow*, ::RPG::GameCore::RogueDLCMainStoryRewardRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP371_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp372(::RPG::GameCore::CEBattlePresetConfig* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CEBattlePresetConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP372_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp373(::RPG::GameCore::CEBattlePresetConfig* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CEBattlePresetConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP373_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp374(::RPG::GameCore::CEBattlePresetConfig* p0, ::RPG::GameCore::CEBattlePresetConfig* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::CEBattlePresetConfig*, ::RPG::GameCore::CEBattlePresetConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP374_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp375(::RPG::Client::PrefDictionary_2<::System::UInt32, ::System::Single>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PrefDictionary_2<::System::UInt32, ::System::Single>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP375_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp376(::System::UInt32 p0, ::System::Single p1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP376_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp377(::RPG::GameCore::ItemConfig* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ItemConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP377_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp378(::RPG::GameCore::ItemConfig* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ItemConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP378_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp379(::RPG::GameCore::ItemConfig* p0, ::RPG::GameCore::ItemConfig* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::ItemConfig*, ::RPG::GameCore::ItemConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP379_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp380(::RPG::Client::PrefDictionary_2<::RPG::Client::ActivityModule_ActivityType, ::System::UInt32>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PrefDictionary_2<::RPG::Client::ActivityModule_ActivityType, ::System::UInt32>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP380_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp381(::RPG::Client::ActivityModule_ActivityType p0, ::System::UInt32 p1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityModule_ActivityType, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP381_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp382(::RPG::GameCore::RogueDLCAeonCrossRow* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RogueDLCAeonCrossRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP382_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp383(::RPG::GameCore::RogueDLCAeonCrossRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueDLCAeonCrossRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP383_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp384(::RPG::GameCore::RogueDLCAeonCrossRow* p0, ::RPG::GameCore::RogueDLCAeonCrossRow* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::RogueDLCAeonCrossRow*, ::RPG::GameCore::RogueDLCAeonCrossRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP384_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp385(::RPG::GameCore::RogueBuffRow* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RogueBuffRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP385_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp386(::RPG::GameCore::RogueBuffRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueBuffRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP386_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp387(::RPG::GameCore::RogueBuffRow* p0, ::RPG::GameCore::RogueBuffRow* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::RogueBuffRow*, ::RPG::GameCore::RogueBuffRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP387_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp388(::RPG::GameCore::RogueNousAeonCrossRow* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RogueNousAeonCrossRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP388_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp389(::RPG::GameCore::RogueNousAeonCrossRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueNousAeonCrossRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP389_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp390(::RPG::GameCore::RogueNousAeonCrossRow* p0, ::RPG::GameCore::RogueNousAeonCrossRow* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::RogueNousAeonCrossRow*, ::RPG::GameCore::RogueNousAeonCrossRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP390_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp391(::RPG::GameCore::RogueNousAeonRow* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RogueNousAeonRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP391_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp392(::RPG::GameCore::RogueNousAeonRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueNousAeonRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP392_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp393(::RPG::GameCore::RogueNousAeonRow* p0, ::RPG::GameCore::RogueNousAeonRow* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::RogueNousAeonRow*, ::RPG::GameCore::RogueNousAeonRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP393_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp394(::RPG::Client::RogueNousDiceSlotDataItem* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueNousDiceSlotDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP394_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp395(::RPG::Client::RogueNousDiceSlotDataItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueNousDiceSlotDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP395_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp396(::RPG::Client::RogueNousDiceSlotDataItem* p0, ::RPG::Client::RogueNousDiceSlotDataItem* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueNousDiceSlotDataItem*, ::RPG::Client::RogueNousDiceSlotDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP396_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp397(::Proto::StrongChallengeAvatar* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::StrongChallengeAvatar*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP397_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp398(::Proto::StrongChallengeAvatar* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::StrongChallengeAvatar*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP398_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp399(::Proto::StrongChallengeAvatar* p0, ::Proto::StrongChallengeAvatar* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::Proto::StrongChallengeAvatar*, ::Proto::StrongChallengeAvatar*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP399_OFFSET))(this, p0, p1);
		}

		::UnityEngine::Vector3 __Gen_Delegate_Imp400(::RPG::GameCore::CharacterInputData* p0, ::UnityEngine::Vector3 p1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP400_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp401(::RPG::GameCore::CharacterInputData* p0, ::System::Single p1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP401_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp402(::RPG::GameCore::AdventureCharacterController* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP402_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp403(::RPG::GameCore::ConditionParam* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ConditionParam*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP403_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp404(::RPG::GameCore::ConditionParam* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConditionParam*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP404_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp405(::RPG::GameCore::ConditionParam* p0, ::RPG::GameCore::ConditionParam* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::ConditionParam*, ::RPG::GameCore::ConditionParam*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP405_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp406(::RPG::GameCore::ItemComefromRow* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ItemComefromRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP406_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp407(::RPG::GameCore::ItemComefromRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ItemComefromRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP407_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp408(::RPG::GameCore::ItemComefromRow* p0, ::RPG::GameCore::ItemComefromRow* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::ItemComefromRow*, ::RPG::GameCore::ItemComefromRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP408_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp409(::RPG::Client::MonsterData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MonsterData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP409_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp410(::RPG::Client::MonsterData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonsterData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP410_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp411(::RPG::Client::MonsterData* p0, ::RPG::Client::MonsterData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MonsterData*, ::RPG::Client::MonsterData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP411_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp412(::XLua::LuaTable* p0, ::UnityEngine::Vector2 p1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP412_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp413(::XLua::LuaTable* p0, ::System::Collections::Generic::List_1<::RPG::Client::PopupMenuProxy_Option*>* p1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::Collections::Generic::List_1<::RPG::Client::PopupMenuProxy_Option*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP413_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp414(::RPG::Client::RogueNousDiceSurfaceDataItem* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueNousDiceSurfaceDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP414_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp415(::RPG::Client::RogueNousDiceSurfaceDataItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueNousDiceSurfaceDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP415_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp416(::RPG::Client::RogueNousDiceSurfaceDataItem* p0, ::RPG::Client::RogueNousDiceSurfaceDataItem* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueNousDiceSurfaceDataItem*, ::RPG::Client::RogueNousDiceSurfaceDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP416_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp417(::RPG::Client::RogueNousDiceBranchDataItem* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueNousDiceBranchDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP417_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp418(::RPG::Client::RogueNousDiceBranchDataItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueNousDiceBranchDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP418_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp419(::RPG::Client::RogueNousDiceBranchDataItem* p0, ::RPG::Client::RogueNousDiceBranchDataItem* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueNousDiceBranchDataItem*, ::RPG::Client::RogueNousDiceBranchDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP419_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp420(::RPG::Client::MonoSceneObjClickHint* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MonoSceneObjClickHint*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP420_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp421(::RPG::Client::MonoSceneObjClickHint* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoSceneObjClickHint*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP421_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp422(::RPG::Client::MonoSceneObjClickHint* p0, ::RPG::Client::MonoSceneObjClickHint* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MonoSceneObjClickHint*, ::RPG::Client::MonoSceneObjClickHint*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP422_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp423(::RPG::Client::TextID p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP423_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp424(::RPG::Client::TextID p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP424_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp425(::RPG::Client::TextID p0, ::RPG::Client::TextID p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TextID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP425_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp426(::System::Int32 p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP426_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp427(::System::Int32 p0, ::System::Int32 p1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP427_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp428(::RPG::Client::CompanionMissionActivityBannerData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CompanionMissionActivityBannerData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP428_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp429(::RPG::Client::CompanionMissionActivityBannerData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CompanionMissionActivityBannerData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP429_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp430(::RPG::Client::CompanionMissionActivityBannerData* p0, ::RPG::Client::CompanionMissionActivityBannerData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::CompanionMissionActivityBannerData*, ::RPG::Client::CompanionMissionActivityBannerData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP430_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp431(::RPG::Client::RogueTournAreaDataItem* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournAreaDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP431_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp432(::RPG::Client::RogueTournAreaDataItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournAreaDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP432_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp433(::RPG::Client::RogueTournAreaDataItem* p0, ::RPG::Client::RogueTournAreaDataItem* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueTournAreaDataItem*, ::RPG::Client::RogueTournAreaDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP433_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp434(::RPG::GameCore::EvolveBuildGearEquipInfo* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EvolveBuildGearEquipInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP434_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp435(::RPG::GameCore::EvolveBuildGearEquipInfo* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildGearEquipInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP435_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp436(::RPG::GameCore::EvolveBuildGearEquipInfo* p0, ::RPG::GameCore::EvolveBuildGearEquipInfo* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::EvolveBuildGearEquipInfo*, ::RPG::GameCore::EvolveBuildGearEquipInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP436_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp437(::RPG::Client::EvolveBuildMixData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::EvolveBuildMixData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP437_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp438(::RPG::Client::EvolveBuildMixData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EvolveBuildMixData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP438_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp439(::RPG::Client::EvolveBuildMixData* p0, ::RPG::Client::EvolveBuildMixData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::EvolveBuildMixData*, ::RPG::Client::EvolveBuildMixData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP439_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp440(::RPG::Client::ClockParkAttributeType p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ClockParkAttributeType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP440_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp441(::RPG::Client::ClockParkAttributeType p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkAttributeType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP441_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp442(::RPG::Client::ClockParkAttributeType p0, ::RPG::Client::ClockParkAttributeType p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ClockParkAttributeType, ::RPG::Client::ClockParkAttributeType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP442_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp443(::System::UInt32 p0, ::System::UInt32 p1, ::RPG::PoolList_1<::UnityEngine::Vector2Int>* p2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::PoolList_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP443_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp444(::UnityEngine::Vector2Int p0, ::UnityEngine::Vector2Int p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP444_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp445(::RPG::Client::LittleGame::Match3::Match3GameState p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Match3::Match3GameState))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP445_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp446(::XLua::LuaTable* p0, ::System::Object* p1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP446_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp447(::RPG::Client::SwordTrainingSkillData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SwordTrainingSkillData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP447_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp448(::RPG::Client::SwordTrainingSkillData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingSkillData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP448_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp449(::RPG::Client::SwordTrainingSkillData* p0, ::RPG::Client::SwordTrainingSkillData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::SwordTrainingSkillData*, ::RPG::Client::SwordTrainingSkillData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP449_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp450(::RPG::GameCore::PerformanceIDPair* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PerformanceIDPair*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP450_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp451(::RPG::GameCore::PerformanceIDPair* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PerformanceIDPair*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP451_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp452(::RPG::GameCore::PerformanceIDPair* p0, ::RPG::GameCore::PerformanceIDPair* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::PerformanceIDPair*, ::RPG::GameCore::PerformanceIDPair*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP452_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp453(::InControl::BindingSourceType p0)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::BindingSourceType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP453_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp454(::RPG::Client::SwordTraining::SwordTrainingCandidatePartnerAbilityData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingCandidatePartnerAbilityData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP454_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp455(::RPG::Client::SwordTraining::SwordTrainingCandidatePartnerAbilityData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingCandidatePartnerAbilityData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP455_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp456(::RPG::Client::SwordTraining::SwordTrainingCandidatePartnerAbilityData* p0, ::RPG::Client::SwordTraining::SwordTrainingCandidatePartnerAbilityData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingCandidatePartnerAbilityData*, ::RPG::Client::SwordTraining::SwordTrainingCandidatePartnerAbilityData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP456_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp457(::RPG::Client::MultipleDropData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MultipleDropData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP457_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp458(::RPG::Client::MultipleDropData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MultipleDropData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP458_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp459(::RPG::Client::MultipleDropData* p0, ::RPG::Client::MultipleDropData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MultipleDropData*, ::RPG::Client::MultipleDropData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP459_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp460(::RPG::Client::TrainParty::TrainPartyRecordGroup* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyRecordGroup*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP460_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp461(::RPG::Client::TrainParty::TrainPartyRecordGroup* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyRecordGroup*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP461_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp462(::RPG::Client::TrainParty::TrainPartyRecordGroup* p0, ::RPG::Client::TrainParty::TrainPartyRecordGroup* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyRecordGroup*, ::RPG::Client::TrainParty::TrainPartyRecordGroup*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP462_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp463(::RPG::Client::ActivitySummonStage* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivitySummonStage*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP463_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp464(::RPG::Client::ActivitySummonStage* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivitySummonStage*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP464_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp465(::RPG::Client::ActivitySummonStage* p0, ::RPG::Client::ActivitySummonStage* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivitySummonStage*, ::RPG::Client::ActivitySummonStage*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP465_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp466(::RPG::Client::PrefHashSet_1<::System::Int32>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PrefHashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP466_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp467(::RPG::Client::SwordTrainingEndingDataItem* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SwordTrainingEndingDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP467_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp468(::RPG::Client::SwordTrainingEndingDataItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingEndingDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP468_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp469(::RPG::Client::SwordTrainingEndingDataItem* p0, ::RPG::Client::SwordTrainingEndingDataItem* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::SwordTrainingEndingDataItem*, ::RPG::Client::SwordTrainingEndingDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP469_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp470(::RPG::Client::RogueMagicAreaDataItem* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueMagicAreaDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP470_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp471(::RPG::Client::RogueMagicAreaDataItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMagicAreaDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP471_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp472(::RPG::Client::RogueMagicAreaDataItem* p0, ::RPG::Client::RogueMagicAreaDataItem* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueMagicAreaDataItem*, ::RPG::Client::RogueMagicAreaDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP472_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp473(::RPG::Client::RogueMagicUnitDataItem* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueMagicUnitDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP473_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp474(::RPG::Client::RogueMagicUnitDataItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMagicUnitDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP474_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp475(::RPG::Client::RogueMagicUnitDataItem* p0, ::RPG::Client::RogueMagicUnitDataItem* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueMagicUnitDataItem*, ::RPG::Client::RogueMagicUnitDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP475_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp476(::RPG::Client::SuitRecommendAvatarData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SuitRecommendAvatarData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP476_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp477(::RPG::Client::SuitRecommendAvatarData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SuitRecommendAvatarData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP477_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp478(::RPG::Client::SuitRecommendAvatarData* p0, ::RPG::Client::SuitRecommendAvatarData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::SuitRecommendAvatarData*, ::RPG::Client::SuitRecommendAvatarData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP478_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp479(::RPG::Client::UIController* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP479_OFFSET))(this, p0);
		}

		::RPG::Client::UIController* __Gen_Delegate_Imp480(::System::Exception* p0)
		{
			return ((::RPG::Client::UIController*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP480_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp481(::RPG::Client::UIController* p0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP481_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp482(::RPG::Client::UIController* p0)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP482_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp483(::RPG::Client::PrefDictionary_2<::System::String*, ::System::String*>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PrefDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP483_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp484(::RPG::Client::AvatarPathData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarPathData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP484_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp485(::RPG::Client::AvatarPathData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarPathData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP485_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp486(::RPG::Client::AvatarPathData* p0, ::RPG::Client::AvatarPathData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::AvatarPathData*, ::RPG::Client::AvatarPathData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP486_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp487(::Class_1_EA80EBCE663FE95A* p0, ::Class_1_BEB73AACF0CDA957* p1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EA80EBCE663FE95A*, ::Class_1_BEB73AACF0CDA957*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP487_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp488(::RPG::Client::SwitchHandCoinData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SwitchHandCoinData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP488_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp489(::RPG::Client::SwitchHandCoinData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwitchHandCoinData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP489_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp490(::RPG::Client::SwitchHandCoinData* p0, ::RPG::Client::SwitchHandCoinData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::SwitchHandCoinData*, ::RPG::Client::SwitchHandCoinData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP490_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp491(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP491_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp492(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP492_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp493(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> p0, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> p1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP493_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp494(::RPG::Client::RogueMagicScepterDataItem* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueMagicScepterDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP494_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp495(::RPG::Client::RogueMagicScepterDataItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMagicScepterDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP495_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp496(::RPG::Client::RogueMagicScepterDataItem* p0, ::RPG::Client::RogueMagicScepterDataItem* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueMagicScepterDataItem*, ::RPG::Client::RogueMagicScepterDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP496_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp497(::RPG::Client::ActivityPanelData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityPanelData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP497_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp498(::RPG::Client::ActivityPanelData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityPanelData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP498_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp499(::RPG::Client::ActivityPanelData* p0, ::RPG::Client::ActivityPanelData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityPanelData*, ::RPG::Client::ActivityPanelData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP499_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp500(::RPG::Client::TarotBookCharacter* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TarotBookCharacter*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP500_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp501(::RPG::Client::TarotBookCharacter* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TarotBookCharacter*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP501_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp502(::RPG::Client::TarotBookCharacter* p0, ::RPG::Client::TarotBookCharacter* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TarotBookCharacter*, ::RPG::Client::TarotBookCharacter*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP502_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp503(::UnityEngine::Texture* p0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP503_OFFSET))(this, p0);
		}

		::UnityEngine::Texture* __Gen_Delegate_Imp504(::System::Exception* p0)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP504_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp505(::UnityEngine::Texture* p0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP505_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp506(::UnityEngine::Texture* p0)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP506_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp507(::RPG::Client::TarotBookCard* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TarotBookCard*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP507_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp508(::RPG::Client::TarotBookCard* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TarotBookCard*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP508_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp509(::RPG::Client::TarotBookCard* p0, ::RPG::Client::TarotBookCard* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TarotBookCard*, ::RPG::Client::TarotBookCard*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP509_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp510(::RPG::Client::TarotBookClue* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TarotBookClue*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP510_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp511(::RPG::Client::TarotBookClue* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TarotBookClue*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP511_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp512(::RPG::Client::TarotBookClue* p0, ::RPG::Client::TarotBookClue* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TarotBookClue*, ::RPG::Client::TarotBookClue*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP512_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp513(::RPG::Client::TarotBookStory* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TarotBookStory*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP513_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp514(::RPG::Client::TarotBookStory* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TarotBookStory*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP514_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp515(::RPG::Client::TarotBookStory* p0, ::RPG::Client::TarotBookStory* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TarotBookStory*, ::RPG::Client::TarotBookStory*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP515_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp516(::RPG::Client::BookletLuaPanelParam* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BookletLuaPanelParam*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP516_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp517(::RPG::Client::TrainParty::TrainPartyMeetingRankInfo* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyMeetingRankInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP517_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp518(::RPG::Client::IRogueTournBuildRefTeamMemberData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournBuildRefTeamMemberData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP518_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp519(::RPG::Client::IRogueTournBuildRefTeamMemberData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournBuildRefTeamMemberData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP519_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp520(::RPG::Client::IRogueTournBuildRefTeamMemberData* p0, ::RPG::Client::IRogueTournBuildRefTeamMemberData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IRogueTournBuildRefTeamMemberData*, ::RPG::Client::IRogueTournBuildRefTeamMemberData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP520_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp521(::RPG::Client::NavMap::MappingInfoNode* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::MappingInfoNode*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP521_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp522(::RPG::Client::NavMap::MappingInfoNode* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::MappingInfoNode*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP522_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp523(::RPG::Client::NavMap::MappingInfoNode* p0, ::RPG::Client::NavMap::MappingInfoNode* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::NavMap::MappingInfoNode*, ::RPG::Client::NavMap::MappingInfoNode*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP523_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp524(::RPG::Client::GachaGroupData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GachaGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP524_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp525(::RPG::Client::GachaGroupData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GachaGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP525_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp526(::RPG::Client::GachaGroupData* p0, ::RPG::Client::GachaGroupData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GachaGroupData*, ::RPG::Client::GachaGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP526_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp527(::RPG::Client::TarotBookReadReward* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TarotBookReadReward*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP527_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp528(::RPG::Client::TarotBookReadReward* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TarotBookReadReward*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP528_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp529(::RPG::Client::TarotBookReadReward* p0, ::RPG::Client::TarotBookReadReward* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TarotBookReadReward*, ::RPG::Client::TarotBookReadReward*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP529_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp530(::UnityEngine::Playables::PlayableDirector* p0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP530_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp531(::System::IntPtr p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP531_OFFSET))(this, p0);
		}

		::XLua::LuaBase* __Gen_Delegate_Imp532(::System::Int32 p0, ::XLua::LuaEnv* p1)
		{
			return ((::XLua::LuaBase*(*)(::PVOID, ::System::Int32, ::XLua::LuaEnv*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP532_OFFSET))(this, p0, p1);
		}

		::System::Int32 __Gen_Delegate_Imp533(::System::IntPtr p0)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP533_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp534(::RPG::GameCore::RelicType p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP534_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp535(::RPG::GameCore::RelicType p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP535_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp536(::RPG::GameCore::RelicType p0, ::RPG::GameCore::RelicType p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::RelicType, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP536_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp537(::RPG::Client::TarotBookInteraction* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TarotBookInteraction*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP537_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp538(::RPG::Client::TarotBookInteraction* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TarotBookInteraction*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP538_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp539(::RPG::Client::TarotBookInteraction* p0, ::RPG::Client::TarotBookInteraction* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TarotBookInteraction*, ::RPG::Client::TarotBookInteraction*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP539_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp540(::RPG::Client::ActivityMarble::MarbleSealData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleSealData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP540_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp541(::RPG::Client::ActivityMarble::MarbleSealData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleSealData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP541_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp542(::RPG::Client::ActivityMarble::MarbleSealData* p0, ::RPG::Client::ActivityMarble::MarbleSealData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityMarble::MarbleSealData*, ::RPG::Client::ActivityMarble::MarbleSealData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP542_OFFSET))(this, p0, p1);
		}

		::System::UInt32 __Gen_Delegate_Imp543(::XLua::LuaTable* p0, ::System::UInt32 p1)
		{
			return ((::System::UInt32(*)(::PVOID, ::XLua::LuaTable*, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP543_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp544(::Class_0_16E4307DCC419505_300* p0, ::Class_0_16E4307DCC419505_300* p1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_300*, ::Class_0_16E4307DCC419505_300*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP544_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp545(::RPG::GameCore::AvatarServantSkillRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarServantSkillRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP545_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp546(::XLua::LuaTable* p0, ::RPG::Client::PlanetFesToastItem* p1, ::System::Object* p2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::PlanetFesToastItem*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP546_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp547(::XLua::LuaTable* p0, ::RPG::Client::PlanetFesToastItem* p1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::PlanetFesToastItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP547_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp548(::RPG::Client::PlanetFesThemeData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesThemeData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP548_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp549(::RPG::Client::PlanetFesThemeData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesThemeData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP549_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp550(::RPG::Client::PlanetFesThemeData* p0, ::RPG::Client::PlanetFesThemeData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlanetFesThemeData*, ::RPG::Client::PlanetFesThemeData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP550_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp551(::RPG::Client::PlanetFesCardData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesCardData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP551_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp552(::RPG::Client::PlanetFesCardData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesCardData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP552_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp553(::RPG::Client::PlanetFesCardData* p0, ::RPG::Client::PlanetFesCardData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlanetFesCardData*, ::RPG::Client::PlanetFesCardData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP553_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp554(::RPG::Client::VirtualRankChimeraTeam* p0, ::System::Boolean p1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::VirtualRankChimeraTeam*, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP554_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp555(::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP555_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp556(::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP556_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp557(::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* p0, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP557_OFFSET))(this, p0, p1);
		}

		::UnityEngine::GameObject* __Gen_Delegate_Imp558(::UnityEngine::Transform* p0)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP558_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp559(::RPG::Client::QuestData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP559_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp560(::RPG::Client::QuestData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP560_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp561(::RPG::Client::QuestData* p0, ::RPG::Client::QuestData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::QuestData*, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP561_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp562(::RPG::Client::FightFestPhase* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FightFestPhase*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP562_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp563(::RPG::Client::FightFestPhase* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FightFestPhase*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP563_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp564(::RPG::Client::FightFestPhase* p0, ::RPG::Client::FightFestPhase* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FightFestPhase*, ::RPG::Client::FightFestPhase*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP564_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp565(::RPG::Client::FightFestCoachSkill* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FightFestCoachSkill*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP565_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp566(::RPG::Client::FightFestCoachSkill* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FightFestCoachSkill*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP566_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp567(::RPG::Client::FightFestCoachSkill* p0, ::RPG::Client::FightFestCoachSkill* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FightFestCoachSkill*, ::RPG::Client::FightFestCoachSkill*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP567_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp568(::RPG::Client::MatchThreeBirdData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MatchThreeBirdData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP568_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp569(::RPG::Client::MatchThreeBirdData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeBirdData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP569_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp570(::RPG::Client::MatchThreeBirdData* p0, ::RPG::Client::MatchThreeBirdData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MatchThreeBirdData*, ::RPG::Client::MatchThreeBirdData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP570_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp571(::UnityEngine::EventSystems::IPointerEnterHandler* p0, ::UnityEngine::EventSystems::BaseEventData* p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IPointerEnterHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP571_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp572(::UnityEngine::EventSystems::IPointerExitHandler* p0, ::UnityEngine::EventSystems::BaseEventData* p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IPointerExitHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP572_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp573(::UnityEngine::EventSystems::IPointerDownHandler* p0, ::UnityEngine::EventSystems::BaseEventData* p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IPointerDownHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP573_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp574(::UnityEngine::EventSystems::IPointerUpHandler* p0, ::UnityEngine::EventSystems::BaseEventData* p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IPointerUpHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP574_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp575(::UnityEngine::EventSystems::IPointerClickHandler* p0, ::UnityEngine::EventSystems::BaseEventData* p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IPointerClickHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP575_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp576(::UnityEngine::EventSystems::IInitializePotentialDragHandler* p0, ::UnityEngine::EventSystems::BaseEventData* p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IInitializePotentialDragHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP576_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp577(::UnityEngine::EventSystems::IBeginDragHandler* p0, ::UnityEngine::EventSystems::BaseEventData* p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IBeginDragHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP577_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp578(::UnityEngine::EventSystems::IDragHandler* p0, ::UnityEngine::EventSystems::BaseEventData* p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IDragHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP578_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp579(::UnityEngine::EventSystems::IEndDragHandler* p0, ::UnityEngine::EventSystems::BaseEventData* p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IEndDragHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP579_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp580(::UnityEngine::EventSystems::IDropHandler* p0, ::UnityEngine::EventSystems::BaseEventData* p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IDropHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP580_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp581(::UnityEngine::EventSystems::IScrollHandler* p0, ::UnityEngine::EventSystems::BaseEventData* p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IScrollHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP581_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp582(::UnityEngine::EventSystems::IUpdateSelectedHandler* p0, ::UnityEngine::EventSystems::BaseEventData* p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IUpdateSelectedHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP582_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp583(::UnityEngine::EventSystems::ISelectHandler* p0, ::UnityEngine::EventSystems::BaseEventData* p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::ISelectHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP583_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp584(::UnityEngine::EventSystems::IDeselectHandler* p0, ::UnityEngine::EventSystems::BaseEventData* p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IDeselectHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP584_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp585(::UnityEngine::EventSystems::IMoveHandler* p0, ::UnityEngine::EventSystems::BaseEventData* p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IMoveHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP585_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp586(::UnityEngine::EventSystems::ISubmitHandler* p0, ::UnityEngine::EventSystems::BaseEventData* p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::ISubmitHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP586_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp587(::UnityEngine::EventSystems::ICancelHandler* p0, ::UnityEngine::EventSystems::BaseEventData* p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::ICancelHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP587_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp588(::UnityEngine::EventSystems::IIgnoreHandler* p0, ::UnityEngine::EventSystems::BaseEventData* p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::IIgnoreHandler*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP588_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp589(::RPG::Client::PlayerBoardInfo* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerBoardInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP589_OFFSET))(this, p0);
		}

		::RPG::Client::PlayerBoardInfo* __Gen_Delegate_Imp590(::System::Exception* p0)
		{
			return ((::RPG::Client::PlayerBoardInfo*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP590_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp591(::RPG::Client::PlayerBoardInfo* p0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::PlayerBoardInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP591_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp592(::RPG::Client::PlayerBoardInfo* p0)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::Client::PlayerBoardInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP592_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp593(::RPG::Client::PlanetFesMiniGameBingoRewardLevel* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesMiniGameBingoRewardLevel*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP593_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp594(::RPG::Client::PlanetFesMiniGameBingoRewardLevel* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesMiniGameBingoRewardLevel*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP594_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp595(::RPG::Client::PlanetFesMiniGameBingoRewardLevel* p0, ::RPG::Client::PlanetFesMiniGameBingoRewardLevel* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlanetFesMiniGameBingoRewardLevel*, ::RPG::Client::PlanetFesMiniGameBingoRewardLevel*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP595_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp596(::RPG::Client::IPlanetFesBuff* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IPlanetFesBuff*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP596_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp597(::RPG::Client::IPlanetFesBuff* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IPlanetFesBuff*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP597_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp598(::RPG::Client::IPlanetFesBuff* p0, ::RPG::Client::IPlanetFesBuff* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IPlanetFesBuff*, ::RPG::Client::IPlanetFesBuff*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP598_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp599(::System::UInt64 p0, ::System::Single p1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP599_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp600(::InControl::InputDevice* p0)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDevice*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP600_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp601(::RPG::Client::WheelItem* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::WheelItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP601_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp602(::RPG::Client::WheelItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::WheelItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP602_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp603(::RPG::Client::WheelItem* p0, ::RPG::Client::WheelItem* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::WheelItem*, ::RPG::Client::WheelItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP603_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp604(::RPG::Client::EvolveBuildCard* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::EvolveBuildCard*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP604_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp605(::RPG::Client::EvolveBuildCard* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EvolveBuildCard*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP605_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp606(::RPG::Client::EvolveBuildCard* p0, ::RPG::Client::EvolveBuildCard* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::EvolveBuildCard*, ::RPG::Client::EvolveBuildCard*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP606_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp607(::RPG::Client::EvolveBuildScMixData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::EvolveBuildScMixData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP607_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp608(::RPG::Client::EvolveBuildScMixData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EvolveBuildScMixData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP608_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp609(::RPG::Client::EvolveBuildScMixData* p0, ::RPG::Client::EvolveBuildScMixData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::EvolveBuildScMixData*, ::RPG::Client::EvolveBuildScMixData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP609_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp610(::RPG::Client::Recommend::RelicRecommendBigData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Recommend::RelicRecommendBigData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP610_OFFSET))(this, p0);
		}

		::RPG::Client::Recommend::RelicRecommendBigData* __Gen_Delegate_Imp611(::System::Exception* p0)
		{
			return ((::RPG::Client::Recommend::RelicRecommendBigData*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP611_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp612(::RPG::Client::Recommend::RelicRecommendBigData* p0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::Recommend::RelicRecommendBigData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP612_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp613(::RPG::Client::Recommend::RelicRecommendBigData* p0)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::Client::Recommend::RelicRecommendBigData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP613_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp614(::XLua::LuaTable* p0, ::RPG::Client::TextID p1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP614_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp615(::RPG::Client::EquipmentItemData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EquipmentItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP615_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp616(::RPG::Client::EquipmentItemData* p0, ::RPG::Client::EquipmentItemData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::EquipmentItemData*, ::RPG::Client::EquipmentItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP616_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp617(::Enum_3_DFCB42601400F441 p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_DFCB42601400F441))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP617_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp618(::Enum_3_DFCB42601400F441 p0)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DFCB42601400F441))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP618_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp619(::Enum_3_DFCB42601400F441 p0, ::Enum_3_DFCB42601400F441 p1)
		{
			return ((::System::Int32(*)(::PVOID, ::Enum_3_DFCB42601400F441, ::Enum_3_DFCB42601400F441))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP619_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp620(::RPG::Client::RelicItemData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP620_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp621(::RPG::Client::RelicItemData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP621_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp622(::RPG::Client::RelicItemData* p0, ::RPG::Client::RelicItemData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RelicItemData*, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP622_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp623(::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP623_OFFSET))(this, p0);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* __Gen_Delegate_Imp624(::System::Exception* p0)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP624_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp625(::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* p0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP625_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp626(::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* p0)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP626_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp627(::RPG::GameCore::MarblePVPRankConfigRow* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MarblePVPRankConfigRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP627_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp628(::RPG::GameCore::MarblePVPRankConfigRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarblePVPRankConfigRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP628_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp629(::RPG::GameCore::MarblePVPRankConfigRow* p0, ::RPG::GameCore::MarblePVPRankConfigRow* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::MarblePVPRankConfigRow*, ::RPG::GameCore::MarblePVPRankConfigRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP629_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp630(::RPG::Client::PlanetFesTradingCardExchangeHistoryItem* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesTradingCardExchangeHistoryItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP630_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp631(::RPG::Client::PlanetFesTradingCardExchangeHistoryItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesTradingCardExchangeHistoryItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP631_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp632(::RPG::Client::PlanetFesTradingCardExchangeHistoryItem* p0, ::RPG::Client::PlanetFesTradingCardExchangeHistoryItem* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlanetFesTradingCardExchangeHistoryItem*, ::RPG::Client::PlanetFesTradingCardExchangeHistoryItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP632_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp633(::RPG::Client::PlanetFesTradingCardOfferItem* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesTradingCardOfferItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP633_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp634(::RPG::Client::PlanetFesTradingCardOfferItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesTradingCardOfferItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP634_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp635(::RPG::Client::PlanetFesTradingCardOfferItem* p0, ::RPG::Client::PlanetFesTradingCardOfferItem* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlanetFesTradingCardOfferItem*, ::RPG::Client::PlanetFesTradingCardOfferItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP635_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp636(::RPG::Client::ElfRestaurantRecipeData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ElfRestaurantRecipeData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP636_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp637(::RPG::Client::ElfRestaurantRecipeData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElfRestaurantRecipeData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP637_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp638(::RPG::Client::ElfRestaurantRecipeData* p0, ::RPG::Client::ElfRestaurantRecipeData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ElfRestaurantRecipeData*, ::RPG::Client::ElfRestaurantRecipeData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP638_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp639(::System::UInt64 p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP639_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp640(::System::UInt64 p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP640_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp641(::System::UInt64 p0, ::System::UInt64 p1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP641_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp642(::RPG::Client::ElfShopItemData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ElfShopItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP642_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp643(::RPG::Client::ElfShopItemData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElfShopItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP643_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp644(::RPG::Client::ElfShopItemData* p0, ::RPG::Client::ElfShopItemData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ElfShopItemData*, ::RPG::Client::ElfShopItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP644_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp645(::RPG::GameCore::MazeBuffData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MazeBuffData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP645_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp646(::RPG::GameCore::MazeBuffData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MazeBuffData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP646_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp647(::RPG::GameCore::MazeBuffData* p0, ::RPG::GameCore::MazeBuffData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::MazeBuffData*, ::RPG::GameCore::MazeBuffData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP647_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp648(::RPG::Client::NewsTickerItem* p0, ::System::UInt32 p1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NewsTickerItem*, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP648_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp649(::RPG::Client::PlanetFesTradingCardApplyItem* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesTradingCardApplyItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP649_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp650(::RPG::Client::PlanetFesTradingCardApplyItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesTradingCardApplyItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP650_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp651(::RPG::Client::PlanetFesTradingCardApplyItem* p0, ::RPG::Client::PlanetFesTradingCardApplyItem* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlanetFesTradingCardApplyItem*, ::RPG::Client::PlanetFesTradingCardApplyItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP651_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp652(::RPG::Client::PlanetFesSkillPhase* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesSkillPhase*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP652_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp653(::RPG::Client::PlanetFesSkillPhase* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesSkillPhase*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP653_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp654(::RPG::Client::PlanetFesSkillPhase* p0, ::RPG::Client::PlanetFesSkillPhase* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlanetFesSkillPhase*, ::RPG::Client::PlanetFesSkillPhase*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP654_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp655(::RPG::Client::IRogueTournBuildRefDataItem* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP655_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp656(::RPG::Client::IRogueTournBuildRefDataItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP656_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp657(::RPG::Client::IRogueTournBuildRefDataItem* p0, ::RPG::Client::IRogueTournBuildRefDataItem* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IRogueTournBuildRefDataItem*, ::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP657_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp658(::RPG::Client::ParkourRank* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ParkourRank*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP658_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp659(::RPG::Client::ParkourRank* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourRank*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP659_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp660(::RPG::Client::ParkourRank* p0, ::RPG::Client::ParkourRank* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ParkourRank*, ::RPG::Client::ParkourRank*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP660_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp661(::RPG::GameCore::IAdventurePlayerCommonRowWrap* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::IAdventurePlayerCommonRowWrap*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP661_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp662(::RPG::GameCore::IAdventurePlayerCommonRowWrap* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IAdventurePlayerCommonRowWrap*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP662_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp663(::RPG::GameCore::IAdventurePlayerCommonRowWrap* p0, ::RPG::GameCore::IAdventurePlayerCommonRowWrap* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::IAdventurePlayerCommonRowWrap*, ::RPG::GameCore::IAdventurePlayerCommonRowWrap*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP663_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp664(::RPG::GameCore::AdventurePlayerRow_AdventurePlayerCommonRowWrap* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdventurePlayerRow_AdventurePlayerCommonRowWrap*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP664_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp665(::RPG::GameCore::AdventurePlayerRow_AdventurePlayerCommonRowWrap* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventurePlayerRow_AdventurePlayerCommonRowWrap*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP665_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp666(::RPG::GameCore::AdventurePlayerRow_AdventurePlayerCommonRowWrap* p0, ::RPG::GameCore::AdventurePlayerRow_AdventurePlayerCommonRowWrap* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::AdventurePlayerRow_AdventurePlayerCommonRowWrap*, ::RPG::GameCore::AdventurePlayerRow_AdventurePlayerCommonRowWrap*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP666_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp667(::RPG::Client::IFateGameRoundSettleDmgSourceItem* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IFateGameRoundSettleDmgSourceItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP667_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp668(::RPG::Client::IFateGameRoundSettleDmgSourceItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IFateGameRoundSettleDmgSourceItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP668_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp669(::RPG::Client::IFateGameRoundSettleDmgSourceItem* p0, ::RPG::Client::IFateGameRoundSettleDmgSourceItem* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IFateGameRoundSettleDmgSourceItem*, ::RPG::Client::IFateGameRoundSettleDmgSourceItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP669_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp670(::RPG::Client::AvatarEnhancedHint* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarEnhancedHint*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP670_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp671(::RPG::Client::AvatarEnhancedHint* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarEnhancedHint*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP671_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp672(::RPG::Client::AvatarEnhancedHint* p0, ::RPG::Client::AvatarEnhancedHint* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::AvatarEnhancedHint*, ::RPG::Client::AvatarEnhancedHint*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP672_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp673(::RPG::Client::FateHandbookHouguItem* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateHandbookHouguItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP673_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp674(::RPG::Client::FateHandbookHouguItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateHandbookHouguItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP674_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp675(::RPG::Client::FateHandbookHouguItem* p0, ::RPG::Client::FateHandbookHouguItem* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FateHandbookHouguItem*, ::RPG::Client::FateHandbookHouguItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP675_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp676(::RPG::Client::FateHandbookReijuItem* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateHandbookReijuItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP676_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp677(::RPG::Client::FateHandbookReijuItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateHandbookReijuItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP677_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp678(::RPG::Client::FateHandbookReijuItem* p0, ::RPG::Client::FateHandbookReijuItem* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FateHandbookReijuItem*, ::RPG::Client::FateHandbookReijuItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP678_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp679(::RPG::Client::GridFightOrbData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightOrbData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP679_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp680(::RPG::Client::GridFightOrbData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightOrbData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP680_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp681(::RPG::Client::GridFightOrbData* p0, ::RPG::Client::GridFightOrbData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightOrbData*, ::RPG::Client::GridFightOrbData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP681_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp682(::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP682_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp683(::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP683_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp684(::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* p0, ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*, ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP684_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp685(::RPG::Client::BaseGachaGroupData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BaseGachaGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP685_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp686(::RPG::Client::BaseGachaGroupData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGachaGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP686_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp687(::RPG::Client::BaseGachaGroupData* p0, ::RPG::Client::BaseGachaGroupData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::BaseGachaGroupData*, ::RPG::Client::BaseGachaGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP687_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp688(::RPG::Client::DrinkMakerCheersBartendDrinkDataExtend* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DrinkMakerCheersBartendDrinkDataExtend*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP688_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp689(::RPG::Client::DrinkMakerCheersBartendDrinkDataExtend* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerCheersBartendDrinkDataExtend*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP689_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp690(::RPG::Client::DrinkMakerCheersBartendDrinkDataExtend* p0, ::RPG::Client::DrinkMakerCheersBartendDrinkDataExtend* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DrinkMakerCheersBartendDrinkDataExtend*, ::RPG::Client::DrinkMakerCheersBartendDrinkDataExtend*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP690_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp691(::RPG::GameCore::HipplenGameGradeType p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HipplenGameGradeType))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP691_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp692(::Class_2_CFE01593AA29BD1C_Class_1_22046C69D06B0F53* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_CFE01593AA29BD1C_Class_1_22046C69D06B0F53*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP692_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp693(::RPG::Client::GridFightRole* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP693_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp694(::RPG::Client::GridFightGridData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP694_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp695(::System::Object* p0, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs* p1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP695_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp696(::System::Object* p0, ::System::ComponentModel::PropertyChangedEventArgs* p1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP696_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp697(::RPG::Client::GridFightMonsterAffixConfig* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightMonsterAffixConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP697_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp698(::RPG::Client::GridFightMonsterAffixConfig* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightMonsterAffixConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP698_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp699(::RPG::Client::GridFightMonsterAffixConfig* p0, ::RPG::Client::GridFightMonsterAffixConfig* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightMonsterAffixConfig*, ::RPG::Client::GridFightMonsterAffixConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP699_OFFSET))(this, p0, p1);
		}

		::System::Single __Gen_Delegate_Imp700(::UnityEngine::UI::ILayoutElement* p0)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::UI::ILayoutElement*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP700_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp701(::RPG::Client::GridFightTrait* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP701_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp702(::RPG::Client::GridFightTrait* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP702_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp703(::RPG::Client::GridFightTrait* p0, ::RPG::Client::GridFightTrait* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightTrait*, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP703_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp704(::RPG::Client::DrinkMakerCheersGroupData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DrinkMakerCheersGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP704_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp705(::RPG::Client::DrinkMakerCheersGroupData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerCheersGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP705_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp706(::RPG::Client::DrinkMakerCheersGroupData* p0, ::RPG::Client::DrinkMakerCheersGroupData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DrinkMakerCheersGroupData*, ::RPG::Client::DrinkMakerCheersGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP706_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp707(::RPG::Client::DrinkMakerCheersGuestCommentData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DrinkMakerCheersGuestCommentData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP707_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp708(::RPG::Client::DrinkMakerCheersGuestCommentData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerCheersGuestCommentData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP708_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp709(::RPG::Client::DrinkMakerCheersGuestCommentData* p0, ::RPG::Client::DrinkMakerCheersGuestCommentData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DrinkMakerCheersGuestCommentData*, ::RPG::Client::DrinkMakerCheersGuestCommentData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP709_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp710(::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP710_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp711(::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP711_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp712(::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>* p0, ::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>*, ::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP712_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp713(::RPG::Client::RoleTrialActivityData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RoleTrialActivityData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP713_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp714(::RPG::Client::RoleTrialActivityData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RoleTrialActivityData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP714_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp715(::RPG::Client::RoleTrialActivityData* p0, ::RPG::Client::RoleTrialActivityData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RoleTrialActivityData*, ::RPG::Client::RoleTrialActivityData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP715_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp716(::System::ValueTuple_2<::System::Boolean, ::Enum_3_F80BFD5B986D5503_4> p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::Boolean, ::Enum_3_F80BFD5B986D5503_4>))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP716_OFFSET))(this, p0);
		}

		::System::ValueTuple_2<::System::Boolean, ::Enum_3_F80BFD5B986D5503_4> __Gen_Delegate_Imp717(::System::Exception* p0)
		{
			return ((::System::ValueTuple_2<::System::Boolean, ::Enum_3_F80BFD5B986D5503_4>(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP717_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp718(::System::ValueTuple_2<::System::Boolean, ::Enum_3_F80BFD5B986D5503_4> p0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::ValueTuple_2<::System::Boolean, ::Enum_3_F80BFD5B986D5503_4>))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP718_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp719(::System::ValueTuple_2<::System::Boolean, ::Enum_3_F80BFD5B986D5503_4> p0)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::System::ValueTuple_2<::System::Boolean, ::Enum_3_F80BFD5B986D5503_4>))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP719_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp720(::RPG::GameCore::MainMissionSortedItem* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MainMissionSortedItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP720_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp721(::RPG::GameCore::MainMissionSortedItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MainMissionSortedItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP721_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp722(::RPG::GameCore::MainMissionSortedItem* p0, ::RPG::GameCore::MainMissionSortedItem* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::MainMissionSortedItem*, ::RPG::GameCore::MainMissionSortedItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP722_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp723(::RPG::GameCore::PerformanceSkipOverrideRow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PerformanceSkipOverrideRow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP723_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp724(::RPG::Client::GridFightMonsterCampConfig* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightMonsterCampConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP724_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp725(::RPG::Client::GridFightMonsterCampConfig* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightMonsterCampConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP725_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp726(::RPG::Client::GridFightMonsterCampConfig* p0, ::RPG::Client::GridFightMonsterCampConfig* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightMonsterCampConfig*, ::RPG::Client::GridFightMonsterCampConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP726_OFFSET))(this, p0, p1);
		}

		::SuperScrollView::LoopFlexibleGridViewItem* __Gen_Delegate_Imp727(::XLua::LuaTable* p0, ::SuperScrollView::LoopFlexibleGridView* p1, ::System::Int32 p2)
		{
			return ((::SuperScrollView::LoopFlexibleGridViewItem*(*)(::PVOID, ::XLua::LuaTable*, ::SuperScrollView::LoopFlexibleGridView*, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP727_OFFSET))(this, p0, p1, p2);
		}

		::System::Boolean __Gen_Delegate_Imp728(::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP728_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp729(::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP729_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp730(::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData* p0, ::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData*, ::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP730_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp731(::RPG::Client::ActivityHipplen::ActivityHipplenTraitData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenTraitData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP731_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp732(::RPG::Client::ActivityHipplen::ActivityHipplenTraitData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenTraitData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP732_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp733(::RPG::Client::ActivityHipplen::ActivityHipplenTraitData* p0, ::RPG::Client::ActivityHipplen::ActivityHipplenTraitData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenTraitData*, ::RPG::Client::ActivityHipplen::ActivityHipplenTraitData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP733_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp734(::RPG::Client::GridFightRole* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP734_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp735(::RPG::Client::GridFightRole* p0, ::RPG::Client::GridFightRole* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightRole*, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP735_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp736(::RPG::Client::GridFightAugment* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightAugment*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP736_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp737(::RPG::Client::GridFightAugment* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightAugment*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP737_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp738(::RPG::Client::GridFightAugment* p0, ::RPG::Client::GridFightAugment* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightAugment*, ::RPG::Client::GridFightAugment*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP738_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp739(::RPG::Client::GridFightHandBookEquipItemConfig* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightHandBookEquipItemConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP739_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp740(::RPG::Client::GridFightHandBookEquipItemConfig* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightHandBookEquipItemConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP740_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp741(::RPG::Client::GridFightHandBookEquipItemConfig* p0, ::RPG::Client::GridFightHandBookEquipItemConfig* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightHandBookEquipItemConfig*, ::RPG::Client::GridFightHandBookEquipItemConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP741_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp742(::System::Boolean p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP742_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp743(::System::Boolean p0, ::System::Boolean p1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP743_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp744(::RPG::Client::CakeRaceBattleItemDataItem* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CakeRaceBattleItemDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP744_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp745(::RPG::Client::CakeRaceBattleItemDataItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceBattleItemDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP745_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp746(::RPG::Client::CakeRaceBattleItemDataItem* p0, ::RPG::Client::CakeRaceBattleItemDataItem* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::CakeRaceBattleItemDataItem*, ::RPG::Client::CakeRaceBattleItemDataItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP746_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp747(::UnityEngine::EventSystems::RaycastResult p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::RaycastResult))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP747_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp748(::UnityEngine::EventSystems::RaycastResult p0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::RaycastResult))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP748_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp749(::UnityEngine::EventSystems::RaycastResult p0, ::UnityEngine::EventSystems::RaycastResult p1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::EventSystems::RaycastResult, ::UnityEngine::EventSystems::RaycastResult))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP749_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp750(::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP750_OFFSET))(this, p0);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>* __Gen_Delegate_Imp751(::System::Exception* p0)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP751_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp752(::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>* p0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP752_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp753(::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>* p0)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHotData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP753_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp754(::RPG::Client::ActivityHipplen::ActivityHipplenGiftData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGiftData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP754_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp755(::RPG::Client::ActivityHipplen::ActivityHipplenGiftData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGiftData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP755_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp756(::RPG::Client::ActivityHipplen::ActivityHipplenGiftData* p0, ::RPG::Client::ActivityHipplen::ActivityHipplenGiftData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGiftData*, ::RPG::Client::ActivityHipplen::ActivityHipplenGiftData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP756_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp757(::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefData*>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightGameRefData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP757_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp758(::RPG::Client::GridFightGameRefData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP758_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp759(::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_B1050BB558D637BF*>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_B1050BB558D637BF*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP759_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp760(::RPG::Client::GridFightGameRefHttpRspBody_1<::Class_1_47EB23CB5C4B2615_33*>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefHttpRspBody_1<::Class_1_47EB23CB5C4B2615_33*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP760_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp761(::RPG::Client::TeamBuild* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TeamBuild*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP761_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp762(::RPG::Client::TeamBuild* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamBuild*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP762_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp763(::RPG::Client::TeamBuild* p0, ::RPG::Client::TeamBuild* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TeamBuild*, ::RPG::Client::TeamBuild*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP763_OFFSET))(this, p0, p1);
		}

		::RPG::Client::UIBubbleItem* __Gen_Delegate_Imp764(::XLua::LuaTable* p0, ::RPG::Client::UIBubbleManager* p1)
		{
			return ((::RPG::Client::UIBubbleItem*(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::UIBubbleManager*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP764_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp765(::RPG::Client::GridFightOrbEntityData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightOrbEntityData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP765_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp766(::RPG::Client::GridFightOrbEntityData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightOrbEntityData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP766_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp767(::RPG::Client::GridFightOrbEntityData* p0, ::RPG::Client::GridFightOrbEntityData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightOrbEntityData*, ::RPG::Client::GridFightOrbEntityData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP767_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp768(::RPG::Client::ActivityHotData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityHotData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP768_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp769(::RPG::Client::ActivityHotData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHotData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP769_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp770(::RPG::Client::ActivityHotData* p0, ::RPG::Client::ActivityHotData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityHotData*, ::RPG::Client::ActivityHotData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP770_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp771(::RPG::Client::ActivityHotCoreRewardData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityHotCoreRewardData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP771_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp772(::RPG::Client::ActivityHotCoreRewardData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHotCoreRewardData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP772_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp773(::RPG::Client::ActivityHotCoreRewardData* p0, ::RPG::Client::ActivityHotCoreRewardData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityHotCoreRewardData*, ::RPG::Client::ActivityHotCoreRewardData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP773_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp774(::RPG::Client::MatchPlayRecord* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchPlayRecord*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP774_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp775(::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP775_OFFSET))(this, p0);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>* __Gen_Delegate_Imp776(::System::Exception* p0)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP776_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp777(::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>* p0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP777_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp778(::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>* p0)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::FriendRankingInfo*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP778_OFFSET))(this, p0);
		}

		::RPG::Client::LuaUIController* __Gen_Delegate_Imp779(::System::Exception* p0)
		{
			return ((::RPG::Client::LuaUIController*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP779_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp780(::RPG::Client::LuaUIController* p0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::LuaUIController*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP780_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp781(::RPG::Client::LuaUIController* p0)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::Client::LuaUIController*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP781_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp782(::RPG::Client::GridFightDivisionLevelReward* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightDivisionLevelReward*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP782_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp783(::RPG::Client::GridFightDivisionLevelReward* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightDivisionLevelReward*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP783_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp784(::RPG::Client::GridFightDivisionLevelReward* p0, ::RPG::Client::GridFightDivisionLevelReward* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightDivisionLevelReward*, ::RPG::Client::GridFightDivisionLevelReward*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP784_OFFSET))(this, p0, p1);
		}

		::System::Int32 __Gen_Delegate_Imp785(::RPG::Client::AvatarData* p0)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP785_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp786(::RPG::Client::IResidentActivityPanelData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IResidentActivityPanelData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP786_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp787(::RPG::Client::IResidentActivityPanelData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IResidentActivityPanelData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP787_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp788(::RPG::Client::IResidentActivityPanelData* p0, ::RPG::Client::IResidentActivityPanelData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IResidentActivityPanelData*, ::RPG::Client::IResidentActivityPanelData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP788_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp789(::RPG::Client::GridFightHandbookRole* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightHandbookRole*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP789_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp790(::RPG::Client::GridFightHandbookRole* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightHandbookRole*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP790_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp791(::RPG::Client::GridFightHandbookRole* p0, ::RPG::Client::GridFightHandbookRole* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightHandbookRole*, ::RPG::Client::GridFightHandbookRole*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP791_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp792(::RPG::Client::GridFightPortalData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightPortalData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP792_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp793(::RPG::Client::GridFightPortalData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightPortalData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP793_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp794(::RPG::Client::GridFightPortalData* p0, ::RPG::Client::GridFightPortalData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightPortalData*, ::RPG::Client::GridFightPortalData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP794_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp795(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP795_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp796(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP796_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp797(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* p0, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP797_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp798(::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleProperty*>* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleProperty*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP798_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp799(::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleProperty*>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleProperty*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP799_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp800(::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleProperty*>* p0, ::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleProperty*>* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleProperty*>*, ::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleProperty*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP800_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp801(::RPG::Client::BaseLobby* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP801_OFFSET))(this, p0);
		}

		::RPG::Client::BaseLobby* __Gen_Delegate_Imp802(::System::Exception* p0)
		{
			return ((::RPG::Client::BaseLobby*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP802_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp803(::RPG::Client::BaseLobby* p0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP803_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp804(::RPG::Client::BaseLobby* p0)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP804_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp805(::RPG::Client::GridFightEquipItemConfig* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP805_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp806(::RPG::Client::GridFightEquipItemConfig* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP806_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp807(::RPG::Client::GridFightEquipItemConfig* p0, ::RPG::Client::GridFightEquipItemConfig* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP807_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp808(::RPG::Client::TarotBookDeleteData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TarotBookDeleteData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP808_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp809(::RPG::Client::TarotBookDeleteData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TarotBookDeleteData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP809_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp810(::RPG::Client::TarotBookDeleteData* p0, ::RPG::Client::TarotBookDeleteData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TarotBookDeleteData*, ::RPG::Client::TarotBookDeleteData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP810_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp811(::RPG::Client::BaseGameFlow* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP811_OFFSET))(this, p0);
		}

		::RPG::Client::BaseGameFlow* __Gen_Delegate_Imp812(::System::Exception* p0)
		{
			return ((::RPG::Client::BaseGameFlow*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP812_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp813(::RPG::Client::BaseGameFlow* p0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP813_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp814(::RPG::Client::BaseGameFlow* p0)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP814_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp815(::XLua::LuaTable* p0, ::RPG::Client::PenaconyEndmostChronicleEvent* p1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::PenaconyEndmostChronicleEvent*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP815_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp816(::RPG::Client::DiceCombat::DiceCombatRankLevelData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatRankLevelData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP816_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp817(::RPG::Client::DiceCombat::DiceCombatRankLevelData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatRankLevelData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP817_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp818(::RPG::Client::DiceCombat::DiceCombatRankLevelData* p0, ::RPG::Client::DiceCombat::DiceCombatRankLevelData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatRankLevelData*, ::RPG::Client::DiceCombat::DiceCombatRankLevelData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP818_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp819(::RPG::Client::CakeRaceHandbookCatItem* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CakeRaceHandbookCatItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP819_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp820(::RPG::Client::CakeRaceHandbookCatItem* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceHandbookCatItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP820_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp821(::RPG::Client::CakeRaceHandbookCatItem* p0, ::RPG::Client::CakeRaceHandbookCatItem* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::CakeRaceHandbookCatItem*, ::RPG::Client::CakeRaceHandbookCatItem*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP821_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp822(::RPG::Client::DiceCombat::DiceCombatCommunicateData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCommunicateData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP822_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp823(::RPG::Client::DiceCombat::DiceCombatCommunicateData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCommunicateData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP823_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp824(::RPG::Client::DiceCombat::DiceCombatCommunicateData* p0, ::RPG::Client::DiceCombat::DiceCombatCommunicateData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCommunicateData*, ::RPG::Client::DiceCombat::DiceCombatCommunicateData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP824_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp825(::RPG::Client::DiceCombat::DiceCombatCollectionCardInfo* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCollectionCardInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP825_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp826(::RPG::Client::DiceCombat::DiceCombatCollectionCardInfo* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCollectionCardInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP826_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp827(::RPG::Client::DiceCombat::DiceCombatCollectionCardInfo* p0, ::RPG::Client::DiceCombat::DiceCombatCollectionCardInfo* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCollectionCardInfo*, ::RPG::Client::DiceCombat::DiceCombatCollectionCardInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP827_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp828(::RPG::Client::ChimeraDuelMasterData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChimeraDuelMasterData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP828_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp829(::RPG::Client::ChimeraDuelMasterData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelMasterData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP829_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp830(::RPG::Client::ChimeraDuelMasterData* p0, ::RPG::Client::ChimeraDuelMasterData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChimeraDuelMasterData*, ::RPG::Client::ChimeraDuelMasterData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP830_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp831(::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP831_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp832(::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP832_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp833(::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo* p0, ::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo*, ::RPG::Client::DiceCombat::DiceCombatCollectionDiceInfo*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP833_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp834(::System::UInt32 p0, ::Google::Protobuf::ByteString* p1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP834_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp835(::RPG::Client::DiceCombatDiceConfigData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DiceCombatDiceConfigData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP835_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp836(::RPG::Client::DiceCombatDiceConfigData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombatDiceConfigData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP836_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp837(::RPG::Client::DiceCombatDiceConfigData* p0, ::RPG::Client::DiceCombatDiceConfigData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DiceCombatDiceConfigData*, ::RPG::Client::DiceCombatDiceConfigData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP837_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp838(::RPG::Client::DiceCombat::DiceCombatGlossaryTermData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatGlossaryTermData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP838_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp839(::RPG::Client::DiceCombat::DiceCombatGlossaryTermData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatGlossaryTermData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP839_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp840(::RPG::Client::DiceCombat::DiceCombatGlossaryTermData* p0, ::RPG::Client::DiceCombat::DiceCombatGlossaryTermData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatGlossaryTermData*, ::RPG::Client::DiceCombat::DiceCombatGlossaryTermData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP840_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp841(::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP841_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp842(::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP842_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp843(::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData* p0, ::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData*, ::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP843_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp844(::RPG::Client::AssistData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AssistData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP844_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp845(::RPG::Client::AssistData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AssistData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP845_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp846(::RPG::Client::AssistData* p0, ::RPG::Client::AssistData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::AssistData*, ::RPG::Client::AssistData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP846_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp847(::RPG::Client::GridFightPresentEntity* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightPresentEntity*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP847_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp848(::RPG::Client::GridFightPresentEntity* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightPresentEntity*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP848_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp849(::RPG::Client::GridFightPresentEntity* p0, ::RPG::Client::GridFightPresentEntity* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightPresentEntity*, ::RPG::Client::GridFightPresentEntity*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP849_OFFSET))(this, p0, p1);
		}

		::UnityEngine::GameObject* __Gen_Delegate_Imp850()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP850_OFFSET))(this);
		}

		::System::Boolean __Gen_Delegate_Imp851(::RPG::Client::AvatarOutfitUnit* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarOutfitUnit*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP851_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp852(::RPG::Client::AvatarOutfitUnit* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarOutfitUnit*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP852_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp853(::RPG::Client::AvatarOutfitUnit* p0, ::RPG::Client::AvatarOutfitUnit* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::AvatarOutfitUnit*, ::RPG::Client::AvatarOutfitUnit*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP853_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp854(::XLua::LuaTable* p0, ::Class_0_16E4307DCC419505_301* p1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::Class_0_16E4307DCC419505_301*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP854_OFFSET))(this, p0, p1);
		}

		::System::Boolean __Gen_Delegate_Imp855(::RPG::Client::RogueTournArchiveData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournArchiveData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP855_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp856(::RPG::Client::RogueTournArchiveData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournArchiveData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP856_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp857(::RPG::Client::RogueTournArchiveData* p0, ::RPG::Client::RogueTournArchiveData* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueTournArchiveData*, ::RPG::Client::RogueTournArchiveData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP857_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp858(::RPG::Client::LightConeRecommendData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LightConeRecommendData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP858_OFFSET))(this, p0);
		}

		::RPG::Client::LightConeRecommendData* __Gen_Delegate_Imp859(::System::Exception* p0)
		{
			return ((::RPG::Client::LightConeRecommendData*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP859_OFFSET))(this, p0);
		}

		::RPG::Client::Promises::IPromise* __Gen_Delegate_Imp860(::RPG::Client::LightConeRecommendData* p0)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::LightConeRecommendData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP860_OFFSET))(this, p0);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>* __Gen_Delegate_Imp861(::RPG::Client::LightConeRecommendData* p0)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::Client::LightConeRecommendData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP861_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp862(::RPG::Client::ChatReportReason* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChatReportReason*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP862_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp863(::RPG::Client::ChatReportReason* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChatReportReason*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP863_OFFSET))(this, p0);
		}

		::System::Int32 __Gen_Delegate_Imp864(::RPG::Client::ChatReportReason* p0, ::RPG::Client::ChatReportReason* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChatReportReason*, ::RPG::Client::ChatReportReason*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP864_OFFSET))(this, p0, p1);
		}

		::System::Int32 __Gen_Delegate_Imp865(::RPG::GameCore::TurnBasedModifierInstance* p0, ::RPG::GameCore::TurnBasedModifierInstance* p1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP865_OFFSET))(this, p0, p1);
		}

		::SuperScrollView::LoopStaggeredGridViewItem* __Gen_Delegate_Imp866(::System::Int32 p0, ::System::Int32 p1)
		{
			return ((::SuperScrollView::LoopStaggeredGridViewItem*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP866_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp867(::Class_1_E3A8B05AA1BBEE81* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E3A8B05AA1BBEE81*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP867_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp868(::Class_0_16E4307DCC419505_302* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_302*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP868_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp869(::Class_0_16E4307DCC419505_302* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_302*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP869_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp870(::RPG::Client::LittleGame::FiveDim::MiniGameEventReason p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::MiniGameEventReason))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP870_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp871(::Struct_2_FEFADCB82FEB841E_3 p0)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_FEFADCB82FEB841E_3))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP871_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp872(::Class_0_16E4307DCC419505_303* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_303*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP872_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp873(::RPG::Client::MapProp* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapProp*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP873_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp874(::System::Collections::Generic::IComparer_1<::RPG::Client::AvatarData*>* p0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IComparer_1<::RPG::Client::AvatarData*>*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP874_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp875(::XLua::LuaTable* p0, ::System::Int32 p1, ::System::Object* p2)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP875_OFFSET))(this, p0, p1, p2);
		}

		::System::Boolean __Gen_Delegate_Imp876(::RPG::Client::GridFightEquipItemData* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP876_OFFSET))(this, p0);
		}

		::System::Boolean __Gen_Delegate_Imp877(::XLua::LuaTable* p0)
		{
			return ((::System::Boolean(*)(::PVOID, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP877_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp878(::Class_1_303D5A33D1401D59* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP878_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp879(::UnityEngine::GameObject* p0, ::RPG::Client::OpenWorld::StreamingItemData* p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP879_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp880(::RPG::Client::OpenWorld::StreamingItemData* p0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP880_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp881(::UnityEngine::GameObject* p0, ::UnityEngine::GameObject* p1, ::RPG::Client::OpenWorld::StreamingItemData* p2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP881_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp882(::Class_1_BDA8DEEF59BE3031* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BDA8DEEF59BE3031*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP882_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp883(::System::Int32 p0, ::System::Int32 p1, ::System::Int32 p2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP883_OFFSET))(this, p0, p1, p2);
		}

		::System::Void __Gen_Delegate_Imp884(::Spine::TrackEntry* p0)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP884_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp885(::Spine::TrackEntry* p0, ::Spine::Event* p1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*, ::Spine::Event*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP885_OFFSET))(this, p0, p1);
		}

		::System::Void __Gen_Delegate_Imp886(::UnityEngine::UI::Graphic* p0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Graphic*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP886_OFFSET))(this, p0);
		}

		::System::Void __Gen_Delegate_Imp887(::UnityEngine::UI::Graphic* p0, ::System::Boolean p1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Graphic*, ::System::Boolean))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE___GEN_DELEGATE_IMP887_OFFSET))(this, p0, p1);
		}

		::System::Delegate* GetDelegateByType(::System::Type* type)
		{
			return ((::System::Delegate*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE_GETDELEGATEBYTYPE_OFFSET))(this, type);
		}

		::System::Void PCall(::System::IntPtr L, ::System::Int32 nArgs, ::System::Int32 nResults, ::System::Int32 errFunc)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE_PCALL_OFFSET))(this, L, nArgs, nResults, errFunc);
		}

		::System::Void Action()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_DELEGATEBRIDGE_ACTION_OFFSET))(this);
		}
	};
}
