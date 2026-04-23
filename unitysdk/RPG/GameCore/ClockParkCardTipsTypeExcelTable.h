#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ClockParkCardTipsTypeEnum.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ClockParkCardTipsTypeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CLOCKPARKCARDTIPSTYPEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x194D8840)
#define RPG_GAMECORE_CLOCKPARKCARDTIPSTYPEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x194D8690)
#define RPG_GAMECORE_CLOCKPARKCARDTIPSTYPEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x194D8360)
#define RPG_GAMECORE_CLOCKPARKCARDTIPSTYPEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x194D8630)
#define RPG_GAMECORE_CLOCKPARKCARDTIPSTYPEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x194D8A10)
#define RPG_GAMECORE_CLOCKPARKCARDTIPSTYPEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x194D83E0)
#define RPG_GAMECORE_CLOCKPARKCARDTIPSTYPEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x194D8A50)
#define RPG_GAMECORE_CLOCKPARKCARDTIPSTYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x194D8C30)
#define RPG_GAMECORE_CLOCKPARKCARDTIPSTYPEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x194D8EA0)
#define RPG_GAMECORE_CLOCKPARKCARDTIPSTYPEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x194D9200)
#define RPG_GAMECORE_CLOCKPARKCARDTIPSTYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x194D8B90)
#define RPG_GAMECORE_CLOCKPARKCARDTIPSTYPEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x194D8AF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkCardTipsTypeExcelTable_TypeDefinitionIndex = 10678;

	class ClockParkCardTipsTypeExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ClockParkCardTipsTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x15FA0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ClockParkCardTipsTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x15FA8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkCardTipsTypeRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkCardTipsTypeRow*>**)Il2CppClass::FromTypeDefinitionIndex(ClockParkCardTipsTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x15FB0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ClockParkCardTipsTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x61E0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ClockParkCardTipsTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x61E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCARDTIPSTYPEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkCardTipsTypeRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkCardTipsTypeRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCARDTIPSTYPEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCARDTIPSTYPEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkCardTipsTypeRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkCardTipsTypeRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCARDTIPSTYPEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ClockParkCardTipsTypeRow* GetData(::RPG::GameCore::ClockParkCardTipsTypeEnum CardTipsTypeID)
		{
			return ((::RPG::GameCore::ClockParkCardTipsTypeRow*(*)(::RPG::GameCore::ClockParkCardTipsTypeEnum))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCARDTIPSTYPEEXCELTABLE_GETDATA_OFFSET))(CardTipsTypeID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCARDTIPSTYPEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCARDTIPSTYPEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCARDTIPSTYPEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCARDTIPSTYPEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCARDTIPSTYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCARDTIPSTYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ClockParkCardTipsTypeRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ClockParkCardTipsTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCARDTIPSTYPEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
