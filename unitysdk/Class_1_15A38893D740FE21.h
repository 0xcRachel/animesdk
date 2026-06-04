#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_15A38893D740FE21_Class_3_C3B154948629ABCC;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_15A38893D740FE21_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1659C0B0)
#define CLASS_1_15A38893D740FE21_METHOD_1_030A02F181C9AC55_1_OFFSET UNITYSDK_OFFSET(0x1659DBA0)
#define CLASS_1_15A38893D740FE21_METHOD_1_030A02F181C9AC55_OFFSET UNITYSDK_OFFSET(0x1659D740)
#define CLASS_1_15A38893D740FE21_METHOD_1_1283EC0876EAAACF_OFFSET UNITYSDK_OFFSET(0x1659C1B0)
#define CLASS_1_15A38893D740FE21_METHOD_1_17B570D89E92D975_1_OFFSET UNITYSDK_OFFSET(0x1659D3B0)
#define CLASS_1_15A38893D740FE21_METHOD_1_17B570D89E92D975_OFFSET UNITYSDK_OFFSET(0x1659D1D0)
#define CLASS_1_15A38893D740FE21_METHOD_1_1950A2B2A2928007_OFFSET UNITYSDK_OFFSET(0x1659D280)
#define CLASS_1_15A38893D740FE21_METHOD_1_449A7DD0254C81A3_OFFSET UNITYSDK_OFFSET(0x1659D030)
#define CLASS_1_15A38893D740FE21_METHOD_1_5C521B882A838F07_1_OFFSET UNITYSDK_OFFSET(0x1659D8C0)
#define CLASS_1_15A38893D740FE21_METHOD_1_5C521B882A838F07_OFFSET UNITYSDK_OFFSET(0x1659D460)
#define CLASS_1_15A38893D740FE21_METHOD_1_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1659D180)
#define CLASS_1_15A38893D740FE21_METHOD_1_B2B81ACA1C91BBD3_OFFSET UNITYSDK_OFFSET(0x1659D090)
#define CLASS_1_15A38893D740FE21_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1659DD20)
#define CLASS_1_15A38893D740FE21__CTOR_OFFSET UNITYSDK_OFFSET(0x1659DD60)

inline static constexpr unsigned int Class_1_15A38893D740FE21_TypeDefinitionIndex = 73306;

class Class_1_15A38893D740FE21 : public ::System::Object
{
public:
	static ::UnityEngine::Vector3* StaticGet_Field_1_0()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Class_1_15A38893D740FE21_TypeDefinitionIndex)->GetStaticField(0xF460);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_15A38893D740FE21_TypeDefinitionIndex)->GetStaticField(0xF46C);
	}
	static ::UnityEngine::Vector3* StaticGet_Field_1_2()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Class_1_15A38893D740FE21_TypeDefinitionIndex)->GetStaticField(0xF470);
	}
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action*>* Field_1_3; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action*>*>* Field_1_4; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action*>*>* Field_1_5; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_15A38893D740FE21_Class_3_C3B154948629ABCC*>* Field_1_6; // 0x28
	::System::Int32 Field_1_7; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15A38893D740FE21__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15A38893D740FE21_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_1283EC0876EAAACF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15A38893D740FE21_METHOD_1_1283EC0876EAAACF_OFFSET))(this);
	}

	::System::Boolean Method_1_449A7DD0254C81A3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15A38893D740FE21_METHOD_1_449A7DD0254C81A3_OFFSET))(this);
	}

	::System::Int32 Method_1_B2B81ACA1C91BBD3(::System::Action* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_15A38893D740FE21_METHOD_1_B2B81ACA1C91BBD3_OFFSET))(this, a1);
	}

	::System::Void Method_1_17B570D89E92D975(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_15A38893D740FE21_METHOD_1_17B570D89E92D975_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_1950A2B2A2928007(::Class_1_15A38893D740FE21_Class_3_C3B154948629ABCC* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_15A38893D740FE21_Class_3_C3B154948629ABCC*))((::PBYTE)hIl2Cpp + CLASS_1_15A38893D740FE21_METHOD_1_1950A2B2A2928007_OFFSET))(this, a1);
	}

	::System::Void Method_1_17B570D89E92D975_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_15A38893D740FE21_METHOD_1_17B570D89E92D975_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_5C521B882A838F07(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_15A38893D740FE21_METHOD_1_5C521B882A838F07_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_030A02F181C9AC55(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_15A38893D740FE21_METHOD_1_030A02F181C9AC55_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_5C521B882A838F07_1(::System::String* a1, ::System::Action* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_15A38893D740FE21_METHOD_1_5C521B882A838F07_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_030A02F181C9AC55_1(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_15A38893D740FE21_METHOD_1_030A02F181C9AC55_1_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15A38893D740FE21_METHOD_1_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_15A38893D740FE21_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
