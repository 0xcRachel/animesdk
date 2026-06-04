#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_F5FBDA629A1B439F.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_31371D9B7990D70C_CLEAR_OFFSET UNITYSDK_OFFSET(0x12B24710)
#define CLASS_1_31371D9B7990D70C_METHOD_1_5A2A4798F97B08F5_OFFSET UNITYSDK_OFFSET(0x12B24750)
#define CLASS_1_31371D9B7990D70C__CTOR_OFFSET UNITYSDK_OFFSET(0x12B249A0)

inline static constexpr unsigned int Class_1_31371D9B7990D70C_TypeDefinitionIndex = 68540;

class Class_1_31371D9B7990D70C : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_31371D9B7990D70C__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_31371D9B7990D70C_CLEAR_OFFSET))(this);
	}

	::System::String* Method_1_5A2A4798F97B08F5(::System::Object* a1, ::Struct_2_F5FBDA629A1B439F a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::Object*, ::Struct_2_F5FBDA629A1B439F))((::PBYTE)hIl2Cpp + CLASS_1_31371D9B7990D70C_METHOD_1_5A2A4798F97B08F5_OFFSET))(this, a1, a2);
	}
};
