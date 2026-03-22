#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_40.h"
#include "unitysdk/System/Object.h"

class Class_1_0E5DA97E7318165F;
class Class_1_14E02E1F6D70E487_3;
class Class_1_5249F0902D388234;
class Class_1_6AD23B2D1D3B59C7;
class Class_1_6E708EAB438EC183_57;
class Class_1_99BD961747420BEB_38;
class Class_1_B33C6EDD7227DE6C_1;
class Class_1_BF623F6C7CBB9E69;
class Class_1_BF623F6C7CBB9E69_1;
class Class_1_BF623F6C7CBB9E69_2;
class Class_1_F48B67D07D3C17D7_1;
namespace Proto { class MonopolyActionResult; }
namespace RPG::Client { class IMonopolyVisualEffectTrigger; }
namespace RPG::Client { class MonopolyContentTrigger; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_CLEARCURCONTENT_OFFSET UNITYSDK_OFFSET(0x988EDD0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x988C430)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_CHEATDICENUM_OFFSET UNITYSDK_OFFSET(0x98906B0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_CONTENTQUEUE_OFFSET UNITYSDK_OFFSET(0x98908A0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_CURCELLID_OFFSET UNITYSDK_OFFSET(0x98907B0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_CURCELLSTATE_OFFSET UNITYSDK_OFFSET(0x9890740)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_CURCONTENT_OFFSET UNITYSDK_OFFSET(0x98908C0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_CURMAPID_OFFSET UNITYSDK_OFFSET(0x98907D0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_CURRENCYNUM_OFFSET UNITYSDK_OFFSET(0x98906C0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_DICENUM_OFFSET UNITYSDK_OFFSET(0x98906A0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_DREAMDICENUM_OFFSET UNITYSDK_OFFSET(0x98909C0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_ENTERDREAMTRIGGER_OFFSET UNITYSDK_OFFSET(0x9890840)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_HASSETTLEMENT_OFFSET UNITYSDK_OFFSET(0x9890970)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_HASUNFINISHEDEVENT_OFFSET UNITYSDK_OFFSET(0x9890760)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_IMMEDIATELYMODIFIERS_OFFSET UNITYSDK_OFFSET(0x9890800)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_ISCANTAKEDAILYREWARD_OFFSET UNITYSDK_OFFSET(0x9890A00)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_ISINDREAM_OFFSET UNITYSDK_OFFSET(0x98909B0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_ISMONOPOLYDAILYREWARDGET_OFFSET UNITYSDK_OFFSET(0x98909E0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_ISSETTLED_OFFSET UNITYSDK_OFFSET(0x9890990)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_LEAVEDREAMTRIGGER_OFFSET UNITYSDK_OFFSET(0x9890860)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_MODIFIERS_OFFSET UNITYSDK_OFFSET(0x98907E0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_NEXTCELLIDINDEX_OFFSET UNITYSDK_OFFSET(0x9890700)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_NEXTDAILYUPDATETIMESTAMP_OFFSET UNITYSDK_OFFSET(0x9890720)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_PAUSEGAME_OFFSET UNITYSDK_OFFSET(0x9890950)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_QUIZCOINTRIGGER_OFFSET UNITYSDK_OFFSET(0x9890880)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_REMAINSTEPS_OFFSET UNITYSDK_OFFSET(0x98906D0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_REROLLNUM_OFFSET UNITYSDK_OFFSET(0x98906F0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_TELEPORTMODIFIER_OFFSET UNITYSDK_OFFSET(0x9890820)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_INIT_OFFSET UNITYSDK_OFFSET(0x988C010)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_ISASSETUNLOCKED_OFFSET UNITYSDK_OFFSET(0x988EF70)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_ISBUFFUNLOCKED_OFFSET UNITYSDK_OFFSET(0x988EE50)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_ISMBTIREPORTUNLOCKED_OFFSET UNITYSDK_OFFSET(0x988F2D0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_ISQUIZUNLOCKED_OFFSET UNITYSDK_OFFSET(0x988F1B0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_ISRESBARUNLOCKED_OFFSET UNITYSDK_OFFSET(0x988F3F0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_ISRESOURCEBARUNLOCKED_OFFSET UNITYSDK_OFFSET(0x988F510)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_ISTUTORIALFINISHED_OFFSET UNITYSDK_OFFSET(0x988F090)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_ISTUTORIALSETTLED_OFFSET UNITYSDK_OFFSET(0x988F630)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_MODIFYCURCELLBYTELEPORT_OFFSET UNITYSDK_OFFSET(0x9890410)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_MODIFYCURRENCY_OFFSET UNITYSDK_OFFSET(0x988FFE0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_MODIFY_OFFSET UNITYSDK_OFFSET(0x988F750)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x988C5F0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SETGAMEPAUSESTATESILENTLY_OFFSET UNITYSDK_OFFSET(0x9890520)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SETGAMEPAUSESTATE_OFFSET UNITYSDK_OFFSET(0x98904B0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SETHASSETTLEMENT_OFFSET UNITYSDK_OFFSET(0x9890570)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SETSETTLED_OFFSET UNITYSDK_OFFSET(0x98905C0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SETTELEPORTMODIFIER_OFFSET UNITYSDK_OFFSET(0x98903C0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_CHEATDICENUM_OFFSET UNITYSDK_OFFSET(0x988C250)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_CONTENTQUEUE_OFFSET UNITYSDK_OFFSET(0x98908B0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_CURCELLID_OFFSET UNITYSDK_OFFSET(0x98907C0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_CURCELLSTATE_OFFSET UNITYSDK_OFFSET(0x9890750)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_CURMAPID_OFFSET UNITYSDK_OFFSET(0x988DD50)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_CURRENCYNUM_OFFSET UNITYSDK_OFFSET(0x988C340)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_DICENUM_OFFSET UNITYSDK_OFFSET(0x988C170)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_DREAMDICENUM_OFFSET UNITYSDK_OFFSET(0x98909D0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_ENTERDREAMTRIGGER_OFFSET UNITYSDK_OFFSET(0x9890850)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_HASSETTLEMENT_OFFSET UNITYSDK_OFFSET(0x9890980)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_IMMEDIATELYMODIFIERS_OFFSET UNITYSDK_OFFSET(0x9890810)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_ISCANTAKEDAILYREWARD_OFFSET UNITYSDK_OFFSET(0x9890A10)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_ISMONOPOLYDAILYREWARDGET_OFFSET UNITYSDK_OFFSET(0x98909F0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_ISSETTLED_OFFSET UNITYSDK_OFFSET(0x98909A0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_LEAVEDREAMTRIGGER_OFFSET UNITYSDK_OFFSET(0x9890870)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_MODIFIERS_OFFSET UNITYSDK_OFFSET(0x98907F0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_NEXTCELLIDINDEX_OFFSET UNITYSDK_OFFSET(0x9890710)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_NEXTDAILYUPDATETIMESTAMP_OFFSET UNITYSDK_OFFSET(0x9890730)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_PAUSEGAME_OFFSET UNITYSDK_OFFSET(0x9890960)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_QUIZCOINTRIGGER_OFFSET UNITYSDK_OFFSET(0x9890890)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_REMAINSTEPS_OFFSET UNITYSDK_OFFSET(0x98906E0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_REROLLNUM_OFFSET UNITYSDK_OFFSET(0x988DDC0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_TELEPORTMODIFIER_OFFSET UNITYSDK_OFFSET(0x9890830)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SYNCBARRIER_OFFSET UNITYSDK_OFFSET(0x988D2D0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SYNCCLICKITEM_OFFSET UNITYSDK_OFFSET(0x988D810)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SYNCNEXTDAILYUPDATETIMESTAMP_OFFSET UNITYSDK_OFFSET(0x988ED60)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SYNCUNLOCKED_OFFSET UNITYSDK_OFFSET(0x988DEA0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SYNC_1_OFFSET UNITYSDK_OFFSET(0x988CD30)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SYNC_2_OFFSET UNITYSDK_OFFSET(0x988CE30)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x988C690)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_TRYADDTRIGGER_OFFSET UNITYSDK_OFFSET(0x988E390)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_UPDATECANTAKEDAILYREWARDSTATE_OFFSET UNITYSDK_OFFSET(0x9890650)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_UPDATEDAILYREWARDSTATE_OFFSET UNITYSDK_OFFSET(0x9890600)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__ADDBARRIER_OFFSET UNITYSDK_OFFSET(0x988D080)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__CREATEBARRIER_OFFSET UNITYSDK_OFFSET(0x988D540)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__CREATECLICKITEM_OFFSET UNITYSDK_OFFSET(0x988DA80)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9890A20)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__DELETEBARRIER_OFFSET UNITYSDK_OFFSET(0x988D340)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__DELETECLICKITEM_OFFSET UNITYSDK_OFFSET(0x988D880)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__GETGAMERATIOUNLOCKID_OFFSET UNITYSDK_OFFSET(0x988E280)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__MODIFYCHEATDICE_OFFSET UNITYSDK_OFFSET(0x9890370)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__MODIFYDICE_OFFSET UNITYSDK_OFFSET(0x9890250)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__MODIFYITEM_OFFSET UNITYSDK_OFFSET(0x988FC90)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__MODIFYREROLLITEM_OFFSET UNITYSDK_OFFSET(0x9890130)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__MODIFYSTEP_OFFSET UNITYSDK_OFFSET(0x988FEC0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__SYNCITEMINFO_OFFSET UNITYSDK_OFFSET(0x988CDA0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__SYNCMAPINFO_OFFSET UNITYSDK_OFFSET(0x988C6F0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__TRYADDACTIONPROFITTRIGGER_OFFSET UNITYSDK_OFFSET(0x988ECD0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__TRYADDIMMEDIATELYTRIGGER_OFFSET UNITYSDK_OFFSET(0x988E9F0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__TRYADDLEVELGRAPHTRIGGER_OFFSET UNITYSDK_OFFSET(0x988E5D0)
#define RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__UPDATEEXTRACONTENT_OFFSET UNITYSDK_OFFSET(0x988CEA0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyGameSystemInfo_TypeDefinitionIndex = 52734;

	class MonopolyGameSystemInfo : public ::System::Object
	{
	public:
		// static const ::System::UInt32 _DREAM_WORLD_VALUE = 0x5; // 0x0
		::Class_1_BF623F6C7CBB9E69_2* _TeleportModifier_k__BackingField; // 0x10
		::System::Collections::Generic::Queue_1<::RPG::Client::MonopolyContentTrigger*>* _ContentQueue_k__BackingField; // 0x18
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _UnlockedFunctionIDs; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* ExtraContentCells; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::IMonopolyVisualEffectTrigger*>* _Modifiers_k__BackingField; // 0x30
		::Class_1_BF623F6C7CBB9E69* _EnterDreamTrigger_k__BackingField; // 0x38
		::Class_1_5249F0902D388234* _QuizCoinTrigger_k__BackingField; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::IMonopolyVisualEffectTrigger*>* _ImmediatelyModifiers_k__BackingField; // 0x48
		::Class_1_BF623F6C7CBB9E69_1* _LeaveDreamTrigger_k__BackingField; // 0x50
		::Class_1_0E5DA97E7318165F* ActionProfitTrigger; // 0x58
		::System::UInt32 _CurMapID; // 0x60
		::System::Boolean _IsSettled_k__BackingField; // 0x64
		::System::UInt32 _RemainSteps_k__BackingField; // 0x68
		::System::UInt32 _DreamDiceNum_k__BackingField; // 0x6C
		::Enum_3_DB663931210BBC27_40 _CurCellState_k__BackingField; // 0x70
		::System::UInt32 _ReRollItemNum; // 0x74
		::System::UInt32 _CurCellID_k__BackingField; // 0x78
		::System::UInt32 _DiceNum; // 0x7C
		::System::UInt32 _NextDailyUpdateTimeStamp_k__BackingField; // 0x80
		::System::UInt32 _CurrencyNum; // 0x84
		::System::Int32 _NextCellIDIndex_k__BackingField; // 0x88
		::System::Boolean _IsCanTakeDailyReward_k__BackingField; // 0x8C
		::System::Boolean _IsMonopolyDailyRewardGet_k__BackingField; // 0x8D
		::System::Boolean _PauseGame_k__BackingField; // 0x8E
		::System::Boolean _HasSettlement_k__BackingField; // 0x8F
		::System::UInt32 _CheatDiceNum; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_ONRECONNECT_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_99BD961747420BEB_38* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_99BD961747420BEB_38*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SYNC_OFFSET))(this, rsp);
		}

		::System::Void Sync_1(::Class_1_14E02E1F6D70E487_3* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SYNC_1_OFFSET))(this, rsp);
		}

		::System::Void Sync_2(::Class_1_B33C6EDD7227DE6C_1* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B33C6EDD7227DE6C_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SYNC_2_OFFSET))(this, info);
		}

		::System::Void _UpdateExtraContent(::System::UInt32 mapID, ::System::UInt32 cellID, ::System::Boolean isLoadEvent)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__UPDATEEXTRACONTENT_OFFSET))(this, mapID, cellID, isLoadEvent);
		}

		::System::Void _AddBarrier(::System::UInt32 mapID, ::System::UInt32 cellID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__ADDBARRIER_OFFSET))(this, mapID, cellID);
		}

		::System::Void SyncBarrier(::Class_1_B33C6EDD7227DE6C_1* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B33C6EDD7227DE6C_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SYNCBARRIER_OFFSET))(this, info);
		}

		::System::Void _DeleteBarrier(::Class_1_B33C6EDD7227DE6C_1* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B33C6EDD7227DE6C_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__DELETEBARRIER_OFFSET))(this, info);
		}

		::System::Void _CreateBarrier(::Class_1_B33C6EDD7227DE6C_1* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B33C6EDD7227DE6C_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__CREATEBARRIER_OFFSET))(this, info);
		}

		::System::Void SyncClickItem(::Class_1_B33C6EDD7227DE6C_1* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B33C6EDD7227DE6C_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SYNCCLICKITEM_OFFSET))(this, info);
		}

		::System::Void _DeleteClickItem(::Class_1_B33C6EDD7227DE6C_1* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B33C6EDD7227DE6C_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__DELETECLICKITEM_OFFSET))(this, info);
		}

		::System::Void _CreateClickItem(::Class_1_B33C6EDD7227DE6C_1* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B33C6EDD7227DE6C_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__CREATECLICKITEM_OFFSET))(this, info);
		}

		::System::Void _SyncMapInfo(::Class_1_6AD23B2D1D3B59C7* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6AD23B2D1D3B59C7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__SYNCMAPINFO_OFFSET))(this, info);
		}

		::System::Void _SyncItemInfo(::Class_1_F48B67D07D3C17D7_1* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F48B67D07D3C17D7_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__SYNCITEMINFO_OFFSET))(this, info);
		}

		::System::Void SyncUnlocked(::Class_1_6E708EAB438EC183_57* info, ::System::Boolean toAdd)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_57*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SYNCUNLOCKED_OFFSET))(this, info, toAdd);
		}

		::System::Void TryAddTrigger(::RPG::Client::IMonopolyVisualEffectTrigger* trigger)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IMonopolyVisualEffectTrigger*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_TRYADDTRIGGER_OFFSET))(this, trigger);
		}

