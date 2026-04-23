#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActionPointOverdrawRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ACTIONPOINTOVERDRAWEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1885F4D0)
#define RPG_GAMECORE_ACTIONPOINTOVERDRAWEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1885F320)
#define RPG_GAMECORE_ACTIONPOINTOVERDRAWEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1885EFF0)
#define RPG_GAMECORE_ACTIONPOINTOVERDRAWEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1885F2C0)
#define RPG_GAMECORE_ACTIONPOINTOVERDRAWEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1885F6A0)
#define RPG_GAMECORE_ACTIONPOINTOVERDRAWEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1885F070)
#define RPG_GAMECORE_ACTIONPOINTOVERDRAWEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1885F6E0)
#define RPG_GAMECORE_ACTIONPOINTOVERDRAWEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1885F8C0)
#define RPG_GAMECORE_ACTIONPOINTOVERDRAWEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1885FA60)
#define RPG_GAMECORE_ACTIONPOINTOVERDRAWEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1885FDC0)
#define RPG_GAMECORE_ACTIONPOINTOVERDRAWEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1885F820)
#define RPG_GAMECORE_ACTIONPOINTOVERDRAWEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1885F780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActionPointOverdrawExcelTable_TypeDefinitionIndex = 13993;

	class ActionPointOverdrawExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActionPointOverdrawRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActionPointOverdrawRow*>**)Il2CppClass::FromTypeDefinitionIndex(ActionPointOverdrawExcelTable_TypeDefinitionIndex)->GetStaticField(0x5000);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ActionPointOverdrawExcelTable_TypeDefinitionIndex)->GetStaticField(0x5008);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ActionPointOverdrawExcelTable_TypeDefinitionIndex)->GetStaticField(0x5010);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ActionPointOverdrawExcelTable_TypeDefinitionIndex)->GetStaticField(0x1920);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ActionPointOverdrawExcelTable_TypeDefinitionIndex)->GetStaticField(0x1921);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONPOINTOVERDRAWEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActionPointOverdrawRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActionPointOverdrawRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONPOINTOVERDRAWEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONPOINTOVERDRAWEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActionPointOverdrawRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActionPointOverdrawRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONPOINTOVERDRAWEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ActionPointOverdrawRow* GetData(::System::Int32 ActionPoint)
		{
			return ((::RPG::GameCore::ActionPointOverdrawRow*(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONPOINTOVERDRAWEXCELTABLE_GETDATA_OFFSET))(ActionPoint);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONPOINTOVERDRAWEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONPOINTOVERDRAWEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONPOINTOVERDRAWEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONPOINTOVERDRAWEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONPOINTOVERDRAWEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONPOINTOVERDRAWEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ActionPointOverdrawRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActionPointOverdrawRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONPOINTOVERDRAWEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
