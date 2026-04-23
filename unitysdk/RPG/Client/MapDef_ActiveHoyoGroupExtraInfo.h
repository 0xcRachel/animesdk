#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A16A135FC5A0DDB9_4;
class Class_1_F64CEA2EBA77404D;

#define RPG_CLIENT_MAPDEF_ACTIVEHOYOGROUPEXTRAINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x158BC430)

namespace RPG::Client
{
	inline static constexpr unsigned int MapDef_ActiveHoyoGroupExtraInfo_TypeDefinitionIndex = 57273;

	class MapDef_ActiveHoyoGroupExtraInfo : public ::System::Object
	{
	public:
		::Class_1_A16A135FC5A0DDB9_4* RefreshServerGroupInfo; // 0x10
		::Class_1_F64CEA2EBA77404D* InitServerGroupInfo; // 0x18
		::System::Boolean IsInitActiveHoyoGroup; // 0x20
		::System::UInt32 ActiveSubMissionID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDEF_ACTIVEHOYOGROUPEXTRAINFO__CTOR_OFFSET))(this);
		}
	};
}
