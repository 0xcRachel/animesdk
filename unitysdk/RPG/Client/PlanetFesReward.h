#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Numerics/BigInteger.h"
#include "unitysdk/System/Object.h"

class Class_1_47B94336A47C7483;
namespace RPG::Client { class ItemDisplayData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLANETFESREWARD_CREATE_1_OFFSET UNITYSDK_OFFSET(0x17DC3D70)
#define RPG_CLIENT_PLANETFESREWARD_CREATE_OFFSET UNITYSDK_OFFSET(0x17DC3910)
#define RPG_CLIENT_PLANETFESREWARD__CTOR_OFFSET UNITYSDK_OFFSET(0x17DC3900)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesReward_TypeDefinitionIndex = 61382;

	class PlanetFesReward : public ::System::Object
	{
	public:
		::System::Numerics::BigInteger Coin; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* Items; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESREWARD__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PlanetFesReward* Create(::Class_1_47B94336A47C7483* rwd)
		{
			return ((::RPG::Client::PlanetFesReward*(*)(::Class_1_47B94336A47C7483*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESREWARD_CREATE_OFFSET))(rwd);
		}

		static ::RPG::Client::PlanetFesReward* Create_1(::System::UInt32 rewardID)
		{
			return ((::RPG::Client::PlanetFesReward*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESREWARD_CREATE_1_OFFSET))(rewardID);
		}
	};
}
