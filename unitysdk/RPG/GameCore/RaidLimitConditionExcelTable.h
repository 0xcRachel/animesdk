#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RaidLimitConditionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RAIDLIMITCONDITIONEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1900AC30)
#define RPG_GAMECORE_RAIDLIMITCONDITIONEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1900AA80)
#define RPG_GAMECORE_RAIDLIMITCONDITIONEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1900A750)
#define RPG_GAMECORE_RAIDLIMITCONDITIONEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1900AA20)
#define RPG_GAMECORE_RAIDLIMITCONDITIONEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1900AE00)
#define RPG_GAMECORE_RAIDLIMITCONDITIONEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1900A7D0)
#define RPG_GAMECORE_RAIDLIMITCONDITIONEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1900AE40)
#define RPG_GAMECORE_RAIDLIMITCONDITIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1900B020)
#define RPG_GAMECORE_RAIDLIMITCONDITIONEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1900B350)
#define RPG_GAMECORE_RAIDLIMITCONDITIONEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1900B6B0)
#define RPG_GAMECORE_RAIDLIMITCONDITIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1900AF80)
#define RPG_GAMECORE_RAIDLIMITCONDITIONEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1900AEE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RaidLimitConditionExcelTable_TypeDefinitionIndex = 13799;

	class RaidLimitConditionExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RaidLimitConditionExcelTable_TypeDefinitionIndex)->GetStaticField(0x28340);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RaidLimitConditionExcelTable_TypeDefinitionIndex)->GetStaticField(0x28348);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RaidLimitConditionRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RaidLimitConditionRow*>**)Il2CppClass::FromTypeDefinitionIndex(RaidLimitConditionExcelTable_TypeDefinitionIndex)->GetStaticField(0x28350);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RaidLimitConditionExcelTable_TypeDefinitionIndex)->GetStaticField(0x7C80);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RaidLimitConditionExcelTable_TypeDefinitionIndex)->GetStaticField(0x7C81);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDLIMITCONDITIONEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RaidLimitConditionRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RaidLimitConditionRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDLIMITCONDITIONEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDLIMITCONDITIONEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RaidLimitConditionRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RaidLimitConditionRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDLIMITCONDITIONEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RaidLimitConditionRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::RaidLimitConditionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDLIMITCONDITIONEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDLIMITCONDITIONEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDLIMITCONDITIONEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDLIMITCONDITIONEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDLIMITCONDITIONEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDLIMITCONDITIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDLIMITCONDITIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RaidLimitConditionRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RaidLimitConditionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDLIMITCONDITIONEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
