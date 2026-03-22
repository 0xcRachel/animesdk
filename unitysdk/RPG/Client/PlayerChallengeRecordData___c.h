#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_352A8B3482C80E7D_9;
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9B1ADC0)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9B1AE00)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA___C___SYNCLINEUP_B__1_0_OFFSET UNITYSDK_OFFSET(0x9B1AE10)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA___C___SYNCLINEUP_B__1_1_OFFSET UNITYSDK_OFFSET(0x9B1AE50)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerChallengeRecordData___c_TypeDefinitionIndex = 51053;

	class PlayerChallengeRecordData___c : public ::System::Object
	{
	public:
		static ::RPG::Client::PlayerChallengeRecordData___c** StaticGet___9()
		{
			return (::RPG::Client::PlayerChallengeRecordData___c**)Il2CppClass::FromTypeDefinitionIndex(PlayerChallengeRecordData___c_TypeDefinitionIndex)->GetStaticField(0x466B0);
		}
		static ::System::Comparison_1<::Class_1_352A8B3482C80E7D_9*>** StaticGet___9__1_1()
		{
			return (::System::Comparison_1<::Class_1_352A8B3482C80E7D_9*>**)Il2CppClass::FromTypeDefinitionIndex(PlayerChallengeRecordData___c_TypeDefinitionIndex)->GetStaticField(0x466B8);
		}
		static ::System::Comparison_1<::Class_1_352A8B3482C80E7D_9*>** StaticGet___9__1_0()
		{
			return (::System::Comparison_1<::Class_1_352A8B3482C80E7D_9*>**)Il2CppClass::FromTypeDefinitionIndex(PlayerChallengeRecordData___c_TypeDefinitionIndex)->GetStaticField(0x466C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __SyncLineup_b__1_0(::Class_1_352A8B3482C80E7D_9* x, ::Class_1_352A8B3482C80E7D_9* y)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_352A8B3482C80E7D_9*, ::Class_1_352A8B3482C80E7D_9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA___C___SYNCLINEUP_B__1_0_OFFSET))(this, x, y);
		}

		::System::Int32 __SyncLineup_b__1_1(::Class_1_352A8B3482C80E7D_9* x, ::Class_1_352A8B3482C80E7D_9* y)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_352A8B3482C80E7D_9*, ::Class_1_352A8B3482C80E7D_9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA___C___SYNCLINEUP_B__1_1_OFFSET))(this, x, y);
		}
	};
}
