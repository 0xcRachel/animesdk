#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SHOWATTACKTIME_METHOD_3_D9A99F894A479550_OFFSET UNITYSDK_OFFSET(0x16F53490)
#define RPG_GAMECORE_SHOWATTACKTIME_METHOD_3_F3DB8D33FC960E6D_OFFSET UNITYSDK_OFFSET(0x16F53510)
#define RPG_GAMECORE_SHOWATTACKTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x16F534E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowAttackTime_TypeDefinitionIndex = 20580;

	class ShowAttackTime : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* BaseAttackTime; // 0x20
		::RPG::GameCore::DynamicFloat* EnhancedAttackTime; // 0x28
		::System::Boolean IsShow; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWATTACKTIME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D9A99F894A479550(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowAttackTime*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowAttackTime*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWATTACKTIME_METHOD_3_D9A99F894A479550_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F3DB8D33FC960E6D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowAttackTime* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowAttackTime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWATTACKTIME_METHOD_3_F3DB8D33FC960E6D_OFFSET))(a1, a2);
		}
	};
}
