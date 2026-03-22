#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"
#include "unitysdk/Struct_2_9BF8902D61AE1796.h"

class Class_3_A4B1C029ADA59FA1;
namespace RPG::Client { class FiveDimGameInstance; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2877DF668FE0B8E8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9F03150)
#define CLASS_3_2877DF668FE0B8E8__CTOR_OFFSET UNITYSDK_OFFSET(0x9F02EF0)
#define CLASS_3_2877DF668FE0B8E8__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x9F031A0)
#define CLASS_3_2877DF668FE0B8E8__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x9F03220)
#define CLASS_3_2877DF668FE0B8E8__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x9F033B0)
#define CLASS_3_2877DF668FE0B8E8___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9F03520)
#define CLASS_3_2877DF668FE0B8E8___IFIXBASEPROXY__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x9F03570)
#define CLASS_3_2877DF668FE0B8E8___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x9F035F0)
#define CLASS_3_2877DF668FE0B8E8___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x9F03600)

inline static constexpr unsigned int Class_3_2877DF668FE0B8E8_TypeDefinitionIndex = 41696;

class Class_3_2877DF668FE0B8E8 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::Class_3_A4B1C029ADA59FA1*>
{
public:
	::RPG::Client::FiveDimGameInstance* Field_3_0; // 0x68
	::Struct_2_9BF8902D61AE1796 Field_3_1; // 0x70

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_A4B1C029ADA59FA1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_A4B1C029ADA59FA1*))((::PBYTE)hIl2Cpp + CLASS_3_2877DF668FE0B8E8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2877DF668FE0B8E8_DISPOSE_OFFSET))(this);
	}

	::System::Boolean _PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2877DF668FE0B8E8__PREPAREDATA_OFFSET))(this);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2877DF668FE0B8E8__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2877DF668FE0B8E8__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2877DF668FE0B8E8___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy__PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2877DF668FE0B8E8___IFIXBASEPROXY__PREPAREDATA_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2877DF668FE0B8E8___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2877DF668FE0B8E8___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}
};
