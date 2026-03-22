#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarRow_AvatarCommonRowWrap.h"

namespace RPG::GameCore { class AvatarPropertyValue; }
namespace RPG::GameCore { class AvatarRow; }
namespace RPG::GameCore { class EnhancedAvatarRow; }
namespace RPG::GameCore { class GridFightRoleConfigRow; }
namespace RPG::GameCore { class GridFightRoleStarConfigRow; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTAVATARROW_AVATARCOMMONROWWRAP_BINDOVERRIDESKILLS_OFFSET UNITYSDK_OFFSET(0x16B1A9D0)
#define RPG_GAMECORE_GRIDFIGHTAVATARROW_AVATARCOMMONROWWRAP_BIND_OFFSET UNITYSDK_OFFSET(0x16B1AAB0)
#define RPG_GAMECORE_GRIDFIGHTAVATARROW_AVATARCOMMONROWWRAP_CLEAR_OFFSET UNITYSDK_OFFSET(0x16B1A990)
#define RPG_GAMECORE_GRIDFIGHTAVATARROW_AVATARCOMMONROWWRAP_GETAVATARSTARROW_OFFSET UNITYSDK_OFFSET(0x16B1AC30)
#define RPG_GAMECORE_GRIDFIGHTAVATARROW_AVATARCOMMONROWWRAP_GETID_OFFSET UNITYSDK_OFFSET(0x16B1ACD0)
#define RPG_GAMECORE_GRIDFIGHTAVATARROW_AVATARCOMMONROWWRAP_GETRARITY_OFFSET UNITYSDK_OFFSET(0x16B1AD10)
#define RPG_GAMECORE_GRIDFIGHTAVATARROW_AVATARCOMMONROWWRAP_GETSTARPROPERTYVALUES_OFFSET UNITYSDK_OFFSET(0x16B1ACF0)
#define RPG_GAMECORE_GRIDFIGHTAVATARROW_AVATARCOMMONROWWRAP_GETSTAR_OFFSET UNITYSDK_OFFSET(0x16B1ACC0)
#define RPG_GAMECORE_GRIDFIGHTAVATARROW_AVATARCOMMONROWWRAP_GET_ALLBACKENDRANKIDLIST_OFFSET UNITYSDK_OFFSET(0x16B1ADC0)
#define RPG_GAMECORE_GRIDFIGHTAVATARROW_AVATARCOMMONROWWRAP_GET_ASBACKAVATAR_OFFSET UNITYSDK_OFFSET(0x16B1AC70)
#define RPG_GAMECORE_GRIDFIGHTAVATARROW_AVATARCOMMONROWWRAP_GET_INHERITEDSKILLLIST_OFFSET UNITYSDK_OFFSET(0x16B1AD80)
#define RPG_GAMECORE_GRIDFIGHTAVATARROW_AVATARCOMMONROWWRAP_GET_ISVALIDGRIDFIGHTAVATAR_OFFSET UNITYSDK_OFFSET(0x16B1AC00)
#define RPG_GAMECORE_GRIDFIGHTAVATARROW_AVATARCOMMONROWWRAP_GET_JSONPATH_OFFSET UNITYSDK_OFFSET(0x16B1AD30)
#define RPG_GAMECORE_GRIDFIGHTAVATARROW_AVATARCOMMONROWWRAP_GET_MGRREF_OFFSET UNITYSDK_OFFSET(0x16B1ABE0)
#define RPG_GAMECORE_GRIDFIGHTAVATARROW_AVATARCOMMONROWWRAP_GET_SKILLLIST_OFFSET UNITYSDK_OFFSET(0x16B1AC80)
#define RPG_GAMECORE_GRIDFIGHTAVATARROW_AVATARCOMMONROWWRAP_GET__ASFRONTAVATAR_OFFSET UNITYSDK_OFFSET(0x16B1AA80)
#define RPG_GAMECORE_GRIDFIGHTAVATARROW_AVATARCOMMONROWWRAP_SET_MGRREF_OFFSET UNITYSDK_OFFSET(0x16B1ABF0)
#define RPG_GAMECORE_GRIDFIGHTAVATARROW_AVATARCOMMONROWWRAP__CTOR_OFFSET UNITYSDK_OFFSET(0x16B1ADE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightAvatarRow_AvatarCommonRowWrap_TypeDefinitionIndex = 22085;

