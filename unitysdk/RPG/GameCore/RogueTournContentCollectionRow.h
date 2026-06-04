#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUETOURNCONTENTCOLLECTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x193FF670)
#define RPG_GAMECORE_ROGUETOURNCONTENTCOLLECTIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x193FFA70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournContentCollectionRow_TypeDefinitionIndex = 14300;

	class RogueTournContentCollectionRow : public ::System::Object
	{
	public:
		::System::String* SlotIconPath; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x18
		::System::String* IconPath; // 0x20
		::RPG::Client::TextID CollectionName; // 0x28
		::System::Int32 EntityRuntimeReplaceArtPrefabID; // 0x38
		::System::UInt32 UnlockID; // 0x3C
		::RPG::Client::TextID CollectionDesc; // 0x40
		::RPG::Client::TextID CollectionEffectDesc; // 0x50
		::System::UInt32 CollectionID; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCONTENTCOLLECTIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournContentCollectionRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournContentCollectionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCONTENTCOLLECTIONROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
