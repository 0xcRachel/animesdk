#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/CharacterSomatoType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_2D4CFA76DB950A9A.h"
#include "unitysdk/Struct_2_88A74A9E9AE5BA51.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CharacterConfig; }
namespace RPG::GameCore { class ElementResistanceConfig; }
namespace RPG::GameCore { class ICharacterSkillRowData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E4658DBA7A98C74D_GETSKILLROWDATABYID_OFFSET UNITYSDK_OFFSET(0x10E66600)
#define CLASS_1_E4658DBA7A98C74D_GETSKILLROWDATABYNAME_OFFSET UNITYSDK_OFFSET(0x10E665B0)
#define CLASS_1_E4658DBA7A98C74D_GETSKILLROWDATA_OFFSET UNITYSDK_OFFSET(0x10E66520)
#define CLASS_1_E4658DBA7A98C74D_GET_ACTIONICONPATH_OFFSET UNITYSDK_OFFSET(0x10E663A0)
#define CLASS_1_E4658DBA7A98C74D_GET_AIPATH_OFFSET UNITYSDK_OFFSET(0x10E66220)
#define CLASS_1_E4658DBA7A98C74D_GET_AVATARSIDEICONPATH_OFFSET UNITYSDK_OFFSET(0x10E66410)
#define CLASS_1_E4658DBA7A98C74D_GET_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0x10E66320)
#define CLASS_1_E4658DBA7A98C74D_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x10E661E0)
#define CLASS_1_E4658DBA7A98C74D_GET_DAMAGETYPERESISTANCE_OFFSET UNITYSDK_OFFSET(0x10E662C0)
#define CLASS_1_E4658DBA7A98C74D_GET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x10E662A0)
#define CLASS_1_E4658DBA7A98C74D_GET_HAVEACTIONDELAY_OFFSET UNITYSDK_OFFSET(0x10E66300)
#define CLASS_1_E4658DBA7A98C74D_GET_HEADICONPATH_OFFSET UNITYSDK_OFFSET(0x10E66380)
#define CLASS_1_E4658DBA7A98C74D_GET_INTRODUCTION_OFFSET UNITYSDK_OFFSET(0x10E66340)
#define CLASS_1_E4658DBA7A98C74D_GET_JSONPATH_OFFSET UNITYSDK_OFFSET(0x10E66200)
#define CLASS_1_E4658DBA7A98C74D_GET_JSON_OFFSET UNITYSDK_OFFSET(0x10E661C0)
#define CLASS_1_E4658DBA7A98C74D_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x10E66240)
#define CLASS_1_E4658DBA7A98C74D_GET_MODELPATH_OFFSET UNITYSDK_OFFSET(0x10E66360)
#define CLASS_1_E4658DBA7A98C74D_GET_NATUREID_OFFSET UNITYSDK_OFFSET(0x10E66280)
#define CLASS_1_E4658DBA7A98C74D_GET_ROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0x10E66400)
#define CLASS_1_E4658DBA7A98C74D_GET_ROW_OFFSET UNITYSDK_OFFSET(0x10E661A0)
#define CLASS_1_E4658DBA7A98C74D_GET_SIDEAVATARHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x10E663C0)
#define CLASS_1_E4658DBA7A98C74D_GET_SKILLROWDATAS_OFFSET UNITYSDK_OFFSET(0x10E66260)
#define CLASS_1_E4658DBA7A98C74D_GET_SOMATOTYPE_OFFSET UNITYSDK_OFFSET(0x10E66420)
#define CLASS_1_E4658DBA7A98C74D_GET_SPNEED_OFFSET UNITYSDK_OFFSET(0x10E662E0)
#define CLASS_1_E4658DBA7A98C74D_GET_WAITINGAVATARHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x10E663E0)
#define CLASS_1_E4658DBA7A98C74D_OVERRIDEDATA_OFFSET UNITYSDK_OFFSET(0x10E664C0)
#define CLASS_1_E4658DBA7A98C74D_OVERRIDEDISPLAY_OFFSET UNITYSDK_OFFSET(0x10E66440)
#define CLASS_1_E4658DBA7A98C74D_SET_ACTIONICONPATH_OFFSET UNITYSDK_OFFSET(0x10E663B0)
#define CLASS_1_E4658DBA7A98C74D_SET_AIPATH_OFFSET UNITYSDK_OFFSET(0x10E66230)
#define CLASS_1_E4658DBA7A98C74D_SET_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0x10E66330)
#define CLASS_1_E4658DBA7A98C74D_SET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x10E661F0)
#define CLASS_1_E4658DBA7A98C74D_SET_DAMAGETYPERESISTANCE_OFFSET UNITYSDK_OFFSET(0x10E662D0)
#define CLASS_1_E4658DBA7A98C74D_SET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x10E662B0)
#define CLASS_1_E4658DBA7A98C74D_SET_HAVEACTIONDELAY_OFFSET UNITYSDK_OFFSET(0x10E66310)
#define CLASS_1_E4658DBA7A98C74D_SET_HEADICONPATH_OFFSET UNITYSDK_OFFSET(0x10E66390)
#define CLASS_1_E4658DBA7A98C74D_SET_INTRODUCTION_OFFSET UNITYSDK_OFFSET(0x10E66350)
#define CLASS_1_E4658DBA7A98C74D_SET_JSONPATH_OFFSET UNITYSDK_OFFSET(0x10E66210)
#define CLASS_1_E4658DBA7A98C74D_SET_JSON_OFFSET UNITYSDK_OFFSET(0x10E661D0)
#define CLASS_1_E4658DBA7A98C74D_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x10E66250)
#define CLASS_1_E4658DBA7A98C74D_SET_MODELPATH_OFFSET UNITYSDK_OFFSET(0x10E66370)
#define CLASS_1_E4658DBA7A98C74D_SET_NATUREID_OFFSET UNITYSDK_OFFSET(0x10E66290)
#define CLASS_1_E4658DBA7A98C74D_SET_ROW_OFFSET UNITYSDK_OFFSET(0x10E661B0)
#define CLASS_1_E4658DBA7A98C74D_SET_SIDEAVATARHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x10E663D0)
#define CLASS_1_E4658DBA7A98C74D_SET_SKILLROWDATAS_OFFSET UNITYSDK_OFFSET(0x10E66270)
#define CLASS_1_E4658DBA7A98C74D_SET_SOMATOTYPE_OFFSET UNITYSDK_OFFSET(0x10E66430)
#define CLASS_1_E4658DBA7A98C74D_SET_SPNEED_OFFSET UNITYSDK_OFFSET(0x10E662F0)
#define CLASS_1_E4658DBA7A98C74D_SET_WAITINGAVATARHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x10E663F0)
#define CLASS_1_E4658DBA7A98C74D__CTOR_OFFSET UNITYSDK_OFFSET(0x10E66120)

inline static constexpr unsigned int Class_1_E4658DBA7A98C74D_TypeDefinitionIndex = 44741;

class Class_1_E4658DBA7A98C74D : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>* _DamageTypeResistance_k__BackingField; // 0x10
	::System::String* _HeadIconPath_k__BackingField; // 0x18
	::System::Object* _Row_k__BackingField; // 0x20
	::System::String* _ModelPath_k__BackingField; // 0x28
	::System::String* _JsonPath_k__BackingField; // 0x30
	::System::String* _SideAvatarHeadIconPath_k__BackingField; // 0x38
	::System::String* _ActionIconPath_k__BackingField; // 0x40
	::RPG::GameCore::CharacterConfig* _Json_k__BackingField; // 0x48
	::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>* _SkillRowDatas_k__BackingField; // 0x50
	::System::String* _WaitingAvatarHeadIconPath_k__BackingField; // 0x58
	::System::String* _AIPath_k__BackingField; // 0x60
	::System::Boolean _HaveActionDelay_k__BackingField; // 0x68
	::System::UInt32 _ConfigID_k__BackingField; // 0x6C
	::RPG::GameCore::AttackDamageType _DamageType_k__BackingField; // 0x70
	::RPG::GameCore::CharacterSomatoType _SomatoType_k__BackingField; // 0x74
	::RPG::GameCore::FixPoint _SPNeed_k__BackingField; // 0x78
	::System::UInt32 _NatureID_k__BackingField; // 0x80
	::System::UInt32 _Level_k__BackingField; // 0x84
	::RPG::Client::TextID _CharacterName_k__BackingField; // 0x88
	::RPG::Client::TextID _Introduction_k__BackingField; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D__CTOR_OFFSET))(this);
	}

	::System::Object* get_Row()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_GET_ROW_OFFSET))(this);
	}

	::System::Void set_Row(::System::Object* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_SET_ROW_OFFSET))(this, value);
	}

	::RPG::GameCore::CharacterConfig* get_Json()
	{
		return ((::RPG::GameCore::CharacterConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_GET_JSON_OFFSET))(this);
	}

	::System::Void set_Json(::RPG::GameCore::CharacterConfig* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterConfig*))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_SET_JSON_OFFSET))(this, value);
	}

	::System::UInt32 get_ConfigID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_GET_CONFIGID_OFFSET))(this);
	}

	::System::Void set_ConfigID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_SET_CONFIGID_OFFSET))(this, value);
	}

	::System::String* get_JsonPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_GET_JSONPATH_OFFSET))(this);
	}

	::System::Void set_JsonPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_SET_JSONPATH_OFFSET))(this, value);
	}

	::System::String* get_AIPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_GET_AIPATH_OFFSET))(this);
	}

	::System::Void set_AIPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_SET_AIPATH_OFFSET))(this, value);
	}

	::System::UInt32 get_Level()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_GET_LEVEL_OFFSET))(this);
	}

	::System::Void set_Level(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_SET_LEVEL_OFFSET))(this, value);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>* get_SkillRowDatas()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_GET_SKILLROWDATAS_OFFSET))(this);
	}

	::System::Void set_SkillRowDatas(::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>*))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_SET_SKILLROWDATAS_OFFSET))(this, value);
	}

	::System::UInt32 get_NatureID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_GET_NATUREID_OFFSET))(this);
	}

	::System::Void set_NatureID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_SET_NATUREID_OFFSET))(this, value);
	}

	::RPG::GameCore::AttackDamageType get_DamageType()
	{
		return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_GET_DAMAGETYPE_OFFSET))(this);
	}

	::System::Void set_DamageType(::RPG::GameCore::AttackDamageType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_SET_DAMAGETYPE_OFFSET))(this, value);
	}

	::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>* get_DamageTypeResistance()
	{
		return ((::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_GET_DAMAGETYPERESISTANCE_OFFSET))(this);
	}

	::System::Void set_DamageTypeResistance(::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_SET_DAMAGETYPERESISTANCE_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_SPNeed()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_GET_SPNEED_OFFSET))(this);
	}

	::System::Void set_SPNeed(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_SET_SPNEED_OFFSET))(this, value);
	}

	::System::Boolean get_HaveActionDelay()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_GET_HAVEACTIONDELAY_OFFSET))(this);
	}

	::System::Void set_HaveActionDelay(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_SET_HAVEACTIONDELAY_OFFSET))(this, value);
	}

	::RPG::Client::TextID get_CharacterName()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_GET_CHARACTERNAME_OFFSET))(this);
	}

	::System::Void set_CharacterName(::RPG::Client::TextID value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_SET_CHARACTERNAME_OFFSET))(this, value);
	}

	::RPG::Client::TextID get_Introduction()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_GET_INTRODUCTION_OFFSET))(this);
	}

	::System::Void set_Introduction(::RPG::Client::TextID value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_SET_INTRODUCTION_OFFSET))(this, value);
	}

	::System::String* get_ModelPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_GET_MODELPATH_OFFSET))(this);
	}

	::System::Void set_ModelPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_SET_MODELPATH_OFFSET))(this, value);
	}

	::System::String* get_HeadIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_GET_HEADICONPATH_OFFSET))(this);
	}

	::System::Void set_HeadIconPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_SET_HEADICONPATH_OFFSET))(this, value);
	}

	::System::String* get_ActionIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_GET_ACTIONICONPATH_OFFSET))(this);
	}

	::System::Void set_ActionIconPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_SET_ACTIONICONPATH_OFFSET))(this, value);
	}

	::System::String* get_SideAvatarHeadIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_GET_SIDEAVATARHEADICONPATH_OFFSET))(this);
	}

	::System::Void set_SideAvatarHeadIconPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_SET_SIDEAVATARHEADICONPATH_OFFSET))(this, value);
	}

	::System::String* get_WaitingAvatarHeadIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_GET_WAITINGAVATARHEADICONPATH_OFFSET))(this);
	}

	::System::Void set_WaitingAvatarHeadIconPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_SET_WAITINGAVATARHEADICONPATH_OFFSET))(this, value);
	}

	::System::String* get_RoundIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_GET_ROUNDICONPATH_OFFSET))(this);
	}

	::System::String* get_AvatarSideIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_GET_AVATARSIDEICONPATH_OFFSET))(this);
	}

	::RPG::GameCore::CharacterSomatoType get_SomatoType()
	{
		return ((::RPG::GameCore::CharacterSomatoType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_GET_SOMATOTYPE_OFFSET))(this);
	}

	::System::Void set_SomatoType(::RPG::GameCore::CharacterSomatoType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterSomatoType))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_SET_SOMATOTYPE_OFFSET))(this, value);
	}

	::System::Void OverrideDisplay(::Struct_2_88A74A9E9AE5BA51 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_88A74A9E9AE5BA51))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_OVERRIDEDISPLAY_OFFSET))(this, a1);
	}

	::System::Void OverrideData(::Struct_2_2D4CFA76DB950A9A a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_2D4CFA76DB950A9A))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_OVERRIDEDATA_OFFSET))(this, a1);
	}

	::RPG::GameCore::ICharacterSkillRowData* GetSkillRowData(::System::Int32 a1)
	{
		return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_GETSKILLROWDATA_OFFSET))(this, a1);
	}

	::RPG::GameCore::ICharacterSkillRowData* GetSkillRowDataByName(::System::String* a1)
	{
		return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_GETSKILLROWDATABYNAME_OFFSET))(this, a1);
	}

	::RPG::GameCore::ICharacterSkillRowData* GetSkillRowDataByID(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E4658DBA7A98C74D_GETSKILLROWDATABYID_OFFSET))(this, a1);
	}
};
