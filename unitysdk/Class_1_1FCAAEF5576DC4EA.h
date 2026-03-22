#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_BCCE950C2E8DF1F0;
namespace System { class String; }

#define CLASS_1_1FCAAEF5576DC4EA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8D3AF80)
#define CLASS_1_1FCAAEF5576DC4EA__CTOR_OFFSET UNITYSDK_OFFSET(0x8D3AFF0)

inline static constexpr unsigned int Class_1_1FCAAEF5576DC4EA_TypeDefinitionIndex = 43719;

class Class_1_1FCAAEF5576DC4EA : public ::System::Object
{
public:
	::Class_3_BCCE950C2E8DF1F0* Field_1_2; // 0x10
	::System::String* Field_1_0; // 0x18
	::System::Int32 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1FCAAEF5576DC4EA__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1FCAAEF5576DC4EA_DISPOSE_OFFSET))(this);
	}
};
