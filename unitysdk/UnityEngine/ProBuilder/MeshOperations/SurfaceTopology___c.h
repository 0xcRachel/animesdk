#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine::ProBuilder { class Face; }
namespace UnityEngine::ProBuilder { class FaceRebuildData; }
namespace UnityEngine::ProBuilder { class Vertex; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_SURFACETOPOLOGY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1886E7E0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_SURFACETOPOLOGY___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1886E820)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_SURFACETOPOLOGY___C__GETWINDINGORDER_B__3_0_OFFSET UNITYSDK_OFFSET(0x1886E850)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_SURFACETOPOLOGY___C__TOTRIANGLES_B__0_0_OFFSET UNITYSDK_OFFSET(0x1886E830)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int SurfaceTopology___c_TypeDefinitionIndex = 34251;

	class SurfaceTopology___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::Vector3>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(SurfaceTopology___c_TypeDefinitionIndex)->GetStaticField(0x3B8C0);
		}
		static ::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology___c** StaticGet___9()
		{
			return (::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology___c**)Il2CppClass::FromTypeDefinitionIndex(SurfaceTopology___c_TypeDefinitionIndex)->GetStaticField(0x3B8C8);
		}
		static ::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>**)Il2CppClass::FromTypeDefinitionIndex(SurfaceTopology___c_TypeDefinitionIndex)->GetStaticField(0x3B8D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_SURFACETOPOLOGY___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_SURFACETOPOLOGY___C__CTOR_OFFSET))(this);
		}

		::UnityEngine::ProBuilder::Face* _ToTriangles_b__0_0(::UnityEngine::ProBuilder::FaceRebuildData* x)
		{
			return ((::UnityEngine::ProBuilder::Face*(*)(::PVOID, ::UnityEngine::ProBuilder::FaceRebuildData*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_SURFACETOPOLOGY___C__TOTRIANGLES_B__0_0_OFFSET))(this, x);
		}

		::UnityEngine::Vector3 _GetWindingOrder_b__3_0(::UnityEngine::ProBuilder::Vertex* x)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::ProBuilder::Vertex*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_SURFACETOPOLOGY___C__GETWINDINGORDER_B__3_0_OFFSET))(this, x);
		}
	};
}
