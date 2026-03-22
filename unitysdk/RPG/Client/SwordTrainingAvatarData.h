#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/AvatarSpecialUltraType.h"
#include "unitysdk/System/Object.h"

class Class_1_BA9DF8A4AB4EB338;
class Class_1_CA604A479B70DDEA;
namespace RPG::Client { class AvatarData; }
namespace RPG::Client { class AvatarPropertyUIData; }
namespace RPG::Client { class AvatarSkillTreeData; }
namespace RPG::GameCore { class AvatarUltraSkillConfigRow; }
namespace RPG::GameCore { class IAvatarCommonRowWrap; }
namespace System { class String; }

#define RPG_CLIENT_SWORDTRAININGAVATARDATA_APPLYSKILL_OFFSET UNITYSDK_OFFSET(0x9FF8B60)
#define RPG_CLIENT_SWORDTRAININGAVATARDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9FF8B10)
#define RPG_CLIENT_SWORDTRAININGAVATARDATA_GETCURRENTLVMAXEXP_OFFSET UNITYSDK_OFFSET(0x9FF8FB0)
#define RPG_CLIENT_SWORDTRAININGAVATARDATA_GETCURRENTMAXLV_OFFSET UNITYSDK_OFFSET(0x9FF8F60)
#define RPG_CLIENT_SWORDTRAININGAVATARDATA_GETDISPLAYFORMATADDVALUE_OFFSET UNITYSDK_OFFSET(0x9FF8DC0)
#define RPG_CLIENT_SWORDTRAININGAVATARDATA_GETDISPLAYFORMATPROPERTYBASEVALUE_OFFSET UNITYSDK_OFFSET(0x9FF8D20)
#define RPG_CLIENT_SWORDTRAININGAVATARDATA_GETDISPLAYFORMATPROPERTYBYTYPE_OFFSET UNITYSDK_OFFSET(0x9FF8EC0)
#define RPG_CLIENT_SWORDTRAININGAVATARDATA_GETPROPERTYUIDATA_OFFSET UNITYSDK_OFFSET(0x9FF8BC0)
#define RPG_CLIENT_SWORDTRAININGAVATARDATA_GETRANKAFTEREXTRAADDITION_OFFSET UNITYSDK_OFFSET(0x9FF9000)
#define RPG_CLIENT_SWORDTRAININGAVATARDATA_GET_ADVENTUREJSONCONFIGPATH_OFFSET UNITYSDK_OFFSET(0x9FF91D0)
#define RPG_CLIENT_SWORDTRAININGAVATARDATA_GET_AVATARJSONPATH_OFFSET UNITYSDK_OFFSET(0x9FF91F0)
#define RPG_CLIENT_SWORDTRAININGAVATARDATA_GET_AVATARNAME_OFFSET UNITYSDK_OFFSET(0x9FF9230)
#define RPG_CLIENT_SWORDTRAININGAVATARDATA_GET_CURRENTEXP_OFFSET UNITYSDK_OFFSET(0x9FF9110)
#define RPG_CLIENT_SWORDTRAININGAVATARDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x9FF9050)
#define RPG_CLIENT_SWORDTRAININGAVATARDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x9FF90D0)
#define RPG_CLIENT_SWORDTRAININGAVATARDATA_GET_MAXPROMOTION_OFFSET UNITYSDK_OFFSET(0x9FF90B0)
#define RPG_CLIENT_SWORDTRAININGAVATARDATA_GET_PROMOTION_OFFSET UNITYSDK_OFFSET(0x9FF9090)
#define RPG_CLIENT_SWORDTRAININGAVATARDATA_GET_RANK_OFFSET UNITYSDK_OFFSET(0x9FF90F0)
#define RPG_CLIENT_SWORDTRAININGAVATARDATA_GET_REALID_OFFSET UNITYSDK_OFFSET(0x9FF9070)
#define RPG_CLIENT_SWORDTRAININGAVATARDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x9FF9130)
#define RPG_CLIENT_SWORDTRAININGAVATARDATA_GET_SKILLTREEDATA_OFFSET UNITYSDK_OFFSET(0x9FF9210)
#define RPG_CLIENT_SWORDTRAININGAVATARDATA_GET_ULTRASKILLCONFIG_OFFSET UNITYSDK_OFFSET(0x9FF9150)
#define RPG_CLIENT_SWORDTRAININGAVATARDATA_GET_ULTRASKILLTYPE_OFFSET UNITYSDK_OFFSET(0x9FF9170)
#define RPG_CLIENT_SWORDTRAININGAVATARDATA_INIT_OFFSET UNITYSDK_OFFSET(0x9FF89A0)
#define RPG_CLIENT_SWORDTRAININGAVATARDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9FF9250)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainingAvatarData_TypeDefinitionIndex = 49169;

	class SwordTrainingAvatarData : public ::System::Object
	{
	public:
		// static const ::System::String* _PLUS; // 0x0
		::RPG::Client::AvatarData* AvatarData; // 0x10
		::Class_1_BA9DF8A4AB4EB338* SwordTrainingAvatarPropertyData; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGAVATARDATA__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGAVATARDATA_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGAVATARDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void ApplySkill(::Class_1_CA604A479B70DDEA* propertyModifer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_CA604A479B70DDEA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGAVATARDATA_APPLYSKILL_OFFSET))(this, propertyModifer);
		}

		::RPG::Client::AvatarPropertyUIData* GetPropertyUIData(::RPG::GameCore::AvatarPropertyType propertyType)
		{
			return ((::RPG::Client::AvatarPropertyUIData*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGAVATARDATA_GETPROPERTYUIDATA_OFFSET))(this, propertyType);
		}

		::System::String* GetDisplayFormatPropertyBaseValue(::RPG::GameCore::AvatarPropertyType propertyType, ::System::UInt32 promotion, ::System::UInt32 level, ::System::UInt32 rank)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGAVATARDATA_GETDISPLAYFORMATPROPERTYBASEVALUE_OFFSET))(this, propertyType, promotion, level, rank);
		}

		::System::String* GetDisplayFormatAddValue(::RPG::GameCore::AvatarPropertyType propertyType, ::System::UInt32 promotion, ::System::UInt32 level, ::System::UInt32 rank)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGAVATARDATA_GETDISPLAYFORMATADDVALUE_OFFSET))(this, propertyType, promotion, level, rank);
		}

		::System::String* GetDisplayFormatPropertyByType(::RPG::GameCore::AvatarPropertyType propertyType, ::System::UInt32 promotion, ::System::UInt32 level, ::System::UInt32 rank)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGAVATARDATA_GETDISPLAYFORMATPROPERTYBYTYPE_OFFSET))(this, propertyType, promotion, level, rank);
		}

		::System::UInt32 GetCurrentMaxLv()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGAVATARDATA_GETCURRENTMAXLV_OFFSET))(this);
		}

		::System::UInt32 GetCurrentLvMaxExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGAVATARDATA_GETCURRENTLVMAXEXP_OFFSET))(this);
		}

		::System::UInt32 GetRankAfterExtraAddition()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGAVATARDATA_GETRANKAFTEREXTRAADDITION_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGAVATARDATA_GET_ID_OFFSET))(this);
		}

		::System::UInt32 get_RealID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGAVATARDATA_GET_REALID_OFFSET))(this);
		}

		::System::UInt32 get_Promotion()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGAVATARDATA_GET_PROMOTION_OFFSET))(this);
		}

		::System::UInt32 get_MaxPromotion()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGAVATARDATA_GET_MAXPROMOTION_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGAVATARDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::UInt32 get_Rank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGAVATARDATA_GET_RANK_OFFSET))(this);
		}

		::System::UInt32 get_CurrentExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGAVATARDATA_GET_CURRENTEXP_OFFSET))(this);
		}

		::RPG::GameCore::IAvatarCommonRowWrap* get_Row()
		{
			return ((::RPG::GameCore::IAvatarCommonRowWrap*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGAVATARDATA_GET_ROW_OFFSET))(this);
		}

		::RPG::GameCore::AvatarUltraSkillConfigRow* get_UltraSkillConfig()
		{
			return ((::RPG::GameCore::AvatarUltraSkillConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGAVATARDATA_GET_ULTRASKILLCONFIG_OFFSET))(this);
		}

		::RPG::GameCore::AvatarSpecialUltraType get_UltraSkillType()
		{
			return ((::RPG::GameCore::AvatarSpecialUltraType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGAVATARDATA_GET_ULTRASKILLTYPE_OFFSET))(this);
		}

		::System::String* get_AdventureJsonConfigPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGAVATARDATA_GET_ADVENTUREJSONCONFIGPATH_OFFSET))(this);
		}

		::System::String* get_AvatarJsonPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGAVATARDATA_GET_AVATARJSONPATH_OFFSET))(this);
		}

		::RPG::Client::AvatarSkillTreeData* get_SkillTreeData()
		{
			return ((::RPG::Client::AvatarSkillTreeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGAVATARDATA_GET_SKILLTREEDATA_OFFSET))(this);
		}

		::System::String* get_AvatarName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGAVATARDATA_GET_AVATARNAME_OFFSET))(this);
		}
	};
}
