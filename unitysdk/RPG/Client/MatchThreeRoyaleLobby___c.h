#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeOpponentData; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_MATCHTHREEROYALELOBBY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17EF51D0)
#define RPG_CLIENT_MATCHTHREEROYALELOBBY___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17EF5210)
#define RPG_CLIENT_MATCHTHREEROYALELOBBY___C__GETPROCESSEDOPPONENTS_B__6_0_OFFSET UNITYSDK_OFFSET(0x17EF5220)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeRoyaleLobby___c_TypeDefinitionIndex = 60832;

	class MatchThreeRoyaleLobby___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::MatchThreeOpponentData*>** StaticGet___9__6_0()
		{
			return (::System::Comparison_1<::RPG::Client::MatchThreeOpponentData*>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeRoyaleLobby___c_TypeDefinitionIndex)->GetStaticField(0x558E0);
		}
		static ::RPG::Client::MatchThreeRoyaleLobby___c** StaticGet___9()
		{
			return (::RPG::Client::MatchThreeRoyaleLobby___c**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeRoyaleLobby___c_TypeDefinitionIndex)->GetStaticField(0x558E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALELOBBY___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALELOBBY___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetProcessedOpponents_b__6_0(::RPG::Client::MatchThreeOpponentData* a, ::RPG::Client::MatchThreeOpponentData* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MatchThreeOpponentData*, ::RPG::Client::MatchThreeOpponentData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALELOBBY___C__GETPROCESSEDOPPONENTS_B__6_0_OFFSET))(this, a, b);
		}
	};
}
