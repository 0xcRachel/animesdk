#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_AVATARENHANCEDSKILLTREEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18200490)
#define RPG_GAMECORE_AVATARENHANCEDSKILLTREEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18200840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarEnhancedSkillTreeRow_TypeDefinitionIndex = 12086;

	class AvatarEnhancedSkillTreeRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID DescBefore; // 0x10
		::RPG::Client::TextID DescAfter; // 0x20
		::RPG::Client::TextID Comment02; // 0x30
		::System::UInt32 SkillTreeID; // 0x40
		::System::UInt32 AvatarID; // 0x44
		::RPG::Client::TextID Comment01; // 0x48
		::System::UInt32 CommentIndex; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARENHANCEDSKILLTREEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AvatarEnhancedSkillTreeRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarEnhancedSkillTreeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARENHANCEDSKILLTREEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
