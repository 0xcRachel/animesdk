#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MessageContentRelicRecommendBlock; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x96F9260)
#define RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK___C__DISPLAYCLASS3_0__REQUESTRECOMMENDDATA_B__0_OFFSET UNITYSDK_OFFSET(0x96F9360)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentRelicRecommendBlock___c__DisplayClass3_0_TypeDefinitionIndex = 50209;

	class MessageContentRelicRecommendBlock___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::UInt32>* callback; // 0x10
		::RPG::Client::MessageContentRelicRecommendBlock* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestRecommendData_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTRELICRECOMMENDBLOCK___C__DISPLAYCLASS3_0__REQUESTRECOMMENDDATA_B__0_OFFSET))(this);
		}
	};
}
