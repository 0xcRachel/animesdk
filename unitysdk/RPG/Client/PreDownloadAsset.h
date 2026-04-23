#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_280047DF9F661B14;
class Class_1_2E75418D06E8797E;
namespace System { class Action; }

#define RPG_CLIENT_PREDOWNLOADASSET_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12748F50)
#define RPG_CLIENT_PREDOWNLOADASSET_ENTER_OFFSET UNITYSDK_OFFSET(0x12749040)
#define RPG_CLIENT_PREDOWNLOADASSET_LEAVE_OFFSET UNITYSDK_OFFSET(0x12749750)
#define RPG_CLIENT_PREDOWNLOADASSET_ONCHANGETOMOBILENETWORK_OFFSET UNITYSDK_OFFSET(0x12749400)
#define RPG_CLIENT_PREDOWNLOADASSET_OVERRIDENOTCONFIRMWIFIACTION_OFFSET UNITYSDK_OFFSET(0x12748FF0)
#define RPG_CLIENT_PREDOWNLOADASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1274A3B0)
#define RPG_CLIENT_PREDOWNLOADASSET__GETDOWNLOADDESCTEXT_OFFSET UNITYSDK_OFFSET(0x1274A1D0)
#define RPG_CLIENT_PREDOWNLOADASSET__MESSAGEBOXRETRYOKBTNHANDLE_OFFSET UNITYSDK_OFFSET(0x12749FF0)
#define RPG_CLIENT_PREDOWNLOADASSET__MESSAGEBOXWIFICONFIRM_OFFSET UNITYSDK_OFFSET(0x12749670)
#define RPG_CLIENT_PREDOWNLOADASSET__ONBUNDLEDOWNLOADREQUESTRETRYHANDLE_OFFSET UNITYSDK_OFFSET(0x12749F20)
#define RPG_CLIENT_PREDOWNLOADASSET__ONVERSIONUPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x1274A290)
#define RPG_CLIENT_PREDOWNLOADASSET__SOLVEDOWNLOADLIVE_OFFSET UNITYSDK_OFFSET(0x12749A50)
#define RPG_CLIENT_PREDOWNLOADASSET__STARTUPDATE_OFFSET UNITYSDK_OFFSET(0x127492E0)

namespace RPG::Client
{
	inline static constexpr unsigned int PreDownloadAsset_TypeDefinitionIndex = 56403;

	class PreDownloadAsset : public ::System::Object
	{
	public:
		::Class_1_2E75418D06E8797E* _KeepLive; // 0x10
		::System::Action* _OnNotConfirmWifi; // 0x18
		::Class_1_280047DF9F661B14* _Board; // 0x20
		::System::Boolean _IsLeft; // 0x28
		::System::Boolean isShowWifiDialog; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREDOWNLOADASSET__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREDOWNLOADASSET_DISPOSE_OFFSET))(this);
		}

		::System::Void OverrideNotConfirmWifiAction(::System::Action* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREDOWNLOADASSET_OVERRIDENOTCONFIRMWIFIACTION_OFFSET))(this, action);
		}

		::System::Void Enter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREDOWNLOADASSET_ENTER_OFFSET))(this);
		}

		::System::Void OnChangeToMobileNetwork(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREDOWNLOADASSET_ONCHANGETOMOBILENETWORK_OFFSET))(this, arg);
		}

		::System::Void _MessageBoxWifiConfirm(::System::Boolean isConfirmed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREDOWNLOADASSET__MESSAGEBOXWIFICONFIRM_OFFSET))(this, isConfirmed);
		}

		::System::Void Leave()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREDOWNLOADASSET_LEAVE_OFFSET))(this);
		}

		::System::Void _SolveDownloadLive(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREDOWNLOADASSET__SOLVEDOWNLOADLIVE_OFFSET))(this, arg);
		}

		::System::Void _OnBundleDownloadRequestRetryHandle(::System::Object* userParam)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREDOWNLOADASSET__ONBUNDLEDOWNLOADREQUESTRETRYHANDLE_OFFSET))(this, userParam);
		}

		::System::Void _MessageBoxRetryOkBtnHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREDOWNLOADASSET__MESSAGEBOXRETRYOKBTNHANDLE_OFFSET))(this);
		}

		::System::Void _StartUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREDOWNLOADASSET__STARTUPDATE_OFFSET))(this);
		}

		::System::Void _OnVersionUpdateComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREDOWNLOADASSET__ONVERSIONUPDATECOMPLETE_OFFSET))(this);
		}

		static ::RPG::Client::TextID _GetDownloadDescText()
		{
			return ((::RPG::Client::TextID(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PREDOWNLOADASSET__GETDOWNLOADDESCTEXT_OFFSET))();
		}
	};
}
