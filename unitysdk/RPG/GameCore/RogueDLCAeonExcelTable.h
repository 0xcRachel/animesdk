#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueDLCAeonRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEDLCAEONEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x19252C80)
#define RPG_GAMECORE_ROGUEDLCAEONEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19252B00)
#define RPG_GAMECORE_ROGUEDLCAEONEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x192527D0)
#define RPG_GAMECORE_ROGUEDLCAEONEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x19252AA0)
#define RPG_GAMECORE_ROGUEDLCAEONEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x19252E50)
#define RPG_GAMECORE_ROGUEDLCAEONEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x19252850)
#define RPG_GAMECORE_ROGUEDLCAEONEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x19252E90)
#define RPG_GAMECORE_ROGUEDLCAEONEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19253070)
#define RPG_GAMECORE_ROGUEDLCAEONEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x19253910)
#define RPG_GAMECORE_ROGUEDLCAEONEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19253C30)
#define RPG_GAMECORE_ROGUEDLCAEONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x19252FD0)
#define RPG_GAMECORE_ROGUEDLCAEONEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x19252F30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCAeonExcelTable_TypeDefinitionIndex = 13939;

	class RogueDLCAeonExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCAeonExcelTable_TypeDefinitionIndex)->GetStaticField(0x2BF30);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCAeonExcelTable_TypeDefinitionIndex)->GetStaticField(0x2BF38);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCAeonExcelTable_TypeDefinitionIndex)->GetStaticField(0x2BF40);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueDLCAeonExcelTable_TypeDefinitionIndex)->GetStaticField(0x8910);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueDLCAeonExcelTable_TypeDefinitionIndex)->GetStaticField(0x8911);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueDLCAeonRow* GetData(::System::UInt32 AeonID)
		{
			return ((::RPG::GameCore::RogueDLCAeonRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONEXCELTABLE_GETDATA_OFFSET))(AeonID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueDLCAeonRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueDLCAeonRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
