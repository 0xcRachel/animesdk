#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AvatarSkillTreeAnchorType.h"
#include "unitysdk/RPG/GameCore/AvatarSpecialUltraType.h"
#include "unitysdk/RPG/GameCore/CombatPowerAvatarRarityType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_BAC064D277DD99F1.h"
#include "unitysdk/Struct_2_BC950E36747FB4C9.h"
#include "unitysdk/System/Object.h"

class Class_1_35B5591E4067D7D2;
class Class_1_A3A2B28DB41BA84A_1;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_34489C07F511839D_GET_ADVENTUREPLAYERID_OFFSET UNITYSDK_OFFSET(0x15BDB810)
#define CLASS_1_34489C07F511839D_GET_AICONFIGPATH_OFFSET UNITYSDK_OFFSET(0x15BDB950)
#define CLASS_1_34489C07F511839D_GET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x15BDB790)
#define CLASS_1_34489C07F511839D_GET_DEFAULTUNLOCKTRACENODEPROFILES_OFFSET UNITYSDK_OFFSET(0x15BDBA10)
#define CLASS_1_34489C07F511839D_GET_EIDOLONIDS_OFFSET UNITYSDK_OFFSET(0x15BDB910)
#define CLASS_1_34489C07F511839D_GET_ENGLISHNAME_OFFSET UNITYSDK_OFFSET(0x15BDB7D0)
#define CLASS_1_34489C07F511839D_GET_EXPGROUP_OFFSET UNITYSDK_OFFSET(0x15BDB8B0)
#define CLASS_1_34489C07F511839D_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x15BDB760)
#define CLASS_1_34489C07F511839D_GET_JSONCONFIGPATH_OFFSET UNITYSDK_OFFSET(0x15BDB850)
#define CLASS_1_34489C07F511839D_GET_MAXEIDOLONLEVEL_OFFSET UNITYSDK_OFFSET(0x15BDB8F0)
#define CLASS_1_34489C07F511839D_GET_MAXPROMOTIONLEVEL_OFFSET UNITYSDK_OFFSET(0x15BDB8D0)
#define CLASS_1_34489C07F511839D_GET_MAXSP_OFFSET UNITYSDK_OFFSET(0x15BDB890)
#define CLASS_1_34489C07F511839D_GET_NAME_OFFSET UNITYSDK_OFFSET(0x15BDB7B0)
#define CLASS_1_34489C07F511839D_GET_NATUREID_OFFSET UNITYSDK_OFFSET(0x15BDB870)
#define CLASS_1_34489C07F511839D_GET_PATH_OFFSET UNITYSDK_OFFSET(0x15BDB770)
#define CLASS_1_34489C07F511839D_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x15BDB830)
#define CLASS_1_34489C07F511839D_GET_SKILLIDS_OFFSET UNITYSDK_OFFSET(0x15BDB930)
#define CLASS_1_34489C07F511839D_GET_SPECIALULTRASKILLENERGYLACKTIPS_OFFSET UNITYSDK_OFFSET(0x15BDB9D0)
#define CLASS_1_34489C07F511839D_GET_SPECIALULTRASKILLRESOURCEPATH_OFFSET UNITYSDK_OFFSET(0x15BDB9B0)
#define CLASS_1_34489C07F511839D_GET_TRACEANCHORTYPES_OFFSET UNITYSDK_OFFSET(0x15BDB9F0)
#define CLASS_1_34489C07F511839D_GET_TRACETREEPREFABPATH_OFFSET UNITYSDK_OFFSET(0x15BDB970)
#define CLASS_1_34489C07F511839D_GET_ULTRASKILLTYPE_OFFSET UNITYSDK_OFFSET(0x15BDB990)
#define CLASS_1_34489C07F511839D_GET_VOTAG_OFFSET UNITYSDK_OFFSET(0x15BDB7F0)
#define CLASS_1_34489C07F511839D_SET_ADVENTUREPLAYERID_OFFSET UNITYSDK_OFFSET(0x15BDB820)
#define CLASS_1_34489C07F511839D_SET_AICONFIGPATH_OFFSET UNITYSDK_OFFSET(0x15BDB960)
#define CLASS_1_34489C07F511839D_SET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x15BDB7A0)
#define CLASS_1_34489C07F511839D_SET_DEFAULTUNLOCKTRACENODEPROFILES_OFFSET UNITYSDK_OFFSET(0x15BDBA20)
#define CLASS_1_34489C07F511839D_SET_EIDOLONIDS_OFFSET UNITYSDK_OFFSET(0x15BDB920)
#define CLASS_1_34489C07F511839D_SET_ENGLISHNAME_OFFSET UNITYSDK_OFFSET(0x15BDB7E0)
#define CLASS_1_34489C07F511839D_SET_EXPGROUP_OFFSET UNITYSDK_OFFSET(0x15BDB8C0)
#define CLASS_1_34489C07F511839D_SET_JSONCONFIGPATH_OFFSET UNITYSDK_OFFSET(0x15BDB860)
#define CLASS_1_34489C07F511839D_SET_MAXEIDOLONLEVEL_OFFSET UNITYSDK_OFFSET(0x15BDB900)
#define CLASS_1_34489C07F511839D_SET_MAXPROMOTIONLEVEL_OFFSET UNITYSDK_OFFSET(0x15BDB8E0)
#define CLASS_1_34489C07F511839D_SET_MAXSP_OFFSET UNITYSDK_OFFSET(0x15BDB8A0)
#define CLASS_1_34489C07F511839D_SET_NAME_OFFSET UNITYSDK_OFFSET(0x15BDB7C0)
#define CLASS_1_34489C07F511839D_SET_NATUREID_OFFSET UNITYSDK_OFFSET(0x15BDB880)
#define CLASS_1_34489C07F511839D_SET_PATH_OFFSET UNITYSDK_OFFSET(0x15BDB780)
#define CLASS_1_34489C07F511839D_SET_RARITY_OFFSET UNITYSDK_OFFSET(0x15BDB840)
#define CLASS_1_34489C07F511839D_SET_SKILLIDS_OFFSET UNITYSDK_OFFSET(0x15BDB940)
#define CLASS_1_34489C07F511839D_SET_SPECIALULTRASKILLENERGYLACKTIPS_OFFSET UNITYSDK_OFFSET(0x15BDB9E0)
#define CLASS_1_34489C07F511839D_SET_SPECIALULTRASKILLRESOURCEPATH_OFFSET UNITYSDK_OFFSET(0x15BDB9C0)
#define CLASS_1_34489C07F511839D_SET_TRACEANCHORTYPES_OFFSET UNITYSDK_OFFSET(0x15BDBA00)
#define CLASS_1_34489C07F511839D_SET_TRACETREEPREFABPATH_OFFSET UNITYSDK_OFFSET(0x15BDB980)
#define CLASS_1_34489C07F511839D_SET_ULTRASKILLTYPE_OFFSET UNITYSDK_OFFSET(0x15BDB9A0)
#define CLASS_1_34489C07F511839D_SET_VOTAG_OFFSET UNITYSDK_OFFSET(0x15BDB800)
#define CLASS_1_34489C07F511839D__CTOR_OFFSET UNITYSDK_OFFSET(0x15BDBA30)

