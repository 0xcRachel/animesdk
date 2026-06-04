#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_55810A14D3A29D6D_1_METHOD_2_5D9CF83CFC617CF9_OFFSET UNITYSDK_OFFSET(0x16409770)
#define CLASS_2_55810A14D3A29D6D_1_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x16409680)
#define CLASS_2_55810A14D3A29D6D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x164096E0)
#define CLASS_2_55810A14D3A29D6D_1__ONBIND_OFFSET UNITYSDK_OFFSET(0x164095C0)
#define CLASS_2_55810A14D3A29D6D_1___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x16409710)

inline static constexpr unsigned int Class_2_55810A14D3A29D6D_1_TypeDefinitionIndex = 67497;

class Class_2_55810A14D3A29D6D_1 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::RPG::GameCore::GameEntity* Field_2_0; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55810A14D3A29D6D_1__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55810A14D3A29D6D_1__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_55810A14D3A29D6D_1_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55810A14D3A29D6D_1___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5D9CF83CFC617CF9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_55810A14D3A29D6D_1_METHOD_2_5D9CF83CFC617CF9_OFFSET))(this, a1);
	}
};
