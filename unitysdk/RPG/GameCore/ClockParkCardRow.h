#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ClockParkCardTipsTypeEnum.h"
#include "unitysdk/RPG/GameCore/ClockParkCardType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CLOCKPARKCARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x169A8210)
#define RPG_GAMECORE_CLOCKPARKCARDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x169A86F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkCardRow_TypeDefinitionIndex = 10380;

	class ClockParkCardRow : public ::System::Object
	{
	public:
		::System::String* ImgPath; // 0x10
		::System::String* ForeImgPath; // 0x18
		::Il2CppArray<::System::UInt32>* CardActionList; // 0x20
		::Il2CppArray<::System::UInt32>* CardConflictTagList; // 0x28
		::System::UInt32 CardTipsParam; // 0x30
		::RPG::Client::TextID CardDesc; // 0x38
		::System::UInt32 Priority; // 0x48
		::System::UInt32 CardDiceNum; // 0x4C
		::System::UInt32 CardID; // 0x50
		::RPG::GameCore::ClockParkCardTipsTypeEnum CardTips; // 0x54
		::RPG::GameCore::ClockParkCardType CardType; // 0x58
		::System::UInt32 CardOriginalParam; // 0x5C
		::RPG::Client::TextID CardTag; // 0x60

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
