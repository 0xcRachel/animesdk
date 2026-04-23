#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CakeRaceOwlbertAnim; }
namespace System { class String; }

#define RPG_CLIENT_CAKERACE_CAKERACEOWLBERTANIMDATAITEM_CREATE_OFFSET UNITYSDK_OFFSET(0x15FEC900)
#define RPG_CLIENT_CAKERACE_CAKERACEOWLBERTANIMDATAITEM_GET_INANIMNAME_OFFSET UNITYSDK_OFFSET(0x15FEC960)
#define RPG_CLIENT_CAKERACE_CAKERACEOWLBERTANIMDATAITEM_GET_ISSINGLE_OFFSET UNITYSDK_OFFSET(0x15FEC9E0)
#define RPG_CLIENT_CAKERACE_CAKERACEOWLBERTANIMDATAITEM_GET_LOOPANIMNAME_OFFSET UNITYSDK_OFFSET(0x15FEC980)
#define RPG_CLIENT_CAKERACE_CAKERACEOWLBERTANIMDATAITEM_GET_OUTANIMNAME_OFFSET UNITYSDK_OFFSET(0x15FEC9A0)
#define RPG_CLIENT_CAKERACE_CAKERACEOWLBERTANIMDATAITEM_GET_SINGLEANIMNAME_OFFSET UNITYSDK_OFFSET(0x15FEC9C0)
#define RPG_CLIENT_CAKERACE_CAKERACEOWLBERTANIMDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x15FEC950)

namespace RPG::Client::CakeRace
{
	inline static constexpr unsigned int CakeRaceOwlbertAnimDataItem_TypeDefinitionIndex = 70231;

	class CakeRaceOwlbertAnimDataItem : public ::System::Object
	{
	public:
		::RPG::GameCore::CakeRaceOwlbertAnim* _Config; // 0x10

		::System::Void _ctor(::RPG::GameCore::CakeRaceOwlbertAnim* config)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceOwlbertAnim*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEOWLBERTANIMDATAITEM__CTOR_OFFSET))(this, config);
		}

		static ::RPG::Client::CakeRace::CakeRaceOwlbertAnimDataItem* Create(::RPG::GameCore::CakeRaceOwlbertAnim* config)
		{
			return ((::RPG::Client::CakeRace::CakeRaceOwlbertAnimDataItem*(*)(::RPG::GameCore::CakeRaceOwlbertAnim*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEOWLBERTANIMDATAITEM_CREATE_OFFSET))(config);
		}

		::System::String* get_InAnimName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEOWLBERTANIMDATAITEM_GET_INANIMNAME_OFFSET))(this);
		}

		::System::String* get_LoopAnimName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEOWLBERTANIMDATAITEM_GET_LOOPANIMNAME_OFFSET))(this);
		}

		::System::String* get_OutAnimName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEOWLBERTANIMDATAITEM_GET_OUTANIMNAME_OFFSET))(this);
		}

		::System::String* get_SingleAnimName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEOWLBERTANIMDATAITEM_GET_SINGLEANIMNAME_OFFSET))(this);
		}

		::System::Boolean get_IsSingle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEOWLBERTANIMDATAITEM_GET_ISSINGLE_OFFSET))(this);
		}
	};
}
