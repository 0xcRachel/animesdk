#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AetherDivideGymInfoRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x16F76290)
#define RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16F76110)
#define RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x16F75DE0)
#define RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x16F760B0)
#define RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x16F76460)
#define RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x16F75E60)
#define RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x16F764A0)
#define RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F76680)
#define RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x16F76C60)
#define RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F76F70)
#define RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x16F765E0)
#define RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x16F76540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherDivideGymInfoExcelTable_TypeDefinitionIndex = 10249;

	class AetherDivideGymInfoExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideGymInfoRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideGymInfoRow*>**)Il2CppClass::FromTypeDefinitionIndex(AetherDivideGymInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x25C20);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AetherDivideGymInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x25C28);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AetherDivideGymInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x25C30);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AetherDivideGymInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0xABB0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AetherDivideGymInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0xABB1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideGymInfoRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideGymInfoRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideGymInfoRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideGymInfoRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AetherDivideGymInfoRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::AetherDivideGymInfoRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AetherDivideGymInfoRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::AetherDivideGymInfoRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEGYMINFOEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
