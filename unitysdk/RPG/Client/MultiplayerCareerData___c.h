#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FriendRankingInfo; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_MULTIPLAYERCAREERDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1373C240)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1373C280)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA___C___SORTANDSETRANKS_B__16_0_OFFSET UNITYSDK_OFFSET(0x1373C290)

namespace RPG::Client
{
	inline static constexpr unsigned int MultiplayerCareerData___c_TypeDefinitionIndex = 61073;

	class MultiplayerCareerData___c : public ::System::Object
	{
	public:
		static ::RPG::Client::MultiplayerCareerData___c** StaticGet___9()
		{
			return (::RPG::Client::MultiplayerCareerData___c**)Il2CppClass::FromTypeDefinitionIndex(MultiplayerCareerData___c_TypeDefinitionIndex)->GetStaticField(0x5F640);
		}
		static ::System::Comparison_1<::RPG::Client::FriendRankingInfo*>** StaticGet___9__16_0()
		{
			return (::System::Comparison_1<::RPG::Client::FriendRankingInfo*>**)Il2CppClass::FromTypeDefinitionIndex(MultiplayerCareerData___c_TypeDefinitionIndex)->GetStaticField(0x5F648);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __SortAndSetRanks_b__16_0(::RPG::Client::FriendRankingInfo* a, ::RPG::Client::FriendRankingInfo* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FriendRankingInfo*, ::RPG::Client::FriendRankingInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA___C___SORTANDSETRANKS_B__16_0_OFFSET))(this, a, b);
		}
	};
}
