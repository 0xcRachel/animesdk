#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A93C5E1851A22074_Struct_2_F7C243F317D8E44A.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_A93C5E1851A22074_METHOD_1_0C78E57E5D4B30DE_OFFSET UNITYSDK_OFFSET(0x179F7810)
#define CLASS_1_A93C5E1851A22074_METHOD_1_65D154CF9A34E5A8_OFFSET UNITYSDK_OFFSET(0x179F7600)
#define CLASS_1_A93C5E1851A22074_METHOD_1_FBAB973999BD676D_OFFSET UNITYSDK_OFFSET(0x179F7930)
#define CLASS_1_A93C5E1851A22074__CTOR_OFFSET UNITYSDK_OFFSET(0x179F8D70)

inline static constexpr unsigned int Class_1_A93C5E1851A22074_TypeDefinitionIndex = 8481;

class Class_1_A93C5E1851A22074 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A93C5E1851A22074__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_65D154CF9A34E5A8(::Il2CppArray<::Class_1_A93C5E1851A22074_Struct_2_F7C243F317D8E44A>* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::Il2CppArray<::Class_1_A93C5E1851A22074_Struct_2_F7C243F317D8E44A>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A93C5E1851A22074_METHOD_1_65D154CF9A34E5A8_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_1_0C78E57E5D4B30DE(::RPG::MVector2& a1, ::RPG::MVector2& a2, ::RPG::MVector2& a3)
	{
		return ((::System::Single(*)(::RPG::MVector2&, ::RPG::MVector2&, ::RPG::MVector2&))((::PBYTE)hIl2Cpp + CLASS_1_A93C5E1851A22074_METHOD_1_0C78E57E5D4B30DE_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_FBAB973999BD676D(::Il2CppArray<::RPG::MVector2>* a1, ::Il2CppArray<::System::Int32>*& a2, ::Il2CppArray<::System::Int32>* a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Boolean(*)(::Il2CppArray<::RPG::MVector2>*, ::Il2CppArray<::System::Int32>*&, ::Il2CppArray<::System::Int32>*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A93C5E1851A22074_METHOD_1_FBAB973999BD676D_OFFSET))(a1, a2, a3, a4, a5);
	}
};
