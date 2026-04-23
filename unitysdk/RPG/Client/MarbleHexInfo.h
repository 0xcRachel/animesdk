#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MarbleRandomBuffRow; }
namespace System { class String; }

#define RPG_CLIENT_MARBLEHEXINFO_CREATE_OFFSET UNITYSDK_OFFSET(0x16F5D460)
#define RPG_CLIENT_MARBLEHEXINFO_GET_ALLYICONPATH_OFFSET UNITYSDK_OFFSET(0x16F5DB10)
#define RPG_CLIENT_MARBLEHEXINFO_GET_DESC_OFFSET UNITYSDK_OFFSET(0x16F5DBD0)
#define RPG_CLIENT_MARBLEHEXINFO_GET_EFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x16F5D970)
#define RPG_CLIENT_MARBLEHEXINFO_GET_ENEMYICONPATH_OFFSET UNITYSDK_OFFSET(0x16F5DB30)
#define RPG_CLIENT_MARBLEHEXINFO_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x16F5D9D0)
#define RPG_CLIENT_MARBLEHEXINFO_GET_HEXID_OFFSET UNITYSDK_OFFSET(0x16F5D950)
#define RPG_CLIENT_MARBLEHEXINFO_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x16F5DA30)
#define RPG_CLIENT_MARBLEHEXINFO_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x16F5D9B0)
#define RPG_CLIENT_MARBLEHEXINFO_GET_ISENEMY_OFFSET UNITYSDK_OFFSET(0x16F5D990)
#define RPG_CLIENT_MARBLEHEXINFO_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x16F5DA10)
#define RPG_CLIENT_MARBLEHEXINFO_GET_SEALID_OFFSET UNITYSDK_OFFSET(0x16F5D9F0)
#define RPG_CLIENT_MARBLEHEXINFO_GET_SKILLNAME_OFFSET UNITYSDK_OFFSET(0x16F5DBB0)
#define RPG_CLIENT_MARBLEHEXINFO_GET_SMALLALLYICONPATH_OFFSET UNITYSDK_OFFSET(0x16F5DB50)
#define RPG_CLIENT_MARBLEHEXINFO_GET_SMALLENEMYICONPATH_OFFSET UNITYSDK_OFFSET(0x16F5DB70)
#define RPG_CLIENT_MARBLEHEXINFO_GET_SMALLICONPATH_OFFSET UNITYSDK_OFFSET(0x16F5DAA0)
#define RPG_CLIENT_MARBLEHEXINFO_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x16F5DB90)
#define RPG_CLIENT_MARBLEHEXINFO_SET_ALLYICONPATH_OFFSET UNITYSDK_OFFSET(0x16F5DB20)
#define RPG_CLIENT_MARBLEHEXINFO_SET_DESC_OFFSET UNITYSDK_OFFSET(0x16F5DBE0)
#define RPG_CLIENT_MARBLEHEXINFO_SET_EFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x16F5D980)
#define RPG_CLIENT_MARBLEHEXINFO_SET_ENEMYICONPATH_OFFSET UNITYSDK_OFFSET(0x16F5DB40)
#define RPG_CLIENT_MARBLEHEXINFO_SET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x16F5D9E0)
#define RPG_CLIENT_MARBLEHEXINFO_SET_HEXID_OFFSET UNITYSDK_OFFSET(0x16F5D960)
#define RPG_CLIENT_MARBLEHEXINFO_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x16F5D9C0)
#define RPG_CLIENT_MARBLEHEXINFO_SET_ISENEMY_OFFSET UNITYSDK_OFFSET(0x16F5D9A0)
#define RPG_CLIENT_MARBLEHEXINFO_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x16F5DA20)
#define RPG_CLIENT_MARBLEHEXINFO_SET_SEALID_OFFSET UNITYSDK_OFFSET(0x16F5DA00)
#define RPG_CLIENT_MARBLEHEXINFO_SET_SKILLNAME_OFFSET UNITYSDK_OFFSET(0x16F5DBC0)
#define RPG_CLIENT_MARBLEHEXINFO_SET_SMALLALLYICONPATH_OFFSET UNITYSDK_OFFSET(0x16F5DB60)
#define RPG_CLIENT_MARBLEHEXINFO_SET_SMALLENEMYICONPATH_OFFSET UNITYSDK_OFFSET(0x16F5DB80)
#define RPG_CLIENT_MARBLEHEXINFO_SET_TITLE_OFFSET UNITYSDK_OFFSET(0x16F5DBA0)
#define RPG_CLIENT_MARBLEHEXINFO__CREATELEVELUPHEXINFO_OFFSET UNITYSDK_OFFSET(0x16F5D520)
#define RPG_CLIENT_MARBLEHEXINFO__CREATENORMALHEXINFO_OFFSET UNITYSDK_OFFSET(0x16F5D800)
#define RPG_CLIENT_MARBLEHEXINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x16F5D450)

namespace RPG::Client
{
	inline static constexpr unsigned int MarbleHexInfo_TypeDefinitionIndex = 60587;

