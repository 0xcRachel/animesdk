#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_74D97E08BFF70A55.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_214;
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

#define CLASS_1_88E4EE711FB715A0_GET_BLOCKCOMPONENTTYPES_OFFSET UNITYSDK_OFFSET(0x10F6C750)
#define CLASS_1_88E4EE711FB715A0_GET_GLOBALCOMPONENTTYPES_OFFSET UNITYSDK_OFFSET(0x10F6C730)
#define CLASS_1_88E4EE711FB715A0_GET__ALLSOURCEPROXY_OFFSET UNITYSDK_OFFSET(0x10F6C790)
#define CLASS_1_88E4EE711FB715A0_GET__ALLSOURCESTACK_OFFSET UNITYSDK_OFFSET(0x10F6C770)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x10F6CAB0)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_19B91D58E02869BC_OFFSET UNITYSDK_OFFSET(0x10F6B3D0)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x10F6AB30)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x10F6AAD0)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_1E13A8A5C0FF7D62_OFFSET UNITYSDK_OFFSET(0x10F6D710)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_3C2E750B4D78DF48_OFFSET UNITYSDK_OFFSET(0x10F6AB90)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_479EC4AC07D4AC25_OFFSET UNITYSDK_OFFSET(0x10F70EE0)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_496D299FBEED85FF_OFFSET UNITYSDK_OFFSET(0x10F6DF40)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_4A9A016DED73BF7C_OFFSET UNITYSDK_OFFSET(0x10F6F810)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_4D395DE7080248C4_OFFSET UNITYSDK_OFFSET(0x10F6B120)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_5176DC743E478510_OFFSET UNITYSDK_OFFSET(0x10F6C3C0)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_5C35C5A2AED42591_OFFSET UNITYSDK_OFFSET(0x10F6E880)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_601EF3E7226D7DC2_OFFSET UNITYSDK_OFFSET(0x10F6DA70)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_631361B5F0734C5E_OFFSET UNITYSDK_OFFSET(0x10F707C0)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_655DDB722F1FDE73_OFFSET UNITYSDK_OFFSET(0x10F6CC50)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_6F73A40265D5B980_OFFSET UNITYSDK_OFFSET(0x10F6C7B0)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_75E10C86775D877F_OFFSET UNITYSDK_OFFSET(0x10F69ED0)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_780147B637D00196_OFFSET UNITYSDK_OFFSET(0x10F6A3F0)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_7E9AC3FFDA4606D5_1_OFFSET UNITYSDK_OFFSET(0x10F6DD80)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_7E9AC3FFDA4606D5_OFFSET UNITYSDK_OFFSET(0x10F6D6A0)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_7F7437D824ED763B_OFFSET UNITYSDK_OFFSET(0x10F70D30)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_97D0AD0D877DE9D8_OFFSET UNITYSDK_OFFSET(0x10F6BA70)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x10F70C40)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0x10F6BA10)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_AB88190D695EBEA9_OFFSET UNITYSDK_OFFSET(0x10F6B670)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_AECF8BEC293ED42A_OFFSET UNITYSDK_OFFSET(0x10F6B010)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_B20B564596DB48F3_OFFSET UNITYSDK_OFFSET(0x10F6ACB0)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_C1D3BDE2A17F5C9D_OFFSET UNITYSDK_OFFSET(0x10F6FE00)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_C50A2293958CA940_OFFSET UNITYSDK_OFFSET(0x10F6BFE0)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_C561FF611C07A44C_1_OFFSET UNITYSDK_OFFSET(0x10F6A990)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x10F6A8F0)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_CB741CCB6B42AFF1_OFFSET UNITYSDK_OFFSET(0x10F6E710)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_CE63D88F1A046706_OFFSET UNITYSDK_OFFSET(0x10F6AA30)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_CEF2F84573427F6B_OFFSET UNITYSDK_OFFSET(0x10F6E7F0)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_D729F7CA1F78F5C7_OFFSET UNITYSDK_OFFSET(0x10F6DEB0)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_DAF13E2DDF8F15E7_OFFSET UNITYSDK_OFFSET(0x10F6DA10)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_E0129C47613F76F3_OFFSET UNITYSDK_OFFSET(0x10F6DDF0)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_E9CE03A2B3A2944C_OFFSET UNITYSDK_OFFSET(0x10F6E0E0)
#define CLASS_1_88E4EE711FB715A0_METHOD_1_FF7B78F2B7C1D601_OFFSET UNITYSDK_OFFSET(0x10F69050)
#define CLASS_1_88E4EE711FB715A0_SET_BLOCKCOMPONENTTYPES_OFFSET UNITYSDK_OFFSET(0x10F6C760)
#define CLASS_1_88E4EE711FB715A0_SET_GLOBALCOMPONENTTYPES_OFFSET UNITYSDK_OFFSET(0x10F6C740)
#define CLASS_1_88E4EE711FB715A0_SET__ALLSOURCEPROXY_OFFSET UNITYSDK_OFFSET(0x10F6C7A0)
#define CLASS_1_88E4EE711FB715A0_SET__ALLSOURCESTACK_OFFSET UNITYSDK_OFFSET(0x10F6C780)
#define CLASS_1_88E4EE711FB715A0__CCTOR_OFFSET UNITYSDK_OFFSET(0x10F71070)
#define CLASS_1_88E4EE711FB715A0__CTOR_OFFSET UNITYSDK_OFFSET(0x10F6C060)

