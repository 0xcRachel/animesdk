#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class BaseShaderPropertyTransition; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define CLASS_1_E8972CDB20ABFBE4_CLEAR_OFFSET UNITYSDK_OFFSET(0x169D9E90)
#define CLASS_1_E8972CDB20ABFBE4_METHOD_1_4AB9012B5D01108B_OFFSET UNITYSDK_OFFSET(0x169DA2E0)
#define CLASS_1_E8972CDB20ABFBE4_METHOD_1_57D80B372834C5D1_OFFSET UNITYSDK_OFFSET(0x169D9EE0)
#define CLASS_1_E8972CDB20ABFBE4_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x169D9FF0)
#define CLASS_1_E8972CDB20ABFBE4_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x169DA3F0)
#define CLASS_1_E8972CDB20ABFBE4_METHOD_1_C2245EC58D417830_OFFSET UNITYSDK_OFFSET(0x169DA220)
#define CLASS_1_E8972CDB20ABFBE4_METHOD_1_FA662896843C137A_OFFSET UNITYSDK_OFFSET(0x169DA440)
#define CLASS_1_E8972CDB20ABFBE4_METHOD_1_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x169D9F60)
#define CLASS_1_E8972CDB20ABFBE4__CTOR_OFFSET UNITYSDK_OFFSET(0x169DA4B0)

inline static constexpr unsigned int Class_1_E8972CDB20ABFBE4_TypeDefinitionIndex = 68403;

class Class_1_E8972CDB20ABFBE4 : public ::System::Object
{
public:
	::RPG::Client::BaseShaderPropertyTransition* Field_1_0; // 0x10
	::RPG::GameCore::GameEntity* Field_1_1; // 0x18
	::UnityEngine::Collider* Field_1_2; // 0x20
	::UnityEngine::Transform* Field_1_3; // 0x28
	::UnityEngine::Vector3 Field_1_4; // 0x30
	::UnityEngine::Vector3 Field_1_5; // 0x3C
	::System::Boolean Field_1_6; // 0x48
	::System::Boolean Field_1_7; // 0x49
	::System::Single Field_1_8; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E8972CDB20ABFBE4__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E8972CDB20ABFBE4_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_57D80B372834C5D1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_E8972CDB20ABFBE4_METHOD_1_57D80B372834C5D1_OFFSET))(this, a1);
	}

	::System::Void Method_1_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E8972CDB20ABFBE4_METHOD_1_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_C2245EC58D417830()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E8972CDB20ABFBE4_METHOD_1_C2245EC58D417830_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_4AB9012B5D01108B()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E8972CDB20ABFBE4_METHOD_1_4AB9012B5D01108B_OFFSET))(this);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E8972CDB20ABFBE4_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_FA662896843C137A()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E8972CDB20ABFBE4_METHOD_1_FA662896843C137A_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E8972CDB20ABFBE4_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}
};
