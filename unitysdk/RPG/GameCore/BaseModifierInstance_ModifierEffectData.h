#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MonoEffectFlag.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/Struct_2_0B84ADD7815498A2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TriggerEffectParams; }
namespace System { class String; }

#define RPG_GAMECORE_BASEMODIFIERINSTANCE_MODIFIEREFFECTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA34D620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaseModifierInstance_ModifierEffectData_TypeDefinitionIndex = 42462;

	class BaseModifierInstance_ModifierEffectData : public ::System::Object
	{
	public:
		::System::String* EffectPath; // 0x10
		::Struct_2_0B84ADD7815498A2 EffectInst; // 0x18
		::Il2CppArray<::RPG::GameCore::MonoEffectFlag>* Flag; // 0x28
		::System::String* DynamicAttach; // 0x30
		::System::String* UniqueName; // 0x38
		::RPG::Client::TriggerEffectParams* EffectParam; // 0x40
		::RPG::MVector3 PositionOffset; // 0x48
		::System::Boolean AutoHideInSkill; // 0x54
		::System::Int32 ReuseRefCount; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASEMODIFIERINSTANCE_MODIFIEREFFECTDATA__CTOR_OFFSET))(this);
		}
	};
}
