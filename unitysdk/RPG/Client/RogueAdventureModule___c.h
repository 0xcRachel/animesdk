#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2250AFBBC876BF24_1;
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ROGUEADVENTUREMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9DD55B0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9DD55E0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE___C___ONCMDSYNCROGUECOMMONACTIONRESULTSCNOTIFY_B__47_0_OFFSET UNITYSDK_OFFSET(0x9DD55F0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueAdventureModule___c_TypeDefinitionIndex = 53529;

	class RogueAdventureModule___c : public ::System::Object
	{
	public:
		static ::RPG::Client::RogueAdventureModule___c** StaticGet___9()
		{
			return (::RPG::Client::RogueAdventureModule___c**)Il2CppClass::FromTypeDefinitionIndex(RogueAdventureModule___c_TypeDefinitionIndex)->GetStaticField(0x45650);
		}
		static ::System::Func_2<::Class_1_2250AFBBC876BF24_1*, ::System::Boolean>** StaticGet___9__47_0()
		{
			return (::System::Func_2<::Class_1_2250AFBBC876BF24_1*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RogueAdventureModule___c_TypeDefinitionIndex)->GetStaticField(0x45658);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __OnCmdSyncRogueCommonActionResultScNotify_b__47_0(::Class_1_2250AFBBC876BF24_1* action)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_2250AFBBC876BF24_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE___C___ONCMDSYNCROGUECOMMONACTIONRESULTSCNOTIFY_B__47_0_OFFSET))(this, action);
		}
	};
}
