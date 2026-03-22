#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Simplygon/EErrorCodes.h"
#include "unitysdk/Simplygon/spMaterialCaster.h"
#include "unitysdk/System/Runtime/InteropServices/HandleRef.h"

namespace Simplygon { class spColorCasterSettings; }
namespace Simplygon { class spMappingImage; }
namespace Simplygon { class spMaterialTable; }
namespace Simplygon { class spTextureTable; }
namespace System { class String; }

#define SIMPLYGON_SPCOLORCASTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17B67F00)
#define SIMPLYGON_SPCOLORCASTER_GETCOLORCASTERSETTINGS_OFFSET UNITYSDK_OFFSET(0x17B68F10)
#define SIMPLYGON_SPCOLORCASTER_GETOUTPUTFILEPATH_OFFSET UNITYSDK_OFFSET(0x17B68AC0)
#define SIMPLYGON_SPCOLORCASTER_RUNPROCESSING_OFFSET UNITYSDK_OFFSET(0x17B68D10)
#define SIMPLYGON_SPCOLORCASTER_SETMAPPINGIMAGE_OFFSET UNITYSDK_OFFSET(0x17B68680)
#define SIMPLYGON_SPCOLORCASTER_SETOUTPUTFILEPATH_OFFSET UNITYSDK_OFFSET(0x17B688B0)
#define SIMPLYGON_SPCOLORCASTER_SETSOURCEMATERIALS_OFFSET UNITYSDK_OFFSET(0x17B68450)
#define SIMPLYGON_SPCOLORCASTER_SETSOURCETEXTURES_OFFSET UNITYSDK_OFFSET(0x17B68220)
#define SIMPLYGON_SPCOLORCASTER__CTOR_OFFSET UNITYSDK_OFFSET(0x17B5AEE0)

namespace Simplygon
{
	inline static constexpr unsigned int spColorCaster_TypeDefinitionIndex = 28684;

	class spColorCaster : public ::Simplygon::spMaterialCaster
	{
	public:
		::System::Runtime::InteropServices::HandleRef swigCPtr; // 0x48

		::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPCOLORCASTER__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPCOLORCASTER_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void SetSourceTextures(::Simplygon::spTextureTable* value)
		{
			return ((::System::Void(*)(::PVOID, ::Simplygon::spTextureTable*))((::PBYTE)hIl2Cpp + SIMPLYGON_SPCOLORCASTER_SETSOURCETEXTURES_OFFSET))(this, value);
		}

		::System::Void SetSourceMaterials(::Simplygon::spMaterialTable* value)
		{
			return ((::System::Void(*)(::PVOID, ::Simplygon::spMaterialTable*))((::PBYTE)hIl2Cpp + SIMPLYGON_SPCOLORCASTER_SETSOURCEMATERIALS_OFFSET))(this, value);
		}

		::System::Void SetMappingImage(::Simplygon::spMappingImage* value)
		{
			return ((::System::Void(*)(::PVOID, ::Simplygon::spMappingImage*))((::PBYTE)hIl2Cpp + SIMPLYGON_SPCOLORCASTER_SETMAPPINGIMAGE_OFFSET))(this, value);
		}

		::System::Void SetOutputFilePath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLYGON_SPCOLORCASTER_SETOUTPUTFILEPATH_OFFSET))(this, value);
		}

		::System::String* GetOutputFilePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLYGON_SPCOLORCASTER_GETOUTPUTFILEPATH_OFFSET))(this);
		}

		::Simplygon::EErrorCodes RunProcessing()
		{
			return ((::Simplygon::EErrorCodes(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLYGON_SPCOLORCASTER_RUNPROCESSING_OFFSET))(this);
		}

		::Simplygon::spColorCasterSettings* GetColorCasterSettings()
		{
			return ((::Simplygon::spColorCasterSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLYGON_SPCOLORCASTER_GETCOLORCASTERSETTINGS_OFFSET))(this);
		}
	};
}