		::System::Void _TryAddActionProfitTrigger(::Class_1_0E5DA97E7318165F* trigger)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0E5DA97E7318165F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__TRYADDACTIONPROFITTRIGGER_OFFSET))(this, trigger);
		}

		::System::Void _TryAddLevelGraphTrigger(::RPG::Client::IMonopolyVisualEffectTrigger* trigger)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IMonopolyVisualEffectTrigger*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__TRYADDLEVELGRAPHTRIGGER_OFFSET))(this, trigger);
		}

		::System::Void _TryAddImmediatelyTrigger(::RPG::Client::IMonopolyVisualEffectTrigger* trigger)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IMonopolyVisualEffectTrigger*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__TRYADDIMMEDIATELYTRIGGER_OFFSET))(this, trigger);
		}

		::System::Void SyncNextDailyUpdateTimeStamp(::System::UInt32 timeStamp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SYNCNEXTDAILYUPDATETIMESTAMP_OFFSET))(this, timeStamp);
		}

		::System::Void ClearCurContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_CLEARCURCONTENT_OFFSET))(this);
		}

		::System::Boolean IsBuffUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_ISBUFFUNLOCKED_OFFSET))(this);
		}

		::System::Boolean IsAssetUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_ISASSETUNLOCKED_OFFSET))(this);
		}

		::System::Boolean IsTutorialFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_ISTUTORIALFINISHED_OFFSET))(this);
		}

		::System::Boolean IsQuizUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_ISQUIZUNLOCKED_OFFSET))(this);
		}

		::System::Boolean IsMBTIReportUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_ISMBTIREPORTUNLOCKED_OFFSET))(this);
		}

		::System::Boolean IsResBarUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_ISRESBARUNLOCKED_OFFSET))(this);
		}

		::System::Boolean IsResourceBarUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_ISRESOURCEBARUNLOCKED_OFFSET))(this);
		}

		::System::Boolean IsTutorialSettled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_ISTUTORIALSETTLED_OFFSET))(this);
		}

		::System::UInt32 _GetGameRatioUnlockID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__GETGAMERATIOUNLOCKID_OFFSET))(this);
		}

		::System::Void Modify(::Proto::MonopolyActionResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_MODIFY_OFFSET))(this, result);
		}

		::System::Void _ModifyItem(::System::UInt32 itemID, ::System::UInt32 value, ::System::Boolean isAdd)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__MODIFYITEM_OFFSET))(this, itemID, value, isAdd);
		}

		::System::Void ModifyCurrency(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_MODIFYCURRENCY_OFFSET))(this, value);
		}

		::System::Void _ModifyDice(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__MODIFYDICE_OFFSET))(this, value);
		}

		::System::Void _ModifyCheatDice(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__MODIFYCHEATDICE_OFFSET))(this, value);
		}

		::System::Void _ModifyReRollItem(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__MODIFYREROLLITEM_OFFSET))(this, value);
		}

		::System::Void _ModifyStep(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO__MODIFYSTEP_OFFSET))(this, value);
		}

		::System::Void SetTeleportModifier(::Class_1_BF623F6C7CBB9E69_2* trigger)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BF623F6C7CBB9E69_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SETTELEPORTMODIFIER_OFFSET))(this, trigger);
		}

		::System::Void ModifyCurCellByTeleport(::System::UInt32 cellID, ::System::UInt32 mapID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_MODIFYCURCELLBYTELEPORT_OFFSET))(this, cellID, mapID);
		}

		::System::Void SetGamePauseState(::System::Boolean isPause)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SETGAMEPAUSESTATE_OFFSET))(this, isPause);
		}

		::System::Void SetGamePauseStateSilently(::System::Boolean isPause)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SETGAMEPAUSESTATESILENTLY_OFFSET))(this, isPause);
		}

		::System::Void SetHasSettlement(::System::Boolean hasSettlement)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SETHASSETTLEMENT_OFFSET))(this, hasSettlement);
		}

		::System::Void SetSettled()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SETSETTLED_OFFSET))(this);
		}

		::System::Void UpdateDailyRewardState(::System::Boolean isRewardGet)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_UPDATEDAILYREWARDSTATE_OFFSET))(this, isRewardGet);
		}

		::System::Void UpdateCanTakeDailyRewardState(::System::Boolean isCanTakeReward)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_UPDATECANTAKEDAILYREWARDSTATE_OFFSET))(this, isCanTakeReward);
		}

		::System::UInt32 get_DiceNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_DICENUM_OFFSET))(this);
		}

		::System::Void set_DiceNum(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_DICENUM_OFFSET))(this, value);
		}

		::System::UInt32 get_CheatDiceNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_CHEATDICENUM_OFFSET))(this);
		}

		::System::Void set_CheatDiceNum(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_CHEATDICENUM_OFFSET))(this, value);
		}

		::System::UInt32 get_CurrencyNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_CURRENCYNUM_OFFSET))(this);
		}

		::System::Void set_CurrencyNum(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_CURRENCYNUM_OFFSET))(this, value);
		}

		::System::UInt32 get_RemainSteps()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_REMAINSTEPS_OFFSET))(this);
		}

		::System::Void set_RemainSteps(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_REMAINSTEPS_OFFSET))(this, value);
		}

		::System::UInt32 get_ReRollNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_REROLLNUM_OFFSET))(this);
		}

		::System::Void set_ReRollNum(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_REROLLNUM_OFFSET))(this, value);
		}

		::System::Int32 get_NextCellIDIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_NEXTCELLIDINDEX_OFFSET))(this);
		}

		::System::Void set_NextCellIDIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_NEXTCELLIDINDEX_OFFSET))(this, value);
		}

		::System::UInt32 get_NextDailyUpdateTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_NEXTDAILYUPDATETIMESTAMP_OFFSET))(this);
		}

		::System::Void set_NextDailyUpdateTimeStamp(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_NEXTDAILYUPDATETIMESTAMP_OFFSET))(this, value);
		}

		::Enum_3_DB663931210BBC27_40 get_CurCellState()
		{
			return ((::Enum_3_DB663931210BBC27_40(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_CURCELLSTATE_OFFSET))(this);
		}

		::System::Void set_CurCellState(::Enum_3_DB663931210BBC27_40 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_40))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_CURCELLSTATE_OFFSET))(this, value);
		}

		::System::Boolean get_HasUnfinishedEvent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_HASUNFINISHEDEVENT_OFFSET))(this);
		}

		::System::UInt32 get_CurCellID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_CURCELLID_OFFSET))(this);
		}

		::System::Void set_CurCellID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_CURCELLID_OFFSET))(this, value);
		}

		::System::UInt32 get_CurMapID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_CURMAPID_OFFSET))(this);
		}

		::System::Void set_CurMapID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_CURMAPID_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IMonopolyVisualEffectTrigger*>* get_Modifiers()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IMonopolyVisualEffectTrigger*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_MODIFIERS_OFFSET))(this);
		}

		::System::Void set_Modifiers(::System::Collections::Generic::List_1<::RPG::Client::IMonopolyVisualEffectTrigger*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IMonopolyVisualEffectTrigger*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_MODIFIERS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IMonopolyVisualEffectTrigger*>* get_ImmediatelyModifiers()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IMonopolyVisualEffectTrigger*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_IMMEDIATELYMODIFIERS_OFFSET))(this);
		}

		::System::Void set_ImmediatelyModifiers(::System::Collections::Generic::List_1<::RPG::Client::IMonopolyVisualEffectTrigger*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IMonopolyVisualEffectTrigger*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_IMMEDIATELYMODIFIERS_OFFSET))(this, value);
		}

		::Class_1_BF623F6C7CBB9E69_2* get_TeleportModifier()
		{
			return ((::Class_1_BF623F6C7CBB9E69_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_TELEPORTMODIFIER_OFFSET))(this);
		}

		::System::Void set_TeleportModifier(::Class_1_BF623F6C7CBB9E69_2* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BF623F6C7CBB9E69_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_TELEPORTMODIFIER_OFFSET))(this, value);
		}

		::Class_1_BF623F6C7CBB9E69* get_EnterDreamTrigger()
		{
			return ((::Class_1_BF623F6C7CBB9E69*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_ENTERDREAMTRIGGER_OFFSET))(this);
		}

		::System::Void set_EnterDreamTrigger(::Class_1_BF623F6C7CBB9E69* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BF623F6C7CBB9E69*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_ENTERDREAMTRIGGER_OFFSET))(this, value);
		}

		::Class_1_BF623F6C7CBB9E69_1* get_LeaveDreamTrigger()
		{
			return ((::Class_1_BF623F6C7CBB9E69_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_LEAVEDREAMTRIGGER_OFFSET))(this);
		}

		::System::Void set_LeaveDreamTrigger(::Class_1_BF623F6C7CBB9E69_1* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BF623F6C7CBB9E69_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_LEAVEDREAMTRIGGER_OFFSET))(this, value);
		}

		::Class_1_5249F0902D388234* get_QuizCoinTrigger()
		{
			return ((::Class_1_5249F0902D388234*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_QUIZCOINTRIGGER_OFFSET))(this);
		}

		::System::Void set_QuizCoinTrigger(::Class_1_5249F0902D388234* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5249F0902D388234*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_QUIZCOINTRIGGER_OFFSET))(this, value);
		}

		::System::Collections::Generic::Queue_1<::RPG::Client::MonopolyContentTrigger*>* get_ContentQueue()
		{
			return ((::System::Collections::Generic::Queue_1<::RPG::Client::MonopolyContentTrigger*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_CONTENTQUEUE_OFFSET))(this);
		}

		::System::Void set_ContentQueue(::System::Collections::Generic::Queue_1<::RPG::Client::MonopolyContentTrigger*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Queue_1<::RPG::Client::MonopolyContentTrigger*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_CONTENTQUEUE_OFFSET))(this, value);
		}

		::RPG::Client::MonopolyContentTrigger* get_CurContent()
		{
			return ((::RPG::Client::MonopolyContentTrigger*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_CURCONTENT_OFFSET))(this);
		}

		::System::Boolean get_PauseGame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_PAUSEGAME_OFFSET))(this);
		}

		::System::Void set_PauseGame(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_PAUSEGAME_OFFSET))(this, value);
		}

		::System::Boolean get_HasSettlement()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_HASSETTLEMENT_OFFSET))(this);
		}

		::System::Void set_HasSettlement(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_HASSETTLEMENT_OFFSET))(this, value);
		}

		::System::Boolean get_IsSettled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_ISSETTLED_OFFSET))(this);
		}

		::System::Void set_IsSettled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_ISSETTLED_OFFSET))(this, value);
		}

		::System::Boolean get_IsInDream()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_ISINDREAM_OFFSET))(this);
		}

		::System::UInt32 get_DreamDiceNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_DREAMDICENUM_OFFSET))(this);
		}

		::System::Void set_DreamDiceNum(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_DREAMDICENUM_OFFSET))(this, value);
		}

		::System::Boolean get_IsMonopolyDailyRewardGet()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_ISMONOPOLYDAILYREWARDGET_OFFSET))(this);
		}

		::System::Void set_IsMonopolyDailyRewardGet(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_ISMONOPOLYDAILYREWARDGET_OFFSET))(this, value);
		}

		::System::Boolean get_IsCanTakeDailyReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_GET_ISCANTAKEDAILYREWARD_OFFSET))(this);
		}

		::System::Void set_IsCanTakeDailyReward(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMESYSTEMINFO_SET_ISCANTAKEDAILYREWARD_OFFSET))(this, value);
		}
	};
}
