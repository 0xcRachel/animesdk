#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueNousAeonRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x17650E00)
#define RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17650C80)
#define RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x17650950)
#define RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x17650C20)
#define RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x17650FD0)
#define RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x176509D0)
#define RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x17651010)
#define RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x176511F0)
#define RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x176515C0)
#define RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x176518D0)
#define RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x17651150)
#define RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x176510B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNousAeonExcelTable_TypeDefinitionIndex = 13654;

	class RogueNousAeonExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueNousAeonExcelTable_TypeDefinitionIndex)->GetStaticField(0x5700);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueNousAeonExcelTable_TypeDefinitionIndex)->GetStaticField(0x5708);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousAeonRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousAeonRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueNousAeonExcelTable_TypeDefinitionIndex)->GetStaticField(0x5710);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueNousAeonExcelTable_TypeDefinitionIndex)->GetStaticField(0x2EE0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueNousAeonExcelTable_TypeDefinitionIndex)->GetStaticField(0x2EE1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousAeonRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousAeonRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousAeonRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousAeonRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueNousAeonRow* GetData(::System::UInt32 AeonID)
		{
			return ((::RPG::GameCore::RogueNousAeonRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE_GETDATA_OFFSET))(AeonID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueNousAeonRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueNousAeonRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSAEONEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
