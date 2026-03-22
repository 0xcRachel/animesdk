#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_27857638BF482647_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_7E9DD9C420D52D84;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_436702D394954AC4_METHOD_1_21963F8CC6AACB31_OFFSET UNITYSDK_OFFSET(0x11186120)
#define CLASS_1_436702D394954AC4_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x11186080)
#define CLASS_1_436702D394954AC4_METHOD_1_369BB5E7FA6A1768_OFFSET UNITYSDK_OFFSET(0x11186300)
#define CLASS_1_436702D394954AC4_METHOD_1_49E14046A9962AF1_OFFSET UNITYSDK_OFFSET(0x11185D00)
#define CLASS_1_436702D394954AC4_METHOD_1_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x11185CC0)
#define CLASS_1_436702D394954AC4_METHOD_1_DD784213055292FB_OFFSET UNITYSDK_OFFSET(0x11185F30)
#define CLASS_1_436702D394954AC4__CTOR_OFFSET UNITYSDK_OFFSET(0x111863D0)

inline static constexpr unsigned int Class_1_436702D394954AC4_TypeDefinitionIndex = 58884;

class Class_1_436702D394954AC4 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Struct_2_27857638BF482647_1>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_436702D394954AC4__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_436702D394954AC4_METHOD_1_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_1_49E14046A9962AF1(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_1_436702D394954AC4_METHOD_1_49E14046A9962AF1_OFFSET))(this, a1);
	}

	::System::Void Method_1_DD784213055292FB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_436702D394954AC4_METHOD_1_DD784213055292FB_OFFSET))(this);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_436702D394954AC4_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::Class_1_7E9DD9C420D52D84* Method_1_21963F8CC6AACB31(::Struct_2_27857638BF482647_1 a1)
	{
		return ((::Class_1_7E9DD9C420D52D84*(*)(::PVOID, ::Struct_2_27857638BF482647_1))((::PBYTE)hIl2Cpp + CLASS_1_436702D394954AC4_METHOD_1_21963F8CC6AACB31_OFFSET))(this, a1);
	}

	::System::Void Method_1_369BB5E7FA6A1768(::Class_1_7E9DD9C420D52D84* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7E9DD9C420D52D84*))((::PBYTE)hIl2Cpp + CLASS_1_436702D394954AC4_METHOD_1_369BB5E7FA6A1768_OFFSET))(this, a1);
	}
};
