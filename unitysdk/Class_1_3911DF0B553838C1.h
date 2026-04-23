#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYoSDKJSON { class JSONObject; }
namespace System::Threading { class Thread; }

#define CLASS_1_3911DF0B553838C1_METHOD_1_4AADAF19CDCB660E_OFFSET UNITYSDK_OFFSET(0x10AF0650)
#define CLASS_1_3911DF0B553838C1_METHOD_1_93DA6293BFCF7821_OFFSET UNITYSDK_OFFSET(0x10AF0DD0)
#define CLASS_1_3911DF0B553838C1_METHOD_1_94063F96A3043A1A_OFFSET UNITYSDK_OFFSET(0x10AF0E40)
#define CLASS_1_3911DF0B553838C1_METHOD_1_D308836DB54415C3_OFFSET UNITYSDK_OFFSET(0x10AF0760)
#define CLASS_1_3911DF0B553838C1_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x10AF05E0)
#define CLASS_1_3911DF0B553838C1__CTOR_OFFSET UNITYSDK_OFFSET(0x10AF0E80)

inline static constexpr unsigned int Class_1_3911DF0B553838C1_TypeDefinitionIndex = 64027;

class Class_1_3911DF0B553838C1 : public ::System::Object
{
public:
	static ::System::Threading::Thread** StaticGet_Field_1_1()
	{
		return (::System::Threading::Thread**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3911DF0B553838C1_TypeDefinitionIndex)->GetStaticField(0x5F6D0);
	}
	static ::System::Boolean* StaticGet_Field_1_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3911DF0B553838C1_TypeDefinitionIndex)->GetStaticField(0x10A90);
	}
	static ::System::Int32* StaticGet_Field_1_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3911DF0B553838C1_TypeDefinitionIndex)->GetStaticField(0x10A94);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3911DF0B553838C1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3911DF0B553838C1_METHOD_1_F730968E2645E14B_OFFSET))();
	}

	static ::System::Boolean Method_1_4AADAF19CDCB660E()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_3911DF0B553838C1_METHOD_1_4AADAF19CDCB660E_OFFSET))();
	}

	static ::System::Void Method_1_D308836DB54415C3()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3911DF0B553838C1_METHOD_1_D308836DB54415C3_OFFSET))();
	}

	static ::System::Void Method_1_93DA6293BFCF7821(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3911DF0B553838C1_METHOD_1_93DA6293BFCF7821_OFFSET))(a1);
	}

	static ::System::Void Method_1_94063F96A3043A1A(::MiHoYoSDKJSON::JSONObject*& a1)
	{
		return ((::System::Void(*)(::MiHoYoSDKJSON::JSONObject*&))((::PBYTE)hIl2Cpp + CLASS_1_3911DF0B553838C1_METHOD_1_94063F96A3043A1A_OFFSET))(a1);
	}
};
