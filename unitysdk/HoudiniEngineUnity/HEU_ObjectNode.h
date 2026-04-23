#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_GeoInfo.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_ObjectInfo.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_Transform.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace HoudiniEngineUnity { class HEU_Curve; }
namespace HoudiniEngineUnity { class HEU_GeneratedOutput; }
namespace HoudiniEngineUnity { class HEU_GeoNode; }
namespace HoudiniEngineUnity { class HEU_HoudiniAsset; }
namespace HoudiniEngineUnity { class HEU_MaterialData; }
namespace HoudiniEngineUnity { class HEU_ObjectInstanceInfo; }
namespace HoudiniEngineUnity { class HEU_PartData; }
namespace HoudiniEngineUnity { class HEU_SessionBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine { class GameObject; }

#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_APPLYOBJECTTRANSFORMTOGEONODES_OFFSET UNITYSDK_OFFSET(0x15445430)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_CALCULATECOLLIDERSTATE_OFFSET UNITYSDK_OFFSET(0x1542E9D0)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_CALCULATEVISIBILITY_OFFSET UNITYSDK_OFFSET(0x1542E5D0)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_CREATEGEONODE_OFFSET UNITYSDK_OFFSET(0x15444B00)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_DESTROYALLDATA_OFFSET UNITYSDK_OFFSET(0x15420D70)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_DISABLEALLCOLLIDERS_OFFSET UNITYSDK_OFFSET(0x1542E7D0)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_GENERATEATTRIBUTESSTORE_OFFSET UNITYSDK_OFFSET(0x15426B90)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_GENERATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0x15426500)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_GENERATEOBJECTINSTANCES_OFFSET UNITYSDK_OFFSET(0x15426EF0)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_GENERATEPARTINSTANCES_OFFSET UNITYSDK_OFFSET(0x15426CB0)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_GETCLONABLEPARTS_OFFSET UNITYSDK_OFFSET(0x1542C040)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_GETCURVES_OFFSET UNITYSDK_OFFSET(0x154455E0)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_GETDEBUGINFO_OFFSET UNITYSDK_OFFSET(0x15444BA0)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_GETGEONODE_OFFSET UNITYSDK_OFFSET(0x154318C0)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_GETHDAPARTWITHGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1542C840)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_GETOUTPUTGAMEOBJECTS_OFFSET UNITYSDK_OFFSET(0x1542C160)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_GETOUTPUTGEONODES_OFFSET UNITYSDK_OFFSET(0x1542C5E0)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_GETOUTPUT_OFFSET UNITYSDK_OFFSET(0x1542C3A0)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_GET_OBJECTID_OFFSET UNITYSDK_OFFSET(0x15428310)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_GET_OBJECTNAME_OFFSET UNITYSDK_OFFSET(0x15444780)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_GET_PARENTASSET_OFFSET UNITYSDK_OFFSET(0x15444790)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_HIDEALLGEOMETRY_OFFSET UNITYSDK_OFFSET(0x1542E3D0)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x15425FB0)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_ISINSTANCED_OFFSET UNITYSDK_OFFSET(0x1542C020)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_ISINSTANCER_OFFSET UNITYSDK_OFFSET(0x15426DD0)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_ISUSINGMATERIAL_OFFSET UNITYSDK_OFFSET(0x1542BAD0)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x1542C030)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_POPULATEOBJECTINSTANCEINFOS_OFFSET UNITYSDK_OFFSET(0x1542DCC0)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_PROCESSUNITYSCRIPTATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1541BC20)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_RESET_OFFSET UNITYSDK_OFFSET(0x154448B0)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_SETOBJECTINFO_OFFSET UNITYSDK_OFFSET(0x15444F80)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_SYNCWITHOBJECTINFO_OFFSET UNITYSDK_OFFSET(0x154449B0)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15447D00)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE_UPDATEOBJECT_OFFSET UNITYSDK_OFFSET(0x15425360)
#define HOUDINIENGINEUNITY_HEU_OBJECTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x154447A0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_ObjectNode_TypeDefinitionIndex = 43517;

