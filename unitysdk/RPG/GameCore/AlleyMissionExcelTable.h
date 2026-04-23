#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AlleyMissionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ALLEYMISSIONEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18ACBD40)
#define RPG_GAMECORE_ALLEYMISSIONEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18ACBBC0)
#define RPG_GAMECORE_ALLEYMISSIONEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18ACB890)
#define RPG_GAMECORE_ALLEYMISSIONEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18ACBB60)
#define RPG_GAMECORE_ALLEYMISSIONEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18ACBEC0)
#define RPG_GAMECORE_ALLEYMISSIONEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18ACB910)
#define RPG_GAMECORE_ALLEYMISSIONEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18ACBF00)
#define RPG_GAMECORE_ALLEYMISSIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18ACC0E0)
#define RPG_GAMECORE_ALLEYMISSIONEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18ACC350)
#define RPG_GAMECORE_ALLEYMISSIONEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18ACC660)
#define RPG_GAMECORE_ALLEYMISSIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18ACC040)
#define RPG_GAMECORE_ALLEYMISSIONEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18ACBFA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyMissionExcelTable_TypeDefinitionIndex = 11905;

	class AlleyMissionExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AlleyMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0xA840);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyMissionRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyMissionRow*>**)Il2CppClass::FromTypeDefinitionIndex(AlleyMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0xA848);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AlleyMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0xA850);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AlleyMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0x44E0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AlleyMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0x44E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMISSIONEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyMissionRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyMissionRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMISSIONEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMISSIONEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyMissionRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyMissionRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMISSIONEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AlleyMissionRow* GetData(::System::UInt32 MissionID)
		{
			return ((::RPG::GameCore::AlleyMissionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMISSIONEXCELTABLE_GETDATA_OFFSET))(MissionID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMISSIONEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMISSIONEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMISSIONEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMISSIONEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMISSIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMISSIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AlleyMissionRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::AlleyMissionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMISSIONEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
