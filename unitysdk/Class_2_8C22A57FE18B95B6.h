#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_2_24193089A4D2255F;
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_8C22A57FE18B95B6_METHOD_2_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x10AECC60)
#define CLASS_2_8C22A57FE18B95B6_METHOD_2_189F9CB95A61B428_OFFSET UNITYSDK_OFFSET(0x10AECA00)
#define CLASS_2_8C22A57FE18B95B6_METHOD_2_57D80B372834C5D1_OFFSET UNITYSDK_OFFSET(0x10AEC9A0)
#define CLASS_2_8C22A57FE18B95B6_METHOD_2_775B6D644F07B554_1_OFFSET UNITYSDK_OFFSET(0x10AED100)
#define CLASS_2_8C22A57FE18B95B6_METHOD_2_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0x10AECBA0)
#define CLASS_2_8C22A57FE18B95B6_METHOD_2_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x10AECD00)
#define CLASS_2_8C22A57FE18B95B6_METHOD_2_D09831639F615812_OFFSET UNITYSDK_OFFSET(0x10AECBF0)
#define CLASS_2_8C22A57FE18B95B6__CTOR_OFFSET UNITYSDK_OFFSET(0x10AED240)
#define CLASS_2_8C22A57FE18B95B6__ONBIND_OFFSET UNITYSDK_OFFSET(0x10AED150)
#define CLASS_2_8C22A57FE18B95B6__ONTICK_OFFSET UNITYSDK_OFFSET(0x10AECE70)
#define CLASS_2_8C22A57FE18B95B6___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x10AED2E0)
#define CLASS_2_8C22A57FE18B95B6___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x10AED270)

inline static constexpr unsigned int Class_2_8C22A57FE18B95B6_TypeDefinitionIndex = 66118;

class Class_2_8C22A57FE18B95B6 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::RPG::GameCore::GameEntity* Field_2_3; // 0x60
	::RPG::Client::UIStateCtrl* Field_2_7; // 0x68
	::UnityEngine::Animation* Field_2_9; // 0x70
	::UnityEngine::UI::Text* Field_2_8; // 0x78
	::RPG::GameCore::FixPoint Field_2_1; // 0x80
	::System::Boolean Field_2_6; // 0x88
	::System::Boolean Field_2_4; // 0x89
	::System::Boolean Field_2_5; // 0x8A
	::System::Int32 Field_2_2; // 0x8C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C22A57FE18B95B6__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_57D80B372834C5D1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_8C22A57FE18B95B6_METHOD_2_57D80B372834C5D1_OFFSET))(this, a1);
	}

	::System::Void Method_2_189F9CB95A61B428(::Class_2_24193089A4D2255F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_24193089A4D2255F*))((::PBYTE)hIl2Cpp + CLASS_2_8C22A57FE18B95B6_METHOD_2_189F9CB95A61B428_OFFSET))(this, a1);
	}

	::System::Void Method_2_D09831639F615812(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8C22A57FE18B95B6_METHOD_2_D09831639F615812_OFFSET))(this, a1);
	}

	::System::Void Method_2_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C22A57FE18B95B6_METHOD_2_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_2_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C22A57FE18B95B6_METHOD_2_A1ADC999CFACEB89_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8C22A57FE18B95B6__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_775B6D644F07B554()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C22A57FE18B95B6_METHOD_2_775B6D644F07B554_OFFSET))(this);
	}

	::System::Void Method_2_775B6D644F07B554_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C22A57FE18B95B6_METHOD_2_775B6D644F07B554_1_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C22A57FE18B95B6__ONBIND_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8C22A57FE18B95B6___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C22A57FE18B95B6___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
