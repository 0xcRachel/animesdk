#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/RPG/GameCore/ScreenTransferMode.h"
#include "unitysdk/RPG/GameCore/ScreenTransferType.h"

class Class_2_225BAA39D0FA4CD6;
namespace RPG::Client { class MonoAboveSwitch; }

#define RPG_CLIENT_ABOVESWITCHDIALOG_GET_ENABLETEXT_OFFSET UNITYSDK_OFFSET(0x8AD2320)
#define RPG_CLIENT_ABOVESWITCHDIALOG_GET_TEXTID_OFFSET UNITYSDK_OFFSET(0x8AD2340)
#define RPG_CLIENT_ABOVESWITCHDIALOG_GET_TRANSFERMODE_OFFSET UNITYSDK_OFFSET(0x8AD2260)
#define RPG_CLIENT_ABOVESWITCHDIALOG_GET_TRANSFERTIME_OFFSET UNITYSDK_OFFSET(0x8AD22A0)
#define RPG_CLIENT_ABOVESWITCHDIALOG_GET_TRANSFERTYPE_OFFSET UNITYSDK_OFFSET(0x8AD2280)
#define RPG_CLIENT_ABOVESWITCHDIALOG_GET__VIEW_OFFSET UNITYSDK_OFFSET(0x8AD1D30)
#define RPG_CLIENT_ABOVESWITCHDIALOG_PLAY_OFFSET UNITYSDK_OFFSET(0x8AD1BF0)
#define RPG_CLIENT_ABOVESWITCHDIALOG_SET_ENABLETEXT_OFFSET UNITYSDK_OFFSET(0x8AD2330)
#define RPG_CLIENT_ABOVESWITCHDIALOG_SET_TEXTID_OFFSET UNITYSDK_OFFSET(0x8AD2350)
#define RPG_CLIENT_ABOVESWITCHDIALOG_SET_TRANSFERMODE_OFFSET UNITYSDK_OFFSET(0x8AD2270)
#define RPG_CLIENT_ABOVESWITCHDIALOG_SET_TRANSFERTIME_OFFSET UNITYSDK_OFFSET(0x8AD22B0)
#define RPG_CLIENT_ABOVESWITCHDIALOG_SET_TRANSFERTYPE_OFFSET UNITYSDK_OFFSET(0x8AD2290)
#define RPG_CLIENT_ABOVESWITCHDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x8AD1A80)
#define RPG_CLIENT_ABOVESWITCHDIALOG__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x8AD1AF0)
#define RPG_CLIENT_ABOVESWITCHDIALOG__EVALUATEALPHA_OFFSET UNITYSDK_OFFSET(0x8AD21A0)
#define RPG_CLIENT_ABOVESWITCHDIALOG__ONTICK_OFFSET UNITYSDK_OFFSET(0x8AD1D80)
#define RPG_CLIENT_ABOVESWITCHDIALOG__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x8AD1B90)
#define RPG_CLIENT_ABOVESWITCHDIALOG__TRANSFERFINISH_OFFSET UNITYSDK_OFFSET(0x8AD2070)
#define RPG_CLIENT_ABOVESWITCHDIALOG___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x8AD2360)
#define RPG_CLIENT_ABOVESWITCHDIALOG___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x8AD2420)
#define RPG_CLIENT_ABOVESWITCHDIALOG___IFIXBASEPROXY__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x8AD23C0)

namespace RPG::Client
{
	inline static constexpr unsigned int AboveSwitchDialog_TypeDefinitionIndex = 58261;

	class AboveSwitchDialog : public ::RPG::Client::UIController
	{
	public:
		::RPG::Client::MonoAboveSwitch* _AboveSwitch; // 0x180
		::RPG::Client::TextID _TextID; // 0x188
		::System::Single _TransferTimer; // 0x198
		::System::Single _TransferTime; // 0x19C
		::RPG::GameCore::ScreenTransferMode _TransferMode; // 0x1A0
		::System::Boolean _EnableText; // 0x1A4
		::RPG::GameCore::ScreenTransferType _TransferType; // 0x1A8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG__CTOR_OFFSET))(this);
		}

		::System::Void _CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG__SETUPVIEW_OFFSET))(this);
		}

		::System::Void Play()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG_PLAY_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single deltaSecond)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG__ONTICK_OFFSET))(this, deltaSecond);
		}

		::System::Single _EvaluateAlpha(::System::Boolean fadeIn, ::System::Single normalizedTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG__EVALUATEALPHA_OFFSET))(this, fadeIn, normalizedTime);
		}

		::System::Void _TransferFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG__TRANSFERFINISH_OFFSET))(this);
		}

		::RPG::GameCore::ScreenTransferMode get_TransferMode()
		{
			return ((::RPG::GameCore::ScreenTransferMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG_GET_TRANSFERMODE_OFFSET))(this);
		}

		::System::Void set_TransferMode(::RPG::GameCore::ScreenTransferMode value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ScreenTransferMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG_SET_TRANSFERMODE_OFFSET))(this, value);
		}

		::RPG::GameCore::ScreenTransferType get_TransferType()
		{
			return ((::RPG::GameCore::ScreenTransferType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG_GET_TRANSFERTYPE_OFFSET))(this);
		}

		::System::Void set_TransferType(::RPG::GameCore::ScreenTransferType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ScreenTransferType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG_SET_TRANSFERTYPE_OFFSET))(this, value);
		}

		::System::Single get_TransferTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG_GET_TRANSFERTIME_OFFSET))(this);
		}

		::System::Void set_TransferTime(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG_SET_TRANSFERTIME_OFFSET))(this, value);
		}

		::System::Boolean get_EnableText()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG_GET_ENABLETEXT_OFFSET))(this);
		}

		::System::Void set_EnableText(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG_SET_ENABLETEXT_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_TextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG_GET_TEXTID_OFFSET))(this);
		}

		::System::Void set_TextID(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG_SET_TEXTID_OFFSET))(this, value);
		}

		::Class_2_225BAA39D0FA4CD6* get__View()
		{
			return ((::Class_2_225BAA39D0FA4CD6*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG_GET__VIEW_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG___IFIXBASEPROXY__SETUPVIEW_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ABOVESWITCHDIALOG___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
		}
	};
}
