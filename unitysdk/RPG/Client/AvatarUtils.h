#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/AvatarSkinType.h"
#include "unitysdk/RPG/GameCore/CombatPowerAvatarRarityType.h"
#include "unitysdk/RPG/GameCore/ItemRarity.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarData; }
namespace RPG::Client { class IAvatarSkinData; }
namespace RPG::GameCore { class AvatarBaseTypeRow; }
namespace RPG::GameCore { class DamageTypeRow; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SpecialAvatarRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AVATARUTILS_AVATARHASSERVANT_OFFSET UNITYSDK_OFFSET(0x8D5FD00)
#define RPG_CLIENT_AVATARUTILS_AVATARIDTOSERVANTID_OFFSET UNITYSDK_OFFSET(0x8D577F0)
#define RPG_CLIENT_AVATARUTILS_CHECKTRIALAVATARAVAILABLE_OFFSET UNITYSDK_OFFSET(0x8D5FB00)
#define RPG_CLIENT_AVATARUTILS_CREATECOMPARERWITHCUSTOMHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0x8D620D0)
#define RPG_CLIENT_AVATARUTILS_CREATECOMPARER_OFFSET UNITYSDK_OFFSET(0x8D62020)
#define RPG_CLIENT_AVATARUTILS_GETAVATARCUTINFRONTIMGPATH_OFFSET UNITYSDK_OFFSET(0x8D61570)
#define RPG_CLIENT_AVATARUTILS_GETAVATARDAMAGETYPEROW_OFFSET UNITYSDK_OFFSET(0x8D60930)
#define RPG_CLIENT_AVATARUTILS_GETAVATARDAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x8D60820)
#define RPG_CLIENT_AVATARUTILS_GETAVATARNAME_OFFSET UNITYSDK_OFFSET(0x8D604B0)
#define RPG_CLIENT_AVATARUTILS_GETAVATARPROFESSIONROW_OFFSET UNITYSDK_OFFSET(0x8D60AC0)
#define RPG_CLIENT_AVATARUTILS_GETAVATARPROFESSION_OFFSET UNITYSDK_OFFSET(0x8D609B0)
#define RPG_CLIENT_AVATARUTILS_GETAVATARRARITYBGPATH_OFFSET UNITYSDK_OFFSET(0x8D60B40)
#define RPG_CLIENT_AVATARUTILS_GETAVATARRARITY_OFFSET UNITYSDK_OFFSET(0x8D60600)
#define RPG_CLIENT_AVATARUTILS_GETAVATARSIDEICONPATH_OFFSET UNITYSDK_OFFSET(0x8D60710)
#define RPG_CLIENT_AVATARUTILS_GETAVATARSKINDATA_OFFSET UNITYSDK_OFFSET(0x8D61A80)
#define RPG_CLIENT_AVATARUTILS_GETCHARACTEREFFECTPRELOADPATH_OFFSET UNITYSDK_OFFSET(0x8D5FD80)
#define RPG_CLIENT_AVATARUTILS_GETCURRWORLDLEVELMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x8D5F8D0)
#define RPG_CLIENT_AVATARUTILS_GETCURRWORLDLEVELMAXPROMOTION_OFFSET UNITYSDK_OFFSET(0x8D5F960)
#define RPG_CLIENT_AVATARUTILS_GETMANIKINJSONPATH_OFFSET UNITYSDK_OFFSET(0x8D61070)
#define RPG_CLIENT_AVATARUTILS_GETMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x8D5F840)
#define RPG_CLIENT_AVATARUTILS_GETMAXPROMOTION_OFFSET UNITYSDK_OFFSET(0x8D5F7A0)
#define RPG_CLIENT_AVATARUTILS_GETREPLACEDAVATARCUTINFRONTIMGPATH_OFFSET UNITYSDK_OFFSET(0x8D617B0)
#define RPG_CLIENT_AVATARUTILS_GETSKINDROPIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x8D61C90)
#define RPG_CLIENT_AVATARUTILS_GETSKININTRODUCEID_OFFSET UNITYSDK_OFFSET(0x8D61FD0)
#define RPG_CLIENT_AVATARUTILS_GETSKINITEMAVATARICONPATH_OFFSET UNITYSDK_OFFSET(0x8D612F0)
#define RPG_CLIENT_AVATARUTILS_GETSKINITEMRARITY_OFFSET UNITYSDK_OFFSET(0x8D614D0)
#define RPG_CLIENT_AVATARUTILS_GETSKINNAME_OFFSET UNITYSDK_OFFSET(0x8D60BD0)
#define RPG_CLIENT_AVATARUTILS_GETSPECIALAVATAROVERRIDEAVATARMODELPATH_OFFSET UNITYSDK_OFFSET(0x8D619F0)
#define RPG_CLIENT_AVATARUTILS_GETUIAVATARMODELPATH_OFFSET UNITYSDK_OFFSET(0x8D60E30)
#define RPG_CLIENT_AVATARUTILS_HASSAMEAVATARDATA_OFFSET UNITYSDK_OFFSET(0x8D5F5D0)
#define RPG_CLIENT_AVATARUTILS_ISAVATARCANRANKMAX_OFFSET UNITYSDK_OFFSET(0x8D5FF40)
#define RPG_CLIENT_AVATARUTILS_ISAVATARGROWTHTARGET_OFFSET UNITYSDK_OFFSET(0x8D60380)
#define RPG_CLIENT_AVATARUTILS_ISAVATARUNLOCKED_OFFSET UNITYSDK_OFFSET(0x8D5FE40)
#define RPG_CLIENT_AVATARUTILS_ISSAMEAVATARDATA_OFFSET UNITYSDK_OFFSET(0x8D5F550)
#define RPG_CLIENT_AVATARUTILS_MAPTOSKINRES_OFFSET UNITYSDK_OFFSET(0x8D61B60)
#define RPG_CLIENT_AVATARUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x8D621D0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarUtils_TypeDefinitionIndex = 49649;

