#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace HoudiniEngineUnity { class HEU_Shelf; }
namespace HoudiniEngineUnity { class HEU_ShelfToolData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define HOUDINIENGINEUNITY_HEU_SHELFTOOLS_ADDSHELF_OFFSET UNITYSDK_OFFSET(0x17DE8E80)
#define HOUDINIENGINEUNITY_HEU_SHELFTOOLS_ARESHELVESLOADED_OFFSET UNITYSDK_OFFSET(0x17DE7E30)
#define HOUDINIENGINEUNITY_HEU_SHELFTOOLS_CLEARSHELVES_OFFSET UNITYSDK_OFFSET(0x17DE7EF0)
#define HOUDINIENGINEUNITY_HEU_SHELFTOOLS_EXECUTETOOLBATCH_OFFSET UNITYSDK_OFFSET(0x17DEC0B0)
#define HOUDINIENGINEUNITY_HEU_SHELFTOOLS_EXECUTETOOLGENERATOR_OFFSET UNITYSDK_OFFSET(0x17DEB1F0)
#define HOUDINIENGINEUNITY_HEU_SHELFTOOLS_EXECUTETOOLNOINPUT_OFFSET UNITYSDK_OFFSET(0x17DEB3D0)
#define HOUDINIENGINEUNITY_HEU_SHELFTOOLS_EXECUTETOOLOPERATORMULTIPLE_OFFSET UNITYSDK_OFFSET(0x17DEBB50)
#define HOUDINIENGINEUNITY_HEU_SHELFTOOLS_EXECUTETOOLOPERATORSINGLE_OFFSET UNITYSDK_OFFSET(0x17DEB530)
#define HOUDINIENGINEUNITY_HEU_SHELFTOOLS_EXECUTETOOL_OFFSET UNITYSDK_OFFSET(0x17DEADB0)
#define HOUDINIENGINEUNITY_HEU_SHELFTOOLS_GETCURRENTSHELFINDEX_OFFSET UNITYSDK_OFFSET(0x17DE8010)
#define HOUDINIENGINEUNITY_HEU_SHELFTOOLS_GETNUMSHELVES_OFFSET UNITYSDK_OFFSET(0x17DE7F90)
#define HOUDINIENGINEUNITY_HEU_SHELFTOOLS_GETSHELFSTORAGEENTRY_OFFSET UNITYSDK_OFFSET(0x17DE8330)
#define HOUDINIENGINEUNITY_HEU_SHELFTOOLS_GETSHELF_1_OFFSET UNITYSDK_OFFSET(0x17DE81A0)
#define HOUDINIENGINEUNITY_HEU_SHELFTOOLS_GETSHELF_OFFSET UNITYSDK_OFFSET(0x17DE80D0)
#define HOUDINIENGINEUNITY_HEU_SHELFTOOLS_GETSPLITSHELFENTRY_OFFSET UNITYSDK_OFFSET(0x17DE83A0)
#define HOUDINIENGINEUNITY_HEU_SHELFTOOLS_GETTOOLASSETPATH_OFFSET UNITYSDK_OFFSET(0x17DEA870)
#define HOUDINIENGINEUNITY_HEU_SHELFTOOLS_GETTOOLICONPATH_OFFSET UNITYSDK_OFFSET(0x17DEAA20)
#define HOUDINIENGINEUNITY_HEU_SHELFTOOLS_GETTOOLRESOURCEPATH_OFFSET UNITYSDK_OFFSET(0x17DEC1C0)
#define HOUDINIENGINEUNITY_HEU_SHELFTOOLS_ISVALIDINPUT_OFFSET UNITYSDK_OFFSET(0x17DEC120)
#define HOUDINIENGINEUNITY_HEU_SHELFTOOLS_LOADSHELVES_OFFSET UNITYSDK_OFFSET(0x17DE8430)
#define HOUDINIENGINEUNITY_HEU_SHELFTOOLS_LOADTOOLFROMJSONFILE_OFFSET UNITYSDK_OFFSET(0x17DE94F0)
#define HOUDINIENGINEUNITY_HEU_SHELFTOOLS_LOADTOOLFROMJSONSTRING_OFFSET UNITYSDK_OFFSET(0x17DE9700)
#define HOUDINIENGINEUNITY_HEU_SHELFTOOLS_LOADTOOLSFROMDIRECTORY_OFFSET UNITYSDK_OFFSET(0x17DE8F70)
#define HOUDINIENGINEUNITY_HEU_SHELFTOOLS_REMOVESHELF_OFFSET UNITYSDK_OFFSET(0x17DEABC0)
#define HOUDINIENGINEUNITY_HEU_SHELFTOOLS_SAVESHELF_OFFSET UNITYSDK_OFFSET(0x17DE9140)
#define HOUDINIENGINEUNITY_HEU_SHELFTOOLS_SETCURRENTSHELF_OFFSET UNITYSDK_OFFSET(0x17DE8070)
#define HOUDINIENGINEUNITY_HEU_SHELFTOOLS_SETRELOADSHELVES_OFFSET UNITYSDK_OFFSET(0x17DE7E90)
#define HOUDINIENGINEUNITY_HEU_SHELFTOOLS__CCTOR_OFFSET UNITYSDK_OFFSET(0x17DEC260)
#define HOUDINIENGINEUNITY_HEU_SHELFTOOLS__CTOR_OFFSET UNITYSDK_OFFSET(0x17DEC250)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_ShelfTools_TypeDefinitionIndex = 43714;

