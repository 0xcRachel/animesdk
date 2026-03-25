#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarSkillTreeAnchorType.h"
#include "unitysdk/RPG/GameCore/AvatarSkillTreePointType.h"
#include "unitysdk/Struct_2_019938BC9C50B169_5.h"
#include "unitysdk/Struct_2_BAC064D277DD99F1.h"
#include "unitysdk/Struct_2_BC950E36747FB4C9.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AvatarPropertyValue; }
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }

#define CLASS_1_16D8E68BCE885505_1_GET_ABILITYNAME_OFFSET UNITYSDK_OFFSET(0xDE456C0)
#define CLASS_1_16D8E68BCE885505_1_GET_ADDPROPERTIES_OFFSET UNITYSDK_OFFSET(0xDE455A0)
#define CLASS_1_16D8E68BCE885505_1_GET_ADDSKILLLEVELS_OFFSET UNITYSDK_OFFSET(0xDE455C0)
#define CLASS_1_16D8E68BCE885505_1_GET_ANCHORTYPE_OFFSET UNITYSDK_OFFSET(0xDE45600)
#define CLASS_1_16D8E68BCE885505_1_GET_AVATARLEVELLIMIT_OFFSET UNITYSDK_OFFSET(0xDE45660)
#define CLASS_1_16D8E68BCE885505_1_GET_AVATARPROMOTIONLIMIT_OFFSET UNITYSDK_OFFSET(0xDE45680)
#define CLASS_1_16D8E68BCE885505_1_GET_DEFAULTUNLOCK_OFFSET UNITYSDK_OFFSET(0xDE45640)
#define CLASS_1_16D8E68BCE885505_1_GET_EXTRAEFFECTIDLIST_OFFSET UNITYSDK_OFFSET(0xDE456A0)
#define CLASS_1_16D8E68BCE885505_1_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xDE45720)
#define CLASS_1_16D8E68BCE885505_1_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xDE45570)
#define CLASS_1_16D8E68BCE885505_1_GET_MATERIALLIST_OFFSET UNITYSDK_OFFSET(0xDE45700)
#define CLASS_1_16D8E68BCE885505_1_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0xDE45620)
#define CLASS_1_16D8E68BCE885505_1_GET_POINTDESC_OFFSET UNITYSDK_OFFSET(0xDE45760)
#define CLASS_1_16D8E68BCE885505_1_GET_POINTNAME_OFFSET UNITYSDK_OFFSET(0xDE45740)
#define CLASS_1_16D8E68BCE885505_1_GET_PREPOINT_OFFSET UNITYSDK_OFFSET(0xDE456E0)
#define CLASS_1_16D8E68BCE885505_1_GET_PROTOTYPEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0xDE455E0)
#define CLASS_1_16D8E68BCE885505_1_GET_RECOMMENDPRIORITY_OFFSET UNITYSDK_OFFSET(0xDE457C0)
#define CLASS_1_16D8E68BCE885505_1_GET_SIMPLEEXTRAEFFECTIDLIST_OFFSET UNITYSDK_OFFSET(0xDE457A0)
#define CLASS_1_16D8E68BCE885505_1_GET_SIMPLEPOINTDESC_OFFSET UNITYSDK_OFFSET(0xDE45780)
#define CLASS_1_16D8E68BCE885505_1_GET_SPECIALAVATARIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xDE457E0)
#define CLASS_1_16D8E68BCE885505_1_GET_SPECIALSHOWSKILL_OFFSET UNITYSDK_OFFSET(0xDE45800)
#define CLASS_1_16D8E68BCE885505_1_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xDE45580)
#define CLASS_1_16D8E68BCE885505_1_METHOD_1_71E25A039EF7FB83_OFFSET UNITYSDK_OFFSET(0xDE45830)
#define CLASS_1_16D8E68BCE885505_1_METHOD_1_968A0A3968F0CFCB_OFFSET UNITYSDK_OFFSET(0xDE45880)
#define CLASS_1_16D8E68BCE885505_1_SET_ABILITYNAME_OFFSET UNITYSDK_OFFSET(0xDE456D0)
#define CLASS_1_16D8E68BCE885505_1_SET_ADDPROPERTIES_OFFSET UNITYSDK_OFFSET(0xDE455B0)
#define CLASS_1_16D8E68BCE885505_1_SET_ADDSKILLLEVELS_OFFSET UNITYSDK_OFFSET(0xDE455D0)
#define CLASS_1_16D8E68BCE885505_1_SET_ANCHORTYPE_OFFSET UNITYSDK_OFFSET(0xDE45610)
#define CLASS_1_16D8E68BCE885505_1_SET_AVATARLEVELLIMIT_OFFSET UNITYSDK_OFFSET(0xDE45670)
#define CLASS_1_16D8E68BCE885505_1_SET_AVATARPROMOTIONLIMIT_OFFSET UNITYSDK_OFFSET(0xDE45690)
#define CLASS_1_16D8E68BCE885505_1_SET_DEFAULTUNLOCK_OFFSET UNITYSDK_OFFSET(0xDE45650)
#define CLASS_1_16D8E68BCE885505_1_SET_EXTRAEFFECTIDLIST_OFFSET UNITYSDK_OFFSET(0xDE456B0)
#define CLASS_1_16D8E68BCE885505_1_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xDE45730)
#define CLASS_1_16D8E68BCE885505_1_SET_MATERIALLIST_OFFSET UNITYSDK_OFFSET(0xDE45710)
#define CLASS_1_16D8E68BCE885505_1_SET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0xDE45630)
#define CLASS_1_16D8E68BCE885505_1_SET_POINTDESC_OFFSET UNITYSDK_OFFSET(0xDE45770)
#define CLASS_1_16D8E68BCE885505_1_SET_POINTNAME_OFFSET UNITYSDK_OFFSET(0xDE45750)
#define CLASS_1_16D8E68BCE885505_1_SET_PREPOINT_OFFSET UNITYSDK_OFFSET(0xDE456F0)
#define CLASS_1_16D8E68BCE885505_1_SET_PROTOTYPEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0xDE455F0)
#define CLASS_1_16D8E68BCE885505_1_SET_RECOMMENDPRIORITY_OFFSET UNITYSDK_OFFSET(0xDE457D0)
#define CLASS_1_16D8E68BCE885505_1_SET_SIMPLEEXTRAEFFECTIDLIST_OFFSET UNITYSDK_OFFSET(0xDE457B0)
#define CLASS_1_16D8E68BCE885505_1_SET_SIMPLEPOINTDESC_OFFSET UNITYSDK_OFFSET(0xDE45790)
#define CLASS_1_16D8E68BCE885505_1_SET_SPECIALAVATARIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xDE457F0)
#define CLASS_1_16D8E68BCE885505_1_SET_SPECIALSHOWSKILL_OFFSET UNITYSDK_OFFSET(0xDE45810)
#define CLASS_1_16D8E68BCE885505_1_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xDE45590)
#define CLASS_1_16D8E68BCE885505_1__CTOR_OFFSET UNITYSDK_OFFSET(0xDE45820)

