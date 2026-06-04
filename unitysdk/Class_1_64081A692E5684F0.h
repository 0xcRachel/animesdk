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

#define CLASS_1_64081A692E5684F0_GETSKILLROWDATABYID_OFFSET UNITYSDK_OFFSET(0x14F72C70)
#define CLASS_1_64081A692E5684F0_GETSKILLROWDATABYNAME_OFFSET UNITYSDK_OFFSET(0x14F72C20)
#define CLASS_1_64081A692E5684F0_GETSKILLROWDATA_OFFSET UNITYSDK_OFFSET(0x14F72BD0)
#define CLASS_1_64081A692E5684F0_GET_ACTIONICONPATH_OFFSET UNITYSDK_OFFSET(0x14F72A90)
#define CLASS_1_64081A692E5684F0_GET_AIPATH_OFFSET UNITYSDK_OFFSET(0x14F728A0)
#define CLASS_1_64081A692E5684F0_GET_AVATARSIDEICONPATH_OFFSET UNITYSDK_OFFSET(0x14F72AD0)
#define CLASS_1_64081A692E5684F0_GET_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0x14F729B0)
#define CLASS_1_64081A692E5684F0_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x14F72880)
#define CLASS_1_64081A692E5684F0_GET_DAMAGETYPERESISTANCE_OFFSET UNITYSDK_OFFSET(0x14F728E0)
#define CLASS_1_64081A692E5684F0_GET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x14F728D0)
#define CLASS_1_64081A692E5684F0_GET_HAVEACTIONDELAY_OFFSET UNITYSDK_OFFSET(0x14F72930)
#define CLASS_1_64081A692E5684F0_GET_HEADICONPATH_OFFSET UNITYSDK_OFFSET(0x14F72A80)
#define CLASS_1_64081A692E5684F0_GET_INTRODUCTION_OFFSET UNITYSDK_OFFSET(0x14F72A10)
#define CLASS_1_64081A692E5684F0_GET_JSONPATH_OFFSET UNITYSDK_OFFSET(0x14F72890)
#define CLASS_1_64081A692E5684F0_GET_JSON_OFFSET UNITYSDK_OFFSET(0x14F72870)
#define CLASS_1_64081A692E5684F0_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x14F72940)
#define CLASS_1_64081A692E5684F0_GET_MODELPATH_OFFSET UNITYSDK_OFFSET(0x14F72A70)
#define CLASS_1_64081A692E5684F0_GET_NATUREID_OFFSET UNITYSDK_OFFSET(0x14F728C0)
#define CLASS_1_64081A692E5684F0_GET_OVERRIDEAIPATH_OFFSET UNITYSDK_OFFSET(0x14F728B0)
#define CLASS_1_64081A692E5684F0_GET_ROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0x14F72AC0)
#define CLASS_1_64081A692E5684F0_GET_ROW_OFFSET UNITYSDK_OFFSET(0x14F727D0)
#define CLASS_1_64081A692E5684F0_GET_SIDEAVATARHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x14F72AA0)
#define CLASS_1_64081A692E5684F0_GET_SKILLROWDATAS_OFFSET UNITYSDK_OFFSET(0x14F72950)
#define CLASS_1_64081A692E5684F0_GET_SPNEED_OFFSET UNITYSDK_OFFSET(0x14F728F0)
#define CLASS_1_64081A692E5684F0_GET_WAITINGAVATARHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x14F72AB0)
#define CLASS_1_64081A692E5684F0_METHOD_1_4C81CE8F5DCE171D_OFFSET UNITYSDK_OFFSET(0x14F72AE0)
#define CLASS_1_64081A692E5684F0_OVERRIDEDATA_OFFSET UNITYSDK_OFFSET(0x14F72B70)
#define CLASS_1_64081A692E5684F0_OVERRIDEDISPLAY_OFFSET UNITYSDK_OFFSET(0x14F72AF0)
#define CLASS_1_64081A692E5684F0_SET_ROW_OFFSET UNITYSDK_OFFSET(0x14F727E0)
#define CLASS_1_64081A692E5684F0__CCTOR_OFFSET UNITYSDK_OFFSET(0x14F72CC0)
#define CLASS_1_64081A692E5684F0__CTOR_OFFSET UNITYSDK_OFFSET(0x14F727C0)

inline static constexpr unsigned int Class_1_64081A692E5684F0_TypeDefinitionIndex = 53157;

