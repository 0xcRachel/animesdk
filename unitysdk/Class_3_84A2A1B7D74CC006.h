#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::GameCore { class FreeStyleComponent; }
namespace RPG::GameCore { class ST_Main_PlayFreeStyle; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_84A2A1B7D74CC006_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD055550)
#define CLASS_3_84A2A1B7D74CC006_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD0555A0)
#define CLASS_3_84A2A1B7D74CC006_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xD055940)
#define CLASS_3_84A2A1B7D74CC006_TICK_OFFSET UNITYSDK_OFFSET(0xD055990)
#define CLASS_3_84A2A1B7D74CC006__CTOR_OFFSET UNITYSDK_OFFSET(0xD0554F0)
#define CLASS_3_84A2A1B7D74CC006___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD055B30)
#define CLASS_3_84A2A1B7D74CC006___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xD055B80)

inline static constexpr unsigned int Class_3_84A2A1B7D74CC006_TypeDefinitionIndex = 48202;

class Class_3_84A2A1B7D74CC006 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_PlayFreeStyle*>
{
public:
	::RPG::GameCore::FreeStyleComponent* Field_3_0; // 0x28
	::System::Single Field_3_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_PlayFreeStyle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_PlayFreeStyle*))((::PBYTE)hIl2Cpp + CLASS_3_84A2A1B7D74CC006__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_84A2A1B7D74CC006_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_84A2A1B7D74CC006_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_84A2A1B7D74CC006_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_84A2A1B7D74CC006_TICK_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_84A2A1B7D74CC006___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_84A2A1B7D74CC006___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
