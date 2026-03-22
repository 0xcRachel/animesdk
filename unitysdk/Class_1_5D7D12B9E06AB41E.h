#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5D7D12B9E06AB41E_StopReason.h"
#include "unitysdk/Class_1_5D7D12B9E06AB41E_TravelState.h"
#include "unitysdk/RPG/GameCore/EntityLodTemplateName.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_5D7D12B9E06AB41E_Class_3_95F370961AEDDA1E;
namespace BansheeGz::BGSpline::Components { class BGCcMath; }
namespace BansheeGz::BGSpline::Curve { class BGCurve; }
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class MonoCityTrain; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class ConfigCityTrain; }
namespace RPG::GameCore { class LodTemplate; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class BoxCollider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class ObjectInstantiateRequest; }

#define CLASS_1_5D7D12B9E06AB41E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11148F10)
#define CLASS_1_5D7D12B9E06AB41E_METHOD_1_0712E145E7F0DE18_OFFSET UNITYSDK_OFFSET(0x1114C2A0)
#define CLASS_1_5D7D12B9E06AB41E_METHOD_1_0D5375C87D863D2A_OFFSET UNITYSDK_OFFSET(0x11149350)
#define CLASS_1_5D7D12B9E06AB41E_METHOD_1_151E25A63D14DDB0_1_OFFSET UNITYSDK_OFFSET(0x1114A230)
#define CLASS_1_5D7D12B9E06AB41E_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x11149640)
#define CLASS_1_5D7D12B9E06AB41E_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x1114D6F0)
#define CLASS_1_5D7D12B9E06AB41E_METHOD_1_2898E3EC91BCF259_OFFSET UNITYSDK_OFFSET(0x1114B060)
#define CLASS_1_5D7D12B9E06AB41E_METHOD_1_289F28027FF47717_1_OFFSET UNITYSDK_OFFSET(0x111495A0)
#define CLASS_1_5D7D12B9E06AB41E_METHOD_1_289F28027FF47717_2_OFFSET UNITYSDK_OFFSET(0x1114C750)
#define CLASS_1_5D7D12B9E06AB41E_METHOD_1_289F28027FF47717_3_OFFSET UNITYSDK_OFFSET(0x1114C220)
#define CLASS_1_5D7D12B9E06AB41E_METHOD_1_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0x111494C0)
#define CLASS_1_5D7D12B9E06AB41E_METHOD_1_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x11149950)
#define CLASS_1_5D7D12B9E06AB41E_METHOD_1_2B92BBB23D0FE690_OFFSET UNITYSDK_OFFSET(0x1114A7D0)
#define CLASS_1_5D7D12B9E06AB41E_METHOD_1_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0x1114D5C0)
#define CLASS_1_5D7D12B9E06AB41E_METHOD_1_39590AB2089F9F4D_OFFSET UNITYSDK_OFFSET(0x11149C70)
#define CLASS_1_5D7D12B9E06AB41E_METHOD_1_39A9FE040505BFA5_OFFSET UNITYSDK_OFFSET(0x1114BE90)
#define CLASS_1_5D7D12B9E06AB41E_METHOD_1_3D04ABD7A1127841_OFFSET UNITYSDK_OFFSET(0x1114C500)
#define CLASS_1_5D7D12B9E06AB41E_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1114AFE0)
#define CLASS_1_5D7D12B9E06AB41E_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0x11149720)
#define CLASS_1_5D7D12B9E06AB41E_METHOD_1_4C514722B3933D5D_OFFSET UNITYSDK_OFFSET(0x1114D760)
#define CLASS_1_5D7D12B9E06AB41E_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x1114D7D0)
#define CLASS_1_5D7D12B9E06AB41E_METHOD_1_57F015DFC718ABA3_OFFSET UNITYSDK_OFFSET(0x1114BA20)
#define CLASS_1_5D7D12B9E06AB41E_METHOD_1_581A0DBA7E94E916_OFFSET UNITYSDK_OFFSET(0x1114CF00)
#define CLASS_1_5D7D12B9E06AB41E_METHOD_1_5AB47D2936D3FF40_OFFSET UNITYSDK_OFFSET(0x11149D60)
#define CLASS_1_5D7D12B9E06AB41E_METHOD_1_5B94350BBAC6A35E_OFFSET UNITYSDK_OFFSET(0x1114C170)
#define CLASS_1_5D7D12B9E06AB41E_METHOD_1_5C549BF7442375BC_OFFSET UNITYSDK_OFFSET(0x1114D620)
#define CLASS_1_5D7D12B9E06AB41E_METHOD_1_5EAB2C5E0D76A6B7_OFFSET UNITYSDK_OFFSET(0x1114A530)
#define CLASS_1_5D7D12B9E06AB41E_METHOD_1_69647F4A1A5CADD6_OFFSET UNITYSDK_OFFSET(0x1114CC00)
#define CLASS_1_5D7D12B9E06AB41E_METHOD_1_7227906EBBC1E884_OFFSET UNITYSDK_OFFSET(0x11149F70)
#define CLASS_1_5D7D12B9E06AB41E_METHOD_1_912FCE91274F9E91_OFFSET UNITYSDK_OFFSET(0x1114B2A0)
#define CLASS_1_5D7D12B9E06AB41E_METHOD_1_92ED16ECBAFB45C4_OFFSET UNITYSDK_OFFSET(0x11149300)
#define CLASS_1_5D7D12B9E06AB41E_METHOD_1_95CBA07394A84492_OFFSET UNITYSDK_OFFSET(0x111491A0)
#define CLASS_1_5D7D12B9E06AB41E_METHOD_1_967B758F81D642AF_1_OFFSET UNITYSDK_OFFSET(0x1114CB30)
#define CLASS_1_5D7D12B9E06AB41E_METHOD_1_967B758F81D642AF_OFFSET UNITYSDK_OFFSET(0x1114C7E0)
#define CLASS_1_5D7D12B9E06AB41E_METHOD_1_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x1114C330)
#define CLASS_1_5D7D12B9E06AB41E_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1114BE10)
#define CLASS_1_5D7D12B9E06AB41E_METHOD_1_B9A97467188E4B69_OFFSET UNITYSDK_OFFSET(0x1114BD50)
#define CLASS_1_5D7D12B9E06AB41E_METHOD_1_C254C0F8BAAF596E_OFFSET UNITYSDK_OFFSET(0x1114C920)
#define CLASS_1_5D7D12B9E06AB41E_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1114C8B0)
#define CLASS_1_5D7D12B9E06AB41E_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11149550)
#define CLASS_1_5D7D12B9E06AB41E_METHOD_1_D4975DF907B2431F_OFFSET UNITYSDK_OFFSET(0x111497A0)
#define CLASS_1_5D7D12B9E06AB41E_METHOD_1_DA92A6D4B0CCB4D9_1_OFFSET UNITYSDK_OFFSET(0x1114A660)
#define CLASS_1_5D7D12B9E06AB41E_METHOD_1_DA92A6D4B0CCB4D9_OFFSET UNITYSDK_OFFSET(0x1114A370)
#define CLASS_1_5D7D12B9E06AB41E_METHOD_1_DD784213055292FB_1_OFFSET UNITYSDK_OFFSET(0x11149290)
#define CLASS_1_5D7D12B9E06AB41E_METHOD_1_DD784213055292FB_OFFSET UNITYSDK_OFFSET(0x11149220)
#define CLASS_1_5D7D12B9E06AB41E_METHOD_1_E6EAED99E649CAAD_OFFSET UNITYSDK_OFFSET(0x1114ACA0)
#define CLASS_1_5D7D12B9E06AB41E_METHOD_1_FA61996746A43D4E_OFFSET UNITYSDK_OFFSET(0x1114A9B0)
#define CLASS_1_5D7D12B9E06AB41E__CCTOR_OFFSET UNITYSDK_OFFSET(0x1114D7E0)
#define CLASS_1_5D7D12B9E06AB41E__CTOR_OFFSET UNITYSDK_OFFSET(0x11148DE0)

