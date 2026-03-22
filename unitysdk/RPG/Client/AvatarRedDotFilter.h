#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"

namespace RPG::Client { class IAvatarInfoProvider; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AVATARREDDOTFILTER_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x8D56B40)
#define RPG_CLIENT_AVATARREDDOTFILTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8D56A50)
#define RPG_CLIENT_AVATARREDDOTFILTER_INIT_OFFSET UNITYSDK_OFFSET(0x8D56610)
#define RPG_CLIENT_AVATARREDDOTFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x8D57080)
#define RPG_CLIENT_AVATARREDDOTFILTER__ONNOTIFYADDNEWAVATAR_OFFSET UNITYSDK_OFFSET(0x8D56D90)
#define RPG_CLIENT_AVATARREDDOTFILTER__ONNOTIFYALL_OFFSET UNITYSDK_OFFSET(0x8D56D40)
#define RPG_CLIENT_AVATARREDDOTFILTER__ONNOTIFYONE_OFFSET UNITYSDK_OFFSET(0x8D56EF0)
#define RPG_CLIENT_AVATARREDDOTFILTER__UPDATEALLAVATAR_OFFSET UNITYSDK_OFFSET(0x8D56690)
#define RPG_CLIENT_AVATARREDDOTFILTER__UPDATEAVATARREDDOT_OFFSET UNITYSDK_OFFSET(0x8D56FD0)
#define RPG_CLIENT_AVATARREDDOTFILTER__UPDATEONEAVATAR_OFFSET UNITYSDK_OFFSET(0x8D56E70)
#define RPG_CLIENT_AVATARREDDOTFILTER___IFIXBASEPROXY_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x8D57190)
#define RPG_CLIENT_AVATARREDDOTFILTER___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8D57140)
#define RPG_CLIENT_AVATARREDDOTFILTER___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x8D570F0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarRedDotFilter_TypeDefinitionIndex = 53234;

	class AvatarRedDotFilter : public ::RPG::Client::BaseRedDotFilter
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* RedDotAvatarIDs; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARREDDOTFILTER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARREDDOTFILTER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARREDDOTFILTER_DISPOSE_OFFSET))(this);
		}

		::System::Void AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARREDDOTFILTER_ADDHANDLERS_OFFSET))(this);
		}

		::System::Void _OnNotifyAll(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARREDDOTFILTER__ONNOTIFYALL_OFFSET))(this, arg);
		}

		::System::Void _OnNotifyAddNewAvatar(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARREDDOTFILTER__ONNOTIFYADDNEWAVATAR_OFFSET))(this, arg);
		}

		::System::Void _OnNotifyOne(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARREDDOTFILTER__ONNOTIFYONE_OFFSET))(this, arg);
		}

		::System::Void _UpdateAllAvatar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARREDDOTFILTER__UPDATEALLAVATAR_OFFSET))(this);
		}

		::System::Void _UpdateOneAvatar(::RPG::Client::IAvatarInfoProvider* avatarData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARREDDOTFILTER__UPDATEONEAVATAR_OFFSET))(this, avatarData);
		}

		::System::Void _UpdateAvatarRedDot(::System::UInt32 avatarID, ::System::Boolean isRedDot)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARREDDOTFILTER__UPDATEAVATARREDDOT_OFFSET))(this, avatarID, isRedDot);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARREDDOTFILTER___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARREDDOTFILTER___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARREDDOTFILTER___IFIXBASEPROXY_ADDHANDLERS_OFFSET))(this);
		}
	};
}
