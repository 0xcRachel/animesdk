#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARENPCMONSTERID_METHOD_4_7CE37173D172AE51_OFFSET UNITYSDK_OFFSET(0x18FE28C0)
#define RPG_GAMECORE_BYCOMPARENPCMONSTERID_METHOD_4_9FD5B054BC260969_OFFSET UNITYSDK_OFFSET(0x18FE2990)
#define RPG_GAMECORE_BYCOMPARENPCMONSTERID_METHOD_4_BF41F41DE310DFEA_OFFSET UNITYSDK_OFFSET(0x18FE2BB0)
#define RPG_GAMECORE_BYCOMPARENPCMONSTERID_METHOD_4_F947DBC0530B3569_OFFSET UNITYSDK_OFFSET(0x18FE2C30)
#define RPG_GAMECORE_BYCOMPARENPCMONSTERID__CTOR_OFFSET UNITYSDK_OFFSET(0x18FE2940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareNPCMonsterID_TypeDefinitionIndex = 19883;

	class ByCompareNPCMonsterID : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::UInt32 NPCMonsterID; // 0x28
		::System::Boolean CompareProtoTypeID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARENPCMONSTERID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7CE37173D172AE51(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareNPCMonsterID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareNPCMonsterID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARENPCMONSTERID_METHOD_4_7CE37173D172AE51_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9FD5B054BC260969(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareNPCMonsterID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareNPCMonsterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARENPCMONSTERID_METHOD_4_9FD5B054BC260969_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BF41F41DE310DFEA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareNPCMonsterID*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareNPCMonsterID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARENPCMONSTERID_METHOD_4_BF41F41DE310DFEA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F947DBC0530B3569(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareNPCMonsterID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareNPCMonsterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARENPCMONSTERID_METHOD_4_F947DBC0530B3569_OFFSET))(a1, a2);
		}
	};
}
