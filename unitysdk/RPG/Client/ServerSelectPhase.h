#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/RPG/Client/LoginPhase.h"

class Class_1_6B41D5D37BA0605F;
class Class_1_D6D8D891CDDE5DED;
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Exception; }

#define RPG_CLIENT_SERVERSELECTPHASE_CHECKUPDATEIFIX_OFFSET UNITYSDK_OFFSET(0x15342C30)
#define RPG_CLIENT_SERVERSELECTPHASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x153425A0)
#define RPG_CLIENT_SERVERSELECTPHASE_ENTER_OFFSET UNITYSDK_OFFSET(0x15342650)
#define RPG_CLIENT_SERVERSELECTPHASE_GETGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0x15342B80)
#define RPG_CLIENT_SERVERSELECTPHASE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x15342AA0)
#define RPG_CLIENT_SERVERSELECTPHASE_LEAVE_OFFSET UNITYSDK_OFFSET(0x15342B00)
#define RPG_CLIENT_SERVERSELECTPHASE_STARTSERVERLOGIN_OFFSET UNITYSDK_OFFSET(0x15342880)
#define RPG_CLIENT_SERVERSELECTPHASE_TICK_OFFSET UNITYSDK_OFFSET(0x153425F0)
#define RPG_CLIENT_SERVERSELECTPHASE__CHECKSERVERSTATE_OFFSET UNITYSDK_OFFSET(0x15343010)
#define RPG_CLIENT_SERVERSELECTPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0x15342520)
#define RPG_CLIENT_SERVERSELECTPHASE__ONEXCEPTION_OFFSET UNITYSDK_OFFSET(0x15342D70)
#define RPG_CLIENT_SERVERSELECTPHASE__REPORTLOCALASSETINFO_OFFSET UNITYSDK_OFFSET(0x15343340)
#define RPG_CLIENT_SERVERSELECTPHASE__SERVERSELECTCOMPLETE_OFFSET UNITYSDK_OFFSET(0x15343260)
#define RPG_CLIENT_SERVERSELECTPHASE__STARTLOGIN_OFFSET UNITYSDK_OFFSET(0x15342BD0)

namespace RPG::Client
{
	inline static constexpr unsigned int ServerSelectPhase_TypeDefinitionIndex = 56408;

	class ServerSelectPhase : public ::RPG::Client::LoginPhase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERSELECTPHASE__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERSELECTPHASE_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERSELECTPHASE_TICK_OFFSET))(this, time);
		}

		::System::Boolean Enter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERSELECTPHASE_ENTER_OFFSET))(this);
		}

		::System::Void LateUpdate(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERSELECTPHASE_LATEUPDATE_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Boolean Leave(::Class_1_6B41D5D37BA0605F* pNextPhase)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_6B41D5D37BA0605F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERSELECTPHASE_LEAVE_OFFSET))(this, pNextPhase);
		}

		::RPG::Client::GamePhaseType GetGamePhaseType()
		{
			return ((::RPG::Client::GamePhaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERSELECTPHASE_GETGAMEPHASETYPE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* StartServerLogin()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERSELECTPHASE_STARTSERVERLOGIN_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _StartLogin()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERSELECTPHASE__STARTLOGIN_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* CheckUpdateIFix()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERSELECTPHASE_CHECKUPDATEIFIX_OFFSET))(this);
		}

		::System::Void _OnException(::System::Exception* ex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERSELECTPHASE__ONEXCEPTION_OFFSET))(this, ex);
		}

		::RPG::Client::Promises::IPromise* _CheckServerState(::Class_1_D6D8D891CDDE5DED* result)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_D6D8D891CDDE5DED*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERSELECTPHASE__CHECKSERVERSTATE_OFFSET))(this, result);
		}

		::RPG::Client::Promises::IPromise* _ServerSelectComplete()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERSELECTPHASE__SERVERSELECTCOMPLETE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _ReportLocalAssetInfo()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERVERSELECTPHASE__REPORTLOCALASSETINFO_OFFSET))(this);
		}
	};
}
