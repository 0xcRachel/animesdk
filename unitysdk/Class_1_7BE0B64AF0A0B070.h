#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_322;

#define CLASS_1_7BE0B64AF0A0B070_GET_PROPERTYCONTEXT_OFFSET UNITYSDK_OFFSET(0x105BAB80)
#define CLASS_1_7BE0B64AF0A0B070_SET_PROPERTYCONTEXT_OFFSET UNITYSDK_OFFSET(0x105BAB90)
#define CLASS_1_7BE0B64AF0A0B070__CTOR_OFFSET UNITYSDK_OFFSET(0x105BABA0)

inline static constexpr unsigned int Class_1_7BE0B64AF0A0B070_TypeDefinitionIndex = 40912;

class Class_1_7BE0B64AF0A0B070 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_322* _PropertyContext_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7BE0B64AF0A0B070__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_322* get_PropertyContext()
	{
		return ((::Class_0_16E4307DCC419505_322*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7BE0B64AF0A0B070_GET_PROPERTYCONTEXT_OFFSET))(this);
	}

	::System::Void set_PropertyContext(::Class_0_16E4307DCC419505_322* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_322*))((::PBYTE)hIl2Cpp + CLASS_1_7BE0B64AF0A0B070_SET_PROPERTYCONTEXT_OFFSET))(this, value);
	}
};
