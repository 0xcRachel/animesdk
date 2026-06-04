#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_273AB9C9690DD47B_METHOD_2_5D9CF83CFC617CF9_OFFSET UNITYSDK_OFFSET(0x15453D70)
#define CLASS_2_273AB9C9690DD47B_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x15453B70)
#define CLASS_2_273AB9C9690DD47B_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x15453CA0)
#define CLASS_2_273AB9C9690DD47B_ONRETURN_OFFSET UNITYSDK_OFFSET(0x15453CF0)
#define CLASS_2_273AB9C9690DD47B__CTOR_OFFSET UNITYSDK_OFFSET(0x15453D40)
#define CLASS_2_273AB9C9690DD47B__ONBIND_OFFSET UNITYSDK_OFFSET(0x15453BD0)
#define CLASS_2_273AB9C9690DD47B___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x15453DD0)

inline static constexpr unsigned int Class_2_273AB9C9690DD47B_TypeDefinitionIndex = 66872;

class Class_2_273AB9C9690DD47B : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::RPG::GameCore::GameEntity* Field_2_0; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_273AB9C9690DD47B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_273AB9C9690DD47B_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_273AB9C9690DD47B__ONBIND_OFFSET))(this);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_273AB9C9690DD47B_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_273AB9C9690DD47B_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_2_5D9CF83CFC617CF9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_273AB9C9690DD47B_METHOD_2_5D9CF83CFC617CF9_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_273AB9C9690DD47B___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
