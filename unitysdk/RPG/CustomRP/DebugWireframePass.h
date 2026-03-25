#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"
#include "unitysdk/UnityEngine/Rendering/CRPMainCameraDesc.h"

namespace RPG::CustomRP { class CRPRendererData; }
namespace System { class Type; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CUSTOMRP_DEBUGWIREFRAMEPASS_GETCOLOR_OFFSET UNITYSDK_OFFSET(0x16AAAFC0)
#define RPG_CUSTOMRP_DEBUGWIREFRAMEPASS_GETMESH_OFFSET UNITYSDK_OFFSET(0x16AAA9B0)
#define RPG_CUSTOMRP_DEBUGWIREFRAMEPASS_INNEREXECUTE_OFFSET UNITYSDK_OFFSET(0x16AAA180)
#define RPG_CUSTOMRP_DEBUGWIREFRAMEPASS_UPDATE_OFFSET UNITYSDK_OFFSET(0x16AAA140)
#define RPG_CUSTOMRP_DEBUGWIREFRAMEPASS__CCTOR_OFFSET UNITYSDK_OFFSET(0x16AAC5A0)
#define RPG_CUSTOMRP_DEBUGWIREFRAMEPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x16AA9E60)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int DebugWireframePass_TypeDefinitionIndex = 29185;

	class DebugWireframePass : public ::System::Object
	{
	public:
		static ::System::Type** StaticGet_colliderType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(DebugWireframePass_TypeDefinitionIndex)->GetStaticField(0x2B350);
		}
		static ::System::Boolean* StaticGet_EnableDebugColliderWireframe()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DebugWireframePass_TypeDefinitionIndex)->GetStaticField(0xBD00);
		}
		static ::System::Int32* StaticGet_layer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DebugWireframePass_TypeDefinitionIndex)->GetStaticField(0xBD04);
		}
		::UnityEngine::Material* _DebugWireframeMat; // 0x10
		::UnityEngine::Material* _DebugWireframeMatLegacy; // 0x18
		::Il2CppArray<::System::Type*>* _ColliderTypes; // 0x20
		::UnityEngine::RenderTextureDescriptor _TargetDesc; // 0x28
		::System::Int32 _WireColor; // 0x5C
		::System::Int32 _WireColorTmpRT; // 0x60
		::System::Int32 _WireframeTmpRT; // 0x64

		::System::Void _ctor(::RPG::CustomRP::CRPRendererData* renderData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPRendererData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGWIREFRAMEPASS__CTOR_OFFSET))(this, renderData);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGWIREFRAMEPASS__CCTOR_OFFSET))();
		}

		::System::Boolean Update()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGWIREFRAMEPASS_UPDATE_OFFSET))(this);
		}

		::System::Void InnerExecute(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::CRPMainCameraDesc mainCameraDesc, ::System::Single renderScale)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::CRPMainCameraDesc, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGWIREFRAMEPASS_INNEREXECUTE_OFFSET))(this, cmd, mainCameraDesc, renderScale);
		}

		::UnityEngine::Mesh* GetMesh(::UnityEngine::Collider* collider, ::UnityEngine::Matrix4x4& TSMatrix)
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID, ::UnityEngine::Collider*, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGWIREFRAMEPASS_GETMESH_OFFSET))(this, collider, TSMatrix);
		}

		::UnityEngine::Color GetColor(::UnityEngine::Collider* collider)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGWIREFRAMEPASS_GETCOLOR_OFFSET))(this, collider);
		}
	};
}
