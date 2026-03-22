#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MongoObjectId.h"
#include "unitysdk/System/Object.h"

class Class_1_1F45DE918CFECDFD;
class Class_1_34D861EC1B1CDD27;
class Class_1_5610B7568BF432BE;
class Class_1_6E22EDB158B150F7;
class Class_1_735612C94F558EAE_79;
class Class_1_B139B98AF2D803D6_27;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class RogueTournBuildRefHttpDataItem; }
namespace RPG::Client { class RogueTournBuildRefShareCodeDataItem; }
namespace RPG::Client { class RogueTournModule; }
namespace RPG::GameCore { class RogueTournBuildRefFallbackLangConfig; }
namespace RPG::GameCore { class RogueTournBuildRefMatchConfig; }
namespace RPG::GameCore { class RogueTournBuildRefSortConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E59040)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_GETFAVORITEBUILDREFS_OFFSET UNITYSDK_OFFSET(0x9E57BA0)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_GETONEEMPTYSLOTINDEX_OFFSET UNITYSDK_OFFSET(0x9E58DC0)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_GET_CURFALLBACKLANGUAGE_OFFSET UNITYSDK_OFFSET(0x9E59420)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_GET_CURFAVORITECOUNT_OFFSET UNITYSDK_OFFSET(0x9E57E30)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_GET_FALLBACKLANGCONFIG_OFFSET UNITYSDK_OFFSET(0x9E59370)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_GET_HTTPDATADICT_OFFSET UNITYSDK_OFFSET(0x9E57E10)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_GET_HTTPDATAVERSION_OFFSET UNITYSDK_OFFSET(0x9E57DF0)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_GET_ISHTTPDATAPREPARED_OFFSET UNITYSDK_OFFSET(0x9E57DE0)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_GET_ISSHARECODEDATAPREPARED_OFFSET UNITYSDK_OFFSET(0x9E59000)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_GET_MATCHCONFIG_OFFSET UNITYSDK_OFFSET(0x9E591B0)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_GET_MAXFAVORITECOUNT_OFFSET UNITYSDK_OFFSET(0x9E57E90)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_GET_MAXSHARECODEARCHIVECOUNT_OFFSET UNITYSDK_OFFSET(0x9E58EB0)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_GET_SHARECODEDATADICT_OFFSET UNITYSDK_OFFSET(0x9E59020)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_GET_SORTCONFIG_OFFSET UNITYSDK_OFFSET(0x9E59290)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_ISFAVORITEBUILDREF_OFFSET UNITYSDK_OFFSET(0x9E57760)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x9E59170)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_SET_HTTPDATADICT_OFFSET UNITYSDK_OFFSET(0x9E57E20)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_SET_HTTPDATAVERSION_OFFSET UNITYSDK_OFFSET(0x9E57E00)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_SET_ISSHARECODEDATAPREPARED_OFFSET UNITYSDK_OFFSET(0x9E59010)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_SET_MAXFAVORITECOUNT_OFFSET UNITYSDK_OFFSET(0x9E57EA0)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_SET_SHARECODEDATADICT_OFFSET UNITYSDK_OFFSET(0x9E59030)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_SYNCDATAVERSION_OFFSET UNITYSDK_OFFSET(0x9E56870)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_SYNCDELETEARCHIVE_OFFSET UNITYSDK_OFFSET(0x9E58A40)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_SYNCFAVORITE_OFFSET UNITYSDK_OFFSET(0x9E56ED0)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_SYNCINTERACTDATA_OFFSET UNITYSDK_OFFSET(0x9E57050)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_SYNCISLIKE_OFFSET UNITYSDK_OFFSET(0x9E57570)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_SYNCRENAMEARCHIVE_OFFSET UNITYSDK_OFFSET(0x9E588C0)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_SYNCSERVERARCHIVES_OFFSET UNITYSDK_OFFSET(0x9E58120)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO_SYNCSTATICDATA_OFFSET UNITYSDK_OFFSET(0x9E568C0)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO__CLEARHTTPDATADICT_OFFSET UNITYSDK_OFFSET(0x9E56680)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO__CLEARSHARECODEDATADICT_OFFSET UNITYSDK_OFFSET(0x9E57F00)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9E56460)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO__DISPOSEHTTP_OFFSET UNITYSDK_OFFSET(0x9E565E0)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO__DISPOSESHARECODE_OFFSET UNITYSDK_OFFSET(0x9E57EB0)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO__TRYPRUNEFAVORITEBUILDREFS_OFFSET UNITYSDK_OFFSET(0x9E577F0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournBuildRefInfo_TypeDefinitionIndex = 53677;

	class RogueTournBuildRefInfo : public ::System::Object
	{
	public:
		// static const ::System::String* _MatchConfigPath; // 0x0
		// static const ::System::String* _SortConfigPath; // 0x0
		// static const ::System::String* _FallbackLangConfigPath; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueTournBuildRefShareCodeDataItem*>* _ShareCodeDataDict_k__BackingField; // 0x10
		::RPG::GameCore::RogueTournBuildRefFallbackLangConfig* _FallbackLangConfig; // 0x18
		::RPG::GameCore::RogueTournBuildRefSortConfig* _SortConfig; // 0x20
		::System::Collections::Generic::Dictionary_2<::RPG::Client::MongoObjectId, ::RPG::Client::RogueTournBuildRefHttpDataItem*>* _HttpDataDict_k__BackingField; // 0x28
		::RPG::Client::RogueTournModule* _OwnerRef; // 0x30
		::System::Collections::Generic::HashSet_1<::RPG::Client::MongoObjectId>* _FavoriteBuildRefIDs; // 0x38
		::RPG::GameCore::RogueTournBuildRefMatchConfig* _MatchConfig; // 0x40
		::System::UInt32 _HttpDataVersion_k__BackingField; // 0x48
		::System::UInt32 _MaxFavoriteCount_k__BackingField; // 0x4C
		::System::Boolean _IsShareCodeDataPrepared_k__BackingField; // 0x50

		::System::Void _ctor(::RPG::Client::RogueTournModule* owner)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournModule*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO__CTOR_OFFSET))(this, owner);
		}

		::System::Void _DisposeHttp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO__DISPOSEHTTP_OFFSET))(this);
		}

		::System::Void SyncDataVersion(::System::UInt32 version)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_SYNCDATAVERSION_OFFSET))(this, version);
		}

		::System::Void SyncStaticData(::Class_1_1F45DE918CFECDFD* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1F45DE918CFECDFD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_SYNCSTATICDATA_OFFSET))(this, rsp);
		}

		::System::Void SyncFavorite(::Class_1_34D861EC1B1CDD27* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_34D861EC1B1CDD27*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_SYNCFAVORITE_OFFSET))(this, rsp);
		}

		::System::Void SyncInteractData(::Class_1_5610B7568BF432BE* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5610B7568BF432BE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_SYNCINTERACTDATA_OFFSET))(this, rsp);
		}

		::System::Void SyncIsLike(::RPG::Client::MongoObjectId buildRefID, ::System::Boolean isLike)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MongoObjectId, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_SYNCISLIKE_OFFSET))(this, buildRefID, isLike);
		}

		::System::Boolean IsFavoriteBuildRef(::RPG::Client::MongoObjectId buildRefID)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MongoObjectId))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_ISFAVORITEBUILDREF_OFFSET))(this, buildRefID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueTournBuildRefHttpDataItem*>* GetFavoriteBuildRefs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTournBuildRefHttpDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_GETFAVORITEBUILDREFS_OFFSET))(this);
		}

		::System::Void _ClearHttpDataDict()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO__CLEARHTTPDATADICT_OFFSET))(this);
		}

		::System::Void _TryPruneFavoriteBuildRefs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO__TRYPRUNEFAVORITEBUILDREFS_OFFSET))(this);
		}

		::System::Boolean get_IsHttpDataPrepared()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_GET_ISHTTPDATAPREPARED_OFFSET))(this);
		}

		::System::UInt32 get_HttpDataVersion()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_GET_HTTPDATAVERSION_OFFSET))(this);
		}

		::System::Void set_HttpDataVersion(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_SET_HTTPDATAVERSION_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::Client::MongoObjectId, ::RPG::Client::RogueTournBuildRefHttpDataItem*>* get_HttpDataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::Client::MongoObjectId, ::RPG::Client::RogueTournBuildRefHttpDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_GET_HTTPDATADICT_OFFSET))(this);
		}

		::System::Void set_HttpDataDict(::System::Collections::Generic::Dictionary_2<::RPG::Client::MongoObjectId, ::RPG::Client::RogueTournBuildRefHttpDataItem*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::Client::MongoObjectId, ::RPG::Client::RogueTournBuildRefHttpDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_SET_HTTPDATADICT_OFFSET))(this, value);
		}

		::System::UInt32 get_CurFavoriteCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_GET_CURFAVORITECOUNT_OFFSET))(this);
		}

		::System::UInt32 get_MaxFavoriteCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_GET_MAXFAVORITECOUNT_OFFSET))(this);
		}

		::System::Void set_MaxFavoriteCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_SET_MAXFAVORITECOUNT_OFFSET))(this, value);
		}

		::System::Void _DisposeShareCode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO__DISPOSESHARECODE_OFFSET))(this);
		}

		::System::Void SyncServerArchives(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_6E22EDB158B150F7*>* protoArchives)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_6E22EDB158B150F7*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_SYNCSERVERARCHIVES_OFFSET))(this, protoArchives);
		}

		::System::Void SyncRenameArchive(::Class_1_B139B98AF2D803D6_27* protoRsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B139B98AF2D803D6_27*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_SYNCRENAMEARCHIVE_OFFSET))(this, protoRsp);
		}

		::System::Void SyncDeleteArchive(::Class_1_735612C94F558EAE_79* protoRsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_735612C94F558EAE_79*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_SYNCDELETEARCHIVE_OFFSET))(this, protoRsp);
		}

		::System::UInt32 GetOneEmptySlotIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_GETONEEMPTYSLOTINDEX_OFFSET))(this);
		}

		::System::Void _ClearShareCodeDataDict()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO__CLEARSHARECODEDATADICT_OFFSET))(this);
		}

		::System::Boolean get_IsShareCodeDataPrepared()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_GET_ISSHARECODEDATAPREPARED_OFFSET))(this);
		}

		::System::Void set_IsShareCodeDataPrepared(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_SET_ISSHARECODEDATAPREPARED_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueTournBuildRefShareCodeDataItem*>* get_ShareCodeDataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueTournBuildRefShareCodeDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_GET_SHARECODEDATADICT_OFFSET))(this);
		}

		::System::Void set_ShareCodeDataDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueTournBuildRefShareCodeDataItem*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueTournBuildRefShareCodeDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_SET_SHARECODEDATADICT_OFFSET))(this, value);
		}

		::System::UInt32 get_MaxShareCodeArchiveCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_GET_MAXSHARECODEARCHIVECOUNT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_ONRECONNECT_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournBuildRefMatchConfig* get_MatchConfig()
		{
			return ((::RPG::GameCore::RogueTournBuildRefMatchConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_GET_MATCHCONFIG_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournBuildRefSortConfig* get_SortConfig()
		{
			return ((::RPG::GameCore::RogueTournBuildRefSortConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_GET_SORTCONFIG_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournBuildRefFallbackLangConfig* get_FallbackLangConfig()
		{
			return ((::RPG::GameCore::RogueTournBuildRefFallbackLangConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_GET_FALLBACKLANGCONFIG_OFFSET))(this);
		}

		::System::String* get_CurFallbackLanguage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO_GET_CURFALLBACKLANGUAGE_OFFSET))(this);
		}
	};
}
