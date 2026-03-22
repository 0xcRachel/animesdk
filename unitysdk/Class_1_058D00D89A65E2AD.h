#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_639D4030F98AB624.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_27D9C028BDC40E5D;
class Class_1_494BD190B553B399;
class Class_1_D2B8D50DD9833CFC;
class Class_2_81A4CCAF8860A4C5;
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::GameCore { class TickLodConfig; }
namespace RPG::GameCore { class TickLodDetail; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_058D00D89A65E2AD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xACAF1B0)
#define CLASS_1_058D00D89A65E2AD_GET_BOUNDSOCCLUDERFORJOB_OFFSET UNITYSDK_OFFSET(0xACB0700)
#define CLASS_1_058D00D89A65E2AD_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xACB0270)
#define CLASS_1_058D00D89A65E2AD_METHOD_1_283DA224BE06DA9F_OFFSET UNITYSDK_OFFSET(0xACAEF50)
#define CLASS_1_058D00D89A65E2AD_METHOD_1_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0xACAEBC0)
#define CLASS_1_058D00D89A65E2AD_METHOD_1_34D5F4DBE622AF88_OFFSET UNITYSDK_OFFSET(0xACAFA50)
#define CLASS_1_058D00D89A65E2AD_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xACAF770)
#define CLASS_1_058D00D89A65E2AD_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xACAFC30)
#define CLASS_1_058D00D89A65E2AD_METHOD_1_51BBA01F511E6107_OFFSET UNITYSDK_OFFSET(0xACAEEE0)
#define CLASS_1_058D00D89A65E2AD_METHOD_1_675E72063D0468DD_OFFSET UNITYSDK_OFFSET(0xACAF9C0)
#define CLASS_1_058D00D89A65E2AD_METHOD_1_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0xACAF5F0)
#define CLASS_1_058D00D89A65E2AD_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xACAF430)
#define CLASS_1_058D00D89A65E2AD_METHOD_1_BCA70528F851BD98_OFFSET UNITYSDK_OFFSET(0xACB0300)
#define CLASS_1_058D00D89A65E2AD_METHOD_1_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0xACAF4E0)
#define CLASS_1_058D00D89A65E2AD_METHOD_1_D14D1C669EDC2D6B_OFFSET UNITYSDK_OFFSET(0xACAFD60)
#define CLASS_1_058D00D89A65E2AD_METHOD_1_D6C70BB30FD1FF7C_OFFSET UNITYSDK_OFFSET(0xACB05C0)
#define CLASS_1_058D00D89A65E2AD_METHOD_1_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0xACAFD10)
#define CLASS_1_058D00D89A65E2AD_SET_BOUNDSOCCLUDERFORJOB_OFFSET UNITYSDK_OFFSET(0xACB0710)
#define CLASS_1_058D00D89A65E2AD__CCTOR_OFFSET UNITYSDK_OFFSET(0xACB0720)
#define CLASS_1_058D00D89A65E2AD__CTOR_OFFSET UNITYSDK_OFFSET(0xACAE930)

inline static constexpr unsigned int Class_1_058D00D89A65E2AD_TypeDefinitionIndex = 45532;

