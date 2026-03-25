#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_EAC1BB0F093534A5.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimPropSpawnerParam; }

#define CLASS_1_6D4F0531FDCA6C43_CLEAR_OFFSET UNITYSDK_OFFSET(0x1690B1A0)
#define CLASS_1_6D4F0531FDCA6C43__CTOR_OFFSET UNITYSDK_OFFSET(0x1690B220)

inline static constexpr unsigned int Class_1_6D4F0531FDCA6C43_TypeDefinitionIndex = 33546;

class Class_1_6D4F0531FDCA6C43 : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimPropSpawnerParam* Field_1_5; // 0x10
	::Struct_2_EAC1BB0F093534A5 Field_1_4; // 0x18
	::Struct_2_EAC1BB0F093534A5 Field_1_3; // 0x80
	::System::Single Field_1_1; // 0xE8
	::System::Boolean Field_1_2; // 0xEC
	::System::Boolean Field_1_0; // 0xED

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D4F0531FDCA6C43__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D4F0531FDCA6C43_CLEAR_OFFSET))(this);
	}
};
