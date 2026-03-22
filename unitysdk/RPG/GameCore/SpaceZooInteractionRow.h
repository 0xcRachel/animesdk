#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SpaceZooInteractionCase.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicValue; }

#define RPG_GAMECORE_SPACEZOOINTERACTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F741A0)
#define RPG_GAMECORE_SPACEZOOINTERACTIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16F74430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpaceZooInteractionRow_TypeDefinitionIndex = 11240;

	class SpaceZooInteractionRow : public ::System::Object
	{
	public:
		::RPG::GameCore::DynamicValue* Param; // 0x10
		::System::UInt32 PerformanceID; // 0x18
		::System::UInt32 ID; // 0x1C
		::System::UInt32 RoomID; // 0x20
		::RPG::GameCore::SpaceZooInteractionCase Case; // 0x24
		::System::Int32 Priority; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOINTERACTIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::SpaceZooInteractionRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SpaceZooInteractionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOINTERACTIONROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
