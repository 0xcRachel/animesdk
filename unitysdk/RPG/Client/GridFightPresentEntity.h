#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

class Class_0_16E4307DCC419505_595;
class Class_1_120319518E6F6581_36;
namespace RPG::Client { class GridFightPresentConfig; }

#define RPG_CLIENT_GRIDFIGHTPRESENTENTITY_CREATE_OFFSET UNITYSDK_OFFSET(0x93C5B50)
#define RPG_CLIENT_GRIDFIGHTPRESENTENTITY_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x93D5080)
#define RPG_CLIENT_GRIDFIGHTPRESENTENTITY_GET_ID_OFFSET UNITYSDK_OFFSET(0x93D5000)
#define RPG_CLIENT_GRIDFIGHTPRESENTENTITY_GET_REMAINROUND_OFFSET UNITYSDK_OFFSET(0x93D5030)
#define RPG_CLIENT_GRIDFIGHTPRESENTENTITY_GET_UID_OFFSET UNITYSDK_OFFSET(0x93BF490)
#define RPG_CLIENT_GRIDFIGHTPRESENTENTITY_SETCOLLECTOR_OFFSET UNITYSDK_OFFSET(0x93C5C10)
#define RPG_CLIENT_GRIDFIGHTPRESENTENTITY_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x93D5090)
#define RPG_CLIENT_GRIDFIGHTPRESENTENTITY_UPDATE_OFFSET UNITYSDK_OFFSET(0x93C5A80)
#define RPG_CLIENT_GRIDFIGHTPRESENTENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x93D50A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPresentEntity_TypeDefinitionIndex = 51216;

	class GridFightPresentEntity : public ::Sofa::Core::ObservableObject
	{
	public:
		::Class_1_120319518E6F6581_36* _presentInfo; // 0x18
		::RPG::Client::GridFightPresentConfig* _Config_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRESENTENTITY__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_UID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRESENTENTITY_GET_UID_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRESENTENTITY_GET_ID_OFFSET))(this);
		}

		::System::UInt32 get_RemainRound()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRESENTENTITY_GET_REMAINROUND_OFFSET))(this);
		}

		::RPG::Client::GridFightPresentConfig* get_Config()
		{
			return ((::RPG::Client::GridFightPresentConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRESENTENTITY_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPG::Client::GridFightPresentConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightPresentConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRESENTENTITY_SET_CONFIG_OFFSET))(this, value);
		}

		static ::RPG::Client::GridFightPresentEntity* Create(::Class_1_120319518E6F6581_36* protoPresent)
		{
			return ((::RPG::Client::GridFightPresentEntity*(*)(::Class_1_120319518E6F6581_36*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRESENTENTITY_CREATE_OFFSET))(protoPresent);
		}

		::System::Void SetCollector(::Class_0_16E4307DCC419505_595* collector)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_595*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRESENTENTITY_SETCOLLECTOR_OFFSET))(this, collector);
		}

		::System::Void Update(::Class_1_120319518E6F6581_36* protoPresent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_120319518E6F6581_36*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRESENTENTITY_UPDATE_OFFSET))(this, protoPresent);
		}
	};
}
