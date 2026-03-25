#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NavMap/Cartography3DBase.h"
#include "unitysdk/RPG/GameCore/EraStateType.h"

namespace RPG::Client::NavMap { class IconCollectorBase; }
namespace RPG::Client::NavMap { class NavMap3DIconData; }
namespace RPG::Client::NavMap { class SubNavMapData; }
namespace RPG::GameCore { class EraRegion; }
namespace System { class String; }

#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP_GETDEFAULTAREAERASTATE_OFFSET UNITYSDK_OFFSET(0x9E028D0)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP_GETICONSHOWSTATE_1_OFFSET UNITYSDK_OFFSET(0x9E03170)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP_GETICONSHOWSTATE_OFFSET UNITYSDK_OFFSET(0x9E030D0)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP_GETSCENECURRENTERASTATE_OFFSET UNITYSDK_OFFSET(0x9E02A10)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP_GET_ISDEVICEFOLLOW_OFFSET UNITYSDK_OFFSET(0x9E03B00)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP_GET_MAP3DPREFABPATH_OFFSET UNITYSDK_OFFSET(0x9E039D0)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP_GET_MODELSHOWSTATE_OFFSET UNITYSDK_OFFSET(0x9E03A50)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP_GET_STATE_OFFSET UNITYSDK_OFFSET(0x9E03A30)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP_ICONSHOWINONEOFERASTATE_OFFSET UNITYSDK_OFFSET(0x9E03790)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP_ISENTITYSHOWINCURERAFLIPSTATE_OFFSET UNITYSDK_OFFSET(0x9E02D70)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP_ISICON3DSHOW_OFFSET UNITYSDK_OFFSET(0x9E02C10)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP_SET_STATE_OFFSET UNITYSDK_OFFSET(0x9E03A40)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x9E022B0)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP__GETFLOORDEFAULTAREAERASTATE_OFFSET UNITYSDK_OFFSET(0x9E02B90)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP__GETICONCOLLECTOR_OFFSET UNITYSDK_OFFSET(0x9E026F0)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP__INITROW_OFFSET UNITYSDK_OFFSET(0x9E022D0)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP___IFIXBASEPROXY_ISICON3DSHOW_OFFSET UNITYSDK_OFFSET(0x9E03C60)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP___IFIXBASEPROXY__GETICONCOLLECTOR_OFFSET UNITYSDK_OFFSET(0x9E03C50)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int Cartography3DEraFlip_TypeDefinitionIndex = 61238;

	class Cartography3DEraFlip : public ::RPG::Client::NavMap::Cartography3DBase
	{
	public:
		::RPG::GameCore::EraRegion* _Row; // 0x78
		::RPG::GameCore::EraStateType _State_k__BackingField; // 0x80

		::System::Void _ctor(::RPG::Client::NavMap::SubNavMapData* subNavMapData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::SubNavMapData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP__CTOR_OFFSET))(this, subNavMapData);
		}

		::RPG::Client::NavMap::IconCollectorBase* _GetIconCollector()
		{
			return ((::RPG::Client::NavMap::IconCollectorBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP__GETICONCOLLECTOR_OFFSET))(this);
		}

		::RPG::GameCore::EraStateType GetDefaultAreaEraState()
		{
			return ((::RPG::GameCore::EraStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP_GETDEFAULTAREAERASTATE_OFFSET))(this);
		}

		::RPG::GameCore::EraStateType GetSceneCurrentEraState()
		{
			return ((::RPG::GameCore::EraStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP_GETSCENECURRENTERASTATE_OFFSET))(this);
		}

		::RPG::GameCore::EraStateType _GetFloorDefaultAreaEraState()
		{
			return ((::RPG::GameCore::EraStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP__GETFLOORDEFAULTAREAERASTATE_OFFSET))(this);
		}

		::System::Boolean IsIcon3DShow(::RPG::Client::NavMap::NavMap3DIconData* icon3D)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::NavMap3DIconData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP_ISICON3DSHOW_OFFSET))(this, icon3D);
		}

		::System::Boolean IsEntityShowInCurEraFlipState(::RPG::Client::NavMap::NavMap3DIconData* icon3D)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::NavMap3DIconData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP_ISENTITYSHOWINCURERAFLIPSTATE_OFFSET))(this, icon3D);
		}

		::RPG::GameCore::EraStateType GetIconShowState(::RPG::Client::NavMap::NavMap3DIconData* icon3D)
		{
			return ((::RPG::GameCore::EraStateType(*)(::PVOID, ::RPG::Client::NavMap::NavMap3DIconData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP_GETICONSHOWSTATE_OFFSET))(this, icon3D);
		}

		::RPG::GameCore::EraStateType GetIconShowState_1(::System::UInt32 groupID, ::System::UInt32 instanceID)
		{
			return ((::RPG::GameCore::EraStateType(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP_GETICONSHOWSTATE_1_OFFSET))(this, groupID, instanceID);
		}

		::System::Boolean IconShowInOneOfEraState(::System::UInt32 groupID, ::System::UInt32 instanceID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP_ICONSHOWINONEOFERASTATE_OFFSET))(this, groupID, instanceID);
		}

		::System::Void _InitRow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP__INITROW_OFFSET))(this);
		}

		::System::String* get_Map3DPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP_GET_MAP3DPREFABPATH_OFFSET))(this);
		}

		::RPG::GameCore::EraStateType get_State()
		{
			return ((::RPG::GameCore::EraStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::RPG::GameCore::EraStateType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EraStateType))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP_SET_STATE_OFFSET))(this, value);
		}

		::RPG::GameCore::EraStateType get_ModelShowState()
		{
			return ((::RPG::GameCore::EraStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP_GET_MODELSHOWSTATE_OFFSET))(this);
		}

		::System::Boolean get_IsDeviceFollow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP_GET_ISDEVICEFOLLOW_OFFSET))(this);
		}

		::RPG::Client::NavMap::IconCollectorBase* __iFixBaseProxy__GetIconCollector()
		{
			return ((::RPG::Client::NavMap::IconCollectorBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP___IFIXBASEPROXY__GETICONCOLLECTOR_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsIcon3DShow(::RPG::Client::NavMap::NavMap3DIconData* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::NavMap3DIconData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY3DERAFLIP___IFIXBASEPROXY_ISICON3DSHOW_OFFSET))(this, P0);
		}
	};
}
