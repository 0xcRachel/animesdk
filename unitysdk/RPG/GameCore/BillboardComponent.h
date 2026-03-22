#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Billboard/BillboardIdentifier.h"
#include "unitysdk/RPG/Client/BillboardShowType.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/Struct_2_6A75E669C858F984.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_Enumerator.h"

class Class_2_B905FCDC65EE337C;
namespace RPG::Client { class BillboardWayPointMutexManager; }
namespace RPG::Client { class MapEntityDef; }
namespace RPG::Client::Billboard { class BillboardDataProvider; }
namespace RPG::Client::Billboard { class BillboardNotifyParam; }
namespace RPG::GameCore { class BillboardIconConfigRow; }
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class NPCDataRow; }
namespace RPG::GameCore { class NPCMonsterDataRow; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class PropRow; }
namespace RPG::GameCore { class ResetBillboardInfo; }
namespace RPG::GameCore { class SetBillboardInfo; }
namespace RPG::GameCore { class SetFloatingTextInfo; }
namespace RPG::GameCore { class SetInwardBubbleInfo; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_GAMECORE_BILLBOARDCOMPONENT_DISABLE_OFFSET UNITYSDK_OFFSET(0xA362B00)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA35EA60)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_ENABLE_OFFSET UNITYSDK_OFFSET(0xA362B50)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_FORCEHIDEBILLBOARD_OFFSET UNITYSDK_OFFSET(0xA363A60)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_GETATTACHTRANS_OFFSET UNITYSDK_OFFSET(0xA363D70)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_GETCURRENTDISTANCE_OFFSET UNITYSDK_OFFSET(0xA363B50)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xA363B10)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_GET_SKIPMODELVISIBLECHECK_OFFSET UNITYSDK_OFFSET(0xA362760)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_GET__BILLBOARDDATAPROVIDER_OFFSET UNITYSDK_OFFSET(0xA360B70)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_GET__ENUMERATOR_OFFSET UNITYSDK_OFFSET(0xA363DF0)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_INITCOMPONENTBYROGUE_OFFSET UNITYSDK_OFFSET(0xA361250)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_INITCOMPONENT_1_OFFSET UNITYSDK_OFFSET(0xA35FEE0)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_INITCOMPONENT_2_OFFSET UNITYSDK_OFFSET(0xA360360)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_INITCOMPONENT_3_OFFSET UNITYSDK_OFFSET(0xA360B90)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_INITCOMPONENT_4_OFFSET UNITYSDK_OFFSET(0xA360FA0)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xA35F0B0)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_ISINFORCEHIDEBILLBOARDSTATE_OFFSET UNITYSDK_OFFSET(0xA363230)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0xA363DB0)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA362780)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_NOTIFYFLOATINGTEXTINFO_OFFSET UNITYSDK_OFFSET(0xA362030)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_NOTIFYINWARDBUBBLEINFO_OFFSET UNITYSDK_OFFSET(0xA361FA0)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_NOTIFYOVERRIDE_OFFSET UNITYSDK_OFFSET(0xA361910)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0xA35EC00)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0xA35F060)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_RESETICON_OFFSET UNITYSDK_OFFSET(0xA362650)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_RESETOVERRIDE_OFFSET UNITYSDK_OFFSET(0xA3621D0)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_SETFIVEDIMSIDEPUZZLECHESTSHOW_OFFSET UNITYSDK_OFFSET(0xA362110)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_SETFORCEHIDEFLAG_OFFSET UNITYSDK_OFFSET(0xA363AC0)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_SETSHOWBILLBOARDINSTORYMODE_OFFSET UNITYSDK_OFFSET(0xA3618A0)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_SET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xA363B30)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_SET_SKIPMODELVISIBLECHECK_OFFSET UNITYSDK_OFFSET(0xA362770)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_SET__BILLBOARDDATAPROVIDER_OFFSET UNITYSDK_OFFSET(0xA35F9F0)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_SET__ENUMERATOR_OFFSET UNITYSDK_OFFSET(0xA363E10)
#define RPG_GAMECORE_BILLBOARDCOMPONENT_SWITCHSHOWTYPE_OFFSET UNITYSDK_OFFSET(0xA361720)
#define RPG_GAMECORE_BILLBOARDCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xA35E8D0)
#define RPG_GAMECORE_BILLBOARDCOMPONENT__GETBILLBOARDICONCONFIGROW_OFFSET UNITYSDK_OFFSET(0xA363930)
#define RPG_GAMECORE_BILLBOARDCOMPONENT__GETFIVEDIMSIDEPUZZLEPANELPATHS_OFFSET UNITYSDK_OFFSET(0xA360960)
#define RPG_GAMECORE_BILLBOARDCOMPONENT__GETFIVEDIMSIDEPUZZLEPANELPATH_OFFSET UNITYSDK_OFFSET(0xA3639D0)
#define RPG_GAMECORE_BILLBOARDCOMPONENT__HASATTACHPOINT_OFFSET UNITYSDK_OFFSET(0xA363390)
#define RPG_GAMECORE_BILLBOARDCOMPONENT__INITBILLBOARD_OFFSET UNITYSDK_OFFSET(0xA35FA50)
#define RPG_GAMECORE_BILLBOARDCOMPONENT__INITICON_OFFSET UNITYSDK_OFFSET(0xA35FD00)
#define RPG_GAMECORE_BILLBOARDCOMPONENT__ISCAMERAFRONT_OFFSET UNITYSDK_OFFSET(0xA363400)
#define RPG_GAMECORE_BILLBOARDCOMPONENT__ISCAMERATOOFARORTOONEAR_OFFSET UNITYSDK_OFFSET(0xA363690)
#define RPG_GAMECORE_BILLBOARDCOMPONENT__ISICONPARAMREPEATED_OFFSET UNITYSDK_OFFSET(0xA3638A0)
#define RPG_GAMECORE_BILLBOARDCOMPONENT__ISICONPARAMVALID_OFFSET UNITYSDK_OFFSET(0xA3637D0)
#define RPG_GAMECORE_BILLBOARDCOMPONENT__ISNPCENABLE_OFFSET UNITYSDK_OFFSET(0xA363310)
#define RPG_GAMECORE_BILLBOARDCOMPONENT__ISPROPENABLE_OFFSET UNITYSDK_OFFSET(0xA363290)
#define RPG_GAMECORE_BILLBOARDCOMPONENT__NEEDSHOWBILLBOARD_OFFSET UNITYSDK_OFFSET(0xA362E10)
#define RPG_GAMECORE_BILLBOARDCOMPONENT__ONREFRESHBILLBOARD_OFFSET UNITYSDK_OFFSET(0xA362BA0)
#define RPG_GAMECORE_BILLBOARDCOMPONENT__ONSHOWTYPECHANGE_OFFSET UNITYSDK_OFFSET(0xA363110)
#define RPG_GAMECORE_BILLBOARDCOMPONENT__SETSHOWTYPE_OFFSET UNITYSDK_OFFSET(0xA361820)
#define RPG_GAMECORE_BILLBOARDCOMPONENT__TICKBILLBOARDVISIBILITY_OFFSET UNITYSDK_OFFSET(0xA3628B0)
#define RPG_GAMECORE_BILLBOARDCOMPONENT__TICKFORCEHIDEBILLBOARD_OFFSET UNITYSDK_OFFSET(0xA362840)
#define RPG_GAMECORE_BILLBOARDCOMPONENT__TRYADDICON_OFFSET UNITYSDK_OFFSET(0xA35F720)
#define RPG_GAMECORE_BILLBOARDCOMPONENT__TRYREMOVEICON_OFFSET UNITYSDK_OFFSET(0xA362350)
#define RPG_GAMECORE_BILLBOARDCOMPONENT__UPDATESHOWDISTANCEFAR_OFFSET UNITYSDK_OFFSET(0xA361E20)
#define RPG_GAMECORE_BILLBOARDCOMPONENT___IFIXBASEPROXY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA363E20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BillboardComponent_TypeDefinitionIndex = 44962;

	class BillboardComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		// static const ::System::String* _ATTACH_POINT; // 0x0
		// static const ::System::Single _SHOW_BILLBOARD_FAR_OFFSET; // 0x0
		::UnityEngine::Transform* _AttachTrans; // 0x18
		::System::Collections::Generic::SortedList_2<::Struct_2_6A75E669C858F984, ::System::UInt32>* _IconList; // 0x20
		::UnityEngine::GameObject* _RootModel; // 0x28
		::RPG::GameCore::NPCComponent* _NPCCmpt; // 0x30
		::RPG::Client::BillboardWayPointMutexManager* _BillBoardManagerRef; // 0x38
		::System::Collections::Generic::Dictionary_2_Enumerator<::RPG::Client::BillboardShowType, ::System::Single> __Enumerator_k__BackingField; // 0x40
		::UnityEngine::Transform* _CameraTrans; // 0x60
		::RPG::Client::Billboard::BillboardNotifyParam* _NotifyParam; // 0x68
		::RPG::GameCore::PropComponent* _PropComponent; // 0x70
		::RPG::Client::Billboard::BillboardDataProvider* _BillboardDataProviderOrigin; // 0x78
		::RPG::GameCore::CharacterModelComponent* _Model; // 0x80
		::System::Boolean _CmptEnable; // 0x88
		::System::Boolean _ShowInStoryMode; // 0x89
		::System::Single _ShowDistanceNear; // 0x8C
		::RPG::Client::Billboard::BillboardIdentifier _Identifier_k__BackingField; // 0x90
		::RPG::Client::BillboardShowType _InitBoardShowBit; // 0xA4
		::System::Single _ForceHideAlertHintTimer; // 0xA8
		::System::UInt32 _InitMiniIconID; // 0xAC
		::System::Boolean _ForceHideFlag; // 0xB0
		::System::Boolean _IsDisposed; // 0xB1
		::System::Boolean _IsBillboardShowing; // 0xB2
		::System::Boolean _SkipModelVisibleCheck_k__BackingField; // 0xB3
		::System::Single _ShowDistanceFar; // 0xB4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_DISPOSE_OFFSET))(this);
		}

		::System::Void OnModelRootLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_ONMODELROOTLOADED_OFFSET))(this);
		}

		::System::Void OnModelRootUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_ONMODELROOTUNLOADED_OFFSET))(this);
		}

		::System::Void InitComponent(::RPG::GameCore::NPCDataRow* npcRow)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NPCDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_INITCOMPONENT_OFFSET))(this, npcRow);
		}

		::System::Void InitComponent_1(::RPG::GameCore::NPCMonsterDataRow* npcMonsterRow)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NPCMonsterDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_INITCOMPONENT_1_OFFSET))(this, npcMonsterRow);
		}

		::System::Void InitComponent_2(::RPG::GameCore::PropRow* row, ::RPG::GameCore::CharacterModelComponent* model, ::RPG::GameCore::PropComponent* prop)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropRow*, ::RPG::GameCore::CharacterModelComponent*, ::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_INITCOMPONENT_2_OFFSET))(this, row, model, prop);
		}

		::System::Void InitComponent_3(::System::UInt32 iconID, ::RPG::GameCore::CharacterModelComponent* model, ::RPG::GameCore::PropComponent* prop, ::Il2CppArray<::System::Int32>* boardShowList, ::System::Single maxDistance)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::CharacterModelComponent*, ::RPG::GameCore::PropComponent*, ::Il2CppArray<::System::Int32>*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_INITCOMPONENT_3_OFFSET))(this, iconID, model, prop, boardShowList, maxDistance);
		}

		::System::Void InitComponent_4(::Class_2_B905FCDC65EE337C* summonUnitCmpt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_B905FCDC65EE337C*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_INITCOMPONENT_4_OFFSET))(this, summonUnitCmpt);
		}

		::System::Void InitComponentByRogue(::System::UInt32 npcID, ::RPG::Client::BillboardShowType showType)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::BillboardShowType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_INITCOMPONENTBYROGUE_OFFSET))(this, npcID, showType);
		}

		::System::Void SwitchShowType(::RPG::Client::BillboardShowType billboardShowType, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BillboardShowType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_SWITCHSHOWTYPE_OFFSET))(this, billboardShowType, enable);
		}

		::System::Void SetShowBillboardInStoryMode(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_SETSHOWBILLBOARDINSTORYMODE_OFFSET))(this, isShow);
		}

		::System::Void NotifyOverride(::RPG::GameCore::SetBillboardInfo* newInfo, ::System::UInt32 sourceID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SetBillboardInfo*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_NOTIFYOVERRIDE_OFFSET))(this, newInfo, sourceID);
		}

		::System::Void NotifyInwardBubbleInfo(::RPG::GameCore::SetInwardBubbleInfo* newInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SetInwardBubbleInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_NOTIFYINWARDBUBBLEINFO_OFFSET))(this, newInfo);
		}

		::System::Void NotifyFloatingTextInfo(::RPG::GameCore::SetFloatingTextInfo* newInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SetFloatingTextInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_NOTIFYFLOATINGTEXTINFO_OFFSET))(this, newInfo);
		}

		::System::Void SetFiveDimSidePuzzleChestShow(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_SETFIVEDIMSIDEPUZZLECHESTSHOW_OFFSET))(this, isShow);
		}

		::System::Void ResetOverride(::RPG::GameCore::ResetBillboardInfo* resetBillboardInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ResetBillboardInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_RESETOVERRIDE_OFFSET))(this, resetBillboardInfo);
		}

		::System::Void ResetIcon(::Struct_2_6A75E669C858F984 param)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_6A75E669C858F984))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_RESETICON_OFFSET))(this, param);
		}

		::System::Boolean get_SkipModelVisibleCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_GET_SKIPMODELVISIBLECHECK_OFFSET))(this);
		}

		::System::Void set_SkipModelVisibleCheck(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_SET_SKIPMODELVISIBLECHECK_OFFSET))(this, value);
		}

		::System::Void LateUpdate(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_LATEUPDATE_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void Disable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_DISABLE_OFFSET))(this);
		}

		::System::Void Enable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_ENABLE_OFFSET))(this);
		}

		::System::Void _OnRefreshBillboard(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT__ONREFRESHBILLBOARD_OFFSET))(this, arg);
		}

		::System::Void _TickBillboardVisibility()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT__TICKBILLBOARDVISIBILITY_OFFSET))(this);
		}

		::System::Void _InitBillboard()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT__INITBILLBOARD_OFFSET))(this);
		}

		::System::Void _InitIcon(::RPG::Client::MapEntityDef* entityDef)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT__INITICON_OFFSET))(this, entityDef);
		}

		::System::Void _OnShowTypeChange(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT__ONSHOWTYPECHANGE_OFFSET))(this, arg);
		}

		::System::Void _SetShowType(::RPG::Client::BillboardShowType showType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BillboardShowType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT__SETSHOWTYPE_OFFSET))(this, showType);
		}

		::System::Boolean _NeedShowBillboard()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT__NEEDSHOWBILLBOARD_OFFSET))(this);
		}

		::System::Boolean _HasAttachPoint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT__HASATTACHPOINT_OFFSET))(this);
		}

		::System::Boolean _IsCameraTooFarOrTooNear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT__ISCAMERATOOFARORTOONEAR_OFFSET))(this);
		}

		::System::Boolean _IsCameraFront()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT__ISCAMERAFRONT_OFFSET))(this);
		}

		::System::Boolean _IsNpcEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT__ISNPCENABLE_OFFSET))(this);
		}

		::System::Boolean _IsPropEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT__ISPROPENABLE_OFFSET))(this);
		}

		::System::Void _UpdateShowDistanceFar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT__UPDATESHOWDISTANCEFAR_OFFSET))(this);
		}

		::System::String* _TryAddIcon(::Struct_2_6A75E669C858F984 param, ::System::Boolean setMiniMap)
		{
			return ((::System::String*(*)(::PVOID, ::Struct_2_6A75E669C858F984, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT__TRYADDICON_OFFSET))(this, param, setMiniMap);
		}

		::System::String* _TryRemoveIcon(::Struct_2_6A75E669C858F984 param, ::System::Boolean setMiniMap)
		{
			return ((::System::String*(*)(::PVOID, ::Struct_2_6A75E669C858F984, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT__TRYREMOVEICON_OFFSET))(this, param, setMiniMap);
		}

		::System::Boolean _IsIconParamValid(::Struct_2_6A75E669C858F984 param)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_6A75E669C858F984))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT__ISICONPARAMVALID_OFFSET))(this, param);
		}

		::RPG::GameCore::BillboardIconConfigRow* _GetBillboardIconConfigRow(::System::UInt32 miniMapIconID)
		{
			return ((::RPG::GameCore::BillboardIconConfigRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT__GETBILLBOARDICONCONFIGROW_OFFSET))(this, miniMapIconID);
		}

		::System::Boolean _IsIconParamRepeated(::Struct_2_6A75E669C858F984 param)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_6A75E669C858F984))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT__ISICONPARAMREPEATED_OFFSET))(this, param);
		}

		::System::Tuple_2<::System::String*, ::System::String*>* _GetFiveDimSidePuzzlePanelPaths(::System::UInt32 miniMapIconID)
		{
			return ((::System::Tuple_2<::System::String*, ::System::String*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT__GETFIVEDIMSIDEPUZZLEPANELPATHS_OFFSET))(this, miniMapIconID);
		}

		::System::String* _GetFiveDimSidePuzzlePanelPath(::System::UInt32 fiveDimBillboardID)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT__GETFIVEDIMSIDEPUZZLEPANELPATH_OFFSET))(this, fiveDimBillboardID);
		}

		::System::Void _TickForceHideBillboard(::System::Single dt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT__TICKFORCEHIDEBILLBOARD_OFFSET))(this, dt);
		}

		::System::Void ForceHideBillboard(::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_FORCEHIDEBILLBOARD_OFFSET))(this, duration);
		}

		::System::Boolean IsInForceHideBillboardState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_ISINFORCEHIDEBILLBOARDSTATE_OFFSET))(this);
		}

		::System::Void SetForceHideFlag(::System::Boolean hide)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_SETFORCEHIDEFLAG_OFFSET))(this, hide);
		}

		::RPG::Client::Billboard::BillboardIdentifier get_Identifier()
		{
			return ((::RPG::Client::Billboard::BillboardIdentifier(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::Void set_Identifier(::RPG::Client::Billboard::BillboardIdentifier value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Billboard::BillboardIdentifier))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_SET_IDENTIFIER_OFFSET))(this, value);
		}

		::System::Single GetCurrentDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_GETCURRENTDISTANCE_OFFSET))(this);
		}

		::UnityEngine::Transform* GetAttachTrans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_GETATTACHTRANS_OFFSET))(this);
		}

		::System::Boolean IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_ISVISIBLE_OFFSET))(this);
		}

		::RPG::Client::Billboard::BillboardDataProvider* get__BillboardDataProvider()
		{
			return ((::RPG::Client::Billboard::BillboardDataProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_GET__BILLBOARDDATAPROVIDER_OFFSET))(this);
		}

		::System::Void set__BillboardDataProvider(::RPG::Client::Billboard::BillboardDataProvider* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Billboard::BillboardDataProvider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_SET__BILLBOARDDATAPROVIDER_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2_Enumerator<::RPG::Client::BillboardShowType, ::System::Single> get__Enumerator()
		{
			return ((::System::Collections::Generic::Dictionary_2_Enumerator<::RPG::Client::BillboardShowType, ::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_GET__ENUMERATOR_OFFSET))(this);
		}

		::System::Void set__Enumerator(::System::Collections::Generic::Dictionary_2_Enumerator<::RPG::Client::BillboardShowType, ::System::Single> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2_Enumerator<::RPG::Client::BillboardShowType, ::System::Single>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT_SET__ENUMERATOR_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy_LateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BILLBOARDCOMPONENT___IFIXBASEPROXY_LATEUPDATE_OFFSET))(this, P0);
		}
	};
}
