#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_9BF8902D61AE1796.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define CLASS_1_7174CBF551B30FEB_CLEAR_OFFSET UNITYSDK_OFFSET(0x16136DE0)
#define CLASS_1_7174CBF551B30FEB_ONALLOC_OFFSET UNITYSDK_OFFSET(0x16136D60)
#define CLASS_1_7174CBF551B30FEB_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x16136DA0)
#define CLASS_1_7174CBF551B30FEB__CTOR_OFFSET UNITYSDK_OFFSET(0x16136F30)

inline static constexpr unsigned int Class_1_7174CBF551B30FEB_TypeDefinitionIndex = 32395;

class Class_1_7174CBF551B30FEB : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_1; // 0x10
	::UnityEngine::Collider* Field_1_0; // 0x18
	::Struct_2_9BF8902D61AE1796 Field_1_6; // 0x20
	::UnityEngine::Bounds Field_1_3; // 0xB0
	::UnityEngine::Bounds Field_1_2; // 0xC8
	::System::Boolean Field_1_5; // 0xE0
	::System::Boolean Field_1_4; // 0xE1

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7174CBF551B30FEB__CTOR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7174CBF551B30FEB_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7174CBF551B30FEB_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7174CBF551B30FEB_CLEAR_OFFSET))(this);
	}
};
