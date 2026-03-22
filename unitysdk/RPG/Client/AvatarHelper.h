#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_552;
class Class_1_16D8E68BCE885505;
namespace RPG::AvatarSystem { class AvatarSkin; }
namespace RPG::AvatarSystem { class IAvatar; }
namespace System { class String; }

#define RPG_CLIENT_AVATARHELPER_CHECKISORIGINSKINID_OFFSET UNITYSDK_OFFSET(0x8CF6440)
#define RPG_CLIENT_AVATARHELPER_GETDEFAULTCOMPARER_OFFSET UNITYSDK_OFFSET(0x8CF62C0)
#define RPG_CLIENT_AVATARHELPER_GETMINIICONPATH_OFFSET UNITYSDK_OFFSET(0x8CF5F50)
#define RPG_CLIENT_AVATARHELPER_GETORIGINSKINBYAVATARID_OFFSET UNITYSDK_OFFSET(0x8CF5DC0)
#define RPG_CLIENT_AVATARHELPER_GETPROTOTYPEBYAVATARID_OFFSET UNITYSDK_OFFSET(0x8CF6190)
#define RPG_CLIENT_AVATARHELPER_GETSIDEICONPATH_OFFSET UNITYSDK_OFFSET(0x8CF6080)
#define RPG_CLIENT_AVATARHELPER_GETSKINBYSKINID_OFFSET UNITYSDK_OFFSET(0x8CF6540)
#define RPG_CLIENT_AVATARHELPER_GETSKINPREVIEWAVATAR_OFFSET UNITYSDK_OFFSET(0x8CF5D00)
#define RPG_CLIENT_AVATARHELPER_GETSMALLPATHICONPATHBYAVATARID_OFFSET UNITYSDK_OFFSET(0x8CF6100)
#define RPG_CLIENT_AVATARHELPER__GETSPECIFICPATHAVATARBYAVATARID_OFFSET UNITYSDK_OFFSET(0x8CF5FD0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarHelper_TypeDefinitionIndex = 49786;

	class AvatarHelper : public ::System::Object
	{
	public:
		static ::RPG::AvatarSystem::IAvatar* GetSkinPreviewAvatar(::System::UInt32 skinID)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETSKINPREVIEWAVATAR_OFFSET))(skinID);
		}

		static ::RPG::AvatarSystem::AvatarSkin* GetOriginSkinByAvatarID(::System::UInt32 avatarID)
		{
			return ((::RPG::AvatarSystem::AvatarSkin*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETORIGINSKINBYAVATARID_OFFSET))(avatarID);
		}

		static ::System::String* GetMiniIconPath(::System::UInt32 avatarID)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETMINIICONPATH_OFFSET))(avatarID);
		}

		static ::System::String* GetSideIconPath(::System::UInt32 avatarID)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETSIDEICONPATH_OFFSET))(avatarID);
		}

		static ::System::String* GetSmallPathIconPathByAvatarID(::System::UInt32 avatarID)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETSMALLPATHICONPATHBYAVATARID_OFFSET))(avatarID);
		}

		static ::Class_1_16D8E68BCE885505* GetPrototypeByAvatarID(::System::UInt32 avatarID)
		{
			return ((::Class_1_16D8E68BCE885505*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETPROTOTYPEBYAVATARID_OFFSET))(avatarID);
		}

		static ::Class_0_16E4307DCC419505_552* GetDefaultComparer()
		{
			return ((::Class_0_16E4307DCC419505_552*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETDEFAULTCOMPARER_OFFSET))();
		}

		static ::System::Boolean CheckIsOriginSkinID(::System::UInt32 skinID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_CHECKISORIGINSKINID_OFFSET))(skinID);
		}

		static ::RPG::AvatarSystem::AvatarSkin* GetSkinBySkinID(::System::UInt32 skinID)
		{
			return ((::RPG::AvatarSystem::AvatarSkin*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER_GETSKINBYSKINID_OFFSET))(skinID);
		}

		static ::RPG::AvatarSystem::IAvatar* _GetSpecificPathAvatarByAvatarID(::System::UInt32 avatarID)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHELPER__GETSPECIFICPATHAVATARBYAVATARID_OFFSET))(avatarID);
		}
	};
}
