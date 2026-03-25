#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_6FD386A847FC5579.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/ScenenLightManager/FadingState.h"

class Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB;
namespace ScenenLightManager { class BaseComponentExportData; }
namespace UnityEngine { class GameObject; }

#define CLASS_4_B6AACEC5D32C6DA3_GETQUALITYFILTER_OFFSET UNITYSDK_OFFSET(0x113E9AF0)
#define CLASS_4_B6AACEC5D32C6DA3_GETTYPEID_OFFSET UNITYSDK_OFFSET(0x113EA2C0)
#define CLASS_4_B6AACEC5D32C6DA3_ONBEGINSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x113E9FB0)
#define CLASS_4_B6AACEC5D32C6DA3_ONENDSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x113EA020)
#define CLASS_4_B6AACEC5D32C6DA3_ONOBJECTENABLE_OFFSET UNITYSDK_OFFSET(0x113E9C60)
#define CLASS_4_B6AACEC5D32C6DA3_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x113E9D30)
#define CLASS_4_B6AACEC5D32C6DA3_ONSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x113E9ED0)
#define CLASS_4_B6AACEC5D32C6DA3_ONSETSCENELIGHTLOD_OFFSET UNITYSDK_OFFSET(0x113EA180)
#define CLASS_4_B6AACEC5D32C6DA3_UNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x113E9B40)
#define CLASS_4_B6AACEC5D32C6DA3__CTOR_OFFSET UNITYSDK_OFFSET(0x113E9AE0)
#define CLASS_4_B6AACEC5D32C6DA3___IFIXBASEPROXY_GETQUALITYFILTER_OFFSET UNITYSDK_OFFSET(0x113EA310)
#define CLASS_4_B6AACEC5D32C6DA3___IFIXBASEPROXY_GETTYPEID_OFFSET UNITYSDK_OFFSET(0x113EA400)
#define CLASS_4_B6AACEC5D32C6DA3___IFIXBASEPROXY_ONBEGINSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x113EA3D0)
#define CLASS_4_B6AACEC5D32C6DA3___IFIXBASEPROXY_ONENDSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x113EA3E0)
#define CLASS_4_B6AACEC5D32C6DA3___IFIXBASEPROXY_ONOBJECTENABLE_OFFSET UNITYSDK_OFFSET(0x113EA3A0)
#define CLASS_4_B6AACEC5D32C6DA3___IFIXBASEPROXY_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x113EA3B0)
#define CLASS_4_B6AACEC5D32C6DA3___IFIXBASEPROXY_ONSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x113EA3C0)
#define CLASS_4_B6AACEC5D32C6DA3___IFIXBASEPROXY_ONSETSCENELIGHTLOD_OFFSET UNITYSDK_OFFSET(0x113EA3F0)
#define CLASS_4_B6AACEC5D32C6DA3___IFIXBASEPROXY_UNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x113EA390)

inline static constexpr unsigned int Class_4_B6AACEC5D32C6DA3_TypeDefinitionIndex = 39739;

class Class_4_B6AACEC5D32C6DA3 : public ::Class_3_6FD386A847FC5579
{
public:
	::System::Single Field_4_0; // 0x50
	::System::Boolean Field_4_1; // 0x54
	::System::Single Field_4_2; // 0x58

	::System::Void _ctor(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_4_B6AACEC5D32C6DA3__CTOR_OFFSET))(this, a1);
	}

	::RPG::CustomRP::CustomLightQualityFilter GetQualityFilter()
	{
		return ((::RPG::CustomRP::CustomLightQualityFilter(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B6AACEC5D32C6DA3_GETQUALITYFILTER_OFFSET))(this);
	}

	::System::Void UnserializeAsync(::Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB* a1, ::ScenenLightManager::BaseComponentExportData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB*, ::ScenenLightManager::BaseComponentExportData*))((::PBYTE)hIl2Cpp + CLASS_4_B6AACEC5D32C6DA3_UNSERIALIZEASYNC_OFFSET))(this, a1, a2);
	}

	::System::Void OnObjectEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B6AACEC5D32C6DA3_ONOBJECTENABLE_OFFSET))(this);
	}

	::System::Void OnSceneLightFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_4_B6AACEC5D32C6DA3_ONSCENELIGHTFADING_OFFSET))(this, a1, a2);
	}

	::System::Void OnSceneLightLodFading(::System::Single a1, ::ScenenLightManager::FadingState a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_B6AACEC5D32C6DA3_ONSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void OnBeginSceneLightLodFading(::ScenenLightManager::FadingState a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_B6AACEC5D32C6DA3_ONBEGINSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnEndSceneLightLodFading(::ScenenLightManager::FadingState a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_B6AACEC5D32C6DA3_ONENDSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnSetSceneLightLod(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_B6AACEC5D32C6DA3_ONSETSCENELIGHTLOD_OFFSET))(this, a1);
	}

	::System::Int32 GetTypeID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B6AACEC5D32C6DA3_GETTYPEID_OFFSET))(this);
	}

	::RPG::CustomRP::CustomLightQualityFilter __iFixBaseProxy_GetQualityFilter()
	{
		return ((::RPG::CustomRP::CustomLightQualityFilter(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B6AACEC5D32C6DA3___IFIXBASEPROXY_GETQUALITYFILTER_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_UnserializeAsync(::Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB* P0, ::ScenenLightManager::BaseComponentExportData* P1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB*, ::ScenenLightManager::BaseComponentExportData*))((::PBYTE)hIl2Cpp + CLASS_4_B6AACEC5D32C6DA3___IFIXBASEPROXY_UNSERIALIZEASYNC_OFFSET))(this, P0, P1);
	}

	::System::Void __iFixBaseProxy_OnObjectEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B6AACEC5D32C6DA3___IFIXBASEPROXY_ONOBJECTENABLE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnSceneLightFading(::System::Single P0, ::ScenenLightManager::FadingState P1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_4_B6AACEC5D32C6DA3___IFIXBASEPROXY_ONSCENELIGHTFADING_OFFSET))(this, P0, P1);
	}

	::System::Void __iFixBaseProxy_OnSceneLightLodFading(::System::Single P0, ::ScenenLightManager::FadingState P1, ::System::Int32 P2, ::System::Int32 P3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_B6AACEC5D32C6DA3___IFIXBASEPROXY_ONSCENELIGHTLODFADING_OFFSET))(this, P0, P1, P2, P3);
	}

	::System::Void __iFixBaseProxy_OnBeginSceneLightLodFading(::ScenenLightManager::FadingState P0, ::System::Int32 P1, ::System::Int32 P2)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_B6AACEC5D32C6DA3___IFIXBASEPROXY_ONBEGINSCENELIGHTLODFADING_OFFSET))(this, P0, P1, P2);
	}

	::System::Void __iFixBaseProxy_OnEndSceneLightLodFading(::ScenenLightManager::FadingState P0, ::System::Int32 P1, ::System::Int32 P2)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_B6AACEC5D32C6DA3___IFIXBASEPROXY_ONENDSCENELIGHTLODFADING_OFFSET))(this, P0, P1, P2);
	}

	::System::Void __iFixBaseProxy_OnSetSceneLightLod(::System::Int32 P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_B6AACEC5D32C6DA3___IFIXBASEPROXY_ONSETSCENELIGHTLOD_OFFSET))(this, P0);
	}

	::System::Int32 __iFixBaseProxy_GetTypeID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_B6AACEC5D32C6DA3___IFIXBASEPROXY_GETTYPEID_OFFSET))(this);
	}
};
