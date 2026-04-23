#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MessageVideoRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MESSAGEVIDEOEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x190A0070)
#define RPG_GAMECORE_MESSAGEVIDEOEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1909FEC0)
#define RPG_GAMECORE_MESSAGEVIDEOEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1909FB90)
#define RPG_GAMECORE_MESSAGEVIDEOEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1909FE60)
#define RPG_GAMECORE_MESSAGEVIDEOEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x190A01F0)
#define RPG_GAMECORE_MESSAGEVIDEOEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1909FC10)
#define RPG_GAMECORE_MESSAGEVIDEOEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x190A0230)
#define RPG_GAMECORE_MESSAGEVIDEOEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x190A0410)
#define RPG_GAMECORE_MESSAGEVIDEOEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x190A05A0)
#define RPG_GAMECORE_MESSAGEVIDEOEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x190A08B0)
#define RPG_GAMECORE_MESSAGEVIDEOEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x190A0370)
#define RPG_GAMECORE_MESSAGEVIDEOEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x190A02D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MessageVideoExcelTable_TypeDefinitionIndex = 13667;

	class MessageVideoExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageVideoRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageVideoRow*>**)Il2CppClass::FromTypeDefinitionIndex(MessageVideoExcelTable_TypeDefinitionIndex)->GetStaticField(0x392F0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MessageVideoExcelTable_TypeDefinitionIndex)->GetStaticField(0x392F8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MessageVideoExcelTable_TypeDefinitionIndex)->GetStaticField(0x39300);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MessageVideoExcelTable_TypeDefinitionIndex)->GetStaticField(0xB040);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MessageVideoExcelTable_TypeDefinitionIndex)->GetStaticField(0xB041);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEVIDEOEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageVideoRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageVideoRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEVIDEOEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEVIDEOEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageVideoRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageVideoRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEVIDEOEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MessageVideoRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::MessageVideoRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEVIDEOEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEVIDEOEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEVIDEOEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEVIDEOEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEVIDEOEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEVIDEOEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEVIDEOEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MessageVideoRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::MessageVideoRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEVIDEOEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
