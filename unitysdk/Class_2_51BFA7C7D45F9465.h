#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_1_D1797279B49332E9;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class LongPressEvent; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ICharacterSkillRowData; }
namespace RPG::GameCore { class SkillData; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_51BFA7C7D45F9465_GET_ISENABLE_OFFSET UNITYSDK_OFFSET(0x12681A50)
#define CLASS_2_51BFA7C7D45F9465_METHOD_2_03C4FFAD29DE0852_OFFSET UNITYSDK_OFFSET(0x12680C80)
#define CLASS_2_51BFA7C7D45F9465_METHOD_2_1FFEA202AB975724_OFFSET UNITYSDK_OFFSET(0x12681A70)
#define CLASS_2_51BFA7C7D45F9465_METHOD_2_229CEF33F0AF9039_OFFSET UNITYSDK_OFFSET(0x126819F0)
#define CLASS_2_51BFA7C7D45F9465_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x126818A0)
#define CLASS_2_51BFA7C7D45F9465_METHOD_2_4D2A473556700CDC_OFFSET UNITYSDK_OFFSET(0x12681840)
#define CLASS_2_51BFA7C7D45F9465_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x12681BF0)
#define CLASS_2_51BFA7C7D45F9465_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x12681B90)
#define CLASS_2_51BFA7C7D45F9465_METHOD_2_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x12680A80)
#define CLASS_2_51BFA7C7D45F9465_METHOD_2_6BCEDD4814D8A8D9_OFFSET UNITYSDK_OFFSET(0x12680970)
#define CLASS_2_51BFA7C7D45F9465_METHOD_2_7972F6E7977EE3D1_OFFSET UNITYSDK_OFFSET(0x126816C0)
#define CLASS_2_51BFA7C7D45F9465_METHOD_2_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0x12680A30)
#define CLASS_2_51BFA7C7D45F9465_METHOD_2_9B2E710EB9D49BA6_OFFSET UNITYSDK_OFFSET(0x126812E0)
#define CLASS_2_51BFA7C7D45F9465_METHOD_2_A984848EA3E436DA_OFFSET UNITYSDK_OFFSET(0x12681970)
#define CLASS_2_51BFA7C7D45F9465_METHOD_2_AC1BFDB3D2FC0C79_OFFSET UNITYSDK_OFFSET(0x12681650)
#define CLASS_2_51BFA7C7D45F9465_METHOD_2_C89A41A14F7CCD91_OFFSET UNITYSDK_OFFSET(0x12681B20)
#define CLASS_2_51BFA7C7D45F9465_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12681910)
#define CLASS_2_51BFA7C7D45F9465_METHOD_2_E09D592A696D3352_OFFSET UNITYSDK_OFFSET(0x12681750)
#define CLASS_2_51BFA7C7D45F9465_METHOD_2_EEA2FE649684CA1B_OFFSET UNITYSDK_OFFSET(0x126811B0)
#define CLASS_2_51BFA7C7D45F9465_SET_ISENABLE_OFFSET UNITYSDK_OFFSET(0x12681A60)
#define CLASS_2_51BFA7C7D45F9465__CTOR_OFFSET UNITYSDK_OFFSET(0x12681A80)
#define CLASS_2_51BFA7C7D45F9465__ONBIND_OFFSET UNITYSDK_OFFSET(0x12680770)
#define CLASS_2_51BFA7C7D45F9465__ONTICK_OFFSET UNITYSDK_OFFSET(0x12681250)
#define CLASS_2_51BFA7C7D45F9465___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x12681AC0)
#define CLASS_2_51BFA7C7D45F9465___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x12681C50)

inline static constexpr unsigned int Class_2_51BFA7C7D45F9465_TypeDefinitionIndex = 66221;

class Class_2_51BFA7C7D45F9465 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_16; // 0x0
	// static const ::System::String* Field_2_17; // 0x0
	// static const ::System::String* Field_2_18; // 0x0
	// static const ::System::String* Field_2_19; // 0x0
	// static const ::System::String* Field_2_20; // 0x0
	// static const ::System::String* Field_2_21; // 0x0
	// static const ::System::String* Field_2_22; // 0x0
	// static const ::System::String* Field_2_23; // 0x0
	// static const ::System::Single Field_2_24; // 0x0
	// static const ::System::String* Field_2_25; // 0x0
	// static const ::System::String* Field_2_26; // 0x0
	// static const ::System::String* Field_2_27; // 0x0
	::RPG::GameCore::GameEntity* Field_2_13; // 0x60
	::RPG::GameCore::SkillData* Field_2_14; // 0x68
	::RPG::Client::LongPressEvent* Field_2_2; // 0x70
	::UnityEngine::Transform* Field_2_6; // 0x78
	::UnityEngine::Transform* Field_2_7; // 0x80
	::RPG::Client::LocalizedText* Field_2_5; // 0x88
	::Class_1_D1797279B49332E9* Field_2_12; // 0x90
	::UnityEngine::UI::Image* Field_2_3; // 0x98
	::UnityEngine::Transform* Field_2_1; // 0xA0
	::RPG::Client::LocalizedText* Field_2_4; // 0xA8
	::RPG::GameCore::BattleInstance* Field_2_11; // 0xB0
	::System::Single Field_2_10; // 0xB8
	::RPG::Client::UISkillIndex Field_2_15; // 0xBC
	::System::Boolean _IsEnable_k__BackingField; // 0xC0
	::System::Boolean Field_2_9; // 0xC1

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51BFA7C7D45F9465__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51BFA7C7D45F9465__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_6BCEDD4814D8A8D9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_51BFA7C7D45F9465_METHOD_2_6BCEDD4814D8A8D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_8D61BE16C9463302()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51BFA7C7D45F9465_METHOD_2_8D61BE16C9463302_OFFSET))(this);
	}

	::System::Void Method_2_03C4FFAD29DE0852()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51BFA7C7D45F9465_METHOD_2_03C4FFAD29DE0852_OFFSET))(this);
	}

	::System::Void Method_2_EEA2FE649684CA1B(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_51BFA7C7D45F9465_METHOD_2_EEA2FE649684CA1B_OFFSET))(this, a1);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_51BFA7C7D45F9465__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_AC1BFDB3D2FC0C79(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_51BFA7C7D45F9465_METHOD_2_AC1BFDB3D2FC0C79_OFFSET))(this, a1);
	}

	::System::Void Method_2_7972F6E7977EE3D1(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::ICharacterSkillRowData* a2, ::RPG::GameCore::SkillData* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::ICharacterSkillRowData*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_2_51BFA7C7D45F9465_METHOD_2_7972F6E7977EE3D1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_E09D592A696D3352(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_51BFA7C7D45F9465_METHOD_2_E09D592A696D3352_OFFSET))(this, a1);
	}

	::System::Void Method_2_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51BFA7C7D45F9465_METHOD_2_6B72D4EE8C6E907F_OFFSET))(this);
	}

	::System::Void Method_2_4D2A473556700CDC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51BFA7C7D45F9465_METHOD_2_4D2A473556700CDC_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51BFA7C7D45F9465_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_A984848EA3E436DA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51BFA7C7D45F9465_METHOD_2_A984848EA3E436DA_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51BFA7C7D45F9465_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_229CEF33F0AF9039()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51BFA7C7D45F9465_METHOD_2_229CEF33F0AF9039_OFFSET))(this);
	}

	::System::Void Method_2_9B2E710EB9D49BA6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51BFA7C7D45F9465_METHOD_2_9B2E710EB9D49BA6_OFFSET))(this);
	}

	::System::Boolean get_IsEnable()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51BFA7C7D45F9465_GET_ISENABLE_OFFSET))(this);
	}

	::System::Void set_IsEnable(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_51BFA7C7D45F9465_SET_ISENABLE_OFFSET))(this, value);
	}

	::RPG::Client::UISkillIndex Method_2_1FFEA202AB975724()
	{
		return ((::RPG::Client::UISkillIndex(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51BFA7C7D45F9465_METHOD_2_1FFEA202AB975724_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51BFA7C7D45F9465___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_C89A41A14F7CCD91(::Struct_2_96F8F0A04B900A9E P0)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_51BFA7C7D45F9465_METHOD_2_C89A41A14F7CCD91_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51BFA7C7D45F9465_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51BFA7C7D45F9465_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_51BFA7C7D45F9465___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
	}
};
