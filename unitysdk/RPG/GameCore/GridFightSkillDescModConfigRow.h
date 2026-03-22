#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightSkillType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTSKILLDESCMODCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16B4A0B0)
#define RPG_GAMECORE_GRIDFIGHTSKILLDESCMODCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16B4A310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightSkillDescModConfigRow_TypeDefinitionIndex = 12321;

	class GridFightSkillDescModConfigRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID ModifySkillSimpleDesc; // 0x10
		::System::UInt32 ModifySkillID; // 0x20
		::RPG::GameCore::GridFightSkillType ModifySkillType; // 0x24
		::RPG::Client::TextID ModifySkillDesc; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSKILLDESCMODCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightSkillDescModConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightSkillDescModConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSKILLDESCMODCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