	class HEU_ShelfTools : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Shelf*>** StaticGet__shelves()
		{
			return (::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Shelf*>**)Il2CppClass::FromTypeDefinitionIndex(HEU_ShelfTools_TypeDefinitionIndex)->GetStaticField(0x3DD20);
		}
		static ::System::Boolean* StaticGet__shelvesLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HEU_ShelfTools_TypeDefinitionIndex)->GetStaticField(0xC330);
		}
		static ::System::Int32* StaticGet__currentSelectedShelf()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HEU_ShelfTools_TypeDefinitionIndex)->GetStaticField(0xC334);
		}
		// static const ::System::String* TARGET_ALL; // 0x0
		// static const ::System::String* TARGET_UNITY; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SHELFTOOLS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SHELFTOOLS__CCTOR_OFFSET))();
		}

		static ::System::Boolean AreShelvesLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SHELFTOOLS_ARESHELVESLOADED_OFFSET))();
		}

		static ::System::Void SetReloadShelves()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SHELFTOOLS_SETRELOADSHELVES_OFFSET))();
		}

		static ::System::Void ClearShelves()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SHELFTOOLS_CLEARSHELVES_OFFSET))();
		}

		static ::System::Int32 GetNumShelves()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SHELFTOOLS_GETNUMSHELVES_OFFSET))();
		}

		static ::System::Int32 GetCurrentShelfIndex()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SHELFTOOLS_GETCURRENTSHELFINDEX_OFFSET))();
		}

		static ::System::Void SetCurrentShelf(::System::Int32 index)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SHELFTOOLS_SETCURRENTSHELF_OFFSET))(index);
		}

		static ::HoudiniEngineUnity::HEU_Shelf* GetShelf(::System::Int32 index)
		{
			return ((::HoudiniEngineUnity::HEU_Shelf*(*)(::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SHELFTOOLS_GETSHELF_OFFSET))(index);
		}

		static ::HoudiniEngineUnity::HEU_Shelf* GetShelf_1(::System::String* shelfName)
		{
			return ((::HoudiniEngineUnity::HEU_Shelf*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SHELFTOOLS_GETSHELF_1_OFFSET))(shelfName);
		}

		static ::System::String* GetShelfStorageEntry(::System::String* shelfName, ::System::String* shelfPath)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SHELFTOOLS_GETSHELFSTORAGEENTRY_OFFSET))(shelfName, shelfPath);
		}

		static ::System::Void GetSplitShelfEntry(::System::String* shelfEntry, ::System::String*& shelfName, ::System::String*& shelfPath)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SHELFTOOLS_GETSPLITSHELFENTRY_OFFSET))(shelfEntry, shelfName, shelfPath);
		}

		static ::System::Void LoadShelves()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SHELFTOOLS_LOADSHELVES_OFFSET))();
		}

		static ::System::Boolean LoadToolsFromDirectory(::System::String* folderPath, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ShelfToolData*>*& tools)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ShelfToolData*>*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SHELFTOOLS_LOADTOOLSFROMDIRECTORY_OFFSET))(folderPath, tools);
		}

		static ::HoudiniEngineUnity::HEU_ShelfToolData* LoadToolFromJsonFile(::System::String* jsonFilePath)
		{
			return ((::HoudiniEngineUnity::HEU_ShelfToolData*(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SHELFTOOLS_LOADTOOLFROMJSONFILE_OFFSET))(jsonFilePath);
		}

		static ::HoudiniEngineUnity::HEU_ShelfToolData* LoadToolFromJsonString(::System::String* json, ::System::String* jsonFilePath)
		{
			return ((::HoudiniEngineUnity::HEU_ShelfToolData*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SHELFTOOLS_LOADTOOLFROMJSONSTRING_OFFSET))(json, jsonFilePath);
		}

		static ::HoudiniEngineUnity::HEU_Shelf* AddShelf(::System::String* shelfName, ::System::String* shelfPath)
		{
			return ((::HoudiniEngineUnity::HEU_Shelf*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SHELFTOOLS_ADDSHELF_OFFSET))(shelfName, shelfPath);
		}

		static ::System::Void RemoveShelf(::System::Int32 shelfIndex)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SHELFTOOLS_REMOVESHELF_OFFSET))(shelfIndex);
		}

		static ::System::Void SaveShelf()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SHELFTOOLS_SAVESHELF_OFFSET))();
		}

		static ::System::Void ExecuteTool(::System::Int32 toolSlot)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SHELFTOOLS_EXECUTETOOL_OFFSET))(toolSlot);
		}

		static ::System::Void ExecuteToolGenerator(::System::String* toolName, ::System::String* toolPath, ::UnityEngine::Vector3 targetPosition, ::UnityEngine::Quaternion targetRotation, ::UnityEngine::Vector3 targetScale)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SHELFTOOLS_EXECUTETOOLGENERATOR_OFFSET))(toolName, toolPath, targetPosition, targetRotation, targetScale);
		}

		static ::System::Boolean IsValidInput(::UnityEngine::GameObject* gameObject)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SHELFTOOLS_ISVALIDINPUT_OFFSET))(gameObject);
		}

		static ::System::Void ExecuteToolNoInput(::System::String* toolName, ::System::String* toolPath)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SHELFTOOLS_EXECUTETOOLNOINPUT_OFFSET))(toolName, toolPath);
		}

		static ::System::Void ExecuteToolOperatorSingle(::System::String* toolName, ::System::String* toolPath, ::Il2CppArray<::UnityEngine::GameObject*>* inputObjects)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::Il2CppArray<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SHELFTOOLS_EXECUTETOOLOPERATORSINGLE_OFFSET))(toolName, toolPath, inputObjects);
		}

		static ::System::Void ExecuteToolOperatorMultiple(::System::String* toolName, ::System::String* toolPath, ::Il2CppArray<::UnityEngine::GameObject*>* inputObjects)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::Il2CppArray<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SHELFTOOLS_EXECUTETOOLOPERATORMULTIPLE_OFFSET))(toolName, toolPath, inputObjects);
		}

		static ::System::Void ExecuteToolBatch(::System::String* toolName, ::System::String* toolPath, ::Il2CppArray<::UnityEngine::GameObject*>* batchObjects)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::Il2CppArray<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SHELFTOOLS_EXECUTETOOLBATCH_OFFSET))(toolName, toolPath, batchObjects);
		}

		static ::System::String* GetToolResourcePath(::HoudiniEngineUnity::HEU_ShelfToolData* tool, ::System::String* inPath, ::System::String* ext)
		{
			return ((::System::String*(*)(::HoudiniEngineUnity::HEU_ShelfToolData*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SHELFTOOLS_GETTOOLRESOURCEPATH_OFFSET))(tool, inPath, ext);
		}

		static ::System::String* GetToolIconPath(::HoudiniEngineUnity::HEU_ShelfToolData* tool, ::System::String* inPath)
		{
			return ((::System::String*(*)(::HoudiniEngineUnity::HEU_ShelfToolData*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SHELFTOOLS_GETTOOLICONPATH_OFFSET))(tool, inPath);
		}

		static ::System::String* GetToolAssetPath(::HoudiniEngineUnity::HEU_ShelfToolData* tool, ::System::String* inPath)
		{
			return ((::System::String*(*)(::HoudiniEngineUnity::HEU_ShelfToolData*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SHELFTOOLS_GETTOOLASSETPATH_OFFSET))(tool, inPath);
		}
	};
}
