#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_866;
namespace System { class String; }

#define CLASS_1_7B24F8570CB761BD_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x148CFCD0)
#define CLASS_1_7B24F8570CB761BD_METHOD_1_CDC061D2DEADD8BB_OFFSET UNITYSDK_OFFSET(0x148CFCE0)
#define CLASS_1_7B24F8570CB761BD__CCTOR_OFFSET UNITYSDK_OFFSET(0x148CFE60)
#define CLASS_1_7B24F8570CB761BD__CTOR_OFFSET UNITYSDK_OFFSET(0x148CFCC0)

inline static constexpr unsigned int Class_1_7B24F8570CB761BD_TypeDefinitionIndex = 73705;

class Class_1_7B24F8570CB761BD : public ::System::Object
{
public:
	static ::Class_1_7B24F8570CB761BD** StaticGet_Field_1_0()
	{
		return (::Class_1_7B24F8570CB761BD**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7B24F8570CB761BD_TypeDefinitionIndex)->GetStaticField(0x27C50);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B24F8570CB761BD__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7B24F8570CB761BD__CCTOR_OFFSET))();
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B24F8570CB761BD_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Object* Method_1_CDC061D2DEADD8BB(::System::String* a1, ::Class_0_16E4307DCC419505_866* a2)
	{
		return ((::System::Object*(*)(::PVOID, ::System::String*, ::Class_0_16E4307DCC419505_866*))((::PBYTE)hIl2Cpp + CLASS_1_7B24F8570CB761BD_METHOD_1_CDC061D2DEADD8BB_OFFSET))(this, a1, a2);
	}
};
