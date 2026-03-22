#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class MonoPathLightControl; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_BD8540FE2E9B6783_METHOD_2_2E29038CF17E20BD_OFFSET UNITYSDK_OFFSET(0xFE48FE0)
#define CLASS_2_BD8540FE2E9B6783_METHOD_2_5F8A3330EE658727_OFFSET UNITYSDK_OFFSET(0xFE46CB0)
#define CLASS_2_BD8540FE2E9B6783_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0xFE49560)
#define CLASS_2_BD8540FE2E9B6783_METHOD_2_92CDC81783DABA21_OFFSET UNITYSDK_OFFSET(0xFE471A0)
#define CLASS_2_BD8540FE2E9B6783_METHOD_2_B76CD5CB3E297DF3_OFFSET UNITYSDK_OFFSET(0xFE47EC0)
#define CLASS_2_BD8540FE2E9B6783_METHOD_2_C37629F2DEC6A644_OFFSET UNITYSDK_OFFSET(0xFE46FF0)
#define CLASS_2_BD8540FE2E9B6783_METHOD_2_C8D6B29192F288ED_OFFSET UNITYSDK_OFFSET(0xFE47040)
#define CLASS_2_BD8540FE2E9B6783__CTOR_OFFSET UNITYSDK_OFFSET(0xFE49550)

inline static constexpr unsigned int Class_2_BD8540FE2E9B6783_TypeDefinitionIndex = 56052;

class Class_2_BD8540FE2E9B6783 : public ::RPG::Client::BehaviorBase
{
public:
	::UnityEngine::MaterialPropertyBlock* Field_2_13; // 0x18
	::System::Single Field_2_7; // 0x20
	::System::Single Field_2_2; // 0x24
	::System::Single Field_2_5; // 0x28
	::UnityEngine::Vector3 Field_2_9; // 0x2C
	::UnityEngine::Vector3 Field_2_1; // 0x38
	::UnityEngine::Vector3 Field_2_0; // 0x44
	::UnityEngine::Vector3 Field_2_10; // 0x50
	::UnityEngine::Vector4 Field_2_8; // 0x5C
	::System::Single Field_2_4; // 0x6C
	::UnityEngine::Vector3 Field_2_11; // 0x70
	::System::Single Field_2_6; // 0x7C
	::System::Single Field_2_3; // 0x80
	::UnityEngine::Vector3 Field_2_12; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD8540FE2E9B6783__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5F8A3330EE658727(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_BD8540FE2E9B6783_METHOD_2_5F8A3330EE658727_OFFSET))(this, a1);
	}

	::System::Void Method_2_C8D6B29192F288ED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD8540FE2E9B6783_METHOD_2_C8D6B29192F288ED_OFFSET))(this);
	}

	::System::Void Method_2_92CDC81783DABA21()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD8540FE2E9B6783_METHOD_2_92CDC81783DABA21_OFFSET))(this);
	}

	::System::Void Method_2_B76CD5CB3E297DF3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD8540FE2E9B6783_METHOD_2_B76CD5CB3E297DF3_OFFSET))(this);
	}

	::System::Void Method_2_2E29038CF17E20BD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD8540FE2E9B6783_METHOD_2_2E29038CF17E20BD_OFFSET))(this);
	}

	::RPG::Client::MonoPathLightControl* Method_2_C37629F2DEC6A644()
	{
		return ((::RPG::Client::MonoPathLightControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD8540FE2E9B6783_METHOD_2_C37629F2DEC6A644_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_BD8540FE2E9B6783_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}
};
