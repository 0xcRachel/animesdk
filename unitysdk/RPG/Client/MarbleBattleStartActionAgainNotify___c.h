#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MarbleBattleSealData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_MARBLEBATTLESTARTACTIONAGAINNOTIFY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9B25E40)
#define RPG_CLIENT_MARBLEBATTLESTARTACTIONAGAINNOTIFY___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9B25E80)
#define RPG_CLIENT_MARBLEBATTLESTARTACTIONAGAINNOTIFY___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x9B25E90)

namespace RPG::Client
{
	inline static constexpr unsigned int MarbleBattleStartActionAgainNotify___c_TypeDefinitionIndex = 53452;

	class MarbleBattleStartActionAgainNotify___c : public ::System::Object
	{
	public:
		static ::RPG::Client::MarbleBattleStartActionAgainNotify___c** StaticGet___9()
		{
			return (::RPG::Client::MarbleBattleStartActionAgainNotify___c**)Il2CppClass::FromTypeDefinitionIndex(MarbleBattleStartActionAgainNotify___c_TypeDefinitionIndex)->GetStaticField(0x40610);
		}
		static ::System::Func_2<::RPG::Client::MarbleBattleSealData*, ::System::Boolean>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::RPG::Client::MarbleBattleSealData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MarbleBattleStartActionAgainNotify___c_TypeDefinitionIndex)->GetStaticField(0x40618);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLESTARTACTIONAGAINNOTIFY___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLESTARTACTIONAGAINNOTIFY___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __ctor_b__0_0(::RPG::Client::MarbleBattleSealData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MarbleBattleSealData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLESTARTACTIONAGAINNOTIFY___C___CTOR_B__0_0_OFFSET))(this, x);
		}
	};
}
