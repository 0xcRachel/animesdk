#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYELATIONMODIFIEDAVATARROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19898EE0)
#define RPG_GAMECORE_ACTIVITYELATIONMODIFIEDAVATARROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19899600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityElationModifiedAvatarRow_TypeDefinitionIndex = 10882;

	class ActivityElationModifiedAvatarRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList_EnergyCollection; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList_ModifiedSkill; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList_BESkill; // 0x20
		::System::String* GiftIcon; // 0x28
		::RPG::Client::TextID EnergyCollection; // 0x30
		::RPG::Client::TextID ModifiedSkill; // 0x40
		::RPG::Client::TextID BESkill_Simple; // 0x50
		::RPG::Client::TextID GiftName; // 0x60
		::RPG::Client::TextID Tag; // 0x70
		::RPG::Client::TextID ModifiedSkill_Simple; // 0x80
		::RPG::Client::TextID BESkill; // 0x90
		::RPG::Client::TextID EnergyCollection_Simple; // 0xA0
		::System::UInt32 SpecialAvatarID; // 0xB0
		::System::UInt32 ID; // 0xB4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYELATIONMODIFIEDAVATARROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityElationModifiedAvatarRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityElationModifiedAvatarRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYELATIONMODIFIEDAVATARROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
