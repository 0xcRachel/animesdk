#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChallengeStoryType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHALLENGESTORYGROUPEXTRACONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16961D80)
#define RPG_GAMECORE_CHALLENGESTORYGROUPEXTRACONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16962530)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChallengeStoryGroupExtraConfigRow_TypeDefinitionIndex = 11774;

	class ChallengeStoryGroupExtraConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* SubMazeBuffList; // 0x10
		::System::String* ThemePosterTabPicPath; // 0x18
		::System::String* ThemeIconPicPath; // 0x20
		::Il2CppArray<::System::UInt32>* BuffList; // 0x28
		::System::String* ThemePosterBgPicPath; // 0x30
		::System::String* ThemePosterEffectPrefabPath; // 0x38
		::System::String* ThemeToastPicPath; // 0x40
		::System::UInt32 ThemeID; // 0x48
		::System::UInt32 GroupID; // 0x4C
		::RPG::GameCore::ChallengeStoryType StoryType; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGESTORYGROUPEXTRACONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ChallengeStoryGroupExtraConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChallengeStoryGroupExtraConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGESTORYGROUPEXTRACONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
