#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKMIDIEVENT_TGEN_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x183A9310)
#define AKMIDIEVENT_TGEN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x183A9220)
#define AKMIDIEVENT_TGEN_FINALIZE_OFFSET UNITYSDK_OFFSET(0x183A92A0)
#define AKMIDIEVENT_TGEN_GETCPTR_OFFSET UNITYSDK_OFFSET(0x183A6450)
#define AKMIDIEVENT_TGEN_GET_BYPARAM1_OFFSET UNITYSDK_OFFSET(0x183A9570)
#define AKMIDIEVENT_TGEN_GET_BYPARAM2_OFFSET UNITYSDK_OFFSET(0x183A96E0)
#define AKMIDIEVENT_TGEN_SETCPTR_OFFSET UNITYSDK_OFFSET(0x183A9160)
#define AKMIDIEVENT_TGEN_SET_BYPARAM1_OFFSET UNITYSDK_OFFSET(0x183A94B0)
#define AKMIDIEVENT_TGEN_SET_BYPARAM2_OFFSET UNITYSDK_OFFSET(0x183A9620)
#define AKMIDIEVENT_TGEN__CTOR_1_OFFSET UNITYSDK_OFFSET(0x183A9790)
#define AKMIDIEVENT_TGEN__CTOR_OFFSET UNITYSDK_OFFSET(0x183A65B0)

inline static constexpr unsigned int AkMIDIEvent_tGen_TypeDefinitionIndex = 33498;

class AkMIDIEvent_tGen : public ::System::Object
{
public:
	::System::IntPtr swigCPtr; // 0x10
	::System::Boolean swigCMemOwn; // 0x18

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TGEN__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TGEN__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkMIDIEvent_tGen* obj)
	{
		return ((::System::IntPtr(*)(::AkMIDIEvent_tGen*))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TGEN_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TGEN_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TGEN_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TGEN_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TGEN_DISPOSE_1_OFFSET))(this, disposing);
	}

	::System::Void set_byParam1(::System::Byte value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TGEN_SET_BYPARAM1_OFFSET))(this, value);
	}

	::System::Byte get_byParam1()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TGEN_GET_BYPARAM1_OFFSET))(this);
	}

	::System::Void set_byParam2(::System::Byte value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TGEN_SET_BYPARAM2_OFFSET))(this, value);
	}

	::System::Byte get_byParam2()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TGEN_GET_BYPARAM2_OFFSET))(this);
	}
};
