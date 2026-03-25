#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/OrbitAreaState.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_AF955E07D4ABCAF6;
namespace BansheeGz::BGSpline::Components { class BGCcTrs; }
namespace BansheeGz::BGSpline::Curve { class BGCurve; }
namespace BansheeGz::BGSpline::Curve { class BGCurveChangedArgs; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define CRUISEORBITBGCURVEPLUGIN_APPLYARC_OFFSET UNITYSDK_OFFSET(0xA701980)
#define CRUISEORBITBGCURVEPLUGIN_AWAKE_OFFSET UNITYSDK_OFFSET(0xA7016B0)
#define CRUISEORBITBGCURVEPLUGIN_CALCPOSITIONBYDISTANCERATIO_OFFSET UNITYSDK_OFFSET(0xA702F80)
#define CRUISEORBITBGCURVEPLUGIN_GETANGLE_OFFSET UNITYSDK_OFFSET(0xA7011E0)
#define CRUISEORBITBGCURVEPLUGIN_GETCENTERPOS_OFFSET UNITYSDK_OFFSET(0xA701170)
#define CRUISEORBITBGCURVEPLUGIN_GETCLOSESTONARCPROJECTIONTORAY_OFFSET UNITYSDK_OFFSET(0xA702220)
#define CRUISEORBITBGCURVEPLUGIN_GETCURRENTRATIO_OFFSET UNITYSDK_OFFSET(0xA703440)
#define CRUISEORBITBGCURVEPLUGIN_GETCURRENTSPEED_OFFSET UNITYSDK_OFFSET(0xA703490)
#define CRUISEORBITBGCURVEPLUGIN_GETDEATHAREASTATE_OFFSET UNITYSDK_OFFSET(0xA700E00)
#define CRUISEORBITBGCURVEPLUGIN_GETDEATHAREATYPEBYDISTANCERATIO_OFFSET UNITYSDK_OFFSET(0xA700FA0)
#define CRUISEORBITBGCURVEPLUGIN_GETDISTANCERATIO_OFFSET UNITYSDK_OFFSET(0xA700F50)
#define CRUISEORBITBGCURVEPLUGIN_GETNEARESTPOSITIONRATIO_OFFSET UNITYSDK_OFFSET(0xA702A30)
#define CRUISEORBITBGCURVEPLUGIN_GETNEXTSTEPDISTANCEDELTA_OFFSET UNITYSDK_OFFSET(0xA7033C0)
#define CRUISEORBITBGCURVEPLUGIN_GETRAYFROMARCPOSITION_OFFSET UNITYSDK_OFFSET(0xA701070)
#define CRUISEORBITBGCURVEPLUGIN_GET_FINALPOSITION_OFFSET UNITYSDK_OFFSET(0xA701140)
#define CRUISEORBITBGCURVEPLUGIN_METHOD_5_0F2AF21BF93699B5_1_OFFSET UNITYSDK_OFFSET(0xA701620)
#define CRUISEORBITBGCURVEPLUGIN_METHOD_5_0F2AF21BF93699B5_OFFSET UNITYSDK_OFFSET(0xA701590)
#define CRUISEORBITBGCURVEPLUGIN_METHOD_5_218124418542E081_OFFSET UNITYSDK_OFFSET(0xA701A20)
#define CRUISEORBITBGCURVEPLUGIN_METHOD_5_73B2F7CAF334D84C_OFFSET UNITYSDK_OFFSET(0xA7023C0)
#define CRUISEORBITBGCURVEPLUGIN_METHOD_5_AAB36E9C15D550EF_OFFSET UNITYSDK_OFFSET(0xA702CE0)
#define CRUISEORBITBGCURVEPLUGIN_METHOD_5_CD6C0B4190E9DEBA_OFFSET UNITYSDK_OFFSET(0xA701930)
#define CRUISEORBITBGCURVEPLUGIN_RECALCULATECURVE_OFFSET UNITYSDK_OFFSET(0xA7008C0)
#define CRUISEORBITBGCURVEPLUGIN_REINIT_OFFSET UNITYSDK_OFFSET(0xA7003A0)
#define CRUISEORBITBGCURVEPLUGIN_SETTRSPARAMS_OFFSET UNITYSDK_OFFSET(0xA7032E0)
#define CRUISEORBITBGCURVEPLUGIN_SET_FINALPOSITION_OFFSET UNITYSDK_OFFSET(0xA701160)
#define CRUISEORBITBGCURVEPLUGIN_TICK_OFFSET UNITYSDK_OFFSET(0xA7030E0)
#define CRUISEORBITBGCURVEPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xA7034E0)
#define CRUISEORBITBGCURVEPLUGIN__FINDNEXTNONDEATHSECTIONSTARTDISTANCE_OFFSET UNITYSDK_OFFSET(0xA701220)

inline static constexpr unsigned int CruiseOrbitBGCurvePlugin_TypeDefinitionIndex = 38233;

class CruiseOrbitBGCurvePlugin : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Single HardDeathArea; // 0x18
	::System::Single SoftDeathArea; // 0x1C
	::BansheeGz::BGSpline::Curve::BGCurve* Field_5_2; // 0x20
	::BansheeGz::BGSpline::Components::BGCcTrs* Field_5_3; // 0x28
	::UnityEngine::Vector3 Field_5_4; // 0x30
	::UnityEngine::Transform* Field_5_5; // 0x40
	::System::Single Field_5_6; // 0x48
	::Class_1_AF955E07D4ABCAF6* Field_5_7; // 0x50
	::UnityEngine::Vector3 _FinalPosition_k__BackingField; // 0x58
	::System::Boolean Field_5_9; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN__CTOR_OFFSET))(this);
	}

	::System::Void ReInit(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_REINIT_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::RPG::GameCore::OrbitAreaState GetDeathAreaState()
	{
		return ((::RPG::GameCore::OrbitAreaState(*)(::PVOID))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_GETDEATHAREASTATE_OFFSET))(this);
	}

	::RPG::GameCore::OrbitAreaState GetDeathAreaTypeByDistanceRatio(::System::Single a1, ::System::Boolean a2)
	{
		return ((::RPG::GameCore::OrbitAreaState(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_GETDEATHAREATYPEBYDISTANCERATIO_OFFSET))(this, a1, a2);
	}

	::System::Void GetRayFromArcPosition(::System::Single a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_GETRAYFROMARCPOSITION_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 get_FinalPosition()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_GET_FINALPOSITION_OFFSET))(this);
	}

	::System::Void set_FinalPosition(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_SET_FINALPOSITION_OFFSET))(this, value);
	}

	::UnityEngine::Vector3 GetCenterPos()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_GETCENTERPOS_OFFSET))(this);
	}

	::System::Single GetAngle()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_GETANGLE_OFFSET))(this);
	}

	::System::Single _FindNextNonDeathSectionStartDistance(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN__FINDNEXTNONDEATHSECTIONSTARTDISTANCE_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_5_0F2AF21BF93699B5(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_METHOD_5_0F2AF21BF93699B5_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_5_0F2AF21BF93699B5_1(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_METHOD_5_0F2AF21BF93699B5_1_OFFSET))(this, a1, a2);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_AWAKE_OFFSET))(this);
	}

	::System::Void RecalculateCurve()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_RECALCULATECURVE_OFFSET))(this);
	}

	::UnityEngine::Vector3 ApplyArc(::System::Single a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_APPLYARC_OFFSET))(this, a1);
	}

	::System::Void Method_5_218124418542E081()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_METHOD_5_218124418542E081_OFFSET))(this);
	}

	::System::Single GetDistanceRatio()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_GETDISTANCERATIO_OFFSET))(this);
	}

	::System::Single GetClosestOnArcProjectionToRay(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_GETCLOSESTONARCPROJECTIONTORAY_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 Method_5_73B2F7CAF334D84C(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_METHOD_5_73B2F7CAF334D84C_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_5_AAB36E9C15D550EF(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_METHOD_5_AAB36E9C15D550EF_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Single GetNearestPositionRatio(::UnityEngine::Vector3 a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_GETNEARESTPOSITIONRATIO_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 CalcPositionByDistanceRatio(::System::Single a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_CALCPOSITIONBYDISTANCERATIO_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_TICK_OFFSET))(this, a1);
	}

	::System::Void SetTrsParams(::System::Single a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_SETTRSPARAMS_OFFSET))(this, a1, a2, a3);
	}

	::System::Single GetNextStepDistanceDelta(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_GETNEXTSTEPDISTANCEDELTA_OFFSET))(this, a1, a2);
	}

	::System::Single GetCurrentRatio()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_GETCURRENTRATIO_OFFSET))(this);
	}

	::System::Single GetCurrentSpeed()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_GETCURRENTSPEED_OFFSET))(this);
	}

	::System::Void Method_5_CD6C0B4190E9DEBA(::System::Object* a1, ::BansheeGz::BGSpline::Curve::BGCurveChangedArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::BansheeGz::BGSpline::Curve::BGCurveChangedArgs*))((::PBYTE)hIl2Cpp + CRUISEORBITBGCURVEPLUGIN_METHOD_5_CD6C0B4190E9DEBA_OFFSET))(this, a1, a2);
	}
};
