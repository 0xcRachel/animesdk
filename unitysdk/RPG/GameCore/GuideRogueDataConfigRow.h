#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ConditionParam; }
namespace System { class String; }

#define RPG_GAMECORE_GUIDEROGUEDATACONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16B56270)
#define RPG_GAMECORE_GUIDEROGUEDATACONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16B56610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GuideRogueDataConfigRow_TypeDefinitionIndex = 12166;

	class GuideRogueDataConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* UnlockConditions; // 0x10
		::System::String* TabIconPath; // 0x18
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* OpenConditions; // 0x20
		::System::String* IconPath; // 0x28
		::System::UInt32 ID; // 0x30
		::System::UInt32 Priority; // 0x34
		::System::UInt32 TabID; // 0x38
		::RPG::Client::TextID Name; // 0x40
		::System::UInt32 MapEntranceID; // 0x50
		::System::UInt32 RelatedID; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDEROGUEDATACONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GuideRogueDataConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GuideRogueDataConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDEROGUEDATACONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
