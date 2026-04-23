#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlanetFesEventType.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlanetFesEventDataBase; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x174FA8C0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x174FA900)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA___C__GET_CUREVENTCOUNT_B__12_0_OFFSET UNITYSDK_OFFSET(0x174FA910)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA___C__GET_TOTALEVENTCOUNT_B__14_0_OFFSET UNITYSDK_OFFSET(0x174FA9D0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesBusinessDayData___c_TypeDefinitionIndex = 61320;

	class PlanetFesBusinessDayData___c : public ::System::Object
	{
	public:
		static ::RPG::Client::PlanetFesBusinessDayData___c** StaticGet___9()
		{
			return (::RPG::Client::PlanetFesBusinessDayData___c**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesBusinessDayData___c_TypeDefinitionIndex)->GetStaticField(0x69B60);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::PlanetFesEventType, ::RPG::Client::PlanetFesEventDataBase*>, ::System::Int64>** StaticGet___9__14_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::PlanetFesEventType, ::RPG::Client::PlanetFesEventDataBase*>, ::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesBusinessDayData___c_TypeDefinitionIndex)->GetStaticField(0x69B68);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::PlanetFesEventType, ::RPG::Client::PlanetFesEventDataBase*>, ::System::Int64>** StaticGet___9__12_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::PlanetFesEventType, ::RPG::Client::PlanetFesEventDataBase*>, ::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesBusinessDayData___c_TypeDefinitionIndex)->GetStaticField(0x69B70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA___C__CTOR_OFFSET))(this);
		}

		::System::Int64 _get_CurEventCount_b__12_0(::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::PlanetFesEventType, ::RPG::Client::PlanetFesEventDataBase*> kv)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::PlanetFesEventType, ::RPG::Client::PlanetFesEventDataBase*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA___C__GET_CUREVENTCOUNT_B__12_0_OFFSET))(this, kv);
		}

		::System::Int64 _get_TotalEventCount_b__14_0(::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::PlanetFesEventType, ::RPG::Client::PlanetFesEventDataBase*> kv)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::PlanetFesEventType, ::RPG::Client::PlanetFesEventDataBase*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA___C__GET_TOTALEVENTCOUNT_B__14_0_OFFSET))(this, kv);
		}
	};
}
