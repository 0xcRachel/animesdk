#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"

class Class_2_027C0429C2F768FD;
namespace System { class String; }

#define CLASS_2_DDF73C5C044CDD34_METHOD_2_BEBC8F4773DC82AA_OFFSET UNITYSDK_OFFSET(0xF450B60)
#define CLASS_2_DDF73C5C044CDD34_METHOD_2_C0424C3F296FC41E_OFFSET UNITYSDK_OFFSET(0xF450AB0)
#define CLASS_2_DDF73C5C044CDD34__CTOR_OFFSET UNITYSDK_OFFSET(0xF450A40)
#define CLASS_2_DDF73C5C044CDD34__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xF450BC0)
#define CLASS_2_DDF73C5C044CDD34___IFIXBASEPROXY__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xF450C50)

inline static constexpr unsigned int Class_2_DDF73C5C044CDD34_TypeDefinitionIndex = 67023;

class Class_2_DDF73C5C044CDD34 : public ::RPG::Client::UIController
{
public:
	::System::String* Field_2_0; // 0x180

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DDF73C5C044CDD34__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_C0424C3F296FC41E(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_DDF73C5C044CDD34_METHOD_2_C0424C3F296FC41E_OFFSET))(this, a1);
	}

	::System::Void _SetupView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DDF73C5C044CDD34__SETUPVIEW_OFFSET))(this);
	}

	::Class_2_027C0429C2F768FD* Method_2_BEBC8F4773DC82AA()
	{
		return ((::Class_2_027C0429C2F768FD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DDF73C5C044CDD34_METHOD_2_BEBC8F4773DC82AA_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__SetupView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DDF73C5C044CDD34___IFIXBASEPROXY__SETUPVIEW_OFFSET))(this);
	}
};
