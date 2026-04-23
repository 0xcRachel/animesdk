#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5B0B78CFE6F65A6A.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_905;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class PhotoGraphSystem; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }
namespace RPG::Client { class RoamingModuleConfig; }
namespace System { class Object; }

#define CLASS_2_31C64CC68B35A0F7_METHOD_2_0076C796B2045359_OFFSET UNITYSDK_OFFSET(0xE5AC720)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_0D372435D9CAE4BC_OFFSET UNITYSDK_OFFSET(0xE5AA690)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0xE5ABC70)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_1F130271093617A5_OFFSET UNITYSDK_OFFSET(0xE5A9790)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_2DC57A98C12C3B08_OFFSET UNITYSDK_OFFSET(0xE5B0DA0)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_3A1BC9FEAE4C080B_OFFSET UNITYSDK_OFFSET(0xE5B0180)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_49F1AE7F8430F7DF_OFFSET UNITYSDK_OFFSET(0xE5ADC20)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_57DCB1CE056E3F2A_OFFSET UNITYSDK_OFFSET(0xE5B0CE0)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_62167C28EC14CC63_1_OFFSET UNITYSDK_OFFSET(0xE5AC260)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_62167C28EC14CC63_OFFSET UNITYSDK_OFFSET(0xE5AF430)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_6FA69752928E72EB_OFFSET UNITYSDK_OFFSET(0xE5AEC00)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_9662C977574EE59F_OFFSET UNITYSDK_OFFSET(0xE5AF790)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_AC3C859BC8298264_OFFSET UNITYSDK_OFFSET(0xE5B0E30)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_B00A1D822E6F5C31_OFFSET UNITYSDK_OFFSET(0xE5A93F0)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_BA410EA09457B5C1_OFFSET UNITYSDK_OFFSET(0xE5AD9D0)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_BB881F05E41D3A04_OFFSET UNITYSDK_OFFSET(0xE5A6EF0)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_CE017E2A52468EF8_OFFSET UNITYSDK_OFFSET(0xE5ADB10)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_D460587695D41831_1_OFFSET UNITYSDK_OFFSET(0xE5AA040)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_D460587695D41831_OFFSET UNITYSDK_OFFSET(0xE5A9030)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_D7B7C909A67BD350_OFFSET UNITYSDK_OFFSET(0xE5A6E40)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_DF7CEFC0E6C5FD0D_OFFSET UNITYSDK_OFFSET(0xE5ADB60)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_E479D644004B1729_OFFSET UNITYSDK_OFFSET(0xE5AD5C0)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_E7CD24A54D7ADF3B_OFFSET UNITYSDK_OFFSET(0xE5AC600)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_E97FC8C27C810984_OFFSET UNITYSDK_OFFSET(0xE5AD3A0)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_EE97EFC752A55D2E_OFFSET UNITYSDK_OFFSET(0xE5AD7B0)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_F79D5EC57FBF426E_OFFSET UNITYSDK_OFFSET(0xE5AB3D0)
#define CLASS_2_31C64CC68B35A0F7_METHOD_2_FBF7F282112D67D9_OFFSET UNITYSDK_OFFSET(0xE5B0060)
#define CLASS_2_31C64CC68B35A0F7__CCTOR_OFFSET UNITYSDK_OFFSET(0xE5B1140)
#define CLASS_2_31C64CC68B35A0F7__CTOR_1_OFFSET UNITYSDK_OFFSET(0xE5A6DB0)
#define CLASS_2_31C64CC68B35A0F7__CTOR_OFFSET UNITYSDK_OFFSET(0xE5A6D70)

inline static constexpr unsigned int Class_2_31C64CC68B35A0F7_TypeDefinitionIndex = 64186;

