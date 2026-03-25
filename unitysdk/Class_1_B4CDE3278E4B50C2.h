#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_02D30900317D93FD;

#define CLASS_1_B4CDE3278E4B50C2_METHOD_1_4E2BCE3C8705DF5E_OFFSET UNITYSDK_OFFSET(0x10528C60)
#define CLASS_1_B4CDE3278E4B50C2_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x10528CF0)
#define CLASS_1_B4CDE3278E4B50C2__CCTOR_OFFSET UNITYSDK_OFFSET(0x10528D60)
#define CLASS_1_B4CDE3278E4B50C2__CTOR_OFFSET UNITYSDK_OFFSET(0x10528BB0)

inline static constexpr unsigned int Class_1_B4CDE3278E4B50C2_TypeDefinitionIndex = 58340;

class Class_1_B4CDE3278E4B50C2 : public ::System::Object
{
public:
	static ::System::UInt32* StaticGet_Field_1_4()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B4CDE3278E4B50C2_TypeDefinitionIndex)->GetStaticField(0x9550);
	}
	::Class_1_02D30900317D93FD* Field_1_3; // 0x10
	::System::UInt32 Field_1_0; // 0x18
	::System::Boolean Field_1_2; // 0x1C
	::System::Boolean Field_1_1; // 0x1D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4CDE3278E4B50C2__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B4CDE3278E4B50C2__CCTOR_OFFSET))();
	}

	static ::System::UInt32 Method_1_4E2BCE3C8705DF5E()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CLASS_1_B4CDE3278E4B50C2_METHOD_1_4E2BCE3C8705DF5E_OFFSET))();
	}

	static ::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B4CDE3278E4B50C2_METHOD_1_F8C7231308CD2C82_OFFSET))();
	}
};
