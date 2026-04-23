#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PenaconyEndmostChronicleEventType.h"
#include "unitysdk/RPG/Client/PenaconyEndmostChronicleOpenType.h"
#include "unitysdk/RPG/Client/UIController_TransitionStyle.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PenaconyEndmostChronicleEvent; }
namespace RPG::Client { class PenaconyEndmostChronicleMoveAnimData; }
namespace RPG::Client { class PenaconyEndmostChroniclePathData; }
namespace RPG::Client { class UIController; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace TMPro { class TMP_FontAsset; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_ASYNCSHOWENDMOSTCHRONICLEPAGE_OFFSET UNITYSDK_OFFSET(0x165BCA40)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_CREATEDEFAULT_OFFSET UNITYSDK_OFFSET(0x165BC9C0)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_CREATE_OFFSET UNITYSDK_OFFSET(0x165BC910)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x165BCEA0)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_FIREEVENT_OFFSET UNITYSDK_OFFSET(0x165BCF40)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_GETCHAPTERID_OFFSET UNITYSDK_OFFSET(0x165BD960)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_GETSDFFONTASSET_OFFSET UNITYSDK_OFFSET(0x165BDA00)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_GET_INITPOSITIONCONFIG_OFFSET UNITYSDK_OFFSET(0x165BDC10)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_GET_INITSCALE_OFFSET UNITYSDK_OFFSET(0x165BDBF0)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x165BDB70)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_GET_INTERACTABLE_OFFSET UNITYSDK_OFFSET(0x165BDC30)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_GET_ISINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x165BDC50)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_GET_ISOPENMISSIONDETAIL_OFFSET UNITYSDK_OFFSET(0x165BDC70)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_GET_OPENTYPE_OFFSET UNITYSDK_OFFSET(0x165BDC90)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_GET_TRANSITIONSTYLE_OFFSET UNITYSDK_OFFSET(0x165BDCB0)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_HASCONNECTION_OFFSET UNITYSDK_OFFSET(0x165BD420)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_ISCHRONICLEPATHDATASHOWBYID_OFFSET UNITYSDK_OFFSET(0x165BD220)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_ISCHRONICLEPATHDATASHOW_OFFSET UNITYSDK_OFFSET(0x165BD0F0)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_ISDISABLEGOTO_OFFSET UNITYSDK_OFFSET(0x165BD7E0)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_REGISTEREVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x165BD090)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_REMOVECUSTOMHIDECHRONICLEID_OFFSET UNITYSDK_OFFSET(0x165BD6B0)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_SETCUSTOMHIDECHRONICLEIDS_OFFSET UNITYSDK_OFFSET(0x165BD580)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x165BD710)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_SETISINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x165BD760)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_SET_INITPOSITIONCONFIG_OFFSET UNITYSDK_OFFSET(0x165BDC20)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_SET_INITSCALE_OFFSET UNITYSDK_OFFSET(0x165BDC00)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x165BDBB0)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_SET_INTERACTABLE_OFFSET UNITYSDK_OFFSET(0x165BDC40)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_SET_ISINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x165BDC60)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_SET_ISOPENMISSIONDETAIL_OFFSET UNITYSDK_OFFSET(0x165BDC80)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_SET_OPENTYPE_OFFSET UNITYSDK_OFFSET(0x165BDCA0)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_SET_TRANSITIONSTYLE_OFFSET UNITYSDK_OFFSET(0x165BDCC0)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x165BC8F0)
#define RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT__ISCHRONICLEPATHHIDE_OFFSET UNITYSDK_OFFSET(0x165BD1B0)

namespace RPG::Client
{
	inline static constexpr unsigned int PenaconyEndmostChronicleContext_TypeDefinitionIndex = 60865;

