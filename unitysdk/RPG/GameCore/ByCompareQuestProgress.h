#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREQUESTPROGRESS_METHOD_4_125783494A95DF5A_OFFSET UNITYSDK_OFFSET(0x18FEA240)
#define RPG_GAMECORE_BYCOMPAREQUESTPROGRESS_METHOD_4_1402C501ADB4F20C_OFFSET UNITYSDK_OFFSET(0x18FEA570)
#define RPG_GAMECORE_BYCOMPAREQUESTPROGRESS_METHOD_4_3EDF3B86EAE712EF_OFFSET UNITYSDK_OFFSET(0x18FEA320)
#define RPG_GAMECORE_BYCOMPAREQUESTPROGRESS_METHOD_4_89BB4D1E2AC21215_OFFSET UNITYSDK_OFFSET(0x18FEA5F0)
#define RPG_GAMECORE_BYCOMPAREQUESTPROGRESS__CTOR_OFFSET UNITYSDK_OFFSET(0x18FEA2C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareQuestProgress_TypeDefinitionIndex = 19453;

	class ByCompareQuestProgress : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* QuestID; // 0x20
		::RPG::GameCore::DynamicFloat* Progress; // 0x28
		::RPG::GameCore::CompareType EquationType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREQUESTPROGRESS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_125783494A95DF5A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareQuestProgress*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareQuestProgress*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREQUESTPROGRESS_METHOD_4_125783494A95DF5A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3EDF3B86EAE712EF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareQuestProgress* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareQuestProgress*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREQUESTPROGRESS_METHOD_4_3EDF3B86EAE712EF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1402C501ADB4F20C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareQuestProgress*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareQuestProgress*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREQUESTPROGRESS_METHOD_4_1402C501ADB4F20C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_89BB4D1E2AC21215(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareQuestProgress* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareQuestProgress*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREQUESTPROGRESS_METHOD_4_89BB4D1E2AC21215_OFFSET))(a1, a2);
		}
	};
}
