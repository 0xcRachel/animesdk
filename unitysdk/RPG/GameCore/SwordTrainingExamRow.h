#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SWORDTRAININGEXAMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x177B1A80)
#define RPG_GAMECORE_SWORDTRAININGEXAMROW__CTOR_OFFSET UNITYSDK_OFFSET(0x177B1F00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingExamRow_TypeDefinitionIndex = 11375;

	class SwordTrainingExamRow : public ::System::Object
	{
	public:
		::System::String* EnemyImage; // 0x10
		::Il2CppArray<::System::UInt32>* ExcellentCommentList; // 0x18
		::Il2CppArray<::System::UInt32>* NormalCommentList; // 0x20
		::Il2CppArray<::System::UInt32>* SuccessPerformID; // 0x28
		::RPG::Client::TextID EnemyName; // 0x30
		::System::Boolean IsLastExam; // 0x40
		::System::UInt32 StageID; // 0x44
		::System::UInt32 FailPerformID; // 0x48
		::System::UInt32 ExamID; // 0x4C
		::System::UInt32 PrePerformID; // 0x50
		::System::UInt32 BattleAreaID; // 0x54
		::System::UInt32 EnemyPower; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGEXAMROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::SwordTrainingExamRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwordTrainingExamRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGEXAMROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
