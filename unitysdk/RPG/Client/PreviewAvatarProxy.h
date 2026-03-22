#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_AAD4F4215611A944.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_307;
class Class_0_16E4307DCC419505_554;
class Class_1_090AB0EAA610410E;
namespace RPG::AvatarSystem { class Avatar; }

#define RPG_CLIENT_PREVIEWAVATARPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9B32D40)
#define RPG_CLIENT_PREVIEWAVATARPROXY_EXPORTPROFILE_OFFSET UNITYSDK_OFFSET(0x9B32C70)
#define RPG_CLIENT_PREVIEWAVATARPROXY_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x9B32A80)
#define RPG_CLIENT_PREVIEWAVATARPROXY_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x9B32AB0)
#define RPG_CLIENT_PREVIEWAVATARPROXY_RESET_OFFSET UNITYSDK_OFFSET(0x9B32CE0)
#define RPG_CLIENT_PREVIEWAVATARPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x9B32BB0)
#define RPG_CLIENT_PREVIEWAVATARPROXY__ENSURENOTDISPOSED_OFFSET UNITYSDK_OFFSET(0x9B32B10)

namespace RPG::Client
{
	inline static constexpr unsigned int PreviewAvatarProxy_TypeDefinitionIndex = 49799;

	class PreviewAvatarProxy : public ::System::Object
	{
	public:
		::RPG::AvatarSystem::Avatar* _Origin; // 0x10
		::Class_0_16E4307DCC419505_554* _Pool; // 0x18
		::System::Boolean _Disposed; // 0x20

		::System::Void _ctor(::RPG::AvatarSystem::Avatar* origin, ::Class_0_16E4307DCC419505_554* pool)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::Avatar*, ::Class_0_16E4307DCC419505_554*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREVIEWAVATARPROXY__CTOR_OFFSET))(this, origin, pool);
		}

		::Struct_2_AAD4F4215611A944 get_Identifier()
		{
			return ((::Struct_2_AAD4F4215611A944(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREVIEWAVATARPROXY_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::UInt32 get_Version()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREVIEWAVATARPROXY_GET_VERSION_OFFSET))(this);
		}

		::System::Void ExportProfile(::Class_0_16E4307DCC419505_307* builder)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_307*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREVIEWAVATARPROXY_EXPORTPROFILE_OFFSET))(this, builder);
		}

		::System::Void Reset(::Class_1_090AB0EAA610410E* profile)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_090AB0EAA610410E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREVIEWAVATARPROXY_RESET_OFFSET))(this, profile);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREVIEWAVATARPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void _EnsureNotDisposed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREVIEWAVATARPROXY__ENSURENOTDISPOSED_OFFSET))(this);
		}
	};
}
