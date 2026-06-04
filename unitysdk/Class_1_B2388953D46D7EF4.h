#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TransitType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Action; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_B2388953D46D7EF4_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x1928CCD0)
#define CLASS_1_B2388953D46D7EF4_GET_MAXDELTATIME_OFFSET UNITYSDK_OFFSET(0x1928CD70)
#define CLASS_1_B2388953D46D7EF4_METHOD_1_055E3BF644BB741B_OFFSET UNITYSDK_OFFSET(0x1928CC20)
#define CLASS_1_B2388953D46D7EF4_METHOD_1_3150507749BCEAEC_OFFSET UNITYSDK_OFFSET(0x1928C970)
#define CLASS_1_B2388953D46D7EF4_METHOD_1_4B11E4B10DC74213_1_OFFSET UNITYSDK_OFFSET(0x1928C9A0)
#define CLASS_1_B2388953D46D7EF4_METHOD_1_4B11E4B10DC74213_OFFSET UNITYSDK_OFFSET(0x1928C8C0)
#define CLASS_1_B2388953D46D7EF4_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x1928CC10)
#define CLASS_1_B2388953D46D7EF4_METHOD_1_6173A129B63EDD9D_OFFSET UNITYSDK_OFFSET(0x1928CA50)
#define CLASS_1_B2388953D46D7EF4_METHOD_1_7EC9B233B6EED88B_OFFSET UNITYSDK_OFFSET(0x1928C820)
#define CLASS_1_B2388953D46D7EF4_METHOD_1_823422828276EFD9_OFFSET UNITYSDK_OFFSET(0x1928C780)
#define CLASS_1_B2388953D46D7EF4_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1928C6D0)
#define CLASS_1_B2388953D46D7EF4_METHOD_1_9B9FEA8635D35555_OFFSET UNITYSDK_OFFSET(0x1928C720)
#define CLASS_1_B2388953D46D7EF4_METHOD_1_B657C5C76F912061_OFFSET UNITYSDK_OFFSET(0x1928C7C0)
#define CLASS_1_B2388953D46D7EF4_METHOD_1_D37FAD0A6AA04B25_1_OFFSET UNITYSDK_OFFSET(0x1928C8A0)
#define CLASS_1_B2388953D46D7EF4_METHOD_1_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x1928C880)
#define CLASS_1_B2388953D46D7EF4_METHOD_1_EBF30915290B105B_1_OFFSET UNITYSDK_OFFSET(0x1928CC90)
#define CLASS_1_B2388953D46D7EF4_METHOD_1_EBF30915290B105B_OFFSET UNITYSDK_OFFSET(0x1928CC60)
#define CLASS_1_B2388953D46D7EF4_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1928CCF0)
#define CLASS_1_B2388953D46D7EF4_METHOD_1_FE98BDD8B269E2AC_OFFSET UNITYSDK_OFFSET(0x1928CD00)
#define CLASS_1_B2388953D46D7EF4_SET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x1928CCE0)
#define CLASS_1_B2388953D46D7EF4_SET_MAXDELTATIME_OFFSET UNITYSDK_OFFSET(0x1928CD80)
#define CLASS_1_B2388953D46D7EF4__CTOR_OFFSET UNITYSDK_OFFSET(0x1928C680)

inline static constexpr unsigned int Class_1_B2388953D46D7EF4_TypeDefinitionIndex = 33528;

class Class_1_B2388953D46D7EF4 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x18
	::System::Single Field_1_2; // 0x1C
	::System::Single Field_1_3; // 0x20
	::System::Single _MaxDeltaTime_k__BackingField; // 0x24
	::System::Boolean _IsFinish_k__BackingField; // 0x28
	::UnityEngine::Vector3 Field_1_6; // 0x2C
	::UnityEngine::Vector3 Field_1_7; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2388953D46D7EF4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9B9FEA8635D35555(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::System::Action* a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_B2388953D46D7EF4_METHOD_1_9B9FEA8635D35555_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_B657C5C76F912061(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_B2388953D46D7EF4_METHOD_1_B657C5C76F912061_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_7EC9B233B6EED88B(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B2388953D46D7EF4_METHOD_1_7EC9B233B6EED88B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2388953D46D7EF4_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_1_823422828276EFD9(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B2388953D46D7EF4_METHOD_1_823422828276EFD9_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2388953D46D7EF4_METHOD_1_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2388953D46D7EF4_METHOD_1_D37FAD0A6AA04B25_1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_4B11E4B10DC74213()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2388953D46D7EF4_METHOD_1_4B11E4B10DC74213_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_4B11E4B10DC74213_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2388953D46D7EF4_METHOD_1_4B11E4B10DC74213_1_OFFSET))(this);
	}

	::System::Single Method_1_3150507749BCEAEC()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2388953D46D7EF4_METHOD_1_3150507749BCEAEC_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_6173A129B63EDD9D(::UnityEngine::AnimationCurve* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_B2388953D46D7EF4_METHOD_1_6173A129B63EDD9D_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2388953D46D7EF4_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_1_055E3BF644BB741B(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B2388953D46D7EF4_METHOD_1_055E3BF644BB741B_OFFSET))(this, a1);
	}

	::System::Void Method_1_EBF30915290B105B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B2388953D46D7EF4_METHOD_1_EBF30915290B105B_OFFSET))(this, a1);
	}

	::System::Void Method_1_EBF30915290B105B_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B2388953D46D7EF4_METHOD_1_EBF30915290B105B_1_OFFSET))(this, a1);
	}

	::System::Boolean get_IsFinish()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2388953D46D7EF4_GET_ISFINISH_OFFSET))(this);
	}

	::System::Void set_IsFinish(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B2388953D46D7EF4_SET_ISFINISH_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2388953D46D7EF4_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::RPG::Client::TransitType Method_1_FE98BDD8B269E2AC()
	{
		return ((::RPG::Client::TransitType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2388953D46D7EF4_METHOD_1_FE98BDD8B269E2AC_OFFSET))(this);
	}

	::System::Single get_MaxDeltaTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2388953D46D7EF4_GET_MAXDELTATIME_OFFSET))(this);
	}

	::System::Void set_MaxDeltaTime(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B2388953D46D7EF4_SET_MAXDELTATIME_OFFSET))(this, a1);
	}
};
