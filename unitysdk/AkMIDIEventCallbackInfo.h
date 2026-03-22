#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkEventCallbackInfo.h"
#include "unitysdk/AkMIDICcTypes.h"
#include "unitysdk/AkMIDIEventTypes.h"

#define AKMIDIEVENTCALLBACKINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x183AB390)
#define AKMIDIEVENTCALLBACKINFO_GETCPTR_OFFSET UNITYSDK_OFFSET(0x183AB270)
#define AKMIDIEVENTCALLBACKINFO_GET_BYAFTERTOUCHNOTE_OFFSET UNITYSDK_OFFSET(0x183ABC20)
#define AKMIDIEVENTCALLBACKINFO_GET_BYCCVALUE_OFFSET UNITYSDK_OFFSET(0x183ABA10)
#define AKMIDIEVENTCALLBACKINFO_GET_BYCC_OFFSET UNITYSDK_OFFSET(0x183AB960)
#define AKMIDIEVENTCALLBACKINFO_GET_BYCHANAFTERTOUCHVALUE_OFFSET UNITYSDK_OFFSET(0x183ABD80)
#define AKMIDIEVENTCALLBACKINFO_GET_BYCHAN_OFFSET UNITYSDK_OFFSET(0x183AB540)
#define AKMIDIEVENTCALLBACKINFO_GET_BYNOTEAFTERTOUCHVALUE_OFFSET UNITYSDK_OFFSET(0x183ABCD0)
#define AKMIDIEVENTCALLBACKINFO_GET_BYONOFFNOTE_OFFSET UNITYSDK_OFFSET(0x183AB800)
#define AKMIDIEVENTCALLBACKINFO_GET_BYPARAM1_OFFSET UNITYSDK_OFFSET(0x183AB5F0)
#define AKMIDIEVENTCALLBACKINFO_GET_BYPARAM2_OFFSET UNITYSDK_OFFSET(0x183AB6A0)
#define AKMIDIEVENTCALLBACKINFO_GET_BYPROGRAMNUM_OFFSET UNITYSDK_OFFSET(0x183ABE30)
#define AKMIDIEVENTCALLBACKINFO_GET_BYTYPE_OFFSET UNITYSDK_OFFSET(0x183AB750)
#define AKMIDIEVENTCALLBACKINFO_GET_BYVALUELSB_OFFSET UNITYSDK_OFFSET(0x183ABAC0)
#define AKMIDIEVENTCALLBACKINFO_GET_BYVALUEMSB_OFFSET UNITYSDK_OFFSET(0x183ABB70)
#define AKMIDIEVENTCALLBACKINFO_GET_BYVELOCITY_OFFSET UNITYSDK_OFFSET(0x183AB8B0)
#define AKMIDIEVENTCALLBACKINFO_SETCPTR_OFFSET UNITYSDK_OFFSET(0x183AB2C0)
#define AKMIDIEVENTCALLBACKINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x183ABEE0)
#define AKMIDIEVENTCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x183AB160)
#define AKMIDIEVENTCALLBACKINFO___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x183AC060)
#define AKMIDIEVENTCALLBACKINFO___IFIXBASEPROXY_SETCPTR_OFFSET UNITYSDK_OFFSET(0x183AC050)

inline static constexpr unsigned int AkMIDIEventCallbackInfo_TypeDefinitionIndex = 33505;

class AkMIDIEventCallbackInfo : public ::AkEventCallbackInfo
{
public:
	::System::IntPtr swigCPtr; // 0x28

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMIDIEVENTCALLBACKINFO__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENTCALLBACKINFO__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkMIDIEventCallbackInfo* obj)
	{
		return ((::System::IntPtr(*)(::AkMIDIEventCallbackInfo*))((::PBYTE)hIl2Cpp + AKMIDIEVENTCALLBACKINFO_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKMIDIEVENTCALLBACKINFO_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Dispose(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMIDIEVENTCALLBACKINFO_DISPOSE_OFFSET))(this, disposing);
	}

	::System::Byte get_byChan()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENTCALLBACKINFO_GET_BYCHAN_OFFSET))(this);
	}

	::System::Byte get_byParam1()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENTCALLBACKINFO_GET_BYPARAM1_OFFSET))(this);
	}

	::System::Byte get_byParam2()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENTCALLBACKINFO_GET_BYPARAM2_OFFSET))(this);
	}

	::AkMIDIEventTypes get_byType()
	{
		return ((::AkMIDIEventTypes(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENTCALLBACKINFO_GET_BYTYPE_OFFSET))(this);
	}

	::System::Byte get_byOnOffNote()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENTCALLBACKINFO_GET_BYONOFFNOTE_OFFSET))(this);
	}

	::System::Byte get_byVelocity()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENTCALLBACKINFO_GET_BYVELOCITY_OFFSET))(this);
	}

	::AkMIDICcTypes get_byCc()
	{
		return ((::AkMIDICcTypes(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENTCALLBACKINFO_GET_BYCC_OFFSET))(this);
	}

	::System::Byte get_byCcValue()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENTCALLBACKINFO_GET_BYCCVALUE_OFFSET))(this);
	}

	::System::Byte get_byValueLsb()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENTCALLBACKINFO_GET_BYVALUELSB_OFFSET))(this);
	}

	::System::Byte get_byValueMsb()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENTCALLBACKINFO_GET_BYVALUEMSB_OFFSET))(this);
	}

	::System::Byte get_byAftertouchNote()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENTCALLBACKINFO_GET_BYAFTERTOUCHNOTE_OFFSET))(this);
	}

	::System::Byte get_byNoteAftertouchValue()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENTCALLBACKINFO_GET_BYNOTEAFTERTOUCHVALUE_OFFSET))(this);
	}

	::System::Byte get_byChanAftertouchValue()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENTCALLBACKINFO_GET_BYCHANAFTERTOUCHVALUE_OFFSET))(this);
	}

	::System::Byte get_byProgramNum()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENTCALLBACKINFO_GET_BYPROGRAMNUM_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_setCPtr(::System::IntPtr P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKMIDIEVENTCALLBACKINFO___IFIXBASEPROXY_SETCPTR_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose(::System::Boolean P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMIDIEVENTCALLBACKINFO___IFIXBASEPROXY_DISPOSE_OFFSET))(this, P0);
	}
};
