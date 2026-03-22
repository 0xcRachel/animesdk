#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/VisualDebugging/Unity/SystemInterfaceFlags.h"
#include "unitysdk/System/Object.h"

namespace Entitas { class ISystem; }
namespace System { class String; }

#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_ADDCLEANUPDURATION_OFFSET UNITYSDK_OFFSET(0x11320DA0)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_ADDEXECUTIONDURATION_OFFSET UNITYSDK_OFFSET(0x11320D50)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GETINTERFACEFLAGS_OFFSET UNITYSDK_OFFSET(0x113219A0)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_ACCUMULATEDCLEANUPDURATION_OFFSET UNITYSDK_OFFSET(0x113218F0)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_ACCUMULATEDEXECUTIONDURATION_OFFSET UNITYSDK_OFFSET(0x113218A0)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_AREALLPARENTSACTIVE_OFFSET UNITYSDK_OFFSET(0x11321980)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_AVERAGECLEANUPDURATION_OFFSET UNITYSDK_OFFSET(0x11321920)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_AVERAGEEXECUTIONDURATION_OFFSET UNITYSDK_OFFSET(0x113218D0)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_CLEANUPDURATION_OFFSET UNITYSDK_OFFSET(0x11321940)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_INITIALIZATIONDURATION_OFFSET UNITYSDK_OFFSET(0x11321880)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_ISCLEANUPSYSTEMS_OFFSET UNITYSDK_OFFSET(0x11320070)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_ISEXECUTESYSTEMS_OFFSET UNITYSDK_OFFSET(0x11320050)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_ISINITIALIZESYSTEMS_OFFSET UNITYSDK_OFFSET(0x11320040)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_ISREACTIVESYSTEMS_OFFSET UNITYSDK_OFFSET(0x11320060)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_ISTEARDOWNSYSTEMS_OFFSET UNITYSDK_OFFSET(0x11320080)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_MAXCLEANUPDURATION_OFFSET UNITYSDK_OFFSET(0x11321910)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_MAXEXECUTIONDURATION_OFFSET UNITYSDK_OFFSET(0x113218C0)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_MINCLEANUPDURATION_OFFSET UNITYSDK_OFFSET(0x11321900)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_MINEXECUTIONDURATION_OFFSET UNITYSDK_OFFSET(0x113218B0)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_SYSTEMFULLNAME_OFFSET UNITYSDK_OFFSET(0x11321870)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_SYSTEMNAME_OFFSET UNITYSDK_OFFSET(0x11321860)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_SYSTEM_OFFSET UNITYSDK_OFFSET(0x11321850)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_TEARDOWNDURATION_OFFSET UNITYSDK_OFFSET(0x11321960)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_RESETDURATIONS_OFFSET UNITYSDK_OFFSET(0x113202C0)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_SET_CLEANUPDURATION_OFFSET UNITYSDK_OFFSET(0x11321950)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_SET_INITIALIZATIONDURATION_OFFSET UNITYSDK_OFFSET(0x11321890)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_SET_TEARDOWNDURATION_OFFSET UNITYSDK_OFFSET(0x11321970)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1131FD50)

namespace Entitas::VisualDebugging::Unity
{
	inline static constexpr unsigned int SystemInfo_TypeDefinitionIndex = 9285;

	class SystemInfo : public ::System::Object
	{
	public:
		::System::String* _systemName; // 0x10
		::Entitas::VisualDebugging::Unity::SystemInfo* parentSystemInfo; // 0x18
		::Entitas::ISystem* _system; // 0x20
		::System::String* _systemFullName; // 0x28
		::System::Double _maxCleanupDuration; // 0x30
		::System::Double _cleanupDuration_k__BackingField; // 0x38
		::System::Double _accumulatedCleanupDuration; // 0x40
		::System::Double _minExecutionDuration; // 0x48
		::System::Double _accumulatedExecutionDuration; // 0x50
		::System::Double _maxExecutionDuration; // 0x58
		::System::Double _initializationDuration_k__BackingField; // 0x60
		::System::Boolean isActive; // 0x68
		::System::Int32 _cleanupDurationsCount; // 0x6C
		::Entitas::VisualDebugging::Unity::SystemInterfaceFlags _interfaceFlags; // 0x70
		::System::Int32 _executionDurationsCount; // 0x74
		::System::Double _teardownDuration_k__BackingField; // 0x78
		::System::Double _minCleanupDuration; // 0x80

