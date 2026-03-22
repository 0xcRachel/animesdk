#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_12BF61475A53914B;
class Class_1_146971F22DC780FC_3;
class Class_1_FA4F4A67B1C04320_590;
namespace RPG::Client { class MuseumData; }
namespace RPG::Client { class MuseumTarget; }
namespace System { class String; }

#define RPG_CLIENT_MUSEUMTARGETDATA_GET_CHECKTURN_OFFSET UNITYSDK_OFFSET(0x98F2C90)
#define RPG_CLIENT_MUSEUMTARGETDATA_GET_CURTARGET_OFFSET UNITYSDK_OFFSET(0x98F2C70)
#define RPG_CLIENT_MUSEUMTARGETDATA_GET_HAVETARGET_OFFSET UNITYSDK_OFFSET(0x98F2C50)
#define RPG_CLIENT_MUSEUMTARGETDATA_GET_OWNERMUSEUM_OFFSET UNITYSDK_OFFSET(0x98F2C40)
#define RPG_CLIENT_MUSEUMTARGETDATA_SET_CURTARGET_OFFSET UNITYSDK_OFFSET(0x98F2C80)
#define RPG_CLIENT_MUSEUMTARGETDATA_SET_HAVETARGET_OFFSET UNITYSDK_OFFSET(0x98F2C60)
#define RPG_CLIENT_MUSEUMTARGETDATA_SYNCDATA_1_OFFSET UNITYSDK_OFFSET(0x98ED3E0)
#define RPG_CLIENT_MUSEUMTARGETDATA_SYNCDATA_2_OFFSET UNITYSDK_OFFSET(0x98ED550)
#define RPG_CLIENT_MUSEUMTARGETDATA_SYNCDATA_OFFSET UNITYSDK_OFFSET(0x98E2970)
#define RPG_CLIENT_MUSEUMTARGETDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x98E1330)

namespace RPG::Client
{
	inline static constexpr unsigned int MuseumTargetData_TypeDefinitionIndex = 52835;

	class MuseumTargetData : public ::System::Object
	{
	public:
		// static const ::System::String* _MuseumTargetCheckTurnKey; // 0x0
		::RPG::Client::MuseumData* _OwnerMuseum_k__BackingField; // 0x10
		::RPG::Client::MuseumTarget* _CurTarget_k__BackingField; // 0x18
		::System::UInt32 _CheckTurn_k__BackingField; // 0x20
		::System::Boolean _HaveTarget_k__BackingField; // 0x24

		::System::Void _ctor(::RPG::Client::MuseumData* ownerMuseum)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETDATA__CTOR_OFFSET))(this, ownerMuseum);
		}

		::RPG::Client::MuseumData* get_OwnerMuseum()
		{
			return ((::RPG::Client::MuseumData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETDATA_GET_OWNERMUSEUM_OFFSET))(this);
		}

		::System::Boolean get_HaveTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETDATA_GET_HAVETARGET_OFFSET))(this);
		}

		::System::Void set_HaveTarget(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETDATA_SET_HAVETARGET_OFFSET))(this, value);
		}

		::RPG::Client::MuseumTarget* get_CurTarget()
		{
			return ((::RPG::Client::MuseumTarget*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETDATA_GET_CURTARGET_OFFSET))(this);
		}

		::System::Void set_CurTarget(::RPG::Client::MuseumTarget* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumTarget*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETDATA_SET_CURTARGET_OFFSET))(this, value);
		}

		::System::UInt32 get_CheckTurn()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETDATA_GET_CHECKTURN_OFFSET))(this);
		}

		::System::Void SyncData(::Class_1_146971F22DC780FC_3* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_146971F22DC780FC_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETDATA_SYNCDATA_OFFSET))(this, proto);
		}

		::System::Void SyncData_1(::Class_1_FA4F4A67B1C04320_590* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_590*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETDATA_SYNCDATA_1_OFFSET))(this, proto);
		}

		::System::Void SyncData_2(::Class_1_12BF61475A53914B* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_12BF61475A53914B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETDATA_SYNCDATA_2_OFFSET))(this, proto);
		}
	};
}
