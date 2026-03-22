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

#define CLASS_1_3DE1099F948FDD1D_GET_ID_OFFSET UNITYSDK_OFFSET(0x92180A0)
#define CLASS_1_3DE1099F948FDD1D_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x9218110)
#define CLASS_1_3DE1099F948FDD1D_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x9217B50)
#define CLASS_1_3DE1099F948FDD1D_METHOD_1_32BDFE3C4F814EAC_OFFSET UNITYSDK_OFFSET(0x9217670)
#define CLASS_1_3DE1099F948FDD1D_METHOD_1_38B862BB2192EC08_OFFSET UNITYSDK_OFFSET(0x92180C0)
#define CLASS_1_3DE1099F948FDD1D_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x9218040)
#define CLASS_1_3DE1099F948FDD1D_METHOD_1_8BDE9AA6B337DB42_OFFSET UNITYSDK_OFFSET(0x9217AC0)
#define CLASS_1_3DE1099F948FDD1D_METHOD_1_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0x9217C60)
#define CLASS_1_3DE1099F948FDD1D_METHOD_1_B73F4FB695324B9E_OFFSET UNITYSDK_OFFSET(0x9217EA0)
#define CLASS_1_3DE1099F948FDD1D_METHOD_1_BBA49FAB086F388D_OFFSET UNITYSDK_OFFSET(0x9217E50)
#define CLASS_1_3DE1099F948FDD1D_METHOD_1_C53E4338A57E6194_1_OFFSET UNITYSDK_OFFSET(0x9217DC0)
#define CLASS_1_3DE1099F948FDD1D_METHOD_1_C53E4338A57E6194_OFFSET UNITYSDK_OFFSET(0x9217D30)
#define CLASS_1_3DE1099F948FDD1D_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x9217FF0)
#define CLASS_1_3DE1099F948FDD1D_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9217FB0)
#define CLASS_1_3DE1099F948FDD1D_ONSELECT_OFFSET UNITYSDK_OFFSET(0x9217BD0)
#define CLASS_1_3DE1099F948FDD1D_SET_ID_OFFSET UNITYSDK_OFFSET(0x92180B0)
#define CLASS_1_3DE1099F948FDD1D__CTOR_OFFSET UNITYSDK_OFFSET(0x9217660)

inline static constexpr unsigned int Class_1_3DE1099F948FDD1D_TypeDefinitionIndex = 59981;

class Class_1_3DE1099F948FDD1D : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_1; // 0x10
	::UnityEngine::Animator* Field_1_6; // 0x18
	::UnityEngine::GameObject* Field_1_2; // 0x20
	::UnityEngine::MeshRenderer* Field_1_4; // 0x28
	::System::Action* Field_1_7; // 0x30
	::UnityEngine::Transform* Field_1_3; // 0x38
	::System::Boolean Field_1_8; // 0x40
	::System::Nullable_1<::UnityEngine::Rect> Field_1_5; // 0x44
	::System::UInt32 _ID_k__BackingField; // 0x58

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3DE1099F948FDD1D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_32BDFE3C4F814EAC(::System::String* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_3DE1099F948FDD1D_METHOD_1_32BDFE3C4F814EAC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DE1099F948FDD1D_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void OnSelect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DE1099F948FDD1D_ONSELECT_OFFSET))(this);
	}

	::System::Void Method_1_937F8473216A3162()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DE1099F948FDD1D_METHOD_1_937F8473216A3162_OFFSET))(this);
	}

	::System::Void Method_1_C53E4338A57E6194(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_3DE1099F948FDD1D_METHOD_1_C53E4338A57E6194_OFFSET))(this, a1);
	}

	::System::Void Method_1_C53E4338A57E6194_1(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_3DE1099F948FDD1D_METHOD_1_C53E4338A57E6194_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_BBA49FAB086F388D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DE1099F948FDD1D_METHOD_1_BBA49FAB086F388D_OFFSET))(this);
	}

	::System::Boolean Method_1_B73F4FB695324B9E(::UnityEngine::Vector2 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_3DE1099F948FDD1D_METHOD_1_B73F4FB695324B9E_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DE1099F948FDD1D_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DE1099F948FDD1D_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_8BDE9AA6B337DB42(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3DE1099F948FDD1D_METHOD_1_8BDE9AA6B337DB42_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DE1099F948FDD1D_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DE1099F948FDD1D_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3DE1099F948FDD1D_SET_ID_OFFSET))(this, value);
	}

	::UnityEngine::Transform* Method_1_38B862BB2192EC08()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DE1099F948FDD1D_METHOD_1_38B862BB2192EC08_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DE1099F948FDD1D_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}
};
