#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class MonoPathLightControl; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_8422DE19D9B5F248_METHOD_2_205C242D36381FFB_OFFSET UNITYSDK_OFFSET(0x154DB060)
#define CLASS_2_8422DE19D9B5F248_METHOD_2_37CF7377CBA6E635_OFFSET UNITYSDK_OFFSET(0x154DAE90)
#define CLASS_2_8422DE19D9B5F248_METHOD_2_50306739355B64EB_OFFSET UNITYSDK_OFFSET(0x154DAE20)
#define CLASS_2_8422DE19D9B5F248_METHOD_2_6112A1276899AF0F_OFFSET UNITYSDK_OFFSET(0x154DD5E0)
#define CLASS_2_8422DE19D9B5F248_METHOD_2_B76CD5CB3E297DF3_OFFSET UNITYSDK_OFFSET(0x154DC0C0)
#define CLASS_2_8422DE19D9B5F248_METHOD_2_DEDB6D705D6319DA_OFFSET UNITYSDK_OFFSET(0x154DDC00)
#define CLASS_2_8422DE19D9B5F248_METHOD_2_FB0DF283AE5D325A_OFFSET UNITYSDK_OFFSET(0x154DA980)
#define CLASS_2_8422DE19D9B5F248__CTOR_OFFSET UNITYSDK_OFFSET(0x154DDBF0)

inline static constexpr unsigned int Class_2_8422DE19D9B5F248_TypeDefinitionIndex = 65803;

class Class_2_8422DE19D9B5F248 : public ::RPG::Client::BehaviorBase
{
public:
	::UnityEngine::MaterialPropertyBlock* Field_2_0; // 0x18
	::UnityEngine::Vector3 Field_2_1; // 0x20
	::System::Single Field_2_2; // 0x2C
	::System::Single Field_2_3; // 0x30
	::System::Single Field_2_4; // 0x34
	::System::Single Field_2_5; // 0x38
	::UnityEngine::Vector3 Field_2_6; // 0x3C
	::UnityEngine::Vector3 Field_2_7; // 0x48
	::UnityEngine::Vector4 Field_2_8; // 0x54
	::System::Single Field_2_9; // 0x64
	::UnityEngine::Vector3 Field_2_10; // 0x68
	::System::Single Field_2_11; // 0x74
	::UnityEngine::Vector3 Field_2_12; // 0x78
	::UnityEngine::Vector3 Field_2_13; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8422DE19D9B5F248__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_FB0DF283AE5D325A(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_8422DE19D9B5F248_METHOD_2_FB0DF283AE5D325A_OFFSET))(this, a1);
	}

	::System::Void Method_2_37CF7377CBA6E635()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8422DE19D9B5F248_METHOD_2_37CF7377CBA6E635_OFFSET))(this);
	}

	::System::Void Method_2_205C242D36381FFB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8422DE19D9B5F248_METHOD_2_205C242D36381FFB_OFFSET))(this);
	}

	::System::Void Method_2_B76CD5CB3E297DF3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8422DE19D9B5F248_METHOD_2_B76CD5CB3E297DF3_OFFSET))(this);
	}

	::System::Void Method_2_6112A1276899AF0F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8422DE19D9B5F248_METHOD_2_6112A1276899AF0F_OFFSET))(this);
	}

	::RPG::Client::MonoPathLightControl* Method_2_50306739355B64EB()
	{
		return ((::RPG::Client::MonoPathLightControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8422DE19D9B5F248_METHOD_2_50306739355B64EB_OFFSET))(this);
	}

	::System::Void Method_2_DEDB6D705D6319DA(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_8422DE19D9B5F248_METHOD_2_DEDB6D705D6319DA_OFFSET))(this, a1);
	}
};
