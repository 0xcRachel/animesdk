#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AvatarSpecialUltraType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_AVATARULTRASKILLCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x168C45D0)
#define RPG_GAMECORE_AVATARULTRASKILLCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x168C47B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarUltraSkillConfigRow_TypeDefinitionIndex = 11560;

	class AvatarUltraSkillConfigRow : public ::System::Object
	{
	public:
		::System::String* UltraSkillResourcePath; // 0x10
		::RPG::GameCore::AvatarSpecialUltraType UltraSkillType; // 0x18
		::System::UInt32 AvatarID; // 0x1C
		::RPG::Client::TextID UltraSkillUse; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARULTRASKILLCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AvatarUltraSkillConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarUltraSkillConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARULTRASKILLCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
