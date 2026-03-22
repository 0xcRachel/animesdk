#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
#include "unitysdk/RPG/GameCore/ShieldValueType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYSHIELD_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x16F26860)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSHIELD_METHOD_4_30C1F578A293F0F1_OFFSET UNITYSDK_OFFSET(0x16F267E0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSHIELD_METHOD_4_E11B713C3B0FE389_OFFSET UNITYSDK_OFFSET(0x16F1EF90)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSHIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x16F1EF40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByShield_TypeDefinitionIndex = 20766;

	class SetDynamicValueByShield : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* DynamicKey; // 0x20
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x28
		::RPG::GameCore::ShieldValueType ValueType; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSHIELD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_30C1F578A293F0F1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByShield*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByShield*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSHIELD_METHOD_4_30C1F578A293F0F1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E11B713C3B0FE389(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByShield* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByShield*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSHIELD_METHOD_4_E11B713C3B0FE389_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSHIELD_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
