#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKRESULT.h"
#include "unitysdk/System/Object.h"

class AkExternalSourceInfoArray;

#define AKPLAYLISTITEM_ASSIGN_OFFSET UNITYSDK_OFFSET(0x183B8B70)
#define AKPLAYLISTITEM_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x183B8870)
#define AKPLAYLISTITEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x183B8780)
#define AKPLAYLISTITEM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x183B8800)
#define AKPLAYLISTITEM_GETCPTR_OFFSET UNITYSDK_OFFSET(0x183B6E90)
#define AKPLAYLISTITEM_GET_AUDIONODEID_OFFSET UNITYSDK_OFFSET(0x183B8F90)
#define AKPLAYLISTITEM_GET_MSDELAY_OFFSET UNITYSDK_OFFSET(0x183B9100)
#define AKPLAYLISTITEM_GET_PCUSTOMINFO_OFFSET UNITYSDK_OFFSET(0x183B9270)
#define AKPLAYLISTITEM_ISEQUALTO_OFFSET UNITYSDK_OFFSET(0x183B8CD0)
#define AKPLAYLISTITEM_SETCPTR_OFFSET UNITYSDK_OFFSET(0x183B86C0)
#define AKPLAYLISTITEM_SETEXTERNALSOURCES_OFFSET UNITYSDK_OFFSET(0x183B8DF0)
#define AKPLAYLISTITEM_SET_AUDIONODEID_OFFSET UNITYSDK_OFFSET(0x183B8ED0)
#define AKPLAYLISTITEM_SET_MSDELAY_OFFSET UNITYSDK_OFFSET(0x183B9040)
#define AKPLAYLISTITEM_SET_PCUSTOMINFO_OFFSET UNITYSDK_OFFSET(0x183B91B0)
#define AKPLAYLISTITEM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x183B8A10)
#define AKPLAYLISTITEM__CTOR_2_OFFSET UNITYSDK_OFFSET(0x183B8A90)
#define AKPLAYLISTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x183B76F0)

inline static constexpr unsigned int AkPlaylistItem_TypeDefinitionIndex = 33523;

class AkPlaylistItem : public ::System::Object
{
public:
	::System::Boolean swigCMemOwn; // 0x10
	::System::IntPtr swigCPtr; // 0x18

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKPLAYLISTITEM__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLAYLISTITEM__CTOR_1_OFFSET))(this);
	}

	::System::Void _ctor_2(::AkPlaylistItem* in_rCopy)
	{
		return ((::System::Void(*)(::PVOID, ::AkPlaylistItem*))((::PBYTE)hIl2Cpp + AKPLAYLISTITEM__CTOR_2_OFFSET))(this, in_rCopy);
	}

	static ::System::IntPtr getCPtr(::AkPlaylistItem* obj)
	{
		return ((::System::IntPtr(*)(::AkPlaylistItem*))((::PBYTE)hIl2Cpp + AKPLAYLISTITEM_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKPLAYLISTITEM_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLAYLISTITEM_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLAYLISTITEM_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKPLAYLISTITEM_DISPOSE_1_OFFSET))(this, disposing);
	}

	::AkPlaylistItem* Assign(::AkPlaylistItem* in_rCopy)
	{
		return ((::AkPlaylistItem*(*)(::PVOID, ::AkPlaylistItem*))((::PBYTE)hIl2Cpp + AKPLAYLISTITEM_ASSIGN_OFFSET))(this, in_rCopy);
	}

	::System::Boolean IsEqualTo(::AkPlaylistItem* in_rCopy)
	{
		return ((::System::Boolean(*)(::PVOID, ::AkPlaylistItem*))((::PBYTE)hIl2Cpp + AKPLAYLISTITEM_ISEQUALTO_OFFSET))(this, in_rCopy);
	}

	::AKRESULT SetExternalSources(::System::UInt32 in_nExternalSrc, ::AkExternalSourceInfoArray* in_pExternalSrc)
	{
		return ((::AKRESULT(*)(::PVOID, ::System::UInt32, ::AkExternalSourceInfoArray*))((::PBYTE)hIl2Cpp + AKPLAYLISTITEM_SETEXTERNALSOURCES_OFFSET))(this, in_nExternalSrc, in_pExternalSrc);
	}

	::System::Void set_audioNodeID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKPLAYLISTITEM_SET_AUDIONODEID_OFFSET))(this, value);
	}

	::System::UInt32 get_audioNodeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLAYLISTITEM_GET_AUDIONODEID_OFFSET))(this);
	}

	::System::Void set_msDelay(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKPLAYLISTITEM_SET_MSDELAY_OFFSET))(this, value);
	}

	::System::Int32 get_msDelay()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLAYLISTITEM_GET_MSDELAY_OFFSET))(this);
	}

	::System::Void set_pCustomInfo(::System::IntPtr value)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKPLAYLISTITEM_SET_PCUSTOMINFO_OFFSET))(this, value);
	}

	::System::IntPtr get_pCustomInfo()
	{
		return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPLAYLISTITEM_GET_PCUSTOMINFO_OFFSET))(this);
	}
};
