#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/BoolEx.h"
#include "unitysdk/RPG/GameCore/NumBarSubType.h"

namespace RPG::GameCore { class JsonConfig; }
namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_0762DEB5E53E0E3C_METHOD_2_8285091081E03590_OFFSET UNITYSDK_OFFSET(0xFF4B2C0)
#define CLASS_2_0762DEB5E53E0E3C_METHOD_2_89ACFBB0A774F30A_OFFSET UNITYSDK_OFFSET(0xFF4AE50)
#define CLASS_2_0762DEB5E53E0E3C_METHOD_2_8E66B82298267DC3_OFFSET UNITYSDK_OFFSET(0xFF4B360)
#define CLASS_2_0762DEB5E53E0E3C_METHOD_2_B3395AFA7A642A0F_OFFSET UNITYSDK_OFFSET(0xFF4AFF0)
#define CLASS_2_0762DEB5E53E0E3C__CTOR_OFFSET UNITYSDK_OFFSET(0xFF4B430)
#define CLASS_2_0762DEB5E53E0E3C__ONBIND_OFFSET UNITYSDK_OFFSET(0xFF4AC60)
#define CLASS_2_0762DEB5E53E0E3C___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xFF4B460)

inline static constexpr unsigned int Class_2_0762DEB5E53E0E3C_TypeDefinitionIndex = 57635;

class Class_2_0762DEB5E53E0E3C : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::UnityEngine::UI::Text* Field_2_6; // 0x60
	::UnityEngine::UI::Text* Field_2_1; // 0x68
	::UnityEngine::UI::Text* Field_2_0; // 0x70
	::System::String* Field_2_8; // 0x78
	::UnityEngine::Transform* Field_2_4; // 0x80
	::UnityEngine::Transform* Field_2_5; // 0x88
	::UnityEngine::Transform* Field_2_3; // 0x90
	::UnityEngine::UI::Image* Field_2_2; // 0x98
	::RPG::GameCore::NumBarSubType Field_2_7; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0762DEB5E53E0E3C__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0762DEB5E53E0E3C__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_89ACFBB0A774F30A(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::RPG::GameCore::JsonConfig* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::RPG::GameCore::JsonConfig*))((::PBYTE)hIl2Cpp + CLASS_2_0762DEB5E53E0E3C_METHOD_2_89ACFBB0A774F30A_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_B3395AFA7A642A0F(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::RPG::GameCore::NumBarSubType a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::RPG::GameCore::NumBarSubType))((::PBYTE)hIl2Cpp + CLASS_2_0762DEB5E53E0E3C_METHOD_2_B3395AFA7A642A0F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_8285091081E03590(::RPG::GameCore::BoolEx a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BoolEx))((::PBYTE)hIl2Cpp + CLASS_2_0762DEB5E53E0E3C_METHOD_2_8285091081E03590_OFFSET))(this, a1);
	}

	::System::Void Method_2_8E66B82298267DC3(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_0762DEB5E53E0E3C_METHOD_2_8E66B82298267DC3_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0762DEB5E53E0E3C___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
