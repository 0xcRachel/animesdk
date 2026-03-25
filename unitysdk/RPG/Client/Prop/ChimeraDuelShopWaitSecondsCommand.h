#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F9FBCC956DFCF137_14;
namespace System { class Action; }

#define RPG_CLIENT_PROP_CHIMERADUELSHOPWAITSECONDSCOMMAND_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA066FE0)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPWAITSECONDSCOMMAND_TICK_OFFSET UNITYSDK_OFFSET(0xA067040)
#define RPG_CLIENT_PROP_CHIMERADUELSHOPWAITSECONDSCOMMAND__CTOR_OFFSET UNITYSDK_OFFSET(0xA066FD0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelShopWaitSecondsCommand_TypeDefinitionIndex = 63801;

	class ChimeraDuelShopWaitSecondsCommand : public ::System::Object
	{
	public:
		::System::Action* _OnComplete; // 0x10
		::System::Single _Elapsed; // 0x18
		::System::Single _Total; // 0x1C

		::System::Void _ctor(::System::Single seconds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPWAITSECONDSCOMMAND__CTOR_OFFSET))(this, seconds);
		}

		::System::Void Execute(::Class_1_F9FBCC956DFCF137_14* nodeContext, ::System::Action* onComplete)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_14*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPWAITSECONDSCOMMAND_EXECUTE_OFFSET))(this, nodeContext, onComplete);
		}

		::System::Void Tick(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELSHOPWAITSECONDSCOMMAND_TICK_OFFSET))(this, deltaTime);
		}
	};
}
