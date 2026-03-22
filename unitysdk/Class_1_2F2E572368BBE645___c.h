#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_2F2E572368BBE645___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8549C50)
#define CLASS_1_2F2E572368BBE645___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8549C80)
#define CLASS_1_2F2E572368BBE645___C___CCTOR_B__35_0_OFFSET UNITYSDK_OFFSET(0x8549C90)

inline static constexpr unsigned int Class_1_2F2E572368BBE645___c_TypeDefinitionIndex = 47903;

class Class_1_2F2E572368BBE645___c : public ::System::Object
{
public:
	static ::Class_1_2F2E572368BBE645___c** StaticGet___9()
	{
		return (::Class_1_2F2E572368BBE645___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F2E572368BBE645___c_TypeDefinitionIndex)->GetStaticField(0x46530);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F2E572368BBE645___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F2E572368BBE645___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __cctor_b__35_0(::RPG::GameCore::GameEntity* entity1, ::RPG::GameCore::GameEntity* entity2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_2F2E572368BBE645___C___CCTOR_B__35_0_OFFSET))(this, entity1, entity2);
	}
};
