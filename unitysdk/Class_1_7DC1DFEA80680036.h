#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MiniMapIconType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }
namespace System { class String; }

#define CLASS_1_7DC1DFEA80680036_DISPOSE_OFFSET UNITYSDK_OFFSET(0x104AA3E0)
#define CLASS_1_7DC1DFEA80680036_GET_AREAID_OFFSET UNITYSDK_OFFSET(0x104AA9C0)
#define CLASS_1_7DC1DFEA80680036_GET_CANTINT_OFFSET UNITYSDK_OFFSET(0x104AABB0)
#define CLASS_1_7DC1DFEA80680036_GET_CIRCLECOLOR_OFFSET UNITYSDK_OFFSET(0x104AA610)
#define CLASS_1_7DC1DFEA80680036_GET_HASH_OFFSET UNITYSDK_OFFSET(0x104AA470)
#define CLASS_1_7DC1DFEA80680036_GET_ICONCOLOR_OFFSET UNITYSDK_OFFSET(0x104AAB90)
#define CLASS_1_7DC1DFEA80680036_GET_ICONID_OFFSET UNITYSDK_OFFSET(0x104AA490)
#define CLASS_1_7DC1DFEA80680036_GET_ICONTYPE_OFFSET UNITYSDK_OFFSET(0x104AA6B0)
#define CLASS_1_7DC1DFEA80680036_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x104AA570)
#define CLASS_1_7DC1DFEA80680036_GET_ISMISSION_OFFSET UNITYSDK_OFFSET(0x104AA630)
#define CLASS_1_7DC1DFEA80680036_GET_ISSTATIC_OFFSET UNITYSDK_OFFSET(0x104AA690)
#define CLASS_1_7DC1DFEA80680036_GET_ISTRACKINGCONNECTIVITY_OFFSET UNITYSDK_OFFSET(0x104AACE0)
#define CLASS_1_7DC1DFEA80680036_GET_ISTRACKINGMAPPINGINFO_OFFSET UNITYSDK_OFFSET(0x104AA670)
#define CLASS_1_7DC1DFEA80680036_GET_ISTRACKINGMISSION_OFFSET UNITYSDK_OFFSET(0x104AA650)
#define CLASS_1_7DC1DFEA80680036_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x104AA590)
#define CLASS_1_7DC1DFEA80680036_GET_PROPTARGET_OFFSET UNITYSDK_OFFSET(0x104AA430)
#define CLASS_1_7DC1DFEA80680036_GET_RANGERADIUS_OFFSET UNITYSDK_OFFSET(0x104AA5B0)
#define CLASS_1_7DC1DFEA80680036_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x104AA450)
#define CLASS_1_7DC1DFEA80680036_GET_WAYPOINTSHOWRANGEMAX_OFFSET UNITYSDK_OFFSET(0x104AA5F0)
#define CLASS_1_7DC1DFEA80680036_GET_WAYPOINTSHOWRANGEMIN_OFFSET UNITYSDK_OFFSET(0x104AA5D0)
#define CLASS_1_7DC1DFEA80680036_METHOD_1_03BE804B9317DF84_OFFSET UNITYSDK_OFFSET(0x104AA2C0)
#define CLASS_1_7DC1DFEA80680036_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x104AAD00)
#define CLASS_1_7DC1DFEA80680036_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x104AA390)
#define CLASS_1_7DC1DFEA80680036_METHOD_1_426E22E2B185077C_OFFSET UNITYSDK_OFFSET(0x104AA200)
#define CLASS_1_7DC1DFEA80680036_METHOD_1_4AADAF19CDCB660E_OFFSET UNITYSDK_OFFSET(0x104AABD0)
#define CLASS_1_7DC1DFEA80680036_METHOD_1_507A5122CD01412B_OFFSET UNITYSDK_OFFSET(0x104AAA50)
#define CLASS_1_7DC1DFEA80680036_METHOD_1_57DCB1CE056E3F2A_1_OFFSET UNITYSDK_OFFSET(0x104AB060)
#define CLASS_1_7DC1DFEA80680036_METHOD_1_57DCB1CE056E3F2A_OFFSET UNITYSDK_OFFSET(0x104AAE70)
#define CLASS_1_7DC1DFEA80680036_METHOD_1_6F31D9B901568B6A_OFFSET UNITYSDK_OFFSET(0x104AB130)
#define CLASS_1_7DC1DFEA80680036_METHOD_1_71D6E65BA3BF1AC5_OFFSET UNITYSDK_OFFSET(0x104AB140)
#define CLASS_1_7DC1DFEA80680036_METHOD_1_88739BF91E158878_OFFSET UNITYSDK_OFFSET(0x104AA6D0)
#define CLASS_1_7DC1DFEA80680036_METHOD_1_BFD792E814D995C0_OFFSET UNITYSDK_OFFSET(0x104AAF50)
#define CLASS_1_7DC1DFEA80680036_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x104AB390)
#define CLASS_1_7DC1DFEA80680036_METHOD_1_E18211EE07F8BC27_OFFSET UNITYSDK_OFFSET(0x104AA130)
#define CLASS_1_7DC1DFEA80680036_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x104AB3A0)
#define CLASS_1_7DC1DFEA80680036_METHOD_1_F39234F2606D8D97_OFFSET UNITYSDK_OFFSET(0x104AA890)
#define CLASS_1_7DC1DFEA80680036_METHOD_1_FAE9C4050544FE63_1_OFFSET UNITYSDK_OFFSET(0x104AAF60)
#define CLASS_1_7DC1DFEA80680036_METHOD_1_FAE9C4050544FE63_OFFSET UNITYSDK_OFFSET(0x104AAD60)
#define CLASS_1_7DC1DFEA80680036_SET_CANTINT_OFFSET UNITYSDK_OFFSET(0x104AABC0)
#define CLASS_1_7DC1DFEA80680036_SET_CIRCLECOLOR_OFFSET UNITYSDK_OFFSET(0x104AA620)
#define CLASS_1_7DC1DFEA80680036_SET_HASH_OFFSET UNITYSDK_OFFSET(0x104AA480)
#define CLASS_1_7DC1DFEA80680036_SET_ICONCOLOR_OFFSET UNITYSDK_OFFSET(0x104AABA0)
#define CLASS_1_7DC1DFEA80680036_SET_ICONTYPE_OFFSET UNITYSDK_OFFSET(0x104AA6C0)
#define CLASS_1_7DC1DFEA80680036_SET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x104AA580)
#define CLASS_1_7DC1DFEA80680036_SET_ISMISSION_OFFSET UNITYSDK_OFFSET(0x104AA640)
#define CLASS_1_7DC1DFEA80680036_SET_ISSTATIC_OFFSET UNITYSDK_OFFSET(0x104AA6A0)
#define CLASS_1_7DC1DFEA80680036_SET_ISTRACKINGCONNECTIVITY_OFFSET UNITYSDK_OFFSET(0x104AACF0)
#define CLASS_1_7DC1DFEA80680036_SET_ISTRACKINGMAPPINGINFO_OFFSET UNITYSDK_OFFSET(0x104AA680)
#define CLASS_1_7DC1DFEA80680036_SET_ISTRACKINGMISSION_OFFSET UNITYSDK_OFFSET(0x104AA660)
#define CLASS_1_7DC1DFEA80680036_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x104AA5A0)
#define CLASS_1_7DC1DFEA80680036_SET_PROPTARGET_OFFSET UNITYSDK_OFFSET(0x104AA440)
#define CLASS_1_7DC1DFEA80680036_SET_RANGERADIUS_OFFSET UNITYSDK_OFFSET(0x104AA5C0)
#define CLASS_1_7DC1DFEA80680036_SET_TARGET_OFFSET UNITYSDK_OFFSET(0x104AA460)
#define CLASS_1_7DC1DFEA80680036_SET_WAYPOINTSHOWRANGEMAX_OFFSET UNITYSDK_OFFSET(0x104AA600)
#define CLASS_1_7DC1DFEA80680036_SET_WAYPOINTSHOWRANGEMIN_OFFSET UNITYSDK_OFFSET(0x104AA5E0)
#define CLASS_1_7DC1DFEA80680036_TOSTRING_OFFSET UNITYSDK_OFFSET(0x104AB3B0)
#define CLASS_1_7DC1DFEA80680036__CTOR_1_OFFSET UNITYSDK_OFFSET(0x104AA0F0)
#define CLASS_1_7DC1DFEA80680036__CTOR_OFFSET UNITYSDK_OFFSET(0x104AA0D0)
#define CLASS_1_7DC1DFEA80680036___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x104AB4A0)

