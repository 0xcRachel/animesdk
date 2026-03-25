#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_4E1996B50E2373CB_CLEAR_OFFSET UNITYSDK_OFFSET(0xA1DAE70)
#define CLASS_1_4E1996B50E2373CB__CTOR_OFFSET UNITYSDK_OFFSET(0xA1DAED0)

inline static constexpr unsigned int Class_1_4E1996B50E2373CB_TypeDefinitionIndex = 49258;

class Class_1_4E1996B50E2373CB : public ::System::Object
{
public:
	::Il2CppArray<::UnityEngine::AnimationCurve*>* Field_1_5; // 0x10
	::Il2CppArray<::UnityEngine::AnimationCurve*>* Field_1_6; // 0x18
	::System::Single Field_1_7; // 0x20
	::System::Single Field_1_1; // 0x24
	::System::Int32 Field_1_3; // 0x28
	::System::Int32 Field_1_2; // 0x2C
	::System::Single Field_1_0; // 0x30
	::System::Single Field_1_4; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4E1996B50E2373CB__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4E1996B50E2373CB_CLEAR_OFFSET))(this);
	}
};
