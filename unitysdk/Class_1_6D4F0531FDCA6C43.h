#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_EAC1BB0F093534A5.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimPropSpawnerParam; }

#define CLASS_1_6D4F0531FDCA6C43_CLEAR_OFFSET UNITYSDK_OFFSET(0x161A9C40)
#define CLASS_1_6D4F0531FDCA6C43__CTOR_OFFSET UNITYSDK_OFFSET(0x161A9CB0)

inline static constexpr unsigned int Class_1_6D4F0531FDCA6C43_TypeDefinitionIndex = 32618;

class Class_1_6D4F0531FDCA6C43 : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimPropSpawnerParam* Field_1_4; // 0x10
	::Struct_2_EAC1BB0F093534A5 Field_1_3; // 0x18
	::System::Boolean Field_1_2; // 0x80
	::System::Boolean Field_1_0; // 0x81
	::System::Single Field_1_1; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D4F0531FDCA6C43__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D4F0531FDCA6C43_CLEAR_OFFSET))(this);
	}
};
