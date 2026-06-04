#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_E3144EBBA3CB68CA_CLASS_1_2C6DF30B62E4D0CA_EQUALS_OFFSET UNITYSDK_OFFSET(0x14C0E1F0)
#define CLASS_1_E3144EBBA3CB68CA_CLASS_1_2C6DF30B62E4D0CA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x14C0E2E0)
#define CLASS_1_E3144EBBA3CB68CA_CLASS_1_2C6DF30B62E4D0CA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x14C0E420)
#define CLASS_1_E3144EBBA3CB68CA_CLASS_1_2C6DF30B62E4D0CA__CTOR_OFFSET UNITYSDK_OFFSET(0x14C01E30)
#define CLASS_1_E3144EBBA3CB68CA_CLASS_1_2C6DF30B62E4D0CA___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0x14C0E590)
#define CLASS_1_E3144EBBA3CB68CA_CLASS_1_2C6DF30B62E4D0CA___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x14C0E5A0)
#define CLASS_1_E3144EBBA3CB68CA_CLASS_1_2C6DF30B62E4D0CA___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x14C0E5B0)

inline static constexpr unsigned int Class_1_E3144EBBA3CB68CA_Class_1_2C6DF30B62E4D0CA_TypeDefinitionIndex = 46306;

class Class_1_E3144EBBA3CB68CA_Class_1_2C6DF30B62E4D0CA : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::RPG::CustomRP::CustomLightQualityFilter Field_1_2; // 0x20
	::System::Int32 Field_1_3; // 0x24
	::System::Int32 Field_1_4; // 0x28

	::System::Void _ctor(::System::Int32 a1, ::System::String* a2, ::System::String* a3, ::RPG::CustomRP::CustomLightQualityFilter a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::RPG::CustomRP::CustomLightQualityFilter, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_CLASS_1_2C6DF30B62E4D0CA__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_CLASS_1_2C6DF30B62E4D0CA_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_CLASS_1_2C6DF30B62E4D0CA_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_CLASS_1_2C6DF30B62E4D0CA_TOSTRING_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy_Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_CLASS_1_2C6DF30B62E4D0CA___IFIXBASEPROXY_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 __iFixBaseProxy_GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_CLASS_1_2C6DF30B62E4D0CA___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3144EBBA3CB68CA_CLASS_1_2C6DF30B62E4D0CA___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
