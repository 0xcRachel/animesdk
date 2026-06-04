#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYPROPISCREATEBYACTIVESKILL_METHOD_4_85510344A93E1E50_OFFSET UNITYSDK_OFFSET(0x19DBDFD0)
#define RPG_GAMECORE_BYPROPISCREATEBYACTIVESKILL_METHOD_4_9DF974EAE7378AAD_OFFSET UNITYSDK_OFFSET(0x19DBDDC0)
#define RPG_GAMECORE_BYPROPISCREATEBYACTIVESKILL_METHOD_4_B37A5B73E7C78F98_OFFSET UNITYSDK_OFFSET(0x19DBE050)
#define RPG_GAMECORE_BYPROPISCREATEBYACTIVESKILL_METHOD_4_CC32DC2BBFA39D07_OFFSET UNITYSDK_OFFSET(0x19DBDE90)
#define RPG_GAMECORE_BYPROPISCREATEBYACTIVESKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x19DBDE40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByPropIsCreateByActiveSkill_TypeDefinitionIndex = 19172;

	class ByPropIsCreateByActiveSkill : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPROPISCREATEBYACTIVESKILL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_9DF974EAE7378AAD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPropIsCreateByActiveSkill*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPropIsCreateByActiveSkill*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPROPISCREATEBYACTIVESKILL_METHOD_4_9DF974EAE7378AAD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CC32DC2BBFA39D07(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByPropIsCreateByActiveSkill* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByPropIsCreateByActiveSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPROPISCREATEBYACTIVESKILL_METHOD_4_CC32DC2BBFA39D07_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_85510344A93E1E50(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPropIsCreateByActiveSkill*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPropIsCreateByActiveSkill*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPROPISCREATEBYACTIVESKILL_METHOD_4_85510344A93E1E50_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B37A5B73E7C78F98(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPropIsCreateByActiveSkill* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPropIsCreateByActiveSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPROPISCREATEBYACTIVESKILL_METHOD_4_B37A5B73E7C78F98_OFFSET))(a1, a2);
		}
	};
}
