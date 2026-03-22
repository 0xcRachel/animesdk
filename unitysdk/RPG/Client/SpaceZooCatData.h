#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SpaceZooCatType.h"
#include "unitysdk/RPG/Client/SpaceZooEXPChangeType.h"
#include "unitysdk/RPG/GameCore/ItemRarity.h"
#include "unitysdk/RPG/GameCore/SpaceZooChannelType.h"
#include "unitysdk/System/Object.h"

class Class_1_53763D498DB8321D_4;
namespace RPG::GameCore { class SpaceZooCustomizedCatRow; }
namespace RPG::GameCore { class SpaceZooFeatureConfigRow; }
namespace RPG::GameCore { class SpaceZooSpecialCatRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SPACEZOOCATDATA_CREATEDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0x9F8E4C0)
#define RPG_CLIENT_SPACEZOOCATDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9F8E150)
#define RPG_CLIENT_SPACEZOOCATDATA_GETBREEDDISPLAYIMAGES_OFFSET UNITYSDK_OFFSET(0x9F8EFD0)
#define RPG_CLIENT_SPACEZOOCATDATA_GETCATNAME_OFFSET UNITYSDK_OFFSET(0x9F8F2F0)
#define RPG_CLIENT_SPACEZOOCATDATA_GETDEFAULTFEATUREID_OFFSET UNITYSDK_OFFSET(0x9F8F270)
#define RPG_CLIENT_SPACEZOOCATDATA_GETEXPCHANGECACHE_OFFSET UNITYSDK_OFFSET(0x9F8F800)
#define RPG_CLIENT_SPACEZOOCATDATA_GETFEATUREID_OFFSET UNITYSDK_OFFSET(0x9F8EE90)
#define RPG_CLIENT_SPACEZOOCATDATA_GETFEATUREIMAGEPATHS_OFFSET UNITYSDK_OFFSET(0x9F8EF50)
#define RPG_CLIENT_SPACEZOOCATDATA_GETFEATURELARGEIMAGEPATHS_OFFSET UNITYSDK_OFFSET(0x9F8EF90)
#define RPG_CLIENT_SPACEZOOCATDATA_GETFEATUREROW_OFFSET UNITYSDK_OFFSET(0x9F8F130)
#define RPG_CLIENT_SPACEZOOCATDATA_GETTOTALEXPCHANGE_OFFSET UNITYSDK_OFFSET(0x9F8F8F0)
#define RPG_CLIENT_SPACEZOOCATDATA_GET_CANDELETE_OFFSET UNITYSDK_OFFSET(0x9F8FD20)
#define RPG_CLIENT_SPACEZOOCATDATA_GET_EXPCACHE_OFFSET UNITYSDK_OFFSET(0x9F8FCC0)
#define RPG_CLIENT_SPACEZOOCATDATA_GET_EXPCHANGECACHE_OFFSET UNITYSDK_OFFSET(0x9F8FCA0)
#define RPG_CLIENT_SPACEZOOCATDATA_GET_FEATURES_OFFSET UNITYSDK_OFFSET(0x9F8FC80)
#define RPG_CLIENT_SPACEZOOCATDATA_GET_HAVEMUTATEEVENT_OFFSET UNITYSDK_OFFSET(0x9F8FE30)
#define RPG_CLIENT_SPACEZOOCATDATA_GET_HAVESPECIALMUTATEEVENT_OFFSET UNITYSDK_OFFSET(0x9F8FE90)
#define RPG_CLIENT_SPACEZOOCATDATA_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0x9F8FD40)
#define RPG_CLIENT_SPACEZOOCATDATA_GET_ISSPECIAL_OFFSET UNITYSDK_OFFSET(0x9F8EE80)
#define RPG_CLIENT_SPACEZOOCATDATA_GET_ISTEMPLATE_OFFSET UNITYSDK_OFFSET(0x9F8FD30)
#define RPG_CLIENT_SPACEZOOCATDATA_GET_MUTATEITEMS_OFFSET UNITYSDK_OFFSET(0x9F8FE10)
#define RPG_CLIENT_SPACEZOOCATDATA_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x9F8FD00)
#define RPG_CLIENT_SPACEZOOCATDATA_GET_SPECIALCATID_OFFSET UNITYSDK_OFFSET(0x9F8FC00)
#define RPG_CLIENT_SPACEZOOCATDATA_GET_SPECIALCATROW_OFFSET UNITYSDK_OFFSET(0x9F8F5C0)
#define RPG_CLIENT_SPACEZOOCATDATA_GET_TEMPLATEID_OFFSET UNITYSDK_OFFSET(0x9F8FBE0)
#define RPG_CLIENT_SPACEZOOCATDATA_GET_TEMPLATEROW_OFFSET UNITYSDK_OFFSET(0x9F8FC20)
#define RPG_CLIENT_SPACEZOOCATDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9F8FCE0)
#define RPG_CLIENT_SPACEZOOCATDATA_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x9F8FBC0)
#define RPG_CLIENT_SPACEZOOCATDATA_SET_EXPCACHE_OFFSET UNITYSDK_OFFSET(0x9F8FCD0)
#define RPG_CLIENT_SPACEZOOCATDATA_SET_EXPCHANGECACHE_OFFSET UNITYSDK_OFFSET(0x9F8FCB0)
#define RPG_CLIENT_SPACEZOOCATDATA_SET_FEATURES_OFFSET UNITYSDK_OFFSET(0x9F8FC90)
#define RPG_CLIENT_SPACEZOOCATDATA_SET_HAVESPECIALMUTATEEVENT_OFFSET UNITYSDK_OFFSET(0x9F8FEA0)
#define RPG_CLIENT_SPACEZOOCATDATA_SET_MUTATEITEMS_OFFSET UNITYSDK_OFFSET(0x9F8FE20)
#define RPG_CLIENT_SPACEZOOCATDATA_SET_RARITY_OFFSET UNITYSDK_OFFSET(0x9F8FD10)
#define RPG_CLIENT_SPACEZOOCATDATA_SET_SPECIALCATID_OFFSET UNITYSDK_OFFSET(0x9F8FC10)
#define RPG_CLIENT_SPACEZOOCATDATA_SET_TEMPLATEID_OFFSET UNITYSDK_OFFSET(0x9F8FBF0)
#define RPG_CLIENT_SPACEZOOCATDATA_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x9F8FCF0)
#define RPG_CLIENT_SPACEZOOCATDATA_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x9F8FBD0)
#define RPG_CLIENT_SPACEZOOCATDATA_SYNCFEATURES_OFFSET UNITYSDK_OFFSET(0x9F8E540)
#define RPG_CLIENT_SPACEZOOCATDATA_SYNCSPACEZOODATA_OFFSET UNITYSDK_OFFSET(0x9F8E380)
#define RPG_CLIENT_SPACEZOOCATDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x9F8FEB0)
#define RPG_CLIENT_SPACEZOOCATDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9F8E1C0)
#define RPG_CLIENT_SPACEZOOCATDATA__GETNAMECONTENTBYFEATURETYPE_OFFSET UNITYSDK_OFFSET(0x9F8F620)
#define RPG_CLIENT_SPACEZOOCATDATA__ISVERYRARITYCAT_OFFSET UNITYSDK_OFFSET(0x9F8FA60)
#define RPG_CLIENT_SPACEZOOCATDATA__REFRESHCATRARITY_OFFSET UNITYSDK_OFFSET(0x9F8EB80)
#define RPG_CLIENT_SPACEZOOCATDATA__REFRESHCATTYPE_OFFSET UNITYSDK_OFFSET(0x9F8EB10)
#define RPG_CLIENT_SPACEZOOCATDATA__SYNCMUTATEITEMS_OFFSET UNITYSDK_OFFSET(0x9F8EBF0)

