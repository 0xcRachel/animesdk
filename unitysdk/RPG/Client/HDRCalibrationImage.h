#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_HDRCALIBRATIONIMAGE_START_OFFSET UNITYSDK_OFFSET(0x947AFA0)
#define RPG_CLIENT_HDRCALIBRATIONIMAGE_UPDATE_OFFSET UNITYSDK_OFFSET(0x947B050)
#define RPG_CLIENT_HDRCALIBRATIONIMAGE__CCTOR_OFFSET UNITYSDK_OFFSET(0x947B180)
#define RPG_CLIENT_HDRCALIBRATIONIMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x947B170)

namespace RPG::Client
{
	inline static constexpr unsigned int HDRCalibrationImage_TypeDefinitionIndex = 58045;

	class HDRCalibrationImage : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_Field_5_2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HDRCalibrationImage_TypeDefinitionIndex)->GetStaticField(0x3EE0);
		}
		static ::System::Int32* StaticGet_Field_5_3()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HDRCalibrationImage_TypeDefinitionIndex)->GetStaticField(0x3EE4);
		}
		::System::Boolean isBackground; // 0x18
		::UnityEngine::UI::Image* Field_5_1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HDRCALIBRATIONIMAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_HDRCALIBRATIONIMAGE__CCTOR_OFFSET))();
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HDRCALIBRATIONIMAGE_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HDRCALIBRATIONIMAGE_UPDATE_OFFSET))(this);
		}
	};
}
