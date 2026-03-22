#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_7AB88D713F5121B3_10__CCTOR_OFFSET UNITYSDK_OFFSET(0x15E27760)
#define CLASS_1_7AB88D713F5121B3_10__CTOR_OFFSET UNITYSDK_OFFSET(0x15E27750)

inline static constexpr unsigned int Class_1_7AB88D713F5121B3_10_TypeDefinitionIndex = 31117;

class Class_1_7AB88D713F5121B3_10 : public ::System::Object
{
public:
	static ::System::UInt32* StaticGet_Field_1_1()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7AB88D713F5121B3_10_TypeDefinitionIndex)->GetStaticField(0xD6D0);
	}
	static ::System::UInt32* StaticGet_Field_1_0()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7AB88D713F5121B3_10_TypeDefinitionIndex)->GetStaticField(0xD6D4);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7AB88D713F5121B3_10__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7AB88D713F5121B3_10__CCTOR_OFFSET))();
	}
};
