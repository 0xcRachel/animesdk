#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HeliobusPostImgRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18A70C40)
#define RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18A70A90)
#define RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18A70760)
#define RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18A70A30)
#define RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18A70E10)
#define RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18A707E0)
#define RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18A70E50)
#define RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A71030)
#define RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18A711B0)
#define RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A71510)
#define RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18A70F90)
#define RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18A70EF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeliobusPostImgExcelTable_TypeDefinitionIndex = 13023;

	class HeliobusPostImgExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HeliobusPostImgExcelTable_TypeDefinitionIndex)->GetStaticField(0x2D100);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(HeliobusPostImgExcelTable_TypeDefinitionIndex)->GetStaticField(0x2D108);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusPostImgRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusPostImgRow*>**)Il2CppClass::FromTypeDefinitionIndex(HeliobusPostImgExcelTable_TypeDefinitionIndex)->GetStaticField(0x2D110);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HeliobusPostImgExcelTable_TypeDefinitionIndex)->GetStaticField(0x8D20);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(HeliobusPostImgExcelTable_TypeDefinitionIndex)->GetStaticField(0x8D21);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusPostImgRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusPostImgRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusPostImgRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusPostImgRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::HeliobusPostImgRow* GetData(::System::UInt32 PostImgID)
		{
			return ((::RPG::GameCore::HeliobusPostImgRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE_GETDATA_OFFSET))(PostImgID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::HeliobusPostImgRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::HeliobusPostImgRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSPOSTIMGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
