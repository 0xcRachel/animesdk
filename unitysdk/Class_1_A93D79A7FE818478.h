#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E59F92993EBA43C9;
namespace RPG::GameCore { class FiveDimGravityFieldRingConfig; }

#define CLASS_1_A93D79A7FE818478_CLEAR_OFFSET UNITYSDK_OFFSET(0x16781490)
#define CLASS_1_A93D79A7FE818478__CTOR_OFFSET UNITYSDK_OFFSET(0x16781510)

inline static constexpr unsigned int Class_1_A93D79A7FE818478_TypeDefinitionIndex = 33530;

class Class_1_A93D79A7FE818478 : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimGravityFieldRingConfig* Field_1_0; // 0x10
	::Class_1_E59F92993EBA43C9* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A93D79A7FE818478__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A93D79A7FE818478_CLEAR_OFFSET))(this);
	}
};
