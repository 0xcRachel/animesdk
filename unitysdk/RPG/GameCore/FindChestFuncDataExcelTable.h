#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FindChestFuncDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_FINDCHESTFUNCDATAEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18D19FB0)
#define RPG_GAMECORE_FINDCHESTFUNCDATAEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18D19E00)
#define RPG_GAMECORE_FINDCHESTFUNCDATAEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18D19AD0)
#define RPG_GAMECORE_FINDCHESTFUNCDATAEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18D19DA0)
#define RPG_GAMECORE_FINDCHESTFUNCDATAEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18D1A180)
#define RPG_GAMECORE_FINDCHESTFUNCDATAEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18D19B50)
#define RPG_GAMECORE_FINDCHESTFUNCDATAEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18D1A1C0)
#define RPG_GAMECORE_FINDCHESTFUNCDATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D1A3A0)
#define RPG_GAMECORE_FINDCHESTFUNCDATAEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18D1A850)
#define RPG_GAMECORE_FINDCHESTFUNCDATAEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18D1ABB0)
#define RPG_GAMECORE_FINDCHESTFUNCDATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18D1A300)
#define RPG_GAMECORE_FINDCHESTFUNCDATAEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18D1A260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FindChestFuncDataExcelTable_TypeDefinitionIndex = 12569;

	class FindChestFuncDataExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(FindChestFuncDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x207F0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FindChestFuncDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x207F8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FindChestFuncDataRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FindChestFuncDataRow*>**)Il2CppClass::FromTypeDefinitionIndex(FindChestFuncDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x20800);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FindChestFuncDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x7130);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(FindChestFuncDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x7131);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINDCHESTFUNCDATAEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FindChestFuncDataRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FindChestFuncDataRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINDCHESTFUNCDATAEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINDCHESTFUNCDATAEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FindChestFuncDataRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FindChestFuncDataRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINDCHESTFUNCDATAEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::FindChestFuncDataRow* GetData(::System::UInt32 FuncID)
		{
			return ((::RPG::GameCore::FindChestFuncDataRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINDCHESTFUNCDATAEXCELTABLE_GETDATA_OFFSET))(FuncID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINDCHESTFUNCDATAEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINDCHESTFUNCDATAEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINDCHESTFUNCDATAEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINDCHESTFUNCDATAEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINDCHESTFUNCDATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINDCHESTFUNCDATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::FindChestFuncDataRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::FindChestFuncDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINDCHESTFUNCDATAEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
