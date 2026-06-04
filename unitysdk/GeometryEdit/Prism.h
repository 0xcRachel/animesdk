#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_D09F4FAB9C64FEFA;
namespace RPG::Client { class Stage; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Mesh; }

#define GEOMETRYEDIT_PRISM_ADDEDGEWORLDPOS_OFFSET UNITYSDK_OFFSET(0x1471D090)
#define GEOMETRYEDIT_PRISM_DELETEEDGE_OFFSET UNITYSDK_OFFSET(0x1471D140)
#define GEOMETRYEDIT_PRISM_GETLOCALSPACEBOTTOMFACE_OFFSET UNITYSDK_OFFSET(0x1471CB30)
#define GEOMETRYEDIT_PRISM_GETWORLDSPACEBOTTOMFACE_OFFSET UNITYSDK_OFFSET(0x1471C8F0)
#define GEOMETRYEDIT_PRISM_GETWORLDSPACETOPFACE_OFFSET UNITYSDK_OFFSET(0x1471CC30)
#define GEOMETRYEDIT_PRISM_GET_HASRESET_OFFSET UNITYSDK_OFFSET(0x1471D500)
#define GEOMETRYEDIT_PRISM_GET_ISFORMAINCAMERA_OFFSET UNITYSDK_OFFSET(0x1471B030)
#define GEOMETRYEDIT_PRISM_GET_MESHDIRTY_OFFSET UNITYSDK_OFFSET(0x1471C8D0)
#define GEOMETRYEDIT_PRISM_ISPOINTINSIDECONCAVE_1_OFFSET UNITYSDK_OFFSET(0x1471BCF0)
#define GEOMETRYEDIT_PRISM_ISPOINTINSIDECONCAVE_OFFSET UNITYSDK_OFFSET(0x1471B780)
#define GEOMETRYEDIT_PRISM_ISPOINTINSIDECONVEX_1_OFFSET UNITYSDK_OFFSET(0x1471BB50)
#define GEOMETRYEDIT_PRISM_ISPOINTINSIDECONVEX_OFFSET UNITYSDK_OFFSET(0x1471B800)
#define GEOMETRYEDIT_PRISM_ISPOINTINSIDE_OFFSET UNITYSDK_OFFSET(0x1471B6D0)
#define GEOMETRYEDIT_PRISM_LOCALTOWORLD_1_OFFSET UNITYSDK_OFFSET(0x1471CE00)
#define GEOMETRYEDIT_PRISM_LOCALTOWORLD_OFFSET UNITYSDK_OFFSET(0x1471CAB0)
#define GEOMETRYEDIT_PRISM_METHOD_5_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x1471B450)
#define GEOMETRYEDIT_PRISM_METHOD_5_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x1471B6C0)
#define GEOMETRYEDIT_PRISM_METHOD_5_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x1471D080)
#define GEOMETRYEDIT_PRISM_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1471B6B0)
#define GEOMETRYEDIT_PRISM_METHOD_5_ABE7CF9FA1B8CCA3_OFFSET UNITYSDK_OFFSET(0x1471B060)
#define GEOMETRYEDIT_PRISM_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1471B5F0)
#define GEOMETRYEDIT_PRISM_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1471B5E0)
#define GEOMETRYEDIT_PRISM_REFRESHTRIGGER_OFFSET UNITYSDK_OFFSET(0x1471B510)
#define GEOMETRYEDIT_PRISM_RESETPIVOT_OFFSET UNITYSDK_OFFSET(0x1471D260)
#define GEOMETRYEDIT_PRISM_SETWORLDSPACEVERTICES_OFFSET UNITYSDK_OFFSET(0x1471CEF0)
#define GEOMETRYEDIT_PRISM_SET_HASRESET_OFFSET UNITYSDK_OFFSET(0x1471D510)
#define GEOMETRYEDIT_PRISM_SET_ISFORMAINCAMERA_OFFSET UNITYSDK_OFFSET(0x1471B040)
#define GEOMETRYEDIT_PRISM_SET_MESHDIRTY_OFFSET UNITYSDK_OFFSET(0x1471C8E0)
#define GEOMETRYEDIT_PRISM_TOMESH_OFFSET UNITYSDK_OFFSET(0x1471BE40)
#define GEOMETRYEDIT_PRISM_UPDATEEDGEWORLDPOS_OFFSET UNITYSDK_OFFSET(0x1471D1A0)
#define GEOMETRYEDIT_PRISM_WORLDTOLOCAL_OFFSET UNITYSDK_OFFSET(0x1471CE70)
#define GEOMETRYEDIT_PRISM__CTOR_OFFSET UNITYSDK_OFFSET(0x1471D520)

