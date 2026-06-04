#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISPROPLOCKABLE_METHOD_4_1252331BDED31950_OFFSET UNITYSDK_OFFSET(0x19DACC90)
#define RPG_GAMECORE_BYISPROPLOCKABLE_METHOD_4_4701642148B09233_OFFSET UNITYSDK_OFFSET(0x19DACDB0)
#define RPG_GAMECORE_BYISPROPLOCKABLE_METHOD_4_9B2862588399B800_OFFSET UNITYSDK_OFFSET(0x19DAD030)
#define RPG_GAMECORE_BYISPROPLOCKABLE_METHOD_4_B889CAF0145B6A9B_OFFSET UNITYSDK_OFFSET(0x19DACF90)
#define RPG_GAMECORE_BYISPROPLOCKABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x19DACD30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsPropLockable_TypeDefinitionIndex = 19059;

	class ByIsPropLockable : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Boolean UseRaycast; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISPROPLOCKABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1252331BDED31950(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsPropLockable*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsPropLockable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISPROPLOCKABLE_METHOD_4_1252331BDED31950_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4701642148B09233(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsPropLockable* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsPropLockable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISPROPLOCKABLE_METHOD_4_4701642148B09233_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B889CAF0145B6A9B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsPropLockable*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsPropLockable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISPROPLOCKABLE_METHOD_4_B889CAF0145B6A9B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9B2862588399B800(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsPropLockable* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsPropLockable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISPROPLOCKABLE_METHOD_4_9B2862588399B800_OFFSET))(a1, a2);
		}
	};
}
