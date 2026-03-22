#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7256E7A2FB36A46D.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_848;
class Class_1_22FD99E7B63D26F6;
class Class_1_56FF45D7B2C55655;
class Class_1_7E9DD9C420D52D84;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_91BA25331E3ACE66_METHOD_2_0CAB8B787B77375D_OFFSET UNITYSDK_OFFSET(0xBF074D0)
#define CLASS_2_91BA25331E3ACE66_METHOD_2_14014646206E49EF_1_OFFSET UNITYSDK_OFFSET(0xBF0AC70)
#define CLASS_2_91BA25331E3ACE66_METHOD_2_14014646206E49EF_OFFSET UNITYSDK_OFFSET(0xBF0AB20)
#define CLASS_2_91BA25331E3ACE66_METHOD_2_310C90A59855501B_OFFSET UNITYSDK_OFFSET(0xBF0A030)
#define CLASS_2_91BA25331E3ACE66_METHOD_2_3B258437A86233AC_OFFSET UNITYSDK_OFFSET(0xBF09EC0)
#define CLASS_2_91BA25331E3ACE66_METHOD_2_5B1E204FC3227E4D_OFFSET UNITYSDK_OFFSET(0xBF07D50)
#define CLASS_2_91BA25331E3ACE66_METHOD_2_6832F3612502E34B_OFFSET UNITYSDK_OFFSET(0xBF08440)
#define CLASS_2_91BA25331E3ACE66_METHOD_2_91B1D0230882FAE3_OFFSET UNITYSDK_OFFSET(0xBF0A2A0)
#define CLASS_2_91BA25331E3ACE66_METHOD_2_BA1BB49741CFDFE1_OFFSET UNITYSDK_OFFSET(0xBF07E40)
#define CLASS_2_91BA25331E3ACE66_METHOD_2_CBDC22058B67F0FE_OFFSET UNITYSDK_OFFSET(0xBF08EB0)
#define CLASS_2_91BA25331E3ACE66_METHOD_2_CC75865AF9CCA3AF_OFFSET UNITYSDK_OFFSET(0xBF0C7C0)
#define CLASS_2_91BA25331E3ACE66_METHOD_2_F4DD08A31BA3F883_1_OFFSET UNITYSDK_OFFSET(0xBF096E0)
#define CLASS_2_91BA25331E3ACE66_METHOD_2_F4DD08A31BA3F883_OFFSET UNITYSDK_OFFSET(0xBF08F00)
#define CLASS_2_91BA25331E3ACE66_METHOD_2_F5C6468093673790_OFFSET UNITYSDK_OFFSET(0xBF07CC0)
#define CLASS_2_91BA25331E3ACE66_METHOD_2_F63FE1AA9633F811_1_OFFSET UNITYSDK_OFFSET(0xBF0BAC0)
#define CLASS_2_91BA25331E3ACE66_METHOD_2_F63FE1AA9633F811_OFFSET UNITYSDK_OFFSET(0xBF0ADC0)
#define CLASS_2_91BA25331E3ACE66__CCTOR_OFFSET UNITYSDK_OFFSET(0xBF0C850)
#define CLASS_2_91BA25331E3ACE66__CTOR_OFFSET UNITYSDK_OFFSET(0xBF08B50)

inline static constexpr unsigned int Class_2_91BA25331E3ACE66_TypeDefinitionIndex = 58882;

class Class_2_91BA25331E3ACE66 : public ::Class_1_7256E7A2FB36A46D
{
public:
	static ::System::Single* StaticGet_Field_2_8()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_91BA25331E3ACE66_TypeDefinitionIndex)->GetStaticField(0x10AC0);
	}
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_22FD99E7B63D26F6*>* Field_2_0; // 0x18
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_848*>* Field_2_6; // 0x20
	::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_848*>* Field_2_3; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>* Field_2_4; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>* Field_2_5; // 0x38
	::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_848*>* Field_2_1; // 0x40
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_7; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_22FD99E7B63D26F6*>* Field_2_2; // 0x50

	::System::Void _ctor(::Class_1_56FF45D7B2C55655* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_56FF45D7B2C55655*))((::PBYTE)hIl2Cpp + CLASS_2_91BA25331E3ACE66__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_91BA25331E3ACE66__CCTOR_OFFSET))();
	}

	::Class_1_7E9DD9C420D52D84* Method_2_0CAB8B787B77375D(::UnityEngine::Vector3 a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a2, ::System::Single a3, ::System::Action* a4, ::System::Action* a5, ::System::Int32 a6)
	{
		return ((::Class_1_7E9DD9C420D52D84*(*)(::PVOID, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Single, ::System::Action*, ::System::Action*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_91BA25331E3ACE66_METHOD_2_0CAB8B787B77375D_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_BA1BB49741CFDFE1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_91BA25331E3ACE66_METHOD_2_BA1BB49741CFDFE1_OFFSET))(this);
	}

	::System::Single Method_2_F5C6468093673790(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_91BA25331E3ACE66_METHOD_2_F5C6468093673790_OFFSET))(this, a1, a2);
	}

	::Class_1_7E9DD9C420D52D84* Method_2_6832F3612502E34B(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Action* a3, ::System::Action* a4, ::System::Int32 a5)
	{
		return ((::Class_1_7E9DD9C420D52D84*(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Action*, ::System::Action*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_91BA25331E3ACE66_METHOD_2_6832F3612502E34B_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_CBDC22058B67F0FE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_91BA25331E3ACE66_METHOD_2_CBDC22058B67F0FE_OFFSET))(this);
	}

	::System::Void Method_2_F4DD08A31BA3F883()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_91BA25331E3ACE66_METHOD_2_F4DD08A31BA3F883_OFFSET))(this);
	}

	::System::Void Method_2_F4DD08A31BA3F883_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_91BA25331E3ACE66_METHOD_2_F4DD08A31BA3F883_1_OFFSET))(this);
	}

	::System::Void Method_2_3B258437A86233AC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_91BA25331E3ACE66_METHOD_2_3B258437A86233AC_OFFSET))(this);
	}

	::System::Void Method_2_310C90A59855501B(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_91BA25331E3ACE66_METHOD_2_310C90A59855501B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_91B1D0230882FAE3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_91BA25331E3ACE66_METHOD_2_91B1D0230882FAE3_OFFSET))(this);
	}

	::System::Void Method_2_14014646206E49EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_91BA25331E3ACE66_METHOD_2_14014646206E49EF_OFFSET))(this);
	}

	::System::Void Method_2_14014646206E49EF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_91BA25331E3ACE66_METHOD_2_14014646206E49EF_1_OFFSET))(this);
	}

	::System::Void Method_2_F63FE1AA9633F811()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_91BA25331E3ACE66_METHOD_2_F63FE1AA9633F811_OFFSET))(this);
	}

	::System::Void Method_2_F63FE1AA9633F811_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_91BA25331E3ACE66_METHOD_2_F63FE1AA9633F811_1_OFFSET))(this);
	}

	::System::Void Method_2_CC75865AF9CCA3AF(::Class_1_7E9DD9C420D52D84* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7E9DD9C420D52D84*))((::PBYTE)hIl2Cpp + CLASS_2_91BA25331E3ACE66_METHOD_2_CC75865AF9CCA3AF_OFFSET))(this, a1);
	}

	static ::System::Int64 Method_2_5B1E204FC3227E4D(::UnityEngine::Vector3 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Int64(*)(::UnityEngine::Vector3, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_91BA25331E3ACE66_METHOD_2_5B1E204FC3227E4D_OFFSET))(a1, a2, a3);
	}
};
