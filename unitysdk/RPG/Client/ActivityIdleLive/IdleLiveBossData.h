#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBOSSDATA_GETNODEICON_OFFSET UNITYSDK_OFFSET(0x1734EF00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBOSSDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1734EE70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBOSSDATA_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1734EE60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBOSSDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1734EE80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBOSSDATA_GET_NODEICON_OFFSET UNITYSDK_OFFSET(0x1734EE50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBOSSDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1734EE90)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveBossData_TypeDefinitionIndex = 69205;

	class IdleLiveBossData : public ::System::Object
	{
	public:
		::System::String* _NodeIcon_k__BackingField; // 0x10
		::System::String* _ImagePath_k__BackingField; // 0x18
		::RPG::Client::TextID _Name_k__BackingField; // 0x20
		::RPG::Client::TextID _Desc_k__BackingField; // 0x30

		::System::Void _ctor(::System::UInt32 bossID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBOSSDATA__CTOR_OFFSET))(this, bossID);
		}

		::System::String* get_NodeIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBOSSDATA_GET_NODEICON_OFFSET))(this);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBOSSDATA_GET_IMAGEPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBOSSDATA_GET_DESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBOSSDATA_GET_NAME_OFFSET))(this);
		}

		::System::String* GetNodeIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEBOSSDATA_GETNODEICON_OFFSET))(this);
		}
	};
}
