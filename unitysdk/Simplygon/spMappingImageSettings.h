#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Simplygon/ETexcoordGeneratorType.h"
#include "unitysdk/Simplygon/spSettingsObject.h"
#include "unitysdk/System/Runtime/InteropServices/HandleRef.h"

namespace Simplygon { class spChartAggregatorSettings; }
namespace Simplygon { class spMappingImageOutputMaterialSettings; }

#define SIMPLYGON_SPMAPPINGIMAGESETTINGS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17B6A7E0)
#define SIMPLYGON_SPMAPPINGIMAGESETTINGS_GETCHARTAGGREGATORSETTINGS_OFFSET UNITYSDK_OFFSET(0x17B6B7C0)
#define SIMPLYGON_SPMAPPINGIMAGESETTINGS_GETOUTPUTMATERIALSETTINGS_OFFSET UNITYSDK_OFFSET(0x17B6A970)
#define SIMPLYGON_SPMAPPINGIMAGESETTINGS_SETAPPLYNEWMATERIALIDS_OFFSET UNITYSDK_OFFSET(0x17B6B3C0)
#define SIMPLYGON_SPMAPPINGIMAGESETTINGS_SETGENERATEMAPPINGIMAGE_OFFSET UNITYSDK_OFFSET(0x17B6ABC0)
#define SIMPLYGON_SPMAPPINGIMAGESETTINGS_SETGENERATETANGENTS_OFFSET UNITYSDK_OFFSET(0x17B6AFC0)
#define SIMPLYGON_SPMAPPINGIMAGESETTINGS_SETGENERATETEXCOORDS_OFFSET UNITYSDK_OFFSET(0x17B6ADC0)
#define SIMPLYGON_SPMAPPINGIMAGESETTINGS_SETTEXCOORDGENERATORTYPE_OFFSET UNITYSDK_OFFSET(0x17B6B5C0)
#define SIMPLYGON_SPMAPPINGIMAGESETTINGS_SETUSEFULLRETEXTURING_OFFSET UNITYSDK_OFFSET(0x17B6B1C0)
#define SIMPLYGON_SPMAPPINGIMAGESETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x17B6A610)

namespace Simplygon
{
	inline static constexpr unsigned int spMappingImageSettings_TypeDefinitionIndex = 28689;

	class spMappingImageSettings : public ::Simplygon::spSettingsObject
	{
	public:
		::System::Runtime::InteropServices::HandleRef swigCPtr; // 0x38

		::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPMAPPINGIMAGESETTINGS__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPMAPPINGIMAGESETTINGS_DISPOSE_OFFSET))(this, disposing);
		}

		::Simplygon::spMappingImageOutputMaterialSettings* GetOutputMaterialSettings(::System::UInt32 index)
		{
			return ((::Simplygon::spMappingImageOutputMaterialSettings*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + SIMPLYGON_SPMAPPINGIMAGESETTINGS_GETOUTPUTMATERIALSETTINGS_OFFSET))(this, index);
		}

		::System::Void SetGenerateMappingImage(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPMAPPINGIMAGESETTINGS_SETGENERATEMAPPINGIMAGE_OFFSET))(this, value);
		}

		::System::Void SetGenerateTexCoords(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPMAPPINGIMAGESETTINGS_SETGENERATETEXCOORDS_OFFSET))(this, value);
		}

		::System::Void SetGenerateTangents(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPMAPPINGIMAGESETTINGS_SETGENERATETANGENTS_OFFSET))(this, value);
		}

		::System::Void SetUseFullRetexturing(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPMAPPINGIMAGESETTINGS_SETUSEFULLRETEXTURING_OFFSET))(this, value);
		}

		::System::Void SetApplyNewMaterialIds(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIMPLYGON_SPMAPPINGIMAGESETTINGS_SETAPPLYNEWMATERIALIDS_OFFSET))(this, value);
		}

		::System::Void SetTexCoordGeneratorType(::Simplygon::ETexcoordGeneratorType value)
		{
			return ((::System::Void(*)(::PVOID, ::Simplygon::ETexcoordGeneratorType))((::PBYTE)hIl2Cpp + SIMPLYGON_SPMAPPINGIMAGESETTINGS_SETTEXCOORDGENERATORTYPE_OFFSET))(this, value);
		}

		::Simplygon::spChartAggregatorSettings* GetChartAggregatorSettings()
		{
			return ((::Simplygon::spChartAggregatorSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLYGON_SPMAPPINGIMAGESETTINGS_GETCHARTAGGREGATORSETTINGS_OFFSET))(this);
		}
	};
}
