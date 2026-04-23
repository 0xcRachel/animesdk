#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class IPromise; }

#define RPG_CLIENT_CHIMERASETTLECOMMANDBASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x174858C0)
#define RPG_CLIENT_CHIMERASETTLECOMMANDBASE_EXECUTEBYPROMISE_OFFSET UNITYSDK_OFFSET(0x17485870)
#define RPG_CLIENT_CHIMERASETTLECOMMANDBASE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x17485820)
#define RPG_CLIENT_CHIMERASETTLECOMMANDBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x17485A50)
#define RPG_CLIENT_CHIMERASETTLECOMMANDBASE__DISPOSEIMPL_OFFSET UNITYSDK_OFFSET(0x17485A10)
#define RPG_CLIENT_CHIMERASETTLECOMMANDBASE__EXECUTEBYPROMISEIMPL_OFFSET UNITYSDK_OFFSET(0x17485950)
#define RPG_CLIENT_CHIMERASETTLECOMMANDBASE__EXECUTEIMPL_OFFSET UNITYSDK_OFFSET(0x17485910)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraSettleCommandBase_TypeDefinitionIndex = 58475;

	class ChimeraSettleCommandBase : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLECOMMANDBASE__CTOR_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLECOMMANDBASE_EXECUTE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* ExecuteByPromise()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLECOMMANDBASE_EXECUTEBYPROMISE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLECOMMANDBASE_DISPOSE_OFFSET))(this);
		}

		::System::Void _ExecuteImpl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLECOMMANDBASE__EXECUTEIMPL_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _ExecuteByPromiseImpl()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLECOMMANDBASE__EXECUTEBYPROMISEIMPL_OFFSET))(this);
		}

		::System::Void _DisposeImpl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLECOMMANDBASE__DISPOSEIMPL_OFFSET))(this);
		}
	};
}
