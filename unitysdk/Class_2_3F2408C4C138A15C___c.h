#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LevelMonsterInfo; }
namespace RPG::GameCore { class LevelNPCInfo; }
namespace RPG::GameCore { class LevelPropInfo; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_3F2408C4C138A15C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8A79140)
#define CLASS_2_3F2408C4C138A15C___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8A79180)
#define CLASS_2_3F2408C4C138A15C___C___GETINSTANCESFROMGROUP_B__5_0_OFFSET UNITYSDK_OFFSET(0x8A79190)
#define CLASS_2_3F2408C4C138A15C___C___GETINSTANCESFROMGROUP_B__5_1_OFFSET UNITYSDK_OFFSET(0x8A791B0)
#define CLASS_2_3F2408C4C138A15C___C___GETINSTANCESFROMGROUP_B__5_2_OFFSET UNITYSDK_OFFSET(0x8A791D0)

inline static constexpr unsigned int Class_2_3F2408C4C138A15C___c_TypeDefinitionIndex = 42360;

class Class_2_3F2408C4C138A15C___c : public ::System::Object
{
public:
	static ::Class_2_3F2408C4C138A15C___c** StaticGet___9()
	{
		return (::Class_2_3F2408C4C138A15C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3F2408C4C138A15C___c_TypeDefinitionIndex)->GetStaticField(0x437F0);
	}
	static ::System::Func_2<::RPG::GameCore::LevelMonsterInfo*, ::System::UInt32>** StaticGet___9__5_2()
	{
		return (::System::Func_2<::RPG::GameCore::LevelMonsterInfo*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3F2408C4C138A15C___c_TypeDefinitionIndex)->GetStaticField(0x437F8);
	}
	static ::System::Func_2<::RPG::GameCore::LevelNPCInfo*, ::System::UInt32>** StaticGet___9__5_1()
	{
		return (::System::Func_2<::RPG::GameCore::LevelNPCInfo*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3F2408C4C138A15C___c_TypeDefinitionIndex)->GetStaticField(0x43800);
	}
	static ::System::Func_2<::RPG::GameCore::LevelPropInfo*, ::System::UInt32>** StaticGet___9__5_0()
	{
		return (::System::Func_2<::RPG::GameCore::LevelPropInfo*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3F2408C4C138A15C___c_TypeDefinitionIndex)->GetStaticField(0x43808);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_3F2408C4C138A15C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3F2408C4C138A15C___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 __GetInstancesFromGroup_b__5_0(::RPG::GameCore::LevelPropInfo* p)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::LevelPropInfo*))((::PBYTE)hIl2Cpp + CLASS_2_3F2408C4C138A15C___C___GETINSTANCESFROMGROUP_B__5_0_OFFSET))(this, p);
	}

	::System::UInt32 __GetInstancesFromGroup_b__5_1(::RPG::GameCore::LevelNPCInfo* p)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::LevelNPCInfo*))((::PBYTE)hIl2Cpp + CLASS_2_3F2408C4C138A15C___C___GETINSTANCESFROMGROUP_B__5_1_OFFSET))(this, p);
	}

	::System::UInt32 __GetInstancesFromGroup_b__5_2(::RPG::GameCore::LevelMonsterInfo* p)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::LevelMonsterInfo*))((::PBYTE)hIl2Cpp + CLASS_2_3F2408C4C138A15C___C___GETINSTANCESFROMGROUP_B__5_2_OFFSET))(this, p);
	}
};
