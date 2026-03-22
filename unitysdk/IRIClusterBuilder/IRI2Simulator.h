#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IRI2/ClusterMeshLodInfo.h"
#include "unitysdk/IRI2/IRIClusterVolumeInfo.h"
#include "unitysdk/PipelineCmdSlot.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rendering/CRPMainCameraDesc.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

namespace IRIClusterBuilder { class IRIMaterialParams; }
namespace IRIClusterBuilder { class IRITextureArray; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture2DArray; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define IRICLUSTERBUILDER_IRI2SIMULATOR_EXECUTE_OFFSET UNITYSDK_OFFSET(0x10AD1950)
#define IRICLUSTERBUILDER_IRI2SIMULATOR_GET_KEY_OFFSET UNITYSDK_OFFSET(0x10AD19F0)
#define IRICLUSTERBUILDER_IRI2SIMULATOR_INITMATERIALPARAMSANDTEXTUREARRAY_OFFSET UNITYSDK_OFFSET(0x10AD1C40)
#define IRICLUSTERBUILDER_IRI2SIMULATOR_INITMESHCLUSTERS_OFFSET UNITYSDK_OFFSET(0x10AD2470)
#define IRICLUSTERBUILDER_IRI2SIMULATOR_INITVOLUME_OFFSET UNITYSDK_OFFSET(0x10AD2B60)
#define IRICLUSTERBUILDER_IRI2SIMULATOR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x10AD16C0)
#define IRICLUSTERBUILDER_IRI2SIMULATOR_UPDATE_OFFSET UNITYSDK_OFFSET(0x10AD1A00)
#define IRICLUSTERBUILDER_IRI2SIMULATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x10AD3F50)

namespace IRIClusterBuilder
{
	inline static constexpr unsigned int IRI2Simulator_TypeDefinitionIndex = 37652;

	class IRI2Simulator : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Int32 Field_5_14 = 0x6; // 0x0
		::UnityEngine::ComputeBuffer* Field_5_0; // 0x18
		::UnityEngine::ComputeBuffer* Field_5_1; // 0x20
		::UnityEngine::ComputeBuffer* Field_5_2; // 0x28
		::UnityEngine::ComputeBuffer* Field_5_3; // 0x30
		::UnityEngine::ComputeBuffer* Field_5_4; // 0x38
		::UnityEngine::Texture2DArray* Field_5_5; // 0x40
		::UnityEngine::Texture2DArray* Field_5_6; // 0x48
		::UnityEngine::Texture2DArray* Field_5_7; // 0x50
		::UnityEngine::ComputeBuffer* Field_5_8; // 0x58
		::UnityEngine::ComputeBuffer* Field_5_9; // 0x60
		::UnityEngine::ComputeBuffer* Field_5_10; // 0x68
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_5_11; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Collections::Generic::List_1<::System::Tuple_2<::System::UInt32, ::System::UInt32>*>*>* Field_5_12; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Int32>* Field_5_13; // 0x80
		::System::Collections::Generic::List_1<::UnityEngine::Vector3Int>* Field_5_15; // 0x88
		::System::Int32 Field_5_16; // 0x90
		::System::Int32 Field_5_17; // 0x94
		::System::Int32 Field_5_18; // 0x98
		::System::Int32 Field_5_19; // 0x9C
		::UnityEngine::Material* Field_5_20; // 0xA0
		::PipelineCmdSlot Field_5_21; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_IRI2SIMULATOR__CTOR_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_IRI2SIMULATOR_ONDISABLE_OFFSET))(this);
		}

		::System::Void Execute(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Rendering::CRPMainCameraDesc& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::CRPMainCameraDesc&))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_IRI2SIMULATOR_EXECUTE_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_Key()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_IRI2SIMULATOR_GET_KEY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_IRI2SIMULATOR_UPDATE_OFFSET))(this);
		}

		::System::Void InitMaterialParamsAndTextureArray(::IRIClusterBuilder::IRIMaterialParams* a1, ::IRIClusterBuilder::IRITextureArray* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::IRIClusterBuilder::IRIMaterialParams*, ::IRIClusterBuilder::IRITextureArray*, ::System::Int32))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_IRI2SIMULATOR_INITMATERIALPARAMSANDTEXTUREARRAY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void InitMeshClusters(::System::Collections::Generic::List_1<::IRI2::ClusterMeshLodInfo>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::IRI2::ClusterMeshLodInfo>*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_IRI2SIMULATOR_INITMESHCLUSTERS_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void InitVolume(::System::Collections::Generic::List_1<::IRI2::IRIClusterVolumeInfo>* a1, ::System::Collections::Generic::List_1<::IRI2::ClusterMeshLodInfo>* a2, ::UnityEngine::Material* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::IRI2::IRIClusterVolumeInfo>*, ::System::Collections::Generic::List_1<::IRI2::ClusterMeshLodInfo>*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_IRI2SIMULATOR_INITVOLUME_OFFSET))(this, a1, a2, a3);
		}
	};
}
