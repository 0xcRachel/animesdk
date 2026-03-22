#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseChallengeTargetData.h"
#include "unitysdk/RPG/Client/ChallengeTargetState.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChallengeType.h"

namespace System { class Object; }

#define RPG_CLIENT_EMPTYCHALLENGETARGETDATA_CALCULATETARGETSTATE_OFFSET UNITYSDK_OFFSET(0x915D400)
#define RPG_CLIENT_EMPTYCHALLENGETARGETDATA_FAKEDATA_OFFSET UNITYSDK_OFFSET(0x915D330)
#define RPG_CLIENT_EMPTYCHALLENGETARGETDATA_GETNAMEPARAM_OFFSET UNITYSDK_OFFSET(0x915D4A0)
#define RPG_CLIENT_EMPTYCHALLENGETARGETDATA_SETCHALLENGETARGETSTATE_OFFSET UNITYSDK_OFFSET(0x915D450)
#define RPG_CLIENT_EMPTYCHALLENGETARGETDATA_UPDATECHALLENGETARGETSTATE_OFFSET UNITYSDK_OFFSET(0x915D3B0)
#define RPG_CLIENT_EMPTYCHALLENGETARGETDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x915D2F0)
#define RPG_CLIENT_EMPTYCHALLENGETARGETDATA___IFIXBASEPROXY_GETNAMEPARAM_OFFSET UNITYSDK_OFFSET(0x915D790)
#define RPG_CLIENT_EMPTYCHALLENGETARGETDATA___IFIXBASEPROXY_SETCHALLENGETARGETSTATE_OFFSET UNITYSDK_OFFSET(0x915D720)
#define RPG_CLIENT_EMPTYCHALLENGETARGETDATA___IFIXBASEPROXY_UPDATECHALLENGETARGETSTATE_OFFSET UNITYSDK_OFFSET(0x915D6B0)

namespace RPG::Client
{
	inline static constexpr unsigned int EmptyChallengeTargetData_TypeDefinitionIndex = 50076;

	class EmptyChallengeTargetData : public ::RPG::Client::BaseChallengeTargetData
	{
	public:
		::System::UInt32 ChallengeParam3; // 0x30
		::RPG::GameCore::ChallengeType ChallengeType; // 0x34
		::System::UInt32 RewardID; // 0x38
		::RPG::Client::TextID Name; // 0x40
		::System::UInt32 ChallengeParam1; // 0x50
		::System::UInt32 ChallengeParam2; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMPTYCHALLENGETARGETDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::EmptyChallengeTargetData* FakeData()
		{
			return ((::RPG::Client::EmptyChallengeTargetData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EMPTYCHALLENGETARGETDATA_FAKEDATA_OFFSET))();
		}

		::System::Void UpdateChallengeTargetState(::System::Object* targetParams, ::System::Boolean isFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMPTYCHALLENGETARGETDATA_UPDATECHALLENGETARGETSTATE_OFFSET))(this, targetParams, isFinish);
		}

		::RPG::Client::ChallengeTargetState CalculateTargetState(::System::Object* targetParams, ::System::Boolean isFinish)
		{
			return ((::RPG::Client::ChallengeTargetState(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMPTYCHALLENGETARGETDATA_CALCULATETARGETSTATE_OFFSET))(this, targetParams, isFinish);
		}

		::System::Void SetChallengeTargetState(::System::Object* targetParams, ::System::Boolean isFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMPTYCHALLENGETARGETDATA_SETCHALLENGETARGETSTATE_OFFSET))(this, targetParams, isFinish);
		}

		::Il2CppArray<::System::Object*>* GetNameParam()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMPTYCHALLENGETARGETDATA_GETNAMEPARAM_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_UpdateChallengeTargetState(::System::Object* P0, ::System::Boolean P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMPTYCHALLENGETARGETDATA___IFIXBASEPROXY_UPDATECHALLENGETARGETSTATE_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_SetChallengeTargetState(::System::Object* P0, ::System::Boolean P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMPTYCHALLENGETARGETDATA___IFIXBASEPROXY_SETCHALLENGETARGETSTATE_OFFSET))(this, P0, P1);
		}

		::Il2CppArray<::System::Object*>* __iFixBaseProxy_GetNameParam()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMPTYCHALLENGETARGETDATA___IFIXBASEPROXY_GETNAMEPARAM_OFFSET))(this);
		}
	};
}
