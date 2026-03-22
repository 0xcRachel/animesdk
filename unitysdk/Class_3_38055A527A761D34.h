#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_38055A527A761D34_AnimatedItem;
namespace RPG::Client { class TransformLoopAnim; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define CLASS_3_38055A527A761D34_METHOD_3_4781FCE89AFF2181_OFFSET UNITYSDK_OFFSET(0x8498410)
#define CLASS_3_38055A527A761D34_METHOD_3_4C7BB19246732602_OFFSET UNITYSDK_OFFSET(0x8499180)
#define CLASS_3_38055A527A761D34_METHOD_3_51DEC44B986280C0_OFFSET UNITYSDK_OFFSET(0x8498450)
#define CLASS_3_38055A527A761D34_METHOD_3_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x849A0C0)
#define CLASS_3_38055A527A761D34_METHOD_3_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x849A120)
#define CLASS_3_38055A527A761D34_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x849A060)
#define CLASS_3_38055A527A761D34_METHOD_3_6E6682ED9FD6F719_OFFSET UNITYSDK_OFFSET(0x84984D0)
#define CLASS_3_38055A527A761D34_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x84982D0)
#define CLASS_3_38055A527A761D34_METHOD_3_A84CEAF7AFA573B3_OFFSET UNITYSDK_OFFSET(0x8499930)
#define CLASS_3_38055A527A761D34_METHOD_3_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x8499B30)
#define CLASS_3_38055A527A761D34_METHOD_3_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x8498360)
#define CLASS_3_38055A527A761D34_METHOD_3_CEE772DE95055C01_OFFSET UNITYSDK_OFFSET(0x8498FA0)
#define CLASS_3_38055A527A761D34_METHOD_3_DF7CEFC0E6C5FD0D_OFFSET UNITYSDK_OFFSET(0x8499F30)
#define CLASS_3_38055A527A761D34_METHOD_3_F7BA13C72A6B3F58_OFFSET UNITYSDK_OFFSET(0x8498A60)
#define CLASS_3_38055A527A761D34_TICK_OFFSET UNITYSDK_OFFSET(0x8498720)
#define CLASS_3_38055A527A761D34__CCTOR_OFFSET UNITYSDK_OFFSET(0x849A020)
#define CLASS_3_38055A527A761D34__CTOR_OFFSET UNITYSDK_OFFSET(0x8499FF0)
#define CLASS_3_38055A527A761D34___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x849A180)

inline static constexpr unsigned int Class_3_38055A527A761D34_TypeDefinitionIndex = 56008;

class Class_3_38055A527A761D34 : public ::RPG::Client::TABehaviorBase
{
public:
	static ::System::Collections::Generic::List_1<::UnityEngine::Collider*>** StaticGet_Field_3_1()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_38055A527A761D34_TypeDefinitionIndex)->GetStaticField(0x455A0);
	}
	::UnityEngine::Quaternion Field_3_6; // 0x38
	::System::Boolean Field_3_3; // 0x48
	::System::Single Field_3_0; // 0x4C
	::System::Single Field_3_4; // 0x50
	::System::Single Field_3_2; // 0x54
	::UnityEngine::Vector3 Field_3_5; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_38055A527A761D34__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_38055A527A761D34__CCTOR_OFFSET))();
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_38055A527A761D34_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_3_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_38055A527A761D34_METHOD_3_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_3_51DEC44B986280C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_38055A527A761D34_METHOD_3_51DEC44B986280C0_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_38055A527A761D34_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_3_F7BA13C72A6B3F58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_38055A527A761D34_METHOD_3_F7BA13C72A6B3F58_OFFSET))(this);
	}

	::System::Void Method_3_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_38055A527A761D34_METHOD_3_AA169839CB93802A_OFFSET))(this);
	}

	::System::Void Method_3_6E6682ED9FD6F719()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_38055A527A761D34_METHOD_3_6E6682ED9FD6F719_OFFSET))(this);
	}

	::System::Void Method_3_A84CEAF7AFA573B3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_38055A527A761D34_METHOD_3_A84CEAF7AFA573B3_OFFSET))(this);
	}

	::System::Void Method_3_CEE772DE95055C01(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_38055A527A761D34_METHOD_3_CEE772DE95055C01_OFFSET))(this, a1);
	}

	::System::Void Method_3_4C7BB19246732602(::Class_3_38055A527A761D34_AnimatedItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_38055A527A761D34_AnimatedItem*))((::PBYTE)hIl2Cpp + CLASS_3_38055A527A761D34_METHOD_3_4C7BB19246732602_OFFSET))(this, a1);
	}

	::System::Void Method_3_DF7CEFC0E6C5FD0D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_38055A527A761D34_METHOD_3_DF7CEFC0E6C5FD0D_OFFSET))(this, a1);
	}

	::RPG::Client::TransformLoopAnim* Method_3_4781FCE89AFF2181()
	{
		return ((::RPG::Client::TransformLoopAnim*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_38055A527A761D34_METHOD_3_4781FCE89AFF2181_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_38055A527A761D34_METHOD_3_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_38055A527A761D34_METHOD_3_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_38055A527A761D34_METHOD_3_5790A55946AA509D_2_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_38055A527A761D34___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
