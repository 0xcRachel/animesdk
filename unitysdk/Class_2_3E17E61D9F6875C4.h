#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/UnityEngine/NativeString.h"

class Class_2_A48F3719AA1CF200_29;
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_3E17E61D9F6875C4_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xDEC9DB0)
#define CLASS_2_3E17E61D9F6875C4_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xDEC9E90)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_049407E7CFE73C8B_OFFSET UNITYSDK_OFFSET(0xDEC8C40)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_0D64F99BAAA7B5C4_OFFSET UNITYSDK_OFFSET(0xDEC9070)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xDEC7810)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_16323FC6A31C6693_OFFSET UNITYSDK_OFFSET(0xDEC2BC0)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0xDEC9810)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0xDEC87D0)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_1CC698E8ABED00A4_OFFSET UNITYSDK_OFFSET(0xDEC5A80)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_288AA83E8506706B_OFFSET UNITYSDK_OFFSET(0xDEC74F0)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_3416FD11DD9200F8_OFFSET UNITYSDK_OFFSET(0xDEC6130)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_3A80239A6395FFE3_OFFSET UNITYSDK_OFFSET(0xDEC9600)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_3FC5D2EAE16048C0_OFFSET UNITYSDK_OFFSET(0xDEC79E0)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xDEC6CD0)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_4493EFD8DF704229_OFFSET UNITYSDK_OFFSET(0xDEC88D0)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_5152ABC5D08CE614_OFFSET UNITYSDK_OFFSET(0xDEC9260)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_61EC2AC0BD93363E_OFFSET UNITYSDK_OFFSET(0xDEC8630)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_64B6514CFF8F8D76_OFFSET UNITYSDK_OFFSET(0xDEC2440)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_73C23613314BF1A1_OFFSET UNITYSDK_OFFSET(0xDEC72C0)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_79C171A8034611D5_OFFSET UNITYSDK_OFFSET(0xDEC7050)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_7DD84EAFF333A1E4_1_OFFSET UNITYSDK_OFFSET(0xDEC7230)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0xDEC71E0)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_809818D33F5A75DB_OFFSET UNITYSDK_OFFSET(0xDEC58C0)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_8C3DB70FFBBF01C7_OFFSET UNITYSDK_OFFSET(0xDEC70A0)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_90EC931103FB6F31_OFFSET UNITYSDK_OFFSET(0xDEC9790)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_916B8A6B72C96F5C_OFFSET UNITYSDK_OFFSET(0xDEC8540)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_A24997ADD41BAAD9_OFFSET UNITYSDK_OFFSET(0xDEC9720)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_A6544B958241856F_OFFSET UNITYSDK_OFFSET(0xDEC6A70)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_AC9E9450F9A55C57_OFFSET UNITYSDK_OFFSET(0xDEC65A0)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_B1DDE4DE3686A8B9_OFFSET UNITYSDK_OFFSET(0xDEC9940)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xDEC74B0)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xDEC8750)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xDEC7280)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_CEE2550285AA5985_OFFSET UNITYSDK_OFFSET(0xDEC8F20)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_E6708DD8002BE8CE_OFFSET UNITYSDK_OFFSET(0xDEC7990)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_E981EFEFFC0B047D_OFFSET UNITYSDK_OFFSET(0xDEC73D0)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xDEC9800)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0xDEC8790)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0xDEC9D30)
#define CLASS_2_3E17E61D9F6875C4_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xDEC9CB0)
#define CLASS_2_3E17E61D9F6875C4__ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xDEC2470)
#define CLASS_2_3E17E61D9F6875C4__CCTOR_OFFSET UNITYSDK_OFFSET(0xDEC9F40)
#define CLASS_2_3E17E61D9F6875C4__CTOR_OFFSET UNITYSDK_OFFSET(0xDEC2230)
#define CLASS_2_3E17E61D9F6875C4__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xDEC2370)
#define CLASS_2_3E17E61D9F6875C4__ONTICK_OFFSET UNITYSDK_OFFSET(0xDEC32E0)
#define CLASS_2_3E17E61D9F6875C4__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xDEC2890)
#define CLASS_2_3E17E61D9F6875C4___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xDECA100)
#define CLASS_2_3E17E61D9F6875C4___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xDECA160)
#define CLASS_2_3E17E61D9F6875C4___IFIXBASEPROXY__ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xDEC9FD0)
#define CLASS_2_3E17E61D9F6875C4___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xDEC9F70)
#define CLASS_2_3E17E61D9F6875C4___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0xDECA090)
#define CLASS_2_3E17E61D9F6875C4___IFIXBASEPROXY__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xDECA030)

inline static constexpr unsigned int Class_2_3E17E61D9F6875C4_TypeDefinitionIndex = 57983;

