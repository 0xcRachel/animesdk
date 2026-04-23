#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::Prop { class ChimeraArrangementModelInstance; }
namespace RPG::Client::Prop { class ChimeraArrangementModelInstance_MotionConfig; }
namespace RPG::Client::Prop { class ChimeraArrangementSlot_MotionData; }
namespace System { class Action; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTSLOT_AWAKE_OFFSET UNITYSDK_OFFSET(0x1580C6D0)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTSLOT_DEACTIVATECHILDREN_OFFSET UNITYSDK_OFFSET(0x1580CA40)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTSLOT_GET_BILLBOARDANCHOR_OFFSET UNITYSDK_OFFSET(0x1580C6C0)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTSLOT_GET_MODELANCHOR_OFFSET UNITYSDK_OFFSET(0x1580C6B0)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTSLOT_NOTIFYPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1580CBA0)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTSLOT_NOTIFYPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x1580CB00)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTSLOT_NOTIFYPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x1580CB50)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTSLOT_PLACEINSTANCEWITHMOTION_OFFSET UNITYSDK_OFFSET(0x1580CCC0)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTSLOT_PLACEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1580CBF0)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTSLOT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1580C790)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTSLOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1580D030)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTSLOT__FINISHBILLBOARDANCHORMOTION_OFFSET UNITYSDK_OFFSET(0x1580CEA0)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTSLOT__STARTBILLBOARDANCHORMOTION_OFFSET UNITYSDK_OFFSET(0x1580CF40)
#define RPG_CLIENT_PROP_CHIMERAARRANGEMENTSLOT__TICKBILLBOARDANCHORMOTION_OFFSET UNITYSDK_OFFSET(0x1580C7E0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraArrangementSlot_TypeDefinitionIndex = 71961;

	class ChimeraArrangementSlot : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* _BillboardAnchor; // 0x18
		::System::Action* OnPointerEnter; // 0x20
		::System::Action* OnPointerExit; // 0x28
		::System::Action* OnPointerDown; // 0x30
		::UnityEngine::Vector3 _OriginalBillboardAnchorPosition; // 0x38
		::UnityEngine::Quaternion _OriginalBillboardAnchorRotation; // 0x44
		::RPG::Client::Prop::ChimeraArrangementSlot_MotionData* _BillboardAnchorMotion; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTSLOT__CTOR_OFFSET))(this);
		}

		::UnityEngine::Transform* get_ModelAnchor()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTSLOT_GET_MODELANCHOR_OFFSET))(this);
		}

		::UnityEngine::Transform* get_BillboardAnchor()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTSLOT_GET_BILLBOARDANCHOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTSLOT_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTSLOT_UPDATE_OFFSET))(this);
		}

		::System::Void DeactivateChildren()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTSLOT_DEACTIVATECHILDREN_OFFSET))(this);
		}

		::System::Void NotifyPointerEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTSLOT_NOTIFYPOINTERENTER_OFFSET))(this);
		}

		::System::Void NotifyPointerExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTSLOT_NOTIFYPOINTEREXIT_OFFSET))(this);
		}

		::System::Void NotifyPointerDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTSLOT_NOTIFYPOINTERDOWN_OFFSET))(this);
		}

		::System::Void PlaceInstance(::RPG::Client::Prop::ChimeraArrangementModelInstance* instance)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraArrangementModelInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTSLOT_PLACEINSTANCE_OFFSET))(this, instance);
		}

		::System::Void PlaceInstanceWithMotion(::RPG::Client::Prop::ChimeraArrangementModelInstance* instance, ::RPG::Client::Prop::ChimeraArrangementSlot* sourceSlot, ::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraArrangementModelInstance*, ::RPG::Client::Prop::ChimeraArrangementSlot*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTSLOT_PLACEINSTANCEWITHMOTION_OFFSET))(this, instance, sourceSlot, onFinish);
		}

		::System::Void _StartBillboardAnchorMotion(::RPG::Client::Prop::ChimeraArrangementSlot* sourceSlot, ::RPG::Client::Prop::ChimeraArrangementModelInstance_MotionConfig* config)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraArrangementSlot*, ::RPG::Client::Prop::ChimeraArrangementModelInstance_MotionConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTSLOT__STARTBILLBOARDANCHORMOTION_OFFSET))(this, sourceSlot, config);
		}

		::System::Void _FinishBillboardAnchorMotion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTSLOT__FINISHBILLBOARDANCHORMOTION_OFFSET))(this);
		}

		::System::Void _TickBillboardAnchorMotion(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAARRANGEMENTSLOT__TICKBILLBOARDANCHORMOTION_OFFSET))(this, deltaTime);
		}
	};
}
