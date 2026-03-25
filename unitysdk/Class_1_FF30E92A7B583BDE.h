#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Transform; }

#define CLASS_1_FF30E92A7B583BDE_GET_ID_OFFSET UNITYSDK_OFFSET(0xFB81680)
#define CLASS_1_FF30E92A7B583BDE_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xFB816F0)
#define CLASS_1_FF30E92A7B583BDE_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xFB810A0)
#define CLASS_1_FF30E92A7B583BDE_METHOD_1_32BDFE3C4F814EAC_OFFSET UNITYSDK_OFFSET(0xFB80BC0)
#define CLASS_1_FF30E92A7B583BDE_METHOD_1_38B862BB2192EC08_OFFSET UNITYSDK_OFFSET(0xFB816A0)
#define CLASS_1_FF30E92A7B583BDE_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xFB81620)
#define CLASS_1_FF30E92A7B583BDE_METHOD_1_749948B663FCCCEF_OFFSET UNITYSDK_OFFSET(0xFB81430)
#define CLASS_1_FF30E92A7B583BDE_METHOD_1_8BDE9AA6B337DB42_OFFSET UNITYSDK_OFFSET(0xFB81010)
#define CLASS_1_FF30E92A7B583BDE_METHOD_1_B73F4FB695324B9E_OFFSET UNITYSDK_OFFSET(0xFB81480)
#define CLASS_1_FF30E92A7B583BDE_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xFB815D0)
#define CLASS_1_FF30E92A7B583BDE_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xFB81590)
#define CLASS_1_FF30E92A7B583BDE_METHOD_1_E67B8EE7D04609D0_1_OFFSET UNITYSDK_OFFSET(0xFB81380)
#define CLASS_1_FF30E92A7B583BDE_METHOD_1_E67B8EE7D04609D0_OFFSET UNITYSDK_OFFSET(0xFB812D0)
#define CLASS_1_FF30E92A7B583BDE_METHOD_1_F7BA13C72A6B3F58_OFFSET UNITYSDK_OFFSET(0xFB811D0)
#define CLASS_1_FF30E92A7B583BDE_ONSELECT_OFFSET UNITYSDK_OFFSET(0xFB81120)
#define CLASS_1_FF30E92A7B583BDE_SET_ID_OFFSET UNITYSDK_OFFSET(0xFB81690)
#define CLASS_1_FF30E92A7B583BDE__CCTOR_OFFSET UNITYSDK_OFFSET(0xFB81750)
#define CLASS_1_FF30E92A7B583BDE__CTOR_OFFSET UNITYSDK_OFFSET(0xFB80BB0)

inline static constexpr unsigned int Class_1_FF30E92A7B583BDE_TypeDefinitionIndex = 61737;

class Class_1_FF30E92A7B583BDE : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FF30E92A7B583BDE_TypeDefinitionIndex)->GetStaticField(0x4FD0);
	}
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FF30E92A7B583BDE_TypeDefinitionIndex)->GetStaticField(0x4FD4);
	}
	static ::System::Int32* StaticGet_Field_1_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FF30E92A7B583BDE_TypeDefinitionIndex)->GetStaticField(0x4FD8);
	}
	::UnityEngine::GameObject* Field_1_5; // 0x10
	::UnityEngine::Animator* Field_1_9; // 0x18
	::UnityEngine::Transform* Field_1_6; // 0x20
	::System::Action* Field_1_10; // 0x28
	::UnityEngine::MeshRenderer* Field_1_7; // 0x30
	::UnityEngine::GameObject* Field_1_4; // 0x38
	::System::UInt32 _ID_k__BackingField; // 0x40
	::System::Nullable_1<::UnityEngine::Rect> Field_1_8; // 0x44
	::System::Boolean Field_1_11; // 0x58

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FF30E92A7B583BDE__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FF30E92A7B583BDE__CCTOR_OFFSET))();
	}

	::System::Void Method_1_32BDFE3C4F814EAC(::System::String* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_FF30E92A7B583BDE_METHOD_1_32BDFE3C4F814EAC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF30E92A7B583BDE_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void OnSelect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF30E92A7B583BDE_ONSELECT_OFFSET))(this);
	}

	::System::Void Method_1_F7BA13C72A6B3F58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF30E92A7B583BDE_METHOD_1_F7BA13C72A6B3F58_OFFSET))(this);
	}

	::System::Void Method_1_E67B8EE7D04609D0(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_FF30E92A7B583BDE_METHOD_1_E67B8EE7D04609D0_OFFSET))(this, a1);
	}

	::System::Void Method_1_E67B8EE7D04609D0_1(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_FF30E92A7B583BDE_METHOD_1_E67B8EE7D04609D0_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_749948B663FCCCEF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF30E92A7B583BDE_METHOD_1_749948B663FCCCEF_OFFSET))(this);
	}

	::System::Boolean Method_1_B73F4FB695324B9E(::UnityEngine::Vector2 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_FF30E92A7B583BDE_METHOD_1_B73F4FB695324B9E_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF30E92A7B583BDE_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF30E92A7B583BDE_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_8BDE9AA6B337DB42(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FF30E92A7B583BDE_METHOD_1_8BDE9AA6B337DB42_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF30E92A7B583BDE_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF30E92A7B583BDE_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FF30E92A7B583BDE_SET_ID_OFFSET))(this, value);
	}

	::UnityEngine::Transform* Method_1_38B862BB2192EC08()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF30E92A7B583BDE_METHOD_1_38B862BB2192EC08_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF30E92A7B583BDE_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}
};
