#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_97E659ED8D5D259C_13_GET_DELTA_OFFSET UNITYSDK_OFFSET(0x15894490)
#define CLASS_1_97E659ED8D5D259C_13_GET_NUM_OFFSET UNITYSDK_OFFSET(0x15894480)
#define CLASS_1_97E659ED8D5D259C_13_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15894370)
#define CLASS_1_97E659ED8D5D259C_13_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x15894420)
#define CLASS_1_97E659ED8D5D259C_13__CTOR_OFFSET UNITYSDK_OFFSET(0x15894360)
#define CLASS_1_97E659ED8D5D259C_13___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x158944A0)

inline static constexpr unsigned int Class_1_97E659ED8D5D259C_13_TypeDefinitionIndex = 62701;

class Class_1_97E659ED8D5D259C_13 : public ::System::Object
{
public:
	::System::UInt32 _Num_k__BackingField; // 0x10

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_13__CTOR_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_13_TOSTRING_OFFSET))(this);
	}

	::System::Void TriggerAction()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_13_TRIGGERACTION_OFFSET))(this);
	}

	::System::UInt32 get_Num()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_13_GET_NUM_OFFSET))(this);
	}

	::System::Int32 get_Delta()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_13_GET_DELTA_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_13___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