inline static constexpr unsigned int Class_1_34489C07F511839D_TypeDefinitionIndex = 48592;

class Class_1_34489C07F511839D : public ::System::Object
{
public:
	::System::String* _AIConfigPath_k__BackingField; // 0x10
	::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::GameCore::AvatarSkillTreeAnchorType, ::Struct_2_BAC064D277DD99F1>* _DefaultUnlockTraceNodeProfiles_k__BackingField; // 0x18
	::System::String* _VOTag_k__BackingField; // 0x20
	::Il2CppArray<::System::UInt32>* _SkillIDs_k__BackingField; // 0x28
	::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::AvatarSkillTreeAnchorType>* _TraceAnchorTypes_k__BackingField; // 0x30
	::System::String* _JsonConfigPath_k__BackingField; // 0x38
	::System::String* _TraceTreePrefabPath_k__BackingField; // 0x40
	::Class_1_A3A2B28DB41BA84A_1* _DamageType_k__BackingField; // 0x48
	::System::String* _SpecialUltraSkillResourcePath_k__BackingField; // 0x50
	::Il2CppArray<::System::UInt32>* _EidolonIDs_k__BackingField; // 0x58
	::Class_1_35B5591E4067D7D2* _Path_k__BackingField; // 0x60
	::System::UInt32 _NatureID_k__BackingField; // 0x68
	::Struct_2_BC950E36747FB4C9 _Identifier_k__BackingField; // 0x6C
	::System::UInt32 _MaxEidolonLevel_k__BackingField; // 0x74
	::RPG::GameCore::CombatPowerAvatarRarityType _Rarity_k__BackingField; // 0x78
	::RPG::GameCore::FixPoint _MaxSP_k__BackingField; // 0x80
	::RPG::Client::TextID _EnglishName_k__BackingField; // 0x88
	::System::UInt32 _AdventurePlayerID_k__BackingField; // 0x98
	::System::UInt32 _ExpGroup_k__BackingField; // 0x9C
	::RPG::GameCore::AvatarSpecialUltraType _UltraSkillType_k__BackingField; // 0xA0
	::System::UInt32 _MaxPromotionLevel_k__BackingField; // 0xA4
	::RPG::Client::TextID _SpecialUltraSkillEnergyLackTips_k__BackingField; // 0xA8
	::RPG::Client::TextID _Name_k__BackingField; // 0xB8

