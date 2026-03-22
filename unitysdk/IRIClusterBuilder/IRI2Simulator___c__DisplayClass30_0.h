#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IRI2/ClusterMeshLodInfo.h"
#include "unitysdk/System/Object.h"

#define IRICLUSTERBUILDER_IRI2SIMULATOR___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10AD3F40)
#define IRICLUSTERBUILDER_IRI2SIMULATOR___C__DISPLAYCLASS30_0__INITVOLUME_B__0_OFFSET UNITYSDK_OFFSET(0x10AD4060)

namespace IRIClusterBuilder
{
	inline static constexpr unsigned int IRI2Simulator___c__DisplayClass30_0_TypeDefinitionIndex = 37655;

	class IRI2Simulator___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::IRI2::ClusterMeshLodInfo curMesh; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_IRI2SIMULATOR___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _InitVolume_b__0(::IRI2::ClusterMeshLodInfo item)
		{
			return ((::System::Boolean(*)(::PVOID, ::IRI2::ClusterMeshLodInfo))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_IRI2SIMULATOR___C__DISPLAYCLASS30_0__INITVOLUME_B__0_OFFSET))(this, item);
		}
	};
}