class Class_2_3E17E61D9F6875C4 : public ::RPG::Client::UIController
{
public:
	static ::System::Boolean* StaticGet_Field_2_10()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_3E17E61D9F6875C4_TypeDefinitionIndex)->GetStaticField(0xFCE0);
	}
	static ::System::Boolean* StaticGet_Field_2_13()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_3E17E61D9F6875C4_TypeDefinitionIndex)->GetStaticField(0xFCE1);
	}
	static ::System::Boolean* StaticGet_Field_2_7()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_3E17E61D9F6875C4_TypeDefinitionIndex)->GetStaticField(0xFCE2);
	}
	static ::System::Boolean* StaticGet_Field_2_5()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_3E17E61D9F6875C4_TypeDefinitionIndex)->GetStaticField(0xFCE3);
	}
	static ::System::Boolean* StaticGet_Field_2_8()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_3E17E61D9F6875C4_TypeDefinitionIndex)->GetStaticField(0xFCE4);
	}
	static ::System::Boolean* StaticGet_Field_2_6()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_3E17E61D9F6875C4_TypeDefinitionIndex)->GetStaticField(0xFCE5);
	}
	static ::System::Boolean* StaticGet_Field_2_12()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_3E17E61D9F6875C4_TypeDefinitionIndex)->GetStaticField(0xFCE6);
	}
	static ::System::Single* StaticGet_Field_2_11()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_3E17E61D9F6875C4_TypeDefinitionIndex)->GetStaticField(0xFCE8);
	}
	::System::Text::StringBuilder* Field_2_1; // 0x180
	::System::String* Field_2_3; // 0x188
	::UnityEngine::Transform* Field_2_2; // 0x190
	::System::Text::StringBuilder* Field_2_20; // 0x198
	::System::Int64 Field_2_16; // 0x1A0
	::System::Boolean Field_2_9; // 0x1A8
	::System::Single Field_2_0; // 0x1AC
	::System::Int32 Field_2_4; // 0x1B0
	::System::Int64 Field_2_17; // 0x1B8
	::System::Int32 Field_2_15; // 0x1C0
	::System::Single Field_2_14; // 0x1C4
	::System::Int64 Field_2_19; // 0x1C8
	::System::Int64 Field_2_18; // 0x1D0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4__CCTOR_OFFSET))();
	}

	::System::Void _CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void _AddHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4__ADDHANDLERS_OFFSET))(this);
	}

	::System::Void _SetupView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4__SETUPVIEW_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_79C171A8034611D5(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_79C171A8034611D5_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DD84EAFF333A1E4_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_7DD84EAFF333A1E4_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_73C23613314BF1A1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_73C23613314BF1A1_OFFSET))(this, a1);
	}

	::System::Void Method_2_E981EFEFFC0B047D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_E981EFEFFC0B047D_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_288AA83E8506706B(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_288AA83E8506706B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_E6708DD8002BE8CE(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_E6708DD8002BE8CE_OFFSET))(this, a1);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_3FC5D2EAE16048C0(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_3FC5D2EAE16048C0_OFFSET))(this, a1);
	}

	::System::Void Method_2_916B8A6B72C96F5C(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_916B8A6B72C96F5C_OFFSET))(this, a1);
	}

	::System::Void Method_2_61EC2AC0BD93363E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_61EC2AC0BD93363E_OFFSET))(this, a1);
	}

	::System::Void Method_2_3416FD11DD9200F8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_3416FD11DD9200F8_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_2_A6544B958241856F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_A6544B958241856F_OFFSET))(this);
	}

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}

	::System::Void Method_2_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_2_4493EFD8DF704229(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_4493EFD8DF704229_OFFSET))(this, a1);
	}

	::System::Void Method_2_16323FC6A31C6693(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_16323FC6A31C6693_OFFSET))(this, a1);
	}

	::System::Void Method_2_8C3DB70FFBBF01C7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_8C3DB70FFBBF01C7_OFFSET))(this, a1);
	}

	::System::Void Method_2_049407E7CFE73C8B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_049407E7CFE73C8B_OFFSET))(this, a1);
	}

	::System::Void Method_2_CEE2550285AA5985(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_CEE2550285AA5985_OFFSET))(this, a1);
	}

	::System::Void Method_2_0D64F99BAAA7B5C4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_0D64F99BAAA7B5C4_OFFSET))(this, a1);
	}

	::System::Void Method_2_AC9E9450F9A55C57(::UnityEngine::UI::Text* a1, ::System::String* a2, ::System::Int64 a3, ::System::Int64 a4, ::System::Int64 a5, ::System::Int64 a6)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Text*, ::System::String*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_AC9E9450F9A55C57_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_809818D33F5A75DB(::UnityEngine::UI::Text* a1, ::System::String* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Boolean a7, ::System::Boolean a8)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Text*, ::System::String*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_809818D33F5A75DB_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_1CC698E8ABED00A4(::UnityEngine::UI::Text* a1, ::UnityEngine::NativeString a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Boolean a7, ::System::Boolean a8)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Text*, ::UnityEngine::NativeString, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_1CC698E8ABED00A4_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_5152ABC5D08CE614(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_5152ABC5D08CE614_OFFSET))(this, a1);
	}

	::System::Void Method_2_3A80239A6395FFE3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_3A80239A6395FFE3_OFFSET))(this, a1);
	}

	::UnityEngine::UI::Text* Method_2_A24997ADD41BAAD9()
	{
		return ((::UnityEngine::UI::Text*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_A24997ADD41BAAD9_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_2_90EC931103FB6F31()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_90EC931103FB6F31_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1DDE4DE3686A8B9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_B1DDE4DE3686A8B9_OFFSET))(this, a1);
	}

	::Class_2_A48F3719AA1CF200_29* Method_2_64B6514CFF8F8D76()
	{
		return ((::Class_2_A48F3719AA1CF200_29*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_64B6514CFF8F8D76_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__AddHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4___IFIXBASEPROXY__ADDHANDLERS_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__SetupView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4___IFIXBASEPROXY__SETUPVIEW_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E17E61D9F6875C4___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
