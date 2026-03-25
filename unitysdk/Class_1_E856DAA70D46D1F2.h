#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/OrbitTargetPosType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_C6A5C62ABDACBCF0;
class Class_2_E5D38AB31F1F266B;
class Class_3_A149A6B784E8BE69;
class CruiseOrbitBGCurvePlugin;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace UnityEngine { class Transform; }

#define CLASS_1_E856DAA70D46D1F2_GET_HARDDEATHAREARATIO_OFFSET UNITYSDK_OFFSET(0x105DA930)
#define CLASS_1_E856DAA70D46D1F2_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x105DA810)
#define CLASS_1_E856DAA70D46D1F2_GET_INITANGLE_OFFSET UNITYSDK_OFFSET(0x105DA850)
#define CLASS_1_E856DAA70D46D1F2_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x105DA830)
#define CLASS_1_E856DAA70D46D1F2_GET_SCALE_OFFSET UNITYSDK_OFFSET(0x105DA8F0)
#define CLASS_1_E856DAA70D46D1F2_GET_SOFTDEATHAREARATIO_OFFSET UNITYSDK_OFFSET(0x105DA910)
#define CLASS_1_E856DAA70D46D1F2_GET_TARGETPOSTYPE_OFFSET UNITYSDK_OFFSET(0x105DA950)
#define CLASS_1_E856DAA70D46D1F2_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x105DAA60)
#define CLASS_1_E856DAA70D46D1F2_METHOD_1_18D9238B9C310BFF_OFFSET UNITYSDK_OFFSET(0x105DB1F0)
#define CLASS_1_E856DAA70D46D1F2_METHOD_1_31AEF55B1D3B1014_OFFSET UNITYSDK_OFFSET(0x105DB1E0)
#define CLASS_1_E856DAA70D46D1F2_METHOD_1_53CBBA41017A5552_OFFSET UNITYSDK_OFFSET(0x105DB070)
#define CLASS_1_E856DAA70D46D1F2_METHOD_1_C2245EC58D417830_OFFSET UNITYSDK_OFFSET(0x105DA970)
#define CLASS_1_E856DAA70D46D1F2_METHOD_1_F10A0D072D26C4BF_OFFSET UNITYSDK_OFFSET(0x105DA870)
#define CLASS_1_E856DAA70D46D1F2_SET_HARDDEATHAREARATIO_OFFSET UNITYSDK_OFFSET(0x105DA940)
#define CLASS_1_E856DAA70D46D1F2_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x105DA820)
#define CLASS_1_E856DAA70D46D1F2_SET_INITANGLE_OFFSET UNITYSDK_OFFSET(0x105DA860)
#define CLASS_1_E856DAA70D46D1F2_SET_RADIUS_OFFSET UNITYSDK_OFFSET(0x105DA840)
#define CLASS_1_E856DAA70D46D1F2_SET_SCALE_OFFSET UNITYSDK_OFFSET(0x105DA900)
#define CLASS_1_E856DAA70D46D1F2_SET_SOFTDEATHAREARATIO_OFFSET UNITYSDK_OFFSET(0x105DA920)
#define CLASS_1_E856DAA70D46D1F2_SET_TARGETPOSTYPE_OFFSET UNITYSDK_OFFSET(0x105DA960)
#define CLASS_1_E856DAA70D46D1F2__CTOR_OFFSET UNITYSDK_OFFSET(0x105DAB20)

inline static constexpr unsigned int Class_1_E856DAA70D46D1F2_TypeDefinitionIndex = 46455;

