#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E408E6D7F3D1822C.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::Client { class MatchThreeBoard; }

#define CLASS_3_A68E2F9B8ECA8EC4_METHOD_3_B009EDD65A2C43CD_OFFSET UNITYSDK_OFFSET(0x1058E7D0)
#define CLASS_3_A68E2F9B8ECA8EC4_METHOD_3_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0x1058EA40)
#define CLASS_3_A68E2F9B8ECA8EC4_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x1058E990)
#define CLASS_3_A68E2F9B8ECA8EC4_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1058E8E0)
#define CLASS_3_A68E2F9B8ECA8EC4__CTOR_OFFSET UNITYSDK_OFFSET(0x1058EA90)
#define CLASS_3_A68E2F9B8ECA8EC4___IFIXBASEPROXY_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x1058EB00)
#define CLASS_3_A68E2F9B8ECA8EC4___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1058EAA0)

inline static constexpr unsigned int Class_3_A68E2F9B8ECA8EC4_TypeDefinitionIndex = 52341;

class Class_3_A68E2F9B8ECA8EC4 : public ::Class_2_E408E6D7F3D1822C
{
public:
	::RPG::PoolList_1<::UnityEngine::Vector2Int>* Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A68E2F9B8ECA8EC4__CTOR_OFFSET))(this);
	}

	static ::Class_3_A68E2F9B8ECA8EC4* Method_3_B009EDD65A2C43CD(::RPG::Client::MatchThreeBoard* a1)
	{
		return ((::Class_3_A68E2F9B8ECA8EC4*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + CLASS_3_A68E2F9B8ECA8EC4_METHOD_3_B009EDD65A2C43CD_OFFSET))(a1);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A68E2F9B8ECA8EC4_ONEXECUTE_OFFSET))(this);
	}

	::System::Void OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A68E2F9B8ECA8EC4_ONCLEAR_OFFSET))(this);
	}

	::System::Void Method_3_EBEE0D0A222A8264()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A68E2F9B8ECA8EC4_METHOD_3_EBEE0D0A222A8264_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A68E2F9B8ECA8EC4___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A68E2F9B8ECA8EC4___IFIXBASEPROXY_ONCLEAR_OFFSET))(this);
	}
};
