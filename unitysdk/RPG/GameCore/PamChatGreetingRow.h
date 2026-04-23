#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PAMCHATGREETINGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18EFA630)
#define RPG_GAMECORE_PAMCHATGREETINGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18EFA960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PamChatGreetingRow_TypeDefinitionIndex = 13573;

	class PamChatGreetingRow : public ::System::Object
	{
	public:
		::System::String* Condition; // 0x10
		::Il2CppArray<::System::UInt32>* GreetingTextIDList; // 0x18
		::System::UInt32 ID; // 0x20
		::RPG::Client::TextID HudBubble; // 0x28
		::System::UInt32 Priority; // 0x38
		::System::Boolean IsDailyGreeting; // 0x3C
		::System::Boolean CanTriggerWhenLLMDisabled; // 0x3D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAMCHATGREETINGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PamChatGreetingRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PamChatGreetingRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAMCHATGREETINGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
