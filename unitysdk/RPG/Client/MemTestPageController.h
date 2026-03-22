#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_9E8CD0C1037EB98E_1;
namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace RPG::Client { class MemTestPageController_PlayerDropDownItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_MEMTESTPAGECONTROLLER_GETALLMONSTEREFFECTS_OFFSET UNITYSDK_OFFSET(0x96EA8F0)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER_GETALLPLAYEREFFECTS_OFFSET UNITYSDK_OFFSET(0x96EAF30)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER_GETCURMONSTEREFFECTS_OFFSET UNITYSDK_OFFSET(0x96EAE90)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER_GETCURPLAYEREFFECTS_OFFSET UNITYSDK_OFFSET(0x96EB350)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER_GETMONSTEREFFECTSOFSKILLTYPE_OFFSET UNITYSDK_OFFSET(0x96EAC40)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER_GETPLAYEREFFECTSOFSKILLTYPE_OFFSET UNITYSDK_OFFSET(0x96EB1B0)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER_GET_VIEW_OFFSET UNITYSDK_OFFSET(0x96EC320)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER_INITMONSTERDRAPDOWN_OFFSET UNITYSDK_OFFSET(0x96ECF50)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER_INITPLAYERDRAPDOWN_OFFSET UNITYSDK_OFFSET(0x96ECA60)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER_ON_PINCHOUT_OFFSET UNITYSDK_OFFSET(0x96F1E90)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x96EB3F0)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x96EB480)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__INITCHAPTERDROPDOWN_OFFSET UNITYSDK_OFFSET(0x96ED940)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__INITSTAGEDROPDOWN_OFFSET UNITYSDK_OFFSET(0x96ED460)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONBTNMOVEDOWN_OFFSET UNITYSDK_OFFSET(0x96F1C50)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONBTNMOVEUP_OFFSET UNITYSDK_OFFSET(0x96F1CA0)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCHAPTERDROPDOWNVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x96EDF70)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCLEARALLBTN_OFFSET UNITYSDK_OFFSET(0x96EDDC0)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCLEARAVATARBTN_OFFSET UNITYSDK_OFFSET(0x96F0C60)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCLEAREFFECTBTN_OFFSET UNITYSDK_OFFSET(0x96F0D70)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCLEARMODELBTN_OFFSET UNITYSDK_OFFSET(0x96F0FB0)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCLEARSTAGEBTN_OFFSET UNITYSDK_OFFSET(0x96F0E70)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCREATEMODELBTN_OFFSET UNITYSDK_OFFSET(0x96F0A40)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCREATEMONSTERBTN_OFFSET UNITYSDK_OFFSET(0x96F01C0)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCREATEMONSTEREFFECTBTN_OFFSET UNITYSDK_OFFSET(0x96F0600)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCREATEPLAYERBTN_OFFSET UNITYSDK_OFFSET(0x96EFFA0)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCREATEPLAYEREFFECTBTN_OFFSET UNITYSDK_OFFSET(0x96F03E0)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCREATESTAGEBTN_OFFSET UNITYSDK_OFFSET(0x96F0820)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONEXITBTN_OFFSET UNITYSDK_OFFSET(0x96EDCF0)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONMODELITEMDROPDOWNVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x96EEB90)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONMODELTYPEDROPDOWNVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x96EE5C0)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONMONSTERDROPDOWNVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x96EDEC0)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONMONSTEREFFECTDROPDOWNVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x96EF500)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONPINCHEND_OFFSET UNITYSDK_OFFSET(0x96F2190)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONPINCHIN_OFFSET UNITYSDK_OFFSET(0x96F1CF0)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONPLAYERDROPDOWNVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x96EDE60)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONPLAYEREFFECTDROPDOWNVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x96EFDB0)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONRESETBTN_OFFSET UNITYSDK_OFFSET(0x96EFE00)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONSCREENDRAGING_OFFSET UNITYSDK_OFFSET(0x96F10B0)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONSCROLL_OFFSET UNITYSDK_OFFSET(0x96F1960)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__ONSTAGEDROPDOWNVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x96EDF20)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x96EC380)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__UPDATEMODELITEMDROPDOWN_OFFSET UNITYSDK_OFFSET(0x96EE620)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__UPDATEMONSTEREFFECTDROPDOWN_OFFSET UNITYSDK_OFFSET(0x96EEBE0)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__UPDATEPLAYEREFFECTDROPDOWN_OFFSET UNITYSDK_OFFSET(0x96EF550)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER__UPDATETYPEMODELDROPDOWN_OFFSET UNITYSDK_OFFSET(0x96EDFD0)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x96F2300)
#define RPG_CLIENT_MEMTESTPAGECONTROLLER___IFIXBASEPROXY__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x96F2360)

