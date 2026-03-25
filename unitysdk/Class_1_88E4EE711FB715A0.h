#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_74D97E08BFF70A55.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_247;
class Class_1_423695772F3F2AA9;
class Class_1_7A49742D2EA44155;
class Class_1_813BC3EDB3CAACE9;
class Class_1_DCE8F52BF27202F5;
class Class_1_DE4C6B309308A230;
class Class_2_7F4574E2AA5F0809;
class Class_2_8B3E44A52CD80E24;
namespace RPG::Client { class Stage; }
namespace RPG::Client::OpenWorld { class Volume; }
namespace RPG::Client::OpenWorld { template <typename T> class VolumeComponentTransition_1; }
namespace RPG::GameCore { class StageVolumeComponentData; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_88E4EE711FB715A0_GET_BLOCKCOMPONENTTYPES_OFFSET UNITYSDK_OFFSET(0x118619C0)
#define CLASS_1_88E4EE711FB715A0_GET_GLOBALCOMPONENTTYPES_OFFSET UNITYSDK_OFFSET(0x118619A0)
#define CLASS_1_88E4EE711FB715A0_GET__ALLSOURCEPROXY_OFFSET UNITYSDK_OFFSET(0x11861A00)
#define CLASS_1_88E4EE711FB715A0_GET__ALLSOURCESTACK_OFFSET UNITYSDK_OFFSET(0x118619E0)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x11861D20)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_19B91D58E02869BC_OFFSET UNITYSDK_OFFSET(0x11860680)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x1185FDE0)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1185FD80)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_3C2E750B4D78DF48_OFFSET UNITYSDK_OFFSET(0x1185FE40)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_479EC4AC07D4AC25_OFFSET UNITYSDK_OFFSET(0x11866190)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_496D299FBEED85FF_OFFSET UNITYSDK_OFFSET(0x118631D0)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_4A9A016DED73BF7C_OFFSET UNITYSDK_OFFSET(0x11864A90)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_4D395DE7080248C4_OFFSET UNITYSDK_OFFSET(0x118603D0)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_4F6E40C18A7A5A9E_OFFSET UNITYSDK_OFFSET(0x11860920)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_5176DC743E478510_OFFSET UNITYSDK_OFFSET(0x11861630)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_5C35C5A2AED42591_OFFSET UNITYSDK_OFFSET(0x11863B00)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_601EF3E7226D7DC2_OFFSET UNITYSDK_OFFSET(0x11862D00)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_631361B5F0734C5E_OFFSET UNITYSDK_OFFSET(0x11865A60)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_655DDB722F1FDE73_OFFSET UNITYSDK_OFFSET(0x11861EC0)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_6F73A40265D5B980_OFFSET UNITYSDK_OFFSET(0x11861A20)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_75E10C86775D877F_OFFSET UNITYSDK_OFFSET(0x1185F180)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_780147B637D00196_OFFSET UNITYSDK_OFFSET(0x1185F6A0)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_7E9AC3FFDA4606D5_1_OFFSET UNITYSDK_OFFSET(0x11863010)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_7E9AC3FFDA4606D5_OFFSET UNITYSDK_OFFSET(0x11862910)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_7F7437D824ED763B_OFFSET UNITYSDK_OFFSET(0x11865FE0)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_97D0AD0D877DE9D8_OFFSET UNITYSDK_OFFSET(0x11860D30)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x11865EF0)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0x11860CD0)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_AECF8BEC293ED42A_OFFSET UNITYSDK_OFFSET(0x118602C0)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_B20B564596DB48F3_OFFSET UNITYSDK_OFFSET(0x1185FF60)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_C1D3BDE2A17F5C9D_OFFSET UNITYSDK_OFFSET(0x11865080)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_C50A2293958CA940_OFFSET UNITYSDK_OFFSET(0x118612A0)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_C561FF611C07A44C_1_OFFSET UNITYSDK_OFFSET(0x1185FC40)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x1185FBA0)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_C7BF9C1E6A78DCAB_OFFSET UNITYSDK_OFFSET(0x11862980)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_CB741CCB6B42AFF1_OFFSET UNITYSDK_OFFSET(0x11863990)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_CE63D88F1A046706_OFFSET UNITYSDK_OFFSET(0x1185FCE0)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_CEF2F84573427F6B_OFFSET UNITYSDK_OFFSET(0x11863A70)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_D729F7CA1F78F5C7_OFFSET UNITYSDK_OFFSET(0x11863140)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_DAF13E2DDF8F15E7_OFFSET UNITYSDK_OFFSET(0x11862CA0)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_E0129C47613F76F3_OFFSET UNITYSDK_OFFSET(0x11863080)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_E9CE03A2B3A2944C_OFFSET UNITYSDK_OFFSET(0x11863380)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_FC5801AF2938436E_OFFSET UNITYSDK_OFFSET(0x1185E300)
#define CLASS_1_88E4EE711FB715A0_SET_BLOCKCOMPONENTTYPES_OFFSET UNITYSDK_OFFSET(0x118619D0)
#define CLASS_1_88E4EE711FB715A0_SET_GLOBALCOMPONENTTYPES_OFFSET UNITYSDK_OFFSET(0x118619B0)
#define CLASS_1_88E4EE711FB715A0_SET__ALLSOURCEPROXY_OFFSET UNITYSDK_OFFSET(0x11861A10)
#define CLASS_1_88E4EE711FB715A0_SET__ALLSOURCESTACK_OFFSET UNITYSDK_OFFSET(0x118619F0)
#define CLASS_1_88E4EE711FB715A0__CCTOR_OFFSET UNITYSDK_OFFSET(0x11866320)
#define CLASS_1_88E4EE711FB715A0__CTOR_OFFSET UNITYSDK_OFFSET(0x11861320)

inline static constexpr unsigned int Class_1_88E4EE711FB715A0_TypeDefinitionIndex = 60661;

class Class_1_88E4EE711FB715A0 : public ::System::Object
{
public:
	static ::Class_1_88E4EE711FB715A0** StaticGet_Field_1_17()
	{
		return (::Class_1_88E4EE711FB715A0**)Il2CppClass::FromTypeDefinitionIndex(Class_1_88E4EE711FB715A0_TypeDefinitionIndex)->GetStaticField(0x46EE0);
	}
	static ::System::Collections::Generic::List_1<::Class_1_DCE8F52BF27202F5*>** StaticGet_Field_1_28()
	{
		return (::System::Collections::Generic::List_1<::Class_1_DCE8F52BF27202F5*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_88E4EE711FB715A0_TypeDefinitionIndex)->GetStaticField(0x46EE8);
	}
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_7; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_12; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* Field_1_15; // 0x20
	::Class_2_8B3E44A52CD80E24* Field_1_6; // 0x28
	::System::Collections::Generic::List_1<::Class_1_7A49742D2EA44155*>* Field_1_1; // 0x30
	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::Volume*>* Field_1_20; // 0x38
	::Class_1_DCE8F52BF27202F5* __AllSourceStack_k__BackingField; // 0x40
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_1_423695772F3F2AA9*>*>* Field_1_9; // 0x48
	::System::Collections::Generic::IEnumerable_1<::System::Type*>* _BlockComponentTypes_k__BackingField; // 0x50
	::System::Collections::Generic::IEnumerable_1<::System::Type*>* _GlobalComponentTypes_k__BackingField; // 0x58
	::System::Collections::Generic::List_1<::Class_1_813BC3EDB3CAACE9*>* Field_1_13; // 0x60
	::System::Collections::Generic::List_1<::Class_1_423695772F3F2AA9*>* Field_1_8; // 0x68
	::System::Collections::Generic::List_1<::Class_1_423695772F3F2AA9*>* Field_1_22; // 0x70
	::Class_1_813BC3EDB3CAACE9* Field_1_25; // 0x78
	::Class_1_DCE8F52BF27202F5* __AllSourceProxy_k__BackingField; // 0x80
	::Class_1_DE4C6B309308A230* Field_1_16; // 0x88
	::Class_2_7F4574E2AA5F0809* Field_1_5; // 0x90
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_1_14; // 0x98
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_813BC3EDB3CAACE9*>* Field_1_26; // 0xA0
	::System::Collections::Generic::List_1<::Class_1_423695772F3F2AA9*>* Field_1_21; // 0xA8
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_7A49742D2EA44155*>* Field_1_0; // 0xB0
	::System::Collections::Generic::List_1<::System::Boolean>* Field_1_11; // 0xB8
	::System::Collections::Generic::List_1<::Class_1_DCE8F52BF27202F5*>* Field_1_10; // 0xC0
	::System::Boolean Field_1_2; // 0xC8
	::System::Boolean Field_1_27; // 0xC9
	::System::Boolean Field_1_4; // 0xCA
	::System::Boolean Field_1_3; // 0xCB

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0__CCTOR_OFFSET))();
	}

	::System::Void Method_1_FC5801AF2938436E(::RPG::Client::OpenWorld::Volume* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::Volume*))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_FC5801AF2938436E_OFFSET))(this, a1);
	}

	::System::Void Method_1_75E10C86775D877F(::System::String* a1, ::RPG::Client::Stage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::Stage*))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_75E10C86775D877F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_780147B637D00196(::System::String* a1, ::RPG::Client::Stage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::Stage*))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_780147B637D00196_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_C561FF611C07A44C_OFFSET))(this);
	}

	::System::Void Method_1_C561FF611C07A44C_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_C561FF611C07A44C_1_OFFSET))(this);
	}

	::System::Void Method_1_CE63D88F1A046706(::System::Int32 a1, ::Struct_2_74D97E08BFF70A55& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Struct_2_74D97E08BFF70A55&))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_CE63D88F1A046706_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Void Method_1_3C2E750B4D78DF48(::Class_0_16E4307DCC419505_247* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_247*))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_3C2E750B4D78DF48_OFFSET))(this, a1);
	}

	::System::Void Method_1_B20B564596DB48F3(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_B20B564596DB48F3_OFFSET))(this, a1);
	}

	::System::Void Method_1_19B91D58E02869BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_19B91D58E02869BC_OFFSET))(this);
	}

	::System::Void Method_1_4F6E40C18A7A5A9E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_4F6E40C18A7A5A9E_OFFSET))(this);
	}

	::System::Void Method_1_97D0AD0D877DE9D8(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_97D0AD0D877DE9D8_OFFSET))(this, a1);
	}

	::System::Void Method_1_C50A2293958CA940(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_C50A2293958CA940_OFFSET))(this, a1);
	}

	static ::Class_1_88E4EE711FB715A0* Method_1_AECF8BEC293ED42A()
	{
		return ((::Class_1_88E4EE711FB715A0*(*)())((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_AECF8BEC293ED42A_OFFSET))();
	}

	::System::Collections::Generic::IEnumerable_1<::System::Type*>* get_GlobalComponentTypes()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_GET_GLOBALCOMPONENTTYPES_OFFSET))(this);
	}

	::System::Void set_GlobalComponentTypes(::System::Collections::Generic::IEnumerable_1<::System::Type*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Type*>*))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_SET_GLOBALCOMPONENTTYPES_OFFSET))(this, value);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Type*>* get_BlockComponentTypes()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_GET_BLOCKCOMPONENTTYPES_OFFSET))(this);
	}

	::System::Void set_BlockComponentTypes(::System::Collections::Generic::IEnumerable_1<::System::Type*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Type*>*))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_SET_BLOCKCOMPONENTTYPES_OFFSET))(this, value);
	}

	::Class_1_DCE8F52BF27202F5* get__AllSourceStack()
	{
		return ((::Class_1_DCE8F52BF27202F5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_GET__ALLSOURCESTACK_OFFSET))(this);
	}

	::System::Void set__AllSourceStack(::Class_1_DCE8F52BF27202F5* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DCE8F52BF27202F5*))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_SET__ALLSOURCESTACK_OFFSET))(this, value);
	}

	::Class_1_DCE8F52BF27202F5* get__AllSourceProxy()
	{
		return ((::Class_1_DCE8F52BF27202F5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_GET__ALLSOURCEPROXY_OFFSET))(this);
	}

	::System::Void set__AllSourceProxy(::Class_1_DCE8F52BF27202F5* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DCE8F52BF27202F5*))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_SET__ALLSOURCEPROXY_OFFSET))(this, value);
	}

	::Class_1_DCE8F52BF27202F5* Method_1_9B39F7D7C1FF70D6()
	{
		return ((::Class_1_DCE8F52BF27202F5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_9B39F7D7C1FF70D6_OFFSET))(this);
	}

	::System::Void Method_1_6F73A40265D5B980()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_6F73A40265D5B980_OFFSET))(this);
	}

	::System::Void Method_1_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_1_5176DC743E478510()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_5176DC743E478510_OFFSET))(this);
	}

	::System::Void Method_1_C7BF9C1E6A78DCAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_C7BF9C1E6A78DCAB_OFFSET))(this);
	}

	::System::Void Method_1_601EF3E7226D7DC2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_601EF3E7226D7DC2_OFFSET))(this);
	}

	::Class_1_DCE8F52BF27202F5* Method_1_7E9AC3FFDA4606D5()
	{
		return ((::Class_1_DCE8F52BF27202F5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_7E9AC3FFDA4606D5_OFFSET))(this);
	}

	::Class_1_DCE8F52BF27202F5* Method_1_7E9AC3FFDA4606D5_1()
	{
		return ((::Class_1_DCE8F52BF27202F5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_7E9AC3FFDA4606D5_1_OFFSET))(this);
	}

	::Class_1_423695772F3F2AA9* Method_1_E0129C47613F76F3(::System::Type* a1, ::RPG::GameCore::StageVolumeComponentData* a2)
	{
		return ((::Class_1_423695772F3F2AA9*(*)(::PVOID, ::System::Type*, ::RPG::GameCore::StageVolumeComponentData*))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_E0129C47613F76F3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DAF13E2DDF8F15E7(::Class_1_DCE8F52BF27202F5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DCE8F52BF27202F5*))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_DAF13E2DDF8F15E7_OFFSET))(this, a1);
	}

	::System::Void Method_1_655DDB722F1FDE73()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_655DDB722F1FDE73_OFFSET))(this);
	}

	::System::Void Method_1_D729F7CA1F78F5C7(::RPG::Client::OpenWorld::Volume* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::Volume*))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_D729F7CA1F78F5C7_OFFSET))(this, a1);
	}

	::System::Void Method_1_496D299FBEED85FF(::RPG::Client::OpenWorld::Volume* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::Volume*))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_496D299FBEED85FF_OFFSET))(this, a1);
	}

	::System::Void Method_1_E9CE03A2B3A2944C(::RPG::Client::OpenWorld::Volume* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::Volume*))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_E9CE03A2B3A2944C_OFFSET))(this, a1);
	}

	::System::Void Method_1_CB741CCB6B42AFF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_CB741CCB6B42AFF1_OFFSET))(this);
	}

	::System::Int32 Method_1_CEF2F84573427F6B(::RPG::Client::OpenWorld::Volume* a1, ::RPG::Client::OpenWorld::Volume* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::OpenWorld::Volume*, ::RPG::Client::OpenWorld::Volume*))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_CEF2F84573427F6B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4D395DE7080248C4(::Class_1_DCE8F52BF27202F5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DCE8F52BF27202F5*))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_4D395DE7080248C4_OFFSET))(this, a1);
	}

	::System::Void Method_1_5C35C5A2AED42591(::Class_1_DE4C6B309308A230* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_5C35C5A2AED42591_OFFSET))(this, a1, a2);
	}

	::Class_1_DCE8F52BF27202F5* Method_1_4A9A016DED73BF7C(::Class_1_DE4C6B309308A230* a1)
	{
		return ((::Class_1_DCE8F52BF27202F5*(*)(::PVOID, ::Class_1_DE4C6B309308A230*))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_4A9A016DED73BF7C_OFFSET))(this, a1);
	}

	::System::Void Method_1_C1D3BDE2A17F5C9D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_C1D3BDE2A17F5C9D_OFFSET))(this);
	}

	::System::Void Method_1_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::Void Method_1_631361B5F0734C5E(::Class_1_DE4C6B309308A230* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_631361B5F0734C5E_OFFSET))(this, a1, a2);
	}

	::RPG::Client::OpenWorld::Volume* Method_1_7F7437D824ED763B(::UnityEngine::Vector3 a1, ::System::Boolean a2)
	{
		return ((::RPG::Client::OpenWorld::Volume*(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_7F7437D824ED763B_OFFSET))(this, a1, a2);
	}

	::RPG::Client::OpenWorld::Volume* Method_1_479EC4AC07D4AC25(::UnityEngine::Vector3 a1)
	{
		return ((::RPG::Client::OpenWorld::Volume*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_479EC4AC07D4AC25_OFFSET))(this, a1);
	}
};
