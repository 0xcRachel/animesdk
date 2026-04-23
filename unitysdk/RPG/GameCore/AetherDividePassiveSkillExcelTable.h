#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AetherDividePassiveSkillRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_AETHERDIVIDEPASSIVESKILLEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18AB8DF0)
#define RPG_GAMECORE_AETHERDIVIDEPASSIVESKILLEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18AB8C40)
#define RPG_GAMECORE_AETHERDIVIDEPASSIVESKILLEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18AB8910)
#define RPG_GAMECORE_AETHERDIVIDEPASSIVESKILLEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18AB8BE0)
#define RPG_GAMECORE_AETHERDIVIDEPASSIVESKILLEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18AB8FC0)
#define RPG_GAMECORE_AETHERDIVIDEPASSIVESKILLEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18AB8990)
#define RPG_GAMECORE_AETHERDIVIDEPASSIVESKILLEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18AB9000)
#define RPG_GAMECORE_AETHERDIVIDEPASSIVESKILLEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18AB91E0)
#define RPG_GAMECORE_AETHERDIVIDEPASSIVESKILLEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18AB9620)
#define RPG_GAMECORE_AETHERDIVIDEPASSIVESKILLEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18AB9980)
#define RPG_GAMECORE_AETHERDIVIDEPASSIVESKILLEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18AB9140)
#define RPG_GAMECORE_AETHERDIVIDEPASSIVESKILLEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18AB90A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherDividePassiveSkillExcelTable_TypeDefinitionIndex = 10466;

	class AetherDividePassiveSkillExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AetherDividePassiveSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x9EC0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDividePassiveSkillRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDividePassiveSkillRow*>**)Il2CppClass::FromTypeDefinitionIndex(AetherDividePassiveSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x9EC8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AetherDividePassiveSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x9ED0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AetherDividePassiveSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x4300);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AetherDividePassiveSkillExcelTable_TypeDefinitionIndex)->GetStaticField(0x4301);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEPASSIVESKILLEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDividePassiveSkillRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDividePassiveSkillRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEPASSIVESKILLEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEPASSIVESKILLEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDividePassiveSkillRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDividePassiveSkillRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEPASSIVESKILLEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AetherDividePassiveSkillRow* GetData(::System::UInt32 ItemID)
		{
			return ((::RPG::GameCore::AetherDividePassiveSkillRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEPASSIVESKILLEXCELTABLE_GETDATA_OFFSET))(ItemID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEPASSIVESKILLEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEPASSIVESKILLEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEPASSIVESKILLEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEPASSIVESKILLEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEPASSIVESKILLEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEPASSIVESKILLEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AetherDividePassiveSkillRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::AetherDividePassiveSkillRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEPASSIVESKILLEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
