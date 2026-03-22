#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ToastManagerRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_TOASTMANAGEREXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x170F8750)
#define RPG_GAMECORE_TOASTMANAGEREXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x170F85A0)
#define RPG_GAMECORE_TOASTMANAGEREXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x170F8270)
#define RPG_GAMECORE_TOASTMANAGEREXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x170F8540)
#define RPG_GAMECORE_TOASTMANAGEREXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x170F8900)
#define RPG_GAMECORE_TOASTMANAGEREXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x170F82F0)
#define RPG_GAMECORE_TOASTMANAGEREXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x170F8940)
#define RPG_GAMECORE_TOASTMANAGEREXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x170F8B20)
#define RPG_GAMECORE_TOASTMANAGEREXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x170F8D20)
#define RPG_GAMECORE_TOASTMANAGEREXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x170F9030)
#define RPG_GAMECORE_TOASTMANAGEREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x170F8A80)
#define RPG_GAMECORE_TOASTMANAGEREXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x170F89E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ToastManagerExcelTable_TypeDefinitionIndex = 13914;

	class ToastManagerExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ToastManagerRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ToastManagerRow*>**)Il2CppClass::FromTypeDefinitionIndex(ToastManagerExcelTable_TypeDefinitionIndex)->GetStaticField(0x25360);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ToastManagerExcelTable_TypeDefinitionIndex)->GetStaticField(0x25368);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ToastManagerExcelTable_TypeDefinitionIndex)->GetStaticField(0x25370);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ToastManagerExcelTable_TypeDefinitionIndex)->GetStaticField(0x7CD0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ToastManagerExcelTable_TypeDefinitionIndex)->GetStaticField(0x7CD1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOASTMANAGEREXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ToastManagerRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ToastManagerRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOASTMANAGEREXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOASTMANAGEREXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ToastManagerRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ToastManagerRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOASTMANAGEREXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ToastManagerRow* GetData(::System::String* FuncName)
		{
			return ((::RPG::GameCore::ToastManagerRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOASTMANAGEREXCELTABLE_GETDATA_OFFSET))(FuncName);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOASTMANAGEREXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOASTMANAGEREXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOASTMANAGEREXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOASTMANAGEREXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOASTMANAGEREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOASTMANAGEREXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ToastManagerRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ToastManagerRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOASTMANAGEREXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
