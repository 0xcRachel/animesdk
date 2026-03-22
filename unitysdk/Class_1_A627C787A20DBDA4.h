#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/UINavigation/UINavigationDirection.h"
#include "unitysdk/System/Object.h"

class Class_1_A8F358278D5B9235;
namespace RPG::UINavigation { class UINavigation; }
namespace RPG::UINavigation { class UINavigationButton; }
namespace RPG::UINavigation { class UINavigationZone; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class AxisEventData; }
namespace UnityEngine::EventSystems { class BaseEventData; }

#define CLASS_1_A627C787A20DBDA4_METHOD_1_17A60C5671B90277_OFFSET UNITYSDK_OFFSET(0xB2B7DC0)
#define CLASS_1_A627C787A20DBDA4_METHOD_1_4B2CE4C484D1235B_OFFSET UNITYSDK_OFFSET(0xB2B7FF0)
#define CLASS_1_A627C787A20DBDA4_METHOD_1_5D8A1EAE3D5132D5_OFFSET UNITYSDK_OFFSET(0xB2B79E0)
#define CLASS_1_A627C787A20DBDA4_METHOD_1_74B683DF3B5A0AE6_OFFSET UNITYSDK_OFFSET(0xB2B8510)
#define CLASS_1_A627C787A20DBDA4_METHOD_1_793E8C3168918B76_OFFSET UNITYSDK_OFFSET(0xB2B8330)
#define CLASS_1_A627C787A20DBDA4_METHOD_1_A1A7459F44708BFD_OFFSET UNITYSDK_OFFSET(0xB2B7BA0)
#define CLASS_1_A627C787A20DBDA4_METHOD_1_B92276BAA43CD9E4_OFFSET UNITYSDK_OFFSET(0xB2B79D0)
#define CLASS_1_A627C787A20DBDA4_METHOD_1_BA2EB1BC1B950B00_OFFSET UNITYSDK_OFFSET(0xB2B86F0)
#define CLASS_1_A627C787A20DBDA4_METHOD_1_C8F236EDA5771098_OFFSET UNITYSDK_OFFSET(0xB2B78D0)
#define CLASS_1_A627C787A20DBDA4_METHOD_1_D2D88FFB2FE1A053_OFFSET UNITYSDK_OFFSET(0xB2B8110)
#define CLASS_1_A627C787A20DBDA4_METHOD_1_E4886687508BA48F_OFFSET UNITYSDK_OFFSET(0xB2B7D30)
#define CLASS_1_A627C787A20DBDA4_METHOD_1_E607519FCB80C849_OFFSET UNITYSDK_OFFSET(0xB2B8580)
#define CLASS_1_A627C787A20DBDA4_METHOD_1_EB0CF1EC81C5DE9C_OFFSET UNITYSDK_OFFSET(0xB2B7E30)
#define CLASS_1_A627C787A20DBDA4_METHOD_1_F5A738034151F52F_OFFSET UNITYSDK_OFFSET(0xB2B87C0)
#define CLASS_1_A627C787A20DBDA4__CTOR_OFFSET UNITYSDK_OFFSET(0xB2B7980)

inline static constexpr unsigned int Class_1_A627C787A20DBDA4_TypeDefinitionIndex = 40785;

class Class_1_A627C787A20DBDA4 : public ::System::Object
{
public:
	static ::Class_1_A627C787A20DBDA4** StaticGet_Field_1_0()
	{
		return (::Class_1_A627C787A20DBDA4**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A627C787A20DBDA4_TypeDefinitionIndex)->GetStaticField(0x46990);
	}
	::Class_1_A8F358278D5B9235* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A627C787A20DBDA4__CTOR_OFFSET))(this);
	}

	static ::Class_1_A627C787A20DBDA4* Method_1_C8F236EDA5771098()
	{
		return ((::Class_1_A627C787A20DBDA4*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A627C787A20DBDA4_METHOD_1_C8F236EDA5771098_OFFSET))();
	}

	::RPG::UINavigation::UINavigationZone* Method_1_B92276BAA43CD9E4()
	{
		return ((::RPG::UINavigation::UINavigationZone*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A627C787A20DBDA4_METHOD_1_B92276BAA43CD9E4_OFFSET))(this);
	}

	::System::Void Method_1_A1A7459F44708BFD(::RPG::UINavigation::UINavigationButton* a1, ::UnityEngine::EventSystems::AxisEventData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigationButton*, ::UnityEngine::EventSystems::AxisEventData*))((::PBYTE)hIl2Cpp + CLASS_1_A627C787A20DBDA4_METHOD_1_A1A7459F44708BFD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4B2CE4C484D1235B(::RPG::UINavigation::UINavigationButton* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigationButton*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + CLASS_1_A627C787A20DBDA4_METHOD_1_4B2CE4C484D1235B_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_D2D88FFB2FE1A053()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A627C787A20DBDA4_METHOD_1_D2D88FFB2FE1A053_OFFSET))(this);
	}

	::System::Void Method_1_793E8C3168918B76(::RPG::UINavigation::UINavigation* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigation*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_A627C787A20DBDA4_METHOD_1_793E8C3168918B76_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E607519FCB80C849(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_A627C787A20DBDA4_METHOD_1_E607519FCB80C849_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_BA2EB1BC1B950B00(::UnityEngine::GameObject* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_A627C787A20DBDA4_METHOD_1_BA2EB1BC1B950B00_OFFSET))(this, a1);
	}

	::RPG::UINavigation::UINavigation* Method_1_74B683DF3B5A0AE6(::RPG::UINavigation::UINavigation* a1)
	{
		return ((::RPG::UINavigation::UINavigation*(*)(::PVOID, ::RPG::UINavigation::UINavigation*))((::PBYTE)hIl2Cpp + CLASS_1_A627C787A20DBDA4_METHOD_1_74B683DF3B5A0AE6_OFFSET))(this, a1);
	}

	::System::Void Method_1_F5A738034151F52F(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_A627C787A20DBDA4_METHOD_1_F5A738034151F52F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_EB0CF1EC81C5DE9C(::RPG::UINavigation::UINavigation* a1, ::Class_1_A8F358278D5B9235* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::UINavigation::UINavigation*, ::Class_1_A8F358278D5B9235*))((::PBYTE)hIl2Cpp + CLASS_1_A627C787A20DBDA4_METHOD_1_EB0CF1EC81C5DE9C_OFFSET))(this, a1, a2);
	}

	::Class_1_A8F358278D5B9235* Method_1_E4886687508BA48F()
	{
		return ((::Class_1_A8F358278D5B9235*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A627C787A20DBDA4_METHOD_1_E4886687508BA48F_OFFSET))(this);
	}

	::RPG::UINavigation::UINavigationZone* Method_1_5D8A1EAE3D5132D5()
	{
		return ((::RPG::UINavigation::UINavigationZone*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A627C787A20DBDA4_METHOD_1_5D8A1EAE3D5132D5_OFFSET))(this);
	}

	::RPG::UINavigation::UINavigationDirection Method_1_17A60C5671B90277(::UnityEngine::EventSystems::AxisEventData* a1)
	{
		return ((::RPG::UINavigation::UINavigationDirection(*)(::PVOID, ::UnityEngine::EventSystems::AxisEventData*))((::PBYTE)hIl2Cpp + CLASS_1_A627C787A20DBDA4_METHOD_1_17A60C5671B90277_OFFSET))(this, a1);
	}
};
