#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_4860135DFDF560DA.h"

#define CLASS_3_18AF1B0621DC22B7_CLEAR_OFFSET UNITYSDK_OFFSET(0x162CE170)
#define CLASS_3_18AF1B0621DC22B7__CTOR_OFFSET UNITYSDK_OFFSET(0x162CE1D0)
#define CLASS_3_18AF1B0621DC22B7___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x162CE1E0)

inline static constexpr unsigned int Class_3_18AF1B0621DC22B7_TypeDefinitionIndex = 32624;

class Class_3_18AF1B0621DC22B7 : public ::Class_2_4860135DFDF560DA
{
public:
	::System::Int32 Field_3_3; // 0x400
	::System::Boolean Field_3_2; // 0x404
	::System::Boolean Field_3_0; // 0x405
	::System::Boolean Field_3_1; // 0x406

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_18AF1B0621DC22B7__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_18AF1B0621DC22B7_CLEAR_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_18AF1B0621DC22B7___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}
};
