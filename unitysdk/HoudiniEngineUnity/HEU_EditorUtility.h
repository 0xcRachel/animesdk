#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HEU_EditorUtility_HEU_ReplacePrefabOptions.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace HoudiniEngineUnity { class HEU_HoudiniAssetRoot; }
namespace System { class String; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_BAKEANDREPLACEALLINSCENE_OFFSET UNITYSDK_OFFSET(0x80CE600)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_BAKEANDREPLACEASSETS_OFFSET UNITYSDK_OFFSET(0x80CE590)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_BAKEANDREPLACESELECTEDINSCENE_OFFSET UNITYSDK_OFFSET(0x80CE450)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_CLEARPROGRESSBAR_OFFSET UNITYSDK_OFFSET(0x80CDB70)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_COLLECTDEPENDENCIES_OFFSET UNITYSDK_OFFSET(0x80CD8B0)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_COOKALL_OFFSET UNITYSDK_OFFSET(0x80CE100)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_COOKASSETS_OFFSET UNITYSDK_OFFSET(0x80CE0C0)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_COOKSELECTED_OFFSET UNITYSDK_OFFSET(0x80CDFB0)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_DISCONNECTPREFABINSTANCE_OFFSET UNITYSDK_OFFSET(0x80CD7E0)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_DISPLAYDIALOG_OFFSET UNITYSDK_OFFSET(0x80CDC30)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_DISPLAYERRORDIALOG_OFFSET UNITYSDK_OFFSET(0x80CDD10)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_DISPLAYPROGRESSBAR_OFFSET UNITYSDK_OFFSET(0x80CDAC0)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_EDITORSAVEFOLDERPANEL_OFFSET UNITYSDK_OFFSET(0x80CE9D0)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_EXPORTALLASSETSTOGEOFILES_OFFSET UNITYSDK_OFFSET(0x80CE920)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_EXPORTASSETSTOGEOFILES_OFFSET UNITYSDK_OFFSET(0x80CE800)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_EXPORTSELECTEDASSETSTOGEOFILES_OFFSET UNITYSDK_OFFSET(0x80CE730)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_GETALLASSETROOTS_OFFSET UNITYSDK_OFFSET(0x80CDF10)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_GETPREFABASSETPATH_OFFSET UNITYSDK_OFFSET(0x80CD730)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_GETPREFABASSET_OFFSET UNITYSDK_OFFSET(0x80CD680)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_GETSELECTEDASSETROOTS_OFFSET UNITYSDK_OFFSET(0x80CDE40)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_GETSELECTEDOBJECTSMEANPOSITION_OFFSET UNITYSDK_OFFSET(0x80CD400)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_GETSELECTEDOBJECTSMEANTRANSFORM_OFFSET UNITYSDK_OFFSET(0x80CD420)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_GETSELECTEDOBJECTS_OFFSET UNITYSDK_OFFSET(0x80CDE30)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_GETUNIQUENAMEFORSIBLING_OFFSET UNITYSDK_OFFSET(0x80CDA10)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_INSTANTIATEGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x80C9590)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_INSTANTIATEPREFAB_OFFSET UNITYSDK_OFFSET(0x80C94E0)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_ISDISCONNECTEDPREFABINSTANCE_OFFSET UNITYSDK_OFFSET(0x80CD5D0)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_ISEDITINGINPREFABMODE_OFFSET UNITYSDK_OFFSET(0x80CD5C0)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_ISEDITORNOTINPLAYMODEANDNOTGOINGTOPLAYMODE_OFFSET UNITYSDK_OFFSET(0x80CDC20)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_ISEDITORPLAYING_OFFSET UNITYSDK_OFFSET(0x80CBE50)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_ISPERSISTANT_OFFSET UNITYSDK_OFFSET(0x80CD960)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_ISPREFABASSET_OFFSET UNITYSDK_OFFSET(0x80C9430)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_ISPREFABINSTANCE_OFFSET UNITYSDK_OFFSET(0x80CD510)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_MARKSCENEDIRTY_OFFSET UNITYSDK_OFFSET(0x80CD3E0)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_PREFABISADDEDCOMPONENTOVERRIDE_OFFSET UNITYSDK_OFFSET(0x80CD450)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_QUERYSELECTEDMESHTOPOLOGY_OFFSET UNITYSDK_OFFSET(0x80CEA90)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_REBUILDALL_OFFSET UNITYSDK_OFFSET(0x80CE350)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_REBUILDASSETS_OFFSET UNITYSDK_OFFSET(0x80CE310)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_REBUILDSELECTED_OFFSET UNITYSDK_OFFSET(0x80CE200)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_REPAINTSCENE_OFFSET UNITYSDK_OFFSET(0x80CEAA0)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_REPLACEPREFAB_OFFSET UNITYSDK_OFFSET(0x80CD460)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_REVEALINFINDER_OFFSET UNITYSDK_OFFSET(0x80CDDF0)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_SAVEASPREFABASSET_OFFSET UNITYSDK_OFFSET(0x80C29A0)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_SELECTOBJECTS_OFFSET UNITYSDK_OFFSET(0x80CD3F0)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_SELECTOBJECT_OFFSET UNITYSDK_OFFSET(0x80C2A50)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_SETISHIDDEN_OFFSET UNITYSDK_OFFSET(0x80CDE20)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_SETOBJECTDIRTYFOREDITORUPDATE_OFFSET UNITYSDK_OFFSET(0x80CDE00)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_SETSTATIC_OFFSET UNITYSDK_OFFSET(0x80CDE10)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_UNDOCOLLAPSECURRENTGROUP_OFFSET UNITYSDK_OFFSET(0x80CD8A0)
#define HOUDINIENGINEUNITY_HEU_EDITORUTILITY_UNDORECORDOBJECT_OFFSET UNITYSDK_OFFSET(0x80CD890)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_EditorUtility_TypeDefinitionIndex = 36866;

	class HEU_EditorUtility : public ::System::Object
	{
	public:
		static ::System::Void MarkSceneDirty()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_MARKSCENEDIRTY_OFFSET))();
		}

		static ::System::Void SelectObject(::UnityEngine::GameObject* gameObject)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_SELECTOBJECT_OFFSET))(gameObject);
		}

		static ::System::Void SelectObjects(::Il2CppArray<::UnityEngine::GameObject*>* gameObjects)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_SELECTOBJECTS_OFFSET))(gameObjects);
		}

		static ::UnityEngine::Vector3 GetSelectedObjectsMeanPosition()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_GETSELECTEDOBJECTSMEANPOSITION_OFFSET))();
		}

		static ::UnityEngine::Matrix4x4 GetSelectedObjectsMeanTransform()
		{
			return ((::UnityEngine::Matrix4x4(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_GETSELECTEDOBJECTSMEANTRANSFORM_OFFSET))();
		}

		static ::UnityEngine::GameObject* SaveAsPrefabAsset(::System::String* path, ::UnityEngine::GameObject* go)
		{
			return ((::UnityEngine::GameObject*(*)(::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_SAVEASPREFABASSET_OFFSET))(path, go);
		}

		static ::System::Boolean PrefabIsAddedComponentOverride(::UnityEngine::Component* comp)
		{
			return ((::System::Boolean(*)(::UnityEngine::Component*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_PREFABISADDEDCOMPONENTOVERRIDE_OFFSET))(comp);
		}

		static ::System::Boolean IsEditorPlaying()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_ISEDITORPLAYING_OFFSET))();
		}

		static ::UnityEngine::GameObject* ReplacePrefab(::UnityEngine::GameObject* go, ::UnityEngine::Object* targetPrefab, ::HoudiniEngineUnity::HEU_EditorUtility_HEU_ReplacePrefabOptions heuOptions)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::GameObject*, ::UnityEngine::Object*, ::HoudiniEngineUnity::HEU_EditorUtility_HEU_ReplacePrefabOptions))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_REPLACEPREFAB_OFFSET))(go, targetPrefab, heuOptions);
		}

		static ::System::Boolean IsPrefabInstance(::UnityEngine::GameObject* go)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_ISPREFABINSTANCE_OFFSET))(go);
		}

		static ::System::Boolean IsPrefabAsset(::UnityEngine::GameObject* go)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_ISPREFABASSET_OFFSET))(go);
		}

		static ::System::Boolean IsEditingInPrefabMode(::UnityEngine::GameObject* obj)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_ISEDITINGINPREFABMODE_OFFSET))(obj);
		}

		static ::System::Boolean IsDisconnectedPrefabInstance(::UnityEngine::GameObject* go)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_ISDISCONNECTEDPREFABINSTANCE_OFFSET))(go);
		}

		static ::UnityEngine::Object* GetPrefabAsset(::UnityEngine::GameObject* go)
		{
			return ((::UnityEngine::Object*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_GETPREFABASSET_OFFSET))(go);
		}

		static ::System::String* GetPrefabAssetPath(::UnityEngine::Object* obj)
		{
			return ((::System::String*(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_GETPREFABASSETPATH_OFFSET))(obj);
		}

		static ::System::Void DisconnectPrefabInstance(::UnityEngine::GameObject* instance)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_DISCONNECTPREFABINSTANCE_OFFSET))(instance);
		}

		static ::UnityEngine::Object* InstantiatePrefab(::UnityEngine::GameObject* prefabOriginal)
		{
			return ((::UnityEngine::Object*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_INSTANTIATEPREFAB_OFFSET))(prefabOriginal);
		}

		static ::UnityEngine::GameObject* InstantiateGameObject(::UnityEngine::GameObject* sourceGameObject, ::UnityEngine::Transform* parentTransform, ::System::Boolean instantiateInWorldSpace, ::System::Boolean bRegisterUndo)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::GameObject*, ::UnityEngine::Transform*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_INSTANTIATEGAMEOBJECT_OFFSET))(sourceGameObject, parentTransform, instantiateInWorldSpace, bRegisterUndo);
		}

		static ::System::Void UndoRecordObject(::UnityEngine::Object* objectToUndo, ::System::String* name)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_UNDORECORDOBJECT_OFFSET))(objectToUndo, name);
		}

		static ::System::Void UndoCollapseCurrentGroup()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_UNDOCOLLAPSECURRENTGROUP_OFFSET))();
		}

		static ::Il2CppArray<::UnityEngine::Object*>* CollectDependencies(::UnityEngine::Object* obj)
		{
			return ((::Il2CppArray<::UnityEngine::Object*>*(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_COLLECTDEPENDENCIES_OFFSET))(obj);
		}

		static ::System::Boolean IsPersistant(::UnityEngine::Object* obj)
		{
			return ((::System::Boolean(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_ISPERSISTANT_OFFSET))(obj);
		}

		static ::System::String* GetUniqueNameForSibling(::UnityEngine::Transform* parentTransform, ::System::String* name)
		{
			return ((::System::String*(*)(::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_GETUNIQUENAMEFORSIBLING_OFFSET))(parentTransform, name);
		}

		static ::System::Void DisplayProgressBar(::System::String* title, ::System::String* info, ::System::Single progress)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_DISPLAYPROGRESSBAR_OFFSET))(title, info, progress);
		}

		static ::System::Void ClearProgressBar()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_CLEARPROGRESSBAR_OFFSET))();
		}

		static ::System::Boolean IsEditorNotInPlayModeAndNotGoingToPlayMode()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_ISEDITORNOTINPLAYMODEANDNOTGOINGTOPLAYMODE_OFFSET))();
		}

		static ::System::Boolean DisplayDialog(::System::String* title, ::System::String* message, ::System::String* ok, ::System::String* cancel)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_DISPLAYDIALOG_OFFSET))(title, message, ok, cancel);
		}

		static ::System::Boolean DisplayErrorDialog(::System::String* title, ::System::String* message, ::System::String* ok, ::System::String* cancel)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_DISPLAYERRORDIALOG_OFFSET))(title, message, ok, cancel);
		}

		static ::System::Void RevealInFinder(::System::String* path)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_REVEALINFINDER_OFFSET))(path);
		}

		static ::System::Void SetObjectDirtyForEditorUpdate(::UnityEngine::Object* obj)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_SETOBJECTDIRTYFOREDITORUPDATE_OFFSET))(obj);
		}

		static ::System::Void SetStatic(::UnityEngine::GameObject* go, ::System::Boolean bStatic, ::System::Boolean bIncludeChildren)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_SETSTATIC_OFFSET))(go, bStatic, bIncludeChildren);
		}

		static ::System::Void SetIsHidden(::UnityEngine::GameObject* go, ::System::Boolean isHidden, ::System::Boolean bIncludeChildren)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_SETISHIDDEN_OFFSET))(go, isHidden, bIncludeChildren);
		}

		static ::Il2CppArray<::UnityEngine::GameObject*>* GetSelectedObjects()
		{
			return ((::Il2CppArray<::UnityEngine::GameObject*>*(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_GETSELECTEDOBJECTS_OFFSET))();
		}

		static ::Il2CppArray<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*>* GetSelectedAssetRoots()
		{
			return ((::Il2CppArray<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*>*(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_GETSELECTEDASSETROOTS_OFFSET))();
		}

		static ::Il2CppArray<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*>* GetAllAssetRoots()
		{
			return ((::Il2CppArray<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*>*(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_GETALLASSETROOTS_OFFSET))();
		}

		static ::System::Void CookSelected()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_COOKSELECTED_OFFSET))();
		}

		static ::System::Void CookAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_COOKALL_OFFSET))();
		}

		static ::System::Void CookAssets(::Il2CppArray<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*>* rootAssets)
		{
			return ((::System::Void(*)(::Il2CppArray<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_COOKASSETS_OFFSET))(rootAssets);
		}

		static ::System::Void RebuildSelected()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_REBUILDSELECTED_OFFSET))();
		}

		static ::System::Void RebuildAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_REBUILDALL_OFFSET))();
		}

		static ::System::Void RebuildAssets(::Il2CppArray<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*>* rootAssets)
		{
			return ((::System::Void(*)(::Il2CppArray<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_REBUILDASSETS_OFFSET))(rootAssets);
		}

		static ::System::Void BakeAndReplaceSelectedInScene()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_BAKEANDREPLACESELECTEDINSCENE_OFFSET))();
		}

		static ::System::Void BakeAndReplaceAllInScene()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_BAKEANDREPLACEALLINSCENE_OFFSET))();
		}

		static ::System::Void BakeAndReplaceAssets(::Il2CppArray<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*>* rootAssets)
		{
			return ((::System::Void(*)(::Il2CppArray<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_BAKEANDREPLACEASSETS_OFFSET))(rootAssets);
		}

		static ::System::Void ExportSelectedAssetsToGeoFiles()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_EXPORTSELECTEDASSETSTOGEOFILES_OFFSET))();
		}

		static ::System::Void ExportAllAssetsToGeoFiles()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_EXPORTALLASSETSTOGEOFILES_OFFSET))();
		}

		static ::System::Void ExportAssetsToGeoFiles(::Il2CppArray<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*>* rootAssets)
		{
			return ((::System::Void(*)(::Il2CppArray<::HoudiniEngineUnity::HEU_HoudiniAssetRoot*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_EXPORTASSETSTOGEOFILES_OFFSET))(rootAssets);
		}

		static ::System::String* EditorSaveFolderPanel(::System::String* title, ::System::String* folder, ::System::String* defaultName)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_EDITORSAVEFOLDERPANEL_OFFSET))(title, folder, defaultName);
		}

		static ::System::Void QuerySelectedMeshTopology()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_QUERYSELECTEDMESHTOPOLOGY_OFFSET))();
		}

		static ::System::Void RepaintScene()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_EDITORUTILITY_REPAINTSCENE_OFFSET))();
		}
	};
}
