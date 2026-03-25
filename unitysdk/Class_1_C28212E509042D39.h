#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_C28212E509042D39_GET_ASYNCREQUESTS_OFFSET UNITYSDK_OFFSET(0x887FE40)
#define CLASS_1_C28212E509042D39_GET_AVGLIFETIMEMS_OFFSET UNITYSDK_OFFSET(0x887FF40)
#define CLASS_1_C28212E509042D39_GET_BLOCKEDBYMAXCOUNT_OFFSET UNITYSDK_OFFSET(0x887FEC0)
#define CLASS_1_C28212E509042D39_GET_CREATES_OFFSET UNITYSDK_OFFSET(0x887FE60)
#define CLASS_1_C28212E509042D39_GET_CURRENTACTIVECOUNT_OFFSET UNITYSDK_OFFSET(0x887FEE0)
#define CLASS_1_C28212E509042D39_GET_CURRENTPOOLCACHEDCOUNT_OFFSET UNITYSDK_OFFSET(0x887FF20)
#define CLASS_1_C28212E509042D39_GET_EFFECTPATH_OFFSET UNITYSDK_OFFSET(0x887FE00)
#define CLASS_1_C28212E509042D39_GET_LIFETIMESAMPLECOUNT_OFFSET UNITYSDK_OFFSET(0x887FF60)
#define CLASS_1_C28212E509042D39_GET_PEAKACTIVECOUNT_OFFSET UNITYSDK_OFFSET(0x887FF00)
#define CLASS_1_C28212E509042D39_GET_REMOVES_OFFSET UNITYSDK_OFFSET(0x887FEA0)
#define CLASS_1_C28212E509042D39_GET_REUSES_OFFSET UNITYSDK_OFFSET(0x887FE80)
#define CLASS_1_C28212E509042D39_GET_SYNCREQUESTS_OFFSET UNITYSDK_OFFSET(0x887FE20)
#define CLASS_1_C28212E509042D39_METHOD_1_85C746F74910D9C1_OFFSET UNITYSDK_OFFSET(0x887FFD0)
#define CLASS_1_C28212E509042D39_METHOD_1_D66F211912D83957_OFFSET UNITYSDK_OFFSET(0x887FF80)
#define CLASS_1_C28212E509042D39_SET_ASYNCREQUESTS_OFFSET UNITYSDK_OFFSET(0x887FE50)
#define CLASS_1_C28212E509042D39_SET_AVGLIFETIMEMS_OFFSET UNITYSDK_OFFSET(0x887FF50)
#define CLASS_1_C28212E509042D39_SET_BLOCKEDBYMAXCOUNT_OFFSET UNITYSDK_OFFSET(0x887FED0)
#define CLASS_1_C28212E509042D39_SET_CREATES_OFFSET UNITYSDK_OFFSET(0x887FE70)
#define CLASS_1_C28212E509042D39_SET_CURRENTACTIVECOUNT_OFFSET UNITYSDK_OFFSET(0x887FEF0)
#define CLASS_1_C28212E509042D39_SET_CURRENTPOOLCACHEDCOUNT_OFFSET UNITYSDK_OFFSET(0x887FF30)
#define CLASS_1_C28212E509042D39_SET_EFFECTPATH_OFFSET UNITYSDK_OFFSET(0x887FE10)
#define CLASS_1_C28212E509042D39_SET_LIFETIMESAMPLECOUNT_OFFSET UNITYSDK_OFFSET(0x887FF70)
#define CLASS_1_C28212E509042D39_SET_PEAKACTIVECOUNT_OFFSET UNITYSDK_OFFSET(0x887FF10)
#define CLASS_1_C28212E509042D39_SET_REMOVES_OFFSET UNITYSDK_OFFSET(0x887FEB0)
#define CLASS_1_C28212E509042D39_SET_REUSES_OFFSET UNITYSDK_OFFSET(0x887FE90)
#define CLASS_1_C28212E509042D39_SET_SYNCREQUESTS_OFFSET UNITYSDK_OFFSET(0x887FE30)
#define CLASS_1_C28212E509042D39__CTOR_OFFSET UNITYSDK_OFFSET(0x8880030)

inline static constexpr unsigned int Class_1_C28212E509042D39_TypeDefinitionIndex = 63304;

