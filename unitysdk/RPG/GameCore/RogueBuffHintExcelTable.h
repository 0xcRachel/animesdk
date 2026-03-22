#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueBuffHintRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEBUFFHINTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x16E1CAD0)
#define RPG_GAMECORE_ROGUEBUFFHINTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16E1C920)
#define RPG_GAMECORE_ROGUEBUFFHINTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x16E1C5F0)
#define RPG_GAMECORE_ROGUEBUFFHINTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x16E1C8C0)
#define RPG_GAMECORE_ROGUEBUFFHINTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x16E1CC50)
#define RPG_GAMECORE_ROGUEBUFFHINTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x16E1C670)
#define RPG_GAMECORE_ROGUEBUFFHINTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x16E1CC90)
#define RPG_GAMECORE_ROGUEBUFFHINTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16E1CE70)
#define RPG_GAMECORE_ROGUEBUFFHINTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x16E1D020)
#define RPG_GAMECORE_ROGUEBUFFHINTEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16E1D330)
#define RPG_GAMECORE_ROGUEBUFFHINTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x16E1CDD0)
#define RPG_GAMECORE_ROGUEBUFFHINTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x16E1CD30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueBuffHintExcelTable_TypeDefinitionIndex = 13343;

	class RogueBuffHintExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueBuffHintRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueBuffHintRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueBuffHintExcelTable_TypeDefinitionIndex)->GetStaticField(0x2BE20);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueBuffHintExcelTable_TypeDefinitionIndex)->GetStaticField(0x2BE28);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueBuffHintExcelTable_TypeDefinitionIndex)->GetStaticField(0x2BE30);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueBuffHintExcelTable_TypeDefinitionIndex)->GetStaticField(0xA050);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueBuffHintExcelTable_TypeDefinitionIndex)->GetStaticField(0xA051);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBUFFHINTEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueBuffHintRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueBuffHintRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBUFFHINTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBUFFHINTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueBuffHintRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueBuffHintRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBUFFHINTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueBuffHintRow* GetData(::System::UInt32 HintID)
		{
			return ((::RPG::GameCore::RogueBuffHintRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBUFFHINTEXCELTABLE_GETDATA_OFFSET))(HintID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBUFFHINTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBUFFHINTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBUFFHINTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBUFFHINTEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBUFFHINTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBUFFHINTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueBuffHintRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueBuffHintRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBUFFHINTEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
