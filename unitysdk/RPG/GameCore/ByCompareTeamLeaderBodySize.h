#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BodySize.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARETEAMLEADERBODYSIZE_METHOD_4_3A5B2F9C4760CC2D_OFFSET UNITYSDK_OFFSET(0x18FFA0D0)
#define RPG_GAMECORE_BYCOMPARETEAMLEADERBODYSIZE_METHOD_4_76AF95734C55F309_OFFSET UNITYSDK_OFFSET(0x18FFA3A0)
#define RPG_GAMECORE_BYCOMPARETEAMLEADERBODYSIZE_METHOD_4_948AF340B74934C3_OFFSET UNITYSDK_OFFSET(0x18FFA1A0)
#define RPG_GAMECORE_BYCOMPARETEAMLEADERBODYSIZE_METHOD_4_BF837C8F8426ED90_OFFSET UNITYSDK_OFFSET(0x18FFA320)
#define RPG_GAMECORE_BYCOMPARETEAMLEADERBODYSIZE__CTOR_OFFSET UNITYSDK_OFFSET(0x18FFA150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareTeamLeaderBodySize_TypeDefinitionIndex = 19938;

	class ByCompareTeamLeaderBodySize : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::BodySize BodySize; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEAMLEADERBODYSIZE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_3A5B2F9C4760CC2D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareTeamLeaderBodySize*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareTeamLeaderBodySize*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEAMLEADERBODYSIZE_METHOD_4_3A5B2F9C4760CC2D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_948AF340B74934C3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareTeamLeaderBodySize* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareTeamLeaderBodySize*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEAMLEADERBODYSIZE_METHOD_4_948AF340B74934C3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BF837C8F8426ED90(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTeamLeaderBodySize*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTeamLeaderBodySize*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEAMLEADERBODYSIZE_METHOD_4_BF837C8F8426ED90_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_76AF95734C55F309(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTeamLeaderBodySize* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTeamLeaderBodySize*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEAMLEADERBODYSIZE_METHOD_4_76AF95734C55F309_OFFSET))(a1, a2);
		}
	};
}
