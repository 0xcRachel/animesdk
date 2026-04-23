#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class StanceLevelEffectRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18612F50)
#define RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18612DD0)
#define RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18612AA0)
#define RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18612D70)
#define RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18613120)
#define RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18612B20)
#define RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18613160)
#define RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18613340)
#define RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18613560)
#define RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18613870)
#define RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x186132A0)
#define RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18613200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StanceLevelEffectExcelTable_TypeDefinitionIndex = 14383;

	class StanceLevelEffectExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(StanceLevelEffectExcelTable_TypeDefinitionIndex)->GetStaticField(0x3D220);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(StanceLevelEffectExcelTable_TypeDefinitionIndex)->GetStaticField(0x3D228);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StanceLevelEffectRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StanceLevelEffectRow*>**)Il2CppClass::FromTypeDefinitionIndex(StanceLevelEffectExcelTable_TypeDefinitionIndex)->GetStaticField(0x3D230);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(StanceLevelEffectExcelTable_TypeDefinitionIndex)->GetStaticField(0xBFB0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(StanceLevelEffectExcelTable_TypeDefinitionIndex)->GetStaticField(0xBFB1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StanceLevelEffectRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StanceLevelEffectRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StanceLevelEffectRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StanceLevelEffectRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::StanceLevelEffectRow* GetData(::System::Int32 ID)
		{
			return ((::RPG::GameCore::StanceLevelEffectRow*(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::StanceLevelEffectRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::StanceLevelEffectRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
