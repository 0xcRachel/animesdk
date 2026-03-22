#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGameRefData; }
namespace RPG::Client { class GridFightGameRefFilter; }
namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9386660)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C__DISPLAYCLASS6_0___RELEATIVESORT_B__0_OFFSET UNITYSDK_OFFSET(0x93886C0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C__DISPLAYCLASS6_0___RELEATIVESORT_B__1_OFFSET UNITYSDK_OFFSET(0x9388720)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C__DISPLAYCLASS6_0___RELEATIVESORT_B__2_OFFSET UNITYSDK_OFFSET(0x93887E0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C__DISPLAYCLASS6_0___RELEATIVESORT_B__3_OFFSET UNITYSDK_OFFSET(0x9388810)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C__DISPLAYCLASS6_0___RELEATIVESORT_B__8_OFFSET UNITYSDK_OFFSET(0x9388780)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C__DISPLAYCLASS6_0___RELEATIVESORT_B__9_OFFSET UNITYSDK_OFFSET(0x93887B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefFilter___c__DisplayClass6_0_TypeDefinitionIndex = 51441;

	class GridFightGameRefFilter___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightGameRefFilter* __4__this; // 0x10
		::RPG::Client::GridFightGameRefData* data1; // 0x18
		::RPG::Client::GridFightGameRefData* data2; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __ReleativeSort_b__0(::RPG::Client::GridFightRole* role)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C__DISPLAYCLASS6_0___RELEATIVESORT_B__0_OFFSET))(this, role);
		}

		::System::Boolean __ReleativeSort_b__1(::RPG::Client::GridFightRole* role)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C__DISPLAYCLASS6_0___RELEATIVESORT_B__1_OFFSET))(this, role);
		}

		::System::UInt32 __ReleativeSort_b__8(::System::UInt32 id)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C__DISPLAYCLASS6_0___RELEATIVESORT_B__8_OFFSET))(this, id);
		}

		::System::UInt32 __ReleativeSort_b__9(::System::UInt32 id)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C__DISPLAYCLASS6_0___RELEATIVESORT_B__9_OFFSET))(this, id);
		}

		::System::Boolean __ReleativeSort_b__2(::RPG::Client::GridFightRole* role)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C__DISPLAYCLASS6_0___RELEATIVESORT_B__2_OFFSET))(this, role);
		}

		::System::Boolean __ReleativeSort_b__3(::RPG::Client::GridFightRole* role)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C__DISPLAYCLASS6_0___RELEATIVESORT_B__3_OFFSET))(this, role);
		}
	};
}
