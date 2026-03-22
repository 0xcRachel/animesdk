#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_89;

#define CLASS_1_47EE63CB5C4DC8FC_8_CLEAR_OFFSET UNITYSDK_OFFSET(0x1619EA00)
#define CLASS_1_47EE63CB5C4DC8FC_8__CTOR_OFFSET UNITYSDK_OFFSET(0x1619EA80)

inline static constexpr unsigned int Class_1_47EE63CB5C4DC8FC_8_TypeDefinitionIndex = 32740;

class Class_1_47EE63CB5C4DC8FC_8 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_89* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47EE63CB5C4DC8FC_8__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47EE63CB5C4DC8FC_8_CLEAR_OFFSET))(this);
	}
};
