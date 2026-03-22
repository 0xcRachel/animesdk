#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DECIDEAVATARORDERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x169E9140)
#define RPG_GAMECORE_DECIDEAVATARORDERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x169E9730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DecideAvatarOrderRow_TypeDefinitionIndex = 12136;

	class DecideAvatarOrderRow : public ::System::Object
	{
	public:
		::System::Int32 Order; // 0x10
		::System::UInt32 ItemID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECIDEAVATARORDERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::DecideAvatarOrderRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DecideAvatarOrderRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DECIDEAVATARORDERROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
