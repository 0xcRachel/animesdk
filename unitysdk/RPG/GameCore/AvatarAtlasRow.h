#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_AVATARATLASROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x181F7810)
#define RPG_GAMECORE_AVATARATLASROW__CTOR_OFFSET UNITYSDK_OFFSET(0x181F8050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarAtlasRow_TypeDefinitionIndex = 11997;

	class AvatarAtlasRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID CV_CN; // 0x10
		::RPG::Client::TextID CV_KR; // 0x20
		::System::Boolean DefaultUnlock; // 0x30
		::System::UInt32 AvatarID; // 0x34
		::RPG::Client::TextID CV_JP; // 0x38
		::System::UInt32 CampID; // 0x48
		::RPG::Client::TextID CV_EN; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARATLASROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AvatarAtlasRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarAtlasRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARATLASROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
