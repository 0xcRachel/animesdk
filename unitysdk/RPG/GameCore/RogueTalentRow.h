#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUETALENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x198264B0)
#define RPG_GAMECORE_ROGUETALENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19826970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTalentRow_TypeDefinitionIndex = 14044;

	class RogueTalentRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* EffectDescParamList; // 0x10
		::Il2CppArray<::System::UInt32>* NextTalentIDList; // 0x18
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* Cost; // 0x20
		::System::String* Icon; // 0x28
		::Il2CppArray<::System::UInt32>* UnlockIDList; // 0x30
		::System::UInt32 TalentID; // 0x38
		::System::Boolean IsImportant; // 0x3C
		::RPG::Client::TextID EffectTag; // 0x40
		::RPG::Client::TextID EffectTitle; // 0x50
		::RPG::Client::TextID EffectDesc; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETALENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueTalentRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTalentRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETALENTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
