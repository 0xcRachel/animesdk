#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/UnityEngine/Color.h"

namespace RPG::Client { class RendererMaterialCache; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define CLASS_2_E67A69B93C1AD9FA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x87297E0)
#define CLASS_2_E67A69B93C1AD9FA_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x8729BA0)
#define CLASS_2_E67A69B93C1AD9FA_METHOD_2_0923681E23F3E91E_OFFSET UNITYSDK_OFFSET(0x8729D10)
#define CLASS_2_E67A69B93C1AD9FA_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x872A180)
#define CLASS_2_E67A69B93C1AD9FA_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x8729790)
#define CLASS_2_E67A69B93C1AD9FA_METHOD_2_49B17BDAFA3D54D9_OFFSET UNITYSDK_OFFSET(0x8729A40)
#define CLASS_2_E67A69B93C1AD9FA_METHOD_2_5EC642F9F8BCFCB9_OFFSET UNITYSDK_OFFSET(0x8729E70)
#define CLASS_2_E67A69B93C1AD9FA_METHOD_2_65BB8F0F1E258993_OFFSET UNITYSDK_OFFSET(0x8729C10)
#define CLASS_2_E67A69B93C1AD9FA_METHOD_2_7889E856344009E9_OFFSET UNITYSDK_OFFSET(0x8729F10)
#define CLASS_2_E67A69B93C1AD9FA_METHOD_2_8F490265D0A1B8F6_OFFSET UNITYSDK_OFFSET(0x872A2A0)
#define CLASS_2_E67A69B93C1AD9FA_METHOD_2_9E3751A8C9767297_OFFSET UNITYSDK_OFFSET(0x872A040)
#define CLASS_2_E67A69B93C1AD9FA_METHOD_2_BC0FA8C838B766A1_OFFSET UNITYSDK_OFFSET(0x8729FB0)
#define CLASS_2_E67A69B93C1AD9FA_METHOD_2_BEF1DE9624B24370_OFFSET UNITYSDK_OFFSET(0x872A220)
#define CLASS_2_E67A69B93C1AD9FA_METHOD_2_C29740D96B56956E_OFFSET UNITYSDK_OFFSET(0x8729DD0)
#define CLASS_2_E67A69B93C1AD9FA_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0x87298A0)
#define CLASS_2_E67A69B93C1AD9FA_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0x8729850)
#define CLASS_2_E67A69B93C1AD9FA__CTOR_OFFSET UNITYSDK_OFFSET(0x8729780)
#define CLASS_2_E67A69B93C1AD9FA___IFIXBASEPROXY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x872A430)

inline static constexpr unsigned int Class_2_E67A69B93C1AD9FA_TypeDefinitionIndex = 45047;

class Class_2_E67A69B93C1AD9FA : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::Client::RendererMaterialCache* Field_2_1; // 0x18
	::System::Boolean Field_2_6; // 0x20
	::System::Boolean Field_2_0; // 0x21
	::System::Boolean Field_2_7; // 0x22
	::System::Single Field_2_4; // 0x24
	::System::Single Field_2_5; // 0x28
	::System::Int32 Field_2_2; // 0x2C
	::System::Single Field_2_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E67A69B93C1AD9FA__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E67A69B93C1AD9FA_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E67A69B93C1AD9FA_DISPOSE_OFFSET))(this);
	}

	::System::Void OnModelArtLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E67A69B93C1AD9FA_ONMODELARTLOADED_OFFSET))(this);
	}

	::System::Void OnModelArtUnloaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E67A69B93C1AD9FA_ONMODELARTUNLOADED_OFFSET))(this);
	}

	::System::Void LateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E67A69B93C1AD9FA_LATEUPDATE_OFFSET))(this, a1);
	}

	::System::Void Method_2_0923681E23F3E91E(::System::Single a1, ::UnityEngine::Color a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_2_E67A69B93C1AD9FA_METHOD_2_0923681E23F3E91E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7889E856344009E9(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E67A69B93C1AD9FA_METHOD_2_7889E856344009E9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_65BB8F0F1E258993(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E67A69B93C1AD9FA_METHOD_2_65BB8F0F1E258993_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_49B17BDAFA3D54D9(::UnityEngine::SkinnedMeshRenderer* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*))((::PBYTE)hIl2Cpp + CLASS_2_E67A69B93C1AD9FA_METHOD_2_49B17BDAFA3D54D9_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E67A69B93C1AD9FA_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_2_C29740D96B56956E(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E67A69B93C1AD9FA_METHOD_2_C29740D96B56956E_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_BEF1DE9624B24370(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E67A69B93C1AD9FA_METHOD_2_BEF1DE9624B24370_OFFSET))(this, a1);
	}

	::System::Void Method_2_5EC642F9F8BCFCB9(::System::Int32 a1, ::UnityEngine::Color a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_2_E67A69B93C1AD9FA_METHOD_2_5EC642F9F8BCFCB9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8F490265D0A1B8F6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E67A69B93C1AD9FA_METHOD_2_8F490265D0A1B8F6_OFFSET))(this, a1);
	}

	::System::Void Method_2_9E3751A8C9767297(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E67A69B93C1AD9FA_METHOD_2_9E3751A8C9767297_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BC0FA8C838B766A1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E67A69B93C1AD9FA_METHOD_2_BC0FA8C838B766A1_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_LateUpdate(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E67A69B93C1AD9FA___IFIXBASEPROXY_LATEUPDATE_OFFSET))(this, P0);
	}
};
