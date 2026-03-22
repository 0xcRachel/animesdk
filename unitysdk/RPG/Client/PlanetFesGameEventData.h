#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PlanetFesEventDataBase.h"

class Class_1_01FA9B67F39C1E6F;
namespace RPG::Client { class PlanetFesMiniGame; }

#define RPG_CLIENT_PLANETFESGAMEEVENTDATA_GET_ACTIVEGAMEDATA_OFFSET UNITYSDK_OFFSET(0x9AD2E00)
#define RPG_CLIENT_PLANETFESGAMEEVENTDATA_GET_GAMETYPE_OFFSET UNITYSDK_OFFSET(0x9AD2DE0)
#define RPG_CLIENT_PLANETFESGAMEEVENTDATA_ISINPROGRESS_OFFSET UNITYSDK_OFFSET(0x9AD2D80)
#define RPG_CLIENT_PLANETFESGAMEEVENTDATA_SET_GAMETYPE_OFFSET UNITYSDK_OFFSET(0x9AD2DF0)
#define RPG_CLIENT_PLANETFESGAMEEVENTDATA__CLEARDETAIL_OFFSET UNITYSDK_OFFSET(0x9AD2D30)
#define RPG_CLIENT_PLANETFESGAMEEVENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9AD2AC0)
#define RPG_CLIENT_PLANETFESGAMEEVENTDATA__SYNCDETAIL_OFFSET UNITYSDK_OFFSET(0x9AD2AF0)
#define RPG_CLIENT_PLANETFESGAMEEVENTDATA___IFIXBASEPROXY_ISINPROGRESS_OFFSET UNITYSDK_OFFSET(0x9AD2FA0)
#define RPG_CLIENT_PLANETFESGAMEEVENTDATA___IFIXBASEPROXY__CLEARDETAIL_OFFSET UNITYSDK_OFFSET(0x9AD2F60)
#define RPG_CLIENT_PLANETFESGAMEEVENTDATA___IFIXBASEPROXY__SYNCDETAIL_OFFSET UNITYSDK_OFFSET(0x9AD2F10)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesGameEventData_TypeDefinitionIndex = 53014;

	class PlanetFesGameEventData : public ::RPG::Client::PlanetFesEventDataBase
	{
	public:
		::System::UInt32 _GameType_k__BackingField; // 0x68
		::System::Boolean IsInGamePlayPage; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGAMEEVENTDATA__CTOR_OFFSET))(this);
		}

		::System::Void _SyncDetail(::Class_1_01FA9B67F39C1E6F* eventInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_01FA9B67F39C1E6F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGAMEEVENTDATA__SYNCDETAIL_OFFSET))(this, eventInfo);
		}

		::System::Void _ClearDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGAMEEVENTDATA__CLEARDETAIL_OFFSET))(this);
		}

		::System::Boolean IsInProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGAMEEVENTDATA_ISINPROGRESS_OFFSET))(this);
		}

		::System::UInt32 get_GameType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGAMEEVENTDATA_GET_GAMETYPE_OFFSET))(this);
		}

		::System::Void set_GameType(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGAMEEVENTDATA_SET_GAMETYPE_OFFSET))(this, value);
		}

		::RPG::Client::PlanetFesMiniGame* get_ActiveGameData()
		{
			return ((::RPG::Client::PlanetFesMiniGame*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGAMEEVENTDATA_GET_ACTIVEGAMEDATA_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__SyncDetail(::Class_1_01FA9B67F39C1E6F* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_01FA9B67F39C1E6F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGAMEEVENTDATA___IFIXBASEPROXY__SYNCDETAIL_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy__ClearDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGAMEEVENTDATA___IFIXBASEPROXY__CLEARDETAIL_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsInProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGAMEEVENTDATA___IFIXBASEPROXY_ISINPROGRESS_OFFSET))(this);
		}
	};
}
