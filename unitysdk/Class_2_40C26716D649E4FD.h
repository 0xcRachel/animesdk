#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_1_2FA40FF0BD34B01D;
class Class_1_7807B2B04302CD7B_21;
namespace RPG::Client { class LocalizedText; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_40C26716D649E4FD_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x152CEA10)
#define CLASS_2_40C26716D649E4FD_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x152CEB50)
#define CLASS_2_40C26716D649E4FD_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x152CDBF0)
#define CLASS_2_40C26716D649E4FD_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x152CDC10)
#define CLASS_2_40C26716D649E4FD_METHOD_2_390623AF74E8C979_OFFSET UNITYSDK_OFFSET(0x152CE3A0)
#define CLASS_2_40C26716D649E4FD_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x152CDDB0)
#define CLASS_2_40C26716D649E4FD_METHOD_2_44196695CAF284A8_OFFSET UNITYSDK_OFFSET(0x152CE280)
#define CLASS_2_40C26716D649E4FD_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x152CEE20)
#define CLASS_2_40C26716D649E4FD_METHOD_2_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x152CEE80)
#define CLASS_2_40C26716D649E4FD_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x152CEDC0)
#define CLASS_2_40C26716D649E4FD_METHOD_2_73351D543AC31E3E_OFFSET UNITYSDK_OFFSET(0x152CE530)
#define CLASS_2_40C26716D649E4FD_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x152CE990)
#define CLASS_2_40C26716D649E4FD_METHOD_2_B877181B6123B7F6_OFFSET UNITYSDK_OFFSET(0x152CDF20)
#define CLASS_2_40C26716D649E4FD_METHOD_2_D4499A0147676A9C_OFFSET UNITYSDK_OFFSET(0x152CDC20)
#define CLASS_2_40C26716D649E4FD_METHOD_2_D8E44F7C510402BB_OFFSET UNITYSDK_OFFSET(0x152CE5F0)
#define CLASS_2_40C26716D649E4FD_METHOD_2_E5B2D19C36637166_OFFSET UNITYSDK_OFFSET(0x152CE0C0)
#define CLASS_2_40C26716D649E4FD_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x152CE8A0)
#define CLASS_2_40C26716D649E4FD_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x152CE7B0)
#define CLASS_2_40C26716D649E4FD_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x152CDC00)
#define CLASS_2_40C26716D649E4FD__CTOR_OFFSET UNITYSDK_OFFSET(0x152CEC70)
#define CLASS_2_40C26716D649E4FD__ONBIND_OFFSET UNITYSDK_OFFSET(0x152CDAA0)
#define CLASS_2_40C26716D649E4FD___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x152CEEE0)
#define CLASS_2_40C26716D649E4FD___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x152CEF40)
#define CLASS_2_40C26716D649E4FD___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x152CED60)

inline static constexpr unsigned int Class_2_40C26716D649E4FD_TypeDefinitionIndex = 65795;

class Class_2_40C26716D649E4FD : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::UnityEngine::UI::Button* Field_2_5; // 0x60
	::RPG::GameCore::LevelUIComponent* Field_2_9; // 0x68
	::Il2CppArray<::System::String*>* Field_2_12; // 0x70
	::RPG::Client::LocalizedText* Field_2_3; // 0x78
	::UnityEngine::Animation* Field_2_6; // 0x80
	::UnityEngine::UI::Image* Field_2_7; // 0x88
	::UnityEngine::UI::Button* Field_2_4; // 0x90
	::UnityEngine::UI::Image* Field_2_1; // 0x98
	::RPG::Client::LocalizedText* Field_2_2; // 0xA0
	::System::UInt32 Field_2_10; // 0xA8
	::System::Int32 _Index_k__BackingField; // 0xAC
	::System::Int32 Field_2_11; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_40C26716D649E4FD__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_40C26716D649E4FD__ONBIND_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_40C26716D649E4FD_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_40C26716D649E4FD_SET_INDEX_OFFSET))(this, value);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_40C26716D649E4FD_GET_TRANS_OFFSET))(this);
	}

	::System::Void Method_2_D4499A0147676A9C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_40C26716D649E4FD_METHOD_2_D4499A0147676A9C_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_40C26716D649E4FD_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_B877181B6123B7F6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_40C26716D649E4FD_METHOD_2_B877181B6123B7F6_OFFSET))(this);
	}

	::System::Void Method_2_44196695CAF284A8(::Class_1_2FA40FF0BD34B01D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2FA40FF0BD34B01D*))((::PBYTE)hIl2Cpp + CLASS_2_40C26716D649E4FD_METHOD_2_44196695CAF284A8_OFFSET))(this, a1);
	}

	::System::Void Method_2_390623AF74E8C979(::Class_1_7807B2B04302CD7B_21* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7807B2B04302CD7B_21*))((::PBYTE)hIl2Cpp + CLASS_2_40C26716D649E4FD_METHOD_2_390623AF74E8C979_OFFSET))(this, a1);
	}

	::System::Void Method_2_73351D543AC31E3E(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_40C26716D649E4FD_METHOD_2_73351D543AC31E3E_OFFSET))(this, a1);
	}

	::System::Void Method_2_D8E44F7C510402BB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_40C26716D649E4FD_METHOD_2_D8E44F7C510402BB_OFFSET))(this, a1);
	}

	::System::Void Method_2_E5B2D19C36637166()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_40C26716D649E4FD_METHOD_2_E5B2D19C36637166_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_40C26716D649E4FD_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_40C26716D649E4FD_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_40C26716D649E4FD_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_40C26716D649E4FD_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_40C26716D649E4FD_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_40C26716D649E4FD___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_40C26716D649E4FD_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_40C26716D649E4FD_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_40C26716D649E4FD_METHOD_2_5790A55946AA509D_2_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_40C26716D649E4FD___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_40C26716D649E4FD___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
