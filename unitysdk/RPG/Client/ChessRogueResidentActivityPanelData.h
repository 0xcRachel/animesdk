#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueResidentActivityPanelData.h"

class Class_1_917A51CFABFA9D50;
class Class_1_CB745E9D5321B917;
namespace RPG::Client { class ChessRogueRedDotFilter; }
namespace RPG::GameCore { class IntroDataRow; }
namespace RPG::GameCore { class RogueActivityResidentConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_CHESSROGUERESIDENTACTIVITYPANELDATA_CREATEBYROW_OFFSET UNITYSDK_OFFSET(0x8EEBA90)
#define RPG_CLIENT_CHESSROGUERESIDENTACTIVITYPANELDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8EEBC30)
#define RPG_CLIENT_CHESSROGUERESIDENTACTIVITYPANELDATA_GET_LOCKEDREASON_OFFSET UNITYSDK_OFFSET(0x8EEBE50)
#define RPG_CLIENT_CHESSROGUERESIDENTACTIVITYPANELDATA_ISHIDEALLREDDOT_OFFSET UNITYSDK_OFFSET(0x8EEBE10)
#define RPG_CLIENT_CHESSROGUERESIDENTACTIVITYPANELDATA_ISSHOWNEWREDDOT_OFFSET UNITYSDK_OFFSET(0x8EEBDD0)
#define RPG_CLIENT_CHESSROGUERESIDENTACTIVITYPANELDATA_ISSHOWNOPASSNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x8EEBD90)
#define RPG_CLIENT_CHESSROGUERESIDENTACTIVITYPANELDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x8EEBC90)
#define RPG_CLIENT_CHESSROGUERESIDENTACTIVITYPANELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8EEBA80)
#define RPG_CLIENT_CHESSROGUERESIDENTACTIVITYPANELDATA__SHOULDSHOWREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0x8EEBCF0)
#define RPG_CLIENT_CHESSROGUERESIDENTACTIVITYPANELDATA___IFIXBASEPROXY_GET_LOCKEDREASON_OFFSET UNITYSDK_OFFSET(0x8EEBFB0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueResidentActivityPanelData_TypeDefinitionIndex = 48989;

	class ChessRogueResidentActivityPanelData : public ::RPG::Client::RogueResidentActivityPanelData
	{
	public:
		::RPG::Client::ChessRogueRedDotFilter* _RedDotFilter; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUERESIDENTACTIVITYPANELDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ChessRogueResidentActivityPanelData* CreateByRow(::RPG::GameCore::RogueActivityResidentConfigRow* row, ::RPG::GameCore::IntroDataRow* introRow, ::Class_1_917A51CFABFA9D50* scheduleProxyFactory, ::Class_1_CB745E9D5321B917* rewardCountProxyFactory)
		{
			return ((::RPG::Client::ChessRogueResidentActivityPanelData*(*)(::RPG::GameCore::RogueActivityResidentConfigRow*, ::RPG::GameCore::IntroDataRow*, ::Class_1_917A51CFABFA9D50*, ::Class_1_CB745E9D5321B917*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUERESIDENTACTIVITYPANELDATA_CREATEBYROW_OFFSET))(row, introRow, scheduleProxyFactory, rewardCountProxyFactory);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUERESIDENTACTIVITYPANELDATA_DISPOSE_OFFSET))(this);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUERESIDENTACTIVITYPANELDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowNoPassNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUERESIDENTACTIVITYPANELDATA_ISSHOWNOPASSNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowNewRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUERESIDENTACTIVITYPANELDATA_ISSHOWNEWREDDOT_OFFSET))(this);
		}

		::System::Boolean IsHideAllRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUERESIDENTACTIVITYPANELDATA_ISHIDEALLREDDOT_OFFSET))(this);
		}

		::System::Boolean _ShouldShowRewardRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUERESIDENTACTIVITYPANELDATA__SHOULDSHOWREWARDREDDOT_OFFSET))(this);
		}

		::System::String* get_LockedReason()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUERESIDENTACTIVITYPANELDATA_GET_LOCKEDREASON_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_get_LockedReason()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUERESIDENTACTIVITYPANELDATA___IFIXBASEPROXY_GET_LOCKEDREASON_OFFSET))(this);
		}
	};
}
