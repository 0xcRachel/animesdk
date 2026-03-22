#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_3B76BCE1DE5BE597.h"
#include "unitysdk/RPG/GameCore/GraphicQuality.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_1_6BB3CCD14C3350D4;
namespace EnviromentSystemV2Space { class ImageCurveAsset; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture; }

#define CLASS_4_77E9A57BF479B8FD_METHOD_4_1A83B4B5F36C859C_OFFSET UNITYSDK_OFFSET(0x8593CB0)
#define CLASS_4_77E9A57BF479B8FD_METHOD_4_B69C8857E861C815_OFFSET UNITYSDK_OFFSET(0x8593F40)
#define CLASS_4_77E9A57BF479B8FD_METHOD_4_B7A3ACD6F29408C2_OFFSET UNITYSDK_OFFSET(0x8593D60)
#define CLASS_4_77E9A57BF479B8FD_METHOD_4_E574C73D1D4F7611_OFFSET UNITYSDK_OFFSET(0x85943E0)
#define CLASS_4_77E9A57BF479B8FD__CTOR_OFFSET UNITYSDK_OFFSET(0x8594AC0)
#define CLASS_4_77E9A57BF479B8FD__INTERPOLATERES_B__11_0_OFFSET UNITYSDK_OFFSET(0x8594B00)

inline static constexpr unsigned int Class_4_77E9A57BF479B8FD_TypeDefinitionIndex = 39203;

class Class_4_77E9A57BF479B8FD : public ::Class_3_3B76BCE1DE5BE597<::UnityEngine::Texture*>
{
public:
	static ::UnityEngine::Texture** StaticGet_Field_4_0()
	{
		return (::UnityEngine::Texture**)Il2CppClass::FromTypeDefinitionIndex(Class_4_77E9A57BF479B8FD_TypeDefinitionIndex)->GetStaticField(0x46970);
	}
	::UnityEngine::RenderTexture* Field_4_4; // 0x48
	::UnityEngine::ComputeShader* Field_4_5; // 0x50
	::Class_1_6BB3CCD14C3350D4* Field_4_6; // 0x58
	::System::Single Field_4_2; // 0x60
	::RPG::GameCore::GraphicQuality Field_4_3; // 0x64
	::UnityEngine::Vector2Int Field_4_1; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_77E9A57BF479B8FD__CTOR_OFFSET))(this);
	}

	::UnityEngine::Texture* Method_4_1A83B4B5F36C859C()
	{
		return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_77E9A57BF479B8FD_METHOD_4_1A83B4B5F36C859C_OFFSET))(this);
	}

	::UnityEngine::Texture* Method_4_B7A3ACD6F29408C2()
	{
		return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_77E9A57BF479B8FD_METHOD_4_B7A3ACD6F29408C2_OFFSET))(this);
	}

	::System::Void Method_4_B69C8857E861C815(::EnviromentSystemV2Space::ImageCurveAsset* a1)
	{
		return ((::System::Void(*)(::PVOID, ::EnviromentSystemV2Space::ImageCurveAsset*))((::PBYTE)hIl2Cpp + CLASS_4_77E9A57BF479B8FD_METHOD_4_B69C8857E861C815_OFFSET))(this, a1);
	}

	::UnityEngine::Texture* Method_4_E574C73D1D4F7611(::UnityEngine::Texture* a1, ::UnityEngine::Texture* a2, ::System::Single a3)
	{
		return ((::UnityEngine::Texture*(*)(::PVOID, ::UnityEngine::Texture*, ::UnityEngine::Texture*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_77E9A57BF479B8FD_METHOD_4_E574C73D1D4F7611_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _InterpolateRes_b__11_0(::UnityEngine::ComputeShader* obj)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeShader*))((::PBYTE)hIl2Cpp + CLASS_4_77E9A57BF479B8FD__INTERPOLATERES_B__11_0_OFFSET))(this, obj);
	}
};
