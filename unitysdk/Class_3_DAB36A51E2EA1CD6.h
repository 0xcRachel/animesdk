#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class UIParticleClippable; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Renderer; }

#define CLASS_3_DAB36A51E2EA1CD6_METHOD_3_2FDC69A366F3E642_OFFSET UNITYSDK_OFFSET(0x10CE0A60)
#define CLASS_3_DAB36A51E2EA1CD6_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x10CE04B0)
#define CLASS_3_DAB36A51E2EA1CD6_METHOD_3_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x10CE1130)
#define CLASS_3_DAB36A51E2EA1CD6_METHOD_3_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x10CE1190)
#define CLASS_3_DAB36A51E2EA1CD6_METHOD_3_5790A55946AA509D_3_OFFSET UNITYSDK_OFFSET(0x10CE11F0)
#define CLASS_3_DAB36A51E2EA1CD6_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x10CE10D0)
#define CLASS_3_DAB36A51E2EA1CD6_METHOD_3_9B2E710EB9D49BA6_OFFSET UNITYSDK_OFFSET(0x10CE0570)
#define CLASS_3_DAB36A51E2EA1CD6_METHOD_3_A44A18C9451109E4_OFFSET UNITYSDK_OFFSET(0x10CE0840)
#define CLASS_3_DAB36A51E2EA1CD6_METHOD_3_C796A0B42720FBD3_OFFSET UNITYSDK_OFFSET(0x10CE07F0)
#define CLASS_3_DAB36A51E2EA1CD6_METHOD_3_C8E2469222842786_OFFSET UNITYSDK_OFFSET(0x10CE0520)
#define CLASS_3_DAB36A51E2EA1CD6_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10CE07B0)
#define CLASS_3_DAB36A51E2EA1CD6_METHOD_3_E4614D200616F07E_OFFSET UNITYSDK_OFFSET(0x10CE1020)
#define CLASS_3_DAB36A51E2EA1CD6_TICK_OFFSET UNITYSDK_OFFSET(0x10CE0A00)
#define CLASS_3_DAB36A51E2EA1CD6__CCTOR_OFFSET UNITYSDK_OFFSET(0x10CE10A0)
#define CLASS_3_DAB36A51E2EA1CD6__CTOR_OFFSET UNITYSDK_OFFSET(0x10CE1060)
#define CLASS_3_DAB36A51E2EA1CD6___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x10CE1250)

inline static constexpr unsigned int Class_3_DAB36A51E2EA1CD6_TypeDefinitionIndex = 37449;

class Class_3_DAB36A51E2EA1CD6 : public ::RPG::Client::TABehaviorBase
{
public:
	static ::System::Int32* StaticGet_Field_3_7()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_DAB36A51E2EA1CD6_TypeDefinitionIndex)->GetStaticField(0x5220);
	}
	static ::System::Int32* StaticGet_Field_3_6()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_3_DAB36A51E2EA1CD6_TypeDefinitionIndex)->GetStaticField(0x5224);
	}
	::UnityEngine::RectTransform* Field_3_2; // 0x38
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_3_0; // 0x40
	::Il2CppArray<::UnityEngine::Renderer*>* Field_3_1; // 0x48
	::Il2CppArray<::UnityEngine::Vector3>* Field_3_4; // 0x50
	::UnityEngine::Rect Field_3_3; // 0x58
	::UnityEngine::Vector4 Field_3_5; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DAB36A51E2EA1CD6__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_DAB36A51E2EA1CD6__CCTOR_OFFSET))();
	}

	::System::Void Method_3_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DAB36A51E2EA1CD6_METHOD_3_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_3_C8E2469222842786()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DAB36A51E2EA1CD6_METHOD_3_C8E2469222842786_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DAB36A51E2EA1CD6_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_C796A0B42720FBD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DAB36A51E2EA1CD6_METHOD_3_C796A0B42720FBD3_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_DAB36A51E2EA1CD6_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_3_9B2E710EB9D49BA6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DAB36A51E2EA1CD6_METHOD_3_9B2E710EB9D49BA6_OFFSET))(this);
	}

	::System::Void Method_3_2FDC69A366F3E642()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DAB36A51E2EA1CD6_METHOD_3_2FDC69A366F3E642_OFFSET))(this);
	}

	::System::Void Method_3_A44A18C9451109E4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DAB36A51E2EA1CD6_METHOD_3_A44A18C9451109E4_OFFSET))(this);
	}

	::RPG::Client::UIParticleClippable* Method_3_E4614D200616F07E()
	{
		return ((::RPG::Client::UIParticleClippable*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DAB36A51E2EA1CD6_METHOD_3_E4614D200616F07E_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DAB36A51E2EA1CD6_METHOD_3_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DAB36A51E2EA1CD6_METHOD_3_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DAB36A51E2EA1CD6_METHOD_3_5790A55946AA509D_2_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DAB36A51E2EA1CD6_METHOD_3_5790A55946AA509D_3_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_DAB36A51E2EA1CD6___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
