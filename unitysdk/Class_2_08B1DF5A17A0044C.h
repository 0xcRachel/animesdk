#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/IronTombProgressMode.h"

class Class_1_105FC3176DAB4CDC;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define CLASS_2_08B1DF5A17A0044C_METHOD_2_1FF59A52EE8D2650_OFFSET UNITYSDK_OFFSET(0xFEE0060)
#define CLASS_2_08B1DF5A17A0044C_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xFEE0580)
#define CLASS_2_08B1DF5A17A0044C_METHOD_2_82B6342ECB6008E8_OFFSET UNITYSDK_OFFSET(0xFEE00D0)
#define CLASS_2_08B1DF5A17A0044C_METHOD_2_94CBD0C21A609187_OFFSET UNITYSDK_OFFSET(0xFEE0480)
#define CLASS_2_08B1DF5A17A0044C_METHOD_2_9B92C44D5842AA8A_OFFSET UNITYSDK_OFFSET(0xFEDFF70)
#define CLASS_2_08B1DF5A17A0044C_METHOD_2_C7E039FB0453A06F_OFFSET UNITYSDK_OFFSET(0xFEE0330)
#define CLASS_2_08B1DF5A17A0044C_METHOD_2_CFB00179EC6A3756_OFFSET UNITYSDK_OFFSET(0xFEE00F0)
#define CLASS_2_08B1DF5A17A0044C_METHOD_2_FA07211BE90EEC5E_OFFSET UNITYSDK_OFFSET(0xFEE0150)
#define CLASS_2_08B1DF5A17A0044C__CTOR_OFFSET UNITYSDK_OFFSET(0xFEE04F0)
#define CLASS_2_08B1DF5A17A0044C__ONBIND_OFFSET UNITYSDK_OFFSET(0xFEDFD90)
#define CLASS_2_08B1DF5A17A0044C___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xFEE0520)

inline static constexpr unsigned int Class_2_08B1DF5A17A0044C_TypeDefinitionIndex = 57150;

class Class_2_08B1DF5A17A0044C : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::RPG::Client::LocalizedText* Field_2_0; // 0x60
	::Class_1_105FC3176DAB4CDC* Field_2_6; // 0x68
	::RPG::Client::AnimatorButton* Field_2_5; // 0x70
	::UnityEngine::Transform* Field_2_3; // 0x78
	::UnityEngine::Transform* Field_2_4; // 0x80
	::RPG::Client::LocalizedText* Field_2_2; // 0x88
	::UnityEngine::Transform* Field_2_1; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_08B1DF5A17A0044C__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_08B1DF5A17A0044C__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_9B92C44D5842AA8A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_08B1DF5A17A0044C_METHOD_2_9B92C44D5842AA8A_OFFSET))(this);
	}

	::System::Void Method_2_1FF59A52EE8D2650(::Class_1_105FC3176DAB4CDC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_105FC3176DAB4CDC*))((::PBYTE)hIl2Cpp + CLASS_2_08B1DF5A17A0044C_METHOD_2_1FF59A52EE8D2650_OFFSET))(this, a1);
	}

	::System::Void Method_2_CFB00179EC6A3756(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_08B1DF5A17A0044C_METHOD_2_CFB00179EC6A3756_OFFSET))(this, a1);
	}

	::System::Void Method_2_C7E039FB0453A06F(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_08B1DF5A17A0044C_METHOD_2_C7E039FB0453A06F_OFFSET))(this, a1);
	}

	::System::Void Method_2_FA07211BE90EEC5E(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_08B1DF5A17A0044C_METHOD_2_FA07211BE90EEC5E_OFFSET))(this, a1);
	}

	::System::Void Method_2_94CBD0C21A609187(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_08B1DF5A17A0044C_METHOD_2_94CBD0C21A609187_OFFSET))(this, a1);
	}

	::RPG::GameCore::IronTombProgressMode Method_2_82B6342ECB6008E8()
	{
		return ((::RPG::GameCore::IronTombProgressMode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_08B1DF5A17A0044C_METHOD_2_82B6342ECB6008E8_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_08B1DF5A17A0044C___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_08B1DF5A17A0044C_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
