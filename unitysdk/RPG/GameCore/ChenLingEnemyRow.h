#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CHENLINGENEMYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x196A7490)
#define RPG_GAMECORE_CHENLINGENEMYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x196A7990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingEnemyRow_TypeDefinitionIndex = 10603;

	class ChenLingEnemyRow : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* EnchantList; // 0x10
		::RPG::GameCore::FixPoint AtkSpdRatio; // 0x18
		::System::Boolean IsPromotion; // 0x20
		::System::UInt32 ID; // 0x24
		::RPG::GameCore::FixPoint AtkRatio; // 0x28
		::System::UInt32 Level; // 0x30
		::System::UInt32 SoldierID; // 0x34
		::System::UInt32 GridIndex; // 0x38
		::RPG::GameCore::FixPoint CrtDMGRatio; // 0x40
		::RPG::GameCore::FixPoint HpRatio; // 0x48
		::RPG::GameCore::FixPoint CrtRatio; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGENEMYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ChenLingEnemyRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingEnemyRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGENEMYROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
