#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CakeRaceGameFightResultParticipantData; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x924A2C0)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x924A300)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA___C___INITSORTEDPARTICIPANTLIST_B__23_0_OFFSET UNITYSDK_OFFSET(0x924A310)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA___C___INITSORTEDPARTICIPANTLIST_B__23_1_OFFSET UNITYSDK_OFFSET(0x924A320)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA___C___INITSORTEDPARTICIPANTLIST_B__23_2_OFFSET UNITYSDK_OFFSET(0x924A370)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA___C___INITSORTEDPARTICIPANTLIST_B__23_3_OFFSET UNITYSDK_OFFSET(0x924A390)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceGameFightResultData___c_TypeDefinitionIndex = 51135;

	class CakeRaceGameFightResultData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::CakeRaceGameFightResultParticipantData*, ::System::Int64>** StaticGet___9__23_1()
		{
			return (::System::Func_2<::RPG::Client::CakeRaceGameFightResultParticipantData*, ::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(CakeRaceGameFightResultData___c_TypeDefinitionIndex)->GetStaticField(0x36410);
		}
		static ::RPG::Client::CakeRaceGameFightResultData___c** StaticGet___9()
		{
			return (::RPG::Client::CakeRaceGameFightResultData___c**)Il2CppClass::FromTypeDefinitionIndex(CakeRaceGameFightResultData___c_TypeDefinitionIndex)->GetStaticField(0x36418);
		}
		static ::System::Func_2<::RPG::Client::CakeRaceGameFightResultParticipantData*, ::System::Boolean>** StaticGet___9__23_2()
		{
			return (::System::Func_2<::RPG::Client::CakeRaceGameFightResultParticipantData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(CakeRaceGameFightResultData___c_TypeDefinitionIndex)->GetStaticField(0x36420);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::CakeRaceGameFightResultParticipantData*>, ::RPG::Client::CakeRaceGameFightResultParticipantData*>** StaticGet___9__23_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::CakeRaceGameFightResultParticipantData*>, ::RPG::Client::CakeRaceGameFightResultParticipantData*>**)Il2CppClass::FromTypeDefinitionIndex(CakeRaceGameFightResultData___c_TypeDefinitionIndex)->GetStaticField(0x36428);
		}
		static ::System::Func_3<::RPG::Client::CakeRaceGameFightResultParticipantData*, ::System::Int32, ::RPG::Client::CakeRaceGameFightResultParticipantData*>** StaticGet___9__23_3()
		{
			return (::System::Func_3<::RPG::Client::CakeRaceGameFightResultParticipantData*, ::System::Int32, ::RPG::Client::CakeRaceGameFightResultParticipantData*>**)Il2CppClass::FromTypeDefinitionIndex(CakeRaceGameFightResultData___c_TypeDefinitionIndex)->GetStaticField(0x36430);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::CakeRaceGameFightResultParticipantData* __InitSortedParticipantList_b__23_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::CakeRaceGameFightResultParticipantData*> kvp)
		{
			return ((::RPG::Client::CakeRaceGameFightResultParticipantData*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::CakeRaceGameFightResultParticipantData*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA___C___INITSORTEDPARTICIPANTLIST_B__23_0_OFFSET))(this, kvp);
		}

		::System::Int64 __InitSortedParticipantList_b__23_1(::RPG::Client::CakeRaceGameFightResultParticipantData* data)
		{
			return ((::System::Int64(*)(::PVOID, ::RPG::Client::CakeRaceGameFightResultParticipantData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA___C___INITSORTEDPARTICIPANTLIST_B__23_1_OFFSET))(this, data);
		}

		::System::Boolean __InitSortedParticipantList_b__23_2(::RPG::Client::CakeRaceGameFightResultParticipantData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CakeRaceGameFightResultParticipantData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA___C___INITSORTEDPARTICIPANTLIST_B__23_2_OFFSET))(this, data);
		}

		::RPG::Client::CakeRaceGameFightResultParticipantData* __InitSortedParticipantList_b__23_3(::RPG::Client::CakeRaceGameFightResultParticipantData* data, ::System::Int32 index)
		{
			return ((::RPG::Client::CakeRaceGameFightResultParticipantData*(*)(::PVOID, ::RPG::Client::CakeRaceGameFightResultParticipantData*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEFIGHTRESULTDATA___C___INITSORTEDPARTICIPANTLIST_B__23_3_OFFSET))(this, data, index);
		}
	};
}
