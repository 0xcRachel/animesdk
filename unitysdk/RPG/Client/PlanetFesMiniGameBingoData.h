#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_08093FBB447FB7BD_20;
class Class_1_561834D5CD996FAE;
class Class_1_5A347723E5A85477;
class Class_1_C4B679728AD83B32_15;
namespace RPG::Client { class PlanetFesModule; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLANETFESMINIGAMEBINGODATA_GET__MODULE_OFFSET UNITYSDK_OFFSET(0x1750CF50)
#define RPG_CLIENT_PLANETFESMINIGAMEBINGODATA_SYNCMINIGAMEINFO_1_OFFSET UNITYSDK_OFFSET(0x1750C640)
#define RPG_CLIENT_PLANETFESMINIGAMEBINGODATA_SYNCMINIGAMEINFO_OFFSET UNITYSDK_OFFSET(0x1750C100)
#define RPG_CLIENT_PLANETFESMINIGAMEBINGODATA_SYNCPLANETFESGAMEBINGOFLIPSCRSP_OFFSET UNITYSDK_OFFSET(0x1750C920)
#define RPG_CLIENT_PLANETFESMINIGAMEBINGODATA_SYNCPLANETFESSTARTMINIGAMESCRSP_OFFSET UNITYSDK_OFFSET(0x1750BE40)
#define RPG_CLIENT_PLANETFESMINIGAMEBINGODATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1750BCF0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesMiniGameBingoData_TypeDefinitionIndex = 61365;

	class PlanetFesMiniGameBingoData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* MatchedList; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* DistributionList; // 0x18
		::System::UInt32 MaxFlipCount; // 0x20
		::System::UInt32 Ratio; // 0x24
		::System::UInt32 FlipCount; // 0x28
		::System::UInt32 LastFlippedPos; // 0x2C
		::System::Boolean IsGameOver; // 0x30
		::System::Boolean IsStart; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBINGODATA__CTOR_OFFSET))(this);
		}

		::System::Void SyncPlanetFesStartMiniGameScRsp(::Class_1_561834D5CD996FAE* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_561834D5CD996FAE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBINGODATA_SYNCPLANETFESSTARTMINIGAMESCRSP_OFFSET))(this, rsp);
		}

		::System::Void SyncMiniGameInfo(::Class_1_08093FBB447FB7BD_20* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_08093FBB447FB7BD_20*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBINGODATA_SYNCMINIGAMEINFO_OFFSET))(this, rsp);
		}

		::System::Void SyncMiniGameInfo_1(::Class_1_C4B679728AD83B32_15* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C4B679728AD83B32_15*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBINGODATA_SYNCMINIGAMEINFO_1_OFFSET))(this, rsp);
		}

		::System::Boolean SyncPlanetFesGameBingoFlipScRsp(::Class_1_5A347723E5A85477* rsp)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_5A347723E5A85477*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBINGODATA_SYNCPLANETFESGAMEBINGOFLIPSCRSP_OFFSET))(this, rsp);
		}

		::RPG::Client::PlanetFesModule* get__Module()
		{
			return ((::RPG::Client::PlanetFesModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBINGODATA_GET__MODULE_OFFSET))(this);
		}
	};
}
