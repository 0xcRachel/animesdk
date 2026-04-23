#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D96CF3F32F0BF24C.h"

namespace System { class String; }

#define CLASS_2_1A5AB51E19FE6F3B_1_METHOD_2_EC33713BA46856F7_OFFSET UNITYSDK_OFFSET(0xF7B8620)
#define CLASS_2_1A5AB51E19FE6F3B_1__CTOR_OFFSET UNITYSDK_OFFSET(0xF7B8780)

inline static constexpr unsigned int Class_2_1A5AB51E19FE6F3B_1_TypeDefinitionIndex = 70115;

class Class_2_1A5AB51E19FE6F3B_1 : public ::Class_1_D96CF3F32F0BF24C
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A5AB51E19FE6F3B_1__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_EC33713BA46856F7(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_1A5AB51E19FE6F3B_1_METHOD_2_EC33713BA46856F7_OFFSET))(this, a1, a2);
	}
};
