#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Memory_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"

#define CLASS_1_EC326A3215DF194D_ADVANCE_OFFSET UNITYSDK_OFFSET(0x166038C0)
#define CLASS_1_EC326A3215DF194D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16603E30)
#define CLASS_1_EC326A3215DF194D_GETMEMORY_OFFSET UNITYSDK_OFFSET(0x16603CA0)
#define CLASS_1_EC326A3215DF194D_GETSPAN_OFFSET UNITYSDK_OFFSET(0x166039B0)
#define CLASS_1_EC326A3215DF194D_GET_WRITTENCOUNT_OFFSET UNITYSDK_OFFSET(0x16604070)
#define CLASS_1_EC326A3215DF194D_METHOD_1_301A0A26D1FB9428_OFFSET UNITYSDK_OFFSET(0x16603ED0)
#define CLASS_1_EC326A3215DF194D_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x16603D70)
#define CLASS_1_EC326A3215DF194D_METHOD_1_C50A2293958CA940_OFFSET UNITYSDK_OFFSET(0x16603800)
#define CLASS_1_EC326A3215DF194D_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16603E80)
#define CLASS_1_EC326A3215DF194D_METHOD_1_CCAAE56E08561869_OFFSET UNITYSDK_OFFSET(0x16603AB0)
#define CLASS_1_EC326A3215DF194D_METHOD_1_EF1FCC3074463C28_OFFSET UNITYSDK_OFFSET(0x16603F80)
#define CLASS_1_EC326A3215DF194D_SET_WRITTENCOUNT_OFFSET UNITYSDK_OFFSET(0x16604080)
#define CLASS_1_EC326A3215DF194D__CTOR_OFFSET UNITYSDK_OFFSET(0x16604090)

inline static constexpr unsigned int Class_1_EC326A3215DF194D_TypeDefinitionIndex = 28665;

class Class_1_EC326A3215DF194D : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x40; // 0x0
	::Il2CppArray<::System::Byte>* Field_1_0; // 0x10
	::System::Int32 _WrittenCount_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC326A3215DF194D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C50A2293958CA940(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EC326A3215DF194D_METHOD_1_C50A2293958CA940_OFFSET))(this, a1);
	}

	::System::Void Advance(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EC326A3215DF194D_ADVANCE_OFFSET))(this, a1);
	}

	::System::Span_1<::System::Byte> GetSpan(::System::Int32 a1)
	{
		return ((::System::Span_1<::System::Byte>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EC326A3215DF194D_GETSPAN_OFFSET))(this, a1);
	}

	::System::Memory_1<::System::Byte> GetMemory(::System::Int32 a1)
	{
		return ((::System::Memory_1<::System::Byte>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EC326A3215DF194D_GETMEMORY_OFFSET))(this, a1);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC326A3215DF194D_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC326A3215DF194D_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC326A3215DF194D_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CCAAE56E08561869(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EC326A3215DF194D_METHOD_1_CCAAE56E08561869_OFFSET))(this, a1);
	}

	::System::Memory_1<::System::Byte> Method_1_301A0A26D1FB9428()
	{
		return ((::System::Memory_1<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC326A3215DF194D_METHOD_1_301A0A26D1FB9428_OFFSET))(this);
	}

	::System::ReadOnlySpan_1<::System::Byte> Method_1_EF1FCC3074463C28()
	{
		return ((::System::ReadOnlySpan_1<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC326A3215DF194D_METHOD_1_EF1FCC3074463C28_OFFSET))(this);
	}

	::System::Int32 get_WrittenCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC326A3215DF194D_GET_WRITTENCOUNT_OFFSET))(this);
	}

	::System::Void set_WrittenCount(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EC326A3215DF194D_SET_WRITTENCOUNT_OFFSET))(this, value);
	}
};