inline static constexpr unsigned int Class_1_7DC1DFEA80680036_TypeDefinitionIndex = 48034;

class Class_1_7DC1DFEA80680036 : public ::System::Object
{
public:
	::RPG::GameCore::PropComponent* _PropTarget_k__BackingField; // 0x10
	::RPG::GameCore::GameEntity* _Target_k__BackingField; // 0x18
	::System::Single _RangeRadius_k__BackingField; // 0x20
	::System::Single _WayPointShowRangeMax_k__BackingField; // 0x24
	::UnityEngine::Color _IconColor_k__BackingField; // 0x28
	::System::Int32 _Priority_k__BackingField; // 0x38
	::UnityEngine::Color _CircleColor_k__BackingField; // 0x3C
	::System::Single _WayPointShowRangeMin_k__BackingField; // 0x4C
	::System::Int32 Field_1_17; // 0x50
	::System::Boolean Field_1_20; // 0x54
	::System::Boolean _IsStatic_k__BackingField; // 0x55
	::System::Nullable_1<::System::Boolean> Field_1_18; // 0x56
	::System::Boolean _CanTint_k__BackingField; // 0x58
	::System::Int32 _Identifier_k__BackingField; // 0x5C
	::System::Int32 _Hash_k__BackingField; // 0x60
	::System::UInt32 Field_1_21; // 0x64
	::RPG::Client::MiniMapIconType _IconType_k__BackingField; // 0x68
	::System::Int32 Field_1_19; // 0x6C
	::System::Boolean _IsTrackingMappingInfo_k__BackingField; // 0x70
	::System::Boolean _IsTrackingMission_k__BackingField; // 0x71
	::System::Boolean _IsTrackingConnectivity_k__BackingField; // 0x72
	::System::Boolean _IsMission_k__BackingField; // 0x73

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Int32 a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::System::Int32 Method_1_426E22E2B185077C(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Int32(*)(::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_METHOD_1_426E22E2B185077C_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_E18211EE07F8BC27(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_METHOD_1_E18211EE07F8BC27_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_03BE804B9317DF84(::System::Boolean a1, ::System::Single a2, ::UnityEngine::Color a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single, ::UnityEngine::Color, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_METHOD_1_03BE804B9317DF84_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::PropComponent* get_PropTarget()
	{
		return ((::RPG::GameCore::PropComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_GET_PROPTARGET_OFFSET))(this);
	}

	::System::Void set_PropTarget(::RPG::GameCore::PropComponent* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_SET_PROPTARGET_OFFSET))(this, value);
	}

	::RPG::GameCore::GameEntity* get_Target()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_GET_TARGET_OFFSET))(this);
	}

	::System::Void set_Target(::RPG::GameCore::GameEntity* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_SET_TARGET_OFFSET))(this, value);
	}

	::System::Int32 get_Hash()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_GET_HASH_OFFSET))(this);
	}

	::System::Void set_Hash(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_SET_HASH_OFFSET))(this, value);
	}

	::System::UInt32 get_IconID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_GET_ICONID_OFFSET))(this);
	}

	::System::Int32 get_Identifier()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_GET_IDENTIFIER_OFFSET))(this);
	}

	::System::Void set_Identifier(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_SET_IDENTIFIER_OFFSET))(this, value);
	}

	::System::Int32 get_Priority()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_GET_PRIORITY_OFFSET))(this);
	}

	::System::Void set_Priority(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_SET_PRIORITY_OFFSET))(this, value);
	}

	::System::Single get_RangeRadius()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_GET_RANGERADIUS_OFFSET))(this);
	}

	::System::Void set_RangeRadius(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_SET_RANGERADIUS_OFFSET))(this, value);
	}

	::System::Single get_WayPointShowRangeMin()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_GET_WAYPOINTSHOWRANGEMIN_OFFSET))(this);
	}

	::System::Void set_WayPointShowRangeMin(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_SET_WAYPOINTSHOWRANGEMIN_OFFSET))(this, value);
	}

	::System::Single get_WayPointShowRangeMax()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_GET_WAYPOINTSHOWRANGEMAX_OFFSET))(this);
	}

	::System::Void set_WayPointShowRangeMax(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_SET_WAYPOINTSHOWRANGEMAX_OFFSET))(this, value);
	}

	::UnityEngine::Color get_CircleColor()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_GET_CIRCLECOLOR_OFFSET))(this);
	}

	::System::Void set_CircleColor(::UnityEngine::Color value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_SET_CIRCLECOLOR_OFFSET))(this, value);
	}

	::System::Boolean get_IsMission()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_GET_ISMISSION_OFFSET))(this);
	}

	::System::Void set_IsMission(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_SET_ISMISSION_OFFSET))(this, value);
	}

	::System::Boolean get_IsTrackingMission()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_GET_ISTRACKINGMISSION_OFFSET))(this);
	}

	::System::Void set_IsTrackingMission(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_SET_ISTRACKINGMISSION_OFFSET))(this, value);
	}

	::System::Boolean get_IsTrackingMappingInfo()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_GET_ISTRACKINGMAPPINGINFO_OFFSET))(this);
	}

	::System::Void set_IsTrackingMappingInfo(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_SET_ISTRACKINGMAPPINGINFO_OFFSET))(this, value);
	}

	::System::Boolean get_IsStatic()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_GET_ISSTATIC_OFFSET))(this);
	}

	::System::Void set_IsStatic(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_SET_ISSTATIC_OFFSET))(this, value);
	}

	::RPG::Client::MiniMapIconType get_IconType()
	{
		return ((::RPG::Client::MiniMapIconType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_GET_ICONTYPE_OFFSET))(this);
	}

	::System::Void set_IconType(::RPG::Client::MiniMapIconType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MiniMapIconType))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_SET_ICONTYPE_OFFSET))(this, value);
	}

	::System::Int32 Method_1_88739BF91E158878()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_METHOD_1_88739BF91E158878_OFFSET))(this);
	}

	::System::Boolean Method_1_F39234F2606D8D97()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_METHOD_1_F39234F2606D8D97_OFFSET))(this);
	}

	::System::Int32 get_AreaID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_GET_AREAID_OFFSET))(this);
	}

	::System::Boolean Method_1_507A5122CD01412B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_METHOD_1_507A5122CD01412B_OFFSET))(this);
	}

	::UnityEngine::Color get_IconColor()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_GET_ICONCOLOR_OFFSET))(this);
	}

	::System::Void set_IconColor(::UnityEngine::Color value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_SET_ICONCOLOR_OFFSET))(this, value);
	}

	::System::Boolean get_CanTint()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_GET_CANTINT_OFFSET))(this);
	}

	::System::Void set_CanTint(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_SET_CANTINT_OFFSET))(this, value);
	}

	::System::Boolean Method_1_4AADAF19CDCB660E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_METHOD_1_4AADAF19CDCB660E_OFFSET))(this);
	}

	::System::Boolean get_IsTrackingConnectivity()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_GET_ISTRACKINGCONNECTIVITY_OFFSET))(this);
	}

	::System::Void set_IsTrackingConnectivity(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_SET_ISTRACKINGCONNECTIVITY_OFFSET))(this, value);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Single Method_1_FAE9C4050544FE63()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_METHOD_1_FAE9C4050544FE63_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_57DCB1CE056E3F2A()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_METHOD_1_57DCB1CE056E3F2A_OFFSET))(this);
	}

	::UnityEngine::Color Method_1_BFD792E814D995C0()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_METHOD_1_BFD792E814D995C0_OFFSET))(this);
	}

	::System::Single Method_1_FAE9C4050544FE63_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_METHOD_1_FAE9C4050544FE63_1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_57DCB1CE056E3F2A_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_METHOD_1_57DCB1CE056E3F2A_1_OFFSET))(this);
	}

	::UnityEngine::Vector2 Method_1_6F31D9B901568B6A()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_METHOD_1_6F31D9B901568B6A_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::UnityEngine::Vector2 Method_1_71D6E65BA3BF1AC5()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_METHOD_1_71D6E65BA3BF1AC5_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036_TOSTRING_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DC1DFEA80680036___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
