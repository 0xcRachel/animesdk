#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class JsonEnum; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_9CB24331611AE644___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8A13150)
#define CLASS_1_9CB24331611AE644___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8A13180)
#define CLASS_1_9CB24331611AE644___C___BUILD_B__13_0_OFFSET UNITYSDK_OFFSET(0x8A13190)
#define CLASS_1_9CB24331611AE644___C___CCTOR_B__41_0_OFFSET UNITYSDK_OFFSET(0x8A131C0)
#define CLASS_1_9CB24331611AE644___C___CCTOR_B__41_1_OFFSET UNITYSDK_OFFSET(0x8A13220)

inline static constexpr unsigned int Class_1_9CB24331611AE644___c_TypeDefinitionIndex = 45052;

class Class_1_9CB24331611AE644___c : public ::System::Object
{
public:
	static ::Class_1_9CB24331611AE644___c** StaticGet___9()
	{
		return (::Class_1_9CB24331611AE644___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CB24331611AE644___c_TypeDefinitionIndex)->GetStaticField(0x3D010);
	}
	static ::System::Func_2<::RPG::GameCore::JsonEnum*, ::System::String*>** StaticGet___9__13_0()
	{
		return (::System::Func_2<::RPG::GameCore::JsonEnum*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CB24331611AE644___c_TypeDefinitionIndex)->GetStaticField(0x3D018);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644___C__CTOR_OFFSET))(this);
	}

	::System::String* __Build_b__13_0(::RPG::GameCore::JsonEnum* x)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644___C___BUILD_B__13_0_OFFSET))(this, x);
	}

	::System::String* __cctor_b__41_0(::RPG::GameCore::AbilityProperty x)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AbilityProperty))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644___C___CCTOR_B__41_0_OFFSET))(this, x);
	}

	::System::String* __cctor_b__41_1(::RPG::GameCore::AbilityProperty x)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AbilityProperty))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644___C___CCTOR_B__41_1_OFFSET))(this, x);
	}
};
