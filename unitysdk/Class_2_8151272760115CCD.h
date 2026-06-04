#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D5DA62FC7DE2D532.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_64D890C466F37235;
class Class_2_8151272760115CCD_Class_1_37CE18D211098D95;
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapRotationInfo; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_8151272760115CCD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x171BF3B0)
#define CLASS_2_8151272760115CCD_METHOD_2_7639D264A770ED5E_OFFSET UNITYSDK_OFFSET(0x171BFE40)
#define CLASS_2_8151272760115CCD_METHOD_2_7FD53EDAAFC8879D_OFFSET UNITYSDK_OFFSET(0x171BF4D0)
#define CLASS_2_8151272760115CCD_METHOD_2_8B05234B876F1D08_OFFSET UNITYSDK_OFFSET(0x171BFEC0)
#define CLASS_2_8151272760115CCD_METHOD_2_8CD1A6D1096A6CB7_OFFSET UNITYSDK_OFFSET(0x171BFD80)
#define CLASS_2_8151272760115CCD_METHOD_2_A2172401030892FD_OFFSET UNITYSDK_OFFSET(0x171BE390)
#define CLASS_2_8151272760115CCD_METHOD_2_AD1EE2024E601D67_OFFSET UNITYSDK_OFFSET(0x171BF910)
#define CLASS_2_8151272760115CCD_METHOD_2_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0x171BF550)
#define CLASS_2_8151272760115CCD_METHOD_2_B81EB0B16E60CB2B_OFFSET UNITYSDK_OFFSET(0x171BF870)
#define CLASS_2_8151272760115CCD_METHOD_2_CA46DFF8CF6EB34E_OFFSET UNITYSDK_OFFSET(0x171BE240)
#define CLASS_2_8151272760115CCD_METHOD_2_D0429A442DFBA9DF_OFFSET UNITYSDK_OFFSET(0x171BFCB0)
#define CLASS_2_8151272760115CCD__CTOR_OFFSET UNITYSDK_OFFSET(0x171BFD70)
#define CLASS_2_8151272760115CCD___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x171BFDE0)

inline static constexpr unsigned int Class_2_8151272760115CCD_TypeDefinitionIndex = 56628;

class Class_2_8151272760115CCD : public ::Class_1_D5DA62FC7DE2D532
{
public:
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::Class_2_8151272760115CCD_Class_1_37CE18D211098D95*>* Field_2_0; // 0x10
	::RPG::Client::MapDef* Field_2_1; // 0x18
	::Class_1_64D890C466F37235* Field_2_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::Class_2_8151272760115CCD_Class_1_37CE18D211098D95*>* Field_2_3; // 0x28
	::RPG::Client::MapRotationInfo* Field_2_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8151272760115CCD__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA46DFF8CF6EB34E(::Class_1_64D890C466F37235* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_64D890C466F37235*))((::PBYTE)hIl2Cpp + CLASS_2_8151272760115CCD_METHOD_2_CA46DFF8CF6EB34E_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8151272760115CCD_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_7FD53EDAAFC8879D(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_8151272760115CCD_METHOD_2_7FD53EDAAFC8879D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B81EB0B16E60CB2B(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Quaternion a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_8151272760115CCD_METHOD_2_B81EB0B16E60CB2B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_B2C0ADBFEA309440()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8151272760115CCD_METHOD_2_B2C0ADBFEA309440_OFFSET))(this);
	}

	::System::Void Method_2_A2172401030892FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8151272760115CCD_METHOD_2_A2172401030892FD_OFFSET))(this);
	}

	::System::Void Method_2_AD1EE2024E601D67(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8151272760115CCD_METHOD_2_AD1EE2024E601D67_OFFSET))(this, a1);
	}

	::System::Void Method_2_D0429A442DFBA9DF(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8151272760115CCD_METHOD_2_D0429A442DFBA9DF_OFFSET))(this, a1);
	}

	::System::Void Method_2_8CD1A6D1096A6CB7(::Class_1_64D890C466F37235* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_64D890C466F37235*))((::PBYTE)hIl2Cpp + CLASS_2_8151272760115CCD_METHOD_2_8CD1A6D1096A6CB7_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8151272760115CCD___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_7639D264A770ED5E(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_8151272760115CCD_METHOD_2_7639D264A770ED5E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8B05234B876F1D08(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Quaternion a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_8151272760115CCD_METHOD_2_8B05234B876F1D08_OFFSET))(this, a1, a2, a3);
	}
};
