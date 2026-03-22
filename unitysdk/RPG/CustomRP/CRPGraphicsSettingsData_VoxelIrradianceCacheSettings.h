#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_VOXELIRRADIANCECACHESETTINGS_GET_RENDERSCALE_OFFSET UNITYSDK_OFFSET(0x163752A0)
#define RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_VOXELIRRADIANCECACHESETTINGS_SET_RENDERSCALE_OFFSET UNITYSDK_OFFSET(0x163752C0)
#define RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_VOXELIRRADIANCECACHESETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x163752D0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CRPGraphicsSettingsData_VoxelIrradianceCacheSettings_TypeDefinitionIndex = 28415;

	class CRPGraphicsSettingsData_VoxelIrradianceCacheSettings : public ::System::Object
	{
	public:
		::System::Boolean Enable; // 0x10
		::System::Boolean HalfRes; // 0x11
		::System::Boolean HDRAmbientTex; // 0x12

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_VOXELIRRADIANCECACHESETTINGS__CTOR_OFFSET))(this);
		}

		::System::Single get_RenderScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_VOXELIRRADIANCECACHESETTINGS_GET_RENDERSCALE_OFFSET))(this);
		}

		::System::Void set_RenderScale(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_VOXELIRRADIANCECACHESETTINGS_SET_RENDERSCALE_OFFSET))(this, value);
		}
	};
}