class Class_1_E856DAA70D46D1F2 : public ::System::Object
{
public:
	::Class_1_C6A5C62ABDACBCF0* Field_1_9; // 0x10
	::CruiseOrbitBGCurvePlugin* Field_1_10; // 0x18
	::System::Single _Scale_k__BackingField; // 0x20
	::System::Single _SoftDeathAreaRatio_k__BackingField; // 0x24
	::UnityEngine::Vector3 Field_1_3; // 0x28
	::System::Single _Height_k__BackingField; // 0x34
	::System::Single _HardDeathAreaRatio_k__BackingField; // 0x38
	::System::Single _Radius_k__BackingField; // 0x3C
	::System::Single _InitAngle_k__BackingField; // 0x40
	::UnityEngine::Vector3 Field_1_4; // 0x44
	::RPG::GameCore::OrbitTargetPosType _TargetPosType_k__BackingField; // 0x50

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_2_E5D38AB31F1F266B* a2, ::UnityEngine::Transform* a3, ::CruiseOrbitBGCurvePlugin* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_2_E5D38AB31F1F266B*, ::UnityEngine::Transform*, ::CruiseOrbitBGCurvePlugin*))((::PBYTE)hIl2Cpp + CLASS_1_E856DAA70D46D1F2__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Single get_Height()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E856DAA70D46D1F2_GET_HEIGHT_OFFSET))(this);
	}

	::System::Void set_Height(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E856DAA70D46D1F2_SET_HEIGHT_OFFSET))(this, value);
	}

	::System::Single get_Radius()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E856DAA70D46D1F2_GET_RADIUS_OFFSET))(this);
	}

	::System::Void set_Radius(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E856DAA70D46D1F2_SET_RADIUS_OFFSET))(this, value);
	}

	::System::Single get_InitAngle()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E856DAA70D46D1F2_GET_INITANGLE_OFFSET))(this);
	}

	::System::Void set_InitAngle(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E856DAA70D46D1F2_SET_INITANGLE_OFFSET))(this, value);
	}

	::UnityEngine::Vector3 Method_1_F10A0D072D26C4BF()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E856DAA70D46D1F2_METHOD_1_F10A0D072D26C4BF_OFFSET))(this);
	}

	::System::Single get_Scale()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E856DAA70D46D1F2_GET_SCALE_OFFSET))(this);
	}

	::System::Void set_Scale(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E856DAA70D46D1F2_SET_SCALE_OFFSET))(this, value);
	}

	::System::Single get_SoftDeathAreaRatio()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E856DAA70D46D1F2_GET_SOFTDEATHAREARATIO_OFFSET))(this);
	}

	::System::Void set_SoftDeathAreaRatio(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E856DAA70D46D1F2_SET_SOFTDEATHAREARATIO_OFFSET))(this, value);
	}

	::System::Single get_HardDeathAreaRatio()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E856DAA70D46D1F2_GET_HARDDEATHAREARATIO_OFFSET))(this);
	}

	::System::Void set_HardDeathAreaRatio(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E856DAA70D46D1F2_SET_HARDDEATHAREARATIO_OFFSET))(this, value);
	}

	::RPG::GameCore::OrbitTargetPosType get_TargetPosType()
	{
		return ((::RPG::GameCore::OrbitTargetPosType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E856DAA70D46D1F2_GET_TARGETPOSTYPE_OFFSET))(this);
	}

	::System::Void set_TargetPosType(::RPG::GameCore::OrbitTargetPosType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::OrbitTargetPosType))((::PBYTE)hIl2Cpp + CLASS_1_E856DAA70D46D1F2_SET_TARGETPOSTYPE_OFFSET))(this, value);
	}

	::UnityEngine::Vector3 Method_1_C2245EC58D417830()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E856DAA70D46D1F2_METHOD_1_C2245EC58D417830_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E856DAA70D46D1F2_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_1_53CBBA41017A5552(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::RPG::GameCore::TaskContext* a3, ::Class_3_A149A6B784E8BE69* a4, ::RPG::GameCore::GameEntity* a5, ::UnityEngine::Vector3 a6)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPG::GameCore::TaskContext*, ::Class_3_A149A6B784E8BE69*, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E856DAA70D46D1F2_METHOD_1_53CBBA41017A5552_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::CruiseOrbitBGCurvePlugin* Method_1_31AEF55B1D3B1014()
	{
		return ((::CruiseOrbitBGCurvePlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E856DAA70D46D1F2_METHOD_1_31AEF55B1D3B1014_OFFSET))(this);
	}

	::System::Void Method_1_18D9238B9C310BFF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E856DAA70D46D1F2_METHOD_1_18D9238B9C310BFF_OFFSET))(this, a1);
	}
};
