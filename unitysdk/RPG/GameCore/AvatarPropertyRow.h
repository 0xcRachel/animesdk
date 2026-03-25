#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_AVATARPROPERTYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16FBC160)
#define RPG_GAMECORE_AVATARPROPERTYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16FBDC70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarPropertyRow_TypeDefinitionIndex = 11632;

	class AvatarPropertyRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::RPG::Client::TextID PropertyName; // 0x18
		::System::UInt32 MainRelicFilter; // 0x28
		::System::UInt32 Order; // 0x2C
		::System::UInt32 PropertyInstructionID; // 0x30
		::RPG::GameCore::AvatarPropertyType PropertyType; // 0x34
		::RPG::Client::TextID PropertyNameFilter; // 0x38
		::RPG::Client::TextID PropertyNameSkillTree; // 0x48
		::RPG::Client::TextID PropertyNameRelic; // 0x58
		::System::UInt32 SubRelicFilter; // 0x68
		::System::Boolean IsDisplay; // 0x6C
		::System::Boolean isBattleDisplay; // 0x6D
		::System::UInt32 PropertyClassify; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROPERTYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AvatarPropertyRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarPropertyRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROPERTYROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
