#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_99A13A3E958619B0.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"

namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }

#define CLASS_3_FA2A7D9769F53723_CLEAR_OFFSET UNITYSDK_OFFSET(0x15FBE260)
#define CLASS_3_FA2A7D9769F53723_METHOD_3_09D92EE02A83C51D_OFFSET UNITYSDK_OFFSET(0x15FBE3A0)
#define CLASS_3_FA2A7D9769F53723_METHOD_3_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x15FBE2F0)
#define CLASS_3_FA2A7D9769F53723_METHOD_3_3E4243BB348DE0D4_OFFSET UNITYSDK_OFFSET(0x15FBE1E0)
#define CLASS_3_FA2A7D9769F53723_METHOD_3_57D80B372834C5D1_OFFSET UNITYSDK_OFFSET(0x15FBDEC0)
#define CLASS_3_FA2A7D9769F53723_METHOD_3_6857B5E6909CBB01_OFFSET UNITYSDK_OFFSET(0x15FBE570)
#define CLASS_3_FA2A7D9769F53723_METHOD_3_7B6BB4667FE9151B_OFFSET UNITYSDK_OFFSET(0x15FBE620)
#define CLASS_3_FA2A7D9769F53723_METHOD_3_A1FED00525179700_OFFSET UNITYSDK_OFFSET(0x15FBDF10)
#define CLASS_3_FA2A7D9769F53723_METHOD_3_BB2928BEC244DEB7_OFFSET UNITYSDK_OFFSET(0x15FBDF70)
#define CLASS_3_FA2A7D9769F53723_METHOD_3_C9312916D3A31323_OFFSET UNITYSDK_OFFSET(0x15FBE630)
#define CLASS_3_FA2A7D9769F53723__CTOR_OFFSET UNITYSDK_OFFSET(0x15FBE600)
#define CLASS_3_FA2A7D9769F53723___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x15FBE690)

inline static constexpr unsigned int Class_3_FA2A7D9769F53723_TypeDefinitionIndex = 66259;

class Class_3_FA2A7D9769F53723 : public ::Class_2_99A13A3E958619B0
{
public:
	// static const ::System::String* Field_3_0; // 0x0
	// static const ::System::String* Field_3_1; // 0x0
	// static const ::System::Single Field_3_2; // 0x0
	// static const ::System::Single Field_3_3; // 0x0
	::RPG::GameCore::GameEntity* Field_3_4; // 0x50
	::UnityEngine::ParticleSystem* Field_3_5; // 0x58
	::System::Boolean Field_3_6; // 0x60
	::System::UInt32 Field_3_7; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FA2A7D9769F53723__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_57D80B372834C5D1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_FA2A7D9769F53723_METHOD_3_57D80B372834C5D1_OFFSET))(this, a1);
	}

	::System::Void Method_3_A1FED00525179700(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_3_FA2A7D9769F53723_METHOD_3_A1FED00525179700_OFFSET))(this, a1);
	}

	::System::Void Method_3_3E4243BB348DE0D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FA2A7D9769F53723_METHOD_3_3E4243BB348DE0D4_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FA2A7D9769F53723_CLEAR_OFFSET))(this);
	}

	::System::Void Method_3_BB2928BEC244DEB7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FA2A7D9769F53723_METHOD_3_BB2928BEC244DEB7_OFFSET))(this);
	}

	::System::Void Method_3_09D92EE02A83C51D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_FA2A7D9769F53723_METHOD_3_09D92EE02A83C51D_OFFSET))(this, a1);
	}

	::System::Void Method_3_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FA2A7D9769F53723_METHOD_3_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_3_6857B5E6909CBB01(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_3_FA2A7D9769F53723_METHOD_3_6857B5E6909CBB01_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_7B6BB4667FE9151B(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_3_FA2A7D9769F53723_METHOD_3_7B6BB4667FE9151B_OFFSET))(this, a1);
	}

	::System::Void Method_3_C9312916D3A31323()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FA2A7D9769F53723_METHOD_3_C9312916D3A31323_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FA2A7D9769F53723___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}
};
