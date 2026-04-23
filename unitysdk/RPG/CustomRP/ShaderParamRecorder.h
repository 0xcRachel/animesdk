#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/DrawCallParams.h"
#include "unitysdk/RPG/CustomRP/MaterialParams.h"
#include "unitysdk/RPG/CustomRP/ParamTable.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Rendering/RenderStateBlock.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/RenderTextureSubElement.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering { class CommandBufferExt; }

#define RPG_CUSTOMRP_SHADERPARAMRECORDER_CLEAR_OFFSET UNITYSDK_OFFSET(0x15AA3080)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_DISABLEKEYWORDANDRECORD_OFFSET UNITYSDK_OFFSET(0x15AA3930)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_DRAWMESHANDRECORD_OFFSET UNITYSDK_OFFSET(0x15AA3970)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_DRAWRENDERERANDRECORD_1_OFFSET UNITYSDK_OFFSET(0x15AA3A70)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_DRAWRENDERERANDRECORD_2_OFFSET UNITYSDK_OFFSET(0x15AA3AD0)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_DRAWRENDERERANDRECORD_3_OFFSET UNITYSDK_OFFSET(0x15AA3B20)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_DRAWRENDERERANDRECORD_OFFSET UNITYSDK_OFFSET(0x15AA3A20)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_ENABLEKEYWORDANDRECORD_OFFSET UNITYSDK_OFFSET(0x15AA3950)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_ENDCAPTURE_OFFSET UNITYSDK_OFFSET(0x15AA3330)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_ENDSESSION_OFFSET UNITYSDK_OFFSET(0x15AA34F0)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_GETDRAWCALLPARAMS_OFFSET UNITYSDK_OFFSET(0x15A632F0)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_GET_GLOBALPARAMS_OFFSET UNITYSDK_OFFSET(0x15AA3550)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_GET_ISCAPTURING_OFFSET UNITYSDK_OFFSET(0x15AA2FA0)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_GET_ISRECORDINGPARAM_OFFSET UNITYSDK_OFFSET(0x15AA2F40)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_PROPERTYTOID_OFFSET UNITYSDK_OFFSET(0x15AA3000)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_SETCOLORANDRECORD_OFFSET UNITYSDK_OFFSET(0x15AA35C0)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_SETFLOATANDRECORD_OFFSET UNITYSDK_OFFSET(0x15AA35F0)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_SETFLOATARRAYANDRECORD_1_OFFSET UNITYSDK_OFFSET(0x15AA3640)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_SETFLOATARRAYANDRECORD_OFFSET UNITYSDK_OFFSET(0x15AA3610)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_SETGLOBALCOLORANDRECORD_OFFSET UNITYSDK_OFFSET(0x15AA3BB0)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_SETGLOBALFLOATANDRECORD_OFFSET UNITYSDK_OFFSET(0x15AA3B70)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_SETGLOBALMATRIXANDRECORD_OFFSET UNITYSDK_OFFSET(0x15AA3BD0)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_SETGLOBALTEXTUREANDRECORD_1_OFFSET UNITYSDK_OFFSET(0x15AA3D10)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_SETGLOBALTEXTUREANDRECORD_OFFSET UNITYSDK_OFFSET(0x15AA3C10)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_SETGLOBALVECTORANDRECORD_OFFSET UNITYSDK_OFFSET(0x15AA3B90)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_SETGLOBALVECTORARRAYANDRECORD_OFFSET UNITYSDK_OFFSET(0x15AA3BF0)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_SETINTANDRECORD_OFFSET UNITYSDK_OFFSET(0x15AA36C0)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_SETMATRIXANDRECORD_OFFSET UNITYSDK_OFFSET(0x15AA36F0)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_SETMATRIXARRAYANDRECORD_1_OFFSET UNITYSDK_OFFSET(0x15AA3770)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_SETMATRIXARRAYANDRECORD_OFFSET UNITYSDK_OFFSET(0x15AA3740)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_SETRENDERSTATEANDRECORD_OFFSET UNITYSDK_OFFSET(0x15AA37F0)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_SETTEXTUREANDRECORD_1_OFFSET UNITYSDK_OFFSET(0x15AA3830)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_SETTEXTUREANDRECORD_OFFSET UNITYSDK_OFFSET(0x15AA3810)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_SETVECTORANDRECORD_OFFSET UNITYSDK_OFFSET(0x15AA3850)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_SETVECTORARRAYANDRECORD_1_OFFSET UNITYSDK_OFFSET(0x15AA38B0)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_SETVECTORARRAYANDRECORD_OFFSET UNITYSDK_OFFSET(0x15AA3880)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_STARTCAPTURE_OFFSET UNITYSDK_OFFSET(0x15AA3010)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER_STARTSESSION_OFFSET UNITYSDK_OFFSET(0x15AA3390)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15AA3D60)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER__RECORDDRAWCALL_OFFSET UNITYSDK_OFFSET(0x15AA3D50)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER__RECORDGLOBALPARAM_OFFSET UNITYSDK_OFFSET(0x15AA3D40)
#define RPG_CUSTOMRP_SHADERPARAMRECORDER__RECORDMPBPARAM_OFFSET UNITYSDK_OFFSET(0x15AA3D30)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int ShaderParamRecorder_TypeDefinitionIndex = 35298;

	class ShaderParamRecorder : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::RPG::CustomRP::DrawCallParams>*>** StaticGet__SessionParams()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::RPG::CustomRP::DrawCallParams>*>**)Il2CppClass::FromTypeDefinitionIndex(ShaderParamRecorder_TypeDefinitionIndex)->GetStaticField(0x5F1F0);
		}
		static ::System::String** StaticGet__SessionName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderParamRecorder_TypeDefinitionIndex)->GetStaticField(0x5F1F8);
		}
		static ::System::Collections::Generic::List_1<::RPG::CustomRP::DrawCallParams>** StaticGet__CurrentSessionParams()
		{
			return (::System::Collections::Generic::List_1<::RPG::CustomRP::DrawCallParams>**)Il2CppClass::FromTypeDefinitionIndex(ShaderParamRecorder_TypeDefinitionIndex)->GetStaticField(0x5F200);
		}
		static ::RPG::CustomRP::MaterialParams* StaticGet__GlobalParams()
		{
			return (::RPG::CustomRP::MaterialParams*)Il2CppClass::FromTypeDefinitionIndex(ShaderParamRecorder_TypeDefinitionIndex)->GetStaticField(0x5F208);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>** StaticGet__Id2Name()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ShaderParamRecorder_TypeDefinitionIndex)->GetStaticField(0x5F218);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::MaterialPropertyBlock*, ::RPG::CustomRP::ParamTable>** StaticGet__MpbParams()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::MaterialPropertyBlock*, ::RPG::CustomRP::ParamTable>**)Il2CppClass::FromTypeDefinitionIndex(ShaderParamRecorder_TypeDefinitionIndex)->GetStaticField(0x5F220);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::RPG::CustomRP::MaterialParams>** StaticGet__MatParams()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::RPG::CustomRP::MaterialParams>**)Il2CppClass::FromTypeDefinitionIndex(ShaderParamRecorder_TypeDefinitionIndex)->GetStaticField(0x5F228);
		}
		static ::System::Boolean* StaticGet__IsCapturing()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ShaderParamRecorder_TypeDefinitionIndex)->GetStaticField(0x10990);
		}
		static ::System::Boolean* StaticGet__IsRecordingParam()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ShaderParamRecorder_TypeDefinitionIndex)->GetStaticField(0x10991);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER__CCTOR_OFFSET))();
		}

		static ::System::Boolean get_IsRecordingParam()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_GET_ISRECORDINGPARAM_OFFSET))();
		}

		static ::System::Boolean get_IsCapturing()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_GET_ISCAPTURING_OFFSET))();
		}

		static ::System::Int32 PropertyToID(::System::String* name)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_PROPERTYTOID_OFFSET))(name);
		}

		static ::System::Void StartCapture()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_STARTCAPTURE_OFFSET))();
		}

		static ::System::Void EndCapture()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_ENDCAPTURE_OFFSET))();
		}

		static ::System::Void StartSession(::System::String* sessionName)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_STARTSESSION_OFFSET))(sessionName);
		}

		static ::System::Void EndSession()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_ENDSESSION_OFFSET))();
		}

		static ::System::Void Clear()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_CLEAR_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::RPG::CustomRP::DrawCallParams>* GetDrawCallParams(::System::String* sessionName)
		{
			return ((::System::Collections::Generic::List_1<::RPG::CustomRP::DrawCallParams>*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_GETDRAWCALLPARAMS_OFFSET))(sessionName);
		}

		static ::RPG::CustomRP::MaterialParams get_GlobalParams()
		{
			return ((::RPG::CustomRP::MaterialParams(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_GET_GLOBALPARAMS_OFFSET))();
		}

		static ::System::Void SetColorAndRecord(::UnityEngine::MaterialPropertyBlock* mpb, ::System::Int32 nameID, ::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_SETCOLORANDRECORD_OFFSET))(mpb, nameID, value);
		}

		static ::System::Void SetFloatAndRecord(::UnityEngine::MaterialPropertyBlock* mpb, ::System::Int32 nameID, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_SETFLOATANDRECORD_OFFSET))(mpb, nameID, value);
		}

		static ::System::Void SetFloatArrayAndRecord(::UnityEngine::MaterialPropertyBlock* mpb, ::System::Int32 nameID, ::Il2CppArray<::System::Single>* values)
		{
			return ((::System::Void(*)(::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_SETFLOATARRAYANDRECORD_OFFSET))(mpb, nameID, values);
		}

		static ::System::Void SetFloatArrayAndRecord_1(::UnityEngine::MaterialPropertyBlock* mpb, ::System::Int32 nameID, ::System::Collections::Generic::List_1<::System::Single>* values)
		{
			return ((::System::Void(*)(::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_SETFLOATARRAYANDRECORD_1_OFFSET))(mpb, nameID, values);
		}

		static ::System::Void SetIntAndRecord(::UnityEngine::MaterialPropertyBlock* mpb, ::System::Int32 nameID, ::System::Int32 value)
		{
			return ((::System::Void(*)(::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_SETINTANDRECORD_OFFSET))(mpb, nameID, value);
		}

		static ::System::Void SetMatrixAndRecord(::UnityEngine::MaterialPropertyBlock* mpb, ::System::Int32 nameID, ::UnityEngine::Matrix4x4 value)
		{
			return ((::System::Void(*)(::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_SETMATRIXANDRECORD_OFFSET))(mpb, nameID, value);
		}

		static ::System::Void SetMatrixArrayAndRecord(::UnityEngine::MaterialPropertyBlock* mpb, ::System::Int32 nameID, ::Il2CppArray<::UnityEngine::Matrix4x4>* values)
		{
			return ((::System::Void(*)(::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::Il2CppArray<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_SETMATRIXARRAYANDRECORD_OFFSET))(mpb, nameID, values);
		}

		static ::System::Void SetMatrixArrayAndRecord_1(::UnityEngine::MaterialPropertyBlock* mpb, ::System::Int32 nameID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values)
		{
			return ((::System::Void(*)(::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_SETMATRIXARRAYANDRECORD_1_OFFSET))(mpb, nameID, values);
		}

		static ::System::Void SetRenderStateAndRecord(::UnityEngine::MaterialPropertyBlock* mpb, ::UnityEngine::Rendering::RenderStateBlock& stateBlock)
		{
			return ((::System::Void(*)(::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::RenderStateBlock&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_SETRENDERSTATEANDRECORD_OFFSET))(mpb, stateBlock);
		}

		static ::System::Void SetTextureAndRecord(::UnityEngine::MaterialPropertyBlock* mpb, ::System::Int32 nameID, ::UnityEngine::RenderTexture* value, ::UnityEngine::Rendering::RenderTextureSubElement element)
		{
			return ((::System::Void(*)(::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::UnityEngine::RenderTexture*, ::UnityEngine::Rendering::RenderTextureSubElement))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_SETTEXTUREANDRECORD_OFFSET))(mpb, nameID, value, element);
		}

		static ::System::Void SetTextureAndRecord_1(::UnityEngine::MaterialPropertyBlock* mpb, ::System::Int32 nameID, ::UnityEngine::Texture* value)
		{
			return ((::System::Void(*)(::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_SETTEXTUREANDRECORD_1_OFFSET))(mpb, nameID, value);
		}

		static ::System::Void SetVectorAndRecord(::UnityEngine::MaterialPropertyBlock* mpb, ::System::Int32 nameID, ::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_SETVECTORANDRECORD_OFFSET))(mpb, nameID, value);
		}

		static ::System::Void SetVectorArrayAndRecord(::UnityEngine::MaterialPropertyBlock* mpb, ::System::Int32 nameID, ::Il2CppArray<::UnityEngine::Vector4>* values)
		{
			return ((::System::Void(*)(::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_SETVECTORARRAYANDRECORD_OFFSET))(mpb, nameID, values);
		}

		static ::System::Void SetVectorArrayAndRecord_1(::UnityEngine::MaterialPropertyBlock* mpb, ::System::Int32 nameID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values)
		{
			return ((::System::Void(*)(::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_SETVECTORARRAYANDRECORD_1_OFFSET))(mpb, nameID, values);
		}

		static ::System::Void DisableKeywordAndRecord(::UnityEngine::Material* mat, ::System::String* keyword)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_DISABLEKEYWORDANDRECORD_OFFSET))(mat, keyword);
		}

		static ::System::Void EnableKeywordAndRecord(::UnityEngine::Material* mat, ::System::String* keyword)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_ENABLEKEYWORDANDRECORD_OFFSET))(mat, keyword);
		}

		static ::System::Void DrawMeshAndRecord(::UnityEngine::Rendering::CommandBuffer* cmd, ::System::String* name, ::UnityEngine::Mesh* mesh, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, ::System::Int32 submeshIndex, ::System::Int32 shaderPass, ::UnityEngine::MaterialPropertyBlock* properties, ::Il2CppArray<::System::String*>* keywords, ::System::Boolean appendKeywords)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::String*, ::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, ::System::Int32, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_DRAWMESHANDRECORD_OFFSET))(cmd, name, mesh, matrix, material, submeshIndex, shaderPass, properties, keywords, appendKeywords);
		}

		static ::System::Void DrawRendererAndRecord(::UnityEngine::Rendering::CommandBuffer* cmd, ::System::String* name, ::UnityEngine::Renderer* renderer, ::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::String*, ::UnityEngine::Renderer*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_DRAWRENDERERANDRECORD_OFFSET))(cmd, name, renderer, material);
		}

		static ::System::Void DrawRendererAndRecord_1(::UnityEngine::Rendering::CommandBuffer* cmd, ::System::String* name, ::UnityEngine::Renderer* renderer, ::UnityEngine::Material* material, ::System::Int32 submeshIndex, ::System::Int32 shaderPass, ::Il2CppArray<::System::String*>* keywords, ::System::Boolean appendKeywords)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::String*, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_DRAWRENDERERANDRECORD_1_OFFSET))(cmd, name, renderer, material, submeshIndex, shaderPass, keywords, appendKeywords);
		}

		static ::System::Void DrawRendererAndRecord_2(::UnityEngine::Rendering::CommandBuffer* cmd, ::System::String* name, ::UnityEngine::Renderer* renderer, ::UnityEngine::Material* material, ::System::Int32 submeshIndex, ::System::Int32 shaderPass)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::String*, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_DRAWRENDERERANDRECORD_2_OFFSET))(cmd, name, renderer, material, submeshIndex, shaderPass);
		}

		static ::System::Void DrawRendererAndRecord_3(::UnityEngine::Rendering::CommandBuffer* cmd, ::System::String* name, ::UnityEngine::Renderer* renderer, ::UnityEngine::Material* material, ::System::Int32 submeshIndex)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::String*, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_DRAWRENDERERANDRECORD_3_OFFSET))(cmd, name, renderer, material, submeshIndex);
		}

		static ::System::Void SetGlobalFloatAndRecord(::UnityEngine::Rendering::CommandBufferExt* cmd, ::System::Int32 nameID, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBufferExt*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_SETGLOBALFLOATANDRECORD_OFFSET))(cmd, nameID, value);
		}

		static ::System::Void SetGlobalVectorAndRecord(::UnityEngine::Rendering::CommandBufferExt* cmd, ::System::Int32 nameID, ::UnityEngine::Vector4& value)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBufferExt*, ::System::Int32, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_SETGLOBALVECTORANDRECORD_OFFSET))(cmd, nameID, value);
		}

		static ::System::Void SetGlobalColorAndRecord(::UnityEngine::Rendering::CommandBufferExt* cmd, ::System::Int32 nameID, ::UnityEngine::Color& value)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBufferExt*, ::System::Int32, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_SETGLOBALCOLORANDRECORD_OFFSET))(cmd, nameID, value);
		}

		static ::System::Void SetGlobalMatrixAndRecord(::UnityEngine::Rendering::CommandBufferExt* cmd, ::System::Int32 nameID, ::UnityEngine::Matrix4x4& value)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBufferExt*, ::System::Int32, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_SETGLOBALMATRIXANDRECORD_OFFSET))(cmd, nameID, value);
		}

		static ::System::Void SetGlobalVectorArrayAndRecord(::UnityEngine::Rendering::CommandBufferExt* cmd, ::System::Int32 nameID, ::Il2CppArray<::UnityEngine::Vector4>* values)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBufferExt*, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_SETGLOBALVECTORARRAYANDRECORD_OFFSET))(cmd, nameID, values);
		}

		static ::System::Void SetGlobalTextureAndRecord(::UnityEngine::Rendering::CommandBufferExt* cmd, ::System::Int32 nameID, ::UnityEngine::Texture* value, ::System::Int16 mipSlice)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBufferExt*, ::System::Int32, ::UnityEngine::Texture*, ::System::Int16))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_SETGLOBALTEXTUREANDRECORD_OFFSET))(cmd, nameID, value, mipSlice);
		}

		static ::System::Void SetGlobalTextureAndRecord_1(::UnityEngine::Rendering::CommandBufferExt* cmd, ::System::Int32 nameID, ::UnityEngine::Rendering::RenderTargetIdentifier& rtID, ::System::Int16 mipSlice)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBufferExt*, ::System::Int32, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::System::Int16))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER_SETGLOBALTEXTUREANDRECORD_1_OFFSET))(cmd, nameID, rtID, mipSlice);
		}

		static ::System::Void _RecordMpbParam(::UnityEngine::MaterialPropertyBlock* mpb, ::System::Int32 nameID, ::System::Object* value)
		{
			return ((::System::Void(*)(::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER__RECORDMPBPARAM_OFFSET))(mpb, nameID, value);
		}

		static ::System::Void _RecordGlobalParam(::System::Int32 nameID, ::System::Object* value)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER__RECORDGLOBALPARAM_OFFSET))(nameID, value);
		}

		static ::System::Void _RecordDrawCall(::UnityEngine::Rendering::CommandBuffer* cmd, ::System::String* name, ::UnityEngine::Material* material, ::UnityEngine::MaterialPropertyBlock* properties, ::Il2CppArray<::System::String*>* keywords, ::System::Boolean appendKeywords)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::String*, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERPARAMRECORDER__RECORDDRAWCALL_OFFSET))(cmd, name, material, properties, keywords, appendKeywords);
		}
	};
}
