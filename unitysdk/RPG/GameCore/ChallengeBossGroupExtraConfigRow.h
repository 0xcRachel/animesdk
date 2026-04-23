#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHALLENGEBOSSGROUPEXTRACONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D470D0)
#define RPG_GAMECORE_CHALLENGEBOSSGROUPEXTRACONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18D478C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChallengeBossGroupExtraConfigRow_TypeDefinitionIndex = 12243;

	class ChallengeBossGroupExtraConfigRow : public ::System::Object
	{
	public:
		::System::String* ThemeIconPicPath; // 0x10
		::Il2CppArray<::System::UInt32>* BuffList1; // 0x18
		::System::String* BossPositionPrefabPath1; // 0x20
		::System::String* ThemeToastPicPath; // 0x28
		::Il2CppArray<::System::UInt32>* BuffList2; // 0x30
		::System::String* ThemePosterEffectPrefabPath; // 0x38
		::System::String* ThemePosterBgPicPath; // 0x40
		::System::String* BossPositionPrefabPath2; // 0x48
		::System::String* BossPatternPrefabPath; // 0x50
		::System::String* ThemePosterTabPicPath; // 0x58
		::System::UInt32 GroupID; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEBOSSGROUPEXTRACONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ChallengeBossGroupExtraConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChallengeBossGroupExtraConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEBOSSGROUPEXTRACONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
