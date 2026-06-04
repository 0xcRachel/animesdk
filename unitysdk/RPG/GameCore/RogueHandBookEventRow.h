#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_A88C3AAF0DD46F4C_12;

#define RPG_GAMECORE_ROGUEHANDBOOKEVENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19EBB650)
#define RPG_GAMECORE_ROGUEHANDBOOKEVENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19EBBA30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueHandBookEventRow_TypeDefinitionIndex = 14098;

	class RogueHandBookEventRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* EventTypeList; // 0x10
		::Il2CppArray<::Class_1_A88C3AAF0DD46F4C_12*>* UnlockNPCProgressIDList; // 0x18
		::System::UInt32 Order; // 0x20
		::System::UInt32 EventHandbookID; // 0x24
		::RPG::Client::TextID EventTitle; // 0x28
		::System::UInt32 ImageID; // 0x38
		::System::UInt32 EventReward; // 0x3C
		::RPG::Client::TextID UnlockHintDesc; // 0x40
		::RPG::Client::TextID EventType; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEHANDBOOKEVENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueHandBookEventRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueHandBookEventRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEHANDBOOKEVENTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
