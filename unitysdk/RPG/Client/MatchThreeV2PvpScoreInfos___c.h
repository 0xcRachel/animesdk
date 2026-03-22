#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeV2PvpScoreData; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_MATCHTHREEV2PVPSCOREINFOS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9691590)
#define RPG_CLIENT_MATCHTHREEV2PVPSCOREINFOS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x96915D0)
#define RPG_CLIENT_MATCHTHREEV2PVPSCOREINFOS___C__GETSCOREDATA_B__5_0_OFFSET UNITYSDK_OFFSET(0x96915E0)
#define RPG_CLIENT_MATCHTHREEV2PVPSCOREINFOS___C__GETSCOREDATA_B__5_1_OFFSET UNITYSDK_OFFSET(0x96916C0)
#define RPG_CLIENT_MATCHTHREEV2PVPSCOREINFOS___C__GETSCOREDATA_B__5_2_OFFSET UNITYSDK_OFFSET(0x96917A0)
#define RPG_CLIENT_MATCHTHREEV2PVPSCOREINFOS___C__GETSCOREDATA_B__6_0_OFFSET UNITYSDK_OFFSET(0x9691880)
#define RPG_CLIENT_MATCHTHREEV2PVPSCOREINFOS___C__GETSCOREDATA_B__6_1_OFFSET UNITYSDK_OFFSET(0x9691900)
#define RPG_CLIENT_MATCHTHREEV2PVPSCOREINFOS___C__GETSCOREDATA_B__6_2_OFFSET UNITYSDK_OFFSET(0x9691980)
#define RPG_CLIENT_MATCHTHREEV2PVPSCOREINFOS___C__GETSCOREDATA_B__6_3_OFFSET UNITYSDK_OFFSET(0x9691A00)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2PvpScoreInfos___c_TypeDefinitionIndex = 52535;

	class MatchThreeV2PvpScoreInfos___c : public ::System::Object
	{
	public:
		static ::RPG::Client::MatchThreeV2PvpScoreInfos___c** StaticGet___9()
		{
			return (::RPG::Client::MatchThreeV2PvpScoreInfos___c**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeV2PvpScoreInfos___c_TypeDefinitionIndex)->GetStaticField(0x2EA40);
		}
		static ::System::Predicate_1<::RPG::Client::MatchThreeV2PvpScoreData*>** StaticGet___9__6_0()
		{
			return (::System::Predicate_1<::RPG::Client::MatchThreeV2PvpScoreData*>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeV2PvpScoreInfos___c_TypeDefinitionIndex)->GetStaticField(0x2EA48);
		}
		static ::System::Predicate_1<::RPG::Client::MatchThreeV2PvpScoreData*>** StaticGet___9__5_1()
		{
			return (::System::Predicate_1<::RPG::Client::MatchThreeV2PvpScoreData*>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeV2PvpScoreInfos___c_TypeDefinitionIndex)->GetStaticField(0x2EA50);
		}
		static ::System::Predicate_1<::RPG::Client::MatchThreeV2PvpScoreData*>** StaticGet___9__6_3()
		{
			return (::System::Predicate_1<::RPG::Client::MatchThreeV2PvpScoreData*>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeV2PvpScoreInfos___c_TypeDefinitionIndex)->GetStaticField(0x2EA58);
		}
		static ::System::Predicate_1<::RPG::Client::MatchThreeV2PvpScoreData*>** StaticGet___9__6_1()
		{
			return (::System::Predicate_1<::RPG::Client::MatchThreeV2PvpScoreData*>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeV2PvpScoreInfos___c_TypeDefinitionIndex)->GetStaticField(0x2EA60);
		}
		static ::System::Predicate_1<::RPG::Client::MatchThreeV2PvpScoreData*>** StaticGet___9__5_0()
		{
			return (::System::Predicate_1<::RPG::Client::MatchThreeV2PvpScoreData*>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeV2PvpScoreInfos___c_TypeDefinitionIndex)->GetStaticField(0x2EA68);
		}
		static ::System::Predicate_1<::RPG::Client::MatchThreeV2PvpScoreData*>** StaticGet___9__5_2()
		{
			return (::System::Predicate_1<::RPG::Client::MatchThreeV2PvpScoreData*>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeV2PvpScoreInfos___c_TypeDefinitionIndex)->GetStaticField(0x2EA70);
		}
		static ::System::Predicate_1<::RPG::Client::MatchThreeV2PvpScoreData*>** StaticGet___9__6_2()
		{
			return (::System::Predicate_1<::RPG::Client::MatchThreeV2PvpScoreData*>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeV2PvpScoreInfos___c_TypeDefinitionIndex)->GetStaticField(0x2EA78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPSCOREINFOS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPSCOREINFOS___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetScoreData_b__5_0(::RPG::Client::MatchThreeV2PvpScoreData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MatchThreeV2PvpScoreData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPSCOREINFOS___C__GETSCOREDATA_B__5_0_OFFSET))(this, data);
		}

		::System::Boolean _GetScoreData_b__5_1(::RPG::Client::MatchThreeV2PvpScoreData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MatchThreeV2PvpScoreData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPSCOREINFOS___C__GETSCOREDATA_B__5_1_OFFSET))(this, data);
		}

		::System::Boolean _GetScoreData_b__5_2(::RPG::Client::MatchThreeV2PvpScoreData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MatchThreeV2PvpScoreData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPSCOREINFOS___C__GETSCOREDATA_B__5_2_OFFSET))(this, data);
		}

		::System::Boolean _GetScoreData_b__6_0(::RPG::Client::MatchThreeV2PvpScoreData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MatchThreeV2PvpScoreData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPSCOREINFOS___C__GETSCOREDATA_B__6_0_OFFSET))(this, data);
		}

		::System::Boolean _GetScoreData_b__6_1(::RPG::Client::MatchThreeV2PvpScoreData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MatchThreeV2PvpScoreData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPSCOREINFOS___C__GETSCOREDATA_B__6_1_OFFSET))(this, data);
		}

		::System::Boolean _GetScoreData_b__6_2(::RPG::Client::MatchThreeV2PvpScoreData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MatchThreeV2PvpScoreData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPSCOREINFOS___C__GETSCOREDATA_B__6_2_OFFSET))(this, data);
		}

		::System::Boolean _GetScoreData_b__6_3(::RPG::Client::MatchThreeV2PvpScoreData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MatchThreeV2PvpScoreData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PVPSCOREINFOS___C__GETSCOREDATA_B__6_3_OFFSET))(this, data);
		}
	};
}
