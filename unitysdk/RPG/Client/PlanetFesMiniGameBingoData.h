#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4DF3292AA5AADAD0_15;
class Class_1_58F0FC786D73046C;
class Class_1_8618BDA489390DBF_1;
class Class_1_E2E44FDCCFF6FA83_19;
namespace RPG::Client { class PlanetFesModule; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLANETFESMINIGAMEBINGODATA_GET__MODULE_OFFSET UNITYSDK_OFFSET(0x9AD9160)
#define RPG_CLIENT_PLANETFESMINIGAMEBINGODATA_SYNCMINIGAMEINFO_1_OFFSET UNITYSDK_OFFSET(0x9AD8850)
#define RPG_CLIENT_PLANETFESMINIGAMEBINGODATA_SYNCMINIGAMEINFO_OFFSET UNITYSDK_OFFSET(0x9AD8310)
#define RPG_CLIENT_PLANETFESMINIGAMEBINGODATA_SYNCPLANETFESGAMEBINGOFLIPSCRSP_OFFSET UNITYSDK_OFFSET(0x9AD8B30)
#define RPG_CLIENT_PLANETFESMINIGAMEBINGODATA_SYNCPLANETFESSTARTMINIGAMESCRSP_OFFSET UNITYSDK_OFFSET(0x9AD8050)
#define RPG_CLIENT_PLANETFESMINIGAMEBINGODATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9AD7F00)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesMiniGameBingoData_TypeDefinitionIndex = 53064;

	class PlanetFesMiniGameBingoData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* DistributionList; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* MatchedList; // 0x18
		::System::UInt32 LastFlippedPos; // 0x20
		::System::UInt32 MaxFlipCount; // 0x24
		::System::Boolean IsGameOver; // 0x28
		::System::Boolean IsStart; // 0x29
		::System::UInt32 FlipCount; // 0x2C
		::System::UInt32 Ratio; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBINGODATA__CTOR_OFFSET))(this);
		}

		::System::Void SyncPlanetFesStartMiniGameScRsp(::Class_1_58F0FC786D73046C* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_58F0FC786D73046C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBINGODATA_SYNCPLANETFESSTARTMINIGAMESCRSP_OFFSET))(this, rsp);
		}

		::System::Void SyncMiniGameInfo(::Class_1_E2E44FDCCFF6FA83_19* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E2E44FDCCFF6FA83_19*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBINGODATA_SYNCMINIGAMEINFO_OFFSET))(this, rsp);
		}

		::System::Void SyncMiniGameInfo_1(::Class_1_4DF3292AA5AADAD0_15* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4DF3292AA5AADAD0_15*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBINGODATA_SYNCMINIGAMEINFO_1_OFFSET))(this, rsp);
		}

		::System::Boolean SyncPlanetFesGameBingoFlipScRsp(::Class_1_8618BDA489390DBF_1* rsp)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_8618BDA489390DBF_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBINGODATA_SYNCPLANETFESGAMEBINGOFLIPSCRSP_OFFSET))(this, rsp);
		}

		::RPG::Client::PlanetFesModule* get__Module()
		{
			return ((::RPG::Client::PlanetFesModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAMEBINGODATA_GET__MODULE_OFFSET))(this);
		}
	};
}
