#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HeliobusRewardRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_HELIOBUSREWARDEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x16B6A720)
#define RPG_GAMECORE_HELIOBUSREWARDEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16B6A5A0)
#define RPG_GAMECORE_HELIOBUSREWARDEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x16B6A270)
#define RPG_GAMECORE_HELIOBUSREWARDEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x16B6A540)
#define RPG_GAMECORE_HELIOBUSREWARDEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x16B6A8F0)
#define RPG_GAMECORE_HELIOBUSREWARDEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x16B6A2F0)
#define RPG_GAMECORE_HELIOBUSREWARDEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x16B6A930)
#define RPG_GAMECORE_HELIOBUSREWARDEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16B6AB10)
#define RPG_GAMECORE_HELIOBUSREWARDEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x16B6ACA0)
#define RPG_GAMECORE_HELIOBUSREWARDEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16B6AFB0)
#define RPG_GAMECORE_HELIOBUSREWARDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x16B6AA70)
#define RPG_GAMECORE_HELIOBUSREWARDEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x16B6A9D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeliobusRewardExcelTable_TypeDefinitionIndex = 12518;

	class HeliobusRewardExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HeliobusRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x30740);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusRewardRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusRewardRow*>**)Il2CppClass::FromTypeDefinitionIndex(HeliobusRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x30748);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(HeliobusRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x30750);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HeliobusRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0xBAA0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(HeliobusRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0xBAA1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSREWARDEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusRewardRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusRewardRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSREWARDEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSREWARDEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusRewardRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusRewardRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSREWARDEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::HeliobusRewardRow* GetData(::System::UInt32 Level)
		{
			return ((::RPG::GameCore::HeliobusRewardRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSREWARDEXCELTABLE_GETDATA_OFFSET))(Level);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSREWARDEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSREWARDEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSREWARDEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSREWARDEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSREWARDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSREWARDEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::HeliobusRewardRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::HeliobusRewardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSREWARDEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
