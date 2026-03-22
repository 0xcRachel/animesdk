#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PamChatQuickFunctionType.h"
#include "unitysdk/System/Object.h"

class Class_1_7CC98C6000D59BCE;

#define RPG_CLIENT_PAMCHATDATA___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9A32060)
#define RPG_CLIENT_PAMCHATDATA___C__DISPLAYCLASS18_0__GETPAMCHATQUICKFUNCTION_B__0_OFFSET UNITYSDK_OFFSET(0x9A324E0)

namespace RPG::Client
{
	inline static constexpr unsigned int PamChatData___c__DisplayClass18_0_TypeDefinitionIndex = 50221;

	class PamChatData___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::RPG::Client::PamChatQuickFunctionType type; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetPamChatQuickFunction_b__0(::Class_1_7CC98C6000D59BCE* function)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_7CC98C6000D59BCE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAMCHATDATA___C__DISPLAYCLASS18_0__GETPAMCHATQUICKFUNCTION_B__0_OFFSET))(this, function);
		}
	};
}