inline static constexpr unsigned int Class_1_16D8E68BCE885505_1_TypeDefinitionIndex = 42009;

class Class_1_16D8E68BCE885505_1 : public ::System::Object
{
public:
	::System::String* _PointDesc_k__BackingField; // 0x10
	::System::String* _IconPath_k__BackingField; // 0x18
	::System::String* _SpecialAvatarImagePath_k__BackingField; // 0x20
	::System::String* _PointName_k__BackingField; // 0x28
	::Il2CppArray<::System::UInt32>* _SimpleExtraEffectIDList_k__BackingField; // 0x30
	::System::String* _SimplePointDesc_k__BackingField; // 0x38
	::Il2CppArray<::RPG::GameCore::ItemConfig*>* _MaterialList_k__BackingField; // 0x40
	::Il2CppArray<::System::UInt32>* _PrePoint_k__BackingField; // 0x48
	::Il2CppArray<::System::UInt32>* _AddSkillLevels_k__BackingField; // 0x50
	::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* _AddProperties_k__BackingField; // 0x58
	::System::String* _AbilityName_k__BackingField; // 0x60
	::Il2CppArray<::System::UInt32>* _ExtraEffectIDList_k__BackingField; // 0x68
	::Struct_2_019938BC9C50B169_5 _Identifier_k__BackingField; // 0x70
	::System::UInt32 _MaxLevel_k__BackingField; // 0x78
	::System::UInt32 _AvatarPromotionLimit_k__BackingField; // 0x7C
	::System::UInt32 _AvatarLevelLimit_k__BackingField; // 0x80
	::RPG::GameCore::AvatarSkillTreeAnchorType _AnchorType_k__BackingField; // 0x84
	::System::UInt32 _RecommendPriority_k__BackingField; // 0x88
	::Struct_2_BC950E36747FB4C9 _PrototypeIdentifier_k__BackingField; // 0x8C
	::RPG::GameCore::AvatarSkillTreePointType _Type_k__BackingField; // 0x94
	::System::Boolean _DefaultUnlock_k__BackingField; // 0x98
	::System::UInt32 _SpecialShowSkill_k__BackingField; // 0x9C

