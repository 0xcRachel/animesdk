#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class DiceCombatDiceRarityIconDisplayer; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class MonoUIColorSwitcher; }
namespace RPG::Client { class UIValueChangeAnimation; }
namespace RPG::Client::DiceCombat { class IDiceCombatAvatarInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class ScrollRect; }

#define RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER_CREATE_OFFSET UNITYSDK_OFFSET(0x903D940)
#define RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER_FOCUSONSPECIALDICEICON_OFFSET UNITYSDK_OFFSET(0x9045880)
#define RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER_ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x9045F50)
#define RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER_REMOVECOLOR_OFFSET UNITYSDK_OFFSET(0x9045B50)
#define RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x9044530)
#define RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER__ASYNCLOADSPRITETO_OFFSET UNITYSDK_OFFSET(0x9046260)
#define RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER__BIND_OFFSET UNITYSDK_OFFSET(0x9042F80)
#define RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER__CCTOR_OFFSET UNITYSDK_OFFSET(0x90465B0)
#define RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x9042F70)
#define RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER__ONREMOVECOLORMATTWEENTICK_OFFSET UNITYSDK_OFFSET(0x9046490)
#define RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER__SETUPAVAILABLEDICEVIEW_OFFSET UNITYSDK_OFFSET(0x90452D0)
#define RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER__SETUPLEVELVIEW_OFFSET UNITYSDK_OFFSET(0x9044A30)
#define RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER__SETUPREMOVECOLORMAT_OFFSET UNITYSDK_OFFSET(0x9045BA0)
#define RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER__SETUPSTARVIEW_OFFSET UNITYSDK_OFFSET(0x9045050)
#define RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER__STARTREMOVECOLOR_OFFSET UNITYSDK_OFFSET(0x9045E10)

namespace RPG::Client
{
	inline static constexpr unsigned int DiceCombatBigAvatarCardDisplayer_TypeDefinitionIndex = 50466;

	class DiceCombatBigAvatarCardDisplayer : public ::System::Object
	{
	public:
		static ::System::String** StaticGet__REMOVE_COLOR_MAT_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatBigAvatarCardDisplayer_TypeDefinitionIndex)->GetStaticField(0x440F0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>** StaticGet__LEVEL_STYLE_MAP()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatBigAvatarCardDisplayer_TypeDefinitionIndex)->GetStaticField(0x440F8);
		}
		static ::System::UInt32* StaticGet__CARD_MAX_RARE()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(DiceCombatBigAvatarCardDisplayer_TypeDefinitionIndex)->GetStaticField(0xFD70);
		}
		static ::System::UInt32* StaticGet__DICE_MAX_RARE()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(DiceCombatBigAvatarCardDisplayer_TypeDefinitionIndex)->GetStaticField(0xFD74);
		}
		::UnityEngine::UI::ScrollRect* _ScrollViewSkillDesc; // 0x10
		::RPG::Client::LocalizedText* _TxtSkillDesc; // 0x18
		::UnityEngine::Transform* _NodeLevel3; // 0x20
		::UnityEngine::UI::Image* _ImgAvatarLevelFrame3; // 0x28
		::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* _AvatarInfo; // 0x30
		::UnityEngine::Transform* _Root; // 0x38
		::RPG::Client::LocalizedText* _TxtHp; // 0x40
		::UnityEngine::Transform* _NodeStarItemContent; // 0x48
		::Il2CppArray<::UnityEngine::Transform*>* _NodeLevels; // 0x50
		::UnityEngine::UI::Image* _ImgHighLevelAvatarBg; // 0x58
		::Il2CppArray<::UnityEngine::Transform*>* _NodeStars; // 0x60
		::RPG::Client::MonoUIColorSwitcher* _ColorSwitcher; // 0x68
		::RPG::Client::UIValueChangeAnimation* _ValueChanger; // 0x70
		::Il2CppArray<::UnityEngine::UI::Image*>* _ImgAvatars; // 0x78
		::Il2CppArray<::UnityEngine::UI::Image*>* _ImgLevelFrames; // 0x80
		::RPG::Client::LocalizedText* _TxtAtk; // 0x88
		::UnityEngine::Transform* _RemoveColorMatWhiteListRoot; // 0x90
		::UnityEngine::UI::Image* _ImgAvatarLevelFrame1; // 0x98
		::UnityEngine::UI::Image* _ImgAvatarLevel3; // 0xA0
		::UnityEngine::UI::Image* _ImgAvatarLevel1; // 0xA8
		::RPG::Client::LocalizedText* _TxtAvatarName; // 0xB0
		::UnityEngine::Material* _RemoveColorMat; // 0xB8
		::UnityEngine::Transform* _NodeDiceValueItemContent; // 0xC0
		::System::Collections::Generic::List_1<::RPG::Client::DiceCombatDiceRarityIconDisplayer*>* _RareIconPanelList; // 0xC8
		::UnityEngine::UI::Image* _ImgAvatarLevel2; // 0xD0
		::UnityEngine::Material* _InstRemoveColorMat; // 0xD8
		::System::Collections::Generic::List_1<::UnityEngine::Object*>* _LoadedResources; // 0xE0
		::RPG::Client::LocalizedText* _TxtDef; // 0xE8
		::UnityEngine::Transform* _NodeLevel2; // 0xF0
		::UnityEngine::UI::Image* _ImgAvatarLevelFrame2; // 0xF8
		::UnityEngine::Transform* _NodeLevel1; // 0x100
		::System::UInt32 _TargetAvatarLevel; // 0x108

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER__CCTOR_OFFSET))();
		}

		static ::RPG::Client::DiceCombatBigAvatarCardDisplayer* Create(::UnityEngine::Transform* root)
		{
			return ((::RPG::Client::DiceCombatBigAvatarCardDisplayer*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER_CREATE_OFFSET))(root);
		}

		::System::Void SetUpView(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* avatarInfo, ::System::UInt32 targetAvatarLevel)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER_SETUPVIEW_OFFSET))(this, avatarInfo, targetAvatarLevel);
		}

		::System::Void FocusOnSpecialDiceIcon(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER_FOCUSONSPECIALDICEICON_OFFSET))(this, value);
		}

		::System::Void RemoveColor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER_REMOVECOLOR_OFFSET))(this);
		}

		::System::Void OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER_ONDISPOSE_OFFSET))(this);
		}

		::System::Void _SetupLevelView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER__SETUPLEVELVIEW_OFFSET))(this);
		}

		::System::Void _SetupStarView(::System::UInt32 starNum)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER__SETUPSTARVIEW_OFFSET))(this, starNum);
		}

		::System::Void _SetupAvailableDiceView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER__SETUPAVAILABLEDICEVIEW_OFFSET))(this);
		}

		::System::Void _OnRemoveColorMatTweenTick(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER__ONREMOVECOLORMATTWEENTICK_OFFSET))(this, value);
		}

		::System::Void _StartRemoveColor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER__STARTREMOVECOLOR_OFFSET))(this);
		}

		::System::Void _SetupRemoveColorMat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER__SETUPREMOVECOLORMAT_OFFSET))(this);
		}

		::System::Void _AsyncLoadSpriteTo(::UnityEngine::UI::Image* image, ::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER__ASYNCLOADSPRITETO_OFFSET))(this, image, path);
		}

		::System::Void _Bind(::UnityEngine::Transform* root)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATBIGAVATARCARDDISPLAYER__BIND_OFFSET))(this, root);
		}
	};
}
