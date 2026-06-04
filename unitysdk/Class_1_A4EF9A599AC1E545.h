#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DiceCombat/DiceCombatUIType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class LuaUIGameFlowContext; }
namespace RPG::Client::DiceCombat { class DiceCombatGameFlow; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class String; }

#define CLASS_1_A4EF9A599AC1E545_METHOD_1_0220D206DA464574_OFFSET UNITYSDK_OFFSET(0x167038F0)
#define CLASS_1_A4EF9A599AC1E545_METHOD_1_4981EF59FEFB4528_OFFSET UNITYSDK_OFFSET(0x167039F0)
#define CLASS_1_A4EF9A599AC1E545_METHOD_1_60AAA2B666A5B56A_OFFSET UNITYSDK_OFFSET(0x16703AE0)
#define CLASS_1_A4EF9A599AC1E545_METHOD_1_C6DFEF45E1FE475D_OFFSET UNITYSDK_OFFSET(0x16703CE0)
#define CLASS_1_A4EF9A599AC1E545_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x167039B0)
#define CLASS_1_A4EF9A599AC1E545__CTOR_OFFSET UNITYSDK_OFFSET(0x167039A0)

inline static constexpr unsigned int Class_1_A4EF9A599AC1E545_TypeDefinitionIndex = 70692;

class Class_1_A4EF9A599AC1E545 : public ::System::Object
{
public:
	::RPG::Client::DiceCombat::DiceCombatGameFlow* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::Client::DiceCombat::DiceCombatGameFlow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatGameFlow*))((::PBYTE)hIl2Cpp + CLASS_1_A4EF9A599AC1E545__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_A4EF9A599AC1E545* Method_1_0220D206DA464574(::RPG::Client::DiceCombat::DiceCombatGameFlow* a1)
	{
		return ((::Class_1_A4EF9A599AC1E545*(*)(::RPG::Client::DiceCombat::DiceCombatGameFlow*))((::PBYTE)hIl2Cpp + CLASS_1_A4EF9A599AC1E545_METHOD_1_0220D206DA464574_OFFSET))(a1);
	}

	::RPG::Client::LuaUIGameFlowContext* Method_1_4981EF59FEFB4528(::RPG::Client::DiceCombat::DiceCombatUIType a1)
	{
		return ((::RPG::Client::LuaUIGameFlowContext*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatUIType))((::PBYTE)hIl2Cpp + CLASS_1_A4EF9A599AC1E545_METHOD_1_4981EF59FEFB4528_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_60AAA2B666A5B56A(::RPG::Client::DiceCombat::DiceCombatUIType a1, ::Il2CppArray<::System::Object*>* a2)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatUIType, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_A4EF9A599AC1E545_METHOD_1_60AAA2B666A5B56A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4EF9A599AC1E545_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::String* Method_1_C6DFEF45E1FE475D(::RPG::Client::DiceCombat::DiceCombatUIType a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatUIType))((::PBYTE)hIl2Cpp + CLASS_1_A4EF9A599AC1E545_METHOD_1_C6DFEF45E1FE475D_OFFSET))(this, a1);
	}
};
