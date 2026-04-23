#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/SkillEffect.h"
#include "unitysdk/Struct_2_019938BC9C50B169_3.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_D4714BA97EC5BBC2_GET_ATTACKTYPE_OFFSET UNITYSDK_OFFSET(0x12E3C210)
#define CLASS_1_D4714BA97EC5BBC2_GET_BPADD_OFFSET UNITYSDK_OFFSET(0x12E3C170)
#define CLASS_1_D4714BA97EC5BBC2_GET_BPNEED_OFFSET UNITYSDK_OFFSET(0x12E3C150)
#define CLASS_1_D4714BA97EC5BBC2_GET_DELAYRATIO_OFFSET UNITYSDK_OFFSET(0x12E3C190)
#define CLASS_1_D4714BA97EC5BBC2_GET_EXTRAEFFECTIDLIST_OFFSET UNITYSDK_OFFSET(0x12E3C090)
#define CLASS_1_D4714BA97EC5BBC2_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x12E3C040)
#define CLASS_1_D4714BA97EC5BBC2_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x12E3C050)
#define CLASS_1_D4714BA97EC5BBC2_GET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0x12E3C1B0)
#define CLASS_1_D4714BA97EC5BBC2_GET_SHOWSTANCELIST_OFFSET UNITYSDK_OFFSET(0x12E3C0B0)
#define CLASS_1_D4714BA97EC5BBC2_GET_SIMPLEPARAMLIST_OFFSET UNITYSDK_OFFSET(0x12E3C1D0)
#define CLASS_1_D4714BA97EC5BBC2_GET_SKILLCOMBOVALUEDELTA_OFFSET UNITYSDK_OFFSET(0x12E3C250)
#define CLASS_1_D4714BA97EC5BBC2_GET_SKILLEFFECT_OFFSET UNITYSDK_OFFSET(0x12E3C230)
#define CLASS_1_D4714BA97EC5BBC2_GET_SKILLTRIGGERKEY_OFFSET UNITYSDK_OFFSET(0x12E3C070)
#define CLASS_1_D4714BA97EC5BBC2_GET_SPADD_OFFSET UNITYSDK_OFFSET(0x12E3C0D0)
#define CLASS_1_D4714BA97EC5BBC2_GET_SPBASE_OFFSET UNITYSDK_OFFSET(0x12E3C0F0)
#define CLASS_1_D4714BA97EC5BBC2_GET_SPMULTIPLERATIO_OFFSET UNITYSDK_OFFSET(0x12E3C130)
#define CLASS_1_D4714BA97EC5BBC2_GET_SPNEED_OFFSET UNITYSDK_OFFSET(0x12E3C110)
#define CLASS_1_D4714BA97EC5BBC2_GET_STANCEDAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x12E3C1F0)
#define CLASS_1_D4714BA97EC5BBC2_SET_ATTACKTYPE_OFFSET UNITYSDK_OFFSET(0x12E3C220)
#define CLASS_1_D4714BA97EC5BBC2_SET_BPADD_OFFSET UNITYSDK_OFFSET(0x12E3C180)
#define CLASS_1_D4714BA97EC5BBC2_SET_BPNEED_OFFSET UNITYSDK_OFFSET(0x12E3C160)
#define CLASS_1_D4714BA97EC5BBC2_SET_DELAYRATIO_OFFSET UNITYSDK_OFFSET(0x12E3C1A0)
#define CLASS_1_D4714BA97EC5BBC2_SET_EXTRAEFFECTIDLIST_OFFSET UNITYSDK_OFFSET(0x12E3C0A0)
#define CLASS_1_D4714BA97EC5BBC2_SET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x12E3C060)
#define CLASS_1_D4714BA97EC5BBC2_SET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0x12E3C1C0)
#define CLASS_1_D4714BA97EC5BBC2_SET_SHOWSTANCELIST_OFFSET UNITYSDK_OFFSET(0x12E3C0C0)
#define CLASS_1_D4714BA97EC5BBC2_SET_SIMPLEPARAMLIST_OFFSET UNITYSDK_OFFSET(0x12E3C1E0)
#define CLASS_1_D4714BA97EC5BBC2_SET_SKILLCOMBOVALUEDELTA_OFFSET UNITYSDK_OFFSET(0x12E3C260)
#define CLASS_1_D4714BA97EC5BBC2_SET_SKILLEFFECT_OFFSET UNITYSDK_OFFSET(0x12E3C240)
#define CLASS_1_D4714BA97EC5BBC2_SET_SKILLTRIGGERKEY_OFFSET UNITYSDK_OFFSET(0x12E3C080)
#define CLASS_1_D4714BA97EC5BBC2_SET_SPADD_OFFSET UNITYSDK_OFFSET(0x12E3C0E0)
#define CLASS_1_D4714BA97EC5BBC2_SET_SPBASE_OFFSET UNITYSDK_OFFSET(0x12E3C100)
#define CLASS_1_D4714BA97EC5BBC2_SET_SPMULTIPLERATIO_OFFSET UNITYSDK_OFFSET(0x12E3C140)
#define CLASS_1_D4714BA97EC5BBC2_SET_SPNEED_OFFSET UNITYSDK_OFFSET(0x12E3C120)
#define CLASS_1_D4714BA97EC5BBC2_SET_STANCEDAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x12E3C200)
#define CLASS_1_D4714BA97EC5BBC2__CTOR_OFFSET UNITYSDK_OFFSET(0x12E3C270)

