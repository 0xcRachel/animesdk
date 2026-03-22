#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TEAMBUILDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x170EA780)
#define RPG_GAMECORE_TEAMBUILDCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x170EAA50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamBuildConfigRow_TypeDefinitionIndex = 13882;

	class TeamBuildConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* BackupList1; // 0x10
		::Il2CppArray<::System::UInt32>* MemberList; // 0x18
		::Il2CppArray<::System::UInt32>* BackupList3; // 0x20
		::Il2CppArray<::System::UInt32>* BackupList2; // 0x28
		::System::UInt32 AvatarID; // 0x30
		::System::UInt32 Position; // 0x34
		::System::UInt32 TeamID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMBUILDCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TeamBuildConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TeamBuildConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMBUILDCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
