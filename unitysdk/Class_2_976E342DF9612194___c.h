#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_976E342DF9612194___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD4C1C90)
#define CLASS_2_976E342DF9612194___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD4C1CD0)
#define CLASS_2_976E342DF9612194___C___SETUPAREA2TEAM_B__9_0_OFFSET UNITYSDK_OFFSET(0xD4C1CE0)

inline static constexpr unsigned int Class_2_976E342DF9612194___c_TypeDefinitionIndex = 51831;

class Class_2_976E342DF9612194___c : public ::System::Object
{
public:
	static ::Class_2_976E342DF9612194___c** StaticGet___9()
	{
		return (::Class_2_976E342DF9612194___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_976E342DF9612194___c_TypeDefinitionIndex)->GetStaticField(0x6ADC0);
	}
	static ::System::Action_1<::RPG::GameCore::GameEntity*>** StaticGet___9__9_0()
	{
		return (::System::Action_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_976E342DF9612194___c_TypeDefinitionIndex)->GetStaticField(0x6ADC8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_976E342DF9612194___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_976E342DF9612194___C__CTOR_OFFSET))(this);
	}

	::System::Void __SetupArea2Team_b__9_0(::RPG::GameCore::GameEntity* entity)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_976E342DF9612194___C___SETUPAREA2TEAM_B__9_0_OFFSET))(this, entity);
	}
};
