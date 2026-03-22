#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define CHARACTERLINELIGHTGROUP_CLASS_1_6B669866A7A95ADE__CTOR_OFFSET UNITYSDK_OFFSET(0x9955080)

inline static constexpr unsigned int CharacterLineLightGroup_Class_1_6B669866A7A95ADE_TypeDefinitionIndex = 37364;

class CharacterLineLightGroup_Class_1_6B669866A7A95ADE : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x18
	::UnityEngine::Color Field_1_7; // 0x1C
	::System::Int32 Field_1_5; // 0x2C
	::System::Single Field_1_8; // 0x30
	::UnityEngine::Vector3 Field_1_3; // 0x34
	::UnityEngine::Vector3 Field_1_2; // 0x40
	::UnityEngine::Vector3 Field_1_6; // 0x4C
	::UnityEngine::Vector3 Field_1_4; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_CLASS_1_6B669866A7A95ADE__CTOR_OFFSET))(this);
	}
};
