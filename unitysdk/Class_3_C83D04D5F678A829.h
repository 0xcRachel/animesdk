#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"
#include "unitysdk/RPG/GameCore/SubMissionState.h"

namespace RPG { template <typename T> class PoolHashSet_1; }
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MissionModule; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitSubMissionStateChange; }

#define CLASS_3_C83D04D5F678A829_DISPOSE_OFFSET UNITYSDK_OFFSET(0x87416C0)
#define CLASS_3_C83D04D5F678A829_METHOD_3_66AADFEA4F4A43FE_OFFSET UNITYSDK_OFFSET(0x8741950)
#define CLASS_3_C83D04D5F678A829__CTOR_OFFSET UNITYSDK_OFFSET(0x8741360)
#define CLASS_3_C83D04D5F678A829__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x8741730)
#define CLASS_3_C83D04D5F678A829__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x8741810)
#define CLASS_3_C83D04D5F678A829__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x87418B0)
#define CLASS_3_C83D04D5F678A829___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8741B70)
#define CLASS_3_C83D04D5F678A829___IFIXBASEPROXY__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x8741BE0)
#define CLASS_3_C83D04D5F678A829___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x8A87EA0)
#define CLASS_3_C83D04D5F678A829___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x8A87EB0)

inline static constexpr unsigned int Class_3_C83D04D5F678A829_TypeDefinitionIndex = 42275;

class Class_3_C83D04D5F678A829 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitSubMissionStateChange*>
{
public:
	::RPG::PoolHashSet_1<::System::UInt32>* Field_3_0; // 0x68
	::RPG::Client::MapDef* Field_3_2; // 0x70
	::RPG::Client::MissionModule* Field_3_1; // 0x78

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitSubMissionStateChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitSubMissionStateChange*))((::PBYTE)hIl2Cpp + CLASS_3_C83D04D5F678A829__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C83D04D5F678A829_DISPOSE_OFFSET))(this);
	}

	::System::Boolean _PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C83D04D5F678A829__PREPAREDATA_OFFSET))(this);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C83D04D5F678A829__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C83D04D5F678A829__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void Method_3_66AADFEA4F4A43FE(::System::UInt32 a1, ::RPG::GameCore::SubMissionState a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::SubMissionState, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_C83D04D5F678A829_METHOD_3_66AADFEA4F4A43FE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C83D04D5F678A829___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy__PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C83D04D5F678A829___IFIXBASEPROXY__PREPAREDATA_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C83D04D5F678A829___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C83D04D5F678A829___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}
};
