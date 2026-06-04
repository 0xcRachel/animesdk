#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_26E822D022001344;

#define CLASS_1_47EB23CB5C4B2615_8_CLEAR_OFFSET UNITYSDK_OFFSET(0x19629210)
#define CLASS_1_47EB23CB5C4B2615_8__CTOR_OFFSET UNITYSDK_OFFSET(0x19629290)

inline static constexpr unsigned int Class_1_47EB23CB5C4B2615_8_TypeDefinitionIndex = 40090;

class Class_1_47EB23CB5C4B2615_8 : public ::System::Object
{
public:
	::Class_1_26E822D022001344* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47EB23CB5C4B2615_8__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47EB23CB5C4B2615_8_CLEAR_OFFSET))(this);
	}
};
