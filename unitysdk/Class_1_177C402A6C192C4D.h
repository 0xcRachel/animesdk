#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_177C402A6C192C4D__CCTOR_OFFSET UNITYSDK_OFFSET(0x13422BD0)

inline static constexpr unsigned int Class_1_177C402A6C192C4D_TypeDefinitionIndex = 53411;

class Class_1_177C402A6C192C4D : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_177C402A6C192C4D_TypeDefinitionIndex)->GetStaticField(0x306D0);
	}
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_177C402A6C192C4D_TypeDefinitionIndex)->GetStaticField(0x306D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_177C402A6C192C4D__CCTOR_OFFSET))();
	}
};
