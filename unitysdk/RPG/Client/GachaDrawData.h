#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GachaTokenData; }

#define RPG_CLIENT_GACHADRAWDATA_GETGOLDCOSTNUM_OFFSET UNITYSDK_OFFSET(0x15507FF0)
#define RPG_CLIENT_GACHADRAWDATA_GETTOKENCOSTNUM_OFFSET UNITYSDK_OFFSET(0x15508050)
#define RPG_CLIENT_GACHADRAWDATA_HAVEDISCOUNT_OFFSET UNITYSDK_OFFSET(0x155080A0)
#define RPG_CLIENT_GACHADRAWDATA_SETTOKENPRICE_OFFSET UNITYSDK_OFFSET(0x15507F90)
#define RPG_CLIENT_GACHADRAWDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x15507E50)

namespace RPG::Client
{
	inline static constexpr unsigned int GachaDrawData_TypeDefinitionIndex = 59157;

	class GachaDrawData : public ::System::Object
	{
	public:
		// static const ::System::Int32 _DEFALUT_DRAW_TIME = 0x1; // 0x0
		// static const ::System::Single _DEFAULT_TOKEN_COST_PER_DRAW; // 0x0
		::RPG::Client::GachaTokenData* _GachaTokenData; // 0x10
		::System::Single TokenCostNumPerDraw; // 0x18
		::System::Boolean Active; // 0x1C
		::System::Int32 DrawTime; // 0x20

		::System::Void _ctor(::System::UInt32 itemID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHADRAWDATA__CTOR_OFFSET))(this, itemID);
		}

		::System::Void SetTokenPrice(::System::UInt32 price)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHADRAWDATA_SETTOKENPRICE_OFFSET))(this, price);
		}

		::System::Int32 GetGoldCostNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHADRAWDATA_GETGOLDCOSTNUM_OFFSET))(this);
		}

		::System::Int32 GetTokenCostNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHADRAWDATA_GETTOKENCOSTNUM_OFFSET))(this);
		}

		::System::Boolean HaveDiscount()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHADRAWDATA_HAVEDISCOUNT_OFFSET))(this);
		}
	};
}