class Class_1_C28212E509042D39 : public ::System::Object
{
public:
	::System::String* _EffectPath_k__BackingField; // 0x10
	::System::Int64 _Removes_k__BackingField; // 0x18
	::System::Int32 _CurrentActiveCount_k__BackingField; // 0x20
	::System::Int32 _PeakActiveCount_k__BackingField; // 0x24
	::System::Int64 _Reuses_k__BackingField; // 0x28
	::System::Int64 _BlockedByMaxCount_k__BackingField; // 0x30
	::System::Int64 _SyncRequests_k__BackingField; // 0x38
	::System::Int64 _AsyncRequests_k__BackingField; // 0x40
	::System::Int32 _CurrentPoolCachedCount_k__BackingField; // 0x48
	::System::Int64 _LifetimeSampleCount_k__BackingField; // 0x50
	::System::Double _AvgLifetimeMs_k__BackingField; // 0x58
	::System::Int64 _Creates_k__BackingField; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C28212E509042D39__CTOR_OFFSET))(this);
	}

	::System::String* get_EffectPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C28212E509042D39_GET_EFFECTPATH_OFFSET))(this);
	}

	::System::Void set_EffectPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C28212E509042D39_SET_EFFECTPATH_OFFSET))(this, value);
	}

	::System::Int64 get_SyncRequests()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C28212E509042D39_GET_SYNCREQUESTS_OFFSET))(this);
	}

	::System::Void set_SyncRequests(::System::Int64 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_C28212E509042D39_SET_SYNCREQUESTS_OFFSET))(this, value);
	}

	::System::Int64 get_AsyncRequests()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C28212E509042D39_GET_ASYNCREQUESTS_OFFSET))(this);
	}

	::System::Void set_AsyncRequests(::System::Int64 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_C28212E509042D39_SET_ASYNCREQUESTS_OFFSET))(this, value);
	}

	::System::Int64 get_Creates()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C28212E509042D39_GET_CREATES_OFFSET))(this);
	}

	::System::Void set_Creates(::System::Int64 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_C28212E509042D39_SET_CREATES_OFFSET))(this, value);
	}

	::System::Int64 get_Reuses()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C28212E509042D39_GET_REUSES_OFFSET))(this);
	}

	::System::Void set_Reuses(::System::Int64 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_C28212E509042D39_SET_REUSES_OFFSET))(this, value);
	}

	::System::Int64 get_Removes()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C28212E509042D39_GET_REMOVES_OFFSET))(this);
	}

	::System::Void set_Removes(::System::Int64 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_C28212E509042D39_SET_REMOVES_OFFSET))(this, value);
	}

	::System::Int64 get_BlockedByMaxCount()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C28212E509042D39_GET_BLOCKEDBYMAXCOUNT_OFFSET))(this);
	}

	::System::Void set_BlockedByMaxCount(::System::Int64 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_C28212E509042D39_SET_BLOCKEDBYMAXCOUNT_OFFSET))(this, value);
	}

	::System::Int32 get_CurrentActiveCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C28212E509042D39_GET_CURRENTACTIVECOUNT_OFFSET))(this);
	}

	::System::Void set_CurrentActiveCount(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C28212E509042D39_SET_CURRENTACTIVECOUNT_OFFSET))(this, value);
	}

	::System::Int32 get_PeakActiveCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C28212E509042D39_GET_PEAKACTIVECOUNT_OFFSET))(this);
	}

	::System::Void set_PeakActiveCount(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C28212E509042D39_SET_PEAKACTIVECOUNT_OFFSET))(this, value);
	}

	::System::Int32 get_CurrentPoolCachedCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C28212E509042D39_GET_CURRENTPOOLCACHEDCOUNT_OFFSET))(this);
	}

	::System::Void set_CurrentPoolCachedCount(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C28212E509042D39_SET_CURRENTPOOLCACHEDCOUNT_OFFSET))(this, value);
	}

	::System::Double get_AvgLifetimeMs()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C28212E509042D39_GET_AVGLIFETIMEMS_OFFSET))(this);
	}

	::System::Void set_AvgLifetimeMs(::System::Double value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_C28212E509042D39_SET_AVGLIFETIMEMS_OFFSET))(this, value);
	}

	::System::Int64 get_LifetimeSampleCount()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C28212E509042D39_GET_LIFETIMESAMPLECOUNT_OFFSET))(this);
	}

	::System::Void set_LifetimeSampleCount(::System::Int64 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_C28212E509042D39_SET_LIFETIMESAMPLECOUNT_OFFSET))(this, value);
	}

	::System::Int64 Method_1_D66F211912D83957()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C28212E509042D39_METHOD_1_D66F211912D83957_OFFSET))(this);
	}

	::System::Double Method_1_85C746F74910D9C1()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C28212E509042D39_METHOD_1_85C746F74910D9C1_OFFSET))(this);
	}
};
