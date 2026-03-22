#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DiceCombat/DiceCombatUIType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class LuaUIGameFlowContext; }
namespace RPG::Client::DiceCombat { class DiceCombatGameFlow; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class String; }

#define CLASS_1_B7DA92BA25C1DC79_METHOD_1_3FF9FDE8FF5988F2_OFFSET UNITYSDK_OFFSET(0xFEB0330)
#define CLASS_1_B7DA92BA25C1DC79_METHOD_1_48F6DFD3DAF3A554_OFFSET UNITYSDK_OFFSET(0xFEB0500)
#define CLASS_1_B7DA92BA25C1DC79_METHOD_1_84992C2FDFAF7909_OFFSET UNITYSDK_OFFSET(0xFEB0210)
#define CLASS_1_B7DA92BA25C1DC79_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xFEB01D0)
#define CLASS_1_B7DA92BA25C1DC79_METHOD_1_D4D17AE2A3E4617D_OFFSET UNITYSDK_OFFSET(0xFEB0140)
#define CLASS_1_B7DA92BA25C1DC79__CTOR_OFFSET UNITYSDK_OFFSET(0xFEB01C0)

inline static constexpr unsigned int Class_1_B7DA92BA25C1DC79_TypeDefinitionIndex = 60174;

class Class_1_B7DA92BA25C1DC79 : public ::System::Object
{
public:
	::RPG::Client::DiceCombat::DiceCombatGameFlow* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::Client::DiceCombat::DiceCombatGameFlow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatGameFlow*))((::PBYTE)hIl2Cpp + CLASS_1_B7DA92BA25C1DC79__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_B7DA92BA25C1DC79* Method_1_D4D17AE2A3E4617D(::RPG::Client::DiceCombat::DiceCombatGameFlow* a1)
	{
		return ((::Class_1_B7DA92BA25C1DC79*(*)(::RPG::Client::DiceCombat::DiceCombatGameFlow*))((::PBYTE)hIl2Cpp + CLASS_1_B7DA92BA25C1DC79_METHOD_1_D4D17AE2A3E4617D_OFFSET))(a1);
	}

	::RPG::Client::LuaUIGameFlowContext* Method_1_84992C2FDFAF7909(::RPG::Client::DiceCombat::DiceCombatUIType a1)
	{
		return ((::RPG::Client::LuaUIGameFlowContext*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatUIType))((::PBYTE)hIl2Cpp + CLASS_1_B7DA92BA25C1DC79_METHOD_1_84992C2FDFAF7909_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_3FF9FDE8FF5988F2(::RPG::Client::DiceCombat::DiceCombatUIType a1, ::Il2CppArray<::System::Object*>* a2)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatUIType, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_B7DA92BA25C1DC79_METHOD_1_3FF9FDE8FF5988F2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7DA92BA25C1DC79_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::String* Method_1_48F6DFD3DAF3A554(::RPG::Client::DiceCombat::DiceCombatUIType a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatUIType))((::PBYTE)hIl2Cpp + CLASS_1_B7DA92BA25C1DC79_METHOD_1_48F6DFD3DAF3A554_OFFSET))(this, a1);
	}
};
