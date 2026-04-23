#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ProgressBonus; }
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYAREACONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19491E20)
#define RPG_GAMECORE_TRAINPARTYAREACONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19492200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyAreaConfigRow_TypeDefinitionIndex = 14543;

	class TrainPartyAreaConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* ShowBlockList; // 0x10
		::Il2CppArray<::RPG::GameCore::ProgressBonus*>* ProgressBonusList; // 0x18
		::Il2CppArray<::System::String*>* HiddenBlockList; // 0x20
		::System::String* IconPath; // 0x28
		::System::UInt32 RequireAreaID; // 0x30
		::System::Boolean IsShowInActivity; // 0x34
		::System::UInt32 ID; // 0x38
		::System::UInt32 FirstStep; // 0x3C
		::System::UInt32 Sort; // 0x40
		::RPG::Client::TextID Name; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYAREACONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TrainPartyAreaConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyAreaConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYAREACONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
