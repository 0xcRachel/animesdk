#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelNPCInfoOverrideIdleAnim; }
namespace RPG::GameCore { class LevelNPCInfoOverrideLocation; }
namespace RPG::GameCore { class LevelNPCInfoOverrideRotationY; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELNPCINFOOVERRIDE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16BAF430)
#define RPG_GAMECORE_LEVELNPCINFOOVERRIDE_GET_GROUPANCHORID_OFFSET UNITYSDK_OFFSET(0x16BAF920)
#define RPG_GAMECORE_LEVELNPCINFOOVERRIDE_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x16BAF8E0)
#define RPG_GAMECORE_LEVELNPCINFOOVERRIDE_GET_GROUPNPCID_OFFSET UNITYSDK_OFFSET(0x16BAF900)
#define RPG_GAMECORE_LEVELNPCINFOOVERRIDE_SETANCHORID_OFFSET UNITYSDK_OFFSET(0x16BAF950)
#define RPG_GAMECORE_LEVELNPCINFOOVERRIDE_SETGROUPANDNPCID_OFFSET UNITYSDK_OFFSET(0x16BAF940)
#define RPG_GAMECORE_LEVELNPCINFOOVERRIDE_SETIDLEANIMATION_OFFSET UNITYSDK_OFFSET(0x16BAF9B0)
#define RPG_GAMECORE_LEVELNPCINFOOVERRIDE_SETROTATION_OFFSET UNITYSDK_OFFSET(0x16BAF960)
#define RPG_GAMECORE_LEVELNPCINFOOVERRIDE_SET_GROUPANCHORID_OFFSET UNITYSDK_OFFSET(0x16BAF930)
#define RPG_GAMECORE_LEVELNPCINFOOVERRIDE_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x16BAF8F0)
#define RPG_GAMECORE_LEVELNPCINFOOVERRIDE_SET_GROUPNPCID_OFFSET UNITYSDK_OFFSET(0x16BAF910)
#define RPG_GAMECORE_LEVELNPCINFOOVERRIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x16BAF510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNPCInfoOverride_TypeDefinitionIndex = 15667;

	class LevelNPCInfoOverride : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::LevelNPCInfoOverrideRotationY* RotationYInfo; // 0x10
		::RPG::GameCore::LevelNPCInfoOverrideLocation* LocationInfo; // 0x18
		::RPG::GameCore::LevelNPCInfoOverrideIdleAnim* IdleAnimInfo; // 0x20
		::System::String* ConfigEntityPath; // 0x28
		::System::String* BlendShapeConfigName; // 0x30
		::System::UInt32 _GroupID_k__BackingField; // 0x38
		::System::UInt32 _GroupNPCID_k__BackingField; // 0x3C
		::System::UInt32 _GroupAnchorID_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCINFOOVERRIDE__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelNPCInfoOverride*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelNPCInfoOverride*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCINFOOVERRIDE_FROMBINARY_OFFSET))(array, val);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCINFOOVERRIDE_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCINFOOVERRIDE_SET_GROUPID_OFFSET))(this, value);
		}

		::System::UInt32 get_GroupNPCID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCINFOOVERRIDE_GET_GROUPNPCID_OFFSET))(this);
		}

		::System::Void set_GroupNPCID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCINFOOVERRIDE_SET_GROUPNPCID_OFFSET))(this, value);
		}

		::System::UInt32 get_GroupAnchorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCINFOOVERRIDE_GET_GROUPANCHORID_OFFSET))(this);
		}

		::System::Void set_GroupAnchorID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCINFOOVERRIDE_SET_GROUPANCHORID_OFFSET))(this, value);
		}

		::System::Void SetGroupAndNPCID(::System::UInt32 groupID, ::System::UInt32 groupNPCID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCINFOOVERRIDE_SETGROUPANDNPCID_OFFSET))(this, groupID, groupNPCID);
		}

		::System::Void SetAnchorID(::System::UInt32 anchorID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCINFOOVERRIDE_SETANCHORID_OFFSET))(this, anchorID);
		}

		::System::Void SetRotation(::System::Single rotationY)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCINFOOVERRIDE_SETROTATION_OFFSET))(this, rotationY);
		}

		::System::Void SetIdleAnimation(::System::UInt32 freeStyleMotionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCINFOOVERRIDE_SETIDLEANIMATION_OFFSET))(this, freeStyleMotionID);
		}
	};
}