	class AvatarUtils : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet__HeroAvatarID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(AvatarUtils_TypeDefinitionIndex)->GetStaticField(0xC820);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsSameAvatarData(::RPG::Client::AvatarData* avatarData1, ::RPG::Client::AvatarData* avatarData2)
		{
			return ((::System::Boolean(*)(::RPG::Client::AvatarData*, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_ISSAMEAVATARDATA_OFFSET))(avatarData1, avatarData2);
		}

		static ::System::Boolean HasSameAvatarData(::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>* avatarDatas, ::RPG::Client::AvatarData* avatar)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>*, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_HASSAMEAVATARDATA_OFFSET))(avatarDatas, avatar);
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

		static ::System::Boolean IsAvatarCanRankMax(::RPG::Client::AvatarData* avatarData)
		{
			return ((::System::Boolean(*)(::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_ISAVATARCANRANKMAX_OFFSET))(avatarData);
		}

		static ::System::Boolean IsAvatarGrowthTarget(::RPG::Client::AvatarData* avatarData)
		{
			return ((::System::Boolean(*)(::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_ISAVATARGROWTHTARGET_OFFSET))(avatarData);
		}

		static ::RPG::Client::TextID GetAvatarName(::System::UInt32 avatarID)
		{
			return ((::RPG::Client::TextID(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_GETAVATARNAME_OFFSET))(avatarID);
		}

		static ::RPG::GameCore::CombatPowerAvatarRarityType GetAvatarRarity(::System::UInt32 avatarID)
		{
			return ((::RPG::GameCore::CombatPowerAvatarRarityType(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_GETAVATARRARITY_OFFSET))(avatarID);
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

		static ::System::String* GetAvatarRarityBgPath(::System::UInt32 avatarRealID)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_GETAVATARRARITYBGPATH_OFFSET))(avatarRealID);
		}

		static ::RPG::Client::TextID GetSkinName(::RPG::Client::AvatarData* avatarData, ::System::UInt32 skinID)
		{
			return ((::RPG::Client::TextID(*)(::RPG::Client::AvatarData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_GETSKINNAME_OFFSET))(avatarData, skinID);
		}

		static ::System::String* GetUIAvatarModelPath(::RPG::Client::AvatarData* avatarData, ::System::UInt32 skinID)
		{
			return ((::System::String*(*)(::RPG::Client::AvatarData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_GETUIAVATARMODELPATH_OFFSET))(avatarData, skinID);
		}

		static ::System::String* GetManikinJsonPath(::RPG::Client::AvatarData* avatarData, ::System::UInt32 skinID)
		{
			return ((::System::String*(*)(::RPG::Client::AvatarData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_GETMANIKINJSONPATH_OFFSET))(avatarData, skinID);
		}

		static ::System::String* GetSkinItemAvatarIconPath(::RPG::Client::AvatarData* avatarData, ::System::UInt32 skinID)
		{
			return ((::System::String*(*)(::RPG::Client::AvatarData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_GETSKINITEMAVATARICONPATH_OFFSET))(avatarData, skinID);
		}

		static ::RPG::GameCore::ItemRarity GetSkinItemRarity(::RPG::Client::AvatarData* avatarData, ::System::UInt32 skinID)
		{
			return ((::RPG::GameCore::ItemRarity(*)(::RPG::Client::AvatarData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_GETSKINITEMRARITY_OFFSET))(avatarData, skinID);
		}

		static ::System::String* GetAvatarCutinFrontImgPath(::RPG::Client::AvatarData* avatarData, ::System::UInt32 skinID)
		{
			return ((::System::String*(*)(::RPG::Client::AvatarData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_GETAVATARCUTINFRONTIMGPATH_OFFSET))(avatarData, skinID);
		}

		static ::System::String* GetReplacedAvatarCutinFrontImgPath(::RPG::Client::AvatarData* avatarData)
		{
			return ((::System::String*(*)(::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_GETREPLACEDAVATARCUTINFRONTIMGPATH_OFFSET))(avatarData);
		}

		static ::System::String* GetSpecialAvatarOverrideAvatarModelPath(::RPG::GameCore::SpecialAvatarRow* specialAvatarRow)
		{
			return ((::System::String*(*)(::RPG::GameCore::SpecialAvatarRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_GETSPECIALAVATAROVERRIDEAVATARMODELPATH_OFFSET))(specialAvatarRow);
		}

		static ::RPG::Client::IAvatarSkinData* GetAvatarSkinData(::RPG::GameCore::GameEntity* entity)
		{
			return ((::RPG::Client::IAvatarSkinData*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_GETAVATARSKINDATA_OFFSET))(entity);
		}

		static ::System::String* MapToSkinRes(::System::String* originPath, ::System::UInt32 avatarID, ::System::UInt32 enhancedID, ::System::UInt32 skinID)
		{
			return ((::System::String*(*)(::System::String*, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_MAPTOSKINRES_OFFSET))(originPath, avatarID, enhancedID, skinID);
		}

		static ::System::String* GetSkinDropImagePath(::RPG::Client::IAvatarSkinData* skin)
		{
			return ((::System::String*(*)(::RPG::Client::IAvatarSkinData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_GETSKINDROPIMAGEPATH_OFFSET))(skin);
		}

		static ::System::UInt32 GetSkinIntroduceID(::RPG::GameCore::AvatarSkinType type)
		{
			return ((::System::UInt32(*)(::RPG::GameCore::AvatarSkinType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_GETSKININTRODUCEID_OFFSET))(type);
		}

		static ::System::Collections::Generic::IComparer_1<::RPG::Client::AvatarData*>* CreateComparer()
		{
			return ((::System::Collections::Generic::IComparer_1<::RPG::Client::AvatarData*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_CREATECOMPARER_OFFSET))();
		}

		static ::System::Collections::Generic::IComparer_1<::RPG::Client::AvatarData*>* CreateComparerWithCustomHighlight(::System::Collections::Generic::IComparer_1<::RPG::Client::AvatarData*>* customHighlightComparer)
		{
			return ((::System::Collections::Generic::IComparer_1<::RPG::Client::AvatarData*>*(*)(::System::Collections::Generic::IComparer_1<::RPG::Client::AvatarData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARUTILS_CREATECOMPARERWITHCUSTOMHIGHLIGHT_OFFSET))(customHighlightComparer);
		}
	};
}
