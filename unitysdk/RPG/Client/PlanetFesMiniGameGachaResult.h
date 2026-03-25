#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Numerics/BigInteger.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlanetFesModule; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLANETFESMINIGAMEGACHARESULT_CREATEFAKEBIGRATIOREWARD_OFFSET UNITYSDK_OFFSET(0x9FAD000)
#define RPG_CLIENT_PLANETFESMINIGAMEGACHARESULT_CREATEFAKEBIGREWARD_OFFSET UNITYSDK_OFFSET(0x9FACEE0)
#define RPG_CLIENT_PLANETFESMINIGAMEGACHARESULT_CREATEFAKENORMALREWARD_OFFSET UNITYSDK_OFFSET(0x9FACCA0)
#define RPG_CLIENT_PLANETFESMINIGAMEGACHARESULT_CREATEFAKERATIOREWARD_OFFSET UNITYSDK_OFFSET(0x9FACDC0)
#define RPG_CLIENT_PLANETFESMINIGAMEGACHARESULT_CREATE_OFFSET UNITYSDK_OFFSET(0x9FACBE0)
#define RPG_CLIENT_PLANETFESMINIGAMEGACHARESULT_GETISBIGREWARD_OFFSET UNITYSDK_OFFSET(0x9FAD120)
#define RPG_CLIENT_PLANETFESMINIGAMEGACHARESULT_GET_COINITEMID_OFFSET UNITYSDK_OFFSET(0x9FAD670)
#define RPG_CLIENT_PLANETFESMINIGAMEGACHARESULT_GET_COINNUM_OFFSET UNITYSDK_OFFSET(0x9FAD1E0)
#define RPG_CLIENT_PLANETFESMINIGAMEGACHARESULT_GET_COINSTRING_OFFSET UNITYSDK_OFFSET(0x9FAD240)
#define RPG_CLIENT_PLANETFESMINIGAMEGACHARESULT_GET_DIAMONDICON_OFFSET UNITYSDK_OFFSET(0x9FAD540)
#define RPG_CLIENT_PLANETFESMINIGAMEGACHARESULT_GET_DIAMONDITEMID_OFFSET UNITYSDK_OFFSET(0x9FAD480)
#define RPG_CLIENT_PLANETFESMINIGAMEGACHARESULT_GET_DIAMONDNUM_OFFSET UNITYSDK_OFFSET(0x9FAD1C0)
#define RPG_CLIENT_PLANETFESMINIGAMEGACHARESULT_GET_GOLDICON_OFFSET UNITYSDK_OFFSET(0x9FAD6D0)
#define RPG_CLIENT_PLANETFESMINIGAMEGACHARESULT_GET_ORIGINCOINNUM_OFFSET UNITYSDK_OFFSET(0x9FAD2C0)
#define RPG_CLIENT_PLANETFESMINIGAMEGACHARESULT_GET_ORIGINCOINSTRING_OFFSET UNITYSDK_OFFSET(0x9FAD3B0)
#define RPG_CLIENT_PLANETFESMINIGAMEGACHARESULT_GET_ORIGINDIAMONDNUM_OFFSET UNITYSDK_OFFSET(0x9FAD430)
#define RPG_CLIENT_PLANETFESMINIGAMEGACHARESULT_GET_RATIO_OFFSET UNITYSDK_OFFSET(0x9FAD220)
#define RPG_CLIENT_PLANETFESMINIGAMEGACHARESULT_GET_ROLLIDS_OFFSET UNITYSDK_OFFSET(0x9FAD200)
#define RPG_CLIENT_PLANETFESMINIGAMEGACHARESULT_GET__MODULE_OFFSET UNITYSDK_OFFSET(0x9FAD4E0)
#define RPG_CLIENT_PLANETFESMINIGAMEGACHARESULT_SET_COINNUM_OFFSET UNITYSDK_OFFSET(0x9FAD1F0)
#define RPG_CLIENT_PLANETFESMINIGAMEGACHARESULT_SET_DIAMONDNUM_OFFSET UNITYSDK_OFFSET(0x9FAD1D0)
#define RPG_CLIENT_PLANETFESMINIGAMEGACHARESULT_SET_RATIO_OFFSET UNITYSDK_OFFSET(0x9FAD230)
#define RPG_CLIENT_PLANETFESMINIGAMEGACHARESULT_SET_ROLLIDS_OFFSET UNITYSDK_OFFSET(0x9FAD210)
#define RPG_CLIENT_PLANETFESMINIGAMEGACHARESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x9FACC90)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesMiniGameGachaResult_TypeDefinitionIndex = 54207;

	class PlanetFesMiniGameGachaResult : public ::System::Object
	{
	public:
		::System::Numerics::BigInteger _CoinNum_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _RollIDs_k__BackingField; // 0x20
		::System::UInt32 _DiamondNum_k__BackingField; // 0x28
		::System::UInt32 _Ratio_k__BackingField; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEGACHARESULT__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PlanetFesMiniGameGachaResult* Create(::System::Numerics::BigInteger coinNum, ::System::UInt32 diamondNum, ::System::Collections::Generic::List_1<::System::UInt32>* rollIDs, ::System::UInt32 ratio)
		{
			return ((::RPG::Client::PlanetFesMiniGameGachaResult*(*)(::System::Numerics::BigInteger, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEGACHARESULT_CREATE_OFFSET))(coinNum, diamondNum, rollIDs, ratio);
		}

		static ::RPG::Client::PlanetFesMiniGameGachaResult* CreateFakeNormalReward()
		{
			return ((::RPG::Client::PlanetFesMiniGameGachaResult*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEGACHARESULT_CREATEFAKENORMALREWARD_OFFSET))();
		}

		static ::RPG::Client::PlanetFesMiniGameGachaResult* CreateFakeRatioReward()
		{
			return ((::RPG::Client::PlanetFesMiniGameGachaResult*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEGACHARESULT_CREATEFAKERATIOREWARD_OFFSET))();
		}

		static ::RPG::Client::PlanetFesMiniGameGachaResult* CreateFakeBigReward()
		{
			return ((::RPG::Client::PlanetFesMiniGameGachaResult*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEGACHARESULT_CREATEFAKEBIGREWARD_OFFSET))();
		}

		static ::RPG::Client::PlanetFesMiniGameGachaResult* CreateFakeBigRatioReward()
		{
			return ((::RPG::Client::PlanetFesMiniGameGachaResult*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEGACHARESULT_CREATEFAKEBIGRATIOREWARD_OFFSET))();
		}

		::System::Boolean GetIsBigReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEGACHARESULT_GETISBIGREWARD_OFFSET))(this);
		}

		::System::UInt32 get_DiamondNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEGACHARESULT_GET_DIAMONDNUM_OFFSET))(this);
		}

		::System::Void set_DiamondNum(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEGACHARESULT_SET_DIAMONDNUM_OFFSET))(this, value);
		}

		::System::Numerics::BigInteger get_CoinNum()
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEGACHARESULT_GET_COINNUM_OFFSET))(this);
		}

		::System::Void set_CoinNum(::System::Numerics::BigInteger value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEGACHARESULT_SET_COINNUM_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_RollIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEGACHARESULT_GET_ROLLIDS_OFFSET))(this);
		}

		::System::Void set_RollIDs(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEGACHARESULT_SET_ROLLIDS_OFFSET))(this, value);
		}

		::System::UInt32 get_Ratio()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEGACHARESULT_GET_RATIO_OFFSET))(this);
		}

		::System::Void set_Ratio(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEGACHARESULT_SET_RATIO_OFFSET))(this, value);
		}

		::System::String* get_CoinString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEGACHARESULT_GET_COINSTRING_OFFSET))(this);
		}

		::System::Numerics::BigInteger get_OriginCoinNum()
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEGACHARESULT_GET_ORIGINCOINNUM_OFFSET))(this);
		}

		::System::String* get_OriginCoinString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEGACHARESULT_GET_ORIGINCOINSTRING_OFFSET))(this);
		}

		::System::UInt32 get_OriginDiamondNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEGACHARESULT_GET_ORIGINDIAMONDNUM_OFFSET))(this);
		}

		::System::UInt32 get_DiamondItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEGACHARESULT_GET_DIAMONDITEMID_OFFSET))(this);
		}

		::System::String* get_DiamondIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEGACHARESULT_GET_DIAMONDICON_OFFSET))(this);
		}

		::System::UInt32 get_CoinItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEGACHARESULT_GET_COINITEMID_OFFSET))(this);
		}

		::System::String* get_GoldIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEGACHARESULT_GET_GOLDICON_OFFSET))(this);
		}

		::RPG::Client::PlanetFesModule* get__Module()
		{
			return ((::RPG::Client::PlanetFesModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEGACHARESULT_GET__MODULE_OFFSET))(this);
		}
	};
}
