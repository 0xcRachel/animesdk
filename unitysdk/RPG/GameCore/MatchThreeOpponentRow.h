#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MATCHTHREEOPPONENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16C614F0)
#define RPG_GAMECORE_MATCHTHREEOPPONENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16C617D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeOpponentRow_TypeDefinitionIndex = 10868;

	class MatchThreeOpponentRow : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10
		::System::String* AIConfig; // 0x18
		::System::String* IconPath; // 0x20
		::System::String* MapImagePath; // 0x28
		::System::UInt32 AILevel; // 0x30
		::System::UInt32 Level; // 0x34
		::System::UInt32 OpponentID; // 0x38
		::RPG::Client::TextID Nickname; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEOPPONENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MatchThreeOpponentRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MatchThreeOpponentRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEOPPONENTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
