#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

#define RPG_CLIENT_MULTIPLAYERACTIVITYMODULE_GET_CURMULTIPLAYERACTIVITYID_OFFSET UNITYSDK_OFFSET(0x98D3CC0)
#define RPG_CLIENT_MULTIPLAYERACTIVITYMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x98D3C80)
#define RPG_CLIENT_MULTIPLAYERACTIVITYMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x98D3E90)
#define RPG_CLIENT_MULTIPLAYERACTIVITYMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x98D3EB0)

namespace RPG::Client
{
	inline static constexpr unsigned int MultiPlayerActivityModule_TypeDefinitionIndex = 49022;

	class MultiPlayerActivityModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERACTIVITYMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERACTIVITYMODULE_INIT_OFFSET))(this);
		}

		::System::UInt32 get_CurMultiPlayerActivityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERACTIVITYMODULE_GET_CURMULTIPLAYERACTIVITYID_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERACTIVITYMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}
	};
}