inline static constexpr unsigned int Class_1_D4714BA97EC5BBC2_TypeDefinitionIndex = 47946;

class Class_1_D4714BA97EC5BBC2 : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::FixPoint>* _ParamList_k__BackingField; // 0x10
	::System::String* _SkillTriggerKey_k__BackingField; // 0x18
	::Il2CppArray<::RPG::GameCore::FixPoint>* _SimpleParamList_k__BackingField; // 0x20
	::Il2CppArray<::RPG::GameCore::FixPoint>* _ShowStanceList_k__BackingField; // 0x28
	::Il2CppArray<::System::UInt32>* _ExtraEffectIDList_k__BackingField; // 0x30
	::RPG::GameCore::FixPoint _SkillComboValueDelta_k__BackingField; // 0x38
	::RPG::GameCore::FixPoint _BPAdd_k__BackingField; // 0x40
	::System::UInt32 _MaxLevel_k__BackingField; // 0x48
	::RPG::GameCore::AttackDamageType _StanceDamageType_k__BackingField; // 0x4C
	::RPG::GameCore::FixPoint _SPBase_k__BackingField; // 0x50
	::RPG::GameCore::FixPoint _BPNeed_k__BackingField; // 0x58
	::RPG::GameCore::FixPoint _SPMultipleRatio_k__BackingField; // 0x60
	::RPG::GameCore::FixPoint _DelayRatio_k__BackingField; // 0x68
	::RPG::GameCore::FixPoint _SPAdd_k__BackingField; // 0x70
	::RPG::GameCore::AttackType _AttackType_k__BackingField; // 0x78
	::RPG::GameCore::SkillEffect _SkillEffect_k__BackingField; // 0x7C
	::RPG::GameCore::FixPoint _SPNeed_k__BackingField; // 0x80
	::Struct_2_019938BC9C50B169_3 _Identifier_k__BackingField; // 0x88

	::System::Void _ctor(::Struct_2_019938BC9C50B169_3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_019938BC9C50B169_3))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2__CTOR_OFFSET))(this, a1);
	}

	::Struct_2_019938BC9C50B169_3 get_Identifier()
	{
		return ((::Struct_2_019938BC9C50B169_3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_GET_IDENTIFIER_OFFSET))(this);
	}

	::System::UInt32 get_MaxLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_GET_MAXLEVEL_OFFSET))(this);
	}

	::System::Void set_MaxLevel(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_SET_MAXLEVEL_OFFSET))(this, value);
	}

	::System::String* get_SkillTriggerKey()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_GET_SKILLTRIGGERKEY_OFFSET))(this);
	}

	::System::Void set_SkillTriggerKey(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_SET_SKILLTRIGGERKEY_OFFSET))(this, value);
	}

	::Il2CppArray<::System::UInt32>* get_ExtraEffectIDList()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_GET_EXTRAEFFECTIDLIST_OFFSET))(this);
	}

	::System::Void set_ExtraEffectIDList(::Il2CppArray<::System::UInt32>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_SET_EXTRAEFFECTIDLIST_OFFSET))(this, value);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* get_ShowStanceList()
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_GET_SHOWSTANCELIST_OFFSET))(this);
	}

	::System::Void set_ShowStanceList(::Il2CppArray<::RPG::GameCore::FixPoint>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_SET_SHOWSTANCELIST_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_SPAdd()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_GET_SPADD_OFFSET))(this);
	}

	::System::Void set_SPAdd(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_SET_SPADD_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_SPBase()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_GET_SPBASE_OFFSET))(this);
	}

	::System::Void set_SPBase(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_SET_SPBASE_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_SPNeed()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_GET_SPNEED_OFFSET))(this);
	}

	::System::Void set_SPNeed(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_SET_SPNEED_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_SPMultipleRatio()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_GET_SPMULTIPLERATIO_OFFSET))(this);
	}

	::System::Void set_SPMultipleRatio(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_SET_SPMULTIPLERATIO_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_BPNeed()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_GET_BPNEED_OFFSET))(this);
	}

	::System::Void set_BPNeed(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_SET_BPNEED_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_BPAdd()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_GET_BPADD_OFFSET))(this);
	}

	::System::Void set_BPAdd(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_SET_BPADD_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_DelayRatio()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_GET_DELAYRATIO_OFFSET))(this);
	}

	::System::Void set_DelayRatio(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_SET_DELAYRATIO_OFFSET))(this, value);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* get_ParamList()
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_GET_PARAMLIST_OFFSET))(this);
	}

	::System::Void set_ParamList(::Il2CppArray<::RPG::GameCore::FixPoint>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_SET_PARAMLIST_OFFSET))(this, value);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* get_SimpleParamList()
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_GET_SIMPLEPARAMLIST_OFFSET))(this);
	}

	::System::Void set_SimpleParamList(::Il2CppArray<::RPG::GameCore::FixPoint>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_SET_SIMPLEPARAMLIST_OFFSET))(this, value);
	}

	::RPG::GameCore::AttackDamageType get_StanceDamageType()
	{
		return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_GET_STANCEDAMAGETYPE_OFFSET))(this);
	}

	::System::Void set_StanceDamageType(::RPG::GameCore::AttackDamageType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_SET_STANCEDAMAGETYPE_OFFSET))(this, value);
	}

	::RPG::GameCore::AttackType get_AttackType()
	{
		return ((::RPG::GameCore::AttackType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_GET_ATTACKTYPE_OFFSET))(this);
	}

	::System::Void set_AttackType(::RPG::GameCore::AttackType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackType))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_SET_ATTACKTYPE_OFFSET))(this, value);
	}

	::RPG::GameCore::SkillEffect get_SkillEffect()
	{
		return ((::RPG::GameCore::SkillEffect(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_GET_SKILLEFFECT_OFFSET))(this);
	}

	::System::Void set_SkillEffect(::RPG::GameCore::SkillEffect value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillEffect))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_SET_SKILLEFFECT_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_SkillComboValueDelta()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_GET_SKILLCOMBOVALUEDELTA_OFFSET))(this);
	}

	::System::Void set_SkillComboValueDelta(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_D4714BA97EC5BBC2_SET_SKILLCOMBOVALUEDELTA_OFFSET))(this, value);
	}
};
