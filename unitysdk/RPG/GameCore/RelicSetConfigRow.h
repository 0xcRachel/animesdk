#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RELICSETCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16DDA3A0)
#define RPG_GAMECORE_RELICSETCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16DDABC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RelicSetConfigRow_TypeDefinitionIndex = 13287;

	class RelicSetConfigRow : public ::System::Object
	{
	public:
		::System::String* SetIconFigurePath; // 0x10
		::System::String* ReleaseVersion; // 0x18
		::Il2CppArray<::System::UInt32>* SetSkillList; // 0x20
		::System::String* SetIconPath; // 0x28
		::RPG::Client::TextID SetName; // 0x30
		::System::UInt32 SetID; // 0x40
		::System::UInt32 DisplayItemID; // 0x44
		::System::UInt32 DisplayItemIDRarity4; // 0x48
		::System::Boolean Release; // 0x4C
		::System::Boolean IsPlanarSuit; // 0x4D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSETCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RelicSetConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RelicSetConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSETCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
