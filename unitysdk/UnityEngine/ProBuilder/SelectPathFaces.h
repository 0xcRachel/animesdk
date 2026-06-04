#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::ProBuilder { class Face; }
namespace UnityEngine::ProBuilder { class ProBuilderMesh; }
namespace UnityEngine::ProBuilder { class WingedEdge; }

#define UNITYENGINE_PROBUILDER_SELECTPATHFACES_DIJKSTRA_OFFSET UNITYSDK_OFFSET(0x15C48240)
#define UNITYENGINE_PROBUILDER_SELECTPATHFACES_GETMINIMALPATH_OFFSET UNITYSDK_OFFSET(0x15C480F0)
#define UNITYENGINE_PROBUILDER_SELECTPATHFACES_GETPATH_OFFSET UNITYSDK_OFFSET(0x15C47E50)
#define UNITYENGINE_PROBUILDER_SELECTPATHFACES_GETWEIGHT_OFFSET UNITYSDK_OFFSET(0x15C48B50)
#define UNITYENGINE_PROBUILDER_SELECTPATHFACES__CCTOR_OFFSET UNITYSDK_OFFSET(0x15C49010)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int SelectPathFaces_TypeDefinitionIndex = 40798;

	class SelectPathFaces : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>** StaticGet_s_cachedWings()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>**)Il2CppClass::FromTypeDefinitionIndex(SelectPathFaces_TypeDefinitionIndex)->GetStaticField(0x518E0);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_s_cachedPredecessors()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(SelectPathFaces_TypeDefinitionIndex)->GetStaticField(0x518E8);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Face*, ::System::Int32>** StaticGet_s_cachedFacesIndex()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Face*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(SelectPathFaces_TypeDefinitionIndex)->GetStaticField(0x518F0);
		}
		static ::UnityEngine::ProBuilder::ProBuilderMesh** StaticGet_s_cachedMesh()
		{
			return (::UnityEngine::ProBuilder::ProBuilderMesh**)Il2CppClass::FromTypeDefinitionIndex(SelectPathFaces_TypeDefinitionIndex)->GetStaticField(0x518F8);
		}
		static ::System::Int32* StaticGet_s_cachedStart()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SelectPathFaces_TypeDefinitionIndex)->GetStaticField(0xF490);
		}
		static ::System::Int32* StaticGet_s_cachedFacesCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SelectPathFaces_TypeDefinitionIndex)->GetStaticField(0xF494);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SELECTPATHFACES__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::Int32>* GetPath(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SELECTPATHFACES_GETPATH_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::Int32>* Dijkstra(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Int32 a2)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SELECTPATHFACES_DIJKSTRA_OFFSET))(a1, a2);
		}

		static ::System::Single GetWeight(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::ProBuilder::ProBuilderMesh* a3)
		{
			return ((::System::Single(*)(::System::Int32, ::System::Int32, ::UnityEngine::ProBuilder::ProBuilderMesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SELECTPATHFACES_GETWEIGHT_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::List_1<::System::Int32>* GetMinimalPath(::Il2CppArray<::System::Int32>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::Il2CppArray<::System::Int32>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SELECTPATHFACES_GETMINIMALPATH_OFFSET))(a1, a2, a3);
		}
	};
}
