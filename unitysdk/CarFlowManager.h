#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Car;
class CarFlowIntersectionRule;
class CarFlowRoad;
class CarFlowRoadMapInfo;
class CarFlowRoadMapPosition;
class Lane;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define CARFLOWMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0xECE64F0)
#define CARFLOWMANAGER_GETNEXTROUTE_OFFSET UNITYSDK_OFFSET(0xECE9540)
#define CARFLOWMANAGER_METHOD_5_195132A6B7DBCC49_OFFSET UNITYSDK_OFFSET(0xECE9330)
#define CARFLOWMANAGER_METHOD_5_2DF1E18DDFFAC256_OFFSET UNITYSDK_OFFSET(0xECE8690)
#define CARFLOWMANAGER_METHOD_5_43E290A0B26B39F6_OFFSET UNITYSDK_OFFSET(0xECE9840)
#define CARFLOWMANAGER_METHOD_5_45872D1C931761E1_OFFSET UNITYSDK_OFFSET(0xECE8720)
#define CARFLOWMANAGER_METHOD_5_6CB03087A432B09A_OFFSET UNITYSDK_OFFSET(0xECE9B10)
#define CARFLOWMANAGER_METHOD_5_821464E984634C6E_OFFSET UNITYSDK_OFFSET(0xECE7C10)
#define CARFLOWMANAGER_METHOD_5_821BBDC04720A2EB_OFFSET UNITYSDK_OFFSET(0xECE6540)
#define CARFLOWMANAGER_METHOD_5_8733DFFCA9EEC7D2_OFFSET UNITYSDK_OFFSET(0xECE9BA0)
#define CARFLOWMANAGER_METHOD_5_88F9BC8E268D0A52_OFFSET UNITYSDK_OFFSET(0xECE9D40)
#define CARFLOWMANAGER_METHOD_5_8A6C2C736DC20164_OFFSET UNITYSDK_OFFSET(0xECE87C0)
#define CARFLOWMANAGER_METHOD_5_B49A4A1E363BAFEA_OFFSET UNITYSDK_OFFSET(0xECE8BF0)
#define CARFLOWMANAGER_METHOD_5_B6F5D79000487284_OFFSET UNITYSDK_OFFSET(0xECE8F20)
#define CARFLOWMANAGER_METHOD_5_F685193FC87DD88F_OFFSET UNITYSDK_OFFSET(0xECE89A0)
#define CARFLOWMANAGER_SPAWNCAR_OFFSET UNITYSDK_OFFSET(0xECE77D0)
#define CARFLOWMANAGER_START_OFFSET UNITYSDK_OFFSET(0xECE6FB0)
#define CARFLOWMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0xECE6FF0)
#define CARFLOWMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xECE9F40)
#define CARFLOWMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xECE9F20)

inline static constexpr unsigned int CarFlowManager_TypeDefinitionIndex = 43878;

