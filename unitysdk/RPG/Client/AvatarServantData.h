#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarData; }
namespace RPG::Client { class AvatarPropertyUIData; }
namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace RPG::GameCore { class AvatarServantRow; }
namespace RPG::GameCore { class ICharacterSkillRowData; }
namespace RPG::GameCore { class ServantConfig; }
namespace RPG::GameCore { class ServantRowData; }
namespace RPG::GameCore { class ServantSkillRowData; }
namespace System { class String; }

#define RPG_CLIENT_AVATARSERVANTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x8D576A0)
#define RPG_CLIENT_AVATARSERVANTDATA_GETBASEVALUE_OFFSET UNITYSDK_OFFSET(0x8D57E40)
#define RPG_CLIENT_AVATARSERVANTDATA_GETCHARACTERSKILLDATA_1_OFFSET UNITYSDK_OFFSET(0x8D58AC0)
#define RPG_CLIENT_AVATARSERVANTDATA_GETCHARACTERSKILLDATA_OFFSET UNITYSDK_OFFSET(0x8D58930)
#define RPG_CLIENT_AVATARSERVANTDATA_GETDISPLAYFORMATADDVALUE_OFFSET UNITYSDK_OFFSET(0x8D582C0)
#define RPG_CLIENT_AVATARSERVANTDATA_GETDISPLAYFORMATPROPERTYBASEVALUE_OFFSET UNITYSDK_OFFSET(0x8D57DB0)
#define RPG_CLIENT_AVATARSERVANTDATA_GETDISPLAYFORMATPROPERTYBYTYPE_OFFSET UNITYSDK_OFFSET(0x8D57970)
#define RPG_CLIENT_AVATARSERVANTDATA_GETFINALVALUE_OFFSET UNITYSDK_OFFSET(0x8D57A00)
#define RPG_CLIENT_AVATARSERVANTDATA_GETPROPERTYADDVALUE_OFFSET UNITYSDK_OFFSET(0x8D583D0)
#define RPG_CLIENT_AVATARSERVANTDATA_GETPROPERTYUIDATA_OFFSET UNITYSDK_OFFSET(0x8D58620)
#define RPG_CLIENT_AVATARSERVANTDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x8D588D0)
#define RPG_CLIENT_AVATARSERVANTDATA_GET_MASTERDATA_OFFSET UNITYSDK_OFFSET(0x8D58E20)
#define RPG_CLIENT_AVATARSERVANTDATA_GET_SERVANTJSON_OFFSET UNITYSDK_OFFSET(0x8D58E00)
#define RPG_CLIENT_AVATARSERVANTDATA_GET_SERVANTNAME_OFFSET UNITYSDK_OFFSET(0x8D58CE0)
#define RPG_CLIENT_AVATARSERVANTDATA_GET_SERVANTROWDATA_OFFSET UNITYSDK_OFFSET(0x8D58E90)
#define RPG_CLIENT_AVATARSERVANTDATA_GET_SERVANTROW_OFFSET UNITYSDK_OFFSET(0x8D58E10)
#define RPG_CLIENT_AVATARSERVANTDATA_GET_SERVANTSIDEICONPATH_OFFSET UNITYSDK_OFFSET(0x8D58E30)
#define RPG_CLIENT_AVATARSERVANTDATA_GET_SKILLIDS_OFFSET UNITYSDK_OFFSET(0x8D58DE0)
#define RPG_CLIENT_AVATARSERVANTDATA_ISABILITYPROPERTYSYNCFROMAVATAR_OFFSET UNITYSDK_OFFSET(0x8D584A0)
#define RPG_CLIENT_AVATARSERVANTDATA_REFRESHDATA_OFFSET UNITYSDK_OFFSET(0x8D58C80)
#define RPG_CLIENT_AVATARSERVANTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8D57930)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarServantData_TypeDefinitionIndex = 49633;

	class AvatarServantData : public ::System::Object
	{
	public:
		// static const ::System::String* _PLUS; // 0x0
		::RPG::GameCore::ServantRowData* _ServantRowData; // 0x10
		::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::RPG::GameCore::ServantSkillRowData*>* _SkillDataMap; // 0x18
		::RPG::Client::AvatarData* _AvatarData; // 0x20
		::RPG::GameCore::AvatarServantRow* _Row; // 0x28
		::RPG::GameCore::ServantConfig* _Json; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSERVANTDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::AvatarServantData* Create(::RPG::Client::AvatarData* avatarData)
		{
			return ((::RPG::Client::AvatarServantData*(*)(::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSERVANTDATA_CREATE_OFFSET))(avatarData);
		}

		::System::String* GetDisplayFormatPropertyByType(::RPG::GameCore::AvatarPropertyType propertyType, ::System::UInt32 promotion, ::System::UInt32 level, ::System::UInt32 rank)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSERVANTDATA_GETDISPLAYFORMATPROPERTYBYTYPE_OFFSET))(this, propertyType, promotion, level, rank);
		}

		::System::String* GetDisplayFormatPropertyBaseValue(::RPG::GameCore::AvatarPropertyType propertyType, ::System::UInt32 promotion, ::System::UInt32 level, ::System::UInt32 rank)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSERVANTDATA_GETDISPLAYFORMATPROPERTYBASEVALUE_OFFSET))(this, propertyType, promotion, level, rank);
		}

		::System::String* GetDisplayFormatAddValue(::RPG::GameCore::AvatarPropertyType propertyType, ::System::UInt32 promotion, ::System::UInt32 level, ::System::UInt32 rank)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSERVANTDATA_GETDISPLAYFORMATADDVALUE_OFFSET))(this, propertyType, promotion, level, rank);
		}

		::RPG::GameCore::FixPoint GetFinalValue(::RPG::GameCore::AvatarPropertyType propertyType, ::System::UInt32 promotion, ::System::UInt32 level, ::System::UInt32 rank)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSERVANTDATA_GETFINALVALUE_OFFSET))(this, propertyType, promotion, level, rank);
		}

		::RPG::GameCore::FixPoint GetBaseValue(::RPG::GameCore::AvatarPropertyType propertyType, ::System::UInt32 promotion, ::System::UInt32 level, ::System::UInt32 rank)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSERVANTDATA_GETBASEVALUE_OFFSET))(this, propertyType, promotion, level, rank);
		}

		::System::Int32 GetPropertyAddValue(::RPG::GameCore::AvatarPropertyType propertyType, ::System::UInt32 promotion, ::System::UInt32 level, ::System::UInt32 rank)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSERVANTDATA_GETPROPERTYADDVALUE_OFFSET))(this, propertyType, promotion, level, rank);
		}

		::RPG::Client::AvatarPropertyUIData* GetPropertyUIData(::RPG::GameCore::AvatarPropertyType propertyType)
		{
			return ((::RPG::Client::AvatarPropertyUIData*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSERVANTDATA_GETPROPERTYUIDATA_OFFSET))(this, propertyType);
		}

		::System::Boolean IsAbilityPropertySyncFromAvatar(::RPG::GameCore::AbilityProperty abilityProperty)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AbilityProperty))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSERVANTDATA_ISABILITYPROPERTYSYNCFROMAVATAR_OFFSET))(this, abilityProperty);
		}

		::RPG::GameCore::ICharacterSkillRowData* GetCharacterSkillData(::System::UInt32 skillID)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSERVANTDATA_GETCHARACTERSKILLDATA_OFFSET))(this, skillID);
		}

		::RPG::GameCore::ICharacterSkillRowData* GetCharacterSkillData_1(::System::UInt32 skillID, ::System::UInt32 skillLv)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSERVANTDATA_GETCHARACTERSKILLDATA_1_OFFSET))(this, skillID, skillLv);
		}

		::System::Void RefreshData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSERVANTDATA_REFRESHDATA_OFFSET))(this);
		}

		::System::String* get_ServantName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSERVANTDATA_GET_SERVANTNAME_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_SkillIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSERVANTDATA_GET_SKILLIDS_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSERVANTDATA_GET_ID_OFFSET))(this);
		}

		::RPG::GameCore::ServantConfig* get_ServantJson()
		{
			return ((::RPG::GameCore::ServantConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSERVANTDATA_GET_SERVANTJSON_OFFSET))(this);
		}

		::RPG::GameCore::AvatarServantRow* get_ServantRow()
		{
			return ((::RPG::GameCore::AvatarServantRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSERVANTDATA_GET_SERVANTROW_OFFSET))(this);
		}

		::RPG::Client::AvatarData* get_MasterData()
		{
			return ((::RPG::Client::AvatarData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSERVANTDATA_GET_MASTERDATA_OFFSET))(this);
		}

		::System::String* get_ServantSideIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSERVANTDATA_GET_SERVANTSIDEICONPATH_OFFSET))(this);
		}

		::RPG::GameCore::ServantRowData* get_ServantRowData()
		{
			return ((::RPG::GameCore::ServantRowData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSERVANTDATA_GET_SERVANTROWDATA_OFFSET))(this);
		}
	};
}