namespace RPG::Client
{
	inline static constexpr unsigned int MemTestPageController_TypeDefinitionIndex = 58051;

	class MemTestPageController : public ::RPG::Client::UIController
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::MemTestPageController_PlayerDropDownItem*>* _PlayerDropDownList; // 0x180
		::System::Collections::Generic::List_1<::RPG::Client::MemTestPageController_PlayerDropDownItem*>* _PlayerEffectDropDownList; // 0x188
		::System::Collections::Generic::List_1<::RPG::Client::MemTestPageController_PlayerDropDownItem*>* _ModelTypeDropDownList; // 0x190
		::System::Collections::Generic::List_1<::RPG::Client::MemTestPageController_PlayerDropDownItem*>* _MonsterDropDownList; // 0x198
		::System::Collections::Generic::List_1<::RPG::Client::MemTestPageController_PlayerDropDownItem*>* _StageDropDownList; // 0x1A0
		::System::Collections::Generic::List_1<::System::String*>* _StageDropDownNameList; // 0x1A8
		::System::Collections::Generic::List_1<::System::String*>* _ModelTypeDropDownNameList; // 0x1B0
		::System::Collections::Generic::List_1<::System::String*>* _ModelItemDropDownNameList; // 0x1B8
		::System::Collections::Generic::List_1<::RPG::Client::MemTestPageController_PlayerDropDownItem*>* _ModelItemDropDownList; // 0x1C0
		::System::Collections::Generic::List_1<::System::String*>* _ChapterDropDownNameList; // 0x1C8
		::System::Collections::Generic::List_1<::System::String*>* _PlayerDropDownNameList; // 0x1D0
		::System::Collections::Generic::List_1<::RPG::Client::MemTestPageController_PlayerDropDownItem*>* _MonsterEffectDropDownList; // 0x1D8
		::System::Collections::Generic::List_1<::System::String*>* _MonsterDropDownNameList; // 0x1E0
		::System::Collections::Generic::List_1<::System::String*>* _PlayerEffectDropDownNameList; // 0x1E8
		::System::Collections::Generic::List_1<::System::String*>* _MonsterEffectDropDownNameList; // 0x1F0
		::UnityEngine::Vector2 _DragBeginPosition; // 0x1F8
		::System::Int32 _SelectModelItemDropDownIndex; // 0x200
		::System::Int32 _SelectMonsterEffectDropDownIndex; // 0x204
		::System::Int32 _SelectPlayerEffectDropDownIndex; // 0x208
		::System::Boolean _IsPressMove; // 0x20C
		::System::Int32 _SelectChapterDropDownIndex; // 0x210
		::UnityEngine::Vector3 _InitLookAtPos; // 0x214
		::System::Int32 _SelectModelTypeDropDownIndex; // 0x220
		::System::Int32 _SelectPlayerDropDownIndex; // 0x224
		::UnityEngine::Vector3 _Offset; // 0x228
		::System::Int32 _SelectStageDropDownIndex; // 0x234
		::System::Single _MinimumDistanc_MinDistance; // 0x238
		::System::Int32 _SelectMonsterDropDownIndex; // 0x23C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Collections::Generic::List_1<::System::String*>* GetAllMonsterEffects(::System::UInt32 pMonsterTemplateId)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER_GETALLMONSTEREFFECTS_OFFSET))(pMonsterTemplateId);
		}

		static ::System::Collections::Generic::List_1<::System::String*>* GetMonsterEffectsOfSkillType(::System::UInt32 monsterID, ::System::String* sType)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER_GETMONSTEREFFECTSOFSKILLTYPE_OFFSET))(monsterID, sType);
		}

		::System::Collections::Generic::List_1<::System::String*>* GetCurMonsterEffects()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER_GETCURMONSTEREFFECTS_OFFSET))(this);
		}

		static ::System::Collections::Generic::List_1<::System::String*>* GetAllPlayerEffects(::System::UInt32 pPlayerId)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER_GETALLPLAYEREFFECTS_OFFSET))(pPlayerId);
		}

		static ::System::Collections::Generic::List_1<::System::String*>* GetPlayerEffectsOfSkillType(::System::UInt32 playerID, ::System::String* sType)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER_GETPLAYEREFFECTSOFSKILLTYPE_OFFSET))(playerID, sType);
		}

		::System::Collections::Generic::List_1<::System::String*>* GetCurPlayerEffects()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER_GETCURPLAYEREFFECTS_OFFSET))(this);
		}

		::System::Void _CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _OnExitBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONEXITBTN_OFFSET))(this);
		}

		::System::Void InitPlayerDrapDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER_INITPLAYERDRAPDOWN_OFFSET))(this);
		}

		::System::Void InitMonsterDrapDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER_INITMONSTERDRAPDOWN_OFFSET))(this);
		}

		::System::Void _InitStageDropDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__INITSTAGEDROPDOWN_OFFSET))(this);
		}

		::System::Void _InitChapterDropDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__INITCHAPTERDROPDOWN_OFFSET))(this);
		}

		::System::Void _UpdateTypeModelDropDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__UPDATETYPEMODELDROPDOWN_OFFSET))(this);
		}

		::System::Void _UpdateModelItemDropDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__UPDATEMODELITEMDROPDOWN_OFFSET))(this);
		}

		::System::Void _UpdateMonsterEffectDropDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__UPDATEMONSTEREFFECTDROPDOWN_OFFSET))(this);
		}

		::System::Void _UpdatePlayerEffectDropDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__UPDATEPLAYEREFFECTDROPDOWN_OFFSET))(this);
		}

		::System::Void _OnResetBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONRESETBTN_OFFSET))(this);
		}

		::System::Void _OnCreatePlayerBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCREATEPLAYERBTN_OFFSET))(this);
		}

		::System::Void _OnCreateMonsterBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCREATEMONSTERBTN_OFFSET))(this);
		}

		::System::Void _OnCreatePlayerEffectBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCREATEPLAYEREFFECTBTN_OFFSET))(this);
		}

		::System::Void _OnCreateMonsterEffectBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCREATEMONSTEREFFECTBTN_OFFSET))(this);
		}

		::System::Void _OnCreateStageBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCREATESTAGEBTN_OFFSET))(this);
		}

		::System::Void _OnCreateModelBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCREATEMODELBTN_OFFSET))(this);
		}

		::System::Void _OnClearAvatarBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCLEARAVATARBTN_OFFSET))(this);
		}

		::System::Void _OnClearEffectBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCLEAREFFECTBTN_OFFSET))(this);
		}

		::System::Void _OnClearStageBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCLEARSTAGEBTN_OFFSET))(this);
		}

		::System::Void _OnClearModelBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCLEARMODELBTN_OFFSET))(this);
		}

		::System::Void _OnClearAllBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCLEARALLBTN_OFFSET))(this);
		}

		::System::Void _OnPlayerDropDownValueChange(::System::Int32 iIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONPLAYERDROPDOWNVALUECHANGE_OFFSET))(this, iIndex);
		}

		::System::Void _OnMonsterDropDownValueChange(::System::Int32 iIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONMONSTERDROPDOWNVALUECHANGE_OFFSET))(this, iIndex);
		}

		::System::Void _OnPlayerEffectDropDownValueChange(::System::Int32 iIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONPLAYEREFFECTDROPDOWNVALUECHANGE_OFFSET))(this, iIndex);
		}

		::System::Void _OnMonsterEffectDropDownValueChange(::System::Int32 iIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONMONSTEREFFECTDROPDOWNVALUECHANGE_OFFSET))(this, iIndex);
		}

		::System::Void _OnStageDropDownValueChange(::System::Int32 iIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONSTAGEDROPDOWNVALUECHANGE_OFFSET))(this, iIndex);
		}

		::System::Void _OnChapterDropDownValueChange(::System::Int32 iIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONCHAPTERDROPDOWNVALUECHANGE_OFFSET))(this, iIndex);
		}

		::System::Void _OnModelTypeDropDownValueChange(::System::Int32 iIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONMODELTYPEDROPDOWNVALUECHANGE_OFFSET))(this, iIndex);
		}

		::System::Void _OnModelItemDropDownValueChange(::System::Int32 iIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONMODELITEMDROPDOWNVALUECHANGE_OFFSET))(this, iIndex);
		}

		::System::Void _OnScreenDraging(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONSCREENDRAGING_OFFSET))(this, eventData);
		}

		::System::Void _OnScroll(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONSCROLL_OFFSET))(this, eventData);
		}

		::System::Void _OnBtnMoveDown(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONBTNMOVEDOWN_OFFSET))(this, eventData);
		}

		::System::Void _OnBtnMoveUp(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONBTNMOVEUP_OFFSET))(this, eventData);
		}

		::System::Void _OnPinchIn(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONPINCHIN_OFFSET))(this, gesture);
		}

		::System::Void On_PinchOut(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER_ON_PINCHOUT_OFFSET))(this, gesture);
		}

		::System::Void _OnPinchEnd(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER__ONPINCHEND_OFFSET))(this, gesture);
		}

		::Class_2_9E8CD0C1037EB98E_1* get_View()
		{
			return ((::Class_2_9E8CD0C1037EB98E_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER_GET_VIEW_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMTESTPAGECONTROLLER___IFIXBASEPROXY__SETUPVIEW_OFFSET))(this);
		}
	};
}
