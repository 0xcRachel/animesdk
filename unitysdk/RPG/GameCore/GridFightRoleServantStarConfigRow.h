#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTROLESERVANTSTARCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16B45890)
#define RPG_GAMECORE_GRIDFIGHTROLESERVANTSTARCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16B45D60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightRoleServantStarConfigRow_TypeDefinitionIndex = 12280;

	class GridFightRoleServantStarConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* SkillOverrideSrc; // 0x10
		::System::String* SpeedInherit; // 0x18
		::Il2CppArray<::System::UInt32>* ServantShowSkiilIDList; // 0x20
		::System::String* HPBase; // 0x28
		::System::String* HPInherit; // 0x30
		::Il2CppArray<::System::UInt32>* SkillOverrideDest; // 0x38
		::System::String* JsonOverrideConfig; // 0x40
		::System::String* SpeedBase; // 0x48
		::System::UInt32 Star; // 0x50
		::System::UInt32 ID; // 0x54
		::RPG::GameCore::FixPoint Aggro; // 0x58
		::System::UInt32 HPSkill; // 0x60
		::System::UInt32 SpeedSkill; // 0x64
		::System::UInt32 ServantID; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLESERVANTSTARCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightRoleServantStarConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightRoleServantStarConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLESERVANTSTARCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
