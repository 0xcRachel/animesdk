#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DialogueConditionType.h"
#include "unitysdk/RPG/GameCore/SubMissionState.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DIALOGUECONDITIONROW_COMPAREITEMSTATE_OFFSET UNITYSDK_OFFSET(0x169F0970)
#define RPG_GAMECORE_DIALOGUECONDITIONROW_COMPAREMISSIONSTATE_OFFSET UNITYSDK_OFFSET(0x169F0940)
#define RPG_GAMECORE_DIALOGUECONDITIONROW_COMPAREPRESTIGESTATE_OFFSET UNITYSDK_OFFSET(0x169F0990)
#define RPG_GAMECORE_DIALOGUECONDITIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x169F0780)
#define RPG_GAMECORE_DIALOGUECONDITIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x169F0930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DialogueConditionRow_TypeDefinitionIndex = 11909;

	class DialogueConditionRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::RPG::GameCore::DialogueConditionType Type; // 0x14
		::System::UInt32 Param2; // 0x18
		::System::UInt32 Param1; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUECONDITIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::DialogueConditionRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DialogueConditionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUECONDITIONROW_FROMBINARY_OFFSET))(array, val);
		}

		::System::Boolean CompareMissionState(::RPG::GameCore::SubMissionState state, ::System::UInt32 comapreParam)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::SubMissionState, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUECONDITIONROW_COMPAREMISSIONSTATE_OFFSET))(this, state, comapreParam);
		}

		::System::Boolean CompareItemState(::System::UInt32 itemCount, ::System::UInt32 param2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUECONDITIONROW_COMPAREITEMSTATE_OFFSET))(this, itemCount, param2);
		}

		::System::Boolean ComparePrestigeState(::System::UInt32 prestigelevel, ::System::UInt32 param2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUECONDITIONROW_COMPAREPRESTIGESTATE_OFFSET))(this, prestigelevel, param2);
		}
	};
}
