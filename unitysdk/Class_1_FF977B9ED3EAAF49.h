#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_16F410D309DC331F.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_91;
namespace Entitas { class IEntity; }
namespace RPG { template <typename T> class PoolList_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_FF977B9ED3EAAF49_CLEAR_OFFSET UNITYSDK_OFFSET(0x16DD80B0)
#define CLASS_1_FF977B9ED3EAAF49_METHOD_1_FAA1EB17625DA9B4_OFFSET UNITYSDK_OFFSET(0x16DD82C0)
#define CLASS_1_FF977B9ED3EAAF49_ONALLOC_OFFSET UNITYSDK_OFFSET(0x16DD81F0)
#define CLASS_1_FF977B9ED3EAAF49_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x16DD8280)
#define CLASS_1_FF977B9ED3EAAF49__CTOR_OFFSET UNITYSDK_OFFSET(0x16DD8480)

inline static constexpr unsigned int Class_1_FF977B9ED3EAAF49_TypeDefinitionIndex = 38002;

class Class_1_FF977B9ED3EAAF49 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_16; // 0x10
	::RPG::PoolList_1<::Struct_2_16F410D309DC331F>* Field_1_20; // 0x18
	::UnityEngine::GameObject* Field_1_15; // 0x20
	::System::String* Field_1_1; // 0x28
	::System::String* Field_1_6; // 0x30
	::Class_0_16E4307DCC419505_91* Field_1_18; // 0x38
	::System::String* Field_1_9; // 0x40
	::Struct_2_16F410D309DC331F Field_1_19; // 0x48
	::System::String* Field_1_7; // 0x70
	::System::Action_2<::Entitas::IEntity*, ::UnityEngine::GameObject*>* Field_1_12; // 0x78
	::UnityEngine::Quaternion Field_1_5; // 0x80
	::System::Boolean Field_1_8; // 0x90
	::System::Boolean Field_1_13; // 0x91
	::System::Boolean Field_1_3; // 0x92
	::UnityEngine::Vector3 Field_1_11; // 0x94
	::System::Boolean Field_1_0; // 0xA0
	::System::Boolean Field_1_14; // 0xA1
	::System::Boolean Field_1_2; // 0xA2
	::System::Boolean Field_1_17; // 0xA3
	::UnityEngine::Vector3 Field_1_10; // 0xA4
	::UnityEngine::Vector3 Field_1_4; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF977B9ED3EAAF49__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF977B9ED3EAAF49_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF977B9ED3EAAF49_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF977B9ED3EAAF49_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_1_FAA1EB17625DA9B4(::Class_1_FF977B9ED3EAAF49* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FF977B9ED3EAAF49*))((::PBYTE)hIl2Cpp + CLASS_1_FF977B9ED3EAAF49_METHOD_1_FAA1EB17625DA9B4_OFFSET))(this, a1);
	}
};
