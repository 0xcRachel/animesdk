#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BattleConditionConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_BATTLECONDITIONCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x168D22E0)
#define RPG_GAMECORE_BATTLECONDITIONCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x168D2130)
#define RPG_GAMECORE_BATTLECONDITIONCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x168D1E00)
#define RPG_GAMECORE_BATTLECONDITIONCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x168D20D0)
#define RPG_GAMECORE_BATTLECONDITIONCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x168D24B0)
#define RPG_GAMECORE_BATTLECONDITIONCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x168D1E80)
#define RPG_GAMECORE_BATTLECONDITIONCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x168D24F0)
#define RPG_GAMECORE_BATTLECONDITIONCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x168D26D0)
#define RPG_GAMECORE_BATTLECONDITIONCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x168D29C0)
#define RPG_GAMECORE_BATTLECONDITIONCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x168D2D20)
#define RPG_GAMECORE_BATTLECONDITIONCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x168D2630)
#define RPG_GAMECORE_BATTLECONDITIONCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x168D2590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleConditionConfigExcelTable_TypeDefinitionIndex = 11656;

	class BattleConditionConfigExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BattleConditionConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x26890);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleConditionConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleConditionConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(BattleConditionConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x26898);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(BattleConditionConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x268A0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(BattleConditionConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x82E0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BattleConditionConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x82E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECONDITIONCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleConditionConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleConditionConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECONDITIONCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECONDITIONCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleConditionConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleConditionConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECONDITIONCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::BattleConditionConfigRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::BattleConditionConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECONDITIONCONFIGEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECONDITIONCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECONDITIONCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECONDITIONCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECONDITIONCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECONDITIONCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECONDITIONCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::BattleConditionConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::BattleConditionConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECONDITIONCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
