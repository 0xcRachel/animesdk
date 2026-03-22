#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"

namespace RPG::Client { class AvatarData; }
namespace RPG::GameCore { class AvatarRankConfigRow; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AVATARRANKUPREDDOTFILTER_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x8D0C990)
#define RPG_CLIENT_AVATARRANKUPREDDOTFILTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8D0C8F0)
#define RPG_CLIENT_AVATARRANKUPREDDOTFILTER_INIT_OFFSET UNITYSDK_OFFSET(0x8D0C580)
#define RPG_CLIENT_AVATARRANKUPREDDOTFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x8D0D1E0)
#define RPG_CLIENT_AVATARRANKUPREDDOTFILTER__ISAVATARCANRANKUP_OFFSET UNITYSDK_OFFSET(0x8D0CD90)
#define RPG_CLIENT_AVATARRANKUPREDDOTFILTER__ISAVATARRANKUPCOSTENOUGH_OFFSET UNITYSDK_OFFSET(0x8D0D050)
#define RPG_CLIENT_AVATARRANKUPREDDOTFILTER__ONHEROBASICTYPECHANGED_OFFSET UNITYSDK_OFFSET(0x8D0CD30)
#define RPG_CLIENT_AVATARRANKUPREDDOTFILTER__ONNOTIFYALL_OFFSET UNITYSDK_OFFSET(0x8D0CB90)
#define RPG_CLIENT_AVATARRANKUPREDDOTFILTER__ONNOTIFYONE_OFFSET UNITYSDK_OFFSET(0x8D0CBE0)
#define RPG_CLIENT_AVATARRANKUPREDDOTFILTER__UPDATEALLAVATAR_OFFSET UNITYSDK_OFFSET(0x8D0C600)
#define RPG_CLIENT_AVATARRANKUPREDDOTFILTER__UPDATEAVATARREDDOT_OFFSET UNITYSDK_OFFSET(0x8D0CFA0)
#define RPG_CLIENT_AVATARRANKUPREDDOTFILTER__UPDATEONEAVATAR_OFFSET UNITYSDK_OFFSET(0x8D0CCB0)
#define RPG_CLIENT_AVATARRANKUPREDDOTFILTER___IFIXBASEPROXY_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x8D56590)
#define RPG_CLIENT_AVATARRANKUPREDDOTFILTER___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8D0D2C0)
#define RPG_CLIENT_AVATARRANKUPREDDOTFILTER___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x8D0D240)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarRankUpRedDotFilter_TypeDefinitionIndex = 53233;

	class AvatarRankUpRedDotFilter : public ::RPG::Client::BaseRedDotFilter
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* RedDotAvatarIDs; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKUPREDDOTFILTER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKUPREDDOTFILTER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKUPREDDOTFILTER_DISPOSE_OFFSET))(this);
		}

		::System::Void AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKUPREDDOTFILTER_ADDHANDLERS_OFFSET))(this);
		}

		::System::Void _OnNotifyAll(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKUPREDDOTFILTER__ONNOTIFYALL_OFFSET))(this, arg);
		}

		::System::Void _OnNotifyOne(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKUPREDDOTFILTER__ONNOTIFYONE_OFFSET))(this, arg);
		}

		::System::Void _OnHeroBasicTypeChanged(::System::UInt16 cmd, ::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKUPREDDOTFILTER__ONHEROBASICTYPECHANGED_OFFSET))(this, cmd, arg);
		}

		::System::Void _UpdateAllAvatar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKUPREDDOTFILTER__UPDATEALLAVATAR_OFFSET))(this);
		}

		::System::Void _UpdateOneAvatar(::RPG::Client::AvatarData* avatarData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKUPREDDOTFILTER__UPDATEONEAVATAR_OFFSET))(this, avatarData);
		}

		::System::Void _UpdateAvatarRedDot(::System::UInt32 avatarID, ::System::Boolean isRedDot)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKUPREDDOTFILTER__UPDATEAVATARREDDOT_OFFSET))(this, avatarID, isRedDot);
		}

		::System::Boolean _IsAvatarCanRankUp(::RPG::Client::AvatarData* avatarData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKUPREDDOTFILTER__ISAVATARCANRANKUP_OFFSET))(this, avatarData);
		}

		::System::Boolean _IsAvatarRankUpCostEnough(::RPG::GameCore::AvatarRankConfigRow* rankConfigRow)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AvatarRankConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKUPREDDOTFILTER__ISAVATARRANKUPCOSTENOUGH_OFFSET))(this, rankConfigRow);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKUPREDDOTFILTER___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKUPREDDOTFILTER___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARRANKUPREDDOTFILTER___IFIXBASEPROXY_ADDHANDLERS_OFFSET))(this);
		}
	};
}
