#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BattleViewModeLightInitData_TabType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_BATTLEVIEWMODELIGHTINITDATA_CREATEDEFAULT_OFFSET UNITYSDK_OFFSET(0x8DE3D90)
#define RPG_CLIENT_BATTLEVIEWMODELIGHTINITDATA_CREATESKILLTAB_OFFSET UNITYSDK_OFFSET(0x8DE42C0)
#define RPG_CLIENT_BATTLEVIEWMODELIGHTINITDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x8DE4120)
#define RPG_CLIENT_BATTLEVIEWMODELIGHTINITDATA_GET_INITATTACKTYPE_OFFSET UNITYSDK_OFFSET(0x8DE43F0)
#define RPG_CLIENT_BATTLEVIEWMODELIGHTINITDATA_GET_INITTABTYPE_OFFSET UNITYSDK_OFFSET(0x8DE43D0)
#define RPG_CLIENT_BATTLEVIEWMODELIGHTINITDATA_SET_INITATTACKTYPE_OFFSET UNITYSDK_OFFSET(0x8DE4400)
#define RPG_CLIENT_BATTLEVIEWMODELIGHTINITDATA_SET_INITTABTYPE_OFFSET UNITYSDK_OFFSET(0x8DE43E0)
#define RPG_CLIENT_BATTLEVIEWMODELIGHTINITDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x8DE4410)
#define RPG_CLIENT_BATTLEVIEWMODELIGHTINITDATA__CREATEINTERNAL_OFFSET UNITYSDK_OFFSET(0x8DE4230)
#define RPG_CLIENT_BATTLEVIEWMODELIGHTINITDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8DE43C0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleViewModeLightInitData_TypeDefinitionIndex = 57442;

	class BattleViewModeLightInitData : public ::System::Object
	{
	public:
		static ::RPG::GameCore::AttackType* StaticGet_DefaultAttackType()
		{
			return (::RPG::GameCore::AttackType*)Il2CppClass::FromTypeDefinitionIndex(BattleViewModeLightInitData_TypeDefinitionIndex)->GetStaticField(0xDB40);
		}
		static ::RPG::Client::BattleViewModeLightInitData_TabType* StaticGet_DefaultTabType()
		{
			return (::RPG::Client::BattleViewModeLightInitData_TabType*)Il2CppClass::FromTypeDefinitionIndex(BattleViewModeLightInitData_TypeDefinitionIndex)->GetStaticField(0xDB44);
		}
		::RPG::GameCore::AttackType _InitAttackType_k__BackingField; // 0x10
		::RPG::Client::BattleViewModeLightInitData_TabType _InitTabType_k__BackingField; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODELIGHTINITDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODELIGHTINITDATA__CCTOR_OFFSET))();
		}

		static ::RPG::Client::BattleViewModeLightInitData* Create(::RPG::Client::BattleViewModeLightInitData_TabType initTabType)
		{
			return ((::RPG::Client::BattleViewModeLightInitData*(*)(::RPG::Client::BattleViewModeLightInitData_TabType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODELIGHTINITDATA_CREATE_OFFSET))(initTabType);
		}

		static ::RPG::Client::BattleViewModeLightInitData* CreateDefault()
		{
			return ((::RPG::Client::BattleViewModeLightInitData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODELIGHTINITDATA_CREATEDEFAULT_OFFSET))();
		}

		static ::RPG::Client::BattleViewModeLightInitData* CreateSkillTab(::RPG::GameCore::AttackType initAttackType)
		{
			return ((::RPG::Client::BattleViewModeLightInitData*(*)(::RPG::GameCore::AttackType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODELIGHTINITDATA_CREATESKILLTAB_OFFSET))(initAttackType);
		}

		static ::RPG::Client::BattleViewModeLightInitData* _CreateInternal(::RPG::Client::BattleViewModeLightInitData_TabType initTabType, ::RPG::GameCore::AttackType initAttackType)
		{
			return ((::RPG::Client::BattleViewModeLightInitData*(*)(::RPG::Client::BattleViewModeLightInitData_TabType, ::RPG::GameCore::AttackType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODELIGHTINITDATA__CREATEINTERNAL_OFFSET))(initTabType, initAttackType);
		}

		::RPG::Client::BattleViewModeLightInitData_TabType get_InitTabType()
		{
			return ((::RPG::Client::BattleViewModeLightInitData_TabType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODELIGHTINITDATA_GET_INITTABTYPE_OFFSET))(this);
		}

		::System::Void set_InitTabType(::RPG::Client::BattleViewModeLightInitData_TabType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleViewModeLightInitData_TabType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODELIGHTINITDATA_SET_INITTABTYPE_OFFSET))(this, value);
		}

		::RPG::GameCore::AttackType get_InitAttackType()
		{
			return ((::RPG::GameCore::AttackType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODELIGHTINITDATA_GET_INITATTACKTYPE_OFFSET))(this);
		}

		::System::Void set_InitAttackType(::RPG::GameCore::AttackType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEVIEWMODELIGHTINITDATA_SET_INITATTACKTYPE_OFFSET))(this, value);
		}
	};
}
