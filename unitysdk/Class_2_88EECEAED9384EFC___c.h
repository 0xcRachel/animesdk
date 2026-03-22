#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_88EECEAED9384EFC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11104240)
#define CLASS_2_88EECEAED9384EFC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11104280)
#define CLASS_2_88EECEAED9384EFC___C___REFRESHVIEW_B__12_1_OFFSET UNITYSDK_OFFSET(0x11104290)

inline static constexpr unsigned int Class_2_88EECEAED9384EFC___c_TypeDefinitionIndex = 57615;

class Class_2_88EECEAED9384EFC___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::RPG::GameCore::TurnBasedModifierInstance*>** StaticGet___9__12_1()
	{
		return (::System::Comparison_1<::RPG::GameCore::TurnBasedModifierInstance*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_88EECEAED9384EFC___c_TypeDefinitionIndex)->GetStaticField(0x42550);
	}
	static ::Class_2_88EECEAED9384EFC___c** StaticGet___9()
	{
		return (::Class_2_88EECEAED9384EFC___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_88EECEAED9384EFC___c_TypeDefinitionIndex)->GetStaticField(0x42558);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_88EECEAED9384EFC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_88EECEAED9384EFC___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __RefreshView_b__12_1(::RPG::GameCore::TurnBasedModifierInstance* a, ::RPG::GameCore::TurnBasedModifierInstance* b)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_88EECEAED9384EFC___C___REFRESHVIEW_B__12_1_OFFSET))(this, a, b);
	}
};
