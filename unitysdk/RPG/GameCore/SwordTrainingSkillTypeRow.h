#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SWORDTRAININGSKILLTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16FC0B30)
#define RPG_GAMECORE_SWORDTRAININGSKILLTYPEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16FC0E90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingSkillTypeRow_TypeDefinitionIndex = 11301;

	class SwordTrainingSkillTypeRow : public ::System::Object
	{
	public:
		::System::String* SkillTypeIcon; // 0x10
		::System::UInt32 SkillTypeID; // 0x18
		::System::UInt32 StatusID; // 0x1C
		::System::UInt32 UnlockID; // 0x20
		::RPG::Client::TextID SkillTypeDesc; // 0x28
		::RPG::Client::TextID SkillTypeTag; // 0x38
		::RPG::Client::TextID SkillTypeName; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSKILLTYPEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::SwordTrainingSkillTypeRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwordTrainingSkillTypeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSKILLTYPEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
