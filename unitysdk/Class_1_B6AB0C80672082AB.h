#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GameFramework/FileSystem/FileSystemAccess.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_219;
class Class_0_16E4307DCC419505_220;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B6AB0C80672082AB_METHOD_1_20D2A328957718FE_OFFSET UNITYSDK_OFFSET(0x163EFEC0)
#define CLASS_1_B6AB0C80672082AB_METHOD_1_5009BD3C08788261_OFFSET UNITYSDK_OFFSET(0x163EFCD0)
#define CLASS_1_B6AB0C80672082AB_METHOD_1_7D8266A828D178D6_OFFSET UNITYSDK_OFFSET(0x163EFE00)
#define CLASS_1_B6AB0C80672082AB_METHOD_1_B6B23C3F89F7E6D9_OFFSET UNITYSDK_OFFSET(0x163EFD30)
#define CLASS_1_B6AB0C80672082AB_METHOD_1_BA846ED21F952AA5_OFFSET UNITYSDK_OFFSET(0x163EFE60)
#define CLASS_1_B6AB0C80672082AB_METHOD_1_BFBBE8A6FE167A6A_OFFSET UNITYSDK_OFFSET(0x163EFC70)
#define CLASS_1_B6AB0C80672082AB_METHOD_1_C3CD12FEF189A78F_OFFSET UNITYSDK_OFFSET(0x163EFF10)
#define CLASS_1_B6AB0C80672082AB_METHOD_1_D604770791021CCD_OFFSET UNITYSDK_OFFSET(0x163EFD90)
#define CLASS_1_B6AB0C80672082AB__CCTOR_OFFSET UNITYSDK_OFFSET(0x163EFB40)

inline static constexpr unsigned int Class_1_B6AB0C80672082AB_TypeDefinitionIndex = 32812;

class Class_1_B6AB0C80672082AB : public ::System::Object
{
public:
	static ::Class_0_16E4307DCC419505_219** StaticGet_Field_1_0()
	{
		return (::Class_0_16E4307DCC419505_219**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B6AB0C80672082AB_TypeDefinitionIndex)->GetStaticField(0x3060);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B6AB0C80672082AB__CCTOR_OFFSET))();
	}

	static ::System::Int32 Method_1_BFBBE8A6FE167A6A()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_B6AB0C80672082AB_METHOD_1_BFBBE8A6FE167A6A_OFFSET))();
	}

	static ::System::Boolean Method_1_5009BD3C08788261(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B6AB0C80672082AB_METHOD_1_5009BD3C08788261_OFFSET))(a1);
	}

	static ::Class_0_16E4307DCC419505_220* Method_1_B6B23C3F89F7E6D9(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_220*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B6AB0C80672082AB_METHOD_1_B6B23C3F89F7E6D9_OFFSET))(a1);
	}

	static ::Class_0_16E4307DCC419505_220* Method_1_D604770791021CCD(::System::String* a1, ::GameFramework::FileSystem::FileSystemAccess a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::Class_0_16E4307DCC419505_220*(*)(::System::String*, ::GameFramework::FileSystem::FileSystemAccess, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B6AB0C80672082AB_METHOD_1_D604770791021CCD_OFFSET))(a1, a2, a3, a4);
	}

	static ::Class_0_16E4307DCC419505_220* Method_1_7D8266A828D178D6(::System::String* a1, ::GameFramework::FileSystem::FileSystemAccess a2)
	{
		return ((::Class_0_16E4307DCC419505_220*(*)(::System::String*, ::GameFramework::FileSystem::FileSystemAccess))((::PBYTE)hIl2Cpp + CLASS_1_B6AB0C80672082AB_METHOD_1_7D8266A828D178D6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BA846ED21F952AA5(::Class_0_16E4307DCC419505_220* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_220*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B6AB0C80672082AB_METHOD_1_BA846ED21F952AA5_OFFSET))(a1, a2);
	}

	static ::Il2CppArray<::Class_0_16E4307DCC419505_220*>* Method_1_20D2A328957718FE()
	{
		return ((::Il2CppArray<::Class_0_16E4307DCC419505_220*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B6AB0C80672082AB_METHOD_1_20D2A328957718FE_OFFSET))();
	}

	static ::System::Void Method_1_C3CD12FEF189A78F(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_220*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_220*>*))((::PBYTE)hIl2Cpp + CLASS_1_B6AB0C80672082AB_METHOD_1_C3CD12FEF189A78F_OFFSET))(a1);
	}
};
