#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MatchThreeEnvironmentRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MATCHTHREEENVIRONMENTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x16C5F490)
#define RPG_GAMECORE_MATCHTHREEENVIRONMENTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16C5F2E0)
#define RPG_GAMECORE_MATCHTHREEENVIRONMENTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x16C5EFB0)
#define RPG_GAMECORE_MATCHTHREEENVIRONMENTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x16C5F280)
#define RPG_GAMECORE_MATCHTHREEENVIRONMENTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x16C5F610)
#define RPG_GAMECORE_MATCHTHREEENVIRONMENTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x16C5F030)
#define RPG_GAMECORE_MATCHTHREEENVIRONMENTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x16C5F650)
#define RPG_GAMECORE_MATCHTHREEENVIRONMENTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16C5F830)
#define RPG_GAMECORE_MATCHTHREEENVIRONMENTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x16C5FB60)
#define RPG_GAMECORE_MATCHTHREEENVIRONMENTEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C5FE70)
#define RPG_GAMECORE_MATCHTHREEENVIRONMENTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x16C5F790)
#define RPG_GAMECORE_MATCHTHREEENVIRONMENTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x16C5F6F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeEnvironmentExcelTable_TypeDefinitionIndex = 10871;

	class MatchThreeEnvironmentExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeEnvironmentExcelTable_TypeDefinitionIndex)->GetStaticField(0x36C70);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeEnvironmentExcelTable_TypeDefinitionIndex)->GetStaticField(0x36C78);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeEnvironmentRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeEnvironmentRow*>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeEnvironmentExcelTable_TypeDefinitionIndex)->GetStaticField(0x36C80);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MatchThreeEnvironmentExcelTable_TypeDefinitionIndex)->GetStaticField(0xD420);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MatchThreeEnvironmentExcelTable_TypeDefinitionIndex)->GetStaticField(0xD421);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEENVIRONMENTEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeEnvironmentRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeEnvironmentRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEENVIRONMENTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEENVIRONMENTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeEnvironmentRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeEnvironmentRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEENVIRONMENTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MatchThreeEnvironmentRow* GetData(::System::UInt32 EnvironmentID)
		{
			return ((::RPG::GameCore::MatchThreeEnvironmentRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEENVIRONMENTEXCELTABLE_GETDATA_OFFSET))(EnvironmentID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEENVIRONMENTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEENVIRONMENTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEENVIRONMENTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEENVIRONMENTEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEENVIRONMENTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEENVIRONMENTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MatchThreeEnvironmentRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::MatchThreeEnvironmentRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEENVIRONMENTEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
