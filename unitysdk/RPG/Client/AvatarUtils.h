#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/AvatarSkinType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_345;
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class IAvatarSkinData; }
namespace RPG::GameCore { class AvatarBaseTypeRow; }
namespace RPG::GameCore { class DamageTypeRow; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SpecialAvatarRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AVATARUTILS_AVATARHASSERVANT_OFFSET UNITYSDK_OFFSET(0x15E4BB80)
#define RPG_CLIENT_AVATARUTILS_AVATARIDTOSERVANTID_OFFSET UNITYSDK_OFFSET(0x15E4BAD0)
#define RPG_CLIENT_AVATARUTILS_CHECKTRIALAVATARAVAILABLE_OFFSET UNITYSDK_OFFSET(0x15E35DB0)
#define RPG_CLIENT_AVATARUTILS_GETAVATARDAMAGETYPEROW_OFFSET UNITYSDK_OFFSET(0x15E4C580)
#define RPG_CLIENT_AVATARUTILS_GETAVATARDAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x15E4C470)
#define RPG_CLIENT_AVATARUTILS_GETAVATARNAME_OFFSET UNITYSDK_OFFSET(0x15E4C210)
#define RPG_CLIENT_AVATARUTILS_GETAVATARPROFESSIONROW_OFFSET UNITYSDK_OFFSET(0x15E4C710)
#define RPG_CLIENT_AVATARUTILS_GETAVATARPROFESSION_OFFSET UNITYSDK_OFFSET(0x15E4C600)
#define RPG_CLIENT_AVATARUTILS_GETAVATARSIDEICONPATH_OFFSET UNITYSDK_OFFSET(0x15E4C360)
#define RPG_CLIENT_AVATARUTILS_GETAVATARSKINDATABYABILITY_OFFSET UNITYSDK_OFFSET(0x15E4C990)
#define RPG_CLIENT_AVATARUTILS_GETAVATARSKINDATA_OFFSET UNITYSDK_OFFSET(0x15E4C820)
#define RPG_CLIENT_AVATARUTILS_GETCHARACTEREFFECTPRELOADPATH_OFFSET UNITYSDK_OFFSET(0x15E4BC00)
#define RPG_CLIENT_AVATARUTILS_GETCURRWORLDLEVELMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x15E4B8A0)
#define RPG_CLIENT_AVATARUTILS_GETCURRWORLDLEVELMAXPROMOTION_OFFSET UNITYSDK_OFFSET(0x15E4B930)
#define RPG_CLIENT_AVATARUTILS_GETMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x15E4B810)
#define RPG_CLIENT_AVATARUTILS_GETMAXPROMOTION_OFFSET UNITYSDK_OFFSET(0x15E4B770)
#define RPG_CLIENT_AVATARUTILS_GETSKINDROPIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x15E4CDB0)
#define RPG_CLIENT_AVATARUTILS_GETSKININTRODUCEID_OFFSET UNITYSDK_OFFSET(0x15E4D0F0)
#define RPG_CLIENT_AVATARUTILS_GETSPECIALAVATAROVERRIDEAVATARMODELPATH_OFFSET UNITYSDK_OFFSET(0x15E4C790)
#define RPG_CLIENT_AVATARUTILS_HASSAMEAVATAR_OFFSET UNITYSDK_OFFSET(0x15E4B620)
#define RPG_CLIENT_AVATARUTILS_ISAVATARCANRANKMAX_OFFSET UNITYSDK_OFFSET(0x15E4BDC0)
#define RPG_CLIENT_AVATARUTILS_ISAVATARGROWTHTARGET_OFFSET UNITYSDK_OFFSET(0x15E4C0D0)
#define RPG_CLIENT_AVATARUTILS_ISAVATARUNLOCKED_OFFSET UNITYSDK_OFFSET(0x15E4BCC0)
#define RPG_CLIENT_AVATARUTILS_ISSAMEAVATAR_OFFSET UNITYSDK_OFFSET(0x15E4B530)
#define RPG_CLIENT_AVATARUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x15E4D140)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarUtils_TypeDefinitionIndex = 57663;

