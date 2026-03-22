#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4CF8088A158DCE25_77;
class Class_1_52DCEE691286F89A_3;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class RogueMagicAreaDataItem; }
namespace RPG::Client { class RogueMagicDiffCompDataItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMAGICAREACOLLECTION_CLEARCACHEDDIFFCOMPLEVEL_OFFSET UNITYSDK_OFFSET(0x9E01670)
#define RPG_CLIENT_ROGUEMAGICAREACOLLECTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9DFFB40)
#define RPG_CLIENT_ROGUEMAGICAREACOLLECTION_GETAREA_OFFSET UNITYSDK_OFFSET(0x9E00060)
#define RPG_CLIENT_ROGUEMAGICAREACOLLECTION_GETCUSTOMAREAS_OFFSET UNITYSDK_OFFSET(0x9E00C70)
#define RPG_CLIENT_ROGUEMAGICAREACOLLECTION_GETDIFFCOMPDATABYLEVEL_OFFSET UNITYSDK_OFFSET(0x9E01450)
#define RPG_CLIENT_ROGUEMAGICAREACOLLECTION_GETDIFFCOMPIDSBYLEVEL_OFFSET UNITYSDK_OFFSET(0x9E01230)
#define RPG_CLIENT_ROGUEMAGICAREACOLLECTION_GETDIFFCOMP_OFFSET UNITYSDK_OFFSET(0x9E008E0)
#define RPG_CLIENT_ROGUEMAGICAREACOLLECTION_GETFINALAREA_OFFSET UNITYSDK_OFFSET(0x9E01020)
#define RPG_CLIENT_ROGUEMAGICAREACOLLECTION_GETGUIDEAREA_OFFSET UNITYSDK_OFFSET(0x9E00E70)
#define RPG_CLIENT_ROGUEMAGICAREACOLLECTION_GETREGULARAREAS_OFFSET UNITYSDK_OFFSET(0x9E00A00)
#define RPG_CLIENT_ROGUEMAGICAREACOLLECTION_GET_AREADATAITEMS_OFFSET UNITYSDK_OFFSET(0x9E016D0)
#define RPG_CLIENT_ROGUEMAGICAREACOLLECTION_GET_DIFFCOMPITEMS_OFFSET UNITYSDK_OFFSET(0x9E016F0)
#define RPG_CLIENT_ROGUEMAGICAREACOLLECTION_GET_MAXDIFFCOMPLEVEL_OFFSET UNITYSDK_OFFSET(0x9E01710)
#define RPG_CLIENT_ROGUEMAGICAREACOLLECTION_INIT_OFFSET UNITYSDK_OFFSET(0x9DFF500)
#define RPG_CLIENT_ROGUEMAGICAREACOLLECTION_ISGUIDEAREAPASSED_OFFSET UNITYSDK_OFFSET(0x9E011D0)
#define RPG_CLIENT_ROGUEMAGICAREACOLLECTION_SETCACHEDDIFFCOMPLEVEL_OFFSET UNITYSDK_OFFSET(0x9E01610)
#define RPG_CLIENT_ROGUEMAGICAREACOLLECTION_SET_AREADATAITEMS_OFFSET UNITYSDK_OFFSET(0x9E016E0)
#define RPG_CLIENT_ROGUEMAGICAREACOLLECTION_SET_DIFFCOMPITEMS_OFFSET UNITYSDK_OFFSET(0x9E01700)
#define RPG_CLIENT_ROGUEMAGICAREACOLLECTION_SYNCAREAS_OFFSET UNITYSDK_OFFSET(0x9DFFCC0)
#define RPG_CLIENT_ROGUEMAGICAREACOLLECTION_SYNCDIFFCOMPS_OFFSET UNITYSDK_OFFSET(0x9E00510)
#define RPG_CLIENT_ROGUEMAGICAREACOLLECTION_TRYGETCACHEDDIFFCOMPLEVEL_OFFSET UNITYSDK_OFFSET(0x9E015A0)
#define RPG_CLIENT_ROGUEMAGICAREACOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x9DFF3C0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicAreaCollection_TypeDefinitionIndex = 53545;

