#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_251;
class Class_0_16E4307DCC419505_252;
class Class_1_EF20F44E47239AF3;
namespace System { class String; }
namespace System { class Type; }

#define CLASS_1_60B5E5A0CB5606E4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17B75C60)
#define CLASS_1_60B5E5A0CB5606E4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17B75BF0)
#define CLASS_1_60B5E5A0CB5606E4__CTOR_OFFSET UNITYSDK_OFFSET(0x17B75BC0)
#define CLASS_1_60B5E5A0CB5606E4___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17B760E0)

inline static constexpr unsigned int Class_1_60B5E5A0CB5606E4_TypeDefinitionIndex = 33027;

class Class_1_60B5E5A0CB5606E4 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_251* Field_1_4; // 0x10
	::Class_0_16E4307DCC419505_252* Field_1_3; // 0x18
	::System::Type* Field_1_1; // 0x20
	::Class_1_EF20F44E47239AF3* Field_1_2; // 0x28
	::System::Guid Field_1_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60B5E5A0CB5606E4__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60B5E5A0CB5606E4_TOSTRING_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60B5E5A0CB5606E4_DISPOSE_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_60B5E5A0CB5606E4___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
