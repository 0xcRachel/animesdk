#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Collider2D.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_POLYGONCOLLIDER2D_CREATEPRIMITIVE_1_OFFSET UNITYSDK_OFFSET(0x18287F90)
#define UNITYENGINE_POLYGONCOLLIDER2D_CREATEPRIMITIVE_2_OFFSET UNITYSDK_OFFSET(0x18287E00)
#define UNITYENGINE_POLYGONCOLLIDER2D_CREATEPRIMITIVE_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x18287FD0)
#define UNITYENGINE_POLYGONCOLLIDER2D_CREATEPRIMITIVE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x18287FA0)
#define UNITYENGINE_POLYGONCOLLIDER2D_CREATEPRIMITIVE_OFFSET UNITYSDK_OFFSET(0x18287DE0)
#define UNITYENGINE_POLYGONCOLLIDER2D_GETPATHLIST_INTERNAL_OFFSET UNITYSDK_OFFSET(0x18287D20)
#define UNITYENGINE_POLYGONCOLLIDER2D_GETPATH_1_OFFSET UNITYSDK_OFFSET(0x18287C10)
#define UNITYENGINE_POLYGONCOLLIDER2D_GETPATH_INTERNAL_OFFSET UNITYSDK_OFFSET(0x18287B50)
#define UNITYENGINE_POLYGONCOLLIDER2D_GETPATH_OFFSET UNITYSDK_OFFSET(0x18287A50)
#define UNITYENGINE_POLYGONCOLLIDER2D_GETTOTALPOINTCOUNT_OFFSET UNITYSDK_OFFSET(0x18287A00)
#define UNITYENGINE_POLYGONCOLLIDER2D_GET_AUTOTILING_OFFSET UNITYSDK_OFFSET(0x182879E0)
#define UNITYENGINE_POLYGONCOLLIDER2D_GET_PATHCOUNT_OFFSET UNITYSDK_OFFSET(0x18287A30)
#define UNITYENGINE_POLYGONCOLLIDER2D_GET_POINTS_OFFSET UNITYSDK_OFFSET(0x18287A10)
#define UNITYENGINE_POLYGONCOLLIDER2D_SETPATHLIST_INTERNAL_OFFSET UNITYSDK_OFFSET(0x18287DD0)
#define UNITYENGINE_POLYGONCOLLIDER2D_SETPATH_1_OFFSET UNITYSDK_OFFSET(0x18287D30)
#define UNITYENGINE_POLYGONCOLLIDER2D_SETPATH_INTERNAL_OFFSET UNITYSDK_OFFSET(0x18287C00)
#define UNITYENGINE_POLYGONCOLLIDER2D_SETPATH_OFFSET UNITYSDK_OFFSET(0x18287B60)
#define UNITYENGINE_POLYGONCOLLIDER2D_SET_AUTOTILING_OFFSET UNITYSDK_OFFSET(0x182879F0)
#define UNITYENGINE_POLYGONCOLLIDER2D_SET_PATHCOUNT_OFFSET UNITYSDK_OFFSET(0x18287A40)
#define UNITYENGINE_POLYGONCOLLIDER2D_SET_POINTS_OFFSET UNITYSDK_OFFSET(0x18287A20)
#define UNITYENGINE_POLYGONCOLLIDER2D__CTOR_OFFSET UNITYSDK_OFFSET(0x18287FE0)

namespace UnityEngine
{
	inline static constexpr unsigned int PolygonCollider2D_TypeDefinitionIndex = 5094;

	class PolygonCollider2D : public ::UnityEngine::Collider2D
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_POLYGONCOLLIDER2D__CTOR_OFFSET))(this);
		}

		::System::Boolean get_autoTiling()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_POLYGONCOLLIDER2D_GET_AUTOTILING_OFFSET))(this);
		}

		::System::Void set_autoTiling(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_POLYGONCOLLIDER2D_SET_AUTOTILING_OFFSET))(this, value);
		}

		::System::Int32 GetTotalPointCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_POLYGONCOLLIDER2D_GETTOTALPOINTCOUNT_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector2>* get_points()
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_POLYGONCOLLIDER2D_GET_POINTS_OFFSET))(this);
		}

		::System::Void set_points(::Il2CppArray<::UnityEngine::Vector2>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_POLYGONCOLLIDER2D_SET_POINTS_OFFSET))(this, value);
		}

		::System::Int32 get_pathCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_POLYGONCOLLIDER2D_GET_PATHCOUNT_OFFSET))(this);
		}

		::System::Void set_pathCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_POLYGONCOLLIDER2D_SET_PATHCOUNT_OFFSET))(this, value);
		}

		::Il2CppArray<::UnityEngine::Vector2>* GetPath(::System::Int32 index)
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_POLYGONCOLLIDER2D_GETPATH_OFFSET))(this, index);
		}

		::Il2CppArray<::UnityEngine::Vector2>* GetPath_Internal(::System::Int32 index)
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_POLYGONCOLLIDER2D_GETPATH_INTERNAL_OFFSET))(this, index);
		}

		::System::Void SetPath(::System::Int32 index, ::Il2CppArray<::UnityEngine::Vector2>* points)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_POLYGONCOLLIDER2D_SETPATH_OFFSET))(this, index, points);
		}

		::System::Void SetPath_Internal(::System::Int32 index, ::Il2CppArray<::UnityEngine::Vector2>* points)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_POLYGONCOLLIDER2D_SETPATH_INTERNAL_OFFSET))(this, index, points);
		}

		::System::Int32 GetPath_1(::System::Int32 index, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* points)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_POLYGONCOLLIDER2D_GETPATH_1_OFFSET))(this, index, points);
		}

		::System::Int32 GetPathList_Internal(::System::Int32 index, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* points)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_POLYGONCOLLIDER2D_GETPATHLIST_INTERNAL_OFFSET))(this, index, points);
		}

		::System::Void SetPath_1(::System::Int32 index, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* points)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_POLYGONCOLLIDER2D_SETPATH_1_OFFSET))(this, index, points);
		}

		::System::Void SetPathList_Internal(::System::Int32 index, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* points)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_POLYGONCOLLIDER2D_SETPATHLIST_INTERNAL_OFFSET))(this, index, points);
		}

		::System::Void CreatePrimitive(::System::Int32 sides)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_POLYGONCOLLIDER2D_CREATEPRIMITIVE_OFFSET))(this, sides);
		}

		::System::Void CreatePrimitive_1(::System::Int32 sides, ::UnityEngine::Vector2 scale)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_POLYGONCOLLIDER2D_CREATEPRIMITIVE_1_OFFSET))(this, sides, scale);
		}

		::System::Void CreatePrimitive_2(::System::Int32 sides, ::UnityEngine::Vector2 scale, ::UnityEngine::Vector2 offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_POLYGONCOLLIDER2D_CREATEPRIMITIVE_2_OFFSET))(this, sides, scale, offset);
		}

		::System::Void CreatePrimitive_Internal(::System::Int32 sides, ::UnityEngine::Vector2 scale, ::UnityEngine::Vector2 offset, ::System::Boolean autoRefresh)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_POLYGONCOLLIDER2D_CREATEPRIMITIVE_INTERNAL_OFFSET))(this, sides, scale, offset, autoRefresh);
		}

		::System::Void CreatePrimitive_Internal_Injected(::System::Int32 sides, ::UnityEngine::Vector2& scale, ::UnityEngine::Vector2& offset, ::System::Boolean autoRefresh)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_POLYGONCOLLIDER2D_CREATEPRIMITIVE_INTERNAL_INJECTED_OFFSET))(this, sides, scale, offset, autoRefresh);
		}
	};
}
