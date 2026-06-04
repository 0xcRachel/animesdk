#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkMIDICcTypes.h"
#include "unitysdk/AkMIDIEventTypes.h"
#include "unitysdk/System/Object.h"

class AkMIDIEvent_tCc;
class AkMIDIEvent_tChanAftertouch;
class AkMIDIEvent_tGen;
class AkMIDIEvent_tNoteAftertouch;
class AkMIDIEvent_tNoteOnOff;
class AkMIDIEvent_tPitchBend;
class AkMIDIEvent_tProgramChange;

#define AKMIDIEVENT_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1A26AF20)
#define AKMIDIEVENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A26AE00)
#define AKMIDIEVENT_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A26AEB0)
#define AKMIDIEVENT_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1A26ACC0)
#define AKMIDIEVENT_GET_BYAFTERTOUCHNOTE_OFFSET UNITYSDK_OFFSET(0x1A26CF30)
#define AKMIDIEVENT_GET_BYCCVALUE_OFFSET UNITYSDK_OFFSET(0x1A26CAE0)
#define AKMIDIEVENT_GET_BYCC_OFFSET UNITYSDK_OFFSET(0x1A26C970)
#define AKMIDIEVENT_GET_BYCHANAFTERTOUCHVALUE_OFFSET UNITYSDK_OFFSET(0x1A26D210)
#define AKMIDIEVENT_GET_BYCHAN_OFFSET UNITYSDK_OFFSET(0x1A26B1C0)
#define AKMIDIEVENT_GET_BYNOTEAFTERTOUCHVALUE_OFFSET UNITYSDK_OFFSET(0x1A26D0A0)
#define AKMIDIEVENT_GET_BYONOFFNOTE_OFFSET UNITYSDK_OFFSET(0x1A26C690)
#define AKMIDIEVENT_GET_BYPROGRAMNUM_OFFSET UNITYSDK_OFFSET(0x1A26D380)
#define AKMIDIEVENT_GET_BYTYPE_OFFSET UNITYSDK_OFFSET(0x1A26C520)
#define AKMIDIEVENT_GET_BYVALUELSB_OFFSET UNITYSDK_OFFSET(0x1A26CC50)
#define AKMIDIEVENT_GET_BYVALUEMSB_OFFSET UNITYSDK_OFFSET(0x1A26CDC0)
#define AKMIDIEVENT_GET_BYVELOCITY_OFFSET UNITYSDK_OFFSET(0x1A26C800)
#define AKMIDIEVENT_GET_CC_OFFSET UNITYSDK_OFFSET(0x1A26B670)
#define AKMIDIEVENT_GET_CHANAFTERTOUCH_OFFSET UNITYSDK_OFFSET(0x1A26C0B0)
#define AKMIDIEVENT_GET_GEN_OFFSET UNITYSDK_OFFSET(0x1A26B3E0)
#define AKMIDIEVENT_GET_NOTEAFTERTOUCH_OFFSET UNITYSDK_OFFSET(0x1A26BE20)
#define AKMIDIEVENT_GET_NOTEONOFF_OFFSET UNITYSDK_OFFSET(0x1A26B900)
#define AKMIDIEVENT_GET_PITCHBEND_OFFSET UNITYSDK_OFFSET(0x1A26BB90)
#define AKMIDIEVENT_GET_PROGRAMCHANGE_OFFSET UNITYSDK_OFFSET(0x1A26C340)
#define AKMIDIEVENT_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1A26AD10)
#define AKMIDIEVENT_SET_BYAFTERTOUCHNOTE_OFFSET UNITYSDK_OFFSET(0x1A26CE70)
#define AKMIDIEVENT_SET_BYCCVALUE_OFFSET UNITYSDK_OFFSET(0x1A26CA20)
#define AKMIDIEVENT_SET_BYCC_OFFSET UNITYSDK_OFFSET(0x1A26C8B0)
#define AKMIDIEVENT_SET_BYCHANAFTERTOUCHVALUE_OFFSET UNITYSDK_OFFSET(0x1A26D150)
#define AKMIDIEVENT_SET_BYCHAN_OFFSET UNITYSDK_OFFSET(0x1A26B100)
#define AKMIDIEVENT_SET_BYNOTEAFTERTOUCHVALUE_OFFSET UNITYSDK_OFFSET(0x1A26CFE0)
#define AKMIDIEVENT_SET_BYONOFFNOTE_OFFSET UNITYSDK_OFFSET(0x1A26C5D0)
#define AKMIDIEVENT_SET_BYPROGRAMNUM_OFFSET UNITYSDK_OFFSET(0x1A26D2C0)
#define AKMIDIEVENT_SET_BYTYPE_OFFSET UNITYSDK_OFFSET(0x1A26C460)
#define AKMIDIEVENT_SET_BYVALUELSB_OFFSET UNITYSDK_OFFSET(0x1A26CB90)
#define AKMIDIEVENT_SET_BYVALUEMSB_OFFSET UNITYSDK_OFFSET(0x1A26CD00)
#define AKMIDIEVENT_SET_BYVELOCITY_OFFSET UNITYSDK_OFFSET(0x1A26C740)
#define AKMIDIEVENT_SET_CC_OFFSET UNITYSDK_OFFSET(0x1A26B500)
#define AKMIDIEVENT_SET_CHANAFTERTOUCH_OFFSET UNITYSDK_OFFSET(0x1A26BF40)
#define AKMIDIEVENT_SET_GEN_OFFSET UNITYSDK_OFFSET(0x1A26B270)
#define AKMIDIEVENT_SET_NOTEAFTERTOUCH_OFFSET UNITYSDK_OFFSET(0x1A26BCB0)
#define AKMIDIEVENT_SET_NOTEONOFF_OFFSET UNITYSDK_OFFSET(0x1A26B790)
#define AKMIDIEVENT_SET_PITCHBEND_OFFSET UNITYSDK_OFFSET(0x1A26BA20)
#define AKMIDIEVENT_SET_PROGRAMCHANGE_OFFSET UNITYSDK_OFFSET(0x1A26C1D0)
#define AKMIDIEVENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A26D430)
#define AKMIDIEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A26ACB0)

