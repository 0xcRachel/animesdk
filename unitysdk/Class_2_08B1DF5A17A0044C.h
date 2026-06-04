#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/IronTombProgressMode.h"

class Class_1_105FC3176DAB4CDC;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define CLASS_2_08B1DF5A17A0044C_METHOD_2_1FF59A52EE8D2650_OFFSET UNITYSDK_OFFSET(0x154E8A80)
#define CLASS_2_08B1DF5A17A0044C_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x154E8FA0)
#define CLASS_2_08B1DF5A17A0044C_METHOD_2_82B6342ECB6008E8_OFFSET UNITYSDK_OFFSET(0x154E8AF0)
#define CLASS_2_08B1DF5A17A0044C_METHOD_2_AD1EEF8F6B87D2FC_OFFSET UNITYSDK_OFFSET(0x154E8EA0)
#define CLASS_2_08B1DF5A17A0044C_METHOD_2_C5F2E178DAEB1793_OFFSET UNITYSDK_OFFSET(0x154E8970)
#define CLASS_2_08B1DF5A17A0044C_METHOD_2_C7E039FB0453A06F_OFFSET UNITYSDK_OFFSET(0x154E8D50)
#define CLASS_2_08B1DF5A17A0044C_METHOD_2_CFB00179EC6A3756_OFFSET UNITYSDK_OFFSET(0x154E8B10)
#define CLASS_2_08B1DF5A17A0044C_METHOD_2_FA07211BE90EEC5E_OFFSET UNITYSDK_OFFSET(0x154E8B70)
#define CLASS_2_08B1DF5A17A0044C__CTOR_OFFSET UNITYSDK_OFFSET(0x154E8F10)
#define CLASS_2_08B1DF5A17A0044C__ONBIND_OFFSET UNITYSDK_OFFSET(0x154E8790)
#define CLASS_2_08B1DF5A17A0044C___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x154E8F40)

inline static constexpr unsigned int Class_2_08B1DF5A17A0044C_TypeDefinitionIndex = 67013;

class Class_2_08B1DF5A17A0044C : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::RPG::Client::AnimatorButton* Field_2_0; // 0x60
	::UnityEngine::Transform* Field_2_1; // 0x68
	::RPG::Client::LocalizedText* Field_2_2; // 0x70
	::UnityEngine::Transform* Field_2_3; // 0x78
	::RPG::Client::LocalizedText* Field_2_4; // 0x80
	::Class_1_105FC3176DAB4CDC* Field_2_5; // 0x88
	::UnityEngine::Transform* Field_2_6; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_08B1DF5A17A0044C__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_08B1DF5A17A0044C__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_C5F2E178DAEB1793()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_08B1DF5A17A0044C_METHOD_2_C5F2E178DAEB1793_OFFSET))(this);
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

	::System::Void Method_2_AD1EEF8F6B87D2FC(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_08B1DF5A17A0044C_METHOD_2_AD1EEF8F6B87D2FC_OFFSET))(this, a1);
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
