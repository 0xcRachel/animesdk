#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1F09213678A820A2;

#define CLASS_1_109729CD11AC6CD9_COMPARETO_OFFSET UNITYSDK_OFFSET(0x875A8D0)
#define CLASS_1_109729CD11AC6CD9_METHOD_1_FAB076F9C2EDE3BE_OFFSET UNITYSDK_OFFSET(0x875A860)
#define CLASS_1_109729CD11AC6CD9__CTOR_OFFSET UNITYSDK_OFFSET(0x875A8C0)

inline static constexpr unsigned int Class_1_109729CD11AC6CD9_TypeDefinitionIndex = 57430;

class Class_1_109729CD11AC6CD9 : public ::System::Object
{
public:
	::Class_1_1F09213678A820A2* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_109729CD11AC6CD9__CTOR_OFFSET))(this);
	}

	static ::Class_1_109729CD11AC6CD9* Method_1_FAB076F9C2EDE3BE(::Class_1_1F09213678A820A2* a1)
	{
		return ((::Class_1_109729CD11AC6CD9*(*)(::Class_1_1F09213678A820A2*))((::PBYTE)hIl2Cpp + CLASS_1_109729CD11AC6CD9_METHOD_1_FAB076F9C2EDE3BE_OFFSET))(a1);
	}

	::System::Int32 CompareTo(::Class_1_109729CD11AC6CD9* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_109729CD11AC6CD9*))((::PBYTE)hIl2Cpp + CLASS_1_109729CD11AC6CD9_COMPARETO_OFFSET))(this, a1);
	}
};
