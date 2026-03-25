#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/Edge.h"
#include "unitysdk/UnityEngine/ProBuilder/EdgeLookup.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::ProBuilder { class Face; }
namespace UnityEngine::ProBuilder { class ProBuilderMesh; }

#define UNITYENGINE_PROBUILDER_WINGEDEDGE_COUNT_OFFSET UNITYSDK_OFFSET(0x188CBEC0)
#define UNITYENGINE_PROBUILDER_WINGEDEDGE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x188CBDE0)
#define UNITYENGINE_PROBUILDER_WINGEDEDGE_EQUALS_OFFSET UNITYSDK_OFFSET(0x188CBDA0)
#define UNITYENGINE_PROBUILDER_WINGEDEDGE_GETADJACENTEDGEWITHCOMMONINDEX_OFFSET UNITYSDK_OFFSET(0x188CCB80)
#define UNITYENGINE_PROBUILDER_WINGEDEDGE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x188CBE90)
#define UNITYENGINE_PROBUILDER_WINGEDEDGE_GETSPOKES_OFFSET UNITYSDK_OFFSET(0x188CCE40)
#define UNITYENGINE_PROBUILDER_WINGEDEDGE_GETWINGEDEDGES_1_OFFSET UNITYSDK_OFFSET(0x188BD1E0)
#define UNITYENGINE_PROBUILDER_WINGEDEDGE_GETWINGEDEDGES_OFFSET UNITYSDK_OFFSET(0x18895310)
#define UNITYENGINE_PROBUILDER_WINGEDEDGE_GET_EDGE_OFFSET UNITYSDK_OFFSET(0x188CBCF0)
#define UNITYENGINE_PROBUILDER_WINGEDEDGE_GET_FACE_OFFSET UNITYSDK_OFFSET(0x188CBD10)
#define UNITYENGINE_PROBUILDER_WINGEDEDGE_GET_NEXT_OFFSET UNITYSDK_OFFSET(0x188CBD30)
#define UNITYENGINE_PROBUILDER_WINGEDEDGE_GET_OPPOSITE_OFFSET UNITYSDK_OFFSET(0x188CBD70)
#define UNITYENGINE_PROBUILDER_WINGEDEDGE_GET_PREVIOUS_OFFSET UNITYSDK_OFFSET(0x188CBD50)
#define UNITYENGINE_PROBUILDER_WINGEDEDGE_MAKEQUAD_OFFSET UNITYSDK_OFFSET(0x188CC1F0)
#define UNITYENGINE_PROBUILDER_WINGEDEDGE_SET_EDGE_OFFSET UNITYSDK_OFFSET(0x188CBD00)
#define UNITYENGINE_PROBUILDER_WINGEDEDGE_SET_FACE_OFFSET UNITYSDK_OFFSET(0x188CBD20)
#define UNITYENGINE_PROBUILDER_WINGEDEDGE_SET_NEXT_OFFSET UNITYSDK_OFFSET(0x188CBD40)
#define UNITYENGINE_PROBUILDER_WINGEDEDGE_SET_OPPOSITE_OFFSET UNITYSDK_OFFSET(0x188CBD80)
#define UNITYENGINE_PROBUILDER_WINGEDEDGE_SET_PREVIOUS_OFFSET UNITYSDK_OFFSET(0x188CBD60)
#define UNITYENGINE_PROBUILDER_WINGEDEDGE_SORTCOMMONINDEXESBYADJACENCY_OFFSET UNITYSDK_OFFSET(0x188CD2C0)
#define UNITYENGINE_PROBUILDER_WINGEDEDGE_SORTEDGESBYADJACENCY_1_OFFSET UNITYSDK_OFFSET(0x188CCCA0)
#define UNITYENGINE_PROBUILDER_WINGEDEDGE_SORTEDGESBYADJACENCY_OFFSET UNITYSDK_OFFSET(0x188CCBD0)
#define UNITYENGINE_PROBUILDER_WINGEDEDGE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x188CBEF0)
#define UNITYENGINE_PROBUILDER_WINGEDEDGE__CCTOR_OFFSET UNITYSDK_OFFSET(0x188CD5F0)
#define UNITYENGINE_PROBUILDER_WINGEDEDGE__CTOR_OFFSET UNITYSDK_OFFSET(0x188CBD90)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int WingedEdge_TypeDefinitionIndex = 34190;

	class WingedEdge : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Edge, ::UnityEngine::ProBuilder::WingedEdge*>** StaticGet_k_OppositeEdgeDictionary()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Edge, ::UnityEngine::ProBuilder::WingedEdge*>**)Il2CppClass::FromTypeDefinitionIndex(WingedEdge_TypeDefinitionIndex)->GetStaticField(0x3DE50);
		}
		::UnityEngine::ProBuilder::WingedEdge* _opposite_k__BackingField; // 0x10
		::UnityEngine::ProBuilder::WingedEdge* _next_k__BackingField; // 0x18
		::UnityEngine::ProBuilder::WingedEdge* _previous_k__BackingField; // 0x20
		::UnityEngine::ProBuilder::Face* _face_k__BackingField; // 0x28
		::UnityEngine::ProBuilder::EdgeLookup _edge_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_WINGEDEDGE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_WINGEDEDGE__CCTOR_OFFSET))();
		}

		::UnityEngine::ProBuilder::EdgeLookup get_edge()
		{
			return ((::UnityEngine::ProBuilder::EdgeLookup(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_WINGEDEDGE_GET_EDGE_OFFSET))(this);
		}

		::System::Void set_edge(::UnityEngine::ProBuilder::EdgeLookup value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::EdgeLookup))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_WINGEDEDGE_SET_EDGE_OFFSET))(this, value);
		}

		::UnityEngine::ProBuilder::Face* get_face()
		{
			return ((::UnityEngine::ProBuilder::Face*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_WINGEDEDGE_GET_FACE_OFFSET))(this);
		}

		::System::Void set_face(::UnityEngine::ProBuilder::Face* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_WINGEDEDGE_SET_FACE_OFFSET))(this, value);
		}

		::UnityEngine::ProBuilder::WingedEdge* get_next()
		{
			return ((::UnityEngine::ProBuilder::WingedEdge*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_WINGEDEDGE_GET_NEXT_OFFSET))(this);
		}

		::System::Void set_next(::UnityEngine::ProBuilder::WingedEdge* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::WingedEdge*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_WINGEDEDGE_SET_NEXT_OFFSET))(this, value);
		}

		::UnityEngine::ProBuilder::WingedEdge* get_previous()
		{
			return ((::UnityEngine::ProBuilder::WingedEdge*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_WINGEDEDGE_GET_PREVIOUS_OFFSET))(this);
		}

		::System::Void set_previous(::UnityEngine::ProBuilder::WingedEdge* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::WingedEdge*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_WINGEDEDGE_SET_PREVIOUS_OFFSET))(this, value);
		}

		::UnityEngine::ProBuilder::WingedEdge* get_opposite()
		{
			return ((::UnityEngine::ProBuilder::WingedEdge*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_WINGEDEDGE_GET_OPPOSITE_OFFSET))(this);
		}

		::System::Void set_opposite(::UnityEngine::ProBuilder::WingedEdge* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::WingedEdge*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_WINGEDEDGE_SET_OPPOSITE_OFFSET))(this, value);
		}

		::System::Boolean Equals(::UnityEngine::ProBuilder::WingedEdge* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::WingedEdge*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_WINGEDEDGE_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_WINGEDEDGE_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_WINGEDEDGE_GETHASHCODE_OFFSET))(this);
		}

		::System::Int32 Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_WINGEDEDGE_COUNT_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_WINGEDEDGE_TOSTRING_OFFSET))(this);
		}

		static ::Il2CppArray<::System::Int32>* MakeQuad(::UnityEngine::ProBuilder::WingedEdge* left, ::UnityEngine::ProBuilder::WingedEdge* right)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::WingedEdge*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_WINGEDEDGE_MAKEQUAD_OFFSET))(left, right);
		}

		::UnityEngine::ProBuilder::WingedEdge* GetAdjacentEdgeWithCommonIndex(::System::Int32 common)
		{
			return ((::UnityEngine::ProBuilder::WingedEdge*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_WINGEDEDGE_GETADJACENTEDGEWITHCOMMONINDEX_OFFSET))(this, common);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>* SortEdgesByAdjacency(::UnityEngine::ProBuilder::Face* face)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*(*)(::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_WINGEDEDGE_SORTEDGESBYADJACENCY_OFFSET))(face);
		}

		static ::System::Void SortEdgesByAdjacency_1(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>* edges)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_WINGEDEDGE_SORTEDGESBYADJACENCY_1_OFFSET))(edges);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*>* GetSpokes(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>* wings)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*>*(*)(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_WINGEDEDGE_GETSPOKES_OFFSET))(wings);
		}

		static ::System::Collections::Generic::List_1<::System::Int32>* SortCommonIndexesByAdjacency(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>* wings, ::System::Collections::Generic::HashSet_1<::System::Int32>* common)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_WINGEDEDGE_SORTCOMMONINDEXESBYADJACENCY_OFFSET))(wings, common);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>* GetWingedEdges(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Boolean oneWingPerFace)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_WINGEDEDGE_GETWINGEDEDGES_OFFSET))(mesh, oneWingPerFace);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>* GetWingedEdges_1(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces, ::System::Boolean oneWingPerFace)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_WINGEDEDGE_GETWINGEDEDGES_1_OFFSET))(mesh, faces, oneWingPerFace);
		}
	};
}
