#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MonopolyEventType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MONOPOLYEVENTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19089D30)
#define RPG_GAMECORE_MONOPOLYEVENTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1908A660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyEventConfigRow_TypeDefinitionIndex = 11422;

	class MonopolyEventConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* AutoTriggerEffectIDList; // 0x10
		::System::String* PicPath; // 0x18
		::Il2CppArray<::System::UInt32>* EventOptionIDList; // 0x20
		::RPG::Client::TextID EventContent; // 0x28
		::RPG::GameCore::MonopolyEventType Type; // 0x38
		::System::Boolean IsSpecial; // 0x3C
		::System::Boolean Skippable; // 0x3D
		::System::Boolean IsDataReport; // 0x3E
		::RPG::Client::TextID EventName; // 0x40
		::System::UInt32 DiceNum; // 0x50
		::System::UInt32 EventID; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYEVENTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MonopolyEventConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyEventConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYEVENTCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
