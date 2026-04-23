#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9E296C95827C90A8.h"
#include "unitysdk/RPG/GameCore/ActivitySubModeType.h"

class Class_0_16E4307DCC419505_498;
namespace RPG::GameCore { class PVEGameStatistics; }

#define CLASS_2_3EBAB11B18BEB589_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC688320)
#define CLASS_2_3EBAB11B18BEB589_GENSTATISTICS_OFFSET UNITYSDK_OFFSET(0xC688790)
#define CLASS_2_3EBAB11B18BEB589_GET_ACTIVITYSUBMODETYPE_OFFSET UNITYSDK_OFFSET(0xC688730)
#define CLASS_2_3EBAB11B18BEB589_METHOD_2_7AEDC3D73D7F7515_OFFSET UNITYSDK_OFFSET(0xC6886D0)
#define CLASS_2_3EBAB11B18BEB589_ONBATTLEINSTANCECREATED_OFFSET UNITYSDK_OFFSET(0xC688740)
#define CLASS_2_3EBAB11B18BEB589_ONINITIALIZE_OFFSET UNITYSDK_OFFSET(0xC688370)
#define CLASS_2_3EBAB11B18BEB589__CTOR_OFFSET UNITYSDK_OFFSET(0xC688910)
#define CLASS_2_3EBAB11B18BEB589___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC688920)
#define CLASS_2_3EBAB11B18BEB589___IFIXBASEPROXY_GENSTATISTICS_OFFSET UNITYSDK_OFFSET(0xC688A70)
#define CLASS_2_3EBAB11B18BEB589___IFIXBASEPROXY_ONBATTLEINSTANCECREATED_OFFSET UNITYSDK_OFFSET(0xC688A10)
#define CLASS_2_3EBAB11B18BEB589___IFIXBASEPROXY_ONINITIALIZE_OFFSET UNITYSDK_OFFSET(0xC6889B0)

inline static constexpr unsigned int Class_2_3EBAB11B18BEB589_TypeDefinitionIndex = 51640;

class Class_2_3EBAB11B18BEB589 : public ::Class_1_9E296C95827C90A8
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3EBAB11B18BEB589__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3EBAB11B18BEB589_DISPOSE_OFFSET))(this);
	}

	::System::Void OnInitialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3EBAB11B18BEB589_ONINITIALIZE_OFFSET))(this);
	}

	::System::Void Method_2_7AEDC3D73D7F7515(::Class_0_16E4307DCC419505_498* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_498*))((::PBYTE)hIl2Cpp + CLASS_2_3EBAB11B18BEB589_METHOD_2_7AEDC3D73D7F7515_OFFSET))(this, a1);
	}

	::RPG::GameCore::ActivitySubModeType get_ActivitySubModeType()
	{
		return ((::RPG::GameCore::ActivitySubModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3EBAB11B18BEB589_GET_ACTIVITYSUBMODETYPE_OFFSET))(this);
	}

	::System::Void OnBattleInstanceCreated()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3EBAB11B18BEB589_ONBATTLEINSTANCECREATED_OFFSET))(this);
	}

	::System::Void GenStatistics(::RPG::GameCore::PVEGameStatistics* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PVEGameStatistics*))((::PBYTE)hIl2Cpp + CLASS_2_3EBAB11B18BEB589_GENSTATISTICS_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3EBAB11B18BEB589___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnInitialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3EBAB11B18BEB589___IFIXBASEPROXY_ONINITIALIZE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnBattleInstanceCreated()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3EBAB11B18BEB589___IFIXBASEPROXY_ONBATTLEINSTANCECREATED_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_GenStatistics(::RPG::GameCore::PVEGameStatistics* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PVEGameStatistics*))((::PBYTE)hIl2Cpp + CLASS_2_3EBAB11B18BEB589___IFIXBASEPROXY_GENSTATISTICS_OFFSET))(this, P0);
	}
};
