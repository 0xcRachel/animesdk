#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISTURNACTIONENTITY_METHOD_4_18BE1406EF5D374D_OFFSET UNITYSDK_OFFSET(0x19DB5D70)
#define RPG_GAMECORE_BYISTURNACTIONENTITY_METHOD_4_7E8AA5F25D2140C2_OFFSET UNITYSDK_OFFSET(0x19DB5EF0)
#define RPG_GAMECORE_BYISTURNACTIONENTITY_METHOD_4_B19E7477F1A030B7_OFFSET UNITYSDK_OFFSET(0x19DB5F70)
#define RPG_GAMECORE_BYISTURNACTIONENTITY_METHOD_4_ED99CE0F686B6DAB_OFFSET UNITYSDK_OFFSET(0x19DB5CA0)
#define RPG_GAMECORE_BYISTURNACTIONENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x19DB5D20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsTurnActionEntity_TypeDefinitionIndex = 21314;

	class ByIsTurnActionEntity : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTURNACTIONENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_ED99CE0F686B6DAB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsTurnActionEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsTurnActionEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTURNACTIONENTITY_METHOD_4_ED99CE0F686B6DAB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_18BE1406EF5D374D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsTurnActionEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsTurnActionEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTURNACTIONENTITY_METHOD_4_18BE1406EF5D374D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7E8AA5F25D2140C2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTurnActionEntity*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTurnActionEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTURNACTIONENTITY_METHOD_4_7E8AA5F25D2140C2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B19E7477F1A030B7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTurnActionEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTurnActionEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTURNACTIONENTITY_METHOD_4_B19E7477F1A030B7_OFFSET))(a1, a2);
		}
	};
}
