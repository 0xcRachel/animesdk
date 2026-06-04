#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_IDLELIVEQUESTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19AD9B20)
#define RPG_GAMECORE_IDLELIVEQUESTIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19AD9DA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveQuestionRow_TypeDefinitionIndex = 11312;

	class IdleLiveQuestionRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Content; // 0x10
		::System::UInt32 Option2; // 0x20
		::System::UInt32 ID; // 0x24
		::System::UInt32 SenderID; // 0x28
		::System::UInt32 Option1; // 0x2C
		::System::Single Duration; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEQUESTIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IdleLiveQuestionRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveQuestionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEQUESTIONROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
