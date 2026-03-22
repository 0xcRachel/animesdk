#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUEBUFFTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16E1DD30)
#define RPG_GAMECORE_ROGUEBUFFTYPEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16E1E560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueBuffTypeRow_TypeDefinitionIndex = 13385;

	class RogueBuffTypeRow : public ::System::Object
	{
	public:
		::System::String* RogueBuffTypeIcon; // 0x10
		::Il2CppArray<::System::UInt32>* RugueBuffTypeRewardQuestList; // 0x18
		::System::UInt32 RogueBuffDisplayGod; // 0x20
		::System::UInt32 RogueBuffType; // 0x24
		::RPG::Client::TextID HintDesc; // 0x28
		::RPG::Client::TextID RogueBuffTypeTitle; // 0x38
		::RPG::Client::TextID RogueBuffTypeTextmapID; // 0x48
		::RPG::Client::TextID RogueBuffTypeSubTitle; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBUFFTYPEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueBuffTypeRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueBuffTypeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBUFFTYPEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
