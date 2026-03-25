#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueHintRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEHINTEXCELTABLE_ASZLINQENUMERABLE_OFFSET UNITYSDK_OFFSET(0x17621F80)
#define RPG_GAMECORE_ROGUEHINTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x17622040)
#define RPG_GAMECORE_ROGUEHINTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17621DD0)
#define RPG_GAMECORE_ROGUEHINTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x17621AA0)
#define RPG_GAMECORE_ROGUEHINTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x17621D70)
#define RPG_GAMECORE_ROGUEHINTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x176221C0)
#define RPG_GAMECORE_ROGUEHINTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x17621B20)
#define RPG_GAMECORE_ROGUEHINTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x17622200)
#define RPG_GAMECORE_ROGUEHINTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x176223E0)
#define RPG_GAMECORE_ROGUEHINTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x17622590)
#define RPG_GAMECORE_ROGUEHINTEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x176228A0)
#define RPG_GAMECORE_ROGUEHINTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x17622340)
#define RPG_GAMECORE_ROGUEHINTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x176222A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueHintExcelTable_TypeDefinitionIndex = 13417;

	class RogueHintExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueHintRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueHintRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueHintExcelTable_TypeDefinitionIndex)->GetStaticField(0x3F5B0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueHintExcelTable_TypeDefinitionIndex)->GetStaticField(0x3F5B8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueHintExcelTable_TypeDefinitionIndex)->GetStaticField(0x3F5C0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueHintExcelTable_TypeDefinitionIndex)->GetStaticField(0x10900);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueHintExcelTable_TypeDefinitionIndex)->GetStaticField(0x10901);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEHINTEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueHintRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueHintRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEHINTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEHINTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueHintRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueHintRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEHINTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueHintRow*>, ::RPG::GameCore::RogueHintRow*> AsZLinqEnumerable()
		{
			return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueHintRow*>, ::RPG::GameCore::RogueHintRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEHINTEXCELTABLE_ASZLINQENUMERABLE_OFFSET))();
		}

		static ::RPG::GameCore::RogueHintRow* GetData(::System::UInt32 HintID)
		{
			return ((::RPG::GameCore::RogueHintRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEHINTEXCELTABLE_GETDATA_OFFSET))(HintID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEHINTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEHINTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEHINTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEHINTEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEHINTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEHINTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueHintRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueHintRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEHINTEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
