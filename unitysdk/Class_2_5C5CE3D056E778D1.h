#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1835888C1E19F013.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0AD6129525BF5F86;
namespace RPG::GameCore { class BGCurveProjectileData; }
namespace RPG::GameCore { class MonoProjectileBGCurve; }

#define CLASS_2_5C5CE3D056E778D1_METHOD_2_1EDDD623459E1A71_OFFSET UNITYSDK_OFFSET(0x87162A0)
#define CLASS_2_5C5CE3D056E778D1_METHOD_2_3574512695A597AB_OFFSET UNITYSDK_OFFSET(0x8715AF0)
#define CLASS_2_5C5CE3D056E778D1_METHOD_2_52228D1D218AC9A3_OFFSET UNITYSDK_OFFSET(0x8715EE0)
#define CLASS_2_5C5CE3D056E778D1_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x8716550)
#define CLASS_2_5C5CE3D056E778D1_METHOD_2_7DFB4B9C80198D98_OFFSET UNITYSDK_OFFSET(0x8716520)
#define CLASS_2_5C5CE3D056E778D1_METHOD_2_808A56A256840289_OFFSET UNITYSDK_OFFSET(0x87163C0)
#define CLASS_2_5C5CE3D056E778D1_METHOD_2_C2245EC58D417830_OFFSET UNITYSDK_OFFSET(0x87159C0)
#define CLASS_2_5C5CE3D056E778D1__CTOR_OFFSET UNITYSDK_OFFSET(0x8715940)

inline static constexpr unsigned int Class_2_5C5CE3D056E778D1_TypeDefinitionIndex = 43801;

class Class_2_5C5CE3D056E778D1 : public ::Class_1_1835888C1E19F013
{
public:
	::RPG::GameCore::BGCurveProjectileData* Field_2_0; // 0x48
	::RPG::GameCore::MonoProjectileBGCurve* Field_2_1; // 0x50
	::UnityEngine::Vector3 Field_2_3; // 0x58
	::System::Boolean Field_2_4; // 0x64
	::System::Single Field_2_5; // 0x68
	::UnityEngine::Vector3 Field_2_2; // 0x6C

	::System::Void _ctor(::Class_1_0AD6129525BF5F86* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AD6129525BF5F86*))((::PBYTE)hIl2Cpp + CLASS_2_5C5CE3D056E778D1__CTOR_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_C2245EC58D417830()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C5CE3D056E778D1_METHOD_2_C2245EC58D417830_OFFSET))(this);
	}

	::System::Void Method_2_3574512695A597AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C5CE3D056E778D1_METHOD_2_3574512695A597AB_OFFSET))(this);
	}

	::System::Void Method_2_52228D1D218AC9A3(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5C5CE3D056E778D1_METHOD_2_52228D1D218AC9A3_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_1EDDD623459E1A71()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C5CE3D056E778D1_METHOD_2_1EDDD623459E1A71_OFFSET))(this);
	}

	::System::Void Method_2_808A56A256840289(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5C5CE3D056E778D1_METHOD_2_808A56A256840289_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_7DFB4B9C80198D98()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C5CE3D056E778D1_METHOD_2_7DFB4B9C80198D98_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C5CE3D056E778D1_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
