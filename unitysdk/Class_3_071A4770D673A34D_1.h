#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_071A4770D673A34D_1_METHOD_3_10AA927B78C26F29_OFFSET UNITYSDK_OFFSET(0x16AA5560)
#define CLASS_3_071A4770D673A34D_1_METHOD_3_68563EFA15298996_OFFSET UNITYSDK_OFFSET(0x16AA55E0)
#define CLASS_3_071A4770D673A34D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16AA55B0)

inline static constexpr unsigned int Class_3_071A4770D673A34D_1_TypeDefinitionIndex = 20351;

class Class_3_071A4770D673A34D_1 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_071A4770D673A34D_1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_10AA927B78C26F29(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_071A4770D673A34D_1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_071A4770D673A34D_1*&))((::PBYTE)hIl2Cpp + CLASS_3_071A4770D673A34D_1_METHOD_3_10AA927B78C26F29_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_68563EFA15298996(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_071A4770D673A34D_1* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_071A4770D673A34D_1*))((::PBYTE)hIl2Cpp + CLASS_3_071A4770D673A34D_1_METHOD_3_68563EFA15298996_OFFSET))(a1, a2);
	}
};
