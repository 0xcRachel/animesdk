#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueDLCAeonDiceSurfaceRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEDLCAEONDICESURFACEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x19251800)
#define RPG_GAMECORE_ROGUEDLCAEONDICESURFACEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19251680)
#define RPG_GAMECORE_ROGUEDLCAEONDICESURFACEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x19251350)
#define RPG_GAMECORE_ROGUEDLCAEONDICESURFACEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x19251620)
#define RPG_GAMECORE_ROGUEDLCAEONDICESURFACEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x192519D0)
#define RPG_GAMECORE_ROGUEDLCAEONDICESURFACEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x192513D0)
#define RPG_GAMECORE_ROGUEDLCAEONDICESURFACEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x19251A10)
#define RPG_GAMECORE_ROGUEDLCAEONDICESURFACEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19251BF0)
#define RPG_GAMECORE_ROGUEDLCAEONDICESURFACEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x19252130)
#define RPG_GAMECORE_ROGUEDLCAEONDICESURFACEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19252440)
#define RPG_GAMECORE_ROGUEDLCAEONDICESURFACEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x19251B50)
#define RPG_GAMECORE_ROGUEDLCAEONDICESURFACEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x19251AB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCAeonDiceSurfaceExcelTable_TypeDefinitionIndex = 13945;

	class RogueDLCAeonDiceSurfaceExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCAeonDiceSurfaceExcelTable_TypeDefinitionIndex)->GetStaticField(0x2BE80);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonDiceSurfaceRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonDiceSurfaceRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCAeonDiceSurfaceExcelTable_TypeDefinitionIndex)->GetStaticField(0x2BE88);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCAeonDiceSurfaceExcelTable_TypeDefinitionIndex)->GetStaticField(0x2BE90);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueDLCAeonDiceSurfaceExcelTable_TypeDefinitionIndex)->GetStaticField(0x88D0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueDLCAeonDiceSurfaceExcelTable_TypeDefinitionIndex)->GetStaticField(0x88D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONDICESURFACEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonDiceSurfaceRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonDiceSurfaceRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONDICESURFACEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONDICESURFACEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonDiceSurfaceRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonDiceSurfaceRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONDICESURFACEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueDLCAeonDiceSurfaceRow* GetData(::System::UInt32 AeonSurfaceDiceID)
		{
			return ((::RPG::GameCore::RogueDLCAeonDiceSurfaceRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONDICESURFACEEXCELTABLE_GETDATA_OFFSET))(AeonSurfaceDiceID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONDICESURFACEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONDICESURFACEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONDICESURFACEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONDICESURFACEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONDICESURFACEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONDICESURFACEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueDLCAeonDiceSurfaceRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueDLCAeonDiceSurfaceRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONDICESURFACEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
