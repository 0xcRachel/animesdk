#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_A88C3AAF0DD46F4C_11;

#define RPG_GAMECORE_ROGUETOURNHANDBOOKEVENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1767CCB0)
#define RPG_GAMECORE_ROGUETOURNHANDBOOKEVENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1767CFD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournHandBookEventRow_TypeDefinitionIndex = 13778;

	class RogueTournHandBookEventRow : public ::System::Object
	{
	public:
		::Il2CppArray<::Class_1_A88C3AAF0DD46F4C_11*>* UnlockNPCProgressIDList; // 0x10
		::System::UInt32 UnlockDisplayID; // 0x18
		::System::UInt32 EventHandbookID; // 0x1C
		::RPG::Client::TextID EventTitle; // 0x20
		::System::UInt32 ImageID; // 0x30
		::System::Boolean IsUsed; // 0x34
		::System::UInt32 TypeDisplayID; // 0x38
		::System::UInt32 Priority; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNHANDBOOKEVENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueTournHandBookEventRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournHandBookEventRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNHANDBOOKEVENTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
