#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_16F410D309DC331F.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_63;
namespace Entitas { class IEntity; }
namespace RPG { template <typename T> class PoolList_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_FF977B9ED3EAAF49_CLEAR_OFFSET UNITYSDK_OFFSET(0x163532E0)
#define CLASS_1_FF977B9ED3EAAF49_METHOD_1_FAA1EB17625DA9B4_OFFSET UNITYSDK_OFFSET(0x163534D0)
#define CLASS_1_FF977B9ED3EAAF49_ONALLOC_OFFSET UNITYSDK_OFFSET(0x16353400)
#define CLASS_1_FF977B9ED3EAAF49_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x16353490)
#define CLASS_1_FF977B9ED3EAAF49__CTOR_OFFSET UNITYSDK_OFFSET(0x16353670)

inline static constexpr unsigned int Class_1_FF977B9ED3EAAF49_TypeDefinitionIndex = 31378;

class Class_1_FF977B9ED3EAAF49 : public ::System::Object
{
public:
	::Struct_2_16F410D309DC331F Field_1_18; // 0x10
	::System::Action_2<::Entitas::IEntity*, ::UnityEngine::GameObject*>* Field_1_12; // 0x38
	::System::String* Field_1_9; // 0x40
	::UnityEngine::GameObject* Field_1_15; // 0x48
	::RPG::PoolList_1<::Struct_2_16F410D309DC331F>* Field_1_19; // 0x50
	::System::String* Field_1_7; // 0x58
	::Class_0_16E4307DCC419505_63* Field_1_17; // 0x60
	::System::String* Field_1_6; // 0x68
	::System::String* Field_1_1; // 0x70
	::System::Boolean Field_1_0; // 0x78
	::System::Boolean Field_1_8; // 0x79
	::System::Boolean Field_1_2; // 0x7A
	::UnityEngine::Quaternion Field_1_5; // 0x7C
	::UnityEngine::Vector3 Field_1_10; // 0x8C
	::UnityEngine::Vector3 Field_1_11; // 0x98
	::UnityEngine::Vector3 Field_1_4; // 0xA4
	::System::Boolean Field_1_16; // 0xB0
	::System::Boolean Field_1_14; // 0xB1
	::System::Boolean Field_1_3; // 0xB2
	::System::Boolean Field_1_13; // 0xB3

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
