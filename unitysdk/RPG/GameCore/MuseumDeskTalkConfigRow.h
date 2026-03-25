#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MuseumTalkTriggerType.h"
#include "unitysdk/RPG/GameCore/MuseumTalkType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MUSEUMDESKTALKCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17474C90)
#define RPG_GAMECORE_MUSEUMDESKTALKCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x174753C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MuseumDeskTalkConfigRow_TypeDefinitionIndex = 13050;

	class MuseumDeskTalkConfigRow : public ::System::Object
	{
	public:
		::System::String* TalkTypeParameter; // 0x10
		::Il2CppArray<::RPG::Client::TextID>* TextIDList; // 0x18
		::System::String* CustomString; // 0x20
		::RPG::GameCore::MuseumTalkTriggerType TriggerType; // 0x28
		::System::UInt32 Priority; // 0x2C
		::System::Boolean IsMustTriggered; // 0x30
		::System::UInt32 TalkID; // 0x34
		::RPG::GameCore::MuseumTalkType TalkType; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMDESKTALKCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MuseumDeskTalkConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MuseumDeskTalkConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMDESKTALKCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
