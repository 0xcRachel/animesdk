#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TEXTJOINITEMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19480E30)
#define RPG_GAMECORE_TEXTJOINITEMROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19480F90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TextJoinItemRow_TypeDefinitionIndex = 14484;

	class TextJoinItemRow : public ::System::Object
	{
	public:
		::System::UInt32 TextJoinItemID; // 0x10
		::RPG::Client::TextID TextJoinText; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTJOINITEMROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TextJoinItemRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TextJoinItemRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEXTJOINITEMROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
