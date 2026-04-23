#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UI3DGame/MonoUI3DGameView.h"

namespace RPG::Client { class RPGAnimationEvent; }
namespace RPG::GameCore { class MonopolyClickContentConfigRow; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_UI3DGAME_MONOPOLYBILLBOARD_CLICK_OFFSET UNITYSDK_OFFSET(0x138E7FC0)
#define RPG_CLIENT_UI3DGAME_MONOPOLYBILLBOARD_METHOD_7_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x138E8250)
#define RPG_CLIENT_UI3DGAME_MONOPOLYBILLBOARD_METHOD_7_FA031B982C62201B_OFFSET UNITYSDK_OFFSET(0x138E81F0)
#define RPG_CLIENT_UI3DGAME_MONOPOLYBILLBOARD_PLAYFINALANIM_OFFSET UNITYSDK_OFFSET(0x138E8310)
#define RPG_CLIENT_UI3DGAME_MONOPOLYBILLBOARD_START_OFFSET UNITYSDK_OFFSET(0x138E7F10)
#define RPG_CLIENT_UI3DGAME_MONOPOLYBILLBOARD__CCTOR_OFFSET UNITYSDK_OFFSET(0x138E83C0)
#define RPG_CLIENT_UI3DGAME_MONOPOLYBILLBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x138E83B0)

namespace RPG::Client::UI3DGame
{
	inline static constexpr unsigned int MonopolyBillboard_TypeDefinitionIndex = 69754;

	class MonopolyBillboard : public ::RPG::Client::UI3DGame::MonoUI3DGameView
	{
	public:
		static ::System::Int32* StaticGet_Field_7_7()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonopolyBillboard_TypeDefinitionIndex)->GetStaticField(0xF2D0);
		}
		static ::System::Int32* StaticGet_Field_7_8()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonopolyBillboard_TypeDefinitionIndex)->GetStaticField(0xF2D4);
		}
		::UnityEngine::Animator* AnimController; // 0x30
		::RPG::Client::RPGAnimationEvent* RPGAnimEvent; // 0x38
		::System::UInt32 Field_7_2; // 0x40
		::System::UInt32 Field_7_3; // 0x44
		::System::UInt32 Field_7_4; // 0x48
		::System::UInt32 Field_7_5; // 0x4C
		::System::Boolean Field_7_6; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYBILLBOARD__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYBILLBOARD__CCTOR_OFFSET))();
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYBILLBOARD_START_OFFSET))(this);
		}

		::System::Void Click()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYBILLBOARD_CLICK_OFFSET))(this);
		}

		::System::Void Method_7_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYBILLBOARD_METHOD_7_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void PlayFinalAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYBILLBOARD_PLAYFINALANIM_OFFSET))(this);
		}

		::RPG::GameCore::MonopolyClickContentConfigRow* Method_7_FA031B982C62201B()
		{
			return ((::RPG::GameCore::MonopolyClickContentConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYBILLBOARD_METHOD_7_FA031B982C62201B_OFFSET))(this);
		}
	};
}