class Class_2_31C64CC68B35A0F7 : public ::Class_1_5B0B78CFE6F65A6A
{
public:
	static ::System::Int32* StaticGet_Field_2_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_31C64CC68B35A0F7_TypeDefinitionIndex)->GetStaticField(0x11D40);
	}
	static ::System::Single* StaticGet_Field_2_4()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_31C64CC68B35A0F7_TypeDefinitionIndex)->GetStaticField(0x11D44);
	}
	// static const ::System::Int32 Field_2_14 = 0xA; // 0x0
	::RPG::Client::PhotoGraphSystem* Field_2_15; // 0x38
	::Class_0_16E4307DCC419505_905* Field_2_1; // 0x40
	::RPG::Client::RoamingModuleConfig* Field_2_2; // 0x48
	::Il2CppArray<::System::Single>* Field_2_5; // 0x50
	::System::Single Field_2_21; // 0x58
	::System::Boolean Field_2_0; // 0x5C
	::System::Boolean Field_2_11; // 0x5D
	::System::Boolean Field_2_9; // 0x5E
	::System::Boolean Field_2_10; // 0x5F
	::System::Int32 Field_2_6; // 0x60
	::UnityEngine::Quaternion Field_2_16; // 0x64
	::UnityEngine::Vector3 Field_2_18; // 0x74
	::UnityEngine::Vector3 Field_2_8; // 0x80
	::System::Single Field_2_23; // 0x8C
	::System::Single Field_2_12; // 0x90
	::System::Single Field_2_19; // 0x94
	::UnityEngine::Vector3 Field_2_17; // 0x98
	::UnityEngine::Vector3 Field_2_7; // 0xA4
	::System::Nullable_1<::UnityEngine::Vector3> Field_2_13; // 0xB0
	::System::Single Field_2_22; // 0xC0
	::System::Single Field_2_20; // 0xC4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7__CCTOR_OFFSET))();
	}

	::System::Boolean Method_2_D7B7C909A67BD350()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_D7B7C909A67BD350_OFFSET))(this);
	}

	::System::Void Method_2_D460587695D41831()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_D460587695D41831_OFFSET))(this);
	}

	::System::Void Method_2_B00A1D822E6F5C31()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_B00A1D822E6F5C31_OFFSET))(this);
	}

	::System::Void Method_2_BB881F05E41D3A04()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_BB881F05E41D3A04_OFFSET))(this);
	}

	::System::Void Method_2_E97FC8C27C810984(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_E97FC8C27C810984_OFFSET))(this, a1);
	}

	::System::Void Method_2_E479D644004B1729(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_E479D644004B1729_OFFSET))(this, a1);
	}

	::System::Void Method_2_EE97EFC752A55D2E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_EE97EFC752A55D2E_OFFSET))(this, a1);
	}

	::System::Void Method_2_BA410EA09457B5C1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_BA410EA09457B5C1_OFFSET))(this, a1);
	}

	::System::Void Method_2_CE017E2A52468EF8(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_CE017E2A52468EF8_OFFSET))(this, a1);
	}

	::System::Void Method_2_DF7CEFC0E6C5FD0D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_DF7CEFC0E6C5FD0D_OFFSET))(this, a1);
	}

	::System::Void Method_2_1F130271093617A5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_1F130271093617A5_OFFSET))(this);
	}

	::System::Void Method_2_D460587695D41831_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_D460587695D41831_1_OFFSET))(this);
	}

	::System::Void Method_2_62167C28EC14CC63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_62167C28EC14CC63_OFFSET))(this);
	}

	::System::Void Method_2_0D372435D9CAE4BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_0D372435D9CAE4BC_OFFSET))(this);
	}

	::System::Void Method_2_F79D5EC57FBF426E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_F79D5EC57FBF426E_OFFSET))(this);
	}

	::System::Void Method_2_9662C977574EE59F(::UnityEngine::Vector3 a1, ::System::Single& a2, ::System::Single& a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_9662C977574EE59F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_3A1BC9FEAE4C080B(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_3A1BC9FEAE4C080B_OFFSET))(this, a1);
	}

	::System::Single Method_2_FBF7F282112D67D9(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_FBF7F282112D67D9_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_2_AC3C859BC8298264(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single& a4, ::System::Single a5)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_AC3C859BC8298264_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::UnityEngine::Vector3 Method_2_6FA69752928E72EB(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_6FA69752928E72EB_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_49F1AE7F8430F7DF(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_49F1AE7F8430F7DF_OFFSET))(this, a1);
	}

	::System::Single Method_2_E7CD24A54D7ADF3B(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_E7CD24A54D7ADF3B_OFFSET))(this, a1);
	}

	::System::Void Method_2_0076C796B2045359()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_0076C796B2045359_OFFSET))(this);
	}

	::System::Void Method_2_10054BB010E03EDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_10054BB010E03EDD_OFFSET))(this);
	}

	::System::Void Method_2_2DC57A98C12C3B08(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_2DC57A98C12C3B08_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_57DCB1CE056E3F2A()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_57DCB1CE056E3F2A_OFFSET))(this);
	}

	::System::Void Method_2_62167C28EC14CC63_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31C64CC68B35A0F7_METHOD_2_62167C28EC14CC63_1_OFFSET))(this);
	}
};
