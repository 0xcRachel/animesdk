#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityBannerCompanyMissionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ACTIVITYBANNERCOMPANYMISSIONEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x16EB7EE0)
#define RPG_GAMECORE_ACTIVITYBANNERCOMPANYMISSIONEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16EB7D60)
#define RPG_GAMECORE_ACTIVITYBANNERCOMPANYMISSIONEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x16EB7A30)
#define RPG_GAMECORE_ACTIVITYBANNERCOMPANYMISSIONEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x16EB7D00)
#define RPG_GAMECORE_ACTIVITYBANNERCOMPANYMISSIONEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x16EB8060)
#define RPG_GAMECORE_ACTIVITYBANNERCOMPANYMISSIONEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x16EB7AB0)
#define RPG_GAMECORE_ACTIVITYBANNERCOMPANYMISSIONEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x16EB80A0)
#define RPG_GAMECORE_ACTIVITYBANNERCOMPANYMISSIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16EB8280)
#define RPG_GAMECORE_ACTIVITYBANNERCOMPANYMISSIONEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x16EB8760)
#define RPG_GAMECORE_ACTIVITYBANNERCOMPANYMISSIONEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16EB8A70)
#define RPG_GAMECORE_ACTIVITYBANNERCOMPANYMISSIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x16EB81E0)
#define RPG_GAMECORE_ACTIVITYBANNERCOMPANYMISSIONEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x16EB8140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityBannerCompanyMissionExcelTable_TypeDefinitionIndex = 10273;

	class ActivityBannerCompanyMissionExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityBannerCompanyMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0x126E0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityBannerCompanyMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0x126E8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityBannerCompanyMissionRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityBannerCompanyMissionRow*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityBannerCompanyMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0x126F0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ActivityBannerCompanyMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0x6390);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ActivityBannerCompanyMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0x6391);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYBANNERCOMPANYMISSIONEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityBannerCompanyMissionRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityBannerCompanyMissionRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYBANNERCOMPANYMISSIONEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYBANNERCOMPANYMISSIONEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityBannerCompanyMissionRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityBannerCompanyMissionRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYBANNERCOMPANYMISSIONEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ActivityBannerCompanyMissionRow* GetData(::System::UInt32 BannerID)
		{
			return ((::RPG::GameCore::ActivityBannerCompanyMissionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYBANNERCOMPANYMISSIONEXCELTABLE_GETDATA_OFFSET))(BannerID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYBANNERCOMPANYMISSIONEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYBANNERCOMPANYMISSIONEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYBANNERCOMPANYMISSIONEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYBANNERCOMPANYMISSIONEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYBANNERCOMPANYMISSIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYBANNERCOMPANYMISSIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ActivityBannerCompanyMissionRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityBannerCompanyMissionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYBANNERCOMPANYMISSIONEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
