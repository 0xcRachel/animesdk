#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightPrepWaitCustomTimeType.h"
#include "unitysdk/System/Object.h"

class Class_1_32612C379DA34D00;
class Class_1_455008579EB95638_39;
class Class_1_AF57B48D254FB408;
class Class_1_D17272E82AE804C2_360;
class Class_1_F95E70757E85280D;
namespace RPG::Client { class GridFightConsumableItemData; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightGameSession; }
namespace RPG::Client { class GridFightGameTutorialData; }
namespace RPG::Client { class GridFightGameTutorialTask; }
namespace RPG::Client { class GridFightGridData; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class GridFightWaitDragConsumable; }
namespace RPG::GameCore { class GridFightWaitDragEquip; }
namespace RPG::GameCore { class GridFightWaitDragRole; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Text { class StringBuilder; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_CHECKHASPREPEFFECT_OFFSET UNITYSDK_OFFSET(0x1743E9D0)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_CHECKSHOWPOPUPPANELS_OFFSET UNITYSDK_OFFSET(0x1743EA30)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_CLOSEBLOCK_OFFSET UNITYSDK_OFFSET(0x1743DBF0)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x174414E0)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_GET_CURTASK_OFFSET UNITYSDK_OFFSET(0x174402F0)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_GET_FINISHEDTASKIDS_OFFSET UNITYSDK_OFFSET(0x17440310)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_GET_ISINBLOCK_OFFSET UNITYSDK_OFFSET(0x1743E8D0)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_GET_ISINGAME_OFFSET UNITYSDK_OFFSET(0x17440120)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x174410E0)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_ISCONSUMABLEBLOCKBYTUTORIAL_OFFSET UNITYSDK_OFFSET(0x1743E620)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_ISEQUIPBLOCKBYTUTORIAL_OFFSET UNITYSDK_OFFSET(0x1743E530)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_ISGRIDBLOCKBYTUTORIAL_OFFSET UNITYSDK_OFFSET(0x1743E400)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_ONBATTLEREADY_OFFSET UNITYSDK_OFFSET(0x17441A10)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_REGISTERCUSTOMWAITCALLBACK_OFFSET UNITYSDK_OFFSET(0x17440900)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_REGISTERWAITDRAGCONSUMABLE_OFFSET UNITYSDK_OFFSET(0x1743E0D0)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_REGISTERWAITDRAGEQUIP_OFFSET UNITYSDK_OFFSET(0x1743DE90)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_REGISTERWAITDRAGROLE_OFFSET UNITYSDK_OFFSET(0x1743D930)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_RESETTUTORIALOPPARAMS_OFFSET UNITYSDK_OFFSET(0x174417D0)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_SENDCUSTOMSTR_OFFSET UNITYSDK_OFFSET(0x1743FCC0)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_SETCHECKEFFECTLUAFUNC_OFFSET UNITYSDK_OFFSET(0x1743E930)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_SETCHECKPOPUPPANELSLUAFUNC_OFFSET UNITYSDK_OFFSET(0x1743E980)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_SETLUATABLETUTORIALMANAGER_OFFSET UNITYSDK_OFFSET(0x1743E8E0)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_SET_CURTASK_OFFSET UNITYSDK_OFFSET(0x17440300)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_SET_FINISHEDTASKIDS_OFFSET UNITYSDK_OFFSET(0x17440320)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_SET_ISINBLOCK_OFFSET UNITYSDK_OFFSET(0x1743E710)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_STARTBLOCK_OFFSET UNITYSDK_OFFSET(0x1743DE00)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_SYNCTASKUPDATE_OFFSET UNITYSDK_OFFSET(0x1743EFF0)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_SYNC_OFFSET UNITYSDK_OFFSET(0x1743EA90)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_TRIGGERTUTORIAL_OFFSET UNITYSDK_OFFSET(0x17440010)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_TRYSTARTTASKLEVEL_OFFSET UNITYSDK_OFFSET(0x1743FF40)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_UNREGISTERCUSTOMWAITCALLBACK_OFFSET UNITYSDK_OFFSET(0x17440EA0)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__CHECKANDDISPATCHCUSTOMWAITCALLBACK_OFFSET UNITYSDK_OFFSET(0x17440990)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x17441AD0)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__GETCURRENTGAMEWORLD_OFFSET UNITYSDK_OFFSET(0x17440140)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__ONCONSUMABLEUSED_OFFSET UNITYSDK_OFFSET(0x1743E860)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__ONEQUIPDRESSTOROLE_OFFSET UNITYSDK_OFFSET(0x1743E7F0)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__ONGRIDFIGHTEFFECTFINISH_OFFSET UNITYSDK_OFFSET(0x17440FF0)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__ONGRIDFIGHTPREPHIDEALLPANELS_OFFSET UNITYSDK_OFFSET(0x17441090)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__ONGRIDFIGHTSHOWGUIDETALK_OFFSET UNITYSDK_OFFSET(0x17440330)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__ONGRIDFIGHTTUTORIALOP_OFFSET UNITYSDK_OFFSET(0x17440570)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__ONGRIDFIGHTTUTORIALSHOWGUIDEHINTWITHTEXT_OFFSET UNITYSDK_OFFSET(0x17440440)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__ONGRIDFIGHTUPDATE_OFFSET UNITYSDK_OFFSET(0x17441040)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__ONMOVESUCCEED_OFFSET UNITYSDK_OFFSET(0x1743E780)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__ONTRANSITION_OFFSET UNITYSDK_OFFSET(0x17441A60)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__ONTUTORIALFINISH_OFFSET UNITYSDK_OFFSET(0x17441830)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__SYNCCURTASK_OFFSET UNITYSDK_OFFSET(0x1743EB00)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__SYNCFINISHTASK_OFFSET UNITYSDK_OFFSET(0x1743EC90)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__TRYCREATECURTASKLEVEL_OFFSET UNITYSDK_OFFSET(0x1743FD80)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__TRYREMOVECURTASKLEVEL_OFFSET UNITYSDK_OFFSET(0x1743FB00)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTutorialManager_TypeDefinitionIndex = 60306;

	class GridFightTutorialManager : public ::System::Object
	{
	public:
		// static const ::System::String* _AcceptTaskUnlockFormat; // 0x0
		// static const ::System::String* _FinishTaskUnlockFormat; // 0x0
		// static const ::System::String* _TutorialContainerName; // 0x0
		// static const ::System::String* _TriggerLGStr; // 0x0
		::Class_1_AF57B48D254FB408* _TutorialDVEvaluator; // 0x10
		::System::Collections::Generic::HashSet_1<::RPG::Client::GridFightConsumableItemData*>* _BlockExceptConsumableDtas; // 0x18
		::System::Collections::Generic::HashSet_1<::RPG::Client::GridFightRole*>* _BlockExceptRoles; // 0x20
		::RPG::Client::Promises::Promise_1<::System::Boolean>* _WaitDragPromise; // 0x28
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GridFightPrepWaitCustomTimeType, ::System::Action*>* _WaitCustomTimeCallbacks; // 0x30
		::RPG::Client::GridFightGameTutorialTask* _CurTask_k__BackingField; // 0x38
		::System::Func_2<::XLua::LuaTable*, ::System::Boolean>* _CheckHasEffectLuaFunc; // 0x40
		::System::Collections::Generic::HashSet_1<::RPG::Client::GridFightEquipItemData*>* _BlockExceptEquipDtas; // 0x48
		::RPG::GameCore::GameEntity* _CurTaskLevelEntity; // 0x50
		::System::Func_2<::XLua::LuaTable*, ::System::Boolean>* _CheckShowPopupPanelsLuaFunc; // 0x58
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _FinishedTaskIDs_k__BackingField; // 0x60
		::System::Text::StringBuilder* _SB; // 0x68
		::System::Collections::Generic::HashSet_1<::RPG::Client::GridFightGridData*>* _BlockExceptGridDatas; // 0x70
		::System::Collections::Generic::HashSet_1<::RPG::GameCore::GridFightPrepWaitCustomTimeType>* _WaitDispatchTimeTypes; // 0x78
		::XLua::LuaTable* _LuaTableTutorialManager; // 0x80
		::Class_1_32612C379DA34D00* _DragOpSelector; // 0x88
		::RPG::Client::GridFightGameTutorialData* TutorialData; // 0x90
		::RPG::Client::GridFightGameSession* _CurSession; // 0x98
		::System::Boolean _WaitDragRole; // 0xA0
		::System::Boolean _IsInBlock; // 0xA1
		::System::Boolean _WaitDragConsumable; // 0xA2
		::System::Boolean _WaitDragEquip; // 0xA3

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* RegisterWaitDragRole(::RPG::GameCore::GridFightWaitDragRole* param)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::RPG::GameCore::GridFightWaitDragRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_REGISTERWAITDRAGROLE_OFFSET))(this, param);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* RegisterWaitDragEquip(::RPG::GameCore::GridFightWaitDragEquip* param)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::RPG::GameCore::GridFightWaitDragEquip*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_REGISTERWAITDRAGEQUIP_OFFSET))(this, param);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* RegisterWaitDragConsumable(::RPG::GameCore::GridFightWaitDragConsumable* param)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::RPG::GameCore::GridFightWaitDragConsumable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_REGISTERWAITDRAGCONSUMABLE_OFFSET))(this, param);
		}

		::System::Boolean IsGridBlockByTutorial(::System::UInt32 posIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_ISGRIDBLOCKBYTUTORIAL_OFFSET))(this, posIndex);
		}

		::System::Boolean IsEquipBlockByTutorial(::System::UInt32 equipID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_ISEQUIPBLOCKBYTUTORIAL_OFFSET))(this, equipID);
		}

		::System::Boolean IsConsumableBlockByTutorial(::System::UInt32 consumableID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_ISCONSUMABLEBLOCKBYTUTORIAL_OFFSET))(this, consumableID);
		}

		::System::Void StartBlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_STARTBLOCK_OFFSET))(this);
		}

		::System::Void CloseBlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_CLOSEBLOCK_OFFSET))(this);
		}

		::System::Void _OnMoveSucceed(::System::Object* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__ONMOVESUCCEED_OFFSET))(this, _);
		}

		::System::Void _OnEquipDressToRole(::System::Object* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__ONEQUIPDRESSTOROLE_OFFSET))(this, _);
		}

		::System::Void _OnConsumableUsed(::System::Object* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__ONCONSUMABLEUSED_OFFSET))(this, _);
		}

		::System::Boolean get_IsInBlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_GET_ISINBLOCK_OFFSET))(this);
		}

		::System::Void set_IsInBlock(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_SET_ISINBLOCK_OFFSET))(this, value);
		}

		::System::Void SetLuaTableTutorialManager(::XLua::LuaTable* table)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_SETLUATABLETUTORIALMANAGER_OFFSET))(this, table);
		}

		::System::Void SetCheckEffectLuaFunc(::System::Func_2<::XLua::LuaTable*, ::System::Boolean>* func)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_2<::XLua::LuaTable*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_SETCHECKEFFECTLUAFUNC_OFFSET))(this, func);
		}

		::System::Void SetCheckPopupPanelsLuaFunc(::System::Func_2<::XLua::LuaTable*, ::System::Boolean>* func)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_2<::XLua::LuaTable*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_SETCHECKPOPUPPANELSLUAFUNC_OFFSET))(this, func);
		}

		::System::Boolean CheckHasPrepEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_CHECKHASPREPEFFECT_OFFSET))(this);
		}

		::System::Boolean CheckShowPopupPanels()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_CHECKSHOWPOPUPPANELS_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_455008579EB95638_39* taskInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_39*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_SYNC_OFFSET))(this, taskInfo);
		}

		::System::Void SyncTaskUpdate(::Class_1_F95E70757E85280D* update)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F95E70757E85280D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_SYNCTASKUPDATE_OFFSET))(this, update);
		}

		::System::Void TryStartTaskLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_TRYSTARTTASKLEVEL_OFFSET))(this);
		}

		::System::Void _SyncCurTask(::Class_1_D17272E82AE804C2_360* task)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_360*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__SYNCCURTASK_OFFSET))(this, task);
		}

		::System::Void _SyncFinishTask(::System::Collections::Generic::IList_1<::System::UInt32>* finishedTaskIdList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__SYNCFINISHTASK_OFFSET))(this, finishedTaskIdList);
		}

		::System::Void _TryCreateCurTaskLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__TRYCREATECURTASKLEVEL_OFFSET))(this);
		}

		::System::Void _TryRemoveCurTaskLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__TRYREMOVECURTASKLEVEL_OFFSET))(this);
		}

		::RPG::Client::GridFightGameTutorialTask* get_CurTask()
		{
			return ((::RPG::Client::GridFightGameTutorialTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_GET_CURTASK_OFFSET))(this);
		}

		::System::Void set_CurTask(::RPG::Client::GridFightGameTutorialTask* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameTutorialTask*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_SET_CURTASK_OFFSET))(this, value);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* get_FinishedTaskIDs()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_GET_FINISHEDTASKIDS_OFFSET))(this);
		}

		::System::Void set_FinishedTaskIDs(::System::Collections::Generic::HashSet_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_SET_FINISHEDTASKIDS_OFFSET))(this, value);
		}

		::System::Void _OnGridFightShowGuideTalk(::System::Object* config)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__ONGRIDFIGHTSHOWGUIDETALK_OFFSET))(this, config);
		}

		::System::Void _OnGridFightTutorialShowGuideHintWithText(::System::Object* configObj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__ONGRIDFIGHTTUTORIALSHOWGUIDEHINTWITHTEXT_OFFSET))(this, configObj);
		}

		::System::Void _OnGridFightTutorialOP(::System::Object* op)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__ONGRIDFIGHTTUTORIALOP_OFFSET))(this, op);
		}

		::System::Void RegisterCustomWaitCallback(::RPG::GameCore::GridFightPrepWaitCustomTimeType customWaitType, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightPrepWaitCustomTimeType, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_REGISTERCUSTOMWAITCALLBACK_OFFSET))(this, customWaitType, callback);
		}

		::System::Void UnRegisterCustomWaitCallback(::RPG::GameCore::GridFightPrepWaitCustomTimeType customWaitCallback, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightPrepWaitCustomTimeType, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_UNREGISTERCUSTOMWAITCALLBACK_OFFSET))(this, customWaitCallback, callback);
		}

		::System::Void _OnGridFightEffectFinish(::System::Object* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__ONGRIDFIGHTEFFECTFINISH_OFFSET))(this, _);
		}

		::System::Void _OnGridFightUpdate(::System::Object* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__ONGRIDFIGHTUPDATE_OFFSET))(this, _);
		}

		::System::Void _OnGridFightPrepHideAllPanels(::System::Object* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__ONGRIDFIGHTPREPHIDEALLPANELS_OFFSET))(this, _);
		}

		::System::Void _CheckAndDispatchCustomWaitCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__CHECKANDDISPATCHCUSTOMWAITCALLBACK_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::GridFightGameSession* session)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameSession*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_INIT_OFFSET))(this, session);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void ResetTutorialOpParams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_RESETTUTORIALOPPARAMS_OFFSET))(this);
		}

		::System::Void SendCustomStr(::System::String* str)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_SENDCUSTOMSTR_OFFSET))(this, str);
		}

		::System::Void TriggerTutorial(::System::String* str)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_TRIGGERTUTORIAL_OFFSET))(this, str);
		}

		::RPG::GameCore::GameWorld* _GetCurrentGameWorld()
		{
			return ((::RPG::GameCore::GameWorld*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__GETCURRENTGAMEWORLD_OFFSET))(this);
		}

		::System::Void _OnTutorialFinish(::System::Boolean isTutorialSucc)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__ONTUTORIALFINISH_OFFSET))(this, isTutorialSucc);
		}

		::System::Void OnBattleReady()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_ONBATTLEREADY_OFFSET))(this);
		}

		::System::Void _OnTransition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER__ONTRANSITION_OFFSET))(this);
		}

		::System::Boolean get_IsInGame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER_GET_ISINGAME_OFFSET))(this);
		}
	};
}