class Class_1_058D00D89A65E2AD : public ::System::Object
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_23()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_058D00D89A65E2AD_TypeDefinitionIndex)->GetStaticField(0xBA30);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_25()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_058D00D89A65E2AD_TypeDefinitionIndex)->GetStaticField(0xBA38);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_27()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_058D00D89A65E2AD_TypeDefinitionIndex)->GetStaticField(0xBA40);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_26()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_058D00D89A65E2AD_TypeDefinitionIndex)->GetStaticField(0xBA48);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>** StaticGet_Field_1_8()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_058D00D89A65E2AD_TypeDefinitionIndex)->GetStaticField(0xBA50);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_24()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_058D00D89A65E2AD_TypeDefinitionIndex)->GetStaticField(0xBA58);
	}
	static ::System::Boolean* StaticGet_Field_1_6()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_058D00D89A65E2AD_TypeDefinitionIndex)->GetStaticField(0x4160);
	}
	static ::System::Boolean* StaticGet_Field_1_12()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_058D00D89A65E2AD_TypeDefinitionIndex)->GetStaticField(0x4161);
	}
	// static const ::System::UInt32 Field_1_0 = 0x1; // 0x0
	// static const ::System::UInt32 Field_1_1 = 0x2; // 0x0
	// static const ::System::UInt32 Field_1_2 = 0x4; // 0x0
	// static const ::System::UInt32 Field_1_3 = 0x8; // 0x0
	// static const ::System::UInt32 Field_1_4 = 0x20; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x64; // 0x0
	// static const ::System::Single Field_1_7; // 0x0
	// static const ::System::String* Field_1_15; // 0x0
	::Class_1_D2B8D50DD9833CFC* _BoundsOccluderForJob_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::Class_1_27D9C028BDC40E5D*>* Field_1_18; // 0x18
	::System::Collections::Generic::List_1<::Class_1_27D9C028BDC40E5D*>* Field_1_16; // 0x20
	::Class_2_81A4CCAF8860A4C5* Field_1_22; // 0x28
	::System::Collections::Generic::List_1<::Class_1_27D9C028BDC40E5D*>* Field_1_17; // 0x30
	::RPG::GameCore::TickLodConfig* Field_1_13; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_494BD190B553B399*>* Field_1_14; // 0x40
	::System::Nullable_1<::Unity::Jobs::JobHandle> Field_1_19; // 0x48
	::System::Boolean Field_1_9; // 0x60
	::System::Boolean Field_1_11; // 0x61
	::System::Boolean Field_1_21; // 0x62
	::Struct_2_639D4030F98AB624 Field_1_20; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_058D00D89A65E2AD__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_058D00D89A65E2AD__CCTOR_OFFSET))();
	}

	::System::Void Method_1_51BBA01F511E6107()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_058D00D89A65E2AD_METHOD_1_51BBA01F511E6107_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_058D00D89A65E2AD_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_058D00D89A65E2AD_METHOD_1_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Void Method_1_79830F666EE579C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_058D00D89A65E2AD_METHOD_1_79830F666EE579C0_OFFSET))(this);
	}

	::System::Void Method_1_675E72063D0468DD(::Class_1_27D9C028BDC40E5D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_27D9C028BDC40E5D*))((::PBYTE)hIl2Cpp + CLASS_1_058D00D89A65E2AD_METHOD_1_675E72063D0468DD_OFFSET))(this, a1);
	}

	::System::Void Method_1_34D5F4DBE622AF88(::Class_1_27D9C028BDC40E5D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_27D9C028BDC40E5D*))((::PBYTE)hIl2Cpp + CLASS_1_058D00D89A65E2AD_METHOD_1_34D5F4DBE622AF88_OFFSET))(this, a1);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_058D00D89A65E2AD_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_058D00D89A65E2AD_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_058D00D89A65E2AD_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_1_D14D1C669EDC2D6B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_058D00D89A65E2AD_METHOD_1_D14D1C669EDC2D6B_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_058D00D89A65E2AD_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::RPG::GameCore::TickLodDetail* Method_1_BCA70528F851BD98(::System::String* a1, ::System::Single a2)
	{
		return ((::RPG::GameCore::TickLodDetail*(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_058D00D89A65E2AD_METHOD_1_BCA70528F851BD98_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D6C70BB30FD1FF7C(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_058D00D89A65E2AD_METHOD_1_D6C70BB30FD1FF7C_OFFSET))(this, a1);
	}

	::System::Void Method_1_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_058D00D89A65E2AD_METHOD_1_F5447CD65612575D_OFFSET))(this);
	}

	::System::Void Method_1_283DA224BE06DA9F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_058D00D89A65E2AD_METHOD_1_283DA224BE06DA9F_OFFSET))(this);
	}

	::System::Void Method_1_28EB11670A8E5A86()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_058D00D89A65E2AD_METHOD_1_28EB11670A8E5A86_OFFSET))(this);
	}

	::Class_1_D2B8D50DD9833CFC* get_BoundsOccluderForJob()
	{
		return ((::Class_1_D2B8D50DD9833CFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_058D00D89A65E2AD_GET_BOUNDSOCCLUDERFORJOB_OFFSET))(this);
	}

	::System::Void set_BoundsOccluderForJob(::Class_1_D2B8D50DD9833CFC* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D2B8D50DD9833CFC*))((::PBYTE)hIl2Cpp + CLASS_1_058D00D89A65E2AD_SET_BOUNDSOCCLUDERFORJOB_OFFSET))(this, value);
	}
};
