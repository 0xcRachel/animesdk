#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RelicSetSkillConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RELICSETSKILLCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x16DDB0B0)
#define RPG_GAMECORE_RELICSETSKILLCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16DDAF00)
#define RPG_GAMECORE_RELICSETSKILLCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x16DDABD0)
#define RPG_GAMECORE_RELICSETSKILLCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x16DDAEA0)
#define RPG_GAMECORE_RELICSETSKILLCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x16DDB280)
#define RPG_GAMECORE_RELICSETSKILLCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x16DDAC50)
#define RPG_GAMECORE_RELICSETSKILLCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x16DDB2C0)
#define RPG_GAMECORE_RELICSETSKILLCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16DDB4A0)
#define RPG_GAMECORE_RELICSETSKILLCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x16DDB740)
#define RPG_GAMECORE_RELICSETSKILLCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16DDBAA0)
#define RPG_GAMECORE_RELICSETSKILLCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x16DDB400)
#define RPG_GAMECORE_RELICSETSKILLCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x16DDB360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RelicSetSkillConfigExcelTable_TypeDefinitionIndex = 13286;

	class RelicSetSkillConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicSetSkillConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicSetSkillConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(RelicSetSkillConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2A6F0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RelicSetSkillConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2A6F8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RelicSetSkillConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2A700);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RelicSetSkillConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x96D0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RelicSetSkillConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x96D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSETSKILLCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicSetSkillConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicSetSkillConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSETSKILLCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSETSKILLCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicSetSkillConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicSetSkillConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSETSKILLCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RelicSetSkillConfigRow* GetData(::System::UInt32 SetID, ::System::UInt32 RequireNum)
		{
			return ((::RPG::GameCore::RelicSetSkillConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSETSKILLCONFIGEXCELTABLE_GETDATA_OFFSET))(SetID, RequireNum);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSETSKILLCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSETSKILLCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSETSKILLCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSETSKILLCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSETSKILLCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSETSKILLCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RelicSetSkillConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RelicSetSkillConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSETSKILLCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
