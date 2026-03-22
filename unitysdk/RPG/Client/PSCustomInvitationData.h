#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503_4.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PSCUSTOMINVITATIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9A2C5F0)

namespace RPG::Client
{
	inline static constexpr unsigned int PSCustomInvitationData_TypeDefinitionIndex = 52272;

	class PSCustomInvitationData : public ::System::Object
	{
	public:
		::Enum_3_F80BFD5B986D5503_4 Type; // 0x10
		::System::UInt64 RoomID; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* GameParamList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSCUSTOMINVITATIONDATA__CTOR_OFFSET))(this);
		}
	};
}
