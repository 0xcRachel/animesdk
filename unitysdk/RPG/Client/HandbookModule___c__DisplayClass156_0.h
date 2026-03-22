#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class HandbookModule; }

#define RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS156_0__ADDGRIDFIGHTSCOREREWARDDATATIMER_B__0_OFFSET UNITYSDK_OFFSET(0x949B680)
#define RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS156_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9498640)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookModule___c__DisplayClass156_0_TypeDefinitionIndex = 52165;

	class HandbookModule___c__DisplayClass156_0 : public ::System::Object
	{
	public:
		::RPG::Client::HandbookModule* __4__this; // 0x10
		::System::Int64 endTimeStamp; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS156_0__CTOR_OFFSET))(this);
		}

		::System::Void _AddGridFightScoreRewardDataTimer_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS156_0__ADDGRIDFIGHTSCOREREWARDDATATIMER_B__0_OFFSET))(this);
		}
	};
}