inline static constexpr unsigned int Class_1_5D7D12B9E06AB41E_TypeDefinitionIndex = 54959;

class Class_1_5D7D12B9E06AB41E : public ::System::Object
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_1_54()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5D7D12B9E06AB41E_TypeDefinitionIndex)->GetStaticField(0x43210);
	}
	// static const ::System::Int32 Field_1_5 = 0xA; // 0x0
	// static const ::System::Single Field_1_10; // 0x0
	// static const ::System::Single Field_1_16; // 0x0
	// static const ::System::String* Field_1_18; // 0x0
	// static const ::System::String* Field_1_19; // 0x0
	// static const ::System::Single Field_1_20; // 0x0
	// static const ::System::String* Field_1_21; // 0x0
	::RPG::GameCore::ConfigCityTrain* Field_1_29; // 0x10
	::UnityEngine::GameObject* Field_1_31; // 0x18
	::System::String* Field_1_46; // 0x20
	::UnityEngine::GameObject* Field_1_32; // 0x28
	::System::Collections::Generic::List_1<::RPG::Client::IAssetOperation*>* Field_1_23; // 0x30
	::System::String* Field_1_30; // 0x38
	::RPG::GameCore::LodTemplate* Field_1_15; // 0x40
	::BansheeGz::BGSpline::Curve::BGCurve* Field_1_33; // 0x48
	::System::Collections::Generic::List_1<::UnityEngine::Object*>* Field_1_26; // 0x50
	::BansheeGz::BGSpline::Components::BGCcMath* Field_1_34; // 0x58
	::UnityEngine::BoxCollider* Field_1_22; // 0x60
	::System::Collections::Generic::List_1<::UnityEngine::ObjectInstantiateRequest*>* Field_1_24; // 0x68
	::RPG::Client::MonoCityTrain* Field_1_25; // 0x70
	::System::Single Field_1_37; // 0x78
	::System::Single Field_1_39; // 0x7C
	::System::Single Field_1_41; // 0x80
	::Class_1_5D7D12B9E06AB41E_StopReason Field_1_47; // 0x84
	::System::Int32 Field_1_13; // 0x88
	::System::Single Field_1_7; // 0x8C
	::System::Single Field_1_38; // 0x90
	::System::Single Field_1_35; // 0x94
	::System::Single Field_1_43; // 0x98
	::System::Single Field_1_45; // 0x9C
	::System::Single Field_1_42; // 0xA0
	::System::Boolean Field_1_28; // 0xA4
	::System::Boolean Field_1_0; // 0xA5
	::System::Boolean Field_1_6; // 0xA6
	::System::Boolean Field_1_27; // 0xA7
	::RPG::GameCore::EntityLodTemplateName Field_1_14; // 0xA8
	::System::Single Field_1_36; // 0xAC
	::System::Single Field_1_48; // 0xB0
	::System::Single Field_1_49; // 0xB4
	::System::Single Field_1_8; // 0xB8
	::System::Int32 Field_1_12; // 0xBC
	::System::Single Field_1_52; // 0xC0
	::System::Single Field_1_1; // 0xC4
	::System::Single Field_1_17; // 0xC8
	::System::Single Field_1_9; // 0xCC
	::System::Single Field_1_2; // 0xD0
	::System::Single Field_1_50; // 0xD4
	::Class_1_5D7D12B9E06AB41E_TravelState Field_1_40; // 0xD8
	::System::Single Field_1_44; // 0xDC
	::System::Boolean Field_1_3; // 0xE0
	::System::Boolean Field_1_53; // 0xE1
	::System::Boolean Field_1_11; // 0xE2
	::System::Boolean Field_1_51; // 0xE3
	::System::Int32 Field_1_4; // 0xE4

	::System::Void _ctor(::System::String* a1, ::RPG::GameCore::ConfigCityTrain* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::ConfigCityTrain*))((::PBYTE)hIl2Cpp + CLASS_1_5D7D12B9E06AB41E__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5D7D12B9E06AB41E__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D7D12B9E06AB41E_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_95CBA07394A84492(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5D7D12B9E06AB41E_METHOD_1_95CBA07394A84492_OFFSET))(this, a1);
	}

	::System::Void Method_1_DD784213055292FB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D7D12B9E06AB41E_METHOD_1_DD784213055292FB_OFFSET))(this);
	}

	::System::Void Method_1_DD784213055292FB_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D7D12B9E06AB41E_METHOD_1_DD784213055292FB_1_OFFSET))(this);
	}

	::System::Void Method_1_92ED16ECBAFB45C4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D7D12B9E06AB41E_METHOD_1_92ED16ECBAFB45C4_OFFSET))(this);
	}

	::System::Void Method_1_289F28027FF47717()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D7D12B9E06AB41E_METHOD_1_289F28027FF47717_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D7D12B9E06AB41E_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_289F28027FF47717_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D7D12B9E06AB41E_METHOD_1_289F28027FF47717_1_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D7D12B9E06AB41E_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5D7D12B9E06AB41E_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_1_28EB11670A8E5A86()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D7D12B9E06AB41E_METHOD_1_28EB11670A8E5A86_OFFSET))(this);
	}

	::System::Void Method_1_D4975DF907B2431F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5D7D12B9E06AB41E_METHOD_1_D4975DF907B2431F_OFFSET))(this, a1);
	}

	::System::Void Method_1_151E25A63D14DDB0_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D7D12B9E06AB41E_METHOD_1_151E25A63D14DDB0_1_OFFSET))(this);
	}

	::System::Void Method_1_DA92A6D4B0CCB4D9(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5D7D12B9E06AB41E_METHOD_1_DA92A6D4B0CCB4D9_OFFSET))(this, a1);
	}

	::System::Void Method_1_5EAB2C5E0D76A6B7(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5D7D12B9E06AB41E_METHOD_1_5EAB2C5E0D76A6B7_OFFSET))(this, a1);
	}

	::System::Void Method_1_DA92A6D4B0CCB4D9_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5D7D12B9E06AB41E_METHOD_1_DA92A6D4B0CCB4D9_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_2B92BBB23D0FE690(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5D7D12B9E06AB41E_METHOD_1_2B92BBB23D0FE690_OFFSET))(this, a1);
	}

	::System::Void Method_1_FA61996746A43D4E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5D7D12B9E06AB41E_METHOD_1_FA61996746A43D4E_OFFSET))(this, a1);
	}

	::System::Void Method_1_E6EAED99E649CAAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5D7D12B9E06AB41E_METHOD_1_E6EAED99E649CAAD_OFFSET))(this, a1);
	}

	::System::Void Method_1_912FCE91274F9E91(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5D7D12B9E06AB41E_METHOD_1_912FCE91274F9E91_OFFSET))(this, a1);
	}

	::System::Void Method_1_0712E145E7F0DE18(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5D7D12B9E06AB41E_METHOD_1_0712E145E7F0DE18_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3D04ABD7A1127841(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5D7D12B9E06AB41E_METHOD_1_3D04ABD7A1127841_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_57F015DFC718ABA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D7D12B9E06AB41E_METHOD_1_57F015DFC718ABA3_OFFSET))(this);
	}

	::System::Void Method_1_289F28027FF47717_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D7D12B9E06AB41E_METHOD_1_289F28027FF47717_2_OFFSET))(this);
	}

	::System::Void Method_1_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D7D12B9E06AB41E_METHOD_1_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::Void Method_1_289F28027FF47717_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D7D12B9E06AB41E_METHOD_1_289F28027FF47717_3_OFFSET))(this);
	}

	::System::Void Method_1_5AB47D2936D3FF40(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_5D7D12B9E06AB41E_METHOD_1_5AB47D2936D3FF40_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0D5375C87D863D2A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D7D12B9E06AB41E_METHOD_1_0D5375C87D863D2A_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D7D12B9E06AB41E_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_967B758F81D642AF()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D7D12B9E06AB41E_METHOD_1_967B758F81D642AF_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_967B758F81D642AF_1()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D7D12B9E06AB41E_METHOD_1_967B758F81D642AF_1_OFFSET))(this);
	}

	::System::Void Method_1_69647F4A1A5CADD6(::UnityEngine::GameObject* a1, ::RPG::Client::Promises::Promise* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + CLASS_1_5D7D12B9E06AB41E_METHOD_1_69647F4A1A5CADD6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_581A0DBA7E94E916(::UnityEngine::GameObject* a1, ::RPG::Client::Promises::Promise* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + CLASS_1_5D7D12B9E06AB41E_METHOD_1_581A0DBA7E94E916_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C254C0F8BAAF596E(::System::String* a1, ::Class_1_5D7D12B9E06AB41E_Class_3_95F370961AEDDA1E* a2, ::RPG::Client::Promises::Promise* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_5D7D12B9E06AB41E_Class_3_95F370961AEDDA1E*, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + CLASS_1_5D7D12B9E06AB41E_METHOD_1_C254C0F8BAAF596E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B9A97467188E4B69()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D7D12B9E06AB41E_METHOD_1_B9A97467188E4B69_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D7D12B9E06AB41E_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D7D12B9E06AB41E_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Boolean Method_1_39A9FE040505BFA5()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D7D12B9E06AB41E_METHOD_1_39A9FE040505BFA5_OFFSET))(this);
	}

	::System::Void Method_1_5B94350BBAC6A35E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5D7D12B9E06AB41E_METHOD_1_5B94350BBAC6A35E_OFFSET))(this, a1);
	}

	::System::Void Method_1_2C95AFAD0256302F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D7D12B9E06AB41E_METHOD_1_2C95AFAD0256302F_OFFSET))(this);
	}

	::System::Void Method_1_2898E3EC91BCF259(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5D7D12B9E06AB41E_METHOD_1_2898E3EC91BCF259_OFFSET))(this, a1);
	}

	::System::Void Method_1_5C549BF7442375BC(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5D7D12B9E06AB41E_METHOD_1_5C549BF7442375BC_OFFSET))(this, a1);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5D7D12B9E06AB41E_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_7227906EBBC1E884(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5D7D12B9E06AB41E_METHOD_1_7227906EBBC1E884_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_4C514722B3933D5D(::System::Single a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5D7D12B9E06AB41E_METHOD_1_4C514722B3933D5D_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D7D12B9E06AB41E_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_1_39590AB2089F9F4D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5D7D12B9E06AB41E_METHOD_1_39590AB2089F9F4D_OFFSET))(this, a1);
	}
};
