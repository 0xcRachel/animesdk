#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_A88C3AAF0DD46F4C_9;
namespace System { class String; }

#define RPG_GAMECORE_MAZEPUZZLESWITCHHANDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x173DED60)
#define RPG_GAMECORE_MAZEPUZZLESWITCHHANDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x173DF1E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazePuzzleSwitchHandRow_TypeDefinitionIndex = 12883;

	class MazePuzzleSwitchHandRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ChestID; // 0x10
		::Il2CppArray<::System::UInt32>* SwitchHandID; // 0x18
		::Il2CppArray<::System::UInt32>* GroupIDList; // 0x20
		::Il2CppArray<::Class_1_A88C3AAF0DD46F4C_9*>* CoinPropID; // 0x28
		::System::String* ColliderPath; // 0x30
		::Il2CppArray<::Class_1_A88C3AAF0DD46F4C_9*>* ControllerListID; // 0x38
		::System::UInt32 FloorID; // 0x40
		::System::UInt32 PlaneID; // 0x44
		::System::Boolean BanRocketPunch; // 0x48
		::System::Boolean IsRaid; // 0x49
		::System::Boolean BanJoyStick; // 0x4A
		::System::UInt32 SwitchID; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLESWITCHHANDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MazePuzzleSwitchHandRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MazePuzzleSwitchHandRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLESWITCHHANDROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
