#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/QuestFinishType.h"
#include "unitysdk/RPG/GameCore/QuestParaType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }

#define RPG_GAMECORE_FINISHWAYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16AA7F70)
#define RPG_GAMECORE_FINISHWAYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16AA8FB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FinishWayRow_TypeDefinitionIndex = 13229;

	class FinishWayRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* ParamItemList; // 0x10
		::System::String* ParamStr1; // 0x18
		::Il2CppArray<::System::UInt32>* ParamIntList; // 0x20
		::System::UInt32 ParamInt1; // 0x28
		::System::UInt32 MazeFloorID; // 0x2C
		::System::UInt32 ParamInt2; // 0x30
		::System::UInt32 MazePlaneID; // 0x34
		::System::UInt32 Progress; // 0x38
		::System::UInt32 ID; // 0x3C
		::RPG::GameCore::QuestFinishType FinishType; // 0x40
		::System::UInt32 MazeDimensionID; // 0x44
		::System::Boolean IsBackTrack; // 0x48
		::System::UInt32 ParamInt3; // 0x4C
		::RPG::GameCore::QuestParaType ParamType; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHWAYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::FinishWayRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FinishWayRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINISHWAYROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
