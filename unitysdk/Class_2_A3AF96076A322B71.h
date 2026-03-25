#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9E296C95827C90A8.h"
#include "unitysdk/RPG/GameCore/ActivitySubModeType.h"

class Class_0_16E4307DCC419505_415;
class Class_1_19B7EEF756261CFE;
namespace RPG::GameCore { class PVEGameStatistics; }

#define CLASS_2_A3AF96076A322B71_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF393390)
#define CLASS_2_A3AF96076A322B71_GENSTATISTICS_OFFSET UNITYSDK_OFFSET(0xF393800)
#define CLASS_2_A3AF96076A322B71_GET_ACTIVITYSUBMODETYPE_OFFSET UNITYSDK_OFFSET(0xF3937A0)
#define CLASS_2_A3AF96076A322B71_METHOD_2_7AEDC3D73D7F7515_OFFSET UNITYSDK_OFFSET(0xF393740)
#define CLASS_2_A3AF96076A322B71_ONBATTLEINSTANCECREATED_OFFSET UNITYSDK_OFFSET(0xF3937B0)
#define CLASS_2_A3AF96076A322B71_ONINITIALIZE_OFFSET UNITYSDK_OFFSET(0xF3933E0)
#define CLASS_2_A3AF96076A322B71__CTOR_OFFSET UNITYSDK_OFFSET(0xF393980)
#define CLASS_2_A3AF96076A322B71___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF393990)
#define CLASS_2_A3AF96076A322B71___IFIXBASEPROXY_GENSTATISTICS_OFFSET UNITYSDK_OFFSET(0xF393AC0)
#define CLASS_2_A3AF96076A322B71___IFIXBASEPROXY_ONBATTLEINSTANCECREATED_OFFSET UNITYSDK_OFFSET(0xF393A60)
#define CLASS_2_A3AF96076A322B71___IFIXBASEPROXY_ONINITIALIZE_OFFSET UNITYSDK_OFFSET(0xF393A00)

inline static constexpr unsigned int Class_2_A3AF96076A322B71_TypeDefinitionIndex = 44893;

class Class_2_A3AF96076A322B71 : public ::Class_1_9E296C95827C90A8
{
public:
	::Class_1_19B7EEF756261CFE* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3AF96076A322B71__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3AF96076A322B71_DISPOSE_OFFSET))(this);
	}

	::System::Void OnInitialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3AF96076A322B71_ONINITIALIZE_OFFSET))(this);
	}

	::System::Void Method_2_7AEDC3D73D7F7515(::Class_0_16E4307DCC419505_415* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_415*))((::PBYTE)hIl2Cpp + CLASS_2_A3AF96076A322B71_METHOD_2_7AEDC3D73D7F7515_OFFSET))(this, a1);
	}

	::RPG::GameCore::ActivitySubModeType get_ActivitySubModeType()
	{
		return ((::RPG::GameCore::ActivitySubModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3AF96076A322B71_GET_ACTIVITYSUBMODETYPE_OFFSET))(this);
	}

	::System::Void OnBattleInstanceCreated()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3AF96076A322B71_ONBATTLEINSTANCECREATED_OFFSET))(this);
	}

	::System::Void GenStatistics(::RPG::GameCore::PVEGameStatistics* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PVEGameStatistics*))((::PBYTE)hIl2Cpp + CLASS_2_A3AF96076A322B71_GENSTATISTICS_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3AF96076A322B71___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnInitialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3AF96076A322B71___IFIXBASEPROXY_ONINITIALIZE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnBattleInstanceCreated()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3AF96076A322B71___IFIXBASEPROXY_ONBATTLEINSTANCECREATED_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_GenStatistics(::RPG::GameCore::PVEGameStatistics* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PVEGameStatistics*))((::PBYTE)hIl2Cpp + CLASS_2_A3AF96076A322B71___IFIXBASEPROXY_GENSTATISTICS_OFFSET))(this, P0);
	}
};
