#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightOrbEntityData; }
namespace RPG::Client { class OrbSpawnConfig; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_GRIDFIGHTORBMANAGER___C__DISPLAYCLASS29_0__ADDSPHERE_B__0_OFFSET UNITYSDK_OFFSET(0x177E33F0)
#define RPG_CLIENT_GRIDFIGHTORBMANAGER___C__DISPLAYCLASS29_0__ADDSPHERE_B__1_OFFSET UNITYSDK_OFFSET(0x177E3520)
#define RPG_CLIENT_GRIDFIGHTORBMANAGER___C__DISPLAYCLASS29_0__CTOR_OFFSET UNITYSDK_OFFSET(0x177E0980)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightOrbManager___c__DisplayClass29_0_TypeDefinitionIndex = 59315;

	class GridFightOrbManager___c__DisplayClass29_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightOrbEntityData* orbData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBMANAGER___C__DISPLAYCLASS29_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _AddSphere_b__0(::UnityEngine::GameObject* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBMANAGER___C__DISPLAYCLASS29_0__ADDSPHERE_B__0_OFFSET))(this, item);
		}

		::System::Boolean _AddSphere_b__1(::RPG::Client::OrbSpawnConfig* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OrbSpawnConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBMANAGER___C__DISPLAYCLASS29_0__ADDSPHERE_B__1_OFFSET))(this, item);
		}
	};
}
