#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

#define RPG_CLIENT_CAKECATCHACTIVITYDATA_ISSHOWNOPASSNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x15FC2C50)
#define RPG_CLIENT_CAKECATCHACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x15FC2A00)
#define RPG_CLIENT_CAKECATCHACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x15FC29F0)
#define RPG_CLIENT_CAKECATCHACTIVITYDATA__ISBOXOPENABLE_OFFSET UNITYSDK_OFFSET(0x15FC2DA0)
#define RPG_CLIENT_CAKECATCHACTIVITYDATA__ISCATGODCANINTERACT_OFFSET UNITYSDK_OFFSET(0x15FC2E00)
#define RPG_CLIENT_CAKECATCHACTIVITYDATA___IFIXBASEPROXY_ISSHOWNOPASSNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x15FC30D0)
#define RPG_CLIENT_CAKECATCHACTIVITYDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x15FC3060)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeCatchActivityData_TypeDefinitionIndex = 56811;

	class CakeCatchActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Void _ctor(::System::UInt32 panelID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHACTIVITYDATA__CTOR_OFFSET))(this, panelID);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowNoPassNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHACTIVITYDATA_ISSHOWNOPASSNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean _IsCatGodCanInteract()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHACTIVITYDATA__ISCATGODCANINTERACT_OFFSET))(this);
		}

		::System::Boolean _IsBoxOpenable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHACTIVITYDATA__ISBOXOPENABLE_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHACTIVITYDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsShowNoPassNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHACTIVITYDATA___IFIXBASEPROXY_ISSHOWNOPASSNORMALREDDOT_OFFSET))(this);
		}
	};
}
