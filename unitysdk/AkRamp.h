#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKRAMP_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x196F57E0)
#define AKRAMP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x196F56F0)
#define AKRAMP_FINALIZE_OFFSET UNITYSDK_OFFSET(0x196F5770)
#define AKRAMP_GETCPTR_OFFSET UNITYSDK_OFFSET(0x196F55E0)
#define AKRAMP_GET_FNEXT_OFFSET UNITYSDK_OFFSET(0x196F5CD0)
#define AKRAMP_GET_FPREV_OFFSET UNITYSDK_OFFSET(0x196F5B60)
#define AKRAMP_SETCPTR_OFFSET UNITYSDK_OFFSET(0x196F5630)
#define AKRAMP_SET_FNEXT_OFFSET UNITYSDK_OFFSET(0x196F5C10)
#define AKRAMP_SET_FPREV_OFFSET UNITYSDK_OFFSET(0x196F5AA0)
#define AKRAMP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x196F5980)
#define AKRAMP__CTOR_2_OFFSET UNITYSDK_OFFSET(0x196F5A00)
#define AKRAMP__CTOR_OFFSET UNITYSDK_OFFSET(0x196F55D0)

inline static constexpr unsigned int AkRamp_TypeDefinitionIndex = 40336;

class AkRamp : public ::System::Object
{
public:
	::System::Boolean swigCMemOwn; // 0x10
	::System::IntPtr swigCPtr; // 0x18

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKRAMP__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKRAMP__CTOR_1_OFFSET))(this);
	}

	::System::Void _ctor_2(::System::Single in_fPrev, ::System::Single in_fNext)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + AKRAMP__CTOR_2_OFFSET))(this, in_fPrev, in_fNext);
	}

	static ::System::IntPtr getCPtr(::AkRamp* obj)
	{
		return ((::System::IntPtr(*)(::AkRamp*))((::PBYTE)hIl2Cpp + AKRAMP_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKRAMP_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKRAMP_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKRAMP_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKRAMP_DISPOSE_1_OFFSET))(this, disposing);
	}

	::System::Void set_fPrev(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKRAMP_SET_FPREV_OFFSET))(this, value);
	}

	::System::Single get_fPrev()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKRAMP_GET_FPREV_OFFSET))(this);
	}

	::System::Void set_fNext(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKRAMP_SET_FNEXT_OFFSET))(this, value);
	}

	::System::Single get_fNext()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKRAMP_GET_FNEXT_OFFSET))(this);
	}
};
