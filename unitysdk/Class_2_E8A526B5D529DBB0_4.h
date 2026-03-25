#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace RPG::Client { class HPBar; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_E8A526B5D529DBB0_4_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x8B655E0)
#define CLASS_2_E8A526B5D529DBB0_4_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x8B656A0)
#define CLASS_2_E8A526B5D529DBB0_4_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x8B64590)
#define CLASS_2_E8A526B5D529DBB0_4_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x8B645B0)
#define CLASS_2_E8A526B5D529DBB0_4_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x8B645C0)
#define CLASS_2_E8A526B5D529DBB0_4_METHOD_2_4481198A108EDE21_OFFSET UNITYSDK_OFFSET(0x8B65500)
#define CLASS_2_E8A526B5D529DBB0_4_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x8B648C0)
#define CLASS_2_E8A526B5D529DBB0_4_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x8B65830)
#define CLASS_2_E8A526B5D529DBB0_4_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x8B657D0)
#define CLASS_2_E8A526B5D529DBB0_4_METHOD_2_6E6682ED9FD6F719_OFFSET UNITYSDK_OFFSET(0x8B64B60)
#define CLASS_2_E8A526B5D529DBB0_4_METHOD_2_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0x8B649E0)
#define CLASS_2_E8A526B5D529DBB0_4_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x8B65550)
#define CLASS_2_E8A526B5D529DBB0_4_METHOD_2_CD8EB704BDED69B6_OFFSET UNITYSDK_OFFSET(0x8B65110)
#define CLASS_2_E8A526B5D529DBB0_4_METHOD_2_E5B2D19C36637166_OFFSET UNITYSDK_OFFSET(0x8B64730)
#define CLASS_2_E8A526B5D529DBB0_4_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x8B645A0)
#define CLASS_2_E8A526B5D529DBB0_4__CTOR_OFFSET UNITYSDK_OFFSET(0x8B65740)
#define CLASS_2_E8A526B5D529DBB0_4__ONBIND_OFFSET UNITYSDK_OFFSET(0x8B63DB0)
#define CLASS_2_E8A526B5D529DBB0_4___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x8B65890)
#define CLASS_2_E8A526B5D529DBB0_4___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x8B658F0)
#define CLASS_2_E8A526B5D529DBB0_4___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x8B65770)

inline static constexpr unsigned int Class_2_E8A526B5D529DBB0_4_TypeDefinitionIndex = 59050;

class Class_2_E8A526B5D529DBB0_4 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_17; // 0x0
	::RPG::Client::HPBar* Field_2_16; // 0x60
	::UnityEngine::Transform* Field_2_1; // 0x68
	::UnityEngine::Transform* Field_2_13; // 0x70
	::UnityEngine::Transform* Field_2_7; // 0x78
	::UnityEngine::UI::Text* Field_2_14; // 0x80
	::UnityEngine::UI::Text* Field_2_15; // 0x88
	::UnityEngine::UI::Text* Field_2_11; // 0x90
	::UnityEngine::UI::Text* Field_2_4; // 0x98
	::UnityEngine::UI::Image* Field_2_9; // 0xA0
	::UnityEngine::Transform* Field_2_6; // 0xA8
	::UnityEngine::Transform* Field_2_3; // 0xB0
	::UnityEngine::UI::Image* Field_2_5; // 0xB8
	::UnityEngine::UI::Text* Field_2_0; // 0xC0
	::UnityEngine::Transform* Field_2_10; // 0xC8
	::UnityEngine::Transform* Field_2_12; // 0xD0
	::UnityEngine::UI::Text* Field_2_2; // 0xD8
	::RPG::GameCore::LevelUIComponent* Field_2_19; // 0xE0
	::UnityEngine::UI::Text* Field_2_8; // 0xE8
	::System::Int32 _Index_k__BackingField; // 0xF0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_4__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_4__ONBIND_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_4_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_4_SET_INDEX_OFFSET))(this, value);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_4_GET_TRANS_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_4_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_E5B2D19C36637166()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_4_METHOD_2_E5B2D19C36637166_OFFSET))(this);
	}

	::System::Void Method_2_4481198A108EDE21()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_4_METHOD_2_4481198A108EDE21_OFFSET))(this);
	}

	::System::Void Method_2_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_4_METHOD_2_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_2_82E992240300FB30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_4_METHOD_2_82E992240300FB30_OFFSET))(this);
	}

	::System::Void Method_2_6E6682ED9FD6F719()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_4_METHOD_2_6E6682ED9FD6F719_OFFSET))(this);
	}

	::System::Void Method_2_CD8EB704BDED69B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_4_METHOD_2_CD8EB704BDED69B6_OFFSET))(this);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_4_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_4_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_4_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_4___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_4_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_4_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_4___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8A526B5D529DBB0_4___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
