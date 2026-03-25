#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MenuItemExtraInfoRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MENUITEMEXTRAINFOEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x173E2CD0)
#define RPG_GAMECORE_MENUITEMEXTRAINFOEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x173E2B20)
#define RPG_GAMECORE_MENUITEMEXTRAINFOEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x173E27F0)
#define RPG_GAMECORE_MENUITEMEXTRAINFOEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x173E2AC0)
#define RPG_GAMECORE_MENUITEMEXTRAINFOEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x173E2EA0)
#define RPG_GAMECORE_MENUITEMEXTRAINFOEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x173E2870)
#define RPG_GAMECORE_MENUITEMEXTRAINFOEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x173E2EE0)
#define RPG_GAMECORE_MENUITEMEXTRAINFOEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x173E30C0)
#define RPG_GAMECORE_MENUITEMEXTRAINFOEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x173E32F0)
#define RPG_GAMECORE_MENUITEMEXTRAINFOEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x173E3650)
#define RPG_GAMECORE_MENUITEMEXTRAINFOEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x173E3020)
#define RPG_GAMECORE_MENUITEMEXTRAINFOEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x173E2F80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MenuItemExtraInfoExcelTable_TypeDefinitionIndex = 11984;

	class MenuItemExtraInfoExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MenuItemExtraInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x459F0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MenuItemExtraInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x459F8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MenuItemExtraInfoRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MenuItemExtraInfoRow*>**)Il2CppClass::FromTypeDefinitionIndex(MenuItemExtraInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x45A00);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MenuItemExtraInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x11F20);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MenuItemExtraInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x11F21);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MENUITEMEXTRAINFOEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MenuItemExtraInfoRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MenuItemExtraInfoRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MENUITEMEXTRAINFOEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MENUITEMEXTRAINFOEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MenuItemExtraInfoRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MenuItemExtraInfoRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MENUITEMEXTRAINFOEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MenuItemExtraInfoRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::MenuItemExtraInfoRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MENUITEMEXTRAINFOEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MENUITEMEXTRAINFOEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MENUITEMEXTRAINFOEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MENUITEMEXTRAINFOEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MENUITEMEXTRAINFOEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MENUITEMEXTRAINFOEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MENUITEMEXTRAINFOEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MenuItemExtraInfoRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::MenuItemExtraInfoRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MENUITEMEXTRAINFOEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
