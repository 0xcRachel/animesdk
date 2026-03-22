#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1B7044A592B17773_1;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHIMERAENDLESSMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8F20EE0)
#define RPG_CLIENT_CHIMERAENDLESSMANAGER_GETENDLESSUNLOCKCHIMERAID_OFFSET UNITYSDK_OFFSET(0x8F21130)
#define RPG_CLIENT_CHIMERAENDLESSMANAGER_GETENDLESSWORKROUNDDATA_OFFSET UNITYSDK_OFFSET(0x8F20F90)
#define RPG_CLIENT_CHIMERAENDLESSMANAGER_GET_CURRENTFINISHWORKVALUE_OFFSET UNITYSDK_OFFSET(0x8F212B0)
#define RPG_CLIENT_CHIMERAENDLESSMANAGER_GET_FINISHWORKCNT_OFFSET UNITYSDK_OFFSET(0x8F212F0)
#define RPG_CLIENT_CHIMERAENDLESSMANAGER_GET_HIGHESTFINISHWORKVALUE_OFFSET UNITYSDK_OFFSET(0x8F21290)
#define RPG_CLIENT_CHIMERAENDLESSMANAGER_GET_WORKROUNDID_OFFSET UNITYSDK_OFFSET(0x8F212D0)
#define RPG_CLIENT_CHIMERAENDLESSMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x8F20C40)
#define RPG_CLIENT_CHIMERAENDLESSMANAGER_SET_CURRENTFINISHWORKVALUE_OFFSET UNITYSDK_OFFSET(0x8F212C0)
#define RPG_CLIENT_CHIMERAENDLESSMANAGER_SET_FINISHWORKCNT_OFFSET UNITYSDK_OFFSET(0x8F21300)
#define RPG_CLIENT_CHIMERAENDLESSMANAGER_SET_HIGHESTFINISHWORKVALUE_OFFSET UNITYSDK_OFFSET(0x8F212A0)
#define RPG_CLIENT_CHIMERAENDLESSMANAGER_SET_WORKROUNDID_OFFSET UNITYSDK_OFFSET(0x8F212E0)
#define RPG_CLIENT_CHIMERAENDLESSMANAGER_SYNCCHIMERAFINISHWORKVALUE_OFFSET UNITYSDK_OFFSET(0x8F21010)
#define RPG_CLIENT_CHIMERAENDLESSMANAGER_SYNCCHIMERAQUITENDLESS_OFFSET UNITYSDK_OFFSET(0x8F210E0)
#define RPG_CLIENT_CHIMERAENDLESSMANAGER_SYNCCHIMERASTARTENDLESS_OFFSET UNITYSDK_OFFSET(0x8F21080)
#define RPG_CLIENT_CHIMERAENDLESSMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x8F21310)
#define RPG_CLIENT_CHIMERAENDLESSMANAGER__INITENDLESSWORKROUND_OFFSET UNITYSDK_OFFSET(0x8F20C90)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraEndlessManager_TypeDefinitionIndex = 50356;

	class ChimeraEndlessManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_1B7044A592B17773_1*>* _WorkRoundDataDict; // 0x10
		::System::UInt32 _FinishWorkCnt_k__BackingField; // 0x18
		::System::UInt32 _HighestFinishWorkValue_k__BackingField; // 0x1C
		::System::UInt32 _CurrentFinishWorkValue_k__BackingField; // 0x20
		::System::UInt32 _WorkRoundID_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAENDLESSMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAENDLESSMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAENDLESSMANAGER_DISPOSE_OFFSET))(this);
		}

		::Class_1_1B7044A592B17773_1* GetEndlessWorkRoundData(::System::UInt32 roundID)
		{
			return ((::Class_1_1B7044A592B17773_1*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAENDLESSMANAGER_GETENDLESSWORKROUNDDATA_OFFSET))(this, roundID);
		}

		::System::Void SyncChimeraFinishWorkValue(::System::UInt32 highestEndlessWorkCnt, ::System::UInt32 curEndlessWorkCnt, ::System::UInt32 curEndlessRoundID, ::System::UInt32 finishWorkCnt)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAENDLESSMANAGER_SYNCCHIMERAFINISHWORKVALUE_OFFSET))(this, highestEndlessWorkCnt, curEndlessWorkCnt, curEndlessRoundID, finishWorkCnt);
		}

		::System::Void SyncChimeraStartEndless()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAENDLESSMANAGER_SYNCCHIMERASTARTENDLESS_OFFSET))(this);
		}

		::System::Void SyncChimeraQuitEndless()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAENDLESSMANAGER_SYNCCHIMERAQUITENDLESS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetEndlessUnlockChimeraID()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAENDLESSMANAGER_GETENDLESSUNLOCKCHIMERAID_OFFSET))(this);
		}

		::System::Void _InitEndlessWorkRound()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAENDLESSMANAGER__INITENDLESSWORKROUND_OFFSET))(this);
		}

		::System::UInt32 get_HighestFinishWorkValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAENDLESSMANAGER_GET_HIGHESTFINISHWORKVALUE_OFFSET))(this);
		}

		::System::Void set_HighestFinishWorkValue(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAENDLESSMANAGER_SET_HIGHESTFINISHWORKVALUE_OFFSET))(this, value);
		}

		::System::UInt32 get_CurrentFinishWorkValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAENDLESSMANAGER_GET_CURRENTFINISHWORKVALUE_OFFSET))(this);
		}

		::System::Void set_CurrentFinishWorkValue(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAENDLESSMANAGER_SET_CURRENTFINISHWORKVALUE_OFFSET))(this, value);
		}

		::System::UInt32 get_WorkRoundID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAENDLESSMANAGER_GET_WORKROUNDID_OFFSET))(this);
		}

		::System::Void set_WorkRoundID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAENDLESSMANAGER_SET_WORKROUNDID_OFFSET))(this, value);
		}

		::System::UInt32 get_FinishWorkCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAENDLESSMANAGER_GET_FINISHWORKCNT_OFFSET))(this);
		}

		::System::Void set_FinishWorkCnt(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAENDLESSMANAGER_SET_FINISHWORKCNT_OFFSET))(this, value);
		}
	};
}
