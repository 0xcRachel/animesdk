#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskContext.h"

class Class_0_16E4307DCC419505_304;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_671569319F3DFF18_CLONE_OFFSET UNITYSDK_OFFSET(0x85F0030)
#define CLASS_2_671569319F3DFF18_GET_OWNERABILITYINSTANCE_OFFSET UNITYSDK_OFFSET(0x85F0150)
#define CLASS_2_671569319F3DFF18_GET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x85F0090)
#define CLASS_2_671569319F3DFF18_GET_PARENTCONTEXT_OFFSET UNITYSDK_OFFSET(0x85F0210)
#define CLASS_2_671569319F3DFF18_SET_OWNERABILITYINSTANCE_OFFSET UNITYSDK_OFFSET(0x85F0180)
#define CLASS_2_671569319F3DFF18_SET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x85F00C0)
#define CLASS_2_671569319F3DFF18_SET_PARENTCONTEXT_OFFSET UNITYSDK_OFFSET(0x85F0220)
#define CLASS_2_671569319F3DFF18__CTOR_OFFSET UNITYSDK_OFFSET(0x85EFFA0)
#define CLASS_2_671569319F3DFF18__GETSELFINSTANCE_OFFSET UNITYSDK_OFFSET(0x85F0230)
#define CLASS_2_671569319F3DFF18___IFIXBASEPROXY_CLONE_OFFSET UNITYSDK_OFFSET(0x85F02B0)
#define CLASS_2_671569319F3DFF18___IFIXBASEPROXY_SET_OWNERABILITYINSTANCE_OFFSET UNITYSDK_OFFSET(0x85F0320)
#define CLASS_2_671569319F3DFF18___IFIXBASEPROXY_SET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x85F02C0)
#define CLASS_2_671569319F3DFF18___IFIXBASEPROXY__GETSELFINSTANCE_OFFSET UNITYSDK_OFFSET(0x85F0330)

inline static constexpr unsigned int Class_2_671569319F3DFF18_TypeDefinitionIndex = 42789;

class Class_2_671569319F3DFF18 : public ::RPG::GameCore::TaskContext
{
public:
	::RPG::GameCore::TaskContext* _ParentContext_k__BackingField; // 0x98

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_2_671569319F3DFF18__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::TaskContext* Clone()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_671569319F3DFF18_CLONE_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* get_OwnerEntity()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_671569319F3DFF18_GET_OWNERENTITY_OFFSET))(this);
	}

	::System::Void set_OwnerEntity(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_671569319F3DFF18_SET_OWNERENTITY_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_304* get_OwnerAbilityInstance()
	{
		return ((::Class_0_16E4307DCC419505_304*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_671569319F3DFF18_GET_OWNERABILITYINSTANCE_OFFSET))(this);
	}

	::System::Void set_OwnerAbilityInstance(::Class_0_16E4307DCC419505_304* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_304*))((::PBYTE)hIl2Cpp + CLASS_2_671569319F3DFF18_SET_OWNERABILITYINSTANCE_OFFSET))(this, a1);
	}

	::RPG::GameCore::TaskContext* get_ParentContext()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_671569319F3DFF18_GET_PARENTCONTEXT_OFFSET))(this);
	}

	::System::Void set_ParentContext(::RPG::GameCore::TaskContext* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_2_671569319F3DFF18_SET_PARENTCONTEXT_OFFSET))(this, value);
	}

	::RPG::GameCore::TaskContext* _GetSelfInstance()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_671569319F3DFF18__GETSELFINSTANCE_OFFSET))(this);
	}

	::RPG::GameCore::TaskContext* __iFixBaseProxy_Clone()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_671569319F3DFF18___IFIXBASEPROXY_CLONE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_set_OwnerEntity(::RPG::GameCore::GameEntity* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_671569319F3DFF18___IFIXBASEPROXY_SET_OWNERENTITY_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_set_OwnerAbilityInstance(::Class_0_16E4307DCC419505_304* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_304*))((::PBYTE)hIl2Cpp + CLASS_2_671569319F3DFF18___IFIXBASEPROXY_SET_OWNERABILITYINSTANCE_OFFSET))(this, P0);
	}

	::RPG::GameCore::TaskContext* __iFixBaseProxy__GetSelfInstance()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_671569319F3DFF18___IFIXBASEPROXY__GETSELFINSTANCE_OFFSET))(this);
	}
};
