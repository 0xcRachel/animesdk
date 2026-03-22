#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_36FB247F31EFD2DE.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C4DCEFDB49F9382D_METHOD_1_9BB09EEEE1B88AF8_OFFSET UNITYSDK_OFFSET(0xAC7B850)
#define CLASS_1_C4DCEFDB49F9382D_METHOD_1_C3E5185F0BD877E7_OFFSET UNITYSDK_OFFSET(0xAC7B0E0)
#define CLASS_1_C4DCEFDB49F9382D_METHOD_1_DA5D9485DDA43D31_OFFSET UNITYSDK_OFFSET(0xAC7B760)
#define CLASS_1_C4DCEFDB49F9382D_METHOD_1_EB6C61D22FBFB2EC_OFFSET UNITYSDK_OFFSET(0xAC7B1D0)
#define CLASS_1_C4DCEFDB49F9382D__CCTOR_OFFSET UNITYSDK_OFFSET(0xAC7BA60)
#define CLASS_1_C4DCEFDB49F9382D__CTOR_OFFSET UNITYSDK_OFFSET(0xAC7B910)

inline static constexpr unsigned int Class_1_C4DCEFDB49F9382D_TypeDefinitionIndex = 47771;

class Class_1_C4DCEFDB49F9382D : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_3()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C4DCEFDB49F9382D_TypeDefinitionIndex)->GetStaticField(0x46670);
	}
	static ::System::String** StaticGet_Field_1_4()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C4DCEFDB49F9382D_TypeDefinitionIndex)->GetStaticField(0x46678);
	}
	static ::System::String** StaticGet_Field_1_5()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C4DCEFDB49F9382D_TypeDefinitionIndex)->GetStaticField(0x46680);
	}
	::Struct_2_36FB247F31EFD2DE Field_1_0; // 0x10
	::Il2CppArray<::System::String*>* Field_1_1; // 0x20
	::Il2CppArray<::System::String*>* Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4DCEFDB49F9382D__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C4DCEFDB49F9382D__CCTOR_OFFSET))();
	}

	::System::Void Method_1_C3E5185F0BD877E7(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_C4DCEFDB49F9382D_METHOD_1_C3E5185F0BD877E7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_EB6C61D22FBFB2EC(::Il2CppArray<::System::String*>* a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::Vector3 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Int32, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_C4DCEFDB49F9382D_METHOD_1_EB6C61D22FBFB2EC_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::String* Method_1_9BB09EEEE1B88AF8(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C4DCEFDB49F9382D_METHOD_1_9BB09EEEE1B88AF8_OFFSET))(this, a1);
	}

	::System::String* Method_1_DA5D9485DDA43D31(::System::Collections::Generic::List_1<::System::String*>*& a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*&))((::PBYTE)hIl2Cpp + CLASS_1_C4DCEFDB49F9382D_METHOD_1_DA5D9485DDA43D31_OFFSET))(this, a1);
	}
};
