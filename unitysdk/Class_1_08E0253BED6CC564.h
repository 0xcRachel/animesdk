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

#define CLASS_1_08E0253BED6CC564_METHOD_1_17A60C5671B90277_OFFSET UNITYSDK_OFFSET(0xE0B0B70)
#define CLASS_1_08E0253BED6CC564_METHOD_1_1924BF6751A2BFC6_OFFSET UNITYSDK_OFFSET(0xE0B07F0)
#define CLASS_1_08E0253BED6CC564_METHOD_1_4B2CE4C484D1235B_OFFSET UNITYSDK_OFFSET(0xE0B0D70)
#define CLASS_1_08E0253BED6CC564_METHOD_1_6662B92AEBC00AD0_OFFSET UNITYSDK_OFFSET(0xE0B11C0)
#define CLASS_1_08E0253BED6CC564_METHOD_1_7AE328AD493DB361_OFFSET UNITYSDK_OFFSET(0xE0B10B0)
#define CLASS_1_08E0253BED6CC564_METHOD_1_82AE446F1002E5E5_OFFSET UNITYSDK_OFFSET(0xE0B1860)
#define CLASS_1_08E0253BED6CC564_METHOD_1_8DB08F520156E9A9_OFFSET UNITYSDK_OFFSET(0xE0B0800)
#define CLASS_1_08E0253BED6CC564_METHOD_1_A1A7459F44708BFD_OFFSET UNITYSDK_OFFSET(0xE0B0950)
#define CLASS_1_08E0253BED6CC564_METHOD_1_BA2EB1BC1B950B00_OFFSET UNITYSDK_OFFSET(0xE0B1660)
#define CLASS_1_08E0253BED6CC564_METHOD_1_C67FD7343B3CBCAD_OFFSET UNITYSDK_OFFSET(0xE0B1730)
#define CLASS_1_08E0253BED6CC564_METHOD_1_C6C5701C46B0AA2F_OFFSET UNITYSDK_OFFSET(0xE0B1310)
#define CLASS_1_08E0253BED6CC564_METHOD_1_C8F236EDA5771098_OFFSET UNITYSDK_OFFSET(0xE0B0610)
#define CLASS_1_08E0253BED6CC564_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xE0B1610)
#define CLASS_1_08E0253BED6CC564_METHOD_1_D2D88FFB2FE1A053_OFFSET UNITYSDK_OFFSET(0xE0B0E90)
#define CLASS_1_08E0253BED6CC564_METHOD_1_E4886687508BA48F_OFFSET UNITYSDK_OFFSET(0xE0B0AE0)
#define CLASS_1_08E0253BED6CC564_METHOD_1_E607519FCB80C849_OFFSET UNITYSDK_OFFSET(0xE0B1440)
#define CLASS_1_08E0253BED6CC564_METHOD_1_EB0CF1EC81C5DE9C_OFFSET UNITYSDK_OFFSET(0xE0B0BE0)
#define CLASS_1_08E0253BED6CC564_METHOD_1_EEC3F0B2C99B3FD3_OFFSET UNITYSDK_OFFSET(0xE0B0720)
#define CLASS_1_08E0253BED6CC564_METHOD_1_F5A738034151F52F_OFFSET UNITYSDK_OFFSET(0xE0B17A0)
#define CLASS_1_08E0253BED6CC564_METHOD_1_FA5E4186FA3A875C_OFFSET UNITYSDK_OFFSET(0xE0B0710)
#define CLASS_1_08E0253BED6CC564__CTOR_OFFSET UNITYSDK_OFFSET(0xE0B06C0)

inline static constexpr unsigned int Class_1_08E0253BED6CC564_TypeDefinitionIndex = 47804;

