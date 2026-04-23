#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/RenderPipeline.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace RPG::CustomRP { class CRPPipelineBase_DelayReleaseInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Object; }

#define RPG_CUSTOMRP_CRPPIPELINEBASE_ADDDELAYRELEASEOBJ_OFFSET UNITYSDK_OFFSET(0x1525C570)
#define RPG_CUSTOMRP_CRPPIPELINEBASE_ADDOPAQUETEXTUREREQUEST_OFFSET UNITYSDK_OFFSET(0x1525C4F0)
#define RPG_CUSTOMRP_CRPPIPELINEBASE_ADDTRANSPARENTTEXTUREREQUEST_OFFSET UNITYSDK_OFFSET(0x1525C520)
#define RPG_CUSTOMRP_CRPPIPELINEBASE_GET_OPAQUETEXTUREREQUIRECOUNT_OFFSET UNITYSDK_OFFSET(0x1525C690)
#define RPG_CUSTOMRP_CRPPIPELINEBASE_GET_TRANSPARENTTEXTUREREQUIRECOUNT_OFFSET UNITYSDK_OFFSET(0x1525C6A0)
#define RPG_CUSTOMRP_CRPPIPELINEBASE_ONCHANGEENV_OFFSET UNITYSDK_OFFSET(0x1525C560)
#define RPG_CUSTOMRP_CRPPIPELINEBASE_ONENTERSCENE_OFFSET UNITYSDK_OFFSET(0x1525C550)
#define RPG_CUSTOMRP_CRPPIPELINEBASE_ONRELEASEOBJS_OFFSET UNITYSDK_OFFSET(0x1525C6B0)
#define RPG_CUSTOMRP_CRPPIPELINEBASE_RELEASEOPAQUETEXTUREREQUEST_OFFSET UNITYSDK_OFFSET(0x1525C500)
#define RPG_CUSTOMRP_CRPPIPELINEBASE_RELEASETRANSPARENTTEXTUREREQUEST_OFFSET UNITYSDK_OFFSET(0x1525C530)
#define RPG_CUSTOMRP_CRPPIPELINEBASE_RENDER_OFFSET UNITYSDK_OFFSET(0x1525C680)
#define RPG_CUSTOMRP_CRPPIPELINEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1524AEA0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CRPPipelineBase_TypeDefinitionIndex = 34936;

	class CRPPipelineBase : public ::UnityEngine::Rendering::RenderPipeline
	{
	public:
		static ::System::Int32* StaticGet__TransparentTextureRequireCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CRPPipelineBase_TypeDefinitionIndex)->GetStaticField(0x101B0);
		}
		static ::System::Int32* StaticGet__OpaqueTextureRequireCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CRPPipelineBase_TypeDefinitionIndex)->GetStaticField(0x101B4);
		}
		::System::Collections::Generic::List_1<::RPG::CustomRP::CRPPipelineBase_DelayReleaseInfo*>* _DelayReleaseObjs; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPPIPELINEBASE__CTOR_OFFSET))(this);
		}

		::System::Void AddOpaqueTextureRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPPIPELINEBASE_ADDOPAQUETEXTUREREQUEST_OFFSET))(this);
		}

		::System::Void ReleaseOpaqueTextureRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPPIPELINEBASE_RELEASEOPAQUETEXTUREREQUEST_OFFSET))(this);
		}

		::System::Void AddTransparentTextureRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPPIPELINEBASE_ADDTRANSPARENTTEXTUREREQUEST_OFFSET))(this);
		}

		::System::Void ReleaseTransparentTextureRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPPIPELINEBASE_RELEASETRANSPARENTTEXTUREREQUEST_OFFSET))(this);
		}

		::System::Void OnEnterScene()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPPIPELINEBASE_ONENTERSCENE_OFFSET))(this);
		}

		::System::Void OnChangeEnv(::System::Boolean isLeaveScene)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPPIPELINEBASE_ONCHANGEENV_OFFSET))(this, isLeaveScene);
		}

		::System::Void AddDelayReleaseObj(::UnityEngine::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPPIPELINEBASE_ADDDELAYRELEASEOBJ_OFFSET))(this, obj);
		}

		::System::Void Render(::UnityEngine::Rendering::ScriptableRenderContext renderContext, ::Il2CppArray<::UnityEngine::Camera*>* cameras)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext, ::Il2CppArray<::UnityEngine::Camera*>*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPPIPELINEBASE_RENDER_OFFSET))(this, renderContext, cameras);
		}

		::System::Int32 get_opaqueTextureRequireCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPPIPELINEBASE_GET_OPAQUETEXTUREREQUIRECOUNT_OFFSET))(this);
		}

		::System::Int32 get_transparentTextureRequireCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPPIPELINEBASE_GET_TRANSPARENTTEXTUREREQUIRECOUNT_OFFSET))(this);
		}

		::System::Void OnReleaseObjs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPPIPELINEBASE_ONRELEASEOBJS_OFFSET))(this);
		}
	};
}
