#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkEventCallbackInfo.h"

#define AKMUSICPLAYLISTCALLBACKINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x183AF240)
#define AKMUSICPLAYLISTCALLBACKINFO_GETCPTR_OFFSET UNITYSDK_OFFSET(0x183AF120)
#define AKMUSICPLAYLISTCALLBACKINFO_GET_PLAYLISTID_OFFSET UNITYSDK_OFFSET(0x183AF3F0)
#define AKMUSICPLAYLISTCALLBACKINFO_GET_UNUMPLAYLISTITEMS_OFFSET UNITYSDK_OFFSET(0x183AF4A0)
#define AKMUSICPLAYLISTCALLBACKINFO_GET_UPLAYLISTITEMDONE_OFFSET UNITYSDK_OFFSET(0x183AF600)
#define AKMUSICPLAYLISTCALLBACKINFO_GET_UPLAYLISTSELECTION_OFFSET UNITYSDK_OFFSET(0x183AF550)
#define AKMUSICPLAYLISTCALLBACKINFO_SETCPTR_OFFSET UNITYSDK_OFFSET(0x183AF170)
#define AKMUSICPLAYLISTCALLBACKINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x183AF6B0)
#define AKMUSICPLAYLISTCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x183AF010)
#define AKMUSICPLAYLISTCALLBACKINFO___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x183AF830)
#define AKMUSICPLAYLISTCALLBACKINFO___IFIXBASEPROXY_SETCPTR_OFFSET UNITYSDK_OFFSET(0x183AF820)

inline static constexpr unsigned int AkMusicPlaylistCallbackInfo_TypeDefinitionIndex = 33514;

class AkMusicPlaylistCallbackInfo : public ::AkEventCallbackInfo
{
public:
	::System::IntPtr swigCPtr; // 0x28

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMUSICPLAYLISTCALLBACKINFO__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMUSICPLAYLISTCALLBACKINFO__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkMusicPlaylistCallbackInfo* obj)
	{
		return ((::System::IntPtr(*)(::AkMusicPlaylistCallbackInfo*))((::PBYTE)hIl2Cpp + AKMUSICPLAYLISTCALLBACKINFO_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKMUSICPLAYLISTCALLBACKINFO_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Dispose(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMUSICPLAYLISTCALLBACKINFO_DISPOSE_OFFSET))(this, disposing);
	}

	::System::UInt32 get_playlistID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMUSICPLAYLISTCALLBACKINFO_GET_PLAYLISTID_OFFSET))(this);
	}

	::System::UInt32 get_uNumPlaylistItems()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMUSICPLAYLISTCALLBACKINFO_GET_UNUMPLAYLISTITEMS_OFFSET))(this);
	}

	::System::UInt32 get_uPlaylistSelection()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMUSICPLAYLISTCALLBACKINFO_GET_UPLAYLISTSELECTION_OFFSET))(this);
	}

	::System::UInt32 get_uPlaylistItemDone()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMUSICPLAYLISTCALLBACKINFO_GET_UPLAYLISTITEMDONE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_setCPtr(::System::IntPtr P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKMUSICPLAYLISTCALLBACKINFO___IFIXBASEPROXY_SETCPTR_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose(::System::Boolean P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMUSICPLAYLISTCALLBACKINFO___IFIXBASEPROXY_DISPOSE_OFFSET))(this, P0);
	}
};
