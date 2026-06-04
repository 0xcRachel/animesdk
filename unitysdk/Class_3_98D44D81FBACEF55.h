#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_98D44D81FBACEF55_AnimatedItem;
namespace RPG::Client { class TransformLoopAnim; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define CLASS_3_98D44D81FBACEF55_METHOD_3_1AD3CAF2B0982C3F_OFFSET UNITYSDK_OFFSET(0x149FF4F0)
#define CLASS_3_98D44D81FBACEF55_METHOD_3_1DBAEC6E40278058_OFFSET UNITYSDK_OFFSET(0x149FDEC0)
#define CLASS_3_98D44D81FBACEF55_METHOD_3_4C7BB19246732602_OFFSET UNITYSDK_OFFSET(0x149FECF0)
#define CLASS_3_98D44D81FBACEF55_METHOD_3_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x149FFCB0)
#define CLASS_3_98D44D81FBACEF55_METHOD_3_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x149FFD10)
#define CLASS_3_98D44D81FBACEF55_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x149FFC50)
#define CLASS_3_98D44D81FBACEF55_METHOD_3_704FAC4600717444_OFFSET UNITYSDK_OFFSET(0x149FDFA0)
#define CLASS_3_98D44D81FBACEF55_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x149FDD50)
#define CLASS_3_98D44D81FBACEF55_METHOD_3_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x149FF720)
#define CLASS_3_98D44D81FBACEF55_METHOD_3_B12B4E4A39A083D2_OFFSET UNITYSDK_OFFSET(0x149FEB00)
#define CLASS_3_98D44D81FBACEF55_METHOD_3_B877181B6123B7F6_OFFSET UNITYSDK_OFFSET(0x149FE570)
#define CLASS_3_98D44D81FBACEF55_METHOD_3_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x149FDDE0)
#define CLASS_3_98D44D81FBACEF55_METHOD_3_DF7CEFC0E6C5FD0D_OFFSET UNITYSDK_OFFSET(0x149FFB20)
#define CLASS_3_98D44D81FBACEF55_METHOD_3_ED79705457B92B5C_OFFSET UNITYSDK_OFFSET(0x149FDF00)
#define CLASS_3_98D44D81FBACEF55_TICK_OFFSET UNITYSDK_OFFSET(0x149FE1F0)
#define CLASS_3_98D44D81FBACEF55__CCTOR_OFFSET UNITYSDK_OFFSET(0x149FFC10)
#define CLASS_3_98D44D81FBACEF55__CTOR_OFFSET UNITYSDK_OFFSET(0x149FFBE0)
#define CLASS_3_98D44D81FBACEF55___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x149FFD70)

inline static constexpr unsigned int Class_3_98D44D81FBACEF55_TypeDefinitionIndex = 65759;

class Class_3_98D44D81FBACEF55 : public ::RPG::Client::TABehaviorBase
{
public:
	static ::System::Collections::Generic::List_1<::UnityEngine::Collider*>** StaticGet_Field_3_0()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_98D44D81FBACEF55_TypeDefinitionIndex)->GetStaticField(0x565E0);
	}
	::System::Single Field_3_1; // 0x38
	::System::Single Field_3_2; // 0x3C
	::UnityEngine::Quaternion Field_3_3; // 0x40
	::System::Single Field_3_4; // 0x50
	::UnityEngine::Vector3 Field_3_5; // 0x54
	::System::Boolean Field_3_6; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_98D44D81FBACEF55__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_98D44D81FBACEF55__CCTOR_OFFSET))();
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_98D44D81FBACEF55_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_3_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_98D44D81FBACEF55_METHOD_3_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_3_ED79705457B92B5C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_98D44D81FBACEF55_METHOD_3_ED79705457B92B5C_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_98D44D81FBACEF55_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_3_B877181B6123B7F6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_98D44D81FBACEF55_METHOD_3_B877181B6123B7F6_OFFSET))(this);
	}

	::System::Void Method_3_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_98D44D81FBACEF55_METHOD_3_A1ADC999CFACEB89_OFFSET))(this);
	}

	::System::Void Method_3_704FAC4600717444()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_98D44D81FBACEF55_METHOD_3_704FAC4600717444_OFFSET))(this);
	}

	::System::Void Method_3_1AD3CAF2B0982C3F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_98D44D81FBACEF55_METHOD_3_1AD3CAF2B0982C3F_OFFSET))(this);
	}

	::System::Void Method_3_B12B4E4A39A083D2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_98D44D81FBACEF55_METHOD_3_B12B4E4A39A083D2_OFFSET))(this, a1);
	}

	::System::Void Method_3_4C7BB19246732602(::Class_3_98D44D81FBACEF55_AnimatedItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_98D44D81FBACEF55_AnimatedItem*))((::PBYTE)hIl2Cpp + CLASS_3_98D44D81FBACEF55_METHOD_3_4C7BB19246732602_OFFSET))(this, a1);
	}

	::System::Void Method_3_DF7CEFC0E6C5FD0D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_98D44D81FBACEF55_METHOD_3_DF7CEFC0E6C5FD0D_OFFSET))(this, a1);
	}

	::RPG::Client::TransformLoopAnim* Method_3_1DBAEC6E40278058()
	{
		return ((::RPG::Client::TransformLoopAnim*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_98D44D81FBACEF55_METHOD_3_1DBAEC6E40278058_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_98D44D81FBACEF55_METHOD_3_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_98D44D81FBACEF55_METHOD_3_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_98D44D81FBACEF55_METHOD_3_5790A55946AA509D_2_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_98D44D81FBACEF55___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}
};
