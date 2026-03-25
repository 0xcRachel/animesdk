#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/SwordTrainingActionType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SwordTrainingStatusConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SWORDTRAININGACTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x177AE8C0)
#define RPG_GAMECORE_SWORDTRAININGACTIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x177AED40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingActionRow_TypeDefinitionIndex = 11359;

	class SwordTrainingActionRow : public ::System::Object
	{
	public:
		::System::String* ActionImage; // 0x10
		::System::String* ActionPlanImage; // 0x18
		::Il2CppArray<::RPG::GameCore::SwordTrainingStatusConfig*>* DisplayEffectHintList; // 0x20
		::System::String* ActionIcon; // 0x28
		::Il2CppArray<::System::UInt32>* EffectIDList; // 0x30
		::Il2CppArray<::System::String*>* ActionPerformPrefab; // 0x38
		::RPG::Client::TextID ActionName; // 0x40
		::System::UInt32 ActionID; // 0x50
		::System::UInt32 ActionLevel; // 0x54
		::RPG::Client::TextID ActionSubName; // 0x58
		::RPG::GameCore::SwordTrainingActionType ActionType; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGACTIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::SwordTrainingActionRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwordTrainingActionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGACTIONROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
