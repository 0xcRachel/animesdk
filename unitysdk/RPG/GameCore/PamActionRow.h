#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PamActionType.h"
#include "unitysdk/RPG/GameCore/PamMoodType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PAMACTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16D14180)
#define RPG_GAMECORE_PAMACTIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16D14640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PamActionRow_TypeDefinitionIndex = 13028;

	class PamActionRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* Settle; // 0x10
		::System::String* AnimGroupName; // 0x18
		::System::Boolean AnyDirection; // 0x20
		::System::Boolean WithoutAnchor; // 0x21
		::System::Single Weight; // 0x24
		::System::Int32 MaxMoodPoint; // 0x28
		::System::Int32 MinMoodPoint; // 0x2C
		::System::Int32 MinStrengthPoint; // 0x30
		::System::UInt32 PerformanceID; // 0x34
		::RPG::GameCore::PamMoodType PamMood; // 0x38
		::System::Int32 MaxStrengthPoint; // 0x3C
		::RPG::GameCore::PamActionType PamAction; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAMACTIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PamActionRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PamActionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAMACTIONROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
