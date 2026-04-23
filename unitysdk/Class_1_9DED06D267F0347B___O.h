#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AIStatus.h"
#include "unitysdk/RPG/GameCore/AdventureCharacterUnitState.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/CharacterSomatoType.h"
#include "unitysdk/RPG/GameCore/EntityTag.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/GameModeType.h"
#include "unitysdk/RPG/GameCore/GraphicQuality.h"
#include "unitysdk/RPG/GameCore/ILBattleAvatarTag.h"
#include "unitysdk/RPG/GameCore/ILBattleCharacterLocation.h"
#include "unitysdk/RPG/GameCore/MissionVerseParam.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/MonoEffectFlag.h"
#include "unitysdk/RPG/GameCore/PropType.h"
#include "unitysdk/RPG/GameCore/SkillEffect.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/RPG/GameCore/VisionZoneTag.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
template <typename T> class Class_1_9DED06D267F0347B_DelegateParseJson_1;

inline static constexpr unsigned int Class_1_9DED06D267F0347B___O_TypeDefinitionIndex = 23460;

class Class_1_9DED06D267F0347B___O : public ::System::Object
{
public:
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::System::Int32>** StaticGet__3___FromJson()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B___O_TypeDefinitionIndex)->GetStaticField(0x4ABD0);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::AvatarBaseType>** StaticGet__14___FromJson()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::AvatarBaseType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B___O_TypeDefinitionIndex)->GetStaticField(0x4ABD8);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::AttackDamageType>** StaticGet__19___FromJson()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::AttackDamageType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B___O_TypeDefinitionIndex)->GetStaticField(0x4ABE0);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::AdventureModifierBehaviorFlag>** StaticGet__9___FromJson()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::AdventureModifierBehaviorFlag>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B___O_TypeDefinitionIndex)->GetStaticField(0x4ABE8);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::MonoEffectFlag>** StaticGet__10___FromJson()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::MonoEffectFlag>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B___O_TypeDefinitionIndex)->GetStaticField(0x4ABF0);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::PropType>** StaticGet__11___FromJson()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::PropType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B___O_TypeDefinitionIndex)->GetStaticField(0x4ABF8);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::SkillType>** StaticGet__15___FromJson()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::SkillType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B___O_TypeDefinitionIndex)->GetStaticField(0x4AC00);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::TurnState>** StaticGet__20___FromJson()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::TurnState>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B___O_TypeDefinitionIndex)->GetStaticField(0x4AC08);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::AIStatus>** StaticGet__7___FromJson()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::AIStatus>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B___O_TypeDefinitionIndex)->GetStaticField(0x4AC10);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::MissionVerseParam>** StaticGet__1___FromJson()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::MissionVerseParam>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B___O_TypeDefinitionIndex)->GetStaticField(0x4AC18);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::System::String*>** StaticGet__0___FromJson()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B___O_TypeDefinitionIndex)->GetStaticField(0x4AC20);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::SkillEffect>** StaticGet__17___FromJson()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::SkillEffect>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B___O_TypeDefinitionIndex)->GetStaticField(0x4AC28);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::ILBattleCharacterLocation>** StaticGet__22___FromJson()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::ILBattleCharacterLocation>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B___O_TypeDefinitionIndex)->GetStaticField(0x4AC30);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::GameModeType>** StaticGet__12___FromJson()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::GameModeType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B___O_TypeDefinitionIndex)->GetStaticField(0x4AC38);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::EntityTag>** StaticGet__6___FromJson()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::EntityTag>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B___O_TypeDefinitionIndex)->GetStaticField(0x4AC40);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::CharacterSomatoType>** StaticGet__21___FromJson()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::CharacterSomatoType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B___O_TypeDefinitionIndex)->GetStaticField(0x4AC48);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::EntityType>** StaticGet__13___FromJson()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::EntityType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B___O_TypeDefinitionIndex)->GetStaticField(0x4AC50);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::GraphicQuality>** StaticGet__4___FromJson()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::GraphicQuality>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B___O_TypeDefinitionIndex)->GetStaticField(0x4AC58);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::ILBattleAvatarTag>** StaticGet__23___FromJson()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::ILBattleAvatarTag>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B___O_TypeDefinitionIndex)->GetStaticField(0x4AC60);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::AdventureCharacterUnitState>** StaticGet__8___FromJson()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::AdventureCharacterUnitState>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B___O_TypeDefinitionIndex)->GetStaticField(0x4AC68);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::VisionZoneTag>** StaticGet__5___FromJson()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::VisionZoneTag>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B___O_TypeDefinitionIndex)->GetStaticField(0x4AC70);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::ModifierBehaviorFlag>** StaticGet__16___FromJson()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::ModifierBehaviorFlag>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B___O_TypeDefinitionIndex)->GetStaticField(0x4AC78);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::AttackType>** StaticGet__18___FromJson()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::RPG::GameCore::AttackType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B___O_TypeDefinitionIndex)->GetStaticField(0x4AC80);
	}
	static ::Class_1_9DED06D267F0347B_DelegateParseJson_1<::System::UInt16>** StaticGet__2___FromJson()
	{
		return (::Class_1_9DED06D267F0347B_DelegateParseJson_1<::System::UInt16>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DED06D267F0347B___O_TypeDefinitionIndex)->GetStaticField(0x4AC88);
	}
};