inline static constexpr unsigned int Class_1_88E4EE711FB715A0_TypeDefinitionIndex = 58913;

class Class_1_88E4EE711FB715A0 : public ::System::Object
{
public:
	static ::Class_1_88E4EE711FB715A0** StaticGet_Field_1_17()
	{
		return (::Class_1_88E4EE711FB715A0**)Il2CppClass::FromTypeDefinitionIndex(Class_1_88E4EE711FB715A0_TypeDefinitionIndex)->GetStaticField(0x34990);
	}
	static ::System::Collections::Generic::List_1<::Class_1_DCE8F52BF27202F5*>** StaticGet_Field_1_28()
	{
		return (::System::Collections::Generic::List_1<::Class_1_DCE8F52BF27202F5*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_88E4EE711FB715A0_TypeDefinitionIndex)->GetStaticField(0x34998);
	}
	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::Volume*>* Field_1_20; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_7A49742D2EA44155*>* Field_1_0; // 0x18
	::Class_1_DE4C6B309308A230* Field_1_16; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_813BC3EDB3CAACE9*>* Field_1_26; // 0x28
	::System::Collections::Generic::IEnumerable_1<::System::Type*>* _GlobalComponentTypes_k__BackingField; // 0x30
	::System::Collections::Generic::List_1<::Class_1_813BC3EDB3CAACE9*>* Field_1_13; // 0x38
	::System::Collections::Generic::List_1<::System::String*>* Field_1_15; // 0x40
	::System::Collections::Generic::List_1<::Class_1_423695772F3F2AA9*>* Field_1_21; // 0x48
	::System::Collections::Generic::List_1<::Class_1_423695772F3F2AA9*>* Field_1_22; // 0x50
	::Class_1_813BC3EDB3CAACE9* Field_1_25; // 0x58
	::Class_2_7F4574E2AA5F0809* Field_1_5; // 0x60
	::System::Collections::Generic::List_1<::Class_1_423695772F3F2AA9*>* Field_1_8; // 0x68
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_7; // 0x70
	::Class_2_8B3E44A52CD80E24* Field_1_6; // 0x78
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_1_423695772F3F2AA9*>*>* Field_1_9; // 0x80
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_12; // 0x88
	::Class_1_DCE8F52BF27202F5* __AllSourceStack_k__BackingField; // 0x90
	::System::Collections::Generic::IEnumerable_1<::System::Type*>* _BlockComponentTypes_k__BackingField; // 0x98
	::Class_1_DCE8F52BF27202F5* __AllSourceProxy_k__BackingField; // 0xA0
	::System::Collections::Generic::List_1<::Class_1_7A49742D2EA44155*>* Field_1_1; // 0xA8
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_1_14; // 0xB0
	::System::Collections::Generic::List_1<::Class_1_DCE8F52BF27202F5*>* Field_1_10; // 0xB8
	::System::Collections::Generic::List_1<::System::Boolean>* Field_1_11; // 0xC0
	::System::Boolean Field_1_4; // 0xC8
	::System::Boolean Field_1_27; // 0xC9
	::System::Boolean Field_1_2; // 0xCA
	::System::Boolean Field_1_3; // 0xCB

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0__CCTOR_OFFSET))();
	}

	::System::Void Method_1_FF7B78F2B7C1D601(::RPG::Client::OpenWorld::Volume* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::Volume*))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_FF7B78F2B7C1D601_OFFSET))(this, a1);
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

	::System::Void Method_1_3C2E750B4D78DF48(::Class_0_16E4307DCC419505_214* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_214*))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_3C2E750B4D78DF48_OFFSET))(this, a1);
	}

	::System::Void Method_1_B20B564596DB48F3(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_B20B564596DB48F3_OFFSET))(this, a1);
	}

	::System::Void Method_1_19B91D58E02869BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_19B91D58E02869BC_OFFSET))(this);
	}

	::System::Void Method_1_AB88190D695EBEA9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_AB88190D695EBEA9_OFFSET))(this);
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

	::System::Void Method_1_1E13A8A5C0FF7D62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0_METHOD_1_1E13A8A5C0FF7D62_OFFSET))(this);
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
