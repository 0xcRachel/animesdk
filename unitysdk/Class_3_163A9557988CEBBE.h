#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_3249864BEDFDE88B.h"
#include "unitysdk/Struct_2_EB13E12069AE9879.h"

class Class_3_5B3989A017DD01E5;
class Class_4_0FE2F2FA8B5CD496;

#define CLASS_3_163A9557988CEBBE__CTOR_OFFSET UNITYSDK_OFFSET(0x10C74F60)

inline static constexpr unsigned int Class_3_163A9557988CEBBE_TypeDefinitionIndex = 47812;

class Class_3_163A9557988CEBBE : public ::Class_2_3249864BEDFDE88B
{
public:
	::Class_3_5B3989A017DD01E5* Field_3_2; // 0x30
	::Class_4_0FE2F2FA8B5CD496* Field_3_0; // 0x38
	::Struct_2_EB13E12069AE9879 Field_3_1; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_163A9557988CEBBE__CTOR_OFFSET))(this);
	}
};
