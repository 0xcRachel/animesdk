#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/ThreadPriority.h"

namespace System { class String; }
namespace System::Threading { class Thread; }

#define HOUDINIENGINEUNITY_HEU_THREADEDTASK_ABORT_OFFSET UNITYSDK_OFFSET(0x17DF36D0)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASK_CLEANUP_OFFSET UNITYSDK_OFFSET(0x17DF3D20)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASK_DOWORK_OFFSET UNITYSDK_OFFSET(0x17DF3CF0)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASK_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x17DF2C50)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASK_GET_ISBACKGROUND_OFFSET UNITYSDK_OFFSET(0x17DF3E20)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASK_GET_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0x17DF3570)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASK_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x17DF3E00)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASK_GET_STOPREQUESTED_OFFSET UNITYSDK_OFFSET(0x17DF3C40)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASK_GET_TASKNAME_OFFSET UNITYSDK_OFFSET(0x17DF3DF0)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASK_ONCOMPLETE_OFFSET UNITYSDK_OFFSET(0x17DF3D00)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASK_ONSTOPPED_OFFSET UNITYSDK_OFFSET(0x17DF3D10)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASK_RESET_OFFSET UNITYSDK_OFFSET(0x17DF3720)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASK_RUN_OFFSET UNITYSDK_OFFSET(0x17DF3D30)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASK_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x17DF3250)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASK_SET_ISBACKGROUND_OFFSET UNITYSDK_OFFSET(0x17DF3E30)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASK_SET_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0x17DF3300)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASK_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x17DF3E10)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASK_SET_STOPREQUESTED_OFFSET UNITYSDK_OFFSET(0x17DF3620)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASK_START_OFFSET UNITYSDK_OFFSET(0x17DF2EE0)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASK_STOP_OFFSET UNITYSDK_OFFSET(0x17DF33B0)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASK_UPDATE_OFFSET UNITYSDK_OFFSET(0x17DF39D0)
#define HOUDINIENGINEUNITY_HEU_THREADEDTASK__CTOR_OFFSET UNITYSDK_OFFSET(0x17DF3E40)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_ThreadedTask_TypeDefinitionIndex = 43672;

	class HEU_ThreadedTask : public ::System::Object
	{
	public:
		::System::String* _name; // 0x10
		::System::Threading::Thread* _thread; // 0x18
		::System::Object* _lockHandle; // 0x20
		::System::Threading::ThreadPriority _priority; // 0x28
		::System::Boolean _isBackground; // 0x2C
		::System::Boolean _isComplete; // 0x2D
		::System::Boolean _isActive; // 0x2E
		::System::Boolean _stopRequested; // 0x2F

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASK__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASK_START_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASK_STOP_OFFSET))(this);
		}

		::System::Void Abort()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASK_ABORT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASK_RESET_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASK_UPDATE_OFFSET))(this);
		}

		::System::Void DoWork()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASK_DOWORK_OFFSET))(this);
		}

		::System::Void OnComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASK_ONCOMPLETE_OFFSET))(this);
		}

		::System::Void OnStopped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASK_ONSTOPPED_OFFSET))(this);
		}

		::System::Void CleanUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASK_CLEANUP_OFFSET))(this);
		}

		::System::Void Run()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASK_RUN_OFFSET))(this);
		}

		::System::String* get_TaskName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASK_GET_TASKNAME_OFFSET))(this);
		}

		::System::Boolean get_IsComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASK_GET_ISCOMPLETE_OFFSET))(this);
		}

		::System::Void set_IsComplete(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASK_SET_ISCOMPLETE_OFFSET))(this, value);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASK_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Void set_IsActive(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASK_SET_ISACTIVE_OFFSET))(this, value);
		}

		::System::Boolean get_StopRequested()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASK_GET_STOPREQUESTED_OFFSET))(this);
		}

		::System::Void set_StopRequested(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASK_SET_STOPREQUESTED_OFFSET))(this, value);
		}

		::System::Threading::ThreadPriority get_Priority()
		{
			return ((::System::Threading::ThreadPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASK_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void set_Priority(::System::Threading::ThreadPriority value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::ThreadPriority))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASK_SET_PRIORITY_OFFSET))(this, value);
		}

		::System::Boolean get_IsBackground()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASK_GET_ISBACKGROUND_OFFSET))(this);
		}

		::System::Void set_IsBackground(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_THREADEDTASK_SET_ISBACKGROUND_OFFSET))(this, value);
		}
	};
}