	class GridFightAvatarRow_AvatarCommonRowWrap : public ::RPG::GameCore::AvatarRow_AvatarCommonRowWrap
	{
	public:
		::System::String* _OverrideConfigPath; // 0x28
		::System::Object* _MgrRef_k__BackingField; // 0x30
		::RPG::GameCore::GridFightRoleStarConfigRow* _GridFightStarRow; // 0x38
		::RPG::GameCore::GridFightRoleConfigRow* _GridFightRow; // 0x40
		::Il2CppArray<::System::UInt32>* _OverrideSkillList; // 0x48
		::System::UInt32 _Star; // 0x50
		::System::Boolean _IsBackendAvatar; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTAVATARROW_AVATARCOMMONROWWRAP__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTAVATARROW_AVATARCOMMONROWWRAP_CLEAR_OFFSET))(this);
		}

		::System::Void BindOverrideSkills()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTAVATARROW_AVATARCOMMONROWWRAP_BINDOVERRIDESKILLS_OFFSET))(this);
		}

		::System::Void Bind(::RPG::GameCore::AvatarRow* row, ::RPG::GameCore::EnhancedAvatarRow* enhancedAvatarRow, ::System::UInt32 star, ::System::UInt32 roleId, ::System::Boolean isbackendAvatar)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarRow*, ::RPG::GameCore::EnhancedAvatarRow*, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTAVATARROW_AVATARCOMMONROWWRAP_BIND_OFFSET))(this, row, enhancedAvatarRow, star, roleId, isbackendAvatar);
		}

		::System::Object* get_MgrRef()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTAVATARROW_AVATARCOMMONROWWRAP_GET_MGRREF_OFFSET))(this);
		}

		::System::Void set_MgrRef(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTAVATARROW_AVATARCOMMONROWWRAP_SET_MGRREF_OFFSET))(this, value);
		}

		::System::Boolean get_IsValidGridFightAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTAVATARROW_AVATARCOMMONROWWRAP_GET_ISVALIDGRIDFIGHTAVATAR_OFFSET))(this);
		}

		::RPG::GameCore::GridFightRoleStarConfigRow* GetAvatarStarRow(::System::Boolean isValid)
		{
			return ((::RPG::GameCore::GridFightRoleStarConfigRow*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTAVATARROW_AVATARCOMMONROWWRAP_GETAVATARSTARROW_OFFSET))(this, isValid);
		}

		::System::Boolean get__AsFrontAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTAVATARROW_AVATARCOMMONROWWRAP_GET__ASFRONTAVATAR_OFFSET))(this);
		}

		::System::Boolean get_AsBackAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTAVATARROW_AVATARCOMMONROWWRAP_GET_ASBACKAVATAR_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_SkillList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTAVATARROW_AVATARCOMMONROWWRAP_GET_SKILLLIST_OFFSET))(this);
		}

		::System::UInt32 GetStar()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTAVATARROW_AVATARCOMMONROWWRAP_GETSTAR_OFFSET))(this);
		}

		::System::UInt32 GetID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTAVATARROW_AVATARCOMMONROWWRAP_GETID_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* GetStarPropertyValues()
		{
			return ((::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTAVATARROW_AVATARCOMMONROWWRAP_GETSTARPROPERTYVALUES_OFFSET))(this);
		}

		::System::UInt32 GetRarity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTAVATARROW_AVATARCOMMONROWWRAP_GETRARITY_OFFSET))(this);
		}

		::System::String* get_JsonPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTAVATARROW_AVATARCOMMONROWWRAP_GET_JSONPATH_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_InheritedSkillList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTAVATARROW_AVATARCOMMONROWWRAP_GET_INHERITEDSKILLLIST_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_AllBackendRankIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTAVATARROW_AVATARCOMMONROWWRAP_GET_ALLBACKENDRANKIDLIST_OFFSET))(this);
		}
	};
}
