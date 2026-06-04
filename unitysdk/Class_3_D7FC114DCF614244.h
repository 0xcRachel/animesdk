#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MapRotationListenerBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitRotatableRegionLoadingStateChange; }
namespace System { class Object; }

#define CLASS_3_D7FC114DCF614244_METHOD_3_1615E74BDA0D0348_OFFSET UNITYSDK_OFFSET(0x15D22A10)
#define CLASS_3_D7FC114DCF614244_METHOD_3_2C8484BE9A26CCD5_OFFSET UNITYSDK_OFFSET(0x15D22950)
#define CLASS_3_D7FC114DCF614244_METHOD_3_5FBAD89A54D9F070_OFFSET UNITYSDK_OFFSET(0x15D22830)
#define CLASS_3_D7FC114DCF614244_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15D227E0)
#define CLASS_3_D7FC114DCF614244_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15D228F0)
#define CLASS_3_D7FC114DCF614244__CTOR_OFFSET UNITYSDK_OFFSET(0x15D22720)
#define CLASS_3_D7FC114DCF614244___IFIXBASEPROXY_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15D22A80)
#define CLASS_3_D7FC114DCF614244___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15D22AD0)

inline static constexpr unsigned int Class_3_D7FC114DCF614244_TypeDefinitionIndex = 49534;

class Class_3_D7FC114DCF614244 : public ::RPG::GameCore::MapRotationListenerBase_1<::RPG::GameCore::WaitRotatableRegionLoadingStateChange*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitRotatableRegionLoadingStateChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitRotatableRegionLoadingStateChange*))((::PBYTE)hIl2Cpp + CLASS_3_D7FC114DCF614244__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D7FC114DCF614244_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D7FC114DCF614244_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_5FBAD89A54D9F070()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D7FC114DCF614244_METHOD_3_5FBAD89A54D9F070_OFFSET))(this);
	}

	::System::Void Method_3_2C8484BE9A26CCD5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D7FC114DCF614244_METHOD_3_2C8484BE9A26CCD5_OFFSET))(this);
	}

	::System::Void Method_3_1615E74BDA0D0348(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_D7FC114DCF614244_METHOD_3_1615E74BDA0D0348_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D7FC114DCF614244___IFIXBASEPROXY_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D7FC114DCF614244___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}
};
