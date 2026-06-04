#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BadgeChallengeType.h"
#include "unitysdk/RPG/GameCore/BadgeType.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_9143926C2C91FB11_EQUALS_OFFSET UNITYSDK_OFFSET(0x37D3920)
#define STRUCT_2_9143926C2C91FB11_GET_BADGETYPE_OFFSET UNITYSDK_OFFSET(0x66B8A0)
#define STRUCT_2_9143926C2C91FB11_GET_CHALLENGETYPE_OFFSET UNITYSDK_OFFSET(0x72BBF0)
#define STRUCT_2_9143926C2C91FB11_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x72B7E0)
#define STRUCT_2_9143926C2C91FB11_SET_BADGETYPE_OFFSET UNITYSDK_OFFSET(0x3723F90)
#define STRUCT_2_9143926C2C91FB11_SET_CHALLENGETYPE_OFFSET UNITYSDK_OFFSET(0xA18540)
#define STRUCT_2_9143926C2C91FB11_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0xFD2470)

inline static constexpr unsigned int Struct_2_9143926C2C91FB11_TypeDefinitionIndex = 69847;

struct alignas(4) Struct_2_9143926C2C91FB11
{
	::RPG::GameCore::BadgeChallengeType _ChallengeType_k__BackingField; // 0x10
	::System::UInt32 _GroupID_k__BackingField; // 0x14
	::RPG::GameCore::BadgeType _BadgeType_k__BackingField; // 0x18

	::RPG::GameCore::BadgeChallengeType get_ChallengeType()
	{
		return ((::RPG::GameCore::BadgeChallengeType(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9143926C2C91FB11_GET_CHALLENGETYPE_OFFSET))(this);
	}

	::System::Void set_ChallengeType(::RPG::GameCore::BadgeChallengeType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BadgeChallengeType))((::PBYTE)hIl2Cpp + STRUCT_2_9143926C2C91FB11_SET_CHALLENGETYPE_OFFSET))(this, a1);
	}

	::System::UInt32 get_GroupID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9143926C2C91FB11_GET_GROUPID_OFFSET))(this);
	}

	::System::Void set_GroupID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_9143926C2C91FB11_SET_GROUPID_OFFSET))(this, a1);
	}

	::RPG::GameCore::BadgeType get_BadgeType()
	{
		return ((::RPG::GameCore::BadgeType(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_9143926C2C91FB11_GET_BADGETYPE_OFFSET))(this);
	}

	::System::Void set_BadgeType(::RPG::GameCore::BadgeType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BadgeType))((::PBYTE)hIl2Cpp + STRUCT_2_9143926C2C91FB11_SET_BADGETYPE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::Struct_2_9143926C2C91FB11 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_9143926C2C91FB11))((::PBYTE)hIl2Cpp + STRUCT_2_9143926C2C91FB11_EQUALS_OFFSET))(this, a1);
	}
};
