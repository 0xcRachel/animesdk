#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHADVSKILLTARGETENTITYLIST_METHOD_4_00761F0D1664988C_OFFSET UNITYSDK_OFFSET(0x1AC53290)
#define RPG_GAMECORE_TARGETFETCHADVSKILLTARGETENTITYLIST_METHOD_4_5050096A7006D40C_OFFSET UNITYSDK_OFFSET(0x1AC4CA50)
#define RPG_GAMECORE_TARGETFETCHADVSKILLTARGETENTITYLIST_METHOD_4_7785FE5B7F7F301C_OFFSET UNITYSDK_OFFSET(0x1AC3F150)
#define RPG_GAMECORE_TARGETFETCHADVSKILLTARGETENTITYLIST_METHOD_4_9E5D5601A1B9071E_OFFSET UNITYSDK_OFFSET(0x1AC531D0)
#define RPG_GAMECORE_TARGETFETCHADVSKILLTARGETENTITYLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC3F100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAdvSkillTargetEntityList_TypeDefinitionIndex = 22550;

	class TargetFetchAdvSkillTargetEntityList : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVSKILLTARGETENTITYLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_9E5D5601A1B9071E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvSkillTargetEntityList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvSkillTargetEntityList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVSKILLTARGETENTITYLIST_METHOD_4_9E5D5601A1B9071E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7785FE5B7F7F301C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvSkillTargetEntityList* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvSkillTargetEntityList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVSKILLTARGETENTITYLIST_METHOD_4_7785FE5B7F7F301C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5050096A7006D40C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvSkillTargetEntityList*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvSkillTargetEntityList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVSKILLTARGETENTITYLIST_METHOD_4_5050096A7006D40C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_00761F0D1664988C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvSkillTargetEntityList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvSkillTargetEntityList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVSKILLTARGETENTITYLIST_METHOD_4_00761F0D1664988C_OFFSET))(a1, a2);
		}
	};
}
