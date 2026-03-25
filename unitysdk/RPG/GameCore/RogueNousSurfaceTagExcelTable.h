#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueNousSurfaceTagRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1765B5B0)
#define RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1765B400)
#define RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1765B0D0)
#define RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1765B3A0)
#define RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1765B780)
#define RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1765B150)
#define RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1765B7C0)
#define RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1765B9A0)
#define RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1765BBB0)
#define RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1765BF10)
#define RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1765B900)
#define RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1765B860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNousSurfaceTagExcelTable_TypeDefinitionIndex = 13644;

	class RogueNousSurfaceTagExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueNousSurfaceTagExcelTable_TypeDefinitionIndex)->GetStaticField(0x5A90);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousSurfaceTagRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousSurfaceTagRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueNousSurfaceTagExcelTable_TypeDefinitionIndex)->GetStaticField(0x5A98);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueNousSurfaceTagExcelTable_TypeDefinitionIndex)->GetStaticField(0x5AA0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueNousSurfaceTagExcelTable_TypeDefinitionIndex)->GetStaticField(0x3000);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueNousSurfaceTagExcelTable_TypeDefinitionIndex)->GetStaticField(0x3001);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousSurfaceTagRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousSurfaceTagRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousSurfaceTagRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousSurfaceTagRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueNousSurfaceTagRow* GetData(::System::UInt32 TagID)
		{
			return ((::RPG::GameCore::RogueNousSurfaceTagRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE_GETDATA_OFFSET))(TagID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueNousSurfaceTagRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueNousSurfaceTagRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSURFACETAGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
