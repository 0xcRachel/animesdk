#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_849;

#define CLASS_1_7E9DD9C420D52D84_CLEAR_OFFSET UNITYSDK_OFFSET(0xA6E2D70)
#define CLASS_1_7E9DD9C420D52D84__CTOR_OFFSET UNITYSDK_OFFSET(0xA6E2E50)

inline static constexpr unsigned int Class_1_7E9DD9C420D52D84_TypeDefinitionIndex = 58890;

class Class_1_7E9DD9C420D52D84 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_849* Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E9DD9C420D52D84__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E9DD9C420D52D84_CLEAR_OFFSET))(this);
	}
};
