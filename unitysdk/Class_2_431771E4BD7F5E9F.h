#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_25654F9F148092E5.h"

namespace System { class String; }

#define CLASS_2_431771E4BD7F5E9F_METHOD_2_9133398E73B9D974_1_OFFSET UNITYSDK_OFFSET(0x15F00120)
#define CLASS_2_431771E4BD7F5E9F_METHOD_2_9133398E73B9D974_OFFSET UNITYSDK_OFFSET(0x15F00070)
#define CLASS_2_431771E4BD7F5E9F__CTOR_OFFSET UNITYSDK_OFFSET(0x15F00060)

inline static constexpr unsigned int Class_2_431771E4BD7F5E9F_TypeDefinitionIndex = 27919;

class Class_2_431771E4BD7F5E9F : public ::Class_1_25654F9F148092E5
{
public:
	::System::Single Field_2_0; // 0x20

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_431771E4BD7F5E9F__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_9133398E73B9D974(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_431771E4BD7F5E9F_METHOD_2_9133398E73B9D974_OFFSET))(this, a1);
	}

	::System::Void Method_2_9133398E73B9D974_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_431771E4BD7F5E9F_METHOD_2_9133398E73B9D974_1_OFFSET))(this, a1);
	}
};
