#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BadgeChallengeType.h"
#include "unitysdk/RPG/GameCore/BadgeType.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_B90130297D7470CE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FE5E60)
#define STRUCT_2_B90130297D7470CE_GET_BADGETYPE_OFFSET UNITYSDK_OFFSET(0x608310)
#define STRUCT_2_B90130297D7470CE_GET_CHALLENGETYPE_OFFSET UNITYSDK_OFFSET(0x608A20)
#define STRUCT_2_B90130297D7470CE_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x608600)
#define STRUCT_2_B90130297D7470CE_SET_BADGETYPE_OFFSET UNITYSDK_OFFSET(0x1C9FE90)
#define STRUCT_2_B90130297D7470CE_SET_CHALLENGETYPE_OFFSET UNITYSDK_OFFSET(0x6326D0)
#define STRUCT_2_B90130297D7470CE_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x878E70)

inline static constexpr unsigned int Struct_2_B90130297D7470CE_TypeDefinitionIndex = 69035;

struct alignas(4) Struct_2_B90130297D7470CE
{
	::RPG::GameCore::BadgeChallengeType _ChallengeType_k__BackingField; // 0x10
	::System::UInt32 _GroupID_k__BackingField; // 0x14
	::RPG::GameCore::BadgeType _BadgeType_k__BackingField; // 0x18

	::RPG::GameCore::BadgeChallengeType get_ChallengeType()
	{
		return ((::RPG::GameCore::BadgeChallengeType(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B90130297D7470CE_GET_CHALLENGETYPE_OFFSET))(this);
	}

	::System::Void set_ChallengeType(::RPG::GameCore::BadgeChallengeType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BadgeChallengeType))((::PBYTE)hIl2Cpp + STRUCT_2_B90130297D7470CE_SET_CHALLENGETYPE_OFFSET))(this, value);
	}

	::System::UInt32 get_GroupID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B90130297D7470CE_GET_GROUPID_OFFSET))(this);
	}

	::System::Void set_GroupID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_B90130297D7470CE_SET_GROUPID_OFFSET))(this, value);
	}

	::RPG::GameCore::BadgeType get_BadgeType()
	{
		return ((::RPG::GameCore::BadgeType(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B90130297D7470CE_GET_BADGETYPE_OFFSET))(this);
	}

	::System::Void set_BadgeType(::RPG::GameCore::BadgeType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BadgeType))((::PBYTE)hIl2Cpp + STRUCT_2_B90130297D7470CE_SET_BADGETYPE_OFFSET))(this, value);
	}

	::System::Boolean Equals(::Struct_2_B90130297D7470CE a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_B90130297D7470CE))((::PBYTE)hIl2Cpp + STRUCT_2_B90130297D7470CE_EQUALS_OFFSET))(this, a1);
	}
};
