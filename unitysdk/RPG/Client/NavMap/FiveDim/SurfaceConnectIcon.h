#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimSurfaceConnectDirection.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_99D526797741C2F2;
class Class_1_B765BE6F498EEA22;
namespace RPG::Client::NavMap::FiveDim { class Face; }
namespace RPG::Client::NavMap::FiveDim { class SurfaceConnectIcon_SurfaceConnectTarget; }

#define RPG_CLIENT_NAVMAP_FIVEDIM_SURFACECONNECTICON_GET_CONNECTTARGETENTITYID_OFFSET UNITYSDK_OFFSET(0x9931E60)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SURFACECONNECTICON_GET_CONNECTTARGETFACE_OFFSET UNITYSDK_OFFSET(0x9931E80)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SURFACECONNECTICON_GET_CONNECTTARGETICON_OFFSET UNITYSDK_OFFSET(0x9931F80)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SURFACECONNECTICON_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x9932040)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SURFACECONNECTICON_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x9932060)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SURFACECONNECTICON_GET_MAPPOSITION_OFFSET UNITYSDK_OFFSET(0x99320C0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SURFACECONNECTICON_SET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x9932050)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SURFACECONNECTICON__CTOR_OFFSET UNITYSDK_OFFSET(0x9932140)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SURFACECONNECTICON__GET_CONNECTTARGETICON_B__6_0_OFFSET UNITYSDK_OFFSET(0x9932160)

namespace RPG::Client::NavMap::FiveDim
{
	inline static constexpr unsigned int SurfaceConnectIcon_TypeDefinitionIndex = 59648;

	class SurfaceConnectIcon : public ::System::Object
	{
	public:
		::RPG::Client::NavMap::FiveDim::SurfaceConnectIcon_SurfaceConnectTarget* _ConnectTarget; // 0x10
		::Class_1_B765BE6F498EEA22* _Surface; // 0x18
		::Class_1_99D526797741C2F2* _CheatSheet; // 0x20
		::RPG::GameCore::FiveDimSurfaceConnectDirection _Direction_k__BackingField; // 0x28

		::System::Void _ctor(::Class_1_B765BE6F498EEA22* surface, ::Class_1_99D526797741C2F2* cheatSheet, ::RPG::Client::NavMap::FiveDim::SurfaceConnectIcon_SurfaceConnectTarget* connectTarget)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B765BE6F498EEA22*, ::Class_1_99D526797741C2F2*, ::RPG::Client::NavMap::FiveDim::SurfaceConnectIcon_SurfaceConnectTarget*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SURFACECONNECTICON__CTOR_OFFSET))(this, surface, cheatSheet, connectTarget);
		}

		::System::UInt32 get_ConnectTargetEntityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SURFACECONNECTICON_GET_CONNECTTARGETENTITYID_OFFSET))(this);
		}

		::RPG::Client::NavMap::FiveDim::Face* get_ConnectTargetFace()
		{
			return ((::RPG::Client::NavMap::FiveDim::Face*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SURFACECONNECTICON_GET_CONNECTTARGETFACE_OFFSET))(this);
		}

		::RPG::Client::NavMap::FiveDim::SurfaceConnectIcon* get_ConnectTargetIcon()
		{
			return ((::RPG::Client::NavMap::FiveDim::SurfaceConnectIcon*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SURFACECONNECTICON_GET_CONNECTTARGETICON_OFFSET))(this);
		}

		::RPG::GameCore::FiveDimSurfaceConnectDirection get_Direction()
		{
			return ((::RPG::GameCore::FiveDimSurfaceConnectDirection(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SURFACECONNECTICON_GET_DIRECTION_OFFSET))(this);
		}

		::System::Void set_Direction(::RPG::GameCore::FiveDimSurfaceConnectDirection value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimSurfaceConnectDirection))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SURFACECONNECTICON_SET_DIRECTION_OFFSET))(this, value);
		}

		::System::UInt32 get_EntityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SURFACECONNECTICON_GET_ENTITYID_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_MapPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SURFACECONNECTICON_GET_MAPPOSITION_OFFSET))(this);
		}

		::System::Boolean _get_ConnectTargetIcon_b__6_0(::RPG::Client::NavMap::FiveDim::SurfaceConnectIcon* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::FiveDim::SurfaceConnectIcon*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SURFACECONNECTICON__GET_CONNECTTARGETICON_B__6_0_OFFSET))(this, x);
		}
	};
}