		::System::Void _ctor(::Entitas::ISystem* system)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::ISystem*))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO__CTOR_OFFSET))(this, system);
		}

		::Entitas::ISystem* get_system()
		{
			return ((::Entitas::ISystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_SYSTEM_OFFSET))(this);
		}

		::System::String* get_systemName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_SYSTEMNAME_OFFSET))(this);
		}

		::System::String* get_systemFullName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_SYSTEMFULLNAME_OFFSET))(this);
		}

		::System::Boolean get_isInitializeSystems()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_ISINITIALIZESYSTEMS_OFFSET))(this);
		}

		::System::Boolean get_isExecuteSystems()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_ISEXECUTESYSTEMS_OFFSET))(this);
		}

		::System::Boolean get_isCleanupSystems()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_ISCLEANUPSYSTEMS_OFFSET))(this);
		}

		::System::Boolean get_isTearDownSystems()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_ISTEARDOWNSYSTEMS_OFFSET))(this);
		}

		::System::Boolean get_isReactiveSystems()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_ISREACTIVESYSTEMS_OFFSET))(this);
		}

		::System::Double get_initializationDuration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_INITIALIZATIONDURATION_OFFSET))(this);
		}

		::System::Void set_initializationDuration(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_SET_INITIALIZATIONDURATION_OFFSET))(this, value);
		}

		::System::Double get_accumulatedExecutionDuration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_ACCUMULATEDEXECUTIONDURATION_OFFSET))(this);
		}

		::System::Double get_minExecutionDuration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_MINEXECUTIONDURATION_OFFSET))(this);
		}

		::System::Double get_maxExecutionDuration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_MAXEXECUTIONDURATION_OFFSET))(this);
		}

		::System::Double get_averageExecutionDuration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_AVERAGEEXECUTIONDURATION_OFFSET))(this);
		}

		::System::Double get_accumulatedCleanupDuration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_ACCUMULATEDCLEANUPDURATION_OFFSET))(this);
		}

		::System::Double get_minCleanupDuration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_MINCLEANUPDURATION_OFFSET))(this);
		}

		::System::Double get_maxCleanupDuration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_MAXCLEANUPDURATION_OFFSET))(this);
		}

		::System::Double get_averageCleanupDuration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_AVERAGECLEANUPDURATION_OFFSET))(this);
		}

		::System::Double get_cleanupDuration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_CLEANUPDURATION_OFFSET))(this);
		}

		::System::Void set_cleanupDuration(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_SET_CLEANUPDURATION_OFFSET))(this, value);
		}

		::System::Double get_teardownDuration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_TEARDOWNDURATION_OFFSET))(this);
		}

		::System::Void set_teardownDuration(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_SET_TEARDOWNDURATION_OFFSET))(this, value);
		}

		::System::Boolean get_areAllParentsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_AREALLPARENTSACTIVE_OFFSET))(this);
		}

		::System::Void AddExecutionDuration(::System::Double executionDuration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_ADDEXECUTIONDURATION_OFFSET))(this, executionDuration);
		}

		::System::Void AddCleanupDuration(::System::Double cleanupDuration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_ADDCLEANUPDURATION_OFFSET))(this, cleanupDuration);
		}

		::System::Void ResetDurations()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_RESETDURATIONS_OFFSET))(this);
		}

		static ::Entitas::VisualDebugging::Unity::SystemInterfaceFlags getInterfaceFlags(::Entitas::ISystem* system)
		{
			return ((::Entitas::VisualDebugging::Unity::SystemInterfaceFlags(*)(::Entitas::ISystem*))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GETINTERFACEFLAGS_OFFSET))(system);
		}
	};
}