	class AvatarUtils : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet__HeroAvatarID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(AvatarUtils_TypeDefinitionIndex)->GetStaticField(0xFC60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsSameAvatar(::RPG::Client::IAvatarInfoProvider* left, ::RPG::Client::IAvatarInfoProvider* right)
		{
			return ((::System::Boolean(*)(::RPG::Client::IAvatarInfoProvider*, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_ISSAMEAVATAR_OFFSET))(left, right);
		}

		static ::System::Boolean HasSameAvatar(::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* avatars, ::RPG::Client::IAvatarInfoProvider* targetAvatar)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_HASSAMEAVATAR_OFFSET))(avatars, targetAvatar);
		}

		static ::System::UInt32 GetMaxPromotion()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_GETMAXPROMOTION_OFFSET))();
		}

		static ::System::UInt32 GetMaxLevel()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_GETMAXLEVEL_OFFSET))();
		}

		static ::System::UInt32 GetCurrWorldLevelMaxLevel()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_GETCURRWORLDLEVELMAXLEVEL_OFFSET))();
		}

		static ::System::UInt32 GetCurrWorldLevelMaxPromotion()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_GETCURRWORLDLEVELMAXPROMOTION_OFFSET))();
		}

		static ::System::Boolean CheckTrialAvatarAvailable(::System::UInt32 trialAvatarID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_CHECKTRIALAVATARAVAILABLE_OFFSET))(trialAvatarID);
		}

		static ::System::UInt32 AvatarIDToServantID(::System::UInt32 avatarID)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_AVATARIDTOSERVANTID_OFFSET))(avatarID);
		}

		static ::System::Boolean AvatarHasServant(::System::UInt32 avatarID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_AVATARHASSERVANT_OFFSET))(avatarID);
		}

		static ::System::String* GetCharacterEffectPreloadPath(::System::UInt32 avatarID)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_GETCHARACTEREFFECTPRELOADPATH_OFFSET))(avatarID);
		}

		static ::System::Boolean IsAvatarUnlocked(::System::UInt32 avatarID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_ISAVATARUNLOCKED_OFFSET))(avatarID);
		}

		static ::System::Boolean IsAvatarCanRankMax(::RPG::Client::IAvatarInfoProvider* avatar)
		{
			return ((::System::Boolean(*)(::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_ISAVATARCANRANKMAX_OFFSET))(avatar);
		}

		static ::System::Boolean IsAvatarGrowthTarget(::RPG::Client::IAvatarInfoProvider* avatar)
		{
			return ((::System::Boolean(*)(::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_ISAVATARGROWTHTARGET_OFFSET))(avatar);
		}

		static ::RPG::Client::TextID GetAvatarName(::System::UInt32 avatarID)
		{
			return ((::RPG::Client::TextID(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_GETAVATARNAME_OFFSET))(avatarID);
		}

		static ::System::String* GetAvatarSideIconPath(::System::UInt32 avatarID)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_GETAVATARSIDEICONPATH_OFFSET))(avatarID);
		}

		static ::RPG::GameCore::AttackDamageType GetAvatarDamageType(::System::UInt32 avatarID)
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_GETAVATARDAMAGETYPE_OFFSET))(avatarID);
		}

		static ::RPG::GameCore::DamageTypeRow* GetAvatarDamageTypeRow(::System::UInt32 avatarID)
		{
			return ((::RPG::GameCore::DamageTypeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_GETAVATARDAMAGETYPEROW_OFFSET))(avatarID);
		}

		static ::RPG::GameCore::AvatarBaseType GetAvatarProfession(::System::UInt32 avatarID)
		{
			return ((::RPG::GameCore::AvatarBaseType(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_GETAVATARPROFESSION_OFFSET))(avatarID);
		}

		static ::RPG::GameCore::AvatarBaseTypeRow* GetAvatarProfessionRow(::System::UInt32 avatarID)
		{
			return ((::RPG::GameCore::AvatarBaseTypeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_GETAVATARPROFESSIONROW_OFFSET))(avatarID);
		}

		static ::System::String* GetSpecialAvatarOverrideAvatarModelPath(::RPG::GameCore::SpecialAvatarRow* specialAvatarRow)
		{
			return ((::System::String*(*)(::RPG::GameCore::SpecialAvatarRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_GETSPECIALAVATAROVERRIDEAVATARMODELPATH_OFFSET))(specialAvatarRow);
		}

		static ::RPG::Client::IAvatarSkinData* GetAvatarSkinData(::RPG::GameCore::GameEntity* entity)
		{
			return ((::RPG::Client::IAvatarSkinData*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_GETAVATARSKINDATA_OFFSET))(entity);
		}

		static ::RPG::Client::IAvatarSkinData* GetAvatarSkinDataByAbility(::Class_0_16E4307DCC419505_345* ability)
		{
			return ((::RPG::Client::IAvatarSkinData*(*)(::Class_0_16E4307DCC419505_345*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_GETAVATARSKINDATABYABILITY_OFFSET))(ability);
		}

		static ::System::String* GetSkinDropImagePath(::RPG::Client::IAvatarSkinData* skin)
		{
			return ((::System::String*(*)(::RPG::Client::IAvatarSkinData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_GETSKINDROPIMAGEPATH_OFFSET))(skin);
		}

		static ::System::UInt32 GetSkinIntroduceID(::RPG::GameCore::AvatarSkinType type)
		{
			return ((::System::UInt32(*)(::RPG::GameCore::AvatarSkinType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_GETSKININTRODUCEID_OFFSET))(type);
		}
	};
}
