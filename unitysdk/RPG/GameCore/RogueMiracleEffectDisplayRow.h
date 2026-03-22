#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMIRACLEEFFECTDISPLAYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16E8EC60)
#define RPG_GAMECORE_ROGUEMIRACLEEFFECTDISPLAYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16E8EF10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMiracleEffectDisplayRow_TypeDefinitionIndex = 13352;

	class RogueMiracleEffectDisplayRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ExtraEffect; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* DescParamList; // 0x18
		::System::UInt32 MiracleEffectDisplayID; // 0x20
		::RPG::Client::TextID MiracleSimpleDesc; // 0x28
		::RPG::Client::TextID MiracleDesc; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMIRACLEEFFECTDISPLAYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueMiracleEffectDisplayRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMiracleEffectDisplayRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMIRACLEEFFECTDISPLAYROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