	class HEU_ObjectNode : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::String* _objName; // 0x18
		::HoudiniEngineUnity::HEU_HoudiniAsset* _parentAsset; // 0x20
		::HoudiniEngineUnity::HAPI_ObjectInfo _objectInfo; // 0x28
		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoNode*>* _geoNodes; // 0x48
		::HoudiniEngineUnity::HAPI_Transform _objectTransform; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_ObjectID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_GET_OBJECTID_OFFSET))(this);
		}

		::System::String* get_ObjectName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_GET_OBJECTNAME_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_HoudiniAsset* get_ParentAsset()
		{
			return ((::HoudiniEngineUnity::HEU_HoudiniAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_GET_PARENTASSET_OFFSET))(this);
		}

		::System::Boolean IsInstanced()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_ISINSTANCED_OFFSET))(this);
		}

		::System::Boolean IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_ISVISIBLE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_RESET_OFFSET))(this);
		}

		::System::Void SyncWithObjectInfo(::HoudiniEngineUnity::HEU_SessionBase* session)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_SYNCWITHOBJECTINFO_OFFSET))(this, session);
		}

		::System::Void Initialize(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HAPI_ObjectInfo objectInfo, ::HoudiniEngineUnity::HAPI_Transform objectTranform, ::HoudiniEngineUnity::HEU_HoudiniAsset* parentAsset)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HAPI_ObjectInfo, ::HoudiniEngineUnity::HAPI_Transform, ::HoudiniEngineUnity::HEU_HoudiniAsset*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_INITIALIZE_OFFSET))(this, session, objectInfo, objectTranform, parentAsset);
		}

		::System::Void DestroyAllData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_DESTROYALLDATA_OFFSET))(this);
		}

		::HoudiniEngineUnity::HEU_GeoNode* CreateGeoNode(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HAPI_GeoInfo geoInfo)
		{
			return ((::HoudiniEngineUnity::HEU_GeoNode*(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HAPI_GeoInfo))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_CREATEGEONODE_OFFSET))(this, session, geoInfo);
		}

		::System::Void GetDebugInfo(::System::Text::StringBuilder* sb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_GETDEBUGINFO_OFFSET))(this, sb);
		}

		::System::Void SetObjectInfo(::HoudiniEngineUnity::HAPI_ObjectInfo newObjectInfo)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HAPI_ObjectInfo))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_SETOBJECTINFO_OFFSET))(this, newObjectInfo);
		}

		::System::Void UpdateObject(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Boolean bForceUpdate)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_UPDATEOBJECT_OFFSET))(this, session, bForceUpdate);
		}

		::System::Void GenerateGeometry(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Boolean bRebuild)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_GENERATEGEOMETRY_OFFSET))(this, session, bRebuild);
		}

		::System::Void GeneratePartInstances(::HoudiniEngineUnity::HEU_SessionBase* session)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_GENERATEPARTINSTANCES_OFFSET))(this, session);
		}

		::System::Void GenerateAttributesStore(::HoudiniEngineUnity::HEU_SessionBase* session)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_GENERATEATTRIBUTESSTORE_OFFSET))(this, session);
		}

		::System::Void ApplyObjectTransformToGeoNodes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_APPLYOBJECTTRANSFORMTOGEONODES_OFFSET))(this);
		}

		::System::Boolean IsUsingMaterial(::HoudiniEngineUnity::HEU_MaterialData* materialData)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_MaterialData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_ISUSINGMATERIAL_OFFSET))(this, materialData);
		}

		::System::Void GetClonableParts(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>* clonableParts)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_GETCLONABLEPARTS_OFFSET))(this, clonableParts);
		}

		::System::Void GetOutputGameObjects(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* outputObjects)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_GETOUTPUTGAMEOBJECTS_OFFSET))(this, outputObjects);
		}

		::System::Void GetOutput(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>* outputs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_GETOUTPUT_OFFSET))(this, outputs);
		}

		::HoudiniEngineUnity::HEU_PartData* GetHDAPartWithGameObject(::UnityEngine::GameObject* outputGameObject)
		{
			return ((::HoudiniEngineUnity::HEU_PartData*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_GETHDAPARTWITHGAMEOBJECT_OFFSET))(this, outputGameObject);
		}

		::HoudiniEngineUnity::HEU_GeoNode* GetGeoNode(::System::String* geoName)
		{
			return ((::HoudiniEngineUnity::HEU_GeoNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_GETGEONODE_OFFSET))(this, geoName);
		}

		::System::Void GetCurves(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Curve*>* curves, ::System::Boolean bEditableOnly)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_Curve*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_GETCURVES_OFFSET))(this, curves, bEditableOnly);
		}

		::System::Void GetOutputGeoNodes(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoNode*>* outGeoNodes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoNode*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_GETOUTPUTGEONODES_OFFSET))(this, outGeoNodes);
		}

		::System::Void GenerateObjectInstances(::HoudiniEngineUnity::HEU_SessionBase* session)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_GENERATEOBJECTINSTANCES_OFFSET))(this, session);
		}

		::System::Void PopulateObjectInstanceInfos(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>* objInstanceInfos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_POPULATEOBJECTINSTANCEINFOS_OFFSET))(this, objInstanceInfos);
		}

		::System::Void ProcessUnityScriptAttributes(::HoudiniEngineUnity::HEU_SessionBase* session)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_PROCESSUNITYSCRIPTATTRIBUTES_OFFSET))(this, session);
		}

		::System::Void HideAllGeometry()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_HIDEALLGEOMETRY_OFFSET))(this);
		}

		::System::Void CalculateVisibility()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_CALCULATEVISIBILITY_OFFSET))(this);
		}

		::System::Void CalculateColliderState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_CALCULATECOLLIDERSTATE_OFFSET))(this);
		}

		::System::Void DisableAllColliders()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_DISABLEALLCOLLIDERS_OFFSET))(this);
		}

		::System::Boolean IsInstancer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_ISINSTANCER_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OBJECTNODE_TOSTRING_OFFSET))(this);
		}
	};
}
