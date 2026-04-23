#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ClockParkCardTipsTypeEnum.h"
#include "unitysdk/RPG/GameCore/ClockParkCardType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CLOCKPARKCARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x194D7E70)
#define RPG_GAMECORE_CLOCKPARKCARDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x194D8350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkCardRow_TypeDefinitionIndex = 10674;

	class ClockParkCardRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* CardConflictTagList; // 0x10
		::System::String* ForeImgPath; // 0x18
		::System::String* ImgPath; // 0x20
		::Il2CppArray<::System::UInt32>* CardActionList; // 0x28
		::RPG::Client::TextID CardTag; // 0x30
		::System::UInt32 CardDiceNum; // 0x40
		::System::UInt32 CardTipsParam; // 0x44
		::RPG::GameCore::ClockParkCardType CardType; // 0x48
		::RPG::Client::TextID CardDesc; // 0x50
		::RPG::GameCore::ClockParkCardTipsTypeEnum CardTips; // 0x60
		::System::UInt32 CardOriginalParam; // 0x64
		::System::UInt32 CardID; // 0x68
		::System::UInt32 Priority; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCARDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ClockParkCardRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClockParkCardRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCARDROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
