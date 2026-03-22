#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_ROGUETALKOPTIONDATAEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x9E4D1F0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTalkOptionDataExt_TypeDefinitionIndex = 53981;

	class RogueTalkOptionDataExt : public ::System::Object
	{
	public:
		::System::String* DynamicDisplay2; // 0x10
		::System::String* TextParam; // 0x18
		::System::Int32 DescCostParam; // 0x20
		::System::UInt32 DisplayID; // 0x24
		::System::UInt32 RogueOptionID; // 0x28
		::System::Int32 DescParam2; // 0x2C
		::System::Int32 DescIntParam; // 0x30
		::System::Int32 DescParam3; // 0x34
		::System::Boolean HasEffectNousValueChange; // 0x38
		::System::Single DescRatioParam; // 0x3C
		::System::UInt32 SpecialOptionID; // 0x40
		::System::Int32 DescParam4; // 0x44
		::System::Int32 EffectNousValueChangeDelta; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETALKOPTIONDATAEXT__CTOR_OFFSET))(this);
		}
	};
}
