#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GuideRogueType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GUIDEROGUETABROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A5EF40)
#define RPG_GAMECORE_GUIDEROGUETABROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A5F8A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GuideRogueTabRow_TypeDefinitionIndex = 12666;

	class GuideRogueTabRow : public ::System::Object
	{
	public:
		::System::String* ResBarKey; // 0x10
		::System::String* IconPath; // 0x18
		::RPG::GameCore::GuideRogueType GuideType; // 0x20
		::System::UInt32 Priority; // 0x24
		::RPG::Client::TextID Desc; // 0x28
		::System::UInt32 ID; // 0x38
		::System::UInt32 IntroID; // 0x3C
		::RPG::Client::TextID Name; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDEROGUETABROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GuideRogueTabRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GuideRogueTabRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDEROGUETABROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