	::System::Void _ctor(::Struct_2_BC950E36747FB4C9 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BC950E36747FB4C9))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D__CTOR_OFFSET))(this, a1);
	}

	::Struct_2_BC950E36747FB4C9 get_Identifier()
	{
		return ((::Struct_2_BC950E36747FB4C9(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_GET_IDENTIFIER_OFFSET))(this);
	}

	::Class_1_35B5591E4067D7D2* get_Path()
	{
		return ((::Class_1_35B5591E4067D7D2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_GET_PATH_OFFSET))(this);
	}

	::System::Void set_Path(::Class_1_35B5591E4067D7D2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_35B5591E4067D7D2*))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_SET_PATH_OFFSET))(this, a1);
	}

	::Class_1_A3A2B28DB41BA84A_1* get_DamageType()
	{
		return ((::Class_1_A3A2B28DB41BA84A_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_GET_DAMAGETYPE_OFFSET))(this);
	}

	::System::Void set_DamageType(::Class_1_A3A2B28DB41BA84A_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A3A2B28DB41BA84A_1*))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_SET_DAMAGETYPE_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_Name()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_GET_NAME_OFFSET))(this);
	}

	::System::Void set_Name(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_SET_NAME_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_EnglishName()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_GET_ENGLISHNAME_OFFSET))(this);
	}

	::System::Void set_EnglishName(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_SET_ENGLISHNAME_OFFSET))(this, a1);
	}

	::System::String* get_VOTag()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_GET_VOTAG_OFFSET))(this);
	}

	::System::Void set_VOTag(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_SET_VOTAG_OFFSET))(this, a1);
	}

	::System::UInt32 get_AdventurePlayerID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_GET_ADVENTUREPLAYERID_OFFSET))(this);
	}

	::System::Void set_AdventurePlayerID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_SET_ADVENTUREPLAYERID_OFFSET))(this, a1);
	}

	::RPG::GameCore::CombatPowerAvatarRarityType get_Rarity()
	{
		return ((::RPG::GameCore::CombatPowerAvatarRarityType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_GET_RARITY_OFFSET))(this);
	}

	::System::Void set_Rarity(::RPG::GameCore::CombatPowerAvatarRarityType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CombatPowerAvatarRarityType))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_SET_RARITY_OFFSET))(this, a1);
	}

	::System::String* get_JsonConfigPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_GET_JSONCONFIGPATH_OFFSET))(this);
	}

	::System::Void set_JsonConfigPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_SET_JSONCONFIGPATH_OFFSET))(this, a1);
	}

	::System::UInt32 get_NatureID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_GET_NATUREID_OFFSET))(this);
	}

	::System::Void set_NatureID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_SET_NATUREID_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_MaxSP()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_GET_MAXSP_OFFSET))(this);
	}

	::System::Void set_MaxSP(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_SET_MAXSP_OFFSET))(this, a1);
	}

	::System::UInt32 get_ExpGroup()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_GET_EXPGROUP_OFFSET))(this);
	}

	::System::Void set_ExpGroup(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_SET_EXPGROUP_OFFSET))(this, a1);
	}

	::System::UInt32 get_MaxPromotionLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_GET_MAXPROMOTIONLEVEL_OFFSET))(this);
	}

	::System::Void set_MaxPromotionLevel(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_SET_MAXPROMOTIONLEVEL_OFFSET))(this, a1);
	}

	::System::UInt32 get_MaxEidolonLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_GET_MAXEIDOLONLEVEL_OFFSET))(this);
	}

	::System::Void set_MaxEidolonLevel(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_SET_MAXEIDOLONLEVEL_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::UInt32>* get_EidolonIDs()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_GET_EIDOLONIDS_OFFSET))(this);
	}

	::System::Void set_EidolonIDs(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_SET_EIDOLONIDS_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::UInt32>* get_SkillIDs()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_GET_SKILLIDS_OFFSET))(this);
	}

	::System::Void set_SkillIDs(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_SET_SKILLIDS_OFFSET))(this, a1);
	}

	::System::String* get_AIConfigPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_GET_AICONFIGPATH_OFFSET))(this);
	}

	::System::Void set_AIConfigPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_SET_AICONFIGPATH_OFFSET))(this, a1);
	}

	::System::String* get_TraceTreePrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_GET_TRACETREEPREFABPATH_OFFSET))(this);
	}

	::System::Void set_TraceTreePrefabPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_SET_TRACETREEPREFABPATH_OFFSET))(this, a1);
	}

	::RPG::GameCore::AvatarSpecialUltraType get_UltraSkillType()
	{
		return ((::RPG::GameCore::AvatarSpecialUltraType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_GET_ULTRASKILLTYPE_OFFSET))(this);
	}

	::System::Void set_UltraSkillType(::RPG::GameCore::AvatarSpecialUltraType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarSpecialUltraType))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_SET_ULTRASKILLTYPE_OFFSET))(this, a1);
	}

	::System::String* get_SpecialUltraSkillResourcePath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_GET_SPECIALULTRASKILLRESOURCEPATH_OFFSET))(this);
	}

	::System::Void set_SpecialUltraSkillResourcePath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_SET_SPECIALULTRASKILLRESOURCEPATH_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_SpecialUltraSkillEnergyLackTips()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_GET_SPECIALULTRASKILLENERGYLACKTIPS_OFFSET))(this);
	}

	::System::Void set_SpecialUltraSkillEnergyLackTips(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_SET_SPECIALULTRASKILLENERGYLACKTIPS_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::AvatarSkillTreeAnchorType>* get_TraceAnchorTypes()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::AvatarSkillTreeAnchorType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_GET_TRACEANCHORTYPES_OFFSET))(this);
	}

	::System::Void set_TraceAnchorTypes(::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::AvatarSkillTreeAnchorType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::AvatarSkillTreeAnchorType>*))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_SET_TRACEANCHORTYPES_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::GameCore::AvatarSkillTreeAnchorType, ::Struct_2_BAC064D277DD99F1>* get_DefaultUnlockTraceNodeProfiles()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::GameCore::AvatarSkillTreeAnchorType, ::Struct_2_BAC064D277DD99F1>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_GET_DEFAULTUNLOCKTRACENODEPROFILES_OFFSET))(this);
	}

	::System::Void set_DefaultUnlockTraceNodeProfiles(::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::GameCore::AvatarSkillTreeAnchorType, ::Struct_2_BAC064D277DD99F1>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::GameCore::AvatarSkillTreeAnchorType, ::Struct_2_BAC064D277DD99F1>*))((::PBYTE)hIl2Cpp + CLASS_1_34489C07F511839D_SET_DEFAULTUNLOCKTRACENODEPROFILES_OFFSET))(this, a1);
	}
};
