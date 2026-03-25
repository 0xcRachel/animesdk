#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HeliobusChallengeRewardRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_HELIOBUSCHALLENGEREWARDEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x172B2560)
#define RPG_GAMECORE_HELIOBUSCHALLENGEREWARDEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x172B23E0)
#define RPG_GAMECORE_HELIOBUSCHALLENGEREWARDEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x172B20B0)
#define RPG_GAMECORE_HELIOBUSCHALLENGEREWARDEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x172B2380)
#define RPG_GAMECORE_HELIOBUSCHALLENGEREWARDEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x172B2730)
#define RPG_GAMECORE_HELIOBUSCHALLENGEREWARDEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x172B2130)
#define RPG_GAMECORE_HELIOBUSCHALLENGEREWARDEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x172B2770)
#define RPG_GAMECORE_HELIOBUSCHALLENGEREWARDEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x172B2950)
#define RPG_GAMECORE_HELIOBUSCHALLENGEREWARDEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x172B2BD0)
#define RPG_GAMECORE_HELIOBUSCHALLENGEREWARDEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x172B2EE0)
#define RPG_GAMECORE_HELIOBUSCHALLENGEREWARDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x172B28B0)
#define RPG_GAMECORE_HELIOBUSCHALLENGEREWARDEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x172B2810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeliobusChallengeRewardExcelTable_TypeDefinitionIndex = 12604;

	class HeliobusChallengeRewardExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(HeliobusChallengeRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x38BC0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusChallengeRewardRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusChallengeRewardRow*>**)Il2CppClass::FromTypeDefinitionIndex(HeliobusChallengeRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x38BC8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HeliobusChallengeRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x38BD0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HeliobusChallengeRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0xE310);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(HeliobusChallengeRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0xE311);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGEREWARDEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusChallengeRewardRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusChallengeRewardRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGEREWARDEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGEREWARDEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusChallengeRewardRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusChallengeRewardRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGEREWARDEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::HeliobusChallengeRewardRow* GetData(::System::UInt32 ChallengeRewardTabID)
		{
			return ((::RPG::GameCore::HeliobusChallengeRewardRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGEREWARDEXCELTABLE_GETDATA_OFFSET))(ChallengeRewardTabID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGEREWARDEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGEREWARDEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGEREWARDEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGEREWARDEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGEREWARDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGEREWARDEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::HeliobusChallengeRewardRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::HeliobusChallengeRewardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGEREWARDEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
