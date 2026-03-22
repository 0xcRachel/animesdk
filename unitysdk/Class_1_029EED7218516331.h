#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_029EED7218516331__CTOR_OFFSET UNITYSDK_OFFSET(0x1621C430)

inline static constexpr unsigned int Class_1_029EED7218516331_TypeDefinitionIndex = 31912;

class Class_1_029EED7218516331 : public ::System::Object
{
public:
	::RPG::MVector3 Field_1_3; // 0x10
	::System::Single Field_1_7; // 0x1C
	::System::Single Field_1_2; // 0x20
	::RPG::MVector3 Field_1_5; // 0x24
	::RPG::MVector3 Field_1_4; // 0x30
	::System::Single Field_1_6; // 0x3C
	::System::Single Field_1_1; // 0x40
	::System::Single Field_1_8; // 0x44
	::System::Int32 Field_1_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_029EED7218516331__CTOR_OFFSET))(this);
	}
};
