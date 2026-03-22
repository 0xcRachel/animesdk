#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Billboard/BillboardIdentifier.h"
#include "unitysdk/RPG/Client/BillboardWayPointMutexStatus.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_BILLBOARDWAYPOINTMUTEXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x8DF5840)

namespace RPG::Client
{
	inline static constexpr unsigned int BillboardWayPointMutexConfig_TypeDefinitionIndex = 47906;

	class BillboardWayPointMutexConfig : public ::System::Object
	{
	public:
		::RPG::Client::BillboardWayPointMutexStatus Status; // 0x10
		::RPG::Client::Billboard::BillboardIdentifier BillboardIdentifier; // 0x14
		::System::Boolean IsActive; // 0x28
		::System::Boolean IsPlayingAnim; // 0x29

		::System::Void _ctor(::RPG::Client::BillboardWayPointMutexStatus status)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BillboardWayPointMutexStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARDWAYPOINTMUTEXCONFIG__CTOR_OFFSET))(this, status);
		}
	};
}