	class RogueMagicAreaCollection : public ::System::Object
	{
	public:
		// static const ::System::Int32 InvalidCachedDiffCompLevel = 0xFFFFFFFF; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueMagicAreaDataItem*>* _AreaDataItems_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueMagicDiffCompDataItem*>* _DiffCompItems_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _DiffCompLevel2ID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREACOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREACOLLECTION_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREACOLLECTION_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncAreas(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_52DCEE691286F89A_3*>* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_52DCEE691286F89A_3*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREACOLLECTION_SYNCAREAS_OFFSET))(this, proto);
		}

		::System::Void SyncDiffComps(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4CF8088A158DCE25_77*>* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_4CF8088A158DCE25_77*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREACOLLECTION_SYNCDIFFCOMPS_OFFSET))(this, proto);
		}

		::RPG::Client::RogueMagicAreaDataItem* GetArea(::System::UInt32 areaID)
		{
			return ((::RPG::Client::RogueMagicAreaDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREACOLLECTION_GETAREA_OFFSET))(this, areaID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicAreaDataItem*>* GetRegularAreas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueMagicAreaDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREACOLLECTION_GETREGULARAREAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicAreaDataItem*>* GetCustomAreas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueMagicAreaDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREACOLLECTION_GETCUSTOMAREAS_OFFSET))(this);
		}

		::RPG::Client::RogueMagicAreaDataItem* GetGuideArea()
		{
			return ((::RPG::Client::RogueMagicAreaDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREACOLLECTION_GETGUIDEAREA_OFFSET))(this);
		}

		::RPG::Client::RogueMagicAreaDataItem* GetFinalArea()
		{
			return ((::RPG::Client::RogueMagicAreaDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREACOLLECTION_GETFINALAREA_OFFSET))(this);
		}

		::System::Boolean IsGuideAreaPassed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREACOLLECTION_ISGUIDEAREAPASSED_OFFSET))(this);
		}

		::RPG::Client::RogueMagicDiffCompDataItem* GetDiffComp(::System::UInt32 diffCompID)
		{
			return ((::RPG::Client::RogueMagicDiffCompDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREACOLLECTION_GETDIFFCOMP_OFFSET))(this, diffCompID);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetDiffCompIDsByLevel(::System::UInt32 level)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREACOLLECTION_GETDIFFCOMPIDSBYLEVEL_OFFSET))(this, level);
		}

		::RPG::Client::RogueMagicDiffCompDataItem* GetDiffCompDataByLevel(::System::UInt32 level)
		{
			return ((::RPG::Client::RogueMagicDiffCompDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREACOLLECTION_GETDIFFCOMPDATABYLEVEL_OFFSET))(this, level);
		}

		::System::Boolean TryGetCachedDiffCompLevel(::System::UInt32& level)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREACOLLECTION_TRYGETCACHEDDIFFCOMPLEVEL_OFFSET))(this, level);
		}

		::System::Void SetCachedDiffCompLevel(::System::UInt32 level)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREACOLLECTION_SETCACHEDDIFFCOMPLEVEL_OFFSET))(this, level);
		}

		::System::Void ClearCachedDiffCompLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREACOLLECTION_CLEARCACHEDDIFFCOMPLEVEL_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueMagicAreaDataItem*>* get_AreaDataItems()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueMagicAreaDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREACOLLECTION_GET_AREADATAITEMS_OFFSET))(this);
		}

		::System::Void set_AreaDataItems(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueMagicAreaDataItem*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueMagicAreaDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREACOLLECTION_SET_AREADATAITEMS_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueMagicDiffCompDataItem*>* get_DiffCompItems()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueMagicDiffCompDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREACOLLECTION_GET_DIFFCOMPITEMS_OFFSET))(this);
		}

		::System::Void set_DiffCompItems(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueMagicDiffCompDataItem*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueMagicDiffCompDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREACOLLECTION_SET_DIFFCOMPITEMS_OFFSET))(this, value);
		}

		::System::UInt32 get_MaxDiffCompLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICAREACOLLECTION_GET_MAXDIFFCOMPLEVEL_OFFSET))(this);
		}
	};
}
