#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTalkType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELTALKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x170BB910)
#define RPG_GAMECORE_CHIMERADUELTALKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x170BBB30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelTalkRow_TypeDefinitionIndex = 10429;

	class ChimeraDuelTalkRow : public ::System::Object
	{
	public:
		::System::UInt32 TriggerEventID; // 0x10
		::System::UInt32 ID; // 0x14
		::RPG::Client::TextID ChimeraDuelTalkText; // 0x18
		::System::UInt32 TalkID; // 0x28
		::RPG::GameCore::ChimeraDuelTalkType Type; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELTALKROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ChimeraDuelTalkRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelTalkRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELTALKROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
