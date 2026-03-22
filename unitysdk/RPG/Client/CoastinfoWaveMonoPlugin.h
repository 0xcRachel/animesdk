#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CoastinfoWaveMonoPlugin_TileUVWrapMode.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class CoastinfoWaveBehavior; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshRenderer; }

#define RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0x8FB4350)
#define RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_GET_REFCORNER00LS_OFFSET UNITYSDK_OFFSET(0x8FB4080)
#define RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_GET_REFCORNER01LS_OFFSET UNITYSDK_OFFSET(0x8FB40C0)
#define RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_GET_REFCORNER10LS_OFFSET UNITYSDK_OFFSET(0x8FB40A0)
#define RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_GET_REFCORNER11LS_OFFSET UNITYSDK_OFFSET(0x8FB40E0)
#define RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_GET_REFCORNERBAKED_OFFSET UNITYSDK_OFFSET(0x8FB4070)
#define RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_GET_REFCORNERUV00_10_OFFSET UNITYSDK_OFFSET(0x8FB4100)
#define RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_GET_REFCORNERUV01_11_OFFSET UNITYSDK_OFFSET(0x8FB4110)
#define RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_GET_REFMESHLOCALBOUNDS_OFFSET UNITYSDK_OFFSET(0x8FB4120)
#define RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_SETREFCORNERDATA_OFFSET UNITYSDK_OFFSET(0x8FB4140)
#define RPG_CLIENT_COASTINFOWAVEMONOPLUGIN__CCTOR_OFFSET UNITYSDK_OFFSET(0x8FB4450)
#define RPG_CLIENT_COASTINFOWAVEMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x8FB43A0)
#define RPG_CLIENT_COASTINFOWAVEMONOPLUGIN___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0x8FB44B0)

namespace RPG::Client
{
	inline static constexpr unsigned int CoastinfoWaveMonoPlugin_TypeDefinitionIndex = 56514;

	class CoastinfoWaveMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::CoastinfoWaveBehavior*>
	{
	public:
		static ::System::String** StaticGet_TessellationAdaptiveShaderPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CoastinfoWaveMonoPlugin_TypeDefinitionIndex)->GetStaticField(0x42EE0);
		}
		static ::System::String** StaticGet_RuntimeClipmapShaderPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CoastinfoWaveMonoPlugin_TypeDefinitionIndex)->GetStaticField(0x42EE8);
		}
		static ::System::String** StaticGet_CoastInfoShaderPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CoastinfoWaveMonoPlugin_TypeDefinitionIndex)->GetStaticField(0x42EF0);
		}
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* sceneRoot; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* bakeExcludeRoots; // 0x38
		::UnityEngine::Vector3 boundsMinSize; // 0x40
		::System::Int32 BakeCoastInfoTexHeight; // 0x4C
		::UnityEngine::MeshRenderer* waterPlane; // 0x50
		::System::Single boundsBakePadding; // 0x58
		::System::Single S_MaxWaterDepth; // 0x5C
		::System::Int32 shoreFalloffPx; // 0x60
		::System::Int32 gradBlurRadius; // 0x64
		::System::Single gradBTiling; // 0x68
		::System::Single gradATiling; // 0x6C
		::System::Single maskThreshold; // 0x70
		::UnityEngine::ComputeShader* coastComputeShader; // 0x78
		::System::String* outputPath; // 0x80
		::System::Boolean UseTileMapping; // 0x88
		::System::Int32 TM_TileResolution; // 0x8C
		::System::Single TM_TileWorldSize; // 0x90
		::System::Int32 TM_TileCountX; // 0x94
		::System::Int32 TM_TileCountZ; // 0x98
		::System::Boolean TM_FollowCamera; // 0x9C
		::System::Boolean TM_SnapToGrid; // 0x9D
		::System::Int32 TM_UpdateIntervalFrames; // 0xA0
		::UnityEngine::Camera* RT_TargetCamera; // 0xA8
		::RPG::Client::CoastinfoWaveMonoPlugin_TileUVWrapMode TM_UVWrapMode; // 0xB0
		::UnityEngine::Mesh* FixedReferenceMesh; // 0xB8
		::System::Boolean FixedRef_AutoFillWhenMeshMissing; // 0xC0
		::System::Boolean _refCornerBaked; // 0xC1
		::UnityEngine::Mesh* _refCornerSourceMesh; // 0xC8
		::UnityEngine::Bounds _refMeshLocalBounds; // 0xD0
		::UnityEngine::Vector3 _refCorner00LS; // 0xE8
		::UnityEngine::Vector3 _refCorner10LS; // 0xF4
		::UnityEngine::Vector3 _refCorner01LS; // 0x100
		::UnityEngine::Vector3 _refCorner11LS; // 0x10C
		::UnityEngine::Vector4 _refCornerUV00_10; // 0x118
		::UnityEngine::Vector4 _refCornerUV01_11; // 0x128

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEMONOPLUGIN__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEMONOPLUGIN__CCTOR_OFFSET))();
		}

		::System::Boolean get_RefCornerBaked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_GET_REFCORNERBAKED_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_RefCorner00LS()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_GET_REFCORNER00LS_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_RefCorner10LS()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_GET_REFCORNER10LS_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_RefCorner01LS()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_GET_REFCORNER01LS_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_RefCorner11LS()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_GET_REFCORNER11LS_OFFSET))(this);
		}

		::UnityEngine::Vector4 get_RefCornerUV00_10()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_GET_REFCORNERUV00_10_OFFSET))(this);
		}

		::UnityEngine::Vector4 get_RefCornerUV01_11()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_GET_REFCORNERUV01_11_OFFSET))(this);
		}

		::UnityEngine::Bounds get_RefMeshLocalBounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_GET_REFMESHLOCALBOUNDS_OFFSET))(this);
		}

		::System::Void SetRefCornerData(::System::Boolean a1, ::UnityEngine::Mesh* a2, ::UnityEngine::Bounds a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6, ::UnityEngine::Vector3 a7, ::UnityEngine::Vector4 a8, ::UnityEngine::Vector4 a9)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Mesh*, ::UnityEngine::Bounds, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector4, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_SETREFCORNERDATA_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COASTINFOWAVEMONOPLUGIN___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}
