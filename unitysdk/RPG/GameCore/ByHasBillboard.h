#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHASBILLBOARD_METHOD_4_2E6A9297139FCFA6_OFFSET UNITYSDK_OFFSET(0x19D8FAA0)
#define RPG_GAMECORE_BYHASBILLBOARD_METHOD_4_613BD1FA7DC2217F_OFFSET UNITYSDK_OFFSET(0x19D8FA00)
#define RPG_GAMECORE_BYHASBILLBOARD_METHOD_4_68D35877E89AFD95_OFFSET UNITYSDK_OFFSET(0x19D8F760)
#define RPG_GAMECORE_BYHASBILLBOARD_METHOD_4_84B40662F38CC2D2_OFFSET UNITYSDK_OFFSET(0x19D8F880)
#define RPG_GAMECORE_BYHASBILLBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x19D8F800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHasBillboard_TypeDefinitionIndex = 21198;

	class ByHasBillboard : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASBILLBOARD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_68D35877E89AFD95(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasBillboard*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasBillboard*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASBILLBOARD_METHOD_4_68D35877E89AFD95_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_84B40662F38CC2D2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasBillboard* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasBillboard*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASBILLBOARD_METHOD_4_84B40662F38CC2D2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_613BD1FA7DC2217F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasBillboard*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasBillboard*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASBILLBOARD_METHOD_4_613BD1FA7DC2217F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2E6A9297139FCFA6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasBillboard* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasBillboard*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASBILLBOARD_METHOD_4_2E6A9297139FCFA6_OFFSET))(a1, a2);
		}
	};
}