class CarFlowManager : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Single* StaticGet_DefaultAverageCarLength()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(CarFlowManager_TypeDefinitionIndex)->GetStaticField(0xF930);
	}
	static ::System::Single* StaticGet_DefaultStaticCarMinDistance()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(CarFlowManager_TypeDefinitionIndex)->GetStaticField(0xF934);
	}
	::CarFlowRoadMapInfo* RoadMap; // 0x18
	::System::Collections::Generic::List_1<::Lane*>* EntryLanes; // 0x20
	::System::Collections::Generic::List_1<::Lane*>* ExitLanes; // 0x28
	::System::Collections::Generic::List_1<::Car*>* RuntimeCars; // 0x30
	::Il2CppArray<::Car*>* CarArtPrefabs; // 0x38
	::System::Single SpawnTimeInterval; // 0x40
	::System::Single SpawnTimeIntervalRange; // 0x44
	::System::Single StaticCarMinDistance; // 0x48
	::System::Single StaticCarSafetyDistance; // 0x4C
	::System::Single AverageCarLength; // 0x50
	::UnityEngine::AnimationCurve* SafetyDistance_SpeedCurve; // 0x58
	::System::Single TangentScale; // 0x60
	::System::Boolean Field_5_14; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CARFLOWMANAGER__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CARFLOWMANAGER__CCTOR_OFFSET))();
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CARFLOWMANAGER_AWAKE_OFFSET))(this);
	}

	::System::Void Method_5_821BBDC04720A2EB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CARFLOWMANAGER_METHOD_5_821BBDC04720A2EB_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CARFLOWMANAGER_START_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CARFLOWMANAGER_UPDATE_OFFSET))(this);
	}

	::System::Void Method_5_821464E984634C6E(::Car* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Car*))((::PBYTE)hIl2Cpp + CARFLOWMANAGER_METHOD_5_821464E984634C6E_OFFSET))(this, a1);
	}

	::System::Single Method_5_2DF1E18DDFFAC256(::Car* a1)
	{
		return ((::System::Single(*)(::PVOID, ::Car*))((::PBYTE)hIl2Cpp + CARFLOWMANAGER_METHOD_5_2DF1E18DDFFAC256_OFFSET))(this, a1);
	}

	::System::Single Method_5_B6F5D79000487284(::Car* a1)
	{
		return ((::System::Single(*)(::PVOID, ::Car*))((::PBYTE)hIl2Cpp + CARFLOWMANAGER_METHOD_5_B6F5D79000487284_OFFSET))(this, a1);
	}

	::System::Single Method_5_195132A6B7DBCC49(::Car* a1)
	{
		return ((::System::Single(*)(::PVOID, ::Car*))((::PBYTE)hIl2Cpp + CARFLOWMANAGER_METHOD_5_195132A6B7DBCC49_OFFSET))(this, a1);
	}

	::System::Single Method_5_45872D1C931761E1(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CARFLOWMANAGER_METHOD_5_45872D1C931761E1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_B49A4A1E363BAFEA(::Car* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Car*))((::PBYTE)hIl2Cpp + CARFLOWMANAGER_METHOD_5_B49A4A1E363BAFEA_OFFSET))(this, a1);
	}

	::System::Void Method_5_8A6C2C736DC20164(::Car* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Car*))((::PBYTE)hIl2Cpp + CARFLOWMANAGER_METHOD_5_8A6C2C736DC20164_OFFSET))(this, a1);
	}

	::System::Void Method_5_F685193FC87DD88F(::Car* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Car*))((::PBYTE)hIl2Cpp + CARFLOWMANAGER_METHOD_5_F685193FC87DD88F_OFFSET))(this, a1);
	}

	::System::Void SpawnCar(::Lane* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Lane*))((::PBYTE)hIl2Cpp + CARFLOWMANAGER_SPAWNCAR_OFFSET))(this, a1);
	}

	::Car* Method_5_6CB03087A432B09A()
	{
		return ((::Car*(*)(::PVOID))((::PBYTE)hIl2Cpp + CARFLOWMANAGER_METHOD_5_6CB03087A432B09A_OFFSET))(this);
	}

	::CarFlowIntersectionRule* GetNextRoute(::CarFlowRoadMapPosition* a1, ::CarFlowRoad* a2)
	{
		return ((::CarFlowIntersectionRule*(*)(::PVOID, ::CarFlowRoadMapPosition*, ::CarFlowRoad*))((::PBYTE)hIl2Cpp + CARFLOWMANAGER_GETNEXTROUTE_OFFSET))(this, a1, a2);
	}

	::System::ValueTuple_2<::System::Boolean, ::System::Single> Method_5_8733DFFCA9EEC7D2(::Car* a1)
	{
		return ((::System::ValueTuple_2<::System::Boolean, ::System::Single>(*)(::PVOID, ::Car*))((::PBYTE)hIl2Cpp + CARFLOWMANAGER_METHOD_5_8733DFFCA9EEC7D2_OFFSET))(this, a1);
	}

	::System::Single Method_5_88F9BC8E268D0A52(::Car* a1, ::System::Boolean a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::PVOID, ::Car*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CARFLOWMANAGER_METHOD_5_88F9BC8E268D0A52_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_5_43E290A0B26B39F6(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CARFLOWMANAGER_METHOD_5_43E290A0B26B39F6_OFFSET))(this, a1, a2);
	}
};
