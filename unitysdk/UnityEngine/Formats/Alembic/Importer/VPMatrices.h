#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Camera; }

#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_VPMATRICES_GETPREVIOUS_OFFSET UNITYSDK_OFFSET(0x187AC690)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_VPMATRICES_GET_OFFSET UNITYSDK_OFFSET(0x187AC980)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_VPMATRICES_SWAPMATRIXMAP_OFFSET UNITYSDK_OFFSET(0x187B5060)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_VPMATRICES__CCTOR_OFFSET UNITYSDK_OFFSET(0x187B5160)

namespace UnityEngine::Formats::Alembic::Importer
{
	inline static constexpr unsigned int VPMatrices_TypeDefinitionIndex = 35048;

	class VPMatrices : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera*, ::UnityEngine::Matrix4x4>** StaticGet_s_previousVPMatrix()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera*, ::UnityEngine::Matrix4x4>**)Il2CppClass::FromTypeDefinitionIndex(VPMatrices_TypeDefinitionIndex)->GetStaticField(0x3CB10);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera*, ::UnityEngine::Matrix4x4>** StaticGet_s_currentVPMatrix()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Camera*, ::UnityEngine::Matrix4x4>**)Il2CppClass::FromTypeDefinitionIndex(VPMatrices_TypeDefinitionIndex)->GetStaticField(0x3CB18);
		}
		static ::System::Int32* StaticGet_s_frameCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VPMatrices_TypeDefinitionIndex)->GetStaticField(0xF9E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_VPMATRICES__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Matrix4x4 Get(::UnityEngine::Camera* camera)
		{
			return ((::UnityEngine::Matrix4x4(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_VPMATRICES_GET_OFFSET))(camera);
		}

		static ::UnityEngine::Matrix4x4 GetPrevious(::UnityEngine::Camera* camera)
		{
			return ((::UnityEngine::Matrix4x4(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_VPMATRICES_GETPREVIOUS_OFFSET))(camera);
		}

		static ::System::Void SwapMatrixMap()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_VPMATRICES_SWAPMATRIXMAP_OFFSET))();
		}
	};
}
