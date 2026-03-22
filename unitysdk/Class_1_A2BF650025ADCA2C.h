#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace UnityEngine { class Transform; }

#define CLASS_1_A2BF650025ADCA2C_METHOD_1_6B73B5991864292A_OFFSET UNITYSDK_OFFSET(0x8A97100)
#define CLASS_1_A2BF650025ADCA2C_METHOD_1_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x8A97290)
#define CLASS_1_A2BF650025ADCA2C_METHOD_1_F85AF3E21CC472C1_OFFSET UNITYSDK_OFFSET(0x8A96F50)
#define CLASS_1_A2BF650025ADCA2C__CTOR_OFFSET UNITYSDK_OFFSET(0x8A970F0)

inline static constexpr unsigned int Class_1_A2BF650025ADCA2C_TypeDefinitionIndex = 54143;

class Class_1_A2BF650025ADCA2C : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2BF650025ADCA2C__CTOR_OFFSET))(this);
	}

	static ::Class_1_A2BF650025ADCA2C* Method_1_F85AF3E21CC472C1(::UnityEngine::Transform* a1)
	{
		return ((::Class_1_A2BF650025ADCA2C*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_A2BF650025ADCA2C_METHOD_1_F85AF3E21CC472C1_OFFSET))(a1);
	}

	static ::Class_1_A2BF650025ADCA2C* Method_1_6B73B5991864292A(::UnityEngine::Rect a1)
	{
		return ((::Class_1_A2BF650025ADCA2C*(*)(::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_1_A2BF650025ADCA2C_METHOD_1_6B73B5991864292A_OFFSET))(a1);
	}

	::System::Void Method_1_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2BF650025ADCA2C_METHOD_1_A1ADC999CFACEB89_OFFSET))(this);
	}
};
