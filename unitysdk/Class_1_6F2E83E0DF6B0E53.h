#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"
#include "unitysdk/System/Object.h"

class Class_1_2116C04D3AB94F59;
class Class_3_881497162334D4FF;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class RtBehaviorFlagStateAction; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6F2E83E0DF6B0E53_METHOD_1_04E67322A4A37D4D_OFFSET UNITYSDK_OFFSET(0xF2D6830)
#define CLASS_1_6F2E83E0DF6B0E53_METHOD_1_1192BDF8FF0D8F9C_OFFSET UNITYSDK_OFFSET(0xF2D68D0)
#define CLASS_1_6F2E83E0DF6B0E53_METHOD_1_7989FACEBD5B6664_OFFSET UNITYSDK_OFFSET(0xF2D6440)
#define CLASS_1_6F2E83E0DF6B0E53_ONFLAGSTATECHANGE_OFFSET UNITYSDK_OFFSET(0xF2D69B0)
#define CLASS_1_6F2E83E0DF6B0E53_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0xF2D63A0)
#define CLASS_1_6F2E83E0DF6B0E53_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0xF2D63F0)
#define CLASS_1_6F2E83E0DF6B0E53__CTOR_OFFSET UNITYSDK_OFFSET(0xF2D6C60)

inline static constexpr unsigned int Class_1_6F2E83E0DF6B0E53_TypeDefinitionIndex = 49886;

class Class_1_6F2E83E0DF6B0E53 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_2116C04D3AB94F59*>* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::Class_3_881497162334D4FF*>* Field_1_1; // 0x18
	::RPG::GameCore::GameWorld* Field_1_0; // 0x20
	::Il2CppArray<::Class_1_2116C04D3AB94F59*>* Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F2E83E0DF6B0E53__CTOR_OFFSET))(this);
	}

	::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_6F2E83E0DF6B0E53_ONPLUGININIT_OFFSET))(this, a1);
	}

	::System::Void OnPluginUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F2E83E0DF6B0E53_ONPLUGINUNINIT_OFFSET))(this);
	}

	::System::Void Method_1_7989FACEBD5B6664(::Il2CppArray<::RPG::GameCore::RtBehaviorFlagStateAction*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::RtBehaviorFlagStateAction*>*))((::PBYTE)hIl2Cpp + CLASS_1_6F2E83E0DF6B0E53_METHOD_1_7989FACEBD5B6664_OFFSET))(this, a1);
	}

	::System::Void Method_1_04E67322A4A37D4D(::Class_3_881497162334D4FF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_881497162334D4FF*))((::PBYTE)hIl2Cpp + CLASS_1_6F2E83E0DF6B0E53_METHOD_1_04E67322A4A37D4D_OFFSET))(this, a1);
	}

	::System::Void Method_1_1192BDF8FF0D8F9C(::Class_3_881497162334D4FF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_881497162334D4FF*))((::PBYTE)hIl2Cpp + CLASS_1_6F2E83E0DF6B0E53_METHOD_1_1192BDF8FF0D8F9C_OFFSET))(this, a1);
	}

	::System::Void OnFlagStateChange(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::RtBehaviorFlag a2, ::System::Boolean a3, ::RPG::GameCore::GameEntity* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::RtBehaviorFlag, ::System::Boolean, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_6F2E83E0DF6B0E53_ONFLAGSTATECHANGE_OFFSET))(this, a1, a2, a3, a4);
	}
};
