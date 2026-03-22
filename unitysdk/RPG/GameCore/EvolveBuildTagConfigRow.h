#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_EVOLVEBUILDTAGCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16A83F20)
#define RPG_GAMECORE_EVOLVEBUILDTAGCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16A846C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildTagConfigRow_TypeDefinitionIndex = 10602;

	class EvolveBuildTagConfigRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::UInt32 ID; // 0x18
		::System::UInt32 ExtraEffectID; // 0x1C
		::RPG::Client::TextID Name; // 0x20
		::System::UInt32 ShopSkillID; // 0x30
		::RPG::GameCore::EvolveBuildSeason Season; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDTAGCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::EvolveBuildTagConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EvolveBuildTagConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDTAGCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
