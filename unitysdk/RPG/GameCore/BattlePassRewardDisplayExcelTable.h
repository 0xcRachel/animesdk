#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BattlePassRewardDisplayRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_BATTLEPASSREWARDDISPLAYEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x168E0100)
#define RPG_GAMECORE_BATTLEPASSREWARDDISPLAYEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x168DFF50)
#define RPG_GAMECORE_BATTLEPASSREWARDDISPLAYEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x168DFC20)
#define RPG_GAMECORE_BATTLEPASSREWARDDISPLAYEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x168DFEF0)
#define RPG_GAMECORE_BATTLEPASSREWARDDISPLAYEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x168E0280)
#define RPG_GAMECORE_BATTLEPASSREWARDDISPLAYEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x168DFCA0)
#define RPG_GAMECORE_BATTLEPASSREWARDDISPLAYEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x168E02C0)
#define RPG_GAMECORE_BATTLEPASSREWARDDISPLAYEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x168E04A0)
#define RPG_GAMECORE_BATTLEPASSREWARDDISPLAYEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x168E0710)
#define RPG_GAMECORE_BATTLEPASSREWARDDISPLAYEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x168E0A20)
#define RPG_GAMECORE_BATTLEPASSREWARDDISPLAYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x168E0400)
#define RPG_GAMECORE_BATTLEPASSREWARDDISPLAYEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x168E0360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattlePassRewardDisplayExcelTable_TypeDefinitionIndex = 11687;

	class BattlePassRewardDisplayExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BattlePassRewardDisplayExcelTable_TypeDefinitionIndex)->GetStaticField(0x272D0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(BattlePassRewardDisplayExcelTable_TypeDefinitionIndex)->GetStaticField(0x272D8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattlePassRewardDisplayRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattlePassRewardDisplayRow*>**)Il2CppClass::FromTypeDefinitionIndex(BattlePassRewardDisplayExcelTable_TypeDefinitionIndex)->GetStaticField(0x272E0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BattlePassRewardDisplayExcelTable_TypeDefinitionIndex)->GetStaticField(0x84C0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(BattlePassRewardDisplayExcelTable_TypeDefinitionIndex)->GetStaticField(0x84C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSREWARDDISPLAYEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattlePassRewardDisplayRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattlePassRewardDisplayRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSREWARDDISPLAYEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSREWARDDISPLAYEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattlePassRewardDisplayRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattlePassRewardDisplayRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSREWARDDISPLAYEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::BattlePassRewardDisplayRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::BattlePassRewardDisplayRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSREWARDDISPLAYEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSREWARDDISPLAYEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSREWARDDISPLAYEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSREWARDDISPLAYEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSREWARDDISPLAYEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSREWARDDISPLAYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSREWARDDISPLAYEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::BattlePassRewardDisplayRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::BattlePassRewardDisplayRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPASSREWARDDISPLAYEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
