#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_26377AA2C176BCA5.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/ScenenLightManager/FadingState.h"

class Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47;
namespace RPG::CustomRP { class CustomAdditionalLightData; }
namespace ScenenLightManager { class BaseComponentExportData; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Light; }

#define CLASS_3_7DC2FAA7945CC705_GETQUALITYFILTER_OFFSET UNITYSDK_OFFSET(0x132B9110)
#define CLASS_3_7DC2FAA7945CC705_GETTYPEID_OFFSET UNITYSDK_OFFSET(0x132B9960)
#define CLASS_3_7DC2FAA7945CC705_ONBEGINSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x132B9670)
#define CLASS_3_7DC2FAA7945CC705_ONENDSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x132B9760)
#define CLASS_3_7DC2FAA7945CC705_ONOBJECTDESTROY_OFFSET UNITYSDK_OFFSET(0x132B9620)
#define CLASS_3_7DC2FAA7945CC705_ONOBJECTENABLE_OFFSET UNITYSDK_OFFSET(0x132B9290)
#define CLASS_3_7DC2FAA7945CC705_ONRELEASE_OFFSET UNITYSDK_OFFSET(0x132B99A0)
#define CLASS_3_7DC2FAA7945CC705_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x132B93A0)
#define CLASS_3_7DC2FAA7945CC705_ONSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x132B9540)
#define CLASS_3_7DC2FAA7945CC705_ONSETSCENELIGHTLOD_OFFSET UNITYSDK_OFFSET(0x132B9820)
#define CLASS_3_7DC2FAA7945CC705_UNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x132B9160)
#define CLASS_3_7DC2FAA7945CC705__CTOR_OFFSET UNITYSDK_OFFSET(0x132B9100)
#define CLASS_3_7DC2FAA7945CC705___IFIXBASEPROXY_GETQUALITYFILTER_OFFSET UNITYSDK_OFFSET(0x132B9A00)
#define CLASS_3_7DC2FAA7945CC705___IFIXBASEPROXY_ONBEGINSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x132B9BA0)
#define CLASS_3_7DC2FAA7945CC705___IFIXBASEPROXY_ONENDSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x132B9C10)
#define CLASS_3_7DC2FAA7945CC705___IFIXBASEPROXY_ONOBJECTDESTROY_OFFSET UNITYSDK_OFFSET(0x132B9B50)
#define CLASS_3_7DC2FAA7945CC705___IFIXBASEPROXY_ONOBJECTENABLE_OFFSET UNITYSDK_OFFSET(0x132B9A70)
#define CLASS_3_7DC2FAA7945CC705___IFIXBASEPROXY_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x132B9A80)
#define CLASS_3_7DC2FAA7945CC705___IFIXBASEPROXY_ONSCENELIGHTLODFADING_OFFSET UNITYSDK_OFFSET(0x132B9AE0)
#define CLASS_3_7DC2FAA7945CC705___IFIXBASEPROXY_ONSETSCENELIGHTLOD_OFFSET UNITYSDK_OFFSET(0x132B9C80)
#define CLASS_3_7DC2FAA7945CC705___IFIXBASEPROXY_UNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x132B9A60)

inline static constexpr unsigned int Class_3_7DC2FAA7945CC705_TypeDefinitionIndex = 46230;

class Class_3_7DC2FAA7945CC705 : public ::Class_2_26377AA2C176BCA5<::RPG::CustomRP::CustomAdditionalLightData*, ::UnityEngine::Light*>
{
public:
	::System::Single Field_3_0; // 0x40
	::System::Single Field_3_1; // 0x44
	::System::Boolean Field_3_2; // 0x48

	::System::Void _ctor(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_3_7DC2FAA7945CC705__CTOR_OFFSET))(this, a1);
	}

	::RPG::CustomRP::CustomLightQualityFilter GetQualityFilter()
	{
		return ((::RPG::CustomRP::CustomLightQualityFilter(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7DC2FAA7945CC705_GETQUALITYFILTER_OFFSET))(this);
	}

	::System::Void UnserializeAsync(::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47* a1, ::ScenenLightManager::BaseComponentExportData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47*, ::ScenenLightManager::BaseComponentExportData*))((::PBYTE)hIl2Cpp + CLASS_3_7DC2FAA7945CC705_UNSERIALIZEASYNC_OFFSET))(this, a1, a2);
	}

	::System::Void OnObjectEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7DC2FAA7945CC705_ONOBJECTENABLE_OFFSET))(this);
	}

	::System::Void OnSceneLightFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_3_7DC2FAA7945CC705_ONSCENELIGHTFADING_OFFSET))(this, a1, a2);
	}

	::System::Void OnSceneLightLodFading(::System::Single a1, ::ScenenLightManager::FadingState a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_7DC2FAA7945CC705_ONSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void OnObjectDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7DC2FAA7945CC705_ONOBJECTDESTROY_OFFSET))(this);
	}

	::System::Void OnBeginSceneLightLodFading(::ScenenLightManager::FadingState a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_7DC2FAA7945CC705_ONBEGINSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnEndSceneLightLodFading(::ScenenLightManager::FadingState a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_7DC2FAA7945CC705_ONENDSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnSetSceneLightLod(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_7DC2FAA7945CC705_ONSETSCENELIGHTLOD_OFFSET))(this, a1);
	}

	::System::Int32 GetTypeID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7DC2FAA7945CC705_GETTYPEID_OFFSET))(this);
	}

	::System::Void OnRelease()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7DC2FAA7945CC705_ONRELEASE_OFFSET))(this);
	}

	::RPG::CustomRP::CustomLightQualityFilter __iFixBaseProxy_GetQualityFilter()
	{
		return ((::RPG::CustomRP::CustomLightQualityFilter(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7DC2FAA7945CC705___IFIXBASEPROXY_GETQUALITYFILTER_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_UnserializeAsync(::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47* a1, ::ScenenLightManager::BaseComponentExportData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47*, ::ScenenLightManager::BaseComponentExportData*))((::PBYTE)hIl2Cpp + CLASS_3_7DC2FAA7945CC705___IFIXBASEPROXY_UNSERIALIZEASYNC_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_OnObjectEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7DC2FAA7945CC705___IFIXBASEPROXY_ONOBJECTENABLE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnSceneLightFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_3_7DC2FAA7945CC705___IFIXBASEPROXY_ONSCENELIGHTFADING_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_OnSceneLightLodFading(::System::Single a1, ::ScenenLightManager::FadingState a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_7DC2FAA7945CC705___IFIXBASEPROXY_ONSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void __iFixBaseProxy_OnObjectDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7DC2FAA7945CC705___IFIXBASEPROXY_ONOBJECTDESTROY_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnBeginSceneLightLodFading(::ScenenLightManager::FadingState a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_7DC2FAA7945CC705___IFIXBASEPROXY_ONBEGINSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __iFixBaseProxy_OnEndSceneLightLodFading(::ScenenLightManager::FadingState a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_7DC2FAA7945CC705___IFIXBASEPROXY_ONENDSCENELIGHTLODFADING_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __iFixBaseProxy_OnSetSceneLightLod(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_7DC2FAA7945CC705___IFIXBASEPROXY_ONSETSCENELIGHTLOD_OFFSET))(this, a1);
	}
};
