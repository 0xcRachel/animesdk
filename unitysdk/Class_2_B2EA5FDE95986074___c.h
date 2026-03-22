#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_B2EA5FDE95986074___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x104EE6A0)
#define CLASS_2_B2EA5FDE95986074___C__CTOR_OFFSET UNITYSDK_OFFSET(0x104EE6E0)
#define CLASS_2_B2EA5FDE95986074___C__SETFORMATIONFORMULTITARGETS_B__6_0_OFFSET UNITYSDK_OFFSET(0x104EE760)
#define CLASS_2_B2EA5FDE95986074___C__SETFORMATIONFORSINGLETARGET_B__5_0_OFFSET UNITYSDK_OFFSET(0x104EE6F0)

inline static constexpr unsigned int Class_2_B2EA5FDE95986074___c_TypeDefinitionIndex = 44300;

class Class_2_B2EA5FDE95986074___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::RPG::GameCore::GameEntity*>** StaticGet___9__5_0()
	{
		return (::System::Comparison_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B2EA5FDE95986074___c_TypeDefinitionIndex)->GetStaticField(0x43DB0);
	}
	static ::Class_2_B2EA5FDE95986074___c** StaticGet___9()
	{
		return (::Class_2_B2EA5FDE95986074___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B2EA5FDE95986074___c_TypeDefinitionIndex)->GetStaticField(0x43DB8);
	}
	static ::System::Comparison_1<::RPG::GameCore::GameEntity*>** StaticGet___9__6_0()
	{
		return (::System::Comparison_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B2EA5FDE95986074___c_TypeDefinitionIndex)->GetStaticField(0x43DC0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_B2EA5FDE95986074___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B2EA5FDE95986074___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _SetFormationForSingleTarget_b__5_0(::RPG::GameCore::GameEntity* x, ::RPG::GameCore::GameEntity* y)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_B2EA5FDE95986074___C__SETFORMATIONFORSINGLETARGET_B__5_0_OFFSET))(this, x, y);
	}

	::System::Int32 _SetFormationForMultiTargets_b__6_0(::RPG::GameCore::GameEntity* x, ::RPG::GameCore::GameEntity* y)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_B2EA5FDE95986074___C__SETFORMATIONFORMULTITARGETS_B__6_0_OFFSET))(this, x, y);
	}
};
