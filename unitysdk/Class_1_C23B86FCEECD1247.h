#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BodySize.h"
#include "unitysdk/RPG/GameCore/NPCBodySize.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPGTools::Timeline::Story { class AvatarStoryMoveRunData; }
namespace RPGTools::Timeline::Story { class AvatarStoryMoveWalkData; }
namespace RPGTools::Timeline::Story { class BaseStoryMoveRunData; }
namespace RPGTools::Timeline::Story { class BaseStoryMoveWalkData; }
namespace RPGTools::Timeline::Story { class CharacterStoryMoveMap; }
namespace RPGTools::Timeline::Story { class NpcStoryMoveRunData; }
namespace RPGTools::Timeline::Story { class NpcStoryMoveWalkData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_C23B86FCEECD1247_METHOD_1_023671D0E3147B36_OFFSET UNITYSDK_OFFSET(0x10D367B0)
#define CLASS_1_C23B86FCEECD1247_METHOD_1_143B5CD9F6E4DE8E_OFFSET UNITYSDK_OFFSET(0x10D35A40)
#define CLASS_1_C23B86FCEECD1247_METHOD_1_1DE6992665DB035F_OFFSET UNITYSDK_OFFSET(0x10D36470)
#define CLASS_1_C23B86FCEECD1247_METHOD_1_31C5B0763EAD8C2D_OFFSET UNITYSDK_OFFSET(0x10D361D0)
#define CLASS_1_C23B86FCEECD1247_METHOD_1_335A2372395F223A_OFFSET UNITYSDK_OFFSET(0x10D360F0)
#define CLASS_1_C23B86FCEECD1247_METHOD_1_39C7BAE737D01BF2_OFFSET UNITYSDK_OFFSET(0x10D36630)
#define CLASS_1_C23B86FCEECD1247_METHOD_1_A9ADAD9C731210C9_OFFSET UNITYSDK_OFFSET(0x10D36870)
#define CLASS_1_C23B86FCEECD1247_METHOD_1_C3A59BB7C1053B48_OFFSET UNITYSDK_OFFSET(0x10D36390)
#define CLASS_1_C23B86FCEECD1247_METHOD_1_E8F7D64DDF61F4CB_OFFSET UNITYSDK_OFFSET(0x10D366F0)
#define CLASS_1_C23B86FCEECD1247__CTOR_OFFSET UNITYSDK_OFFSET(0x10D36930)

inline static constexpr unsigned int Class_1_C23B86FCEECD1247_TypeDefinitionIndex = 38507;

class Class_1_C23B86FCEECD1247 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::NPCBodySize, ::RPGTools::Timeline::Story::NpcStoryMoveRunData*>* Field_1_3; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::NPCBodySize, ::RPGTools::Timeline::Story::NpcStoryMoveWalkData*>* Field_1_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BodySize, ::RPGTools::Timeline::Story::AvatarStoryMoveRunData*>* Field_1_1; // 0x20
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BodySize, ::RPGTools::Timeline::Story::AvatarStoryMoveWalkData*>* Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C23B86FCEECD1247__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_143B5CD9F6E4DE8E(::RPGTools::Timeline::Story::CharacterStoryMoveMap* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::Story::CharacterStoryMoveMap*))((::PBYTE)hIl2Cpp + CLASS_1_C23B86FCEECD1247_METHOD_1_143B5CD9F6E4DE8E_OFFSET))(this, a1);
	}

	::RPGTools::Timeline::Story::BaseStoryMoveWalkData* Method_1_335A2372395F223A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPGTools::Timeline::Story::BaseStoryMoveWalkData*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_C23B86FCEECD1247_METHOD_1_335A2372395F223A_OFFSET))(this, a1);
	}

	::RPGTools::Timeline::Story::BaseStoryMoveRunData* Method_1_C3A59BB7C1053B48(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPGTools::Timeline::Story::BaseStoryMoveRunData*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_C23B86FCEECD1247_METHOD_1_C3A59BB7C1053B48_OFFSET))(this, a1);
	}

	::RPGTools::Timeline::Story::BaseStoryMoveWalkData* Method_1_31C5B0763EAD8C2D(::RPG::GameCore::BodySize a1, ::RPG::GameCore::NPCBodySize a2)
	{
		return ((::RPGTools::Timeline::Story::BaseStoryMoveWalkData*(*)(::PVOID, ::RPG::GameCore::BodySize, ::RPG::GameCore::NPCBodySize))((::PBYTE)hIl2Cpp + CLASS_1_C23B86FCEECD1247_METHOD_1_31C5B0763EAD8C2D_OFFSET))(this, a1, a2);
	}

	::RPGTools::Timeline::Story::BaseStoryMoveRunData* Method_1_1DE6992665DB035F(::RPG::GameCore::BodySize a1, ::RPG::GameCore::NPCBodySize a2)
	{
		return ((::RPGTools::Timeline::Story::BaseStoryMoveRunData*(*)(::PVOID, ::RPG::GameCore::BodySize, ::RPG::GameCore::NPCBodySize))((::PBYTE)hIl2Cpp + CLASS_1_C23B86FCEECD1247_METHOD_1_1DE6992665DB035F_OFFSET))(this, a1, a2);
	}

	::RPGTools::Timeline::Story::AvatarStoryMoveWalkData* Method_1_39C7BAE737D01BF2(::RPG::GameCore::BodySize a1)
	{
		return ((::RPGTools::Timeline::Story::AvatarStoryMoveWalkData*(*)(::PVOID, ::RPG::GameCore::BodySize))((::PBYTE)hIl2Cpp + CLASS_1_C23B86FCEECD1247_METHOD_1_39C7BAE737D01BF2_OFFSET))(this, a1);
	}

	::RPGTools::Timeline::Story::AvatarStoryMoveRunData* Method_1_023671D0E3147B36(::RPG::GameCore::BodySize a1)
	{
		return ((::RPGTools::Timeline::Story::AvatarStoryMoveRunData*(*)(::PVOID, ::RPG::GameCore::BodySize))((::PBYTE)hIl2Cpp + CLASS_1_C23B86FCEECD1247_METHOD_1_023671D0E3147B36_OFFSET))(this, a1);
	}

	::RPGTools::Timeline::Story::NpcStoryMoveWalkData* Method_1_E8F7D64DDF61F4CB(::RPG::GameCore::NPCBodySize a1)
	{
		return ((::RPGTools::Timeline::Story::NpcStoryMoveWalkData*(*)(::PVOID, ::RPG::GameCore::NPCBodySize))((::PBYTE)hIl2Cpp + CLASS_1_C23B86FCEECD1247_METHOD_1_E8F7D64DDF61F4CB_OFFSET))(this, a1);
	}

	::RPGTools::Timeline::Story::NpcStoryMoveRunData* Method_1_A9ADAD9C731210C9(::RPG::GameCore::NPCBodySize a1)
	{
		return ((::RPGTools::Timeline::Story::NpcStoryMoveRunData*(*)(::PVOID, ::RPG::GameCore::NPCBodySize))((::PBYTE)hIl2Cpp + CLASS_1_C23B86FCEECD1247_METHOD_1_A9ADAD9C731210C9_OFFSET))(this, a1);
	}
};
