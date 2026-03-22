#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraWorkDataItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_CHIMERAWORKINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8F32340)
#define RPG_CLIENT_CHIMERAWORKINFO_GETWORKDATA_OFFSET UNITYSDK_OFFSET(0x8F289A0)
#define RPG_CLIENT_CHIMERAWORKINFO_INIT_OFFSET UNITYSDK_OFFSET(0x8F318A0)
#define RPG_CLIENT_CHIMERAWORKINFO_RESETWORKCURRENTHP_OFFSET UNITYSDK_OFFSET(0x8F2FEF0)
#define RPG_CLIENT_CHIMERAWORKINFO_SYNCWORKHP_OFFSET UNITYSDK_OFFSET(0x8F32930)
#define RPG_CLIENT_CHIMERAWORKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x8F31890)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraWorkInfo_TypeDefinitionIndex = 50438;

	class ChimeraWorkInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChimeraWorkDataItem*>* _WorkDict; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKINFO_INIT_OFFSET))(this);
		}

		::System::Void SyncWorkHp(::System::UInt32 id, ::System::Int32 currentHp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKINFO_SYNCWORKHP_OFFSET))(this, id, currentHp);
		}

		::System::Void ResetWorkCurrentHp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKINFO_RESETWORKCURRENTHP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKINFO_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::ChimeraWorkDataItem* GetWorkData(::System::UInt32 id)
		{
			return ((::RPG::Client::ChimeraWorkDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKINFO_GETWORKDATA_OFFSET))(this, id);
		}
	};
}
