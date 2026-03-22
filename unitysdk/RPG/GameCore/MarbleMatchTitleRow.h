#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MarbleTitleCondition.h"
#include "unitysdk/RPG/GameCore/MarbleTitleValue.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEMATCHTITLEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16C42150)
#define RPG_GAMECORE_MARBLEMATCHTITLEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16C425E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleMatchTitleRow_TypeDefinitionIndex = 10847;

	class MarbleMatchTitleRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* Param; // 0x10
		::System::Int32 Quality; // 0x18
		::System::Int32 Priority; // 0x1C
		::RPG::GameCore::MarbleTitleCondition Condition; // 0x20
		::System::UInt32 ID; // 0x24
		::RPG::Client::TextID Desc; // 0x28
		::RPG::GameCore::MarbleTitleValue ValueType; // 0x38
		::RPG::Client::TextID Name; // 0x40
		::System::Int32 PVPScore; // 0x50
		::System::Int32 CompareValue; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMATCHTITLEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MarbleMatchTitleRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleMatchTitleRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMATCHTITLEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
