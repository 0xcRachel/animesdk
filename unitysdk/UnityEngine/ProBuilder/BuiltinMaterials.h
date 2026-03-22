#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Shader; }

#define UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GETDEFAULTMATERIAL_OFFSET UNITYSDK_OFFSET(0x17FA9760)
#define UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GETLEGACYDIFFUSE_OFFSET UNITYSDK_OFFSET(0x17FA9E50)
#define UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_COLLIDERMATERIAL_OFFSET UNITYSDK_OFFSET(0x17FA9CB0)
#define UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_DEFAULTMATERIAL_OFFSET UNITYSDK_OFFSET(0x17FA9A00)
#define UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_EDGEPICKERMATERIAL_OFFSET UNITYSDK_OFFSET(0x17FA9B80)
#define UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_FACEPICKERMATERIAL_OFFSET UNITYSDK_OFFSET(0x17FA9AC0)
#define UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_GEOMETRYSHADERSSUPPORTED_OFFSET UNITYSDK_OFFSET(0x17FA99A0)
#define UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_NODRAWMATERIAL_OFFSET UNITYSDK_OFFSET(0x17FA9D80)
#define UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_SELECTIONPICKERSHADER_OFFSET UNITYSDK_OFFSET(0x17FA9A60)
#define UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_SHAPEPREVIEWMATERIAL_OFFSET UNITYSDK_OFFSET(0x17FAA1C0)
#define UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_TRIGGERMATERIAL_OFFSET UNITYSDK_OFFSET(0x17FA9BE0)
#define UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_UNLITVERTEXCOLOR_OFFSET UNITYSDK_OFFSET(0x17FAA160)
#define UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_VERTEXPICKERMATERIAL_OFFSET UNITYSDK_OFFSET(0x17FA9B20)
#define UNITYENGINE_PROBUILDER_BUILTINMATERIALS_INIT_OFFSET UNITYSDK_OFFSET(0x17FA8E70)
#define UNITYENGINE_PROBUILDER_BUILTINMATERIALS__CCTOR_OFFSET UNITYSDK_OFFSET(0x17FAA220)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int BuiltinMaterials_TypeDefinitionIndex = 33087;

	class BuiltinMaterials : public ::System::Object
	{
	public:
		static ::UnityEngine::Material** StaticGet_s_DefaultMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(BuiltinMaterials_TypeDefinitionIndex)->GetStaticField(0x2BFB0);
		}
		static ::System::String** StaticGet_k_FacePickerMaterial()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BuiltinMaterials_TypeDefinitionIndex)->GetStaticField(0x2BFB8);
		}
		static ::UnityEngine::Shader** StaticGet_s_SelectionPickerShader()
		{
			return (::UnityEngine::Shader**)Il2CppClass::FromTypeDefinitionIndex(BuiltinMaterials_TypeDefinitionIndex)->GetStaticField(0x2BFC0);
		}
		static ::System::String** StaticGet_k_VertexPickerMaterial()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BuiltinMaterials_TypeDefinitionIndex)->GetStaticField(0x2BFC8);
		}
		static ::UnityEngine::Material** StaticGet_s_ShapePreviewMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(BuiltinMaterials_TypeDefinitionIndex)->GetStaticField(0x2BFD0);
		}
		static ::System::String** StaticGet_k_EdgePickerShader()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BuiltinMaterials_TypeDefinitionIndex)->GetStaticField(0x2BFD8);
		}
		static ::UnityEngine::Material** StaticGet_s_FacePickerMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(BuiltinMaterials_TypeDefinitionIndex)->GetStaticField(0x2BFE0);
		}
		static ::UnityEngine::Material** StaticGet_s_UnlitVertexColorMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(BuiltinMaterials_TypeDefinitionIndex)->GetStaticField(0x2BFE8);
		}
		static ::UnityEngine::Material** StaticGet_s_UnityDefaultDiffuse()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(BuiltinMaterials_TypeDefinitionIndex)->GetStaticField(0x2BFF0);
		}
		static ::UnityEngine::Material** StaticGet_s_VertexPickerMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(BuiltinMaterials_TypeDefinitionIndex)->GetStaticField(0x2BFF8);
		}
		static ::System::String** StaticGet_k_EdgePickerMaterial()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BuiltinMaterials_TypeDefinitionIndex)->GetStaticField(0x2C000);
		}
		static ::UnityEngine::Material** StaticGet_s_EdgePickerMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(BuiltinMaterials_TypeDefinitionIndex)->GetStaticField(0x2C008);
		}
		static ::System::String** StaticGet_k_VertexPickerShader()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BuiltinMaterials_TypeDefinitionIndex)->GetStaticField(0x2C010);
		}
		static ::System::String** StaticGet_k_FacePickerShader()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BuiltinMaterials_TypeDefinitionIndex)->GetStaticField(0x2C018);
		}
		static ::System::Boolean* StaticGet_s_IsInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BuiltinMaterials_TypeDefinitionIndex)->GetStaticField(0xA0A0);
		}
		static ::System::Boolean* StaticGet_s_GeometryShadersSupported()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BuiltinMaterials_TypeDefinitionIndex)->GetStaticField(0xA0A1);
		}
		static ::UnityEngine::Color* StaticGet_previewColor()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(BuiltinMaterials_TypeDefinitionIndex)->GetStaticField(0xA0A4);
		}
		// static const ::System::String* faceShader; // 0x0
		// static const ::System::String* lineShader; // 0x0
		// static const ::System::String* lineShaderMetal; // 0x0
		// static const ::System::String* pointShader; // 0x0
		// static const ::System::String* wireShader; // 0x0
		// static const ::System::String* dotShader; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BUILTINMATERIALS__CCTOR_OFFSET))();
		}

		static ::System::Void Init()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BUILTINMATERIALS_INIT_OFFSET))();
		}

		static ::System::Boolean get_geometryShadersSupported()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_GEOMETRYSHADERSSUPPORTED_OFFSET))();
		}

		static ::UnityEngine::Material* get_defaultMaterial()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_DEFAULTMATERIAL_OFFSET))();
		}

		static ::UnityEngine::Shader* get_selectionPickerShader()
		{
			return ((::UnityEngine::Shader*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_SELECTIONPICKERSHADER_OFFSET))();
		}

		static ::UnityEngine::Material* get_facePickerMaterial()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_FACEPICKERMATERIAL_OFFSET))();
		}

		static ::UnityEngine::Material* get_vertexPickerMaterial()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_VERTEXPICKERMATERIAL_OFFSET))();
		}

		static ::UnityEngine::Material* get_edgePickerMaterial()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_EDGEPICKERMATERIAL_OFFSET))();
		}

		static ::UnityEngine::Material* get_triggerMaterial()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_TRIGGERMATERIAL_OFFSET))();
		}

		static ::UnityEngine::Material* get_colliderMaterial()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_COLLIDERMATERIAL_OFFSET))();
		}

		static ::UnityEngine::Material* get_noDrawMaterial()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_NODRAWMATERIAL_OFFSET))();
		}

		static ::UnityEngine::Material* GetLegacyDiffuse()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GETLEGACYDIFFUSE_OFFSET))();
		}

		static ::UnityEngine::Material* GetDefaultMaterial()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GETDEFAULTMATERIAL_OFFSET))();
		}

		static ::UnityEngine::Material* get_unlitVertexColor()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_UNLITVERTEXCOLOR_OFFSET))();
		}

		static ::UnityEngine::Material* get_ShapePreviewMaterial()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_BUILTINMATERIALS_GET_SHAPEPREVIEWMATERIAL_OFFSET))();
		}
	};
}
