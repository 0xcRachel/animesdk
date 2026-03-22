#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_4CEFB88B4AAB3F6A;
class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUEMAGICTALENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16E8A170)
#define RPG_GAMECORE_ROGUEMAGICTALENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16E8A450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicTalentRow_TypeDefinitionIndex = 13521;

	class RogueMagicTalentRow : public ::System::Object
	{
	public:
		::Il2CppArray<::Class_1_4CEFB88B4AAB3F6A*>* DescParams; // 0x10
		::System::String* TalentIcon; // 0x18
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* Cost; // 0x20
		::System::UInt32 TalentID; // 0x28
		::System::UInt32 NameDisplayID; // 0x2C
		::RPG::Client::TextID EffectDesc; // 0x30
		::System::UInt32 Level; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICTALENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueMagicTalentRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicTalentRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICTALENTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
