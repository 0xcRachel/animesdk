#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_F31A7EC67A3AEEF7.h"
#include "unitysdk/System/Object.h"

class Class_1_9E4EA1938DE3A3E4;

#define CLASS_1_A8D97A3365AA4C94_CLEAR_OFFSET UNITYSDK_OFFSET(0x16300880)
#define CLASS_1_A8D97A3365AA4C94__CTOR_OFFSET UNITYSDK_OFFSET(0x16300990)

inline static constexpr unsigned int Class_1_A8D97A3365AA4C94_TypeDefinitionIndex = 32547;

class Class_1_A8D97A3365AA4C94 : public ::System::Object
{
public:
	::Class_1_9E4EA1938DE3A3E4* Field_1_1; // 0x10
	::Struct_2_F31A7EC67A3AEEF7 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8D97A3365AA4C94__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8D97A3365AA4C94_CLEAR_OFFSET))(this);
	}
};
