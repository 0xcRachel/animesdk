#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CurveData.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class TextAsset; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_HDRPAPERWHITEREFERENCEIMAGE_START_OFFSET UNITYSDK_OFFSET(0x947B1D0)
#define RPG_CLIENT_HDRPAPERWHITEREFERENCEIMAGE_UPDATE_OFFSET UNITYSDK_OFFSET(0x947B350)
#define RPG_CLIENT_HDRPAPERWHITEREFERENCEIMAGE__CCTOR_OFFSET UNITYSDK_OFFSET(0x947B590)
#define RPG_CLIENT_HDRPAPERWHITEREFERENCEIMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x947B580)

namespace RPG::Client
{
	inline static constexpr unsigned int HDRPaperWhiteReferenceImage_TypeDefinitionIndex = 58046;

	class HDRPaperWhiteReferenceImage : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_Field_5_7()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HDRPaperWhiteReferenceImage_TypeDefinitionIndex)->GetStaticField(0x3EF0);
		}
		static ::System::Int32* StaticGet_Field_5_4()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HDRPaperWhiteReferenceImage_TypeDefinitionIndex)->GetStaticField(0x3EF4);
		}
		static ::System::Int32* StaticGet_Field_5_5()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HDRPaperWhiteReferenceImage_TypeDefinitionIndex)->GetStaticField(0x3EF8);
		}
		static ::System::Int32* StaticGet_Field_5_10()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HDRPaperWhiteReferenceImage_TypeDefinitionIndex)->GetStaticField(0x3EFC);
		}
		static ::System::Int32* StaticGet_Field_5_11()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HDRPaperWhiteReferenceImage_TypeDefinitionIndex)->GetStaticField(0x3F00);
		}
		static ::System::Int32* StaticGet_Field_5_8()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HDRPaperWhiteReferenceImage_TypeDefinitionIndex)->GetStaticField(0x3F04);
		}
		static ::System::Int32* StaticGet_Field_5_9()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HDRPaperWhiteReferenceImage_TypeDefinitionIndex)->GetStaticField(0x3F08);
		}
		static ::System::Int32* StaticGet_Field_5_6()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HDRPaperWhiteReferenceImage_TypeDefinitionIndex)->GetStaticField(0x3F0C);
		}
		::UnityEngine::UI::Image* Field_5_0; // 0x18
		::UnityEngine::Material* Field_5_1; // 0x20
		::UnityEngine::TextAsset* curveParamsJson; // 0x28
		::RPG::CustomRP::CurveData Field_5_3; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HDRPAPERWHITEREFERENCEIMAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_HDRPAPERWHITEREFERENCEIMAGE__CCTOR_OFFSET))();
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HDRPAPERWHITEREFERENCEIMAGE_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HDRPAPERWHITEREFERENCEIMAGE_UPDATE_OFFSET))(this);
		}
	};
}