	class PenaconyEndmostChronicleContext : public ::System::Object
	{
	public:
		static ::RPG::Client::PenaconyEndmostChronicleContext** StaticGet__Instance_k__BackingField()
		{
			return (::RPG::Client::PenaconyEndmostChronicleContext**)Il2CppClass::FromTypeDefinitionIndex(PenaconyEndmostChronicleContext_TypeDefinitionIndex)->GetStaticField(0x37000);
		}
		::XLua::LuaTable* _LuaTable; // 0x10
		::RPG::Client::PenaconyEndmostChronicleMoveAnimData* _InitPositionConfig_k__BackingField; // 0x18
		::TMPro::TMP_FontAsset* _SDFFontAsset; // 0x20
		::System::Action_2<::XLua::LuaTable*, ::RPG::Client::PenaconyEndmostChronicleEvent*>* _OnEvent; // 0x28
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _CustomHideChronicleIDs; // 0x30
		::System::Boolean _IsOpenMissionDetail_k__BackingField; // 0x38
		::System::Boolean _Interactable_k__BackingField; // 0x39
		::System::Boolean _IsInPerformance_k__BackingField; // 0x3A
		::System::Single _InitScale_k__BackingField; // 0x3C
		::RPG::Client::PenaconyEndmostChronicleOpenType _OpenType_k__BackingField; // 0x40
		::RPG::Client::UIController_TransitionStyle _TransitionStyle_k__BackingField; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PenaconyEndmostChronicleContext* Create()
		{
			return ((::RPG::Client::PenaconyEndmostChronicleContext*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_CREATE_OFFSET))();
		}

		static ::RPG::Client::PenaconyEndmostChronicleContext* CreateDefault()
		{
			return ((::RPG::Client::PenaconyEndmostChronicleContext*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_CREATEDEFAULT_OFFSET))();
		}

		static ::RPG::Client::UIController* AsyncShowEndmostChroniclePage(::RPG::Client::PenaconyEndmostChronicleOpenType openType, ::RPG::Client::PenaconyEndmostChronicleContext* context, ::System::Boolean useSpecialTransition)
		{
			return ((::RPG::Client::UIController*(*)(::RPG::Client::PenaconyEndmostChronicleOpenType, ::RPG::Client::PenaconyEndmostChronicleContext*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_ASYNCSHOWENDMOSTCHRONICLEPAGE_OFFSET))(openType, context, useSpecialTransition);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_DISPOSE_OFFSET))(this);
		}

