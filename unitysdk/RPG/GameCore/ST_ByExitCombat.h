#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ST_BYEXITCOMBAT_METHOD_4_C43949211D8AE381_OFFSET UNITYSDK_OFFSET(0x1A17BAA0)
#define RPG_GAMECORE_ST_BYEXITCOMBAT_METHOD_4_CD55CC68E3732C78_OFFSET UNITYSDK_OFFSET(0x1A17B810)
#define RPG_GAMECORE_ST_BYEXITCOMBAT_METHOD_4_DFF5C3047D9FAC52_OFFSET UNITYSDK_OFFSET(0x1A17B8E0)
#define RPG_GAMECORE_ST_BYEXITCOMBAT_METHOD_4_E7A30516BFC0A1CD_OFFSET UNITYSDK_OFFSET(0x1A17BA20)
#define RPG_GAMECORE_ST_BYEXITCOMBAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A17B890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByExitCombat_TypeDefinitionIndex = 18968;

	class ST_ByExitCombat : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYEXITCOMBAT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_CD55CC68E3732C78(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByExitCombat*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByExitCombat*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYEXITCOMBAT_METHOD_4_CD55CC68E3732C78_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DFF5C3047D9FAC52(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByExitCombat* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByExitCombat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYEXITCOMBAT_METHOD_4_DFF5C3047D9FAC52_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E7A30516BFC0A1CD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByExitCombat*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByExitCombat*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYEXITCOMBAT_METHOD_4_E7A30516BFC0A1CD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C43949211D8AE381(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByExitCombat* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByExitCombat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYEXITCOMBAT_METHOD_4_C43949211D8AE381_OFFSET))(a1, a2);
		}
	};
}
