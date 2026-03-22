#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureFireProjectile.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class NewProjectileConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_NEWADVENTUREFIREPROJECTILE_METHOD_4_41C2FA3B57765CCC_OFFSET UNITYSDK_OFFSET(0x16CFEBD0)
#define RPG_GAMECORE_NEWADVENTUREFIREPROJECTILE_METHOD_4_EC3D5EE410FFD801_OFFSET UNITYSDK_OFFSET(0x16CFEB50)
#define RPG_GAMECORE_NEWADVENTUREFIREPROJECTILE__CTOR_OFFSET UNITYSDK_OFFSET(0x16CFEBA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NewAdventureFireProjectile_TypeDefinitionIndex = 17976;

	class NewAdventureFireProjectile : public ::RPG::GameCore::AdventureFireProjectile
	{
	public:
		::RPG::GameCore::NewProjectileConfig* NewProjectile; // 0x48
		::RPG::GameCore::TargetEvaluator* CustomAnchorTarget; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NEWADVENTUREFIREPROJECTILE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_EC3D5EE410FFD801(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NewAdventureFireProjectile*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NewAdventureFireProjectile*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NEWADVENTUREFIREPROJECTILE_METHOD_4_EC3D5EE410FFD801_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_41C2FA3B57765CCC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NewAdventureFireProjectile* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NewAdventureFireProjectile*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NEWADVENTUREFIREPROJECTILE_METHOD_4_41C2FA3B57765CCC_OFFSET))(a1, a2);
		}
	};
}
