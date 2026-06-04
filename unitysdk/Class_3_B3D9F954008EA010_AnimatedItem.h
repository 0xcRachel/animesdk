#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_B3D9F954008EA010_AnimatedInstance;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define CLASS_3_B3D9F954008EA010_ANIMATEDITEM_GET_ANIMATEDINSTANCEMATRIXLISTS_OFFSET UNITYSDK_OFFSET(0x14AC49F0)
#define CLASS_3_B3D9F954008EA010_ANIMATEDITEM_GET_ARGSBUFFER_OFFSET UNITYSDK_OFFSET(0x14AC4A40)
#define CLASS_3_B3D9F954008EA010_ANIMATEDITEM_GET_CURRENTINSTANCECOUNT_OFFSET UNITYSDK_OFFSET(0x14AC4A80)
#define CLASS_3_B3D9F954008EA010_ANIMATEDITEM_GET_CURVEBOUNDSINITIALIZED_OFFSET UNITYSDK_OFFSET(0x14AC4AF0)
#define CLASS_3_B3D9F954008EA010_ANIMATEDITEM_GET_INSTANCEBOUNDS_OFFSET UNITYSDK_OFFSET(0x14AC4AA0)
#define CLASS_3_B3D9F954008EA010_ANIMATEDITEM_GET_INSTANCEMATRIXBUFFER_OFFSET UNITYSDK_OFFSET(0x14AC4A20)
#define CLASS_3_B3D9F954008EA010_ANIMATEDITEM_GET_INSTANCERELATIVEDATABUFFER_OFFSET UNITYSDK_OFFSET(0x14AC4B10)
#define CLASS_3_B3D9F954008EA010_ANIMATEDITEM_GET_LASTBOUNDSUPDATEFRAME_OFFSET UNITYSDK_OFFSET(0x14AC4AD0)
#define CLASS_3_B3D9F954008EA010_ANIMATEDITEM_GET_LASTINSTANCECOUNT_OFFSET UNITYSDK_OFFSET(0x14AC4A00)
#define CLASS_3_B3D9F954008EA010_ANIMATEDITEM_GET_MATERIALS_OFFSET UNITYSDK_OFFSET(0x14AC13D0)
#define CLASS_3_B3D9F954008EA010_ANIMATEDITEM_GET_MESH_OFFSET UNITYSDK_OFFSET(0x14AC14B0)
#define CLASS_3_B3D9F954008EA010_ANIMATEDITEM_GET_PERCENTAGEOFLINEBUFFER_OFFSET UNITYSDK_OFFSET(0x14AC4A60)
#define CLASS_3_B3D9F954008EA010_ANIMATEDITEM_GET_SUBMESHCOUNT_OFFSET UNITYSDK_OFFSET(0x14AC1590)
#define CLASS_3_B3D9F954008EA010_ANIMATEDITEM_METHOD_1_1BBB005414AEB64F_OFFSET UNITYSDK_OFFSET(0x14AC31D0)
#define CLASS_3_B3D9F954008EA010_ANIMATEDITEM_SET_ARGSBUFFER_OFFSET UNITYSDK_OFFSET(0x14AC4A50)
#define CLASS_3_B3D9F954008EA010_ANIMATEDITEM_SET_CURRENTINSTANCECOUNT_OFFSET UNITYSDK_OFFSET(0x14AC4A90)
#define CLASS_3_B3D9F954008EA010_ANIMATEDITEM_SET_CURVEBOUNDSINITIALIZED_OFFSET UNITYSDK_OFFSET(0x14AC4B00)
#define CLASS_3_B3D9F954008EA010_ANIMATEDITEM_SET_INSTANCEBOUNDS_OFFSET UNITYSDK_OFFSET(0x14AC4AC0)
#define CLASS_3_B3D9F954008EA010_ANIMATEDITEM_SET_INSTANCEMATRIXBUFFER_OFFSET UNITYSDK_OFFSET(0x14AC4A30)
#define CLASS_3_B3D9F954008EA010_ANIMATEDITEM_SET_INSTANCERELATIVEDATABUFFER_OFFSET UNITYSDK_OFFSET(0x14AC4B20)
#define CLASS_3_B3D9F954008EA010_ANIMATEDITEM_SET_LASTBOUNDSUPDATEFRAME_OFFSET UNITYSDK_OFFSET(0x14AC4AE0)
#define CLASS_3_B3D9F954008EA010_ANIMATEDITEM_SET_LASTINSTANCECOUNT_OFFSET UNITYSDK_OFFSET(0x14AC4A10)
#define CLASS_3_B3D9F954008EA010_ANIMATEDITEM_SET_MATERIALS_OFFSET UNITYSDK_OFFSET(0x14AC49E0)
#define CLASS_3_B3D9F954008EA010_ANIMATEDITEM_SET_MESH_OFFSET UNITYSDK_OFFSET(0x14AC49D0)
#define CLASS_3_B3D9F954008EA010_ANIMATEDITEM_SET_PERCENTAGEOFLINEBUFFER_OFFSET UNITYSDK_OFFSET(0x14AC4A70)
#define CLASS_3_B3D9F954008EA010_ANIMATEDITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x14AC46E0)

