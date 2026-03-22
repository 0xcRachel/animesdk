#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BattleRecordDisplayType.h"
#include "unitysdk/System/Object.h"

class Class_1_9E78928359AD9962;

#define RPG_CLIENT_NONEPLAYERROGUERECORDDATA_GET_DISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x99F4F20)
#define RPG_CLIENT_NONEPLAYERROGUERECORDDATA_GET_HASRECORD_OFFSET UNITYSDK_OFFSET(0x99F4F30)
#define RPG_CLIENT_NONEPLAYERROGUERECORDDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x99F4F40)
#define RPG_CLIENT_NONEPLAYERROGUERECORDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x99F4F90)

namespace RPG::Client
{
	inline static constexpr unsigned int NonePlayerRogueRecordData_TypeDefinitionIndex = 51060;

	class NonePlayerRogueRecordData : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NONEPLAYERROGUERECORDDATA__CTOR_OFFSET))(this);
		}

		::RPG::Client::BattleRecordDisplayType get_DisplayType()
		{
			return ((::RPG::Client::BattleRecordDisplayType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NONEPLAYERROGUERECORDDATA_GET_DISPLAYTYPE_OFFSET))(this);
		}

		::System::Boolean get_HasRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NONEPLAYERROGUERECORDDATA_GET_HASRECORD_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_9E78928359AD9962* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9E78928359AD9962*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NONEPLAYERROGUERECORDDATA_SYNC_OFFSET))(this, info);
		}
	};
}
