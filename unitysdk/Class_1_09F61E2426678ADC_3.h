#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class IdleLiveCLTriggerRow; }
namespace System { class Action; }

#define CLASS_1_09F61E2426678ADC_3_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF474D70)
#define CLASS_1_09F61E2426678ADC_3_METHOD_1_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0xF474DC0)
#define CLASS_1_09F61E2426678ADC_3_METHOD_1_510C3C62CAC002C3_OFFSET UNITYSDK_OFFSET(0xF474CE0)
#define CLASS_1_09F61E2426678ADC_3_METHOD_1_989E498ACD13A884_OFFSET UNITYSDK_OFFSET(0xF474C60)
#define CLASS_1_09F61E2426678ADC_3__CTOR_OFFSET UNITYSDK_OFFSET(0xF474BC0)

inline static constexpr unsigned int Class_1_09F61E2426678ADC_3_TypeDefinitionIndex = 69519;

class Class_1_09F61E2426678ADC_3 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::System::Boolean Field_1_2; // 0x18
	::System::UInt32 Field_1_1; // 0x1C

	::System::Void _ctor(::RPG::GameCore::IdleLiveCLTriggerRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveCLTriggerRow*))((::PBYTE)hIl2Cpp + CLASS_1_09F61E2426678ADC_3__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_989E498ACD13A884(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_09F61E2426678ADC_3_METHOD_1_989E498ACD13A884_OFFSET))(this, a1);
	}

	::System::Void Method_1_510C3C62CAC002C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09F61E2426678ADC_3_METHOD_1_510C3C62CAC002C3_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09F61E2426678ADC_3_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_04AF66402B9859B9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_09F61E2426678ADC_3_METHOD_1_04AF66402B9859B9_OFFSET))(this, a1);
	}
};
