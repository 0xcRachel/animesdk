#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Sample/SampleDynamicType.h"
#include "unitysdk/Struct_2_FE9BD044832BC9C3.h"
#include "unitysdk/System/ValueType.h"

class Class_1_14EB39A586A3C7DF;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_AC12EFE682D0BD60_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13EE2F0)
#define STRUCT_2_AC12EFE682D0BD60_GET_CENTER_OFFSET UNITYSDK_OFFSET(0x5580)
#define STRUCT_2_AC12EFE682D0BD60_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x5AF0)
#define STRUCT_2_AC12EFE682D0BD60_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x13EE100)
#define STRUCT_2_AC12EFE682D0BD60_METHOD_2_1E2398D84CC59572_OFFSET UNITYSDK_OFFSET(0x13EE2B0)
#define STRUCT_2_AC12EFE682D0BD60_METHOD_2_2CFD84A2585018B1_OFFSET UNITYSDK_OFFSET(0x13EE2C0)
#define STRUCT_2_AC12EFE682D0BD60_METHOD_2_BCC2B0897BA7AF68_OFFSET UNITYSDK_OFFSET(0x13EE200)
#define STRUCT_2_AC12EFE682D0BD60_METHOD_2_C11DE5214A4C6B74_OFFSET UNITYSDK_OFFSET(0x13EE2D0)
#define STRUCT_2_AC12EFE682D0BD60_METHOD_2_C2DC70A2187A34F9_OFFSET UNITYSDK_OFFSET(0x13EE160)
#define STRUCT_2_AC12EFE682D0BD60_SET_CENTER_OFFSET UNITYSDK_OFFSET(0xBDC0)
#define STRUCT_2_AC12EFE682D0BD60_SET_VALUES_OFFSET UNITYSDK_OFFSET(0x8D10)
#define STRUCT_2_AC12EFE682D0BD60__CCTOR_OFFSET UNITYSDK_OFFSET(0xFDFEBA0)
#define STRUCT_2_AC12EFE682D0BD60__CTOR_OFFSET UNITYSDK_OFFSET(0xC7E20)

inline static constexpr unsigned int Struct_2_AC12EFE682D0BD60_TypeDefinitionIndex = 58962;

struct alignas(8) Struct_2_AC12EFE682D0BD60
{
	static ::Struct_2_AC12EFE682D0BD60* StaticGet_Field_2_0()
	{
		return (::Struct_2_AC12EFE682D0BD60*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_AC12EFE682D0BD60_TypeDefinitionIndex)->GetStaticField(0xB9B0);
	}
	::Class_1_14EB39A586A3C7DF* _center_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::Struct_2_FE9BD044832BC9C3>* _values_k__BackingField; // 0x18

	::System::Void _ctor(::Class_1_14EB39A586A3C7DF* a1, ::System::Collections::Generic::List_1<::Struct_2_FE9BD044832BC9C3>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_14EB39A586A3C7DF*, ::System::Collections::Generic::List_1<::Struct_2_FE9BD044832BC9C3>*))((::PBYTE)hIl2Cpp + STRUCT_2_AC12EFE682D0BD60__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_AC12EFE682D0BD60__CCTOR_OFFSET))();
	}

	::Class_1_14EB39A586A3C7DF* get_center()
	{
		return ((::Class_1_14EB39A586A3C7DF*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_AC12EFE682D0BD60_GET_CENTER_OFFSET))(this);
	}

	::System::Void set_center(::Class_1_14EB39A586A3C7DF* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_14EB39A586A3C7DF*))((::PBYTE)hIl2Cpp + STRUCT_2_AC12EFE682D0BD60_SET_CENTER_OFFSET))(this, value);
	}

	::System::Collections::Generic::List_1<::Struct_2_FE9BD044832BC9C3>* get_values()
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_FE9BD044832BC9C3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_AC12EFE682D0BD60_GET_VALUES_OFFSET))(this);
	}

	::System::Void set_values(::System::Collections::Generic::List_1<::Struct_2_FE9BD044832BC9C3>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_FE9BD044832BC9C3>*))((::PBYTE)hIl2Cpp + STRUCT_2_AC12EFE682D0BD60_SET_VALUES_OFFSET))(this, value);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_AC12EFE682D0BD60_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_2_C2DC70A2187A34F9(::System::String* a1, ::System::Int64 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + STRUCT_2_AC12EFE682D0BD60_METHOD_2_C2DC70A2187A34F9_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_BCC2B0897BA7AF68(::System::String* a1, ::System::Double a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Double))((::PBYTE)hIl2Cpp + STRUCT_2_AC12EFE682D0BD60_METHOD_2_BCC2B0897BA7AF68_OFFSET))(this, a1, a2);
	}

	/*
	::System::Boolean Method_2_1E2398D84CC59572(::System::String* a1, ::Struct_2_E4446863CEE2BD81 a2, ::RPG::Client::Sample::SampleDynamicType a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Struct_2_E4446863CEE2BD81, ::RPG::Client::Sample::SampleDynamicType))((::PBYTE)hIl2Cpp + STRUCT_2_AC12EFE682D0BD60_METHOD_2_1E2398D84CC59572_OFFSET))(this, a1, a2, a3);
	}
	*/

	::RPG::Client::Sample::SampleDynamicType Method_2_2CFD84A2585018B1(::System::Int32 a1)
	{
		return ((::RPG::Client::Sample::SampleDynamicType(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_AC12EFE682D0BD60_METHOD_2_2CFD84A2585018B1_OFFSET))(this, a1);
	}

	/*
	::Struct_2_5B01A4D9DE10D034 Method_2_C11DE5214A4C6B74(::System::Int32 a1)
	{
		return ((::Struct_2_5B01A4D9DE10D034(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_AC12EFE682D0BD60_METHOD_2_C11DE5214A4C6B74_OFFSET))(this, a1);
	}
	*/

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_AC12EFE682D0BD60_DISPOSE_OFFSET))(this);
	}
};
