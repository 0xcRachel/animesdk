#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MapObjectState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_227;
namespace RPG::Client { class MapDistrictDef; }
namespace RPG::Client { class MapEntityDef; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define RPG_CLIENT_MAPDISTRICT_ASYNCLOAD_OFFSET UNITYSDK_OFFSET(0x961F6D0)
#define RPG_CLIENT_MAPDISTRICT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x961F4B0)
#define RPG_CLIENT_MAPDISTRICT_GET_DISTRICTENTITY_OFFSET UNITYSDK_OFFSET(0x961F3A0)
#define RPG_CLIENT_MAPDISTRICT_GET_ENTITYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0x961F3B0)
#define RPG_CLIENT_MAPDISTRICT_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0x961F340)
#define RPG_CLIENT_MAPDISTRICT_GET_GROUPINSTANCEID_OFFSET UNITYSDK_OFFSET(0x961F2B0)
#define RPG_CLIENT_MAPDISTRICT_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x961F2D0)
#define RPG_CLIENT_MAPDISTRICT_GET_ISDISPOSED_OFFSET UNITYSDK_OFFSET(0x961F420)
#define RPG_CLIENT_MAPDISTRICT_GET_ISLOADED_OFFSET UNITYSDK_OFFSET(0x961F410)
#define RPG_CLIENT_MAPDISTRICT_GET_ISTOBEREMOVED_OFFSET UNITYSDK_OFFSET(0x961F430)
#define RPG_CLIENT_MAPDISTRICT_GET_MAPDISTRICTDEF_OFFSET UNITYSDK_OFFSET(0x961FF40)
#define RPG_CLIENT_MAPDISTRICT_GET_MAPENTITYDEF_OFFSET UNITYSDK_OFFSET(0x961F460)
#define RPG_CLIENT_MAPDISTRICT_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x961F310)
#define RPG_CLIENT_MAPDISTRICT_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x961F350)
#define RPG_CLIENT_MAPDISTRICT_GET_SCALE_OFFSET UNITYSDK_OFFSET(0x961F370)
#define RPG_CLIENT_MAPDISTRICT_GET_SERVERENTITYID_OFFSET UNITYSDK_OFFSET(0x961F2F0)
#define RPG_CLIENT_MAPDISTRICT_GET_STATE_OFFSET UNITYSDK_OFFSET(0x961F450)
#define RPG_CLIENT_MAPDISTRICT_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x961F330)
#define RPG_CLIENT_MAPDISTRICT_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x961F360)
#define RPG_CLIENT_MAPDISTRICT_SET_SCALE_OFFSET UNITYSDK_OFFSET(0x961F390)
#define RPG_CLIENT_MAPDISTRICT_SET_STATE_OFFSET UNITYSDK_OFFSET(0x961F440)
#define RPG_CLIENT_MAPDISTRICT_STARTLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0x961FE30)
#define RPG_CLIENT_MAPDISTRICT_SYNCLOAD_OFFSET UNITYSDK_OFFSET(0x961F740)
#define RPG_CLIENT_MAPDISTRICT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x961FC10)
#define RPG_CLIENT_MAPDISTRICT__CCTOR_OFFSET UNITYSDK_OFFSET(0x961FF50)
#define RPG_CLIENT_MAPDISTRICT__CTOR_OFFSET UNITYSDK_OFFSET(0x961F470)
#define RPG_CLIENT_MAPDISTRICT__ONASYNCLOADFINISH_OFFSET UNITYSDK_OFFSET(0x961FC90)
#define RPG_CLIENT_MAPDISTRICT___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x961FF70)

namespace RPG::Client
{
	inline static constexpr unsigned int MapDistrict_TypeDefinitionIndex = 48248;

	class MapDistrict : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_DEFAULT_PREFAB_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MapDistrict_TypeDefinitionIndex)->GetStaticField(0x2A890);
		}
		::RPG::Client::MapDistrictDef* _MapDistrictDef; // 0x10
		::RPG::GameCore::GameEntity* _DistrictEntity; // 0x18
		::UnityEngine::Vector3 _Position_k__BackingField; // 0x20
		::UnityEngine::Quaternion _Rotation_k__BackingField; // 0x2C
		::RPG::Client::MapObjectState _State_k__BackingField; // 0x3C
		::UnityEngine::Vector3 _Scale_k__BackingField; // 0x40

		::System::Void _ctor(::RPG::Client::MapDistrictDef* mapDistrictDef)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDistrictDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDISTRICT__CTOR_OFFSET))(this, mapDistrictDef);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDISTRICT__CCTOR_OFFSET))();
		}

		::System::UInt32 get_GroupInstanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDISTRICT_GET_GROUPINSTANCEID_OFFSET))(this);
		}

		::System::UInt32 get_InstanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDISTRICT_GET_INSTANCEID_OFFSET))(this);
		}

		::System::UInt32 get_ServerEntityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDISTRICT_GET_SERVERENTITYID_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDISTRICT_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDISTRICT_SET_POSITION_OFFSET))(this, value);
		}

		::RPG::GameCore::GameEntity* get_Entity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDISTRICT_GET_ENTITY_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_Rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDISTRICT_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_Rotation(::UnityEngine::Quaternion value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDISTRICT_SET_ROTATION_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_Scale()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDISTRICT_GET_SCALE_OFFSET))(this);
		}

		::System::Void set_Scale(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDISTRICT_SET_SCALE_OFFSET))(this, value);
		}

		::RPG::GameCore::GameEntity* get_DistrictEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDISTRICT_GET_DISTRICTENTITY_OFFSET))(this);
		}

		::System::UInt32 get_EntityRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDISTRICT_GET_ENTITYRUNTIMEID_OFFSET))(this);
		}

		::System::Boolean get_IsLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDISTRICT_GET_ISLOADED_OFFSET))(this);
		}

		::System::Boolean get_IsDisposed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDISTRICT_GET_ISDISPOSED_OFFSET))(this);
		}

		::System::Boolean get_IsToBeRemoved()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDISTRICT_GET_ISTOBEREMOVED_OFFSET))(this);
		}

		::System::Void set_State(::RPG::Client::MapObjectState value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapObjectState))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDISTRICT_SET_STATE_OFFSET))(this, value);
		}

		::RPG::Client::MapObjectState get_State()
		{
			return ((::RPG::Client::MapObjectState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDISTRICT_GET_STATE_OFFSET))(this);
		}

		::RPG::Client::MapEntityDef* get_MapEntityDef()
		{
			return ((::RPG::Client::MapEntityDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDISTRICT_GET_MAPENTITYDEF_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDISTRICT_DISPOSE_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_227*>* AsyncLoad()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_227*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDISTRICT_ASYNCLOAD_OFFSET))(this);
		}

		::System::Void SyncLoad()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDISTRICT_SYNCLOAD_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDISTRICT_TOSTRING_OFFSET))(this);
		}

		::System::Void _OnAsyncLoadFinish(::RPG::GameCore::GameEntity* loadedEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDISTRICT__ONASYNCLOADFINISH_OFFSET))(this, loadedEntity);
		}

		::System::Void StartLevelGraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDISTRICT_STARTLEVELGRAPH_OFFSET))(this);
		}

		::RPG::Client::MapDistrictDef* get_MapDistrictDef()
		{
			return ((::RPG::Client::MapDistrictDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDISTRICT_GET_MAPDISTRICTDEF_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDISTRICT___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
		}
	};
}
