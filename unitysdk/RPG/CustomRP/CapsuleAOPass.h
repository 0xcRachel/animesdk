#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace RPG::CustomRP { class CRPRendererData; }
namespace System { class String; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CUSTOMRP_CAPSULEAOPASS_BUFFERDISPOSE_OFFSET UNITYSDK_OFFSET(0x1636C0A0)
#define RPG_CUSTOMRP_CAPSULEAOPASS_COMPUTEHIZLEVEL_OFFSET UNITYSDK_OFFSET(0x1637F3E0)
#define RPG_CUSTOMRP_CAPSULEAOPASS_CREATERES_OFFSET UNITYSDK_OFFSET(0x16372480)
#define RPG_CUSTOMRP_CAPSULEAOPASS_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x16372F20)
#define RPG_CUSTOMRP_CAPSULEAOPASS_GETHIZTEXSIZE_OFFSET UNITYSDK_OFFSET(0x1637F1F0)
#define RPG_CUSTOMRP_CAPSULEAOPASS_INNEREXCUTE_OFFSET UNITYSDK_OFFSET(0x16372560)
#define RPG_CUSTOMRP_CAPSULEAOPASS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1637F410)
#define RPG_CUSTOMRP_CAPSULEAOPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x16366CB0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CapsuleAOPass_TypeDefinitionIndex = 28298;

	class CapsuleAOPass : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__CapsuleMainCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CapsuleAOPass_TypeDefinitionIndex)->GetStaticField(0xD990);
		}
		// static const ::System::String* _Tag; // 0x0
		::UnityEngine::Texture2D* capsuleBakeTex; // 0x10
		::UnityEngine::ComputeShader* cs_CapsuleAO; // 0x18
		::UnityEngine::ComputeBuffer* _DynamicOccluderBuffer; // 0x20
		::UnityEngine::ComputeBuffer* _OccluderListBufferRW; // 0x28
		::System::Int32 _OccluderListLookupTextureRW; // 0x30
		::UnityEngine::RenderTextureDescriptor _CapsuleCoutDesc; // 0x34

		::System::Void _ctor(::RPG::CustomRP::CRPRendererData* renderData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPRendererData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPSULEAOPASS__CTOR_OFFSET))(this, renderData);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPSULEAOPASS__CCTOR_OFFSET))();
		}

		::System::Boolean CreateRes(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPSULEAOPASS_CREATERES_OFFSET))(this, cmd);
		}

		::System::Void InnerExcute(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Camera* cam_cur)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPSULEAOPASS_INNEREXCUTE_OFFSET))(this, cmd, cam_cur);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPSULEAOPASS_FRAMECLEANUP_OFFSET))(this, cmd);
		}

		::System::Void BufferDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPSULEAOPASS_BUFFERDISPOSE_OFFSET))(this);
		}

		::UnityEngine::Vector2Int GetHiZTexSize()
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPSULEAOPASS_GETHIZTEXSIZE_OFFSET))(this);
		}

		::System::Int32 ComputeHiZLevel(::System::Single pixelPerTile)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPSULEAOPASS_COMPUTEHIZLEVEL_OFFSET))(this, pixelPerTile);
		}
	};
}