class Class_1_08E0253BED6CC564 : public ::System::Object
{
public:
	static ::Class_1_08E0253BED6CC564** StaticGet_Field_1_0()
	{
		return (::Class_1_08E0253BED6CC564**)Il2CppClass::FromTypeDefinitionIndex(Class_1_08E0253BED6CC564_TypeDefinitionIndex)->GetStaticField(0x53520);
	}
	::Class_1_A8F358278D5B9235* Field_1_2; // 0x10
	::RPG::UINavigation::UINavigation* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_08E0253BED6CC564__CTOR_OFFSET))(this);
	}

	static ::Class_1_08E0253BED6CC564* Method_1_C8F236EDA5771098()
	{
		return ((::Class_1_08E0253BED6CC564*(*)())((::PBYTE)hIl2Cpp + CLASS_1_08E0253BED6CC564_METHOD_1_C8F236EDA5771098_OFFSET))();
	}

	::RPG::UINavigation::UINavigationZone* Method_1_FA5E4186FA3A875C()
	{
		return ((::RPG::UINavigation::UINavigationZone*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_08E0253BED6CC564_METHOD_1_FA5E4186FA3A875C_OFFSET))(this);
	}

	::RPG::UINavigation::UINavigation* Method_1_1924BF6751A2BFC6()
	{
		return ((::RPG::UINavigation::UINavigation*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_08E0253BED6CC564_METHOD_1_1924BF6751A2BFC6_OFFSET))(this);
	}

	::System::Void Method_1_A1A7459F44708BFD(::RPG::UINavigation::UINavigationButton* a1, ::UnityEngine::EventSystems::AxisEventData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigationButton*, ::UnityEngine::EventSystems::AxisEventData*))((::PBYTE)hIl2Cpp + CLASS_1_08E0253BED6CC564_METHOD_1_A1A7459F44708BFD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4B2CE4C484D1235B(::RPG::UINavigation::UINavigationButton* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigationButton*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + CLASS_1_08E0253BED6CC564_METHOD_1_4B2CE4C484D1235B_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_D2D88FFB2FE1A053()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_08E0253BED6CC564_METHOD_1_D2D88FFB2FE1A053_OFFSET))(this);
	}

	::System::Void Method_1_7AE328AD493DB361(::RPG::UINavigation::UINavigation* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigation*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_08E0253BED6CC564_METHOD_1_7AE328AD493DB361_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E607519FCB80C849(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_08E0253BED6CC564_METHOD_1_E607519FCB80C849_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_08E0253BED6CC564_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_BA2EB1BC1B950B00(::UnityEngine::GameObject* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_08E0253BED6CC564_METHOD_1_BA2EB1BC1B950B00_OFFSET))(this, a1);
	}

	::RPG::UINavigation::UINavigation* Method_1_C67FD7343B3CBCAD(::RPG::UINavigation::UINavigation* a1)
	{
		return ((::RPG::UINavigation::UINavigation*(*)(::PVOID, ::RPG::UINavigation::UINavigation*))((::PBYTE)hIl2Cpp + CLASS_1_08E0253BED6CC564_METHOD_1_C67FD7343B3CBCAD_OFFSET))(this, a1);
	}

	::System::Void Method_1_F5A738034151F52F(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_08E0253BED6CC564_METHOD_1_F5A738034151F52F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_EB0CF1EC81C5DE9C(::RPG::UINavigation::UINavigation* a1, ::Class_1_A8F358278D5B9235* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::UINavigation::UINavigation*, ::Class_1_A8F358278D5B9235*))((::PBYTE)hIl2Cpp + CLASS_1_08E0253BED6CC564_METHOD_1_EB0CF1EC81C5DE9C_OFFSET))(this, a1, a2);
	}

	::Class_1_A8F358278D5B9235* Method_1_E4886687508BA48F()
	{
		return ((::Class_1_A8F358278D5B9235*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_08E0253BED6CC564_METHOD_1_E4886687508BA48F_OFFSET))(this);
	}

	::RPG::UINavigation::UINavigation* Method_1_8DB08F520156E9A9()
	{
		return ((::RPG::UINavigation::UINavigation*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_08E0253BED6CC564_METHOD_1_8DB08F520156E9A9_OFFSET))(this);
	}

	::RPG::UINavigation::UINavigationZone* Method_1_EEC3F0B2C99B3FD3()
	{
		return ((::RPG::UINavigation::UINavigationZone*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_08E0253BED6CC564_METHOD_1_EEC3F0B2C99B3FD3_OFFSET))(this);
	}

	::RPG::UINavigation::UINavigationDirection Method_1_17A60C5671B90277(::UnityEngine::EventSystems::AxisEventData* a1)
	{
		return ((::RPG::UINavigation::UINavigationDirection(*)(::PVOID, ::UnityEngine::EventSystems::AxisEventData*))((::PBYTE)hIl2Cpp + CLASS_1_08E0253BED6CC564_METHOD_1_17A60C5671B90277_OFFSET))(this, a1);
	}

	::System::Void Method_1_C6C5701C46B0AA2F(::RPG::UINavigation::UINavigation* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigation*))((::PBYTE)hIl2Cpp + CLASS_1_08E0253BED6CC564_METHOD_1_C6C5701C46B0AA2F_OFFSET))(this, a1);
	}

	::System::Void Method_1_6662B92AEBC00AD0(::RPG::UINavigation::UINavigation* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigation*))((::PBYTE)hIl2Cpp + CLASS_1_08E0253BED6CC564_METHOD_1_6662B92AEBC00AD0_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_82AE446F1002E5E5(::RPG::UINavigation::UINavigation* a1, ::RPG::UINavigation::UINavigation* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::UINavigation::UINavigation*, ::RPG::UINavigation::UINavigation*))((::PBYTE)hIl2Cpp + CLASS_1_08E0253BED6CC564_METHOD_1_82AE446F1002E5E5_OFFSET))(this, a1, a2);
	}
};
