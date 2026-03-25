#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MATCHTHREEOPPONENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x173C6ED0)
#define RPG_GAMECORE_MATCHTHREEOPPONENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x173C71B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeOpponentRow_TypeDefinitionIndex = 10936;

	class MatchThreeOpponentRow : public ::System::Object
	{
	public:
		::System::String* MapImagePath; // 0x10
		::System::String* ImagePath; // 0x18
		::System::String* IconPath; // 0x20
		::System::String* AIConfig; // 0x28
		::RPG::Client::TextID Nickname; // 0x30
		::System::UInt32 Level; // 0x40
		::System::UInt32 AILevel; // 0x44
		::System::UInt32 OpponentID; // 0x48

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
