#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_029EED7218516331__CTOR_OFFSET UNITYSDK_OFFSET(0x16A23B40)

inline static constexpr unsigned int Class_1_029EED7218516331_TypeDefinitionIndex = 32822;

class Class_1_029EED7218516331 : public ::System::Object
{
public:
	::System::Single Field_1_1; // 0x10
	::RPG::MVector3 Field_1_5; // 0x14
	::RPG::MVector3 Field_1_3; // 0x20
	::System::Single Field_1_7; // 0x2C
	::System::Int32 Field_1_0; // 0x30
	::RPG::MVector3 Field_1_4; // 0x34
	::System::Single Field_1_6; // 0x40
	::System::Single Field_1_8; // 0x44
	::System::Single Field_1_2; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_029EED7218516331__CTOR_OFFSET))(this);
	}
};