	class MarbleHexInfo : public ::System::Object
	{
	public:
		// static const ::System::UInt32 _SEAL_LEVEL_UP_EFFECT = 0x1; // 0x0
		::System::String* _SmallEnemyIconPath_k__BackingField; // 0x10
		::System::String* _AllyIconPath_k__BackingField; // 0x18
		::System::String* _Desc_k__BackingField; // 0x20
		::System::String* _EnemyIconPath_k__BackingField; // 0x28
		::System::String* _SmallAllyIconPath_k__BackingField; // 0x30
		::System::UInt32 _HexID_k__BackingField; // 0x38
		::System::UInt32 _EntityID_k__BackingField; // 0x3C
		::RPG::Client::TextID _SkillName_k__BackingField; // 0x40
		::System::UInt32 _EffectType_k__BackingField; // 0x50
		::System::UInt32 _Level_k__BackingField; // 0x54
		::RPG::Client::TextID _Title_k__BackingField; // 0x58
		::System::UInt32 _SealID_k__BackingField; // 0x68
		::System::Boolean _IsEnemy_k__BackingField; // 0x6C
		::System::Boolean _IsActive_k__BackingField; // 0x6D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MarbleHexInfo* Create(::System::UInt32 hexID, ::System::UInt32 entityID, ::System::Boolean isEnemy, ::System::Boolean isActive)
		{
			return ((::RPG::Client::MarbleHexInfo*(*)(::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO_CREATE_OFFSET))(hexID, entityID, isEnemy, isActive);
		}

		static ::RPG::Client::MarbleHexInfo* _CreateLevelUpHexInfo(::RPG::GameCore::MarbleRandomBuffRow* hex, ::System::UInt32 entityID, ::System::Boolean isEnemy, ::System::Boolean isActive)
		{
			return ((::RPG::Client::MarbleHexInfo*(*)(::RPG::GameCore::MarbleRandomBuffRow*, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO__CREATELEVELUPHEXINFO_OFFSET))(hex, entityID, isEnemy, isActive);
		}

		static ::RPG::Client::MarbleHexInfo* _CreateNormalHexInfo(::RPG::GameCore::MarbleRandomBuffRow* hex, ::System::Boolean isEnemy, ::System::Boolean isActive)
		{
			return ((::RPG::Client::MarbleHexInfo*(*)(::RPG::GameCore::MarbleRandomBuffRow*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO__CREATENORMALHEXINFO_OFFSET))(hex, isEnemy, isActive);
		}

		::System::UInt32 get_HexID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO_GET_HEXID_OFFSET))(this);
		}

		::System::Void set_HexID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO_SET_HEXID_OFFSET))(this, value);
		}

		::System::UInt32 get_EffectType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO_GET_EFFECTTYPE_OFFSET))(this);
		}

		::System::Void set_EffectType(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO_SET_EFFECTTYPE_OFFSET))(this, value);
		}

		::System::Boolean get_IsEnemy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO_GET_ISENEMY_OFFSET))(this);
		}

		::System::Void set_IsEnemy(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO_SET_ISENEMY_OFFSET))(this, value);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Void set_IsActive(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO_SET_ISACTIVE_OFFSET))(this, value);
		}

		::System::UInt32 get_EntityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO_GET_ENTITYID_OFFSET))(this);
		}

		::System::Void set_EntityID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO_SET_ENTITYID_OFFSET))(this, value);
		}

		::System::UInt32 get_SealID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO_GET_SEALID_OFFSET))(this);
		}

		::System::Void set_SealID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO_SET_SEALID_OFFSET))(this, value);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO_SET_LEVEL_OFFSET))(this, value);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_SmallIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO_GET_SMALLICONPATH_OFFSET))(this);
		}

		::System::String* get_AllyIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO_GET_ALLYICONPATH_OFFSET))(this);
		}

		::System::Void set_AllyIconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO_SET_ALLYICONPATH_OFFSET))(this, value);
		}

		::System::String* get_EnemyIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO_GET_ENEMYICONPATH_OFFSET))(this);
		}

		::System::Void set_EnemyIconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO_SET_ENEMYICONPATH_OFFSET))(this, value);
		}

		::System::String* get_SmallAllyIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO_GET_SMALLALLYICONPATH_OFFSET))(this);
		}

		::System::Void set_SmallAllyIconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO_SET_SMALLALLYICONPATH_OFFSET))(this, value);
		}

		::System::String* get_SmallEnemyIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO_GET_SMALLENEMYICONPATH_OFFSET))(this);
		}

		::System::Void set_SmallEnemyIconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO_SET_SMALLENEMYICONPATH_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO_GET_TITLE_OFFSET))(this);
		}

		::System::Void set_Title(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO_SET_TITLE_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_SkillName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO_GET_SKILLNAME_OFFSET))(this);
		}

		::System::Void set_SkillName(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO_SET_SKILLNAME_OFFSET))(this, value);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEHEXINFO_SET_DESC_OFFSET))(this, value);
		}
	};
}
