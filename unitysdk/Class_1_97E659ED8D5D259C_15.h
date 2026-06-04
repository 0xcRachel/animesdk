#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_97E659ED8D5D259C_15_GET_DELTA_OFFSET UNITYSDK_OFFSET(0x14DA7DA0)
#define CLASS_1_97E659ED8D5D259C_15_GET_NUM_OFFSET UNITYSDK_OFFSET(0x14DA7D90)
#define CLASS_1_97E659ED8D5D259C_15_TOSTRING_OFFSET UNITYSDK_OFFSET(0x14DA7C80)
#define CLASS_1_97E659ED8D5D259C_15_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x14DA7D30)
#define CLASS_1_97E659ED8D5D259C_15__CTOR_OFFSET UNITYSDK_OFFSET(0x14DA7C70)
#define CLASS_1_97E659ED8D5D259C_15___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x14DA7DF0)

inline static constexpr unsigned int Class_1_97E659ED8D5D259C_15_TypeDefinitionIndex = 62703;

class Class_1_97E659ED8D5D259C_15 : public ::System::Object
{
public:
	::System::UInt32 _Num_k__BackingField; // 0x10

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_15__CTOR_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_15_TOSTRING_OFFSET))(this);
	}

	::System::Void TriggerAction()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_15_TRIGGERACTION_OFFSET))(this);
	}

	::System::UInt32 get_Num()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_15_GET_NUM_OFFSET))(this);
	}

	::System::Int32 get_Delta()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_15_GET_DELTA_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_15___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
