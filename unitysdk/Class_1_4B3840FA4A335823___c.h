#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MapPropConditionConfigRow; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_4B3840FA4A335823___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10C7ED10)
#define CLASS_1_4B3840FA4A335823___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10C7ED40)
#define CLASS_1_4B3840FA4A335823___C__GETSORTEDMAPPROPCONDITION_B__41_0_OFFSET UNITYSDK_OFFSET(0x10C7ED50)

inline static constexpr unsigned int Class_1_4B3840FA4A335823___c_TypeDefinitionIndex = 50430;

class Class_1_4B3840FA4A335823___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::RPG::GameCore::MapPropConditionConfigRow*>** StaticGet___9__41_0()
	{
		return (::System::Comparison_1<::RPG::GameCore::MapPropConditionConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4B3840FA4A335823___c_TypeDefinitionIndex)->GetStaticField(0x44120);
	}
	static ::Class_1_4B3840FA4A335823___c** StaticGet___9()
	{
		return (::Class_1_4B3840FA4A335823___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4B3840FA4A335823___c_TypeDefinitionIndex)->GetStaticField(0x44128);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4B3840FA4A335823___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B3840FA4A335823___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _GetSortedMapPropCondition_b__41_0(::RPG::GameCore::MapPropConditionConfigRow* lhs, ::RPG::GameCore::MapPropConditionConfigRow* rhs)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::MapPropConditionConfigRow*, ::RPG::GameCore::MapPropConditionConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_4B3840FA4A335823___C__GETSORTEDMAPPROPCONDITION_B__41_0_OFFSET))(this, lhs, rhs);
	}
};
