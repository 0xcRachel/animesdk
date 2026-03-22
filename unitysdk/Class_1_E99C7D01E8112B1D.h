#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_E99C7D01E8112B1D__CCTOR_OFFSET UNITYSDK_OFFSET(0xB2C2520)

inline static constexpr unsigned int Class_1_E99C7D01E8112B1D_TypeDefinitionIndex = 49377;

class Class_1_E99C7D01E8112B1D : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_Field_1_3()
	{
		return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E99C7D01E8112B1D_TypeDefinitionIndex)->GetStaticField(0x44F20);
	}
	static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E99C7D01E8112B1D_TypeDefinitionIndex)->GetStaticField(0x44F28);
	}
	static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E99C7D01E8112B1D_TypeDefinitionIndex)->GetStaticField(0x44F30);
	}
	static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E99C7D01E8112B1D_TypeDefinitionIndex)->GetStaticField(0x44F38);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E99C7D01E8112B1D__CCTOR_OFFSET))();
	}
};
