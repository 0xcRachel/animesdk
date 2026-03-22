#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4A90D78D94DB1347;
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_CAKERACEUI3DUTILS_CHANGECATMATERIAL_OFFSET UNITYSDK_OFFSET(0x8E526F0)
#define RPG_CLIENT_CAKERACEUI3DUTILS_CREATE_OFFSET UNITYSDK_OFFSET(0x8E4B0E0)
#define RPG_CLIENT_CAKERACEUI3DUTILS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8E4BA60)
#define RPG_CLIENT_CAKERACEUI3DUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0x8E526C0)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceUI3DUtils_TypeDefinitionIndex = 49994;

	class CakeRaceUI3DUtils : public ::System::Object
	{
	public:
		::Class_1_4A90D78D94DB1347* _AssetLoader; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEUI3DUTILS__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::CakeRaceUI3DUtils* Create()
		{
			return ((::RPG::Client::CakeRaceUI3DUtils*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEUI3DUTILS_CREATE_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEUI3DUTILS_DISPOSE_OFFSET))(this);
		}

		::System::Void ChangeCatMaterial(::UnityEngine::GameObject* catGameObject, ::System::String* materialPath)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEUI3DUTILS_CHANGECATMATERIAL_OFFSET))(this, catGameObject, materialPath);
		}
	};
}
