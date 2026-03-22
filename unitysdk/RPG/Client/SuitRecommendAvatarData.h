#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SuitRecommendDataType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/ItemRarity.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_SUITRECOMMENDAVATARDATA_CHECKISHAVE_OFFSET UNITYSDK_OFFSET(0x9FDFC50)
#define RPG_CLIENT_SUITRECOMMENDAVATARDATA_COMPARETO_OFFSET UNITYSDK_OFFSET(0x9FDFD30)
#define RPG_CLIENT_SUITRECOMMENDAVATARDATA_CREATECONFIGDATA_OFFSET UNITYSDK_OFFSET(0x9FDFE70)
#define RPG_CLIENT_SUITRECOMMENDAVATARDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9FDFDC0)
#define RPG_CLIENT_SUITRECOMMENDAVATARDATA_GETICONPATH_OFFSET UNITYSDK_OFFSET(0x9FDFCF0)
#define RPG_CLIENT_SUITRECOMMENDAVATARDATA_GETNAME_OFFSET UNITYSDK_OFFSET(0x9FDFC90)
#define RPG_CLIENT_SUITRECOMMENDAVATARDATA_GET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x9FDFAE0)
#define RPG_CLIENT_SUITRECOMMENDAVATARDATA_GET_ISBIGDATA_OFFSET UNITYSDK_OFFSET(0x9FDFAD0)
#define RPG_CLIENT_SUITRECOMMENDAVATARDATA_GET_ISCONFIGDATA_OFFSET UNITYSDK_OFFSET(0x9FDFAC0)
#define RPG_CLIENT_SUITRECOMMENDAVATARDATA_SET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x9FDFAF0)
#define RPG_CLIENT_SUITRECOMMENDAVATARDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9FDFB00)

namespace RPG::Client
{
	inline static constexpr unsigned int SuitRecommendAvatarData_TypeDefinitionIndex = 53272;

	class SuitRecommendAvatarData : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::String* DamageIconPath; // 0x18
		::RPG::GameCore::AttackDamageType DamageType; // 0x20
		::RPG::GameCore::ItemRarity Rarity; // 0x24
		::System::Int32 RecommendWeight; // 0x28
		::System::Boolean IsHave; // 0x2C
		::System::Boolean IsFallback; // 0x2D
		::RPG::Client::TextID Name; // 0x30
		::RPG::Client::SuitRecommendDataType _DataType_k__BackingField; // 0x40
		::System::UInt32 AvatarID; // 0x44

		::System::Void _ctor(::System::UInt32 avatarID, ::System::Int32 recommendWeight, ::System::Boolean isFallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUITRECOMMENDAVATARDATA__CTOR_OFFSET))(this, avatarID, recommendWeight, isFallback);
		}

		::System::Boolean get_IsConfigData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUITRECOMMENDAVATARDATA_GET_ISCONFIGDATA_OFFSET))(this);
		}

		::System::Boolean get_IsBigData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUITRECOMMENDAVATARDATA_GET_ISBIGDATA_OFFSET))(this);
		}

		::RPG::Client::SuitRecommendDataType get_DataType()
		{
			return ((::RPG::Client::SuitRecommendDataType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUITRECOMMENDAVATARDATA_GET_DATATYPE_OFFSET))(this);
		}

		::System::Void set_DataType(::RPG::Client::SuitRecommendDataType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SuitRecommendDataType))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUITRECOMMENDAVATARDATA_SET_DATATYPE_OFFSET))(this, value);
		}

		::System::Boolean CheckIsHave()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUITRECOMMENDAVATARDATA_CHECKISHAVE_OFFSET))(this);
		}

		::RPG::Client::TextID GetName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUITRECOMMENDAVATARDATA_GETNAME_OFFSET))(this);
		}

		::System::String* GetIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUITRECOMMENDAVATARDATA_GETICONPATH_OFFSET))(this);
		}

		::System::Int32 CompareTo(::RPG::Client::SuitRecommendAvatarData* other)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::SuitRecommendAvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUITRECOMMENDAVATARDATA_COMPARETO_OFFSET))(this, other);
		}

		static ::RPG::Client::SuitRecommendAvatarData* Create(::System::UInt32 avatarID, ::System::Int32 recommendWeight, ::System::Boolean isFallback)
		{
			return ((::RPG::Client::SuitRecommendAvatarData*(*)(::System::UInt32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUITRECOMMENDAVATARDATA_CREATE_OFFSET))(avatarID, recommendWeight, isFallback);
		}

		static ::RPG::Client::SuitRecommendAvatarData* CreateConfigData(::System::UInt32 avatarID)
		{
			return ((::RPG::Client::SuitRecommendAvatarData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUITRECOMMENDAVATARDATA_CREATECONFIGDATA_OFFSET))(avatarID);
		}
	};
}
