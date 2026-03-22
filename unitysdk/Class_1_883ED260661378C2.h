#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_883ED260661378C2__CTOR_OFFSET UNITYSDK_OFFSET(0xFE6ECD0)

inline static constexpr unsigned int Class_1_883ED260661378C2_TypeDefinitionIndex = 49218;

class Class_1_883ED260661378C2 : public ::System::Object
{
public:
	::System::UInt32 Field_1_1; // 0x10
	::System::UInt32 Field_1_4; // 0x14
	::System::UInt32 Field_1_7; // 0x18
	::System::UInt32 Field_1_5; // 0x1C
	::System::UInt32 Field_1_3; // 0x20
	::System::UInt32 Field_1_0; // 0x24
	::RPG::GameCore::ELevelPerformanceType Field_1_6; // 0x28
	::System::UInt32 Field_1_2; // 0x2C
	::System::UInt32 Field_1_8; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_883ED260661378C2__CTOR_OFFSET))(this);
	}
};
