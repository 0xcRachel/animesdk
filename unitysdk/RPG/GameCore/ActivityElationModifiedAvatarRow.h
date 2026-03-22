#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYELATIONMODIFIEDAVATARROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16788390)
#define RPG_GAMECORE_ACTIVITYELATIONMODIFIEDAVATARROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16788AC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityElationModifiedAvatarRow_TypeDefinitionIndex = 10504;

	class ActivityElationModifiedAvatarRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList_BESkill; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList_ModifiedSkill; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList_EnergyCollection; // 0x20
		::System::String* GiftIcon; // 0x28
		::RPG::Client::TextID ModifiedSkill_Simple; // 0x30
		::RPG::Client::TextID ModifiedSkill; // 0x40
		::System::UInt32 ID; // 0x50
		::System::UInt32 SpecialAvatarID; // 0x54
		::RPG::Client::TextID BESkill_Simple; // 0x58
		::RPG::Client::TextID EnergyCollection; // 0x68
		::RPG::Client::TextID GiftName; // 0x78
		::RPG::Client::TextID EnergyCollection_Simple; // 0x88
		::RPG::Client::TextID BESkill; // 0x98
		::RPG::Client::TextID Tag; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYELATIONMODIFIEDAVATARROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityElationModifiedAvatarRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityElationModifiedAvatarRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYELATIONMODIFIEDAVATARROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
