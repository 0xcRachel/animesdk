#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_97E659ED8D5D259C_20_GET_ID_OFFSET UNITYSDK_OFFSET(0x14C10250)
#define CLASS_1_97E659ED8D5D259C_20_SET_ID_OFFSET UNITYSDK_OFFSET(0x14C10260)
#define CLASS_1_97E659ED8D5D259C_20__CTOR_OFFSET UNITYSDK_OFFSET(0x14C10270)

inline static constexpr unsigned int Class_1_97E659ED8D5D259C_20_TypeDefinitionIndex = 74099;

class Class_1_97E659ED8D5D259C_20 : public ::System::Object
{
public:
	::System::UInt32 _ID_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_20__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_20_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_20_SET_ID_OFFSET))(this, a1);
	}
};
