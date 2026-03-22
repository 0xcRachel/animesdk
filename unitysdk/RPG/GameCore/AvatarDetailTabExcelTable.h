#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarDetailTabRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_AVATARDETAILTABEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x168A1F00)
#define RPG_GAMECORE_AVATARDETAILTABEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x168A1D50)
#define RPG_GAMECORE_AVATARDETAILTABEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x168A1A20)
#define RPG_GAMECORE_AVATARDETAILTABEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x168A1CF0)
#define RPG_GAMECORE_AVATARDETAILTABEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x168A20D0)
#define RPG_GAMECORE_AVATARDETAILTABEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x168A1AA0)
#define RPG_GAMECORE_AVATARDETAILTABEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x168A2110)
#define RPG_GAMECORE_AVATARDETAILTABEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x168A22F0)
#define RPG_GAMECORE_AVATARDETAILTABEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x168A24C0)
#define RPG_GAMECORE_AVATARDETAILTABEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x168A2820)
#define RPG_GAMECORE_AVATARDETAILTABEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x168A2250)
#define RPG_GAMECORE_AVATARDETAILTABEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x168A21B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarDetailTabExcelTable_TypeDefinitionIndex = 11586;

	class AvatarDetailTabExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarDetailTabExcelTable_TypeDefinitionIndex)->GetStaticField(0x23D10);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarDetailTabExcelTable_TypeDefinitionIndex)->GetStaticField(0x23D18);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarDetailTabRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarDetailTabRow*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarDetailTabExcelTable_TypeDefinitionIndex)->GetStaticField(0x23D20);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AvatarDetailTabExcelTable_TypeDefinitionIndex)->GetStaticField(0x74A0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AvatarDetailTabExcelTable_TypeDefinitionIndex)->GetStaticField(0x74A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDETAILTABEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarDetailTabRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarDetailTabRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDETAILTABEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDETAILTABEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarDetailTabRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarDetailTabRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDETAILTABEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AvatarDetailTabRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::AvatarDetailTabRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDETAILTABEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDETAILTABEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDETAILTABEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDETAILTABEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDETAILTABEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDETAILTABEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDETAILTABEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AvatarDetailTabRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::AvatarDetailTabRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDETAILTABEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
