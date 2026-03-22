#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ProjectileDataList; }
namespace RPG::GameCore { class ProjectileOnHitList; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_FIREMULTIPROJECTILES_METHOD_3_242E597FA418FD1E_OFFSET UNITYSDK_OFFSET(0x16AA9180)
#define RPG_GAMECORE_FIREMULTIPROJECTILES_METHOD_3_5CFBFB5B20E896D1_OFFSET UNITYSDK_OFFSET(0x16AA8FC0)
#define RPG_GAMECORE_FIREMULTIPROJECTILES__CTOR_OFFSET UNITYSDK_OFFSET(0x16AA9150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FireMultiProjectiles_TypeDefinitionIndex = 20225;

	class FireMultiProjectiles : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* CasterTargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Boolean WaitProjectileFinish; // 0x28
		::Il2CppArray<::RPG::GameCore::ProjectileDataList*>* ProjectileConfigList; // 0x30
		::Il2CppArray<::RPG::GameCore::ProjectileOnHitList*>* ProjectileOnHitList; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIREMULTIPROJECTILES__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5CFBFB5B20E896D1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FireMultiProjectiles*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FireMultiProjectiles*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIREMULTIPROJECTILES_METHOD_3_5CFBFB5B20E896D1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_242E597FA418FD1E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FireMultiProjectiles* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FireMultiProjectiles*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIREMULTIPROJECTILES_METHOD_3_242E597FA418FD1E_OFFSET))(a1, a2);
		}
	};
}
