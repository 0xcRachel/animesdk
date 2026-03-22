#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueAdventureGameplayType.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_ROGUEADVENTUREROOMHUDPARAMITEM_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xA4E99D0)
#define RPG_GAMECORE_ROGUEADVENTUREROOMHUDPARAMITEM_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xA4E99B0)
#define RPG_GAMECORE_ROGUEADVENTUREROOMHUDPARAMITEM_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0xA4E99E0)
#define RPG_GAMECORE_ROGUEADVENTUREROOMHUDPARAMITEM_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xA4E99C0)
#define RPG_GAMECORE_ROGUEADVENTUREROOMHUDPARAMITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA4E99F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueAdventureRoomHUDParamItem_TypeDefinitionIndex = 46085;

	class RogueAdventureRoomHUDParamItem : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueAdventureGameplayType _Type_k__BackingField; // 0x10
		::System::UInt32 _GroupID_k__BackingField; // 0x14

		::System::Void _ctor(::RPG::GameCore::RogueAdventureGameplayType type, ::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueAdventureGameplayType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREROOMHUDPARAMITEM__CTOR_OFFSET))(this, type, id);
		}

		::RPG::GameCore::RogueAdventureGameplayType get_Type()
		{
			return ((::RPG::GameCore::RogueAdventureGameplayType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREROOMHUDPARAMITEM_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::GameCore::RogueAdventureGameplayType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueAdventureGameplayType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREROOMHUDPARAMITEM_SET_TYPE_OFFSET))(this, value);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREROOMHUDPARAMITEM_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREROOMHUDPARAMITEM_SET_GROUPID_OFFSET))(this, value);
		}
	};
}
