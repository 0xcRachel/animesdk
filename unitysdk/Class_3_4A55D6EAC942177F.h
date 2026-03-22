#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomEventBehaviour.h"

class Class_1_945ACFB1FEBC7A2C_16;
namespace RPGTools::Timeline { class CharacterFullBodyChainData; }

#define CLASS_3_4A55D6EAC942177F_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x109D58C0)
#define CLASS_3_4A55D6EAC942177F_METHOD_3_D8E6DC0B27699F85_OFFSET UNITYSDK_OFFSET(0x109D5330)
#define CLASS_3_4A55D6EAC942177F__CTOR_OFFSET UNITYSDK_OFFSET(0x109D58B0)

inline static constexpr unsigned int Class_3_4A55D6EAC942177F_TypeDefinitionIndex = 37846;

class Class_3_4A55D6EAC942177F : public ::RPGTools::Timeline::CustomEventBehaviour
{
public:
	::Il2CppArray<::RPGTools::Timeline::CharacterFullBodyChainData*>* Field_3_1; // 0x20
	::Class_1_945ACFB1FEBC7A2C_16* Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4A55D6EAC942177F__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_D8E6DC0B27699F85()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4A55D6EAC942177F_METHOD_3_D8E6DC0B27699F85_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4A55D6EAC942177F_METHOD_3_5790A55946AA509D_OFFSET))(this);
	}
};
