#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_AttributeInfo.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_GeoInfo.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_PartInfo.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/MeshTopology.h"

namespace HoudiniEngineUnity { class HEU_GenerateGeoCache_HEU_ColliderInfo; }
namespace HoudiniEngineUnity { class HEU_GeneratedOutput; }
namespace HoudiniEngineUnity { class HEU_GeneratedOutputData; }
namespace HoudiniEngineUnity { class HEU_GeoGroup; }
namespace HoudiniEngineUnity { class HEU_MaterialData; }
namespace HoudiniEngineUnity { class HEU_MeshData; }
namespace HoudiniEngineUnity { class HEU_MeshIndexFormat; }
namespace HoudiniEngineUnity { class HEU_SessionBase; }
namespace HoudiniEngineUnity { class HEU_UnityMaterialInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_CALCULATEGROUPMESHTOPOLOGY_OFFSET UNITYSDK_OFFSET(0x80E2640)
#define HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_COMBINEMESHES_OFFSET UNITYSDK_OFFSET(0x80DE710)
#define HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_COMBINEQUADMESHES_OFFSET UNITYSDK_OFFSET(0x80DD870)
#define HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_CREATEMATERIALINFOENTRYFROMATTRIBUTEINDEX_OFFSET UNITYSDK_OFFSET(0x80D9D90)
#define HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_CREATEMESHFROMMESHDATA_OFFSET UNITYSDK_OFFSET(0x80DD190)
#define HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_GENERATEGEOGROUPUSINGGEOCACHEPOINTS_OFFSET UNITYSDK_OFFSET(0x80E2970)
#define HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_GENERATEGEOGROUPUSINGGEOCACHEVERTICES_OFFSET UNITYSDK_OFFSET(0x80DF040)
#define HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_GENERATELODMESHESFROMGEOGROUPS_OFFSET UNITYSDK_OFFSET(0x80C5920)
#define HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_GENERATEMESHFROMGEOGROUP_OFFSET UNITYSDK_OFFSET(0x80DB500)
#define HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_GENERATEMESHFROMSINGLEGROUP_OFFSET UNITYSDK_OFFSET(0x80C6850)
#define HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_GETFINALMATERIALSFROMCOMPARINGNEWWITHPREVIOUS_OFFSET UNITYSDK_OFFSET(0x80DB0B0)
#define HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_GETMATERIALKEYFROMATTRIBUTEINDEX_OFFSET UNITYSDK_OFFSET(0x80D9EE0)
#define HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_GETPOPULATEDGEOCACHE_OFFSET UNITYSDK_OFFSET(0x80D5440)
#define HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_GET_ASSETID_OFFSET UNITYSDK_OFFSET(0x80D5420)
#define HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_GET_GEOID_OFFSET UNITYSDK_OFFSET(0x80D5410)
#define HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_GET_PARTID_OFFSET UNITYSDK_OFFSET(0x80C5910)
#define HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_PARSELODTRANSITIONATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x80DA160)
#define HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_POPULATEGEOMETRYDATA_OFFSET UNITYSDK_OFFSET(0x80D68C0)
#define HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_POPULATEUNITYMATERIALDATA_OFFSET UNITYSDK_OFFSET(0x80D5C00)
#define HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_SET_ASSETID_OFFSET UNITYSDK_OFFSET(0x80D5430)
#define HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_TRANSFERREGULARATTRIBUTESTOVERTICES_OFFSET UNITYSDK_OFFSET(0x80DEA90)
#define HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_UPDATECOLLIDERS_OFFSET UNITYSDK_OFFSET(0x80C6D60)
#define HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_UPDATECOLLIDER_OFFSET UNITYSDK_OFFSET(0x80DA670)
#define HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE__CTOR_OFFSET UNITYSDK_OFFSET(0x80D5940)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_GenerateGeoCache_TypeDefinitionIndex = 36877;