inline static constexpr unsigned int Class_3_B3D9F954008EA010_AnimatedItem_TypeDefinitionIndex = 65753;

class Class_3_B3D9F954008EA010_AnimatedItem : public ::System::Object
{
public:
	::UnityEngine::GameObject* GameObject; // 0x10
	::UnityEngine::Vector3 LossyScale; // 0x18
	::System::Boolean EnableInstancing; // 0x24
	::UnityEngine::Mesh* _Mesh; // 0x28
	::Il2CppArray<::UnityEngine::Material*>* _Materials; // 0x30
	::System::Collections::Generic::List_1<::Class_3_B3D9F954008EA010_AnimatedInstance*>* AnimatedInstances; // 0x38
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>* _AnimatedInstanceMatrixLists; // 0x40
	::System::Int32 _lastInstanceCount; // 0x48
	::UnityEngine::ComputeBuffer* _InstanceMatrixBuffer; // 0x50
	::UnityEngine::ComputeBuffer* _ArgsBuffer; // 0x58
	::UnityEngine::ComputeBuffer* _PercentageOfLineBuffer; // 0x60
	::System::Int32 _CurrentInstanceCount; // 0x68
	::UnityEngine::Bounds _InstanceBounds; // 0x6C
	::System::Int32 _lastBoundsUpdateFrame; // 0x84
	::System::Boolean _curveBoundsInitialized; // 0x88
	::UnityEngine::ComputeBuffer* _instanceRelativeDataBuffer; // 0x90

