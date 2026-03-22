#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/Poly2Tri/TriangulationMode.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::ProBuilder::Poly2Tri { class DelaunayTriangle; }
namespace UnityEngine::ProBuilder::Poly2Tri { class TriangulationContext; }
namespace UnityEngine::ProBuilder::Poly2Tri { class TriangulationPoint; }

#define UNITYENGINE_PROBUILDER_POLY2TRI_POINTSET_ADDTRIANGLES_OFFSET UNITYSDK_OFFSET(0x17FA2DB0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_POINTSET_ADDTRIANGLE_OFFSET UNITYSDK_OFFSET(0x17FA2CC0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_POINTSET_GET_POINTS_OFFSET UNITYSDK_OFFSET(0x17FA2C10)
#define UNITYENGINE_PROBUILDER_POLY2TRI_POINTSET_GET_TRIANGLES_OFFSET UNITYSDK_OFFSET(0x17FA2C30)
#define UNITYENGINE_PROBUILDER_POLY2TRI_POINTSET_GET_TRIANGULATIONMODE_OFFSET UNITYSDK_OFFSET(0x17FA2CB0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_POINTSET_PREPARE_OFFSET UNITYSDK_OFFSET(0x17FA3150)
#define UNITYENGINE_PROBUILDER_POLY2TRI_POINTSET_SET_POINTS_OFFSET UNITYSDK_OFFSET(0x17FA2C20)
#define UNITYENGINE_PROBUILDER_POLY2TRI_POINTSET_SET_TRIANGLES_OFFSET UNITYSDK_OFFSET(0x17FA2C40)
#define UNITYENGINE_PROBUILDER_POLY2TRI_POINTSET__CTOR_OFFSET UNITYSDK_OFFSET(0x17FA2C50)

namespace UnityEngine::ProBuilder::Poly2Tri
{
	inline static constexpr unsigned int PointSet_TypeDefinitionIndex = 28917;

	class PointSet : public ::System::Object
	{
	public:
		::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* _Triangles_k__BackingField; // 0x10
		::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* _Points_k__BackingField; // 0x18

		::System::Void _ctor(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* points)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_POINTSET__CTOR_OFFSET))(this, points);
		}

		::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* get_Points()
		{
			return ((::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_POINTSET_GET_POINTS_OFFSET))(this);
		}

		::System::Void set_Points(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_POINTSET_SET_POINTS_OFFSET))(this, value);
		}

		::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* get_Triangles()
		{
			return ((::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_POINTSET_GET_TRIANGLES_OFFSET))(this);
		}

		::System::Void set_Triangles(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_POINTSET_SET_TRIANGLES_OFFSET))(this, value);
		}

		::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode get_TriangulationMode()
		{
			return ((::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_POINTSET_GET_TRIANGULATIONMODE_OFFSET))(this);
		}

		::System::Void AddTriangle(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_POINTSET_ADDTRIANGLE_OFFSET))(this, t);
		}

		::System::Void AddTriangles(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* list)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_POINTSET_ADDTRIANGLES_OFFSET))(this, list);
		}

		::System::Void Prepare(::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* tcx)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_POINTSET_PREPARE_OFFSET))(this, tcx);
		}
	};
}
