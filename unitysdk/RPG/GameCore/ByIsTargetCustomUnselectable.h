#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISTARGETCUSTOMUNSELECTABLE_METHOD_4_34DA52CF4C605E12_OFFSET UNITYSDK_OFFSET(0x19DB23A0)
#define RPG_GAMECORE_BYISTARGETCUSTOMUNSELECTABLE_METHOD_4_5449C2657B0F73BB_OFFSET UNITYSDK_OFFSET(0x19DB26B0)
#define RPG_GAMECORE_BYISTARGETCUSTOMUNSELECTABLE_METHOD_4_8596EE2C576219A4_OFFSET UNITYSDK_OFFSET(0x19DB2630)
#define RPG_GAMECORE_BYISTARGETCUSTOMUNSELECTABLE_METHOD_4_E4A60E91BAABD74A_OFFSET UNITYSDK_OFFSET(0x19DB2470)
#define RPG_GAMECORE_BYISTARGETCUSTOMUNSELECTABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x19DB2420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsTargetCustomUnselectable_TypeDefinitionIndex = 22244;

	class ByIsTargetCustomUnselectable : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::TargetEvaluator* SourceEntity; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTARGETCUSTOMUNSELECTABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_34DA52CF4C605E12(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsTargetCustomUnselectable*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsTargetCustomUnselectable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTARGETCUSTOMUNSELECTABLE_METHOD_4_34DA52CF4C605E12_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E4A60E91BAABD74A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsTargetCustomUnselectable* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsTargetCustomUnselectable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTARGETCUSTOMUNSELECTABLE_METHOD_4_E4A60E91BAABD74A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8596EE2C576219A4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTargetCustomUnselectable*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTargetCustomUnselectable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTARGETCUSTOMUNSELECTABLE_METHOD_4_8596EE2C576219A4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5449C2657B0F73BB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTargetCustomUnselectable* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTargetCustomUnselectable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTARGETCUSTOMUNSELECTABLE_METHOD_4_5449C2657B0F73BB_OFFSET))(a1, a2);
		}
	};
}
