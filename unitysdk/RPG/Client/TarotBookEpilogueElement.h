#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BookletElement_1.h"

namespace RPG::Client { class BookletLuaPanelParam; }
namespace RPG::GameCore::Booklet { class CustomPageElementConfig; }

#define RPG_CLIENT_TAROTBOOKEPILOGUEELEMENT_INITVIEW_OFFSET UNITYSDK_OFFSET(0x16993B10)
#define RPG_CLIENT_TAROTBOOKEPILOGUEELEMENT_METHOD_7_653F7195DAB048FB_OFFSET UNITYSDK_OFFSET(0x16993BC0)
#define RPG_CLIENT_TAROTBOOKEPILOGUEELEMENT__BEFOREDESTROY_OFFSET UNITYSDK_OFFSET(0x16993C80)
#define RPG_CLIENT_TAROTBOOKEPILOGUEELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x16993D50)
#define RPG_CLIENT_TAROTBOOKEPILOGUEELEMENT___IFIXBASEPROXY_INITVIEW_OFFSET UNITYSDK_OFFSET(0x16993DA0)
#define RPG_CLIENT_TAROTBOOKEPILOGUEELEMENT___IFIXBASEPROXY__BEFOREDESTROY_OFFSET UNITYSDK_OFFSET(0x16993E50)

namespace RPG::Client
{
	inline static constexpr unsigned int TarotBookEpilogueElement_TypeDefinitionIndex = 66762;

	class TarotBookEpilogueElement : public ::RPG::Client::BookletElement_1<::RPG::GameCore::Booklet::CustomPageElementConfig*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKEPILOGUEELEMENT__CTOR_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKEPILOGUEELEMENT_INITVIEW_OFFSET))(this);
		}

		::System::Void _BeforeDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKEPILOGUEELEMENT__BEFOREDESTROY_OFFSET))(this);
		}

		::RPG::Client::BookletLuaPanelParam* Method_7_653F7195DAB048FB()
		{
			return ((::RPG::Client::BookletLuaPanelParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKEPILOGUEELEMENT_METHOD_7_653F7195DAB048FB_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKEPILOGUEELEMENT___IFIXBASEPROXY_INITVIEW_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__BeforeDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKEPILOGUEELEMENT___IFIXBASEPROXY__BEFOREDESTROY_OFFSET))(this);
		}
	};
}
