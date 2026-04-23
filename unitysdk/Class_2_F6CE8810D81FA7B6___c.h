#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGridMember; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_F6CE8810D81FA7B6___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xDB83350)
#define CLASS_2_F6CE8810D81FA7B6___C__CTOR_OFFSET UNITYSDK_OFFSET(0xDB83390)
#define CLASS_2_F6CE8810D81FA7B6___C___ISROLEAFFECTEDBYTRAIT_B__4_0_OFFSET UNITYSDK_OFFSET(0xDB833A0)

inline static constexpr unsigned int Class_2_F6CE8810D81FA7B6___c_TypeDefinitionIndex = 59966;

class Class_2_F6CE8810D81FA7B6___c : public ::System::Object
{
public:
	static ::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::Boolean>** StaticGet___9__4_0()
	{
		return (::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F6CE8810D81FA7B6___c_TypeDefinitionIndex)->GetStaticField(0xF4E0);
	}
	static ::Class_2_F6CE8810D81FA7B6___c** StaticGet___9()
	{
		return (::Class_2_F6CE8810D81FA7B6___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F6CE8810D81FA7B6___c_TypeDefinitionIndex)->GetStaticField(0xF4E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_F6CE8810D81FA7B6___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F6CE8810D81FA7B6___C__CTOR_OFFSET))(this);
	}

	::System::Boolean __IsRoleAffectedByTrait_b__4_0(::RPG::Client::GridFightGridMember* member)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridMember*))((::PBYTE)hIl2Cpp + CLASS_2_F6CE8810D81FA7B6___C___ISROLEAFFECTEDBYTRAIT_B__4_0_OFFSET))(this, member);
	}
};
