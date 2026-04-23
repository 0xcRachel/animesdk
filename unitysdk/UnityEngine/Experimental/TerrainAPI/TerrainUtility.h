#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Experimental::TerrainAPI { class TerrainUtility_TerrainGroups; }

#define UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_AUTOCONNECT_OFFSET UNITYSDK_OFFSET(0x1A6F84C0)
#define UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_CLEARCONNECTIVITY_OFFSET UNITYSDK_OFFSET(0x1A6F7DB0)
#define UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_COLLECTTERRAINS_OFFSET UNITYSDK_OFFSET(0x1A6F7E70)
#define UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_HASVALIDTERRAINS_OFFSET UNITYSDK_OFFSET(0x1A6F7D60)

namespace UnityEngine::Experimental::TerrainAPI
{
	inline static constexpr unsigned int TerrainUtility_TypeDefinitionIndex = 5252;

	class TerrainUtility : public ::System::Object
	{
	public:
		static ::System::Boolean HasValidTerrains()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_HASVALIDTERRAINS_OFFSET))();
		}

		static ::System::Void ClearConnectivity()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_CLEARCONNECTIVITY_OFFSET))();
		}

		static ::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainGroups* CollectTerrains(::System::Boolean onlyAutoConnectedTerrains)
		{
			return ((::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainGroups*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_COLLECTTERRAINS_OFFSET))(onlyAutoConnectedTerrains);
		}

		static ::System::Void AutoConnect()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_TERRAINAPI_TERRAINUTILITY_AUTOCONNECT_OFFSET))();
		}
	};
}
