#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GuideChallengeType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GUIDECHALLENGETABROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16B545D0)
#define RPG_GAMECORE_GUIDECHALLENGETABROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16B54F80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GuideChallengeTabRow_TypeDefinitionIndex = 12156;

	class GuideChallengeTabRow : public ::System::Object
	{
	public:
		::System::String* ResBarKey; // 0x10
		::System::String* IconPath; // 0x18
		::RPG::Client::TextID Name; // 0x20
		::RPG::GameCore::GuideChallengeType GuideType; // 0x30
		::System::UInt32 IntroDataID; // 0x34
		::RPG::Client::TextID Desc; // 0x38
		::System::UInt32 ID; // 0x48
		::System::UInt32 Priority; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDECHALLENGETABROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GuideChallengeTabRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GuideChallengeTabRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDECHALLENGETABROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
