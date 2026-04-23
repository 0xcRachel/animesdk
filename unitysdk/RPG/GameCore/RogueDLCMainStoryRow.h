#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChessRogueMainStoryToastType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUEDLCMAINSTORYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1925F990)
#define RPG_GAMECORE_ROGUEDLCMAINSTORYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x192615A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCMainStoryRow_TypeDefinitionIndex = 13994;

	class RogueDLCMainStoryRow : public ::System::Object
	{
	public:
		::System::String* MainStoryButtonIcon; // 0x10
		::System::UInt32 UnlockAeonDimension; // 0x18
		::RPG::GameCore::ChessRogueMainStoryToastType MainStoryToastType; // 0x1C
		::RPG::Client::TextID BonusToast; // 0x20
		::System::UInt32 MainStoryID; // 0x30
		::System::UInt32 Layer; // 0x34
		::RPG::Client::TextID MainStoryName; // 0x38
		::System::UInt32 UnlockPoint; // 0x48
		::System::Boolean IsBonusUnlock; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueDLCMainStoryRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLCMainStoryRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
