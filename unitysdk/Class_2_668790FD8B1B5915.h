#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/RPG/Client/UILayer.h"
#include "unitysdk/RPG/CustomRP/FrameCapture_CaptureType.h"
#include "unitysdk/RPG/GameCore/FrameCaptureFadeoutType.h"

class Class_1_4C4A4C98D3A7DE80;
class Class_1_83004DB6FA6E8CD1;
class Class_2_F7F0779E98338315;
namespace System { class Object; }
namespace UnityEngine { class RenderTexture; }

#define CLASS_2_668790FD8B1B5915_GET_ACTIVEPAGE_OFFSET UNITYSDK_OFFSET(0x9206060)
#define CLASS_2_668790FD8B1B5915_METHOD_2_091B1F0E0E06E7DD_OFFSET UNITYSDK_OFFSET(0x9206A60)
#define CLASS_2_668790FD8B1B5915_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x9206500)
#define CLASS_2_668790FD8B1B5915_METHOD_2_242806D282532995_OFFSET UNITYSDK_OFFSET(0x9206170)
#define CLASS_2_668790FD8B1B5915_METHOD_2_64B6514CFF8F8D76_OFFSET UNITYSDK_OFFSET(0x9206680)
#define CLASS_2_668790FD8B1B5915_METHOD_2_95FC878EB184D294_OFFSET UNITYSDK_OFFSET(0x9206A00)
#define CLASS_2_668790FD8B1B5915_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x9206910)
#define CLASS_2_668790FD8B1B5915_METHOD_2_B0B8F6DAE70FC27F_OFFSET UNITYSDK_OFFSET(0x9206290)
#define CLASS_2_668790FD8B1B5915_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x92064B0)
#define CLASS_2_668790FD8B1B5915_METHOD_2_E69F3DFB7CDFE412_OFFSET UNITYSDK_OFFSET(0x92063C0)
#define CLASS_2_668790FD8B1B5915_SET_ACTIVEPAGE_OFFSET UNITYSDK_OFFSET(0x9206070)
#define CLASS_2_668790FD8B1B5915__ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x9206780)
#define CLASS_2_668790FD8B1B5915__CTOR_OFFSET UNITYSDK_OFFSET(0x9206080)
#define CLASS_2_668790FD8B1B5915__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x9206560)
#define CLASS_2_668790FD8B1B5915__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0x92069B0)
#define CLASS_2_668790FD8B1B5915__ONTICK_OFFSET UNITYSDK_OFFSET(0x9206890)
#define CLASS_2_668790FD8B1B5915__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x92066B0)
#define CLASS_2_668790FD8B1B5915__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0x92067F0)
#define CLASS_2_668790FD8B1B5915___IFIXBASEPROXY__ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x9206B70)
#define CLASS_2_668790FD8B1B5915___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x9206AB0)
#define CLASS_2_668790FD8B1B5915___IFIXBASEPROXY__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0x9206CA0)
#define CLASS_2_668790FD8B1B5915___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x9206C30)
#define CLASS_2_668790FD8B1B5915___IFIXBASEPROXY__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x9206B10)
#define CLASS_2_668790FD8B1B5915___IFIXBASEPROXY__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0x9206BD0)

inline static constexpr unsigned int Class_2_668790FD8B1B5915_TypeDefinitionIndex = 58027;

class Class_2_668790FD8B1B5915 : public ::RPG::Client::UIController
{
public:
	static ::Class_2_668790FD8B1B5915** StaticGet__ActivePage_k__BackingField()
	{
		return (::Class_2_668790FD8B1B5915**)Il2CppClass::FromTypeDefinitionIndex(Class_2_668790FD8B1B5915_TypeDefinitionIndex)->GetStaticField(0x23130);
	}
	// static const ::System::Int32 Field_2_3 = 0x2; // 0x0
	::Class_1_4C4A4C98D3A7DE80* Field_2_1; // 0x180
	::Class_1_83004DB6FA6E8CD1* Field_2_2; // 0x188
	::System::Int32 Field_2_4; // 0x190

	::System::Void _ctor(::RPG::Client::UILayer a1, ::UnityEngine::RenderTexture* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UILayer, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + CLASS_2_668790FD8B1B5915__CTOR_OFFSET))(this, a1, a2);
	}

	static ::Class_2_668790FD8B1B5915* get_ActivePage()
	{
		return ((::Class_2_668790FD8B1B5915*(*)())((::PBYTE)hIl2Cpp + CLASS_2_668790FD8B1B5915_GET_ACTIVEPAGE_OFFSET))();
	}

	static ::System::Void set_ActivePage(::Class_2_668790FD8B1B5915* value)
	{
		return ((::System::Void(*)(::Class_2_668790FD8B1B5915*))((::PBYTE)hIl2Cpp + CLASS_2_668790FD8B1B5915_SET_ACTIVEPAGE_OFFSET))(value);
	}

	::System::Void Method_2_B0B8F6DAE70FC27F(::System::Single a1, ::System::Single a2, ::RPG::GameCore::FrameCaptureFadeoutType a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::RPG::GameCore::FrameCaptureFadeoutType))((::PBYTE)hIl2Cpp + CLASS_2_668790FD8B1B5915_METHOD_2_B0B8F6DAE70FC27F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_668790FD8B1B5915_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_668790FD8B1B5915_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void _CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_668790FD8B1B5915__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void _SetupView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_668790FD8B1B5915__SETUPVIEW_OFFSET))(this);
	}

	::System::Void _AddHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_668790FD8B1B5915__ADDHANDLERS_OFFSET))(this);
	}

	::System::Void _UnBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_668790FD8B1B5915__UNBINDVIEW_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_668790FD8B1B5915__ONTICK_OFFSET))(this, a1);
	}

	::System::Void _OnExitFinalStep()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_668790FD8B1B5915__ONEXITFINALSTEP_OFFSET))(this);
	}

	::System::Void Method_2_E69F3DFB7CDFE412()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_668790FD8B1B5915_METHOD_2_E69F3DFB7CDFE412_OFFSET))(this);
	}

	::System::Boolean Method_2_242806D282532995(::RPG::CustomRP::FrameCapture_CaptureType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::CustomRP::FrameCapture_CaptureType))((::PBYTE)hIl2Cpp + CLASS_2_668790FD8B1B5915_METHOD_2_242806D282532995_OFFSET))(this, a1);
	}

	::System::Void Method_2_95FC878EB184D294()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_668790FD8B1B5915_METHOD_2_95FC878EB184D294_OFFSET))(this);
	}

	::System::Void Method_2_091B1F0E0E06E7DD(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_668790FD8B1B5915_METHOD_2_091B1F0E0E06E7DD_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_668790FD8B1B5915_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::Class_2_F7F0779E98338315* Method_2_64B6514CFF8F8D76()
	{
		return ((::Class_2_F7F0779E98338315*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_668790FD8B1B5915_METHOD_2_64B6514CFF8F8D76_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_668790FD8B1B5915___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__SetupView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_668790FD8B1B5915___IFIXBASEPROXY__SETUPVIEW_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__AddHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_668790FD8B1B5915___IFIXBASEPROXY__ADDHANDLERS_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_668790FD8B1B5915___IFIXBASEPROXY__UNBINDVIEW_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_668790FD8B1B5915___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy__OnExitFinalStep()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_668790FD8B1B5915___IFIXBASEPROXY__ONEXITFINALSTEP_OFFSET))(this);
	}
};
