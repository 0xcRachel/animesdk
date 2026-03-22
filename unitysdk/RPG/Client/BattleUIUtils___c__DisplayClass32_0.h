#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/HttpStatusCode.h"
#include "unitysdk/System/Object.h"

class Class_1_F3ECA6195BFBE70F_2;

#define RPG_CLIENT_BATTLEUIUTILS___C__DISPLAYCLASS32_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8DE0360)
#define RPG_CLIENT_BATTLEUIUTILS___C__DISPLAYCLASS32_0__TRYDOWNLOADREPLAY_B__0_OFFSET UNITYSDK_OFFSET(0x8DE3250)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleUIUtils___c__DisplayClass32_0_TypeDefinitionIndex = 57435;

	class BattleUIUtils___c__DisplayClass32_0 : public ::System::Object
	{
	public:
		::System::Int32 iTryCount; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS___C__DISPLAYCLASS32_0__CTOR_OFFSET))(this);
		}

		::System::Void _TryDownLoadReplay_b__0(::System::Net::HttpStatusCode code, ::System::Int32 i, ::Class_1_F3ECA6195BFBE70F_2* replay)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpStatusCode, ::System::Int32, ::Class_1_F3ECA6195BFBE70F_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS___C__DISPLAYCLASS32_0__TRYDOWNLOADREPLAY_B__0_OFFSET))(this, code, i, replay);
		}
	};
}