	class HEU_GenerateGeoCache : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* _unityMaterialAttrStringsMap; // 0x10
		::Il2CppArray<::System::Single>* _colorAttr; // 0x18
		::Il2CppArray<::System::Int32>* _vertexList; // 0x20
		::Il2CppArray<::System::Single>* _LODTransitionValues; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* _substanceMaterialAttrStringsMap; // 0x30
		::Il2CppArray<::System::Single>* _tangentAttr; // 0x38
		::Il2CppArray<::System::Single>* _normalAttr; // 0x40
		::Il2CppArray<::System::Single>* _posAttr; // 0x48
		::Il2CppArray<::Il2CppArray<::System::Single>*>* _uvsAttr; // 0x50
		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GenerateGeoCache_HEU_ColliderInfo*>* _colliderInfos; // 0x58
		::System::String* _assetCacheFolderPath; // 0x60
		::Il2CppArray<::System::Int32>* _unityMaterialAttrName; // 0x68
		::Il2CppArray<::System::Int32>* _substanceMaterialAttrIndex; // 0x70
		::System::String* _partName; // 0x78
		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>* _inUseMaterials; // 0x80
		::Il2CppArray<::HoudiniEngineUnity::HAPI_AttributeInfo>* _uvsAttrInfo; // 0x88
		::Il2CppArray<::System::Int32>* _allCollisionFaceIndices; // 0x90
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::HoudiniEngineUnity::HEU_MaterialData*>* _materialIDToDataMap; // 0x98
		::Il2CppArray<::System::Int32>* _faceCounts; // 0xA0
		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>* _materialCache; // 0xA8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*>* _groupVertexOffsets; // 0xB0
		::Il2CppArray<::System::Int32>* _houdiniMaterialIDs; // 0xB8
		::Il2CppArray<::System::String*>* _groups; // 0xC0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*>* _groupSplitFaceIndices; // 0xC8
		::Il2CppArray<::System::Single>* _alphaAttr; // 0xD0
		::HoudiniEngineUnity::HEU_MeshIndexFormat* _meshIndexFormat; // 0xD8
		::Il2CppArray<::System::Int32>* _substanceMaterialAttrName; // 0xE0
		::HoudiniEngineUnity::HAPI_PartInfo _partInfo; // 0xE8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::HoudiniEngineUnity::HEU_UnityMaterialInfo*>* _unityMaterialInfos; // 0x118
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Il2CppArray<::System::Int32>*>* _groupSplitVertexIndices; // 0x120
		::Il2CppArray<::System::Int32>* _allCollisionVertexList; // 0x128
		::HoudiniEngineUnity::HAPI_AttributeInfo _unityMaterialAttrInfo; // 0x130
		::HoudiniEngineUnity::HAPI_AttributeInfo _alphaAttrInfo; // 0x158
		::HoudiniEngineUnity::HAPI_AttributeInfo _substanceMaterialAttrNameInfo; // 0x180
		::HoudiniEngineUnity::HAPI_AttributeInfo _normalAttrInfo; // 0x1A8
		::HoudiniEngineUnity::HAPI_AttributeInfo _substanceMaterialAttrIndexInfo; // 0x1D0
		::HoudiniEngineUnity::HAPI_GeoInfo _geoInfo; // 0x1F8
		::System::Boolean _singleFaceUnityMaterial; // 0x218
		::System::Boolean _singleFaceHoudiniMaterial; // 0x219
		::System::Boolean _hasGroupGeometry; // 0x21A
		::HoudiniEngineUnity::HAPI_AttributeInfo _colorAttrInfo; // 0x220
		::HoudiniEngineUnity::HAPI_AttributeInfo _tangentAttrInfo; // 0x248
		::System::Int32 _AssetID_k__BackingField; // 0x270
		::System::Single _normalCosineThreshold; // 0x274
		::System::Boolean _isMeshReadWrite; // 0x278
		::System::Boolean _hasLODGroups; // 0x279
		::HoudiniEngineUnity::HAPI_AttributeInfo _posAttrInfo; // 0x280

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_GeoID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_GET_GEOID_OFFSET))(this);
		}

		::System::Int32 get_PartID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_GET_PARTID_OFFSET))(this);
		}

		::System::Int32 get_AssetID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_GET_ASSETID_OFFSET))(this);
		}

		::System::Void set_AssetID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_SET_ASSETID_OFFSET))(this, value);
		}

		static ::HoudiniEngineUnity::HEU_GenerateGeoCache* GetPopulatedGeoCache(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 assetID, ::System::Int32 geoID, ::System::Int32 partID, ::System::Boolean bUseLODGroups, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>* materialCache, ::System::String* assetCacheFolderPath)
		{
			return ((::HoudiniEngineUnity::HEU_GenerateGeoCache*(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_MaterialData*>*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_GETPOPULATEDGEOCACHE_OFFSET))(session, assetID, geoID, partID, bUseLODGroups, materialCache, assetCacheFolderPath);
		}

		::System::Void PopulateUnityMaterialData(::HoudiniEngineUnity::HEU_SessionBase* session)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_POPULATEUNITYMATERIALDATA_OFFSET))(this, session);
		}

		static ::System::Int32 GetMaterialKeyFromAttributeIndex(::HoudiniEngineUnity::HEU_GenerateGeoCache* geoCache, ::System::Int32 attributeIndex, ::System::String*& unityMaterialName, ::System::String*& substanceName, ::System::Int32& substanceIndex)
		{
			return ((::System::Int32(*)(::HoudiniEngineUnity::HEU_GenerateGeoCache*, ::System::Int32, ::System::String*&, ::System::String*&, ::System::Int32&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_GETMATERIALKEYFROMATTRIBUTEINDEX_OFFSET))(geoCache, attributeIndex, unityMaterialName, substanceName, substanceIndex);
		}

		static ::System::Void CreateMaterialInfoEntryFromAttributeIndex(::HoudiniEngineUnity::HEU_GenerateGeoCache* geoCache, ::System::Int32 materialAttributeIndex)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_GenerateGeoCache*, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_CREATEMATERIALINFOENTRYFROMATTRIBUTEINDEX_OFFSET))(geoCache, materialAttributeIndex);
		}

		::System::Boolean PopulateGeometryData(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Boolean bUseLODGroups)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_POPULATEGEOMETRYDATA_OFFSET))(this, session, bUseLODGroups);
		}

		static ::System::Void ParseLODTransitionAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 geoID, ::System::Int32 partID, ::Il2CppArray<::System::Single>*& LODTransitionValues)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Single>*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_PARSELODTRANSITIONATTRIBUTE_OFFSET))(session, geoID, partID, LODTransitionValues);
		}

		static ::System::Void UpdateColliders(::HoudiniEngineUnity::HEU_GenerateGeoCache* geoCache, ::HoudiniEngineUnity::HEU_GeneratedOutputData* outputData)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_GenerateGeoCache*, ::HoudiniEngineUnity::HEU_GeneratedOutputData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_UPDATECOLLIDERS_OFFSET))(geoCache, outputData);
		}

		static ::System::Void UpdateCollider(::HoudiniEngineUnity::HEU_GenerateGeoCache* geoCache, ::HoudiniEngineUnity::HEU_GeneratedOutputData* outputData, ::HoudiniEngineUnity::HEU_GenerateGeoCache_HEU_ColliderInfo* colliderInfo)
		{
			return ((::System::Void(*)(::HoudiniEngineUnity::HEU_GenerateGeoCache*, ::HoudiniEngineUnity::HEU_GeneratedOutputData*, ::HoudiniEngineUnity::HEU_GenerateGeoCache_HEU_ColliderInfo*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_UPDATECOLLIDER_OFFSET))(geoCache, outputData, colliderInfo);
		}

		static ::System::Void GetFinalMaterialsFromComparingNewWithPrevious(::UnityEngine::GameObject* gameObject, ::Il2CppArray<::UnityEngine::Material*>* previousMaterials, ::Il2CppArray<::UnityEngine::Material*>* newMaterials, ::Il2CppArray<::UnityEngine::Material*>*& finalMaterials)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::Il2CppArray<::UnityEngine::Material*>*, ::Il2CppArray<::UnityEngine::Material*>*, ::Il2CppArray<::UnityEngine::Material*>*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_GETFINALMATERIALSFROMCOMPARINGNEWWITHPREVIOUS_OFFSET))(gameObject, previousMaterials, newMaterials, finalMaterials);
		}

		static ::System::Boolean GenerateMeshFromSingleGroup(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_GeoGroup* GeoGroup, ::HoudiniEngineUnity::HEU_GenerateGeoCache* geoCache, ::HoudiniEngineUnity::HEU_GeneratedOutput* generatedOutput, ::System::Int32 defaultMaterialKey, ::System::Boolean bGenerateUVs, ::System::Boolean bGenerateTangents, ::System::Boolean bGenerateNormals, ::System::Boolean bPartInstanced)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_GeoGroup*, ::HoudiniEngineUnity::HEU_GenerateGeoCache*, ::HoudiniEngineUnity::HEU_GeneratedOutput*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_GENERATEMESHFROMSINGLEGROUP_OFFSET))(session, GeoGroup, geoCache, generatedOutput, defaultMaterialKey, bGenerateUVs, bGenerateTangents, bGenerateNormals, bPartInstanced);
		}

		static ::System::Boolean GenerateLODMeshesFromGeoGroups(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoGroup*>* GeoGroupMeshes, ::HoudiniEngineUnity::HEU_GenerateGeoCache* geoCache, ::HoudiniEngineUnity::HEU_GeneratedOutput* generatedOutput, ::System::Int32 defaultMaterialKey, ::System::Boolean bGenerateUVs, ::System::Boolean bGenerateTangents, ::System::Boolean bGenerateNormals, ::System::Boolean bPartInstanced)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoGroup*>*, ::HoudiniEngineUnity::HEU_GenerateGeoCache*, ::HoudiniEngineUnity::HEU_GeneratedOutput*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_GENERATELODMESHESFROMGEOGROUPS_OFFSET))(session, GeoGroupMeshes, geoCache, generatedOutput, defaultMaterialKey, bGenerateUVs, bGenerateTangents, bGenerateNormals, bPartInstanced);
		}

		static ::System::Boolean GenerateMeshFromGeoGroup(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_GeoGroup* GeoGroup, ::HoudiniEngineUnity::HEU_GenerateGeoCache* geoCache, ::System::Int32 defaultMaterialKey, ::System::Boolean bGenerateUVs, ::System::Boolean bGenerateTangents, ::System::Boolean bGenerateNormals, ::System::Boolean bPartInstanced, ::UnityEngine::Mesh*& newMesh, ::Il2CppArray<::UnityEngine::Material*>*& newMaterials)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_GeoGroup*, ::HoudiniEngineUnity::HEU_GenerateGeoCache*, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::UnityEngine::Mesh*&, ::Il2CppArray<::UnityEngine::Material*>*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_GENERATEMESHFROMGEOGROUP_OFFSET))(session, GeoGroup, geoCache, defaultMaterialKey, bGenerateUVs, bGenerateTangents, bGenerateNormals, bPartInstanced, newMesh, newMaterials);
		}

		static ::UnityEngine::Mesh* CombineQuadMeshes(::System::Collections::Generic::Dictionary_2<::System::Int32, ::HoudiniEngineUnity::HEU_MeshData*>* subMeshesMap, ::System::Collections::Generic::List_1<::System::Int32>* subMeshIndices, ::System::Boolean bGenerateNormals)
		{
			return ((::UnityEngine::Mesh*(*)(::System::Collections::Generic::Dictionary_2<::System::Int32, ::HoudiniEngineUnity::HEU_MeshData*>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_COMBINEQUADMESHES_OFFSET))(subMeshesMap, subMeshIndices, bGenerateNormals);
		}

		static ::UnityEngine::Mesh* CombineMeshes(::System::Collections::Generic::Dictionary_2<::System::Int32, ::HoudiniEngineUnity::HEU_MeshData*>* subMeshesMap, ::System::Collections::Generic::List_1<::System::Int32>* submeshIndices, ::System::Boolean bGenerateUVs, ::System::Boolean bGenerateNormals, ::HoudiniEngineUnity::HEU_MeshIndexFormat* meshIndexFormat)
		{
			return ((::UnityEngine::Mesh*(*)(::System::Collections::Generic::Dictionary_2<::System::Int32, ::HoudiniEngineUnity::HEU_MeshData*>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Boolean, ::System::Boolean, ::HoudiniEngineUnity::HEU_MeshIndexFormat*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_COMBINEMESHES_OFFSET))(subMeshesMap, submeshIndices, bGenerateUVs, bGenerateNormals, meshIndexFormat);
		}

		static ::UnityEngine::Mesh* CreateMeshFromMeshData(::HoudiniEngineUnity::HEU_MeshData* submesh, ::System::Boolean bGenerateUVs, ::System::Boolean bGenerateNormals, ::HoudiniEngineUnity::HEU_MeshIndexFormat* meshIndexFormat)
		{
			return ((::UnityEngine::Mesh*(*)(::HoudiniEngineUnity::HEU_MeshData*, ::System::Boolean, ::System::Boolean, ::HoudiniEngineUnity::HEU_MeshIndexFormat*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_CREATEMESHFROMMESHDATA_OFFSET))(submesh, bGenerateUVs, bGenerateNormals, meshIndexFormat);
		}

		static ::System::Void TransferRegularAttributesToVertices(::Il2CppArray<::System::Int32>* groupVertexList, ::Il2CppArray<::System::Int32>* allFaceCounts, ::System::Collections::Generic::List_1<::System::Int32>* groupFaces, ::System::Collections::Generic::List_1<::System::Int32>* groupVertexOffset, ::HoudiniEngineUnity::HAPI_AttributeInfo& attribInfo, ::Il2CppArray<::System::Single>* inData, ::Il2CppArray<::System::Single>*& outData)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::HoudiniEngineUnity::HAPI_AttributeInfo&, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_TRANSFERREGULARATTRIBUTESTOVERTICES_OFFSET))(groupVertexList, allFaceCounts, groupFaces, groupVertexOffset, attribInfo, inData, outData);
		}

		static ::System::Boolean GenerateGeoGroupUsingGeoCacheVertices(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_GenerateGeoCache* geoCache, ::System::Boolean bGenerateUVs, ::System::Boolean bGenerateTangents, ::System::Boolean bGenerateNormals, ::System::Boolean bUseLODGroups, ::System::Boolean bPartInstanced, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoGroup*>*& LODGroupMeshes, ::System::Int32& defaultMaterialKey)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_GenerateGeoCache*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoGroup*>*&, ::System::Int32&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_GENERATEGEOGROUPUSINGGEOCACHEVERTICES_OFFSET))(session, geoCache, bGenerateUVs, bGenerateTangents, bGenerateNormals, bUseLODGroups, bPartInstanced, LODGroupMeshes, defaultMaterialKey);
		}

		static ::System::Boolean GenerateGeoGroupUsingGeoCachePoints(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_GenerateGeoCache* geoCache, ::System::Boolean bGenerateUVs, ::System::Boolean bGenerateTangents, ::System::Boolean bGenerateNormals, ::System::Boolean bUseLODGroups, ::System::Boolean bPartInstanced, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoGroup*>*& LODGroupMeshes, ::System::Int32& defaultMaterialKey)
		{
			return ((::System::Boolean(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_GenerateGeoCache*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeoGroup*>*&, ::System::Int32&))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_GENERATEGEOGROUPUSINGGEOCACHEPOINTS_OFFSET))(session, geoCache, bGenerateUVs, bGenerateTangents, bGenerateNormals, bUseLODGroups, bPartInstanced, LODGroupMeshes, defaultMaterialKey);
		}

		static ::UnityEngine::MeshTopology CalculateGroupMeshTopology(::System::Collections::Generic::List_1<::System::Int32>* groupFaces, ::Il2CppArray<::System::Int32>* allFaceCounts)
		{
			return ((::UnityEngine::MeshTopology(*)(::System::Collections::Generic::List_1<::System::Int32>*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_GENERATEGEOCACHE_CALCULATEGROUPMESHTOPOLOGY_OFFSET))(groupFaces, allFaceCounts);
		}
	};
}
