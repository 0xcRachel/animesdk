#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PARKOURRAILBALLSKILLCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18EFFBA0)
#define RPG_GAMECORE_PARKOURRAILBALLSKILLCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18EFFF00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParkourRailBallSkillConfigRow_TypeDefinitionIndex = 11486;

	class ParkourRailBallSkillConfigRow : public ::System::Object
	{
	public:
		::System::String* MiniIconPath; // 0x10
		::System::String* IconPath; // 0x18
		::System::String* MiniIconBGPath; // 0x20
		::System::UInt32 ID; // 0x28
		::RPG::Client::TextID Desc; // 0x30
		::System::UInt32 TutorialID; // 0x40
		::System::UInt32 VideoID; // 0x44
		::RPG::Client::TextID Name; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARKOURRAILBALLSKILLCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ParkourRailBallSkillConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParkourRailBallSkillConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARKOURRAILBALLSKILLCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
