#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueBuffTypeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEBUFFTYPEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x16E1D940)
#define RPG_GAMECORE_ROGUEBUFFTYPEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16E1D7C0)
#define RPG_GAMECORE_ROGUEBUFFTYPEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x16E1D490)
#define RPG_GAMECORE_ROGUEBUFFTYPEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x16E1D760)
#define RPG_GAMECORE_ROGUEBUFFTYPEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x16E1DAC0)
#define RPG_GAMECORE_ROGUEBUFFTYPEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x16E1D510)
#define RPG_GAMECORE_ROGUEBUFFTYPEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x16E1DB00)
#define RPG_GAMECORE_ROGUEBUFFTYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16E1DCE0)
#define RPG_GAMECORE_ROGUEBUFFTYPEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x16E1E110)
#define RPG_GAMECORE_ROGUEBUFFTYPEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16E1E420)
#define RPG_GAMECORE_ROGUEBUFFTYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x16E1DC40)
#define RPG_GAMECORE_ROGUEBUFFTYPEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x16E1DBA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueBuffTypeExcelTable_TypeDefinitionIndex = 13386;

	class RogueBuffTypeExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueBuffTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x2BE40);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueBuffTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x2BE48);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueBuffTypeRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueBuffTypeRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueBuffTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x2BE50);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueBuffTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0xA060);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueBuffTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0xA061);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBUFFTYPEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueBuffTypeRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueBuffTypeRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBUFFTYPEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBUFFTYPEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueBuffTypeRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueBuffTypeRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBUFFTYPEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueBuffTypeRow* GetData(::System::UInt32 RogueBuffType)
		{
			return ((::RPG::GameCore::RogueBuffTypeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBUFFTYPEEXCELTABLE_GETDATA_OFFSET))(RogueBuffType);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBUFFTYPEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBUFFTYPEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBUFFTYPEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBUFFTYPEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBUFFTYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBUFFTYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueBuffTypeRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueBuffTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBUFFTYPEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
