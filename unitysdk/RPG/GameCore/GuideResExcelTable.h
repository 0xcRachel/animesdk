#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GuideResRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_GUIDERESEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x172A3F20)
#define RPG_GAMECORE_GUIDERESEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x172A3D70)
#define RPG_GAMECORE_GUIDERESEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x172A3A40)
#define RPG_GAMECORE_GUIDERESEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x172A3D10)
#define RPG_GAMECORE_GUIDERESEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x172A40F0)
#define RPG_GAMECORE_GUIDERESEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x172A3AC0)
#define RPG_GAMECORE_GUIDERESEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x172A4130)
#define RPG_GAMECORE_GUIDERESEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x172A4310)
#define RPG_GAMECORE_GUIDERESEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x172A44C0)
#define RPG_GAMECORE_GUIDERESEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x172A4820)
#define RPG_GAMECORE_GUIDERESEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x172A4270)
#define RPG_GAMECORE_GUIDERESEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x172A41D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GuideResExcelTable_TypeDefinitionIndex = 12543;

	class GuideResExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GuideResRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GuideResRow*>**)Il2CppClass::FromTypeDefinitionIndex(GuideResExcelTable_TypeDefinitionIndex)->GetStaticField(0x36660);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(GuideResExcelTable_TypeDefinitionIndex)->GetStaticField(0x36668);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(GuideResExcelTable_TypeDefinitionIndex)->GetStaticField(0x36670);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(GuideResExcelTable_TypeDefinitionIndex)->GetStaticField(0xD600);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GuideResExcelTable_TypeDefinitionIndex)->GetStaticField(0xD601);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDERESEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GuideResRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GuideResRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDERESEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDERESEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GuideResRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GuideResRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDERESEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::GuideResRow* GetData(::System::Int32 ID)
		{
			return ((::RPG::GameCore::GuideResRow*(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDERESEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDERESEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDERESEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDERESEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDERESEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDERESEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDERESEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::GuideResRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::GuideResRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDERESEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
