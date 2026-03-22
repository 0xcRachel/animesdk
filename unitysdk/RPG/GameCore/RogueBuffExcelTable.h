#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueBuffRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEBUFFEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x16E1B7F0)
#define RPG_GAMECORE_ROGUEBUFFEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16E1B670)
#define RPG_GAMECORE_ROGUEBUFFEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x16E1B340)
#define RPG_GAMECORE_ROGUEBUFFEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x16E1B610)
#define RPG_GAMECORE_ROGUEBUFFEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x16E1B9C0)
#define RPG_GAMECORE_ROGUEBUFFEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x16E1B3C0)
#define RPG_GAMECORE_ROGUEBUFFEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x16E1BA00)
#define RPG_GAMECORE_ROGUEBUFFEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16E1BBE0)
#define RPG_GAMECORE_ROGUEBUFFEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x16E1C110)
#define RPG_GAMECORE_ROGUEBUFFEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16E1C470)
#define RPG_GAMECORE_ROGUEBUFFEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x16E1BB40)
#define RPG_GAMECORE_ROGUEBUFFEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x16E1BAA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueBuffExcelTable_TypeDefinitionIndex = 13384;

	class RogueBuffExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueBuffExcelTable_TypeDefinitionIndex)->GetStaticField(0x2BDF0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueBuffExcelTable_TypeDefinitionIndex)->GetStaticField(0x2BDF8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueBuffRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueBuffRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueBuffExcelTable_TypeDefinitionIndex)->GetStaticField(0x2BE00);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueBuffExcelTable_TypeDefinitionIndex)->GetStaticField(0xA040);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueBuffExcelTable_TypeDefinitionIndex)->GetStaticField(0xA041);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBUFFEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueBuffRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueBuffRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBUFFEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBUFFEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueBuffRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueBuffRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBUFFEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueBuffRow* GetData(::System::UInt32 MazeBuffID, ::System::UInt32 MazeBuffLevel)
		{
			return ((::RPG::GameCore::RogueBuffRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBUFFEXCELTABLE_GETDATA_OFFSET))(MazeBuffID, MazeBuffLevel);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBUFFEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBUFFEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBUFFEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBUFFEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBUFFEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBUFFEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueBuffRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueBuffRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBUFFEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
