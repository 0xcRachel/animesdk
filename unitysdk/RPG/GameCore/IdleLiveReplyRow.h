#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_IDLELIVEREPLYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x188853E0)
#define RPG_GAMECORE_IDLELIVEREPLYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18885560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveReplyRow_TypeDefinitionIndex = 11235;

	class IdleLiveReplyRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID OptionText; // 0x10
		::System::UInt32 ID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEREPLYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::IdleLiveReplyRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveReplyRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEREPLYROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
