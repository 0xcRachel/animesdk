#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ControlType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TextmapStatic_TextCompileContext; }
namespace System { class String; }

#define CLASS_1_D2F4DCDB1379C6E8_1_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0xA471090)
#define CLASS_1_D2F4DCDB1379C6E8_1_METHOD_1_C351BAA077A16D49_OFFSET UNITYSDK_OFFSET(0xA4710A0)
#define CLASS_1_D2F4DCDB1379C6E8_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA471290)

inline static constexpr unsigned int Class_1_D2F4DCDB1379C6E8_1_TypeDefinitionIndex = 58133;

class Class_1_D2F4DCDB1379C6E8_1 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::String* Field_1_2; // 0x0
	// static const ::System::String* Field_1_3; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D2F4DCDB1379C6E8_1__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D2F4DCDB1379C6E8_1_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::RPG::Client::ControlType Method_1_C351BAA077A16D49()
	{
		return ((::RPG::Client::ControlType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D2F4DCDB1379C6E8_1_METHOD_1_C351BAA077A16D49_OFFSET))(this);
	}
};
