#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_AVATARENHANCEDRANKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1762DC40)
#define RPG_GAMECORE_AVATARENHANCEDRANKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1762DFF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarEnhancedRankRow_TypeDefinitionIndex = 12178;

	class AvatarEnhancedRankRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID RankDescAfter; // 0x10
		::System::UInt32 RankID; // 0x20
		::RPG::Client::TextID Comment02; // 0x28
		::RPG::Client::TextID RankDescBefore; // 0x38
		::RPG::Client::TextID Comment01; // 0x48
		::System::UInt32 AvatarID; // 0x58
		::System::UInt32 CommentIndex; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARENHANCEDRANKROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AvatarEnhancedRankRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarEnhancedRankRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARENHANCEDRANKROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
