#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TextmapStatic_TextCompileContext; }
namespace System { class String; }

#define CLASS_1_D2F4DCDB1379C6E8_2_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x10CCEB10)
#define CLASS_1_D2F4DCDB1379C6E8_2__CTOR_OFFSET UNITYSDK_OFFSET(0x10CCEB20)

inline static constexpr unsigned int Class_1_D2F4DCDB1379C6E8_2_TypeDefinitionIndex = 58138;

class Class_1_D2F4DCDB1379C6E8_2 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D2F4DCDB1379C6E8_2__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D2F4DCDB1379C6E8_2_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}
};
