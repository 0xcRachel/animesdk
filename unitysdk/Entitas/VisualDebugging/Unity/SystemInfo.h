#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/VisualDebugging/Unity/SystemInterfaceFlags.h"
#include "unitysdk/System/Object.h"

namespace Entitas { class ISystem; }
namespace System { class String; }

#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_ADDCLEANUPDURATION_OFFSET UNITYSDK_OFFSET(0x1A641F40)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_ADDEXECUTIONDURATION_OFFSET UNITYSDK_OFFSET(0x1A641EE0)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GETINTERFACEFLAGS_OFFSET UNITYSDK_OFFSET(0x1A642900)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_ACCUMULATEDCLEANUPDURATION_OFFSET UNITYSDK_OFFSET(0x1A642850)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_ACCUMULATEDEXECUTIONDURATION_OFFSET UNITYSDK_OFFSET(0x1A642800)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_AREALLPARENTSACTIVE_OFFSET UNITYSDK_OFFSET(0x1A6428E0)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_AVERAGECLEANUPDURATION_OFFSET UNITYSDK_OFFSET(0x1A642880)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_AVERAGEEXECUTIONDURATION_OFFSET UNITYSDK_OFFSET(0x1A642830)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_CLEANUPDURATION_OFFSET UNITYSDK_OFFSET(0x1A6428A0)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_INITIALIZATIONDURATION_OFFSET UNITYSDK_OFFSET(0x1A6427E0)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_ISCLEANUPSYSTEMS_OFFSET UNITYSDK_OFFSET(0x1A6411F0)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_ISEXECUTESYSTEMS_OFFSET UNITYSDK_OFFSET(0x1A6411D0)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_ISINITIALIZESYSTEMS_OFFSET UNITYSDK_OFFSET(0x1A6411C0)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_ISREACTIVESYSTEMS_OFFSET UNITYSDK_OFFSET(0x1A6411E0)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_ISTEARDOWNSYSTEMS_OFFSET UNITYSDK_OFFSET(0x1A641200)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_MAXCLEANUPDURATION_OFFSET UNITYSDK_OFFSET(0x1A642870)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_MAXEXECUTIONDURATION_OFFSET UNITYSDK_OFFSET(0x1A642820)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_MINCLEANUPDURATION_OFFSET UNITYSDK_OFFSET(0x1A642860)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_MINEXECUTIONDURATION_OFFSET UNITYSDK_OFFSET(0x1A642810)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_SYSTEMFULLNAME_OFFSET UNITYSDK_OFFSET(0x1A6427D0)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_SYSTEMNAME_OFFSET UNITYSDK_OFFSET(0x1A6427C0)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_SYSTEM_OFFSET UNITYSDK_OFFSET(0x1A6427B0)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_GET_TEARDOWNDURATION_OFFSET UNITYSDK_OFFSET(0x1A6428C0)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_RESETDURATIONS_OFFSET UNITYSDK_OFFSET(0x1A641470)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_SET_CLEANUPDURATION_OFFSET UNITYSDK_OFFSET(0x1A6428B0)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_SET_INITIALIZATIONDURATION_OFFSET UNITYSDK_OFFSET(0x1A6427F0)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO_SET_TEARDOWNDURATION_OFFSET UNITYSDK_OFFSET(0x1A6428D0)
#define ENTITAS_VISUALDEBUGGING_UNITY_SYSTEMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A640ED0)

namespace Entitas::VisualDebugging::Unity
{
	inline static constexpr unsigned int SystemInfo_TypeDefinitionIndex = 9885;

	class SystemInfo : public ::System::Object
	{
	public:
		::Entitas::ISystem* _system; // 0x10
		::System::String* _systemName; // 0x18
		::System::String* _systemFullName; // 0x20
		::Entitas::VisualDebugging::Unity::SystemInfo* parentSystemInfo; // 0x28
		::System::Boolean isActive; // 0x30
		::System::Int32 _executionDurationsCount; // 0x34
		::System::Double _cleanupDuration_k__BackingField; // 0x38
		::System::Double _maxCleanupDuration; // 0x40
		::System::Double _minCleanupDuration; // 0x48
		::System::Double _initializationDuration_k__BackingField; // 0x50
		::System::Double _teardownDuration_k__BackingField; // 0x58
		::Entitas::VisualDebugging::Unity::SystemInterfaceFlags _interfaceFlags; // 0x60
		::System::Int32 _cleanupDurationsCount; // 0x64
		::System::Double _accumulatedCleanupDuration; // 0x68
		::System::Double _accumulatedExecutionDuration; // 0x70
		::System::Double _maxExecutionDuration; // 0x78
		::System::Double _minExecutionDuration; // 0x80

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
