#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GACHASHOWTOASTDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18B7D250)
#define RPG_GAMECORE_GACHASHOWTOASTDATAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18B7D9D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GachaShowToastDataRow_TypeDefinitionIndex = 12643;

	class GachaShowToastDataRow : public ::System::Object
	{
	public:
		::System::String* LoopBGMState; // 0x10
		::System::UInt32 LoopVideoID; // 0x18
		::System::UInt32 GachaID; // 0x1C
		::RPG::Client::TextID AvatarShowTitle; // 0x20
		::System::Single LoopBGMOpenTime; // 0x30
		::System::Single LoopUIOpenTime; // 0x34
		::System::UInt32 ShowVideoID; // 0x38
		::System::UInt32 TransitionVideoID; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHASHOWTOASTDATAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GachaShowToastDataRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GachaShowToastDataRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHASHOWTOASTDATAROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
