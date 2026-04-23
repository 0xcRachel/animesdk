#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/Poly2Tri/TriangulationMode.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::ProBuilder::Poly2Tri { class DTSweepDebugContext; }
namespace UnityEngine::ProBuilder::Poly2Tri { class DelaunayTriangle; }
namespace UnityEngine::ProBuilder::Poly2Tri { class Triangulatable; }
namespace UnityEngine::ProBuilder::Poly2Tri { class TriangulationConstraint; }
namespace UnityEngine::ProBuilder::Poly2Tri { class TriangulationDebugContext; }
namespace UnityEngine::ProBuilder::Poly2Tri { class TriangulationPoint; }

#define UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONCONTEXT_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A686E80)
#define UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONCONTEXT_DONE_OFFSET UNITYSDK_OFFSET(0x1A680130)
#define UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONCONTEXT_GET_DEBUGCONTEXT_OFFSET UNITYSDK_OFFSET(0x1A689430)
#define UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONCONTEXT_GET_DTDEBUGCONTEXT_OFFSET UNITYSDK_OFFSET(0x1A6803B0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONCONTEXT_GET_ISDEBUGENABLED_OFFSET UNITYSDK_OFFSET(0x1A6894A0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONCONTEXT_GET_STEPCOUNT_OFFSET UNITYSDK_OFFSET(0x1A689480)
#define UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONCONTEXT_GET_TRIANGULATABLE_OFFSET UNITYSDK_OFFSET(0x1A689460)
#define UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONCONTEXT_GET_TRIANGULATIONMODE_OFFSET UNITYSDK_OFFSET(0x1A689440)
#define UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONCONTEXT_PREPARETRIANGULATION_OFFSET UNITYSDK_OFFSET(0x1A6871D0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONCONTEXT_SET_STEPCOUNT_OFFSET UNITYSDK_OFFSET(0x1A689490)
#define UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONCONTEXT_SET_TRIANGULATABLE_OFFSET UNITYSDK_OFFSET(0x1A689470)
#define UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONCONTEXT_SET_TRIANGULATIONMODE_OFFSET UNITYSDK_OFFSET(0x1A689450)
#define UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONCONTEXT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A680680)
#define UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A686B80)

namespace UnityEngine::ProBuilder::Poly2Tri
{
	inline static constexpr unsigned int TriangulationContext_TypeDefinitionIndex = 35514;

	class TriangulationContext : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* Triangles; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* Points; // 0x18
		::UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext* _DebugContext_k__BackingField; // 0x20
		::UnityEngine::ProBuilder::Poly2Tri::Triangulatable* _Triangulatable_k__BackingField; // 0x28
		::System::Int32 _StepCount_k__BackingField; // 0x30
		::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode _TriangulationMode_k__BackingField; // 0x34
		::System::Boolean _IsDebugEnabled_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONCONTEXT__CTOR_OFFSET))(this);
		}

		::UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext* get_DebugContext()
		{
			return ((::UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONCONTEXT_GET_DEBUGCONTEXT_OFFSET))(this);
		}

		::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode get_TriangulationMode()
		{
			return ((::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONCONTEXT_GET_TRIANGULATIONMODE_OFFSET))(this);
		}

		::System::Void set_TriangulationMode(::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONCONTEXT_SET_TRIANGULATIONMODE_OFFSET))(this, value);
		}

		::UnityEngine::ProBuilder::Poly2Tri::Triangulatable* get_Triangulatable()
		{
			return ((::UnityEngine::ProBuilder::Poly2Tri::Triangulatable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONCONTEXT_GET_TRIANGULATABLE_OFFSET))(this);
		}

		::System::Void set_Triangulatable(::UnityEngine::ProBuilder::Poly2Tri::Triangulatable* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::Triangulatable*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONCONTEXT_SET_TRIANGULATABLE_OFFSET))(this, value);
		}

		::System::Int32 get_StepCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONCONTEXT_GET_STEPCOUNT_OFFSET))(this);
		}

		::System::Void set_StepCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONCONTEXT_SET_STEPCOUNT_OFFSET))(this, value);
		}

		::System::Void Done()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONCONTEXT_DONE_OFFSET))(this);
		}

		::System::Void PrepareTriangulation(::UnityEngine::ProBuilder::Poly2Tri::Triangulatable* t)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::Triangulatable*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONCONTEXT_PREPARETRIANGULATION_OFFSET))(this, t);
		}

		::System::Void Update(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONCONTEXT_UPDATE_OFFSET))(this, message);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONCONTEXT_CLEAR_OFFSET))(this);
		}

		::System::Boolean get_IsDebugEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONCONTEXT_GET_ISDEBUGENABLED_OFFSET))(this);
		}

		::UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext* get_DTDebugContext()
		{
			return ((::UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONCONTEXT_GET_DTDEBUGCONTEXT_OFFSET))(this);
		}
	};
}
