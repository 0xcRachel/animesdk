#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T> class Predicate_1; }

#define CLASS_3_19C7DE131D2AAEED___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD1F8F00)
#define CLASS_3_19C7DE131D2AAEED___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD1F8F40)
#define CLASS_3_19C7DE131D2AAEED___C__EVALUATE_B__1_0_OFFSET UNITYSDK_OFFSET(0xD1F8F50)

inline static constexpr unsigned int Class_3_19C7DE131D2AAEED___c_TypeDefinitionIndex = 46715;

class Class_3_19C7DE131D2AAEED___c : public ::System::Object
{
public:
	static ::Class_3_19C7DE131D2AAEED___c** StaticGet___9()
	{
		return (::Class_3_19C7DE131D2AAEED___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_19C7DE131D2AAEED___c_TypeDefinitionIndex)->GetStaticField(0x23030);
	}
	static ::System::Predicate_1<::RPG::GameCore::GameEntity*>** StaticGet___9__1_0()
	{
		return (::System::Predicate_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_19C7DE131D2AAEED___c_TypeDefinitionIndex)->GetStaticField(0x23038);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_19C7DE131D2AAEED___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_19C7DE131D2AAEED___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _Evaluate_b__1_0(::RPG::GameCore::GameEntity* pEntity)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_19C7DE131D2AAEED___C__EVALUATE_B__1_0_OFFSET))(this, pEntity);
	}
};
