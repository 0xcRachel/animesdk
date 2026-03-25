#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Camera_MonoOrStereoscopicEye.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace UnityEngine { class Canvas; }

#define COFFEE_UIPARTICLEINTERNAL_CANVASEXTENSIONS_GETVIEWPROJECTIONMATRIX_1_OFFSET UNITYSDK_OFFSET(0x11A060A0)
#define COFFEE_UIPARTICLEINTERNAL_CANVASEXTENSIONS_GETVIEWPROJECTIONMATRIX_2_OFFSET UNITYSDK_OFFSET(0x11A06960)
#define COFFEE_UIPARTICLEINTERNAL_CANVASEXTENSIONS_GETVIEWPROJECTIONMATRIX_3_OFFSET UNITYSDK_OFFSET(0x11A062E0)
#define COFFEE_UIPARTICLEINTERNAL_CANVASEXTENSIONS_GETVIEWPROJECTIONMATRIX_OFFSET UNITYSDK_OFFSET(0x11A06090)
#define COFFEE_UIPARTICLEINTERNAL_CANVASEXTENSIONS_ISSTEREOCANVAS_OFFSET UNITYSDK_OFFSET(0x11A06080)
#define COFFEE_UIPARTICLEINTERNAL_CANVASEXTENSIONS_SHOULDGAMMATOLINEARINMESH_OFFSET UNITYSDK_OFFSET(0x11A06060)
#define COFFEE_UIPARTICLEINTERNAL_CANVASEXTENSIONS_SHOULDGAMMATOLINEARINSHADER_OFFSET UNITYSDK_OFFSET(0x11A06040)

namespace Coffee::UIParticleInternal
{
	inline static constexpr unsigned int CanvasExtensions_TypeDefinitionIndex = 34857;

	class CanvasExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean ShouldGammaToLinearInShader(::UnityEngine::Canvas* canvas)
		{
			return ((::System::Boolean(*)(::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_CANVASEXTENSIONS_SHOULDGAMMATOLINEARINSHADER_OFFSET))(canvas);
		}

		static ::System::Boolean ShouldGammaToLinearInMesh(::UnityEngine::Canvas* canvas)
		{
			return ((::System::Boolean(*)(::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_CANVASEXTENSIONS_SHOULDGAMMATOLINEARINMESH_OFFSET))(canvas);
		}

		static ::System::Boolean IsStereoCanvas(::UnityEngine::Canvas* canvas)
		{
			return ((::System::Boolean(*)(::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_CANVASEXTENSIONS_ISSTEREOCANVAS_OFFSET))(canvas);
		}

		static ::System::Void GetViewProjectionMatrix(::UnityEngine::Canvas* canvas, ::UnityEngine::Matrix4x4& vpMatrix)
		{
			return ((::System::Void(*)(::UnityEngine::Canvas*, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_CANVASEXTENSIONS_GETVIEWPROJECTIONMATRIX_OFFSET))(canvas, vpMatrix);
		}

		static ::System::Void GetViewProjectionMatrix_1(::UnityEngine::Canvas* canvas, ::UnityEngine::Camera_MonoOrStereoscopicEye eye, ::UnityEngine::Matrix4x4& vpMatrix)
		{
			return ((::System::Void(*)(::UnityEngine::Canvas*, ::UnityEngine::Camera_MonoOrStereoscopicEye, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_CANVASEXTENSIONS_GETVIEWPROJECTIONMATRIX_1_OFFSET))(canvas, eye, vpMatrix);
		}

		static ::System::Void GetViewProjectionMatrix_2(::UnityEngine::Canvas* canvas, ::UnityEngine::Matrix4x4& vMatrix, ::UnityEngine::Matrix4x4& pMatrix)
		{
			return ((::System::Void(*)(::UnityEngine::Canvas*, ::UnityEngine::Matrix4x4&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_CANVASEXTENSIONS_GETVIEWPROJECTIONMATRIX_2_OFFSET))(canvas, vMatrix, pMatrix);
		}

		static ::System::Void GetViewProjectionMatrix_3(::UnityEngine::Canvas* canvas, ::UnityEngine::Camera_MonoOrStereoscopicEye eye, ::UnityEngine::Matrix4x4& vMatrix, ::UnityEngine::Matrix4x4& pMatrix)
		{
			return ((::System::Void(*)(::UnityEngine::Canvas*, ::UnityEngine::Camera_MonoOrStereoscopicEye, ::UnityEngine::Matrix4x4&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_CANVASEXTENSIONS_GETVIEWPROJECTIONMATRIX_3_OFFSET))(canvas, eye, vMatrix, pMatrix);
		}
	};
}
