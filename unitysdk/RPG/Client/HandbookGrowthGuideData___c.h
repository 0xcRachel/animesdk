#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9486200)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9486240)
#define RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA___C___INITROGUETOURNRELICSETIDTOGUIDEDATAMAP_B__28_0_OFFSET UNITYSDK_OFFSET(0x9486250)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookGrowthGuideData___c_TypeDefinitionIndex = 52145;

	class HandbookGrowthGuideData___c : public ::System::Object
	{
	public:
		static ::RPG::Client::HandbookGrowthGuideData___c** StaticGet___9()
		{
			return (::RPG::Client::HandbookGrowthGuideData___c**)Il2CppClass::FromTypeDefinitionIndex(HandbookGrowthGuideData___c_TypeDefinitionIndex)->GetStaticField(0xB9D0);
		}
		static ::System::Comparison_1<::System::UInt32>** StaticGet___9__28_0()
		{
			return (::System::Comparison_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(HandbookGrowthGuideData___c_TypeDefinitionIndex)->GetStaticField(0xB9D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __InitRogueTournRelicSetIDToGuideDataMap_b__28_0(::System::UInt32 a, ::System::UInt32 b)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGROWTHGUIDEDATA___C___INITROGUETOURNRELICSETIDTOGUIDEDATAMAP_B__28_0_OFFSET))(this, a, b);
		}
	};
}