namespace GeometryEdit
{
	inline static constexpr unsigned int Prism_TypeDefinitionIndex = 46367;

	class Prism : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* Vertices; // 0x18
		::System::Single Height; // 0x20
		::System::Boolean _IsForMainCamera; // 0x24
		::System::Boolean Field_5_3; // 0x25
		::Class_1_D09F4FAB9C64FEFA* Field_5_4; // 0x28
		::RPG::Client::Stage* Field_5_5; // 0x30
		::System::Boolean _MeshDirty_k__BackingField; // 0x38
		::System::Boolean _HasReset_k__BackingField; // 0x39

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsForMainCamera()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM_GET_ISFORMAINCAMERA_OFFSET))(this);
		}

		::System::Void set_IsForMainCamera(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM_SET_ISFORMAINCAMERA_OFFSET))(this, a1);
		}

		::System::Void RefreshTrigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM_REFRESHTRIGGER_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM_ONDISABLE_OFFSET))(this);
		}

		::System::Void Method_5_ABE7CF9FA1B8CCA3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM_METHOD_5_ABE7CF9FA1B8CCA3_OFFSET))(this);
		}

		::System::Void Method_5_508D4DD02D3DB74E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM_METHOD_5_508D4DD02D3DB74E_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM_METHOD_5_832295EC279E5994_1_OFFSET))(this);
		}

		::System::Boolean IsPointInside(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM_ISPOINTINSIDE_OFFSET))(this, a1);
		}

		::System::Boolean IsPointInsideConvex(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM_ISPOINTINSIDECONVEX_OFFSET))(this, a1);
		}

		static ::System::Boolean IsPointInsideConvex_1(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Single, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM_ISPOINTINSIDECONVEX_1_OFFSET))(a1, a2, a3, a4);
		}

		::System::Boolean IsPointInsideConcave(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM_ISPOINTINSIDECONCAVE_OFFSET))(this, a1);
		}

		static ::System::Boolean IsPointInsideConcave_1(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1, ::System::Single a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM_ISPOINTINSIDECONCAVE_1_OFFSET))(a1, a2, a3);
		}

		::UnityEngine::Mesh* ToMesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM_TOMESH_OFFSET))(this);
		}

		::System::Boolean get_MeshDirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM_GET_MESHDIRTY_OFFSET))(this);
		}

		::System::Void set_MeshDirty(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM_SET_MESHDIRTY_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* GetWorldSpaceBottomFace()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM_GETWORLDSPACEBOTTOMFACE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* GetLocalSpaceBottomFace()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM_GETLOCALSPACEBOTTOMFACE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* GetWorldSpaceTopFace()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM_GETWORLDSPACETOPFACE_OFFSET))(this);
		}

		::UnityEngine::Vector3 LocalToWorld(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM_LOCALTOWORLD_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 LocalToWorld_1(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM_LOCALTOWORLD_1_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 WorldToLocal(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM_WORLDTOLOCAL_OFFSET))(this, a1);
		}

		::System::Void SetWorldSpaceVertices(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM_SETWORLDSPACEVERTICES_OFFSET))(this, a1);
		}

		::System::Void AddEdgeWorldPos(::System::Int32 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM_ADDEDGEWORLDPOS_OFFSET))(this, a1, a2);
		}

		::System::Void DeleteEdge(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM_DELETEEDGE_OFFSET))(this, a1);
		}

		::System::Void UpdateEdgeWorldPos(::System::Int32 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM_UPDATEEDGEWORLDPOS_OFFSET))(this, a1, a2);
		}

		::System::Void ResetPivot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM_RESETPIVOT_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM_METHOD_5_832295EC279E5994_2_OFFSET))(this);
		}

		::System::Boolean get_HasReset()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM_GET_HASRESET_OFFSET))(this);
		}

		::System::Void set_HasReset(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GEOMETRYEDIT_PRISM_SET_HASRESET_OFFSET))(this, a1);
		}
	};
}
