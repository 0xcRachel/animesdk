#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_952A7C560FC1CD4B.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::Rendering { class CommandBuffer; }
template <typename T> class Class_3_E4A470CB2179ACFB;

#define CLASS_2_DC42F62F467615B0_METHOD_2_0960CAEE01038065_OFFSET UNITYSDK_OFFSET(0x10862E10)
#define CLASS_2_DC42F62F467615B0_METHOD_2_2C5196CCED0BED7E_OFFSET UNITYSDK_OFFSET(0x10862A80)
#define CLASS_2_DC42F62F467615B0_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x10863350)
#define CLASS_2_DC42F62F467615B0_METHOD_2_630A3B9C63A23882_OFFSET UNITYSDK_OFFSET(0x10863340)
#define CLASS_2_DC42F62F467615B0_METHOD_2_6E2356E48BB4B332_OFFSET UNITYSDK_OFFSET(0x108633B0)
#define CLASS_2_DC42F62F467615B0_METHOD_2_A1C464B05BB7A5C1_1_OFFSET UNITYSDK_OFFSET(0x10862D60)
#define CLASS_2_DC42F62F467615B0_METHOD_2_A1C464B05BB7A5C1_OFFSET UNITYSDK_OFFSET(0x10862CB0)
#define CLASS_2_DC42F62F467615B0_METHOD_2_D00169CA46284F7E_OFFSET UNITYSDK_OFFSET(0x10862EF0)
#define CLASS_2_DC42F62F467615B0_METHOD_2_F0F8DE036FE283F6_OFFSET UNITYSDK_OFFSET(0x10862E70)
#define CLASS_2_DC42F62F467615B0__CTOR_OFFSET UNITYSDK_OFFSET(0x10863240)

inline static constexpr unsigned int Class_2_DC42F62F467615B0_TypeDefinitionIndex = 45913;

class Class_2_DC42F62F467615B0 : public ::Class_1_952A7C560FC1CD4B
{
public:
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* Field_2_0; // 0x28
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* Field_2_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC42F62F467615B0__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2C5196CCED0BED7E(::System::Boolean a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_DC42F62F467615B0_METHOD_2_2C5196CCED0BED7E_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 Method_2_A1C464B05BB7A5C1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC42F62F467615B0_METHOD_2_A1C464B05BB7A5C1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_A1C464B05BB7A5C1_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC42F62F467615B0_METHOD_2_A1C464B05BB7A5C1_1_OFFSET))(this);
	}

	::System::Void Method_2_0960CAEE01038065()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC42F62F467615B0_METHOD_2_0960CAEE01038065_OFFSET))(this);
	}

	::System::Void Method_2_F0F8DE036FE283F6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC42F62F467615B0_METHOD_2_F0F8DE036FE283F6_OFFSET))(this);
	}

	::System::Void Method_2_D00169CA46284F7E(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_DC42F62F467615B0_METHOD_2_D00169CA46284F7E_OFFSET))(this, a1);
	}

	::System::Void Method_2_630A3B9C63A23882()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC42F62F467615B0_METHOD_2_630A3B9C63A23882_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC42F62F467615B0_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_6E2356E48BB4B332(::UnityEngine::Rendering::CommandBuffer* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_DC42F62F467615B0_METHOD_2_6E2356E48BB4B332_OFFSET))(this, P0);
	}
};