	::System::Void _ctor(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_3_B3D9F954008EA010_ANIMATEDITEM__CTOR_OFFSET))(this, a1);
	}

	::UnityEngine::Mesh* get_Mesh()
	{
		return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3D9F954008EA010_ANIMATEDITEM_GET_MESH_OFFSET))(this);
	}

	::System::Void set_Mesh(::UnityEngine::Mesh* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + CLASS_3_B3D9F954008EA010_ANIMATEDITEM_SET_MESH_OFFSET))(this, a1);
	}

	::Il2CppArray<::UnityEngine::Material*>* get_Materials()
	{
		return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3D9F954008EA010_ANIMATEDITEM_GET_MATERIALS_OFFSET))(this);
	}

	::System::Void set_Materials(::Il2CppArray<::UnityEngine::Material*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + CLASS_3_B3D9F954008EA010_ANIMATEDITEM_SET_MATERIALS_OFFSET))(this, a1);
	}

	::System::Int32 get_SubMeshCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3D9F954008EA010_ANIMATEDITEM_GET_SUBMESHCOUNT_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>* get_AnimatedInstanceMatrixLists()
	{
		return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3D9F954008EA010_ANIMATEDITEM_GET_ANIMATEDINSTANCEMATRIXLISTS_OFFSET))(this);
	}

	::System::Int32 get_LastInstanceCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3D9F954008EA010_ANIMATEDITEM_GET_LASTINSTANCECOUNT_OFFSET))(this);
	}

	::System::Void set_LastInstanceCount(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_B3D9F954008EA010_ANIMATEDITEM_SET_LASTINSTANCECOUNT_OFFSET))(this, a1);
	}

	::UnityEngine::ComputeBuffer* get_InstanceMatrixBuffer()
	{
		return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3D9F954008EA010_ANIMATEDITEM_GET_INSTANCEMATRIXBUFFER_OFFSET))(this);
	}

	::System::Void set_InstanceMatrixBuffer(::UnityEngine::ComputeBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + CLASS_3_B3D9F954008EA010_ANIMATEDITEM_SET_INSTANCEMATRIXBUFFER_OFFSET))(this, a1);
	}

	::UnityEngine::ComputeBuffer* get_ArgsBuffer()
	{
		return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3D9F954008EA010_ANIMATEDITEM_GET_ARGSBUFFER_OFFSET))(this);
	}

	::System::Void set_ArgsBuffer(::UnityEngine::ComputeBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + CLASS_3_B3D9F954008EA010_ANIMATEDITEM_SET_ARGSBUFFER_OFFSET))(this, a1);
	}

	::UnityEngine::ComputeBuffer* get_PercentageOfLineBuffer()
	{
		return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3D9F954008EA010_ANIMATEDITEM_GET_PERCENTAGEOFLINEBUFFER_OFFSET))(this);
	}

	::System::Void set_PercentageOfLineBuffer(::UnityEngine::ComputeBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + CLASS_3_B3D9F954008EA010_ANIMATEDITEM_SET_PERCENTAGEOFLINEBUFFER_OFFSET))(this, a1);
	}

	::System::Int32 get_CurrentInstanceCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3D9F954008EA010_ANIMATEDITEM_GET_CURRENTINSTANCECOUNT_OFFSET))(this);
	}

	::System::Void set_CurrentInstanceCount(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_B3D9F954008EA010_ANIMATEDITEM_SET_CURRENTINSTANCECOUNT_OFFSET))(this, a1);
	}

	::UnityEngine::Bounds get_InstanceBounds()
	{
		return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3D9F954008EA010_ANIMATEDITEM_GET_INSTANCEBOUNDS_OFFSET))(this);
	}

	::System::Void set_InstanceBounds(::UnityEngine::Bounds a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + CLASS_3_B3D9F954008EA010_ANIMATEDITEM_SET_INSTANCEBOUNDS_OFFSET))(this, a1);
	}

	::System::Int32 get_LastBoundsUpdateFrame()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3D9F954008EA010_ANIMATEDITEM_GET_LASTBOUNDSUPDATEFRAME_OFFSET))(this);
	}

	::System::Void set_LastBoundsUpdateFrame(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_B3D9F954008EA010_ANIMATEDITEM_SET_LASTBOUNDSUPDATEFRAME_OFFSET))(this, a1);
	}

	::System::Boolean get_CurveBoundsInitialized()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3D9F954008EA010_ANIMATEDITEM_GET_CURVEBOUNDSINITIALIZED_OFFSET))(this);
	}

	::System::Void set_CurveBoundsInitialized(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_B3D9F954008EA010_ANIMATEDITEM_SET_CURVEBOUNDSINITIALIZED_OFFSET))(this, a1);
	}

	::UnityEngine::ComputeBuffer* get_InstanceRelativeDataBuffer()
	{
		return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3D9F954008EA010_ANIMATEDITEM_GET_INSTANCERELATIVEDATABUFFER_OFFSET))(this);
	}

	::System::Void set_InstanceRelativeDataBuffer(::UnityEngine::ComputeBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + CLASS_3_B3D9F954008EA010_ANIMATEDITEM_SET_INSTANCERELATIVEDATABUFFER_OFFSET))(this, a1);
	}

	::System::Void Method_1_1BBB005414AEB64F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3D9F954008EA010_ANIMATEDITEM_METHOD_1_1BBB005414AEB64F_OFFSET))(this);
	}
};