namespace RPG::Client
{
	inline static constexpr unsigned int SpaceZooCatData_TypeDefinitionIndex = 53911;

	class SpaceZooCatData : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet__SpecialNameOrderLanguageList()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SpaceZooCatData_TypeDefinitionIndex)->GetStaticField(0x17340);
		}
		static ::System::Collections::Generic::List_1<::RPG::GameCore::SpaceZooChannelType>** StaticGet__ChannelOrderList()
		{
			return (::System::Collections::Generic::List_1<::RPG::GameCore::SpaceZooChannelType>**)Il2CppClass::FromTypeDefinitionIndex(SpaceZooCatData_TypeDefinitionIndex)->GetStaticField(0x17348);
		}
		// static const ::System::String* _BODY_OUTLINE_IMAGE_PATH; // 0x0
		// static const ::System::String* _BODY_OUTLINE_LARGE_IMAGE_PATH; // 0x0
		// static const ::System::Int32 _BODY_OUTLINE_INDEX = 0x3; // 0x0
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SpaceZooChannelType, ::System::UInt32>* _Features_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* _FeatureLargeImgPaths; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _MutateItems_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::RPG::Client::SpaceZooEXPChangeType, ::System::UInt32>* _ExpChangeCache_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::System::String*>* _FeatureImgPaths; // 0x30
		::RPG::Client::SpaceZooCatType _Type_k__BackingField; // 0x38
		::System::UInt32 _SpecialCatID_k__BackingField; // 0x3C
		::System::UInt32 _TemplateID_k__BackingField; // 0x40
		::System::UInt32 _UniqueID_k__BackingField; // 0x44
		::RPG::GameCore::ItemRarity _Rarity_k__BackingField; // 0x48
		::System::Boolean _HaveSpecialMutateEvent_k__BackingField; // 0x4C
		::System::UInt32 _EXPCache_k__BackingField; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOCATDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOCATDATA__CCTOR_OFFSET))();
		}

		static ::RPG::Client::SpaceZooCatData* Create(::Class_1_53763D498DB8321D_4* catNodeData)
		{
			return ((::RPG::Client::SpaceZooCatData*(*)(::Class_1_53763D498DB8321D_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOCATDATA_CREATE_OFFSET))(catNodeData);
		}

		static ::RPG::Client::SpaceZooCatData* CreateDisplayData(::System::Collections::Generic::List_1<::System::UInt32>* chanelFeatureIDs)
		{
			return ((::RPG::Client::SpaceZooCatData*(*)(::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOCATDATA_CREATEDISPLAYDATA_OFFSET))(chanelFeatureIDs);
		}

		::System::Void SyncSpaceZooData(::Class_1_53763D498DB8321D_4* catNodeData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_53763D498DB8321D_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOCATDATA_SYNCSPACEZOODATA_OFFSET))(this, catNodeData);
		}

		::System::Void SyncFeatures(::System::Collections::Generic::IList_1<::System::UInt32>* chanelFeatureIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOCATDATA_SYNCFEATURES_OFFSET))(this, chanelFeatureIDs);
		}

		::System::Collections::Generic::List_1<::System::String*>* GetFeatureImagePaths()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOCATDATA_GETFEATUREIMAGEPATHS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* GetFeatureLargeImagePaths()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOCATDATA_GETFEATURELARGEIMAGEPATHS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* GetBreedDisplayImages(::System::Collections::Generic::List_1<::RPG::GameCore::SpaceZooChannelType>* source, ::System::Int32 outlineIndex)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::SpaceZooChannelType>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOCATDATA_GETBREEDDISPLAYIMAGES_OFFSET))(this, source, outlineIndex);
		}

		::System::UInt32 GetFeatureID(::RPG::GameCore::SpaceZooChannelType type)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::SpaceZooChannelType))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOCATDATA_GETFEATUREID_OFFSET))(this, type);
		}

		::RPG::GameCore::SpaceZooFeatureConfigRow* GetFeatureRow(::RPG::GameCore::SpaceZooChannelType type)
		{
			return ((::RPG::GameCore::SpaceZooFeatureConfigRow*(*)(::PVOID, ::RPG::GameCore::SpaceZooChannelType))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOCATDATA_GETFEATUREROW_OFFSET))(this, type);
		}

		static ::System::UInt32 GetDefaultFeatureID(::RPG::GameCore::SpaceZooChannelType type)
		{
			return ((::System::UInt32(*)(::RPG::GameCore::SpaceZooChannelType))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOCATDATA_GETDEFAULTFEATUREID_OFFSET))(type);
		}

		::System::String* GetCatName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOCATDATA_GETCATNAME_OFFSET))(this);
		}

		::System::UInt32 GetEXPChangeCache(::RPG::Client::SpaceZooEXPChangeType type)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::SpaceZooEXPChangeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOCATDATA_GETEXPCHANGECACHE_OFFSET))(this, type);
		}

		::System::UInt32 GetTotalEXPChange()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOCATDATA_GETTOTALEXPCHANGE_OFFSET))(this);
		}

		::System::Void _RefreshCatType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOCATDATA__REFRESHCATTYPE_OFFSET))(this);
		}

		::System::Void _RefreshCatRarity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOCATDATA__REFRESHCATRARITY_OFFSET))(this);
		}

		::System::Boolean _IsVeryRarityCat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOCATDATA__ISVERYRARITYCAT_OFFSET))(this);
		}

		::System::Void _SyncMutateItems(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* items)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOCATDATA__SYNCMUTATEITEMS_OFFSET))(this, items);
		}

		::System::String* _GetNameContentByFeatureType(::RPG::GameCore::SpaceZooChannelType type)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::SpaceZooChannelType))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOCATDATA__GETNAMECONTENTBYFEATURETYPE_OFFSET))(this, type);
		}

		::System::UInt32 get_UniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOCATDATA_GET_UNIQUEID_OFFSET))(this);
		}

		::System::Void set_UniqueID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOCATDATA_SET_UNIQUEID_OFFSET))(this, value);
		}

		::System::UInt32 get_TemplateID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOCATDATA_GET_TEMPLATEID_OFFSET))(this);
		}

		::System::Void set_TemplateID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOCATDATA_SET_TEMPLATEID_OFFSET))(this, value);
		}

		::System::UInt32 get_SpecialCatID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOCATDATA_GET_SPECIALCATID_OFFSET))(this);
		}

		::System::Void set_SpecialCatID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOCATDATA_SET_SPECIALCATID_OFFSET))(this, value);
		}

		::RPG::GameCore::SpaceZooSpecialCatRow* get_SpecialCatRow()
		{
			return ((::RPG::GameCore::SpaceZooSpecialCatRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOCATDATA_GET_SPECIALCATROW_OFFSET))(this);
		}

		::RPG::GameCore::SpaceZooCustomizedCatRow* get_TemplateRow()
		{
			return ((::RPG::GameCore::SpaceZooCustomizedCatRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOCATDATA_GET_TEMPLATEROW_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SpaceZooChannelType, ::System::UInt32>* get_Features()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SpaceZooChannelType, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOCATDATA_GET_FEATURES_OFFSET))(this);
		}

		::System::Void set_Features(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SpaceZooChannelType, ::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SpaceZooChannelType, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOCATDATA_SET_FEATURES_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::Client::SpaceZooEXPChangeType, ::System::UInt32>* get_ExpChangeCache()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::Client::SpaceZooEXPChangeType, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOCATDATA_GET_EXPCHANGECACHE_OFFSET))(this);
		}

		::System::Void set_ExpChangeCache(::System::Collections::Generic::Dictionary_2<::RPG::Client::SpaceZooEXPChangeType, ::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::Client::SpaceZooEXPChangeType, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOCATDATA_SET_EXPCHANGECACHE_OFFSET))(this, value);
		}

		::System::UInt32 get_EXPCache()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOCATDATA_GET_EXPCACHE_OFFSET))(this);
		}

		::System::Void set_EXPCache(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOCATDATA_SET_EXPCACHE_OFFSET))(this, value);
		}

		::RPG::Client::SpaceZooCatType get_Type()
		{
			return ((::RPG::Client::SpaceZooCatType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOCATDATA_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::Client::SpaceZooCatType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SpaceZooCatType))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOCATDATA_SET_TYPE_OFFSET))(this, value);
		}

		::RPG::GameCore::ItemRarity get_Rarity()
		{
			return ((::RPG::GameCore::ItemRarity(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOCATDATA_GET_RARITY_OFFSET))(this);
		}

		::System::Void set_Rarity(::RPG::GameCore::ItemRarity value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ItemRarity))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOCATDATA_SET_RARITY_OFFSET))(this, value);
		}

		::System::Boolean get_CanDelete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOCATDATA_GET_CANDELETE_OFFSET))(this);
		}

		::System::Boolean get_IsSpecial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOCATDATA_GET_ISSPECIAL_OFFSET))(this);
		}

		::System::Boolean get_IsTemplate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOCATDATA_GET_ISTEMPLATE_OFFSET))(this);
		}

		::System::Boolean get_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOCATDATA_GET_ISNEW_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_MutateItems()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOCATDATA_GET_MUTATEITEMS_OFFSET))(this);
		}

		::System::Void set_MutateItems(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOCATDATA_SET_MUTATEITEMS_OFFSET))(this, value);
		}

		::System::Boolean get_HaveMutateEvent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOCATDATA_GET_HAVEMUTATEEVENT_OFFSET))(this);
		}

		::System::Boolean get_HaveSpecialMutateEvent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOCATDATA_GET_HAVESPECIALMUTATEEVENT_OFFSET))(this);
		}

		::System::Void set_HaveSpecialMutateEvent(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOCATDATA_SET_HAVESPECIALMUTATEEVENT_OFFSET))(this, value);
		}
	};
}
