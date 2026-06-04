#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREISWOLFBROBULLETACTIVATED_METHOD_4_1DD0D7679E96258C_OFFSET UNITYSDK_OFFSET(0x18FD9460)
#define RPG_GAMECORE_BYCOMPAREISWOLFBROBULLETACTIVATED_METHOD_4_B69719B7CF0878D4_OFFSET UNITYSDK_OFFSET(0x18FD93E0)
#define RPG_GAMECORE_BYCOMPAREISWOLFBROBULLETACTIVATED_METHOD_4_BC5A443A800D5803_OFFSET UNITYSDK_OFFSET(0x18FD92A0)
#define RPG_GAMECORE_BYCOMPAREISWOLFBROBULLETACTIVATED_METHOD_4_DB481AEFEF358759_OFFSET UNITYSDK_OFFSET(0x18FD91D0)
#define RPG_GAMECORE_BYCOMPAREISWOLFBROBULLETACTIVATED__CTOR_OFFSET UNITYSDK_OFFSET(0x18FD9250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareIsWolfBroBulletActivated_TypeDefinitionIndex = 20767;

	class ByCompareIsWolfBroBulletActivated : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREISWOLFBROBULLETACTIVATED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_DB481AEFEF358759(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareIsWolfBroBulletActivated*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareIsWolfBroBulletActivated*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREISWOLFBROBULLETACTIVATED_METHOD_4_DB481AEFEF358759_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BC5A443A800D5803(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareIsWolfBroBulletActivated* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareIsWolfBroBulletActivated*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREISWOLFBROBULLETACTIVATED_METHOD_4_BC5A443A800D5803_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B69719B7CF0878D4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareIsWolfBroBulletActivated*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareIsWolfBroBulletActivated*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREISWOLFBROBULLETACTIVATED_METHOD_4_B69719B7CF0878D4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1DD0D7679E96258C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareIsWolfBroBulletActivated* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareIsWolfBroBulletActivated*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREISWOLFBROBULLETACTIVATED_METHOD_4_1DD0D7679E96258C_OFFSET))(a1, a2);
		}
	};
}
