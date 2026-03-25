#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_56B074C4E46329EE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8A80C40)
#define CLASS_2_56B074C4E46329EE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8A80C70)
#define CLASS_2_56B074C4E46329EE___C___CTOR_B__39_0_OFFSET UNITYSDK_OFFSET(0x8A80C80)

inline static constexpr unsigned int Class_2_56B074C4E46329EE___c_TypeDefinitionIndex = 58738;

class Class_2_56B074C4E46329EE___c : public ::System::Object
{
public:
	static ::System::Func_2<::RPG::GameCore::GameEntity*, ::System::Boolean>** StaticGet___9__39_0()
	{
		return (::System::Func_2<::RPG::GameCore::GameEntity*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_56B074C4E46329EE___c_TypeDefinitionIndex)->GetStaticField(0x43B20);
	}
	static ::Class_2_56B074C4E46329EE___c** StaticGet___9()
	{
		return (::Class_2_56B074C4E46329EE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_56B074C4E46329EE___c_TypeDefinitionIndex)->GetStaticField(0x43B28);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_56B074C4E46329EE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56B074C4E46329EE___C__CTOR_OFFSET))(this);
	}

	::System::Boolean __ctor_b__39_0(::RPG::GameCore::GameEntity* entity)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_56B074C4E46329EE___C___CTOR_B__39_0_OFFSET))(this, entity);
	}
};
