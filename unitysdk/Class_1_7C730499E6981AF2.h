#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class CharacterInputData; }

#define CLASS_1_7C730499E6981AF2_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8BC8A80)
#define CLASS_1_7C730499E6981AF2__CTOR_OFFSET UNITYSDK_OFFSET(0x8BC8AF0)

inline static constexpr unsigned int Class_1_7C730499E6981AF2_TypeDefinitionIndex = 45970;

class Class_1_7C730499E6981AF2 : public ::System::Object
{
public:
	::RPG::GameCore::CharacterInputData* Field_1_5; // 0x10
	::UnityEngine::Quaternion Field_1_7; // 0x18
	::System::Boolean Field_1_1; // 0x28
	::System::Boolean Field_1_2; // 0x29
	::System::Boolean Field_1_0; // 0x2A
	::UnityEngine::RaycastHit Field_1_4; // 0x2C
	::UnityEngine::Vector3 Field_1_3; // 0x5C
	::UnityEngine::Vector3 Field_1_6; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C730499E6981AF2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C730499E6981AF2_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