inline static constexpr unsigned int AkMIDIEvent_TypeDefinitionIndex = 41132;

class AkMIDIEvent : public ::System::Object
{
public:
	::System::Boolean swigCMemOwn; // 0x10
	::System::IntPtr swigCPtr; // 0x18

	::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMIDIEVENT__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkMIDIEvent* a1)
	{
		return ((::System::IntPtr(*)(::AkMIDIEvent*))((::PBYTE)hIl2Cpp + AKMIDIEVENT_GETCPTR_OFFSET))(a1);
	}

	::System::Void setCPtr(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKMIDIEVENT_SETCPTR_OFFSET))(this, a1);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMIDIEVENT_DISPOSE_1_OFFSET))(this, a1);
	}

	::System::Void set_byChan(::System::Byte a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + AKMIDIEVENT_SET_BYCHAN_OFFSET))(this, a1);
	}

	::System::Byte get_byChan()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_GET_BYCHAN_OFFSET))(this);
	}

	::System::Void set_Gen(::AkMIDIEvent_tGen* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkMIDIEvent_tGen*))((::PBYTE)hIl2Cpp + AKMIDIEVENT_SET_GEN_OFFSET))(this, a1);
	}

	::AkMIDIEvent_tGen* get_Gen()
	{
		return ((::AkMIDIEvent_tGen*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_GET_GEN_OFFSET))(this);
	}

	::System::Void set_Cc(::AkMIDIEvent_tCc* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkMIDIEvent_tCc*))((::PBYTE)hIl2Cpp + AKMIDIEVENT_SET_CC_OFFSET))(this, a1);
	}

	::AkMIDIEvent_tCc* get_Cc()
	{
		return ((::AkMIDIEvent_tCc*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_GET_CC_OFFSET))(this);
	}

	::System::Void set_NoteOnOff(::AkMIDIEvent_tNoteOnOff* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkMIDIEvent_tNoteOnOff*))((::PBYTE)hIl2Cpp + AKMIDIEVENT_SET_NOTEONOFF_OFFSET))(this, a1);
	}

	::AkMIDIEvent_tNoteOnOff* get_NoteOnOff()
	{
		return ((::AkMIDIEvent_tNoteOnOff*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_GET_NOTEONOFF_OFFSET))(this);
	}

	::System::Void set_PitchBend(::AkMIDIEvent_tPitchBend* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkMIDIEvent_tPitchBend*))((::PBYTE)hIl2Cpp + AKMIDIEVENT_SET_PITCHBEND_OFFSET))(this, a1);
	}

	::AkMIDIEvent_tPitchBend* get_PitchBend()
	{
		return ((::AkMIDIEvent_tPitchBend*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_GET_PITCHBEND_OFFSET))(this);
	}

	::System::Void set_NoteAftertouch(::AkMIDIEvent_tNoteAftertouch* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkMIDIEvent_tNoteAftertouch*))((::PBYTE)hIl2Cpp + AKMIDIEVENT_SET_NOTEAFTERTOUCH_OFFSET))(this, a1);
	}

	::AkMIDIEvent_tNoteAftertouch* get_NoteAftertouch()
	{
		return ((::AkMIDIEvent_tNoteAftertouch*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_GET_NOTEAFTERTOUCH_OFFSET))(this);
	}

	::System::Void set_ChanAftertouch(::AkMIDIEvent_tChanAftertouch* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkMIDIEvent_tChanAftertouch*))((::PBYTE)hIl2Cpp + AKMIDIEVENT_SET_CHANAFTERTOUCH_OFFSET))(this, a1);
	}

	::AkMIDIEvent_tChanAftertouch* get_ChanAftertouch()
	{
		return ((::AkMIDIEvent_tChanAftertouch*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_GET_CHANAFTERTOUCH_OFFSET))(this);
	}

	::System::Void set_ProgramChange(::AkMIDIEvent_tProgramChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkMIDIEvent_tProgramChange*))((::PBYTE)hIl2Cpp + AKMIDIEVENT_SET_PROGRAMCHANGE_OFFSET))(this, a1);
	}

	::AkMIDIEvent_tProgramChange* get_ProgramChange()
	{
		return ((::AkMIDIEvent_tProgramChange*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_GET_PROGRAMCHANGE_OFFSET))(this);
	}

	::System::Void set_byType(::AkMIDIEventTypes a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkMIDIEventTypes))((::PBYTE)hIl2Cpp + AKMIDIEVENT_SET_BYTYPE_OFFSET))(this, a1);
	}

	::AkMIDIEventTypes get_byType()
	{
		return ((::AkMIDIEventTypes(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_GET_BYTYPE_OFFSET))(this);
	}

	::System::Void set_byOnOffNote(::System::Byte a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + AKMIDIEVENT_SET_BYONOFFNOTE_OFFSET))(this, a1);
	}

	::System::Byte get_byOnOffNote()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_GET_BYONOFFNOTE_OFFSET))(this);
	}

	::System::Void set_byVelocity(::System::Byte a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + AKMIDIEVENT_SET_BYVELOCITY_OFFSET))(this, a1);
	}

	::System::Byte get_byVelocity()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_GET_BYVELOCITY_OFFSET))(this);
	}

	::System::Void set_byCc(::AkMIDICcTypes a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkMIDICcTypes))((::PBYTE)hIl2Cpp + AKMIDIEVENT_SET_BYCC_OFFSET))(this, a1);
	}

	::AkMIDICcTypes get_byCc()
	{
		return ((::AkMIDICcTypes(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_GET_BYCC_OFFSET))(this);
	}

	::System::Void set_byCcValue(::System::Byte a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + AKMIDIEVENT_SET_BYCCVALUE_OFFSET))(this, a1);
	}

	::System::Byte get_byCcValue()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_GET_BYCCVALUE_OFFSET))(this);
	}

	::System::Void set_byValueLsb(::System::Byte a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + AKMIDIEVENT_SET_BYVALUELSB_OFFSET))(this, a1);
	}

	::System::Byte get_byValueLsb()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_GET_BYVALUELSB_OFFSET))(this);
	}

	::System::Void set_byValueMsb(::System::Byte a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + AKMIDIEVENT_SET_BYVALUEMSB_OFFSET))(this, a1);
	}

	::System::Byte get_byValueMsb()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_GET_BYVALUEMSB_OFFSET))(this);
	}

	::System::Void set_byAftertouchNote(::System::Byte a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + AKMIDIEVENT_SET_BYAFTERTOUCHNOTE_OFFSET))(this, a1);
	}

	::System::Byte get_byAftertouchNote()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_GET_BYAFTERTOUCHNOTE_OFFSET))(this);
	}

	::System::Void set_byNoteAftertouchValue(::System::Byte a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + AKMIDIEVENT_SET_BYNOTEAFTERTOUCHVALUE_OFFSET))(this, a1);
	}

	::System::Byte get_byNoteAftertouchValue()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_GET_BYNOTEAFTERTOUCHVALUE_OFFSET))(this);
	}

	::System::Void set_byChanAftertouchValue(::System::Byte a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + AKMIDIEVENT_SET_BYCHANAFTERTOUCHVALUE_OFFSET))(this, a1);
	}

	::System::Byte get_byChanAftertouchValue()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_GET_BYCHANAFTERTOUCHVALUE_OFFSET))(this);
	}

	::System::Void set_byProgramNum(::System::Byte a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + AKMIDIEVENT_SET_BYPROGRAMNUM_OFFSET))(this, a1);
	}

	::System::Byte get_byProgramNum()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_GET_BYPROGRAMNUM_OFFSET))(this);
	}
};