		::System::Void FireEvent(::RPG::Client::PenaconyEndmostChronicleEventType eventType, ::System::Object* extraData, ::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PenaconyEndmostChronicleEventType, ::System::Object*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_FIREEVENT_OFFSET))(this, eventType, extraData, onFinish);
		}

		::System::Void RegisterEventHandler(::System::Action_2<::XLua::LuaTable*, ::RPG::Client::PenaconyEndmostChronicleEvent*>* action, ::XLua::LuaTable* target)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::XLua::LuaTable*, ::RPG::Client::PenaconyEndmostChronicleEvent*>*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_REGISTEREVENTHANDLER_OFFSET))(this, action, target);
		}

		::System::Boolean IsChroniclePathDataShow(::RPG::Client::PenaconyEndmostChroniclePathData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PenaconyEndmostChroniclePathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_ISCHRONICLEPATHDATASHOW_OFFSET))(this, data);
		}

		::System::Boolean IsChroniclePathDataShowByID(::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_ISCHRONICLEPATHDATASHOWBYID_OFFSET))(this, id);
		}

		::System::Boolean HasConnection(::RPG::Client::PenaconyEndmostChroniclePathData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PenaconyEndmostChroniclePathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_HASCONNECTION_OFFSET))(this, data);
		}

		::System::Void SetCustomHideChronicleIDs(::System::Collections::Generic::IList_1<::System::UInt32>* ids)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_SETCUSTOMHIDECHRONICLEIDS_OFFSET))(this, ids);
		}

		::System::Void RemoveCustomHideChronicleID(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_REMOVECUSTOMHIDECHRONICLEID_OFFSET))(this, id);
		}

		::System::Void SetInteractable(::System::Boolean interactable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_SETINTERACTABLE_OFFSET))(this, interactable);
		}

		::System::Void SetIsInPerformance(::System::Boolean isInPerformance)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_SETISINPERFORMANCE_OFFSET))(this, isInPerformance);
		}

		::System::Boolean IsDisableGoto(::System::String*& hintTextID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_ISDISABLEGOTO_OFFSET))(this, hintTextID);
		}

		::System::UInt32 GetChapterID(::RPG::Client::PenaconyEndmostChroniclePathData* pathData)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::PenaconyEndmostChroniclePathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_GETCHAPTERID_OFFSET))(this, pathData);
		}

		::TMPro::TMP_FontAsset* GetSDFFontAsset()
		{
			return ((::TMPro::TMP_FontAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_GETSDFFONTASSET_OFFSET))(this);
		}

		::System::Boolean _IsChroniclePathHide(::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT__ISCHRONICLEPATHHIDE_OFFSET))(this, id);
		}

		static ::RPG::Client::PenaconyEndmostChronicleContext* get_Instance()
		{
			return ((::RPG::Client::PenaconyEndmostChronicleContext*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::RPG::Client::PenaconyEndmostChronicleContext* value)
		{
			return ((::System::Void(*)(::RPG::Client::PenaconyEndmostChronicleContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_SET_INSTANCE_OFFSET))(value);
		}

		::System::Single get_InitScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_GET_INITSCALE_OFFSET))(this);
		}

		::System::Void set_InitScale(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_SET_INITSCALE_OFFSET))(this, value);
		}

		::RPG::Client::PenaconyEndmostChronicleMoveAnimData* get_InitPositionConfig()
		{
			return ((::RPG::Client::PenaconyEndmostChronicleMoveAnimData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_GET_INITPOSITIONCONFIG_OFFSET))(this);
		}

		::System::Void set_InitPositionConfig(::RPG::Client::PenaconyEndmostChronicleMoveAnimData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PenaconyEndmostChronicleMoveAnimData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_SET_INITPOSITIONCONFIG_OFFSET))(this, value);
		}

		::System::Boolean get_Interactable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_GET_INTERACTABLE_OFFSET))(this);
		}

		::System::Void set_Interactable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_SET_INTERACTABLE_OFFSET))(this, value);
		}

		::System::Boolean get_IsInPerformance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_GET_ISINPERFORMANCE_OFFSET))(this);
		}

		::System::Void set_IsInPerformance(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_SET_ISINPERFORMANCE_OFFSET))(this, value);
		}

		::System::Boolean get_IsOpenMissionDetail()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_GET_ISOPENMISSIONDETAIL_OFFSET))(this);
		}

		::System::Void set_IsOpenMissionDetail(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_SET_ISOPENMISSIONDETAIL_OFFSET))(this, value);
		}

		::RPG::Client::PenaconyEndmostChronicleOpenType get_OpenType()
		{
			return ((::RPG::Client::PenaconyEndmostChronicleOpenType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_GET_OPENTYPE_OFFSET))(this);
		}

		::System::Void set_OpenType(::RPG::Client::PenaconyEndmostChronicleOpenType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PenaconyEndmostChronicleOpenType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_SET_OPENTYPE_OFFSET))(this, value);
		}

		::RPG::Client::UIController_TransitionStyle get_TransitionStyle()
		{
			return ((::RPG::Client::UIController_TransitionStyle(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_GET_TRANSITIONSTYLE_OFFSET))(this);
		}

		::System::Void set_TransitionStyle(::RPG::Client::UIController_TransitionStyle value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController_TransitionStyle))((::PBYTE)hIl2Cpp + RPG_CLIENT_PENACONYENDMOSTCHRONICLECONTEXT_SET_TRANSITIONSTYLE_OFFSET))(this, value);
		}
	};
}
