#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ELATIONSKILLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16A5D800)
#define RPG_GAMECORE_ELATIONSKILLROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16A5DD70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElationSkillRow_TypeDefinitionIndex = 11994;

	class ElationSkillRow : public ::System::Object
	{
	public:
		::System::Int32 PriorityValue; // 0x10
		::System::UInt32 ElationSkillID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONSKILLROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ElationSkillRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElationSkillRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELATIONSKILLROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
