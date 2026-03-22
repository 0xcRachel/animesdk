#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/Edge.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define UNITYENGINE_PROBUILDER_BOUNDS2D_CENTER_1_OFFSET UNITYSDK_OFFSET(0x17FA7AB0)
#define UNITYENGINE_PROBUILDER_BOUNDS2D_CENTER_2_OFFSET UNITYSDK_OFFSET(0x17FA8700)
#define UNITYENGINE_PROBUILDER_BOUNDS2D_CENTER_OFFSET UNITYSDK_OFFSET(0x17FA76C0)
#define UNITYENGINE_PROBUILDER_BOUNDS2D_CONTAINSPOINT_OFFSET UNITYSDK_OFFSET(0x17FA7120)
#define UNITYENGINE_PROBUILDER_BOUNDS2D_GET_CORNERS_OFFSET UNITYSDK_OFFSET(0x17FA6280)
#define UNITYENGINE_PROBUILDER_BOUNDS2D_GET_EXTENTS_OFFSET UNITYSDK_OFFSET(0x17FA6270)
#define UNITYENGINE_PROBUILDER_BOUNDS2D_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x17FA6240)
#define UNITYENGINE_PROBUILDER_BOUNDS2D_INTERSECTSLINESEGMENT_OFFSET UNITYSDK_OFFSET(0x17FA7180)
#define UNITYENGINE_PROBUILDER_BOUNDS2D_INTERSECTS_1_OFFSET UNITYSDK_OFFSET(0x17FA7670)
#define UNITYENGINE_PROBUILDER_BOUNDS2D_INTERSECTS_OFFSET UNITYSDK_OFFSET(0x17FA7600)
#define UNITYENGINE_PROBUILDER_BOUNDS2D_SETWITHPOINTS_1_OFFSET UNITYSDK_OFFSET(0x17FA67D0)
#define UNITYENGINE_PROBUILDER_BOUNDS2D_SETWITHPOINTS_OFFSET UNITYSDK_OFFSET(0x17FA63E0)
#define UNITYENGINE_PROBUILDER_BOUNDS2D_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x17FA6250)
#define UNITYENGINE_PROBUILDER_BOUNDS2D_SIZE_OFFSET UNITYSDK_OFFSET(0x17FA80E0)
#define UNITYENGINE_PROBUILDER_BOUNDS2D_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17FA8D50)
#define UNITYENGINE_PROBUILDER_BOUNDS2D__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17FA6390)
#define UNITYENGINE_PROBUILDER_BOUNDS2D__CTOR_2_OFFSET UNITYSDK_OFFSET(0x17FA63B0)
#define UNITYENGINE_PROBUILDER_BOUNDS2D__CTOR_3_OFFSET UNITYSDK_OFFSET(0x17FA67A0)
#define UNITYENGINE_PROBUILDER_BOUNDS2D__CTOR_4_OFFSET UNITYSDK_OFFSET(0x17FA6EC0)
#define UNITYENGINE_PROBUILDER_BOUNDS2D__CTOR_5_OFFSET UNITYSDK_OFFSET(0x17FA7020)
#define UNITYENGINE_PROBUILDER_BOUNDS2D__CTOR_OFFSET UNITYSDK_OFFSET(0x17FA6360)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int Bounds2D_TypeDefinitionIndex = 33086;

	class Bounds2D : public ::System::Object
	{
	public:
		::UnityEngine::Vector2 center; // 0x10
		::UnityEngine::Vector2 m_Extents; // 0x18
		::UnityEngine::Vector2 m_Size; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BOUNDS2D__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Vector2 center, ::UnityEngine::Vector2 size)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BOUNDS2D__CTOR_1_OFFSET))(this, center, size);
		}

		::System::Void _ctor_2(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* points)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BOUNDS2D__CTOR_2_OFFSET))(this, points);
		}

		::System::Void _ctor_3(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* points, ::System::Collections::Generic::IList_1<::System::Int32>* indexes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BOUNDS2D__CTOR_3_OFFSET))(this, points, indexes);
		}

		::System::Void _ctor_4(::Il2CppArray<::UnityEngine::Vector3>* points, ::Il2CppArray<::UnityEngine::ProBuilder::Edge>* edges)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::ProBuilder::Edge>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BOUNDS2D__CTOR_4_OFFSET))(this, points, edges);
		}

		::System::Void _ctor_5(::Il2CppArray<::UnityEngine::Vector2>* points, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector2>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BOUNDS2D__CTOR_5_OFFSET))(this, points, length);
		}

		::UnityEngine::Vector2 get_size()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BOUNDS2D_GET_SIZE_OFFSET))(this);
		}

		::System::Void set_size(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BOUNDS2D_SET_SIZE_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_extents()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BOUNDS2D_GET_EXTENTS_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector2>* get_corners()
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BOUNDS2D_GET_CORNERS_OFFSET))(this);
		}

		::System::Boolean ContainsPoint(::UnityEngine::Vector2 point)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BOUNDS2D_CONTAINSPOINT_OFFSET))(this, point);
		}

		::System::Boolean IntersectsLineSegment(::UnityEngine::Vector2 lineStart, ::UnityEngine::Vector2 lineEnd)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BOUNDS2D_INTERSECTSLINESEGMENT_OFFSET))(this, lineStart, lineEnd);
		}

		::System::Boolean Intersects(::UnityEngine::ProBuilder::Bounds2D* bounds)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::Bounds2D*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BOUNDS2D_INTERSECTS_OFFSET))(this, bounds);
		}

		::System::Boolean Intersects_1(::UnityEngine::Rect rect)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BOUNDS2D_INTERSECTS_1_OFFSET))(this, rect);
		}

		::System::Void SetWithPoints(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* points)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BOUNDS2D_SETWITHPOINTS_OFFSET))(this, points);
		}

		::System::Void SetWithPoints_1(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* points, ::System::Collections::Generic::IList_1<::System::Int32>* indexes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BOUNDS2D_SETWITHPOINTS_1_OFFSET))(this, points, indexes);
		}

		static ::UnityEngine::Vector2 Center(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* points)
		{
			return ((::UnityEngine::Vector2(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BOUNDS2D_CENTER_OFFSET))(points);
		}

		static ::UnityEngine::Vector2 Center_1(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* points, ::System::Collections::Generic::IList_1<::System::Int32>* indexes)
		{
			return ((::UnityEngine::Vector2(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BOUNDS2D_CENTER_1_OFFSET))(points, indexes);
		}

		static ::UnityEngine::Vector2 Size(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* points, ::System::Collections::Generic::IList_1<::System::Int32>* indexes)
		{
			return ((::UnityEngine::Vector2(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BOUNDS2D_SIZE_OFFSET))(points, indexes);
		}

		static ::UnityEngine::Vector2 Center_2(::System::Collections::Generic::IList_1<::UnityEngine::Vector4>* points, ::System::Collections::Generic::IEnumerable_1<::System::Int32>* indexes)
		{
			return ((::UnityEngine::Vector2(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector4>*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BOUNDS2D_CENTER_2_OFFSET))(points, indexes);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BOUNDS2D_TOSTRING_OFFSET))(this);
		}
	};
}
