#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/AvatarEffectInfo_EExecutionOrder.h"
#include "unitysdk/System/Object.h"

namespace RPG::CustomRP { class AvatarEffectInfo_EffectMaterialGroup; }
namespace RPG::CustomRP { class CRPRendererData; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CUSTOMRP_AVATAREFFECTINFO_PERRENDEREFFECT_ADD_OFFSET UNITYSDK_OFFSET(0x15248600)
#define RPG_CUSTOMRP_AVATAREFFECTINFO_PERRENDEREFFECT_FIND_OFFSET UNITYSDK_OFFSET(0x15248C40)
#define RPG_CUSTOMRP_AVATAREFFECTINFO_PERRENDEREFFECT_REMOVE_OFFSET UNITYSDK_OFFSET(0x15248CF0)
#define RPG_CUSTOMRP_AVATAREFFECTINFO_PERRENDEREFFECT_RENDERER_OFFSET UNITYSDK_OFFSET(0x15248E90)
#define RPG_CUSTOMRP_AVATAREFFECTINFO_PERRENDEREFFECT_RESET_OFFSET UNITYSDK_OFFSET(0x15248B90)
#define RPG_CUSTOMRP_AVATAREFFECTINFO_PERRENDEREFFECT_RPG_CUSTOMRP_AVATAREFFECTINFO_IAVATAREFFECT_RENDERER_OFFSET UNITYSDK_OFFSET(0x15248EE0)
#define RPG_CUSTOMRP_AVATAREFFECTINFO_PERRENDEREFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x15248EA0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int AvatarEffectInfo_PerRenderEffect_TypeDefinitionIndex = 34973;

	class AvatarEffectInfo_PerRenderEffect : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* subMeshIndices; // 0x10
		::System::Collections::Generic::List_1<::RPG::CustomRP::AvatarEffectInfo_EffectMaterialGroup*>* effGroup; // 0x18
		::UnityEngine::Renderer* render; // 0x20
		::System::Int32 subMeshCount; // 0x28
		::RPG::CustomRP::AvatarEffectInfo_EExecutionOrder eExecutionOrder; // 0x2C
		::System::UInt32 RLM; // 0x30
		::System::Boolean ignoreMpb; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO_PERRENDEREFFECT__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO_PERRENDEREFFECT_RESET_OFFSET))(this);
		}

		::System::Boolean Find(::UnityEngine::Material* mat)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO_PERRENDEREFFECT_FIND_OFFSET))(this, mat);
		}

		::System::Boolean Remove(::UnityEngine::Material* mat)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO_PERRENDEREFFECT_REMOVE_OFFSET))(this, mat);
		}

		::System::Void Add(::UnityEngine::Material* mat, ::Il2CppArray<::System::Int32>* overridePassIDs, ::System::Boolean afterTransparent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::Il2CppArray<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO_PERRENDEREFFECT_ADD_OFFSET))(this, mat, overridePassIDs, afterTransparent);
		}

		::System::Void Renderer(::RPG::CustomRP::CRPRendererData*& renderData, ::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Boolean afterTransparent)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPRendererData*&, ::UnityEngine::Rendering::CommandBuffer*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO_PERRENDEREFFECT_RENDERER_OFFSET))(this, renderData, cmd, afterTransparent);
		}

		::System::Void RPG_CustomRP_AvatarEffectInfo_IAvatarEffect_Renderer(::RPG::CustomRP::CRPRendererData*& renderData, ::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Boolean afterTransparent)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPRendererData*&, ::UnityEngine::Rendering::CommandBuffer*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO_PERRENDEREFFECT_RPG_CUSTOMRP_AVATAREFFECTINFO_IAVATAREFFECT_RENDERER_OFFSET))(this, renderData, cmd, afterTransparent);
		}
	};
}