	::System::Void _ctor(::Struct_2_019938BC9C50B169_5 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_019938BC9C50B169_5))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1__CTOR_OFFSET))(this, a1);
	}

	::Struct_2_019938BC9C50B169_5 get_Identifier()
	{
		return ((::Struct_2_019938BC9C50B169_5(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_GET_IDENTIFIER_OFFSET))(this);
	}

	::RPG::GameCore::AvatarSkillTreePointType get_Type()
	{
		return ((::RPG::GameCore::AvatarSkillTreePointType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_GET_TYPE_OFFSET))(this);
	}

	::System::Void set_Type(::RPG::GameCore::AvatarSkillTreePointType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarSkillTreePointType))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_SET_TYPE_OFFSET))(this, value);
	}

	::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* get_AddProperties()
	{
		return ((::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_GET_ADDPROPERTIES_OFFSET))(this);
	}

	::System::Void set_AddProperties(::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>*))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_SET_ADDPROPERTIES_OFFSET))(this, value);
	}

	::Il2CppArray<::System::UInt32>* get_AddSkillLevels()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_GET_ADDSKILLLEVELS_OFFSET))(this);
	}

	::System::Void set_AddSkillLevels(::Il2CppArray<::System::UInt32>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_SET_ADDSKILLLEVELS_OFFSET))(this, value);
	}

	::Struct_2_BC950E36747FB4C9 get_PrototypeIdentifier()
	{
		return ((::Struct_2_BC950E36747FB4C9(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_GET_PROTOTYPEIDENTIFIER_OFFSET))(this);
	}

	::System::Void set_PrototypeIdentifier(::Struct_2_BC950E36747FB4C9 value)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BC950E36747FB4C9))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_SET_PROTOTYPEIDENTIFIER_OFFSET))(this, value);
	}

	::RPG::GameCore::AvatarSkillTreeAnchorType get_AnchorType()
	{
		return ((::RPG::GameCore::AvatarSkillTreeAnchorType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_GET_ANCHORTYPE_OFFSET))(this);
	}

	::System::Void set_AnchorType(::RPG::GameCore::AvatarSkillTreeAnchorType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarSkillTreeAnchorType))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_SET_ANCHORTYPE_OFFSET))(this, value);
	}

	::System::UInt32 get_MaxLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_GET_MAXLEVEL_OFFSET))(this);
	}

	::System::Void set_MaxLevel(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_SET_MAXLEVEL_OFFSET))(this, value);
	}

	::System::Boolean get_DefaultUnlock()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_GET_DEFAULTUNLOCK_OFFSET))(this);
	}

	::System::Void set_DefaultUnlock(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_SET_DEFAULTUNLOCK_OFFSET))(this, value);
	}

	::System::UInt32 get_AvatarLevelLimit()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_GET_AVATARLEVELLIMIT_OFFSET))(this);
	}

	::System::Void set_AvatarLevelLimit(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_SET_AVATARLEVELLIMIT_OFFSET))(this, value);
	}

	::System::UInt32 get_AvatarPromotionLimit()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_GET_AVATARPROMOTIONLIMIT_OFFSET))(this);
	}

	::System::Void set_AvatarPromotionLimit(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_SET_AVATARPROMOTIONLIMIT_OFFSET))(this, value);
	}

	::Il2CppArray<::System::UInt32>* get_ExtraEffectIDList()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_GET_EXTRAEFFECTIDLIST_OFFSET))(this);
	}

	::System::Void set_ExtraEffectIDList(::Il2CppArray<::System::UInt32>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_SET_EXTRAEFFECTIDLIST_OFFSET))(this, value);
	}

	::System::String* get_AbilityName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_GET_ABILITYNAME_OFFSET))(this);
	}

	::System::Void set_AbilityName(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_SET_ABILITYNAME_OFFSET))(this, value);
	}

	::Il2CppArray<::System::UInt32>* get_PrePoint()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_GET_PREPOINT_OFFSET))(this);
	}

	::System::Void set_PrePoint(::Il2CppArray<::System::UInt32>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_SET_PREPOINT_OFFSET))(this, value);
	}

	::Il2CppArray<::RPG::GameCore::ItemConfig*>* get_MaterialList()
	{
		return ((::Il2CppArray<::RPG::GameCore::ItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_GET_MATERIALLIST_OFFSET))(this);
	}

	::System::Void set_MaterialList(::Il2CppArray<::RPG::GameCore::ItemConfig*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ItemConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_SET_MATERIALLIST_OFFSET))(this, value);
	}

	::System::String* get_IconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_GET_ICONPATH_OFFSET))(this);
	}

	::System::Void set_IconPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_SET_ICONPATH_OFFSET))(this, value);
	}

	::System::String* get_PointName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_GET_POINTNAME_OFFSET))(this);
	}

	::System::Void set_PointName(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_SET_POINTNAME_OFFSET))(this, value);
	}

	::System::String* get_PointDesc()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_GET_POINTDESC_OFFSET))(this);
	}

	::System::Void set_PointDesc(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_SET_POINTDESC_OFFSET))(this, value);
	}

	::System::String* get_SimplePointDesc()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_GET_SIMPLEPOINTDESC_OFFSET))(this);
	}

	::System::Void set_SimplePointDesc(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_SET_SIMPLEPOINTDESC_OFFSET))(this, value);
	}

	::Il2CppArray<::System::UInt32>* get_SimpleExtraEffectIDList()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_GET_SIMPLEEXTRAEFFECTIDLIST_OFFSET))(this);
	}

	::System::Void set_SimpleExtraEffectIDList(::Il2CppArray<::System::UInt32>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_SET_SIMPLEEXTRAEFFECTIDLIST_OFFSET))(this, value);
	}

	::System::UInt32 get_RecommendPriority()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_GET_RECOMMENDPRIORITY_OFFSET))(this);
	}

	::System::Void set_RecommendPriority(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_SET_RECOMMENDPRIORITY_OFFSET))(this, value);
	}

	::System::String* get_SpecialAvatarImagePath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_GET_SPECIALAVATARIMAGEPATH_OFFSET))(this);
	}

	::System::Void set_SpecialAvatarImagePath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_SET_SPECIALAVATARIMAGEPATH_OFFSET))(this, value);
	}

	::System::UInt32 get_SpecialShowSkill()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_GET_SPECIALSHOWSKILL_OFFSET))(this);
	}

	::System::Void set_SpecialShowSkill(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_SET_SPECIALSHOWSKILL_OFFSET))(this, value);
	}

	::Struct_2_BAC064D277DD99F1 Method_1_71E25A039EF7FB83()
	{
		return ((::Struct_2_BAC064D277DD99F1(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_METHOD_1_71E25A039EF7FB83_OFFSET))(this);
	}

	::System::UInt32 Method_1_968A0A3968F0CFCB(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_16D8E68BCE885505_1_METHOD_1_968A0A3968F0CFCB_OFFSET))(this, a1);
	}
};
