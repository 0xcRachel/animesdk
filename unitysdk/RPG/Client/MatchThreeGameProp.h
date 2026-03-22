#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IMatchThreePropData; }

#define RPG_CLIENT_MATCHTHREEGAMEPROP_CREATE_OFFSET UNITYSDK_OFFSET(0x96654C0)
#define RPG_CLIENT_MATCHTHREEGAMEPROP_GET_CANUSE_OFFSET UNITYSDK_OFFSET(0x9665740)
#define RPG_CLIENT_MATCHTHREEGAMEPROP_GET_DATA_OFFSET UNITYSDK_OFFSET(0x9665780)
#define RPG_CLIENT_MATCHTHREEGAMEPROP_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x9665760)
#define RPG_CLIENT_MATCHTHREEGAMEPROP_GET_PROPID_OFFSET UNITYSDK_OFFSET(0x9656D20)
#define RPG_CLIENT_MATCHTHREEGAMEPROP_GET_PROPLEVEL_OFFSET UNITYSDK_OFFSET(0x9665120)
#define RPG_CLIENT_MATCHTHREEGAMEPROP_GET_REMAINCOUNT_OFFSET UNITYSDK_OFFSET(0x9665720)
#define RPG_CLIENT_MATCHTHREEGAMEPROP_INIT_OFFSET UNITYSDK_OFFSET(0x96657A0)
#define RPG_CLIENT_MATCHTHREEGAMEPROP_SET_CANUSE_OFFSET UNITYSDK_OFFSET(0x9665750)
#define RPG_CLIENT_MATCHTHREEGAMEPROP_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x9665770)
#define RPG_CLIENT_MATCHTHREEGAMEPROP_SET_REMAINCOUNT_OFFSET UNITYSDK_OFFSET(0x9665730)
#define RPG_CLIENT_MATCHTHREEGAMEPROP__CTOR_OFFSET UNITYSDK_OFFSET(0x9665790)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeGameProp_TypeDefinitionIndex = 52515;

	class MatchThreeGameProp : public ::System::Object
	{
	public:
		::RPG::Client::IMatchThreePropData* _Data_k__BackingField; // 0x10
		::System::UInt32 _Index_k__BackingField; // 0x18
		::System::UInt32 _RemainCount_k__BackingField; // 0x1C
		::System::Boolean _CanUse_k__BackingField; // 0x20

		::System::Void _ctor(::RPG::Client::IMatchThreePropData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IMatchThreePropData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAMEPROP__CTOR_OFFSET))(this, data);
		}

		::System::UInt32 get_PropID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAMEPROP_GET_PROPID_OFFSET))(this);
		}

		::System::UInt32 get_PropLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAMEPROP_GET_PROPLEVEL_OFFSET))(this);
		}

		::System::UInt32 get_RemainCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAMEPROP_GET_REMAINCOUNT_OFFSET))(this);
		}

		::System::Void set_RemainCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAMEPROP_SET_REMAINCOUNT_OFFSET))(this, value);
		}

		::System::Boolean get_CanUse()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAMEPROP_GET_CANUSE_OFFSET))(this);
		}

		::System::Void set_CanUse(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAMEPROP_SET_CANUSE_OFFSET))(this, value);
		}

		::System::UInt32 get_Index()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAMEPROP_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAMEPROP_SET_INDEX_OFFSET))(this, value);
		}

		::RPG::Client::IMatchThreePropData* get_Data()
		{
			return ((::RPG::Client::IMatchThreePropData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAMEPROP_GET_DATA_OFFSET))(this);
		}

		static ::RPG::Client::MatchThreeGameProp* Create(::RPG::Client::IMatchThreePropData* data)
		{
			return ((::RPG::Client::MatchThreeGameProp*(*)(::RPG::Client::IMatchThreePropData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAMEPROP_CREATE_OFFSET))(data);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAMEPROP_INIT_OFFSET))(this);
		}
	};
}