class Class_1_64081A692E5684F0 : public ::System::Object
{
public:
	static ::Class_1_64081A692E5684F0** StaticGet_Field_1_0()
	{
		return (::Class_1_64081A692E5684F0**)Il2CppClass::FromTypeDefinitionIndex(Class_1_64081A692E5684F0_TypeDefinitionIndex)->GetStaticField(0x5C2C0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64081A692E5684F0__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_64081A692E5684F0__CCTOR_OFFSET))();
	}

	::System::Object* get_Row()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64081A692E5684F0_GET_ROW_OFFSET))(this);
	}

	::System::Void set_Row(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_64081A692E5684F0_SET_ROW_OFFSET))(this, a1);
	}

	::RPG::GameCore::CharacterConfig* get_Json()
	{
		return ((::RPG::GameCore::CharacterConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64081A692E5684F0_GET_JSON_OFFSET))(this);
	}

	::System::UInt32 get_ConfigID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64081A692E5684F0_GET_CONFIGID_OFFSET))(this);
	}

	::System::String* get_JsonPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64081A692E5684F0_GET_JSONPATH_OFFSET))(this);
	}

	::System::String* get_AIPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64081A692E5684F0_GET_AIPATH_OFFSET))(this);
	}

	::System::String* get_OverrideAIPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64081A692E5684F0_GET_OVERRIDEAIPATH_OFFSET))(this);
	}

	::System::UInt32 get_NatureID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64081A692E5684F0_GET_NATUREID_OFFSET))(this);
	}

	::RPG::GameCore::AttackDamageType get_DamageType()
	{
		return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64081A692E5684F0_GET_DAMAGETYPE_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>* get_DamageTypeResistance()
	{
		return ((::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64081A692E5684F0_GET_DAMAGETYPERESISTANCE_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint get_SPNeed()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64081A692E5684F0_GET_SPNEED_OFFSET))(this);
	}

	::System::Boolean get_HaveActionDelay()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64081A692E5684F0_GET_HAVEACTIONDELAY_OFFSET))(this);
	}

	::System::UInt32 get_Level()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64081A692E5684F0_GET_LEVEL_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>* get_SkillRowDatas()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64081A692E5684F0_GET_SKILLROWDATAS_OFFSET))(this);
	}

	::RPG::Client::TextID get_CharacterName()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64081A692E5684F0_GET_CHARACTERNAME_OFFSET))(this);
	}

	::RPG::Client::TextID get_Introduction()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64081A692E5684F0_GET_INTRODUCTION_OFFSET))(this);
	}

	::System::String* get_ModelPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64081A692E5684F0_GET_MODELPATH_OFFSET))(this);
	}

	::System::String* get_HeadIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64081A692E5684F0_GET_HEADICONPATH_OFFSET))(this);
	}

	::System::String* get_ActionIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64081A692E5684F0_GET_ACTIONICONPATH_OFFSET))(this);
	}

	::System::String* get_SideAvatarHeadIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64081A692E5684F0_GET_SIDEAVATARHEADICONPATH_OFFSET))(this);
	}

	::System::String* get_WaitingAvatarHeadIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64081A692E5684F0_GET_WAITINGAVATARHEADICONPATH_OFFSET))(this);
	}

	::System::String* get_RoundIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64081A692E5684F0_GET_ROUNDICONPATH_OFFSET))(this);
	}

	::System::String* get_AvatarSideIconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64081A692E5684F0_GET_AVATARSIDEICONPATH_OFFSET))(this);
	}

	::RPG::GameCore::CharacterSomatoType Method_1_4C81CE8F5DCE171D()
	{
		return ((::RPG::GameCore::CharacterSomatoType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64081A692E5684F0_METHOD_1_4C81CE8F5DCE171D_OFFSET))(this);
	}

	::System::Void OverrideDisplay(::Struct_2_88A74A9E9AE5BA51 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_88A74A9E9AE5BA51))((::PBYTE)hIl2Cpp + CLASS_1_64081A692E5684F0_OVERRIDEDISPLAY_OFFSET))(this, a1);
	}

	::System::Void OverrideData(::Struct_2_2D4CFA76DB950A9A a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_2D4CFA76DB950A9A))((::PBYTE)hIl2Cpp + CLASS_1_64081A692E5684F0_OVERRIDEDATA_OFFSET))(this, a1);
	}

	::RPG::GameCore::ICharacterSkillRowData* GetSkillRowData(::System::Int32 a1)
	{
		return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_64081A692E5684F0_GETSKILLROWDATA_OFFSET))(this, a1);
	}

	::RPG::GameCore::ICharacterSkillRowData* GetSkillRowDataByName(::System::String* a1)
	{
		return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_64081A692E5684F0_GETSKILLROWDATABYNAME_OFFSET))(this, a1);
	}

	::RPG::GameCore::ICharacterSkillRowData* GetSkillRowDataByID(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_64081A692E5684F0_GETSKILLROWDATABYID_OFFSET))(this, a1);
	}
};
