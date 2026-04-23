#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarServantRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_AVATARSERVANTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18210940)
#define RPG_GAMECORE_AVATARSERVANTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18210790)
#define RPG_GAMECORE_AVATARSERVANTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18210460)
#define RPG_GAMECORE_AVATARSERVANTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18210730)
#define RPG_GAMECORE_AVATARSERVANTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18210AC0)
#define RPG_GAMECORE_AVATARSERVANTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x182104E0)
#define RPG_GAMECORE_AVATARSERVANTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18210B00)
#define RPG_GAMECORE_AVATARSERVANTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18210CE0)
#define RPG_GAMECORE_AVATARSERVANTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x182113C0)
#define RPG_GAMECORE_AVATARSERVANTEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x182116E0)
#define RPG_GAMECORE_AVATARSERVANTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18210C40)
#define RPG_GAMECORE_AVATARSERVANTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18210BA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarServantExcelTable_TypeDefinitionIndex = 12102;

	class AvatarServantExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarServantExcelTable_TypeDefinitionIndex)->GetStaticField(0xCEA0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarServantExcelTable_TypeDefinitionIndex)->GetStaticField(0xCEA8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarServantRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarServantRow*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarServantExcelTable_TypeDefinitionIndex)->GetStaticField(0xCEB0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AvatarServantExcelTable_TypeDefinitionIndex)->GetStaticField(0x4CA0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AvatarServantExcelTable_TypeDefinitionIndex)->GetStaticField(0x4CA1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarServantRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarServantRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarServantRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarServantRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AvatarServantRow* GetData(::System::UInt32 ServantID)
		{
			return ((::RPG::GameCore::AvatarServantRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTEXCELTABLE_GETDATA_OFFSET))(ServantID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AvatarServantRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::AvatarServantRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERVANTEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
