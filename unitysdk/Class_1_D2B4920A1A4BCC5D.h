#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_16F410D309DC331F.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_90;
namespace Entitas { class IEntity; }
namespace RPG { template <typename T> class PoolList_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_D2B4920A1A4BCC5D_CLEAR_OFFSET UNITYSDK_OFFSET(0x189C20A0)
#define CLASS_1_D2B4920A1A4BCC5D_METHOD_1_98816D470243CCFA_OFFSET UNITYSDK_OFFSET(0x189C2290)
#define CLASS_1_D2B4920A1A4BCC5D_ONALLOC_OFFSET UNITYSDK_OFFSET(0x189C21C0)
#define CLASS_1_D2B4920A1A4BCC5D_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x189C2250)
#define CLASS_1_D2B4920A1A4BCC5D__CTOR_OFFSET UNITYSDK_OFFSET(0x189C2440)

inline static constexpr unsigned int Class_1_D2B4920A1A4BCC5D_TypeDefinitionIndex = 38743;

class Class_1_D2B4920A1A4BCC5D : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::UnityEngine::Transform* Field_1_2; // 0x20
	::System::String* Field_1_3; // 0x28
	::System::Action_2<::Entitas::IEntity*, ::UnityEngine::GameObject*>* Field_1_4; // 0x30
	::RPG::PoolList_1<::Struct_2_16F410D309DC331F>* Field_1_5; // 0x38
	::System::String* Field_1_6; // 0x40
	::System::String* Field_1_7; // 0x48
	::Class_0_16E4307DCC419505_90* Field_1_8; // 0x50
	::Struct_2_16F410D309DC331F Field_1_9; // 0x58
	::System::Boolean Field_1_10; // 0x80
	::System::Boolean Field_1_11; // 0x81
	::System::Boolean Field_1_12; // 0x82
	::System::Boolean Field_1_13; // 0x83
	::UnityEngine::Vector3 Field_1_14; // 0x84
	::System::Boolean Field_1_15; // 0x90
	::System::Boolean Field_1_16; // 0x91
	::System::Boolean Field_1_17; // 0x92
	::UnityEngine::Quaternion Field_1_18; // 0x94
	::UnityEngine::Vector3 Field_1_19; // 0xA4
	::UnityEngine::Vector3 Field_1_20; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D2B4920A1A4BCC5D__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D2B4920A1A4BCC5D_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D2B4920A1A4BCC5D_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D2B4920A1A4BCC5D_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_1_98816D470243CCFA(::Class_1_D2B4920A1A4BCC5D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D2B4920A1A4BCC5D*))((::PBYTE)hIl2Cpp + CLASS_1_D2B4920A1A4BCC5D_METHOD_1_98816D470243CCFA_OFFSET))(this, a1);
	}
};
