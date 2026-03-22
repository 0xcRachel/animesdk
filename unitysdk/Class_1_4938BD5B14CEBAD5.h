#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4938BD5B14CEBAD5_Struct_2_A9AB35D003AF1A67.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LogType.h"

class Class_0_16E4307DCC419505_35;
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class OnAssetOperationDelegate; }
namespace System { class Exception; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T> class ConcurrentQueue_1; }
namespace System::IO { class StreamWriter; }
namespace System::Threading { class Thread; }

#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_03B1BF2F2F8589FD_1_OFFSET UNITYSDK_OFFSET(0x15E7C6F0)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_03B1BF2F2F8589FD_OFFSET UNITYSDK_OFFSET(0x15E7C660)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_0DF420E95D6252BE_1_OFFSET UNITYSDK_OFFSET(0x15E7BE90)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_0DF420E95D6252BE_OFFSET UNITYSDK_OFFSET(0x15E7BD50)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_178757838D8D7059_OFFSET UNITYSDK_OFFSET(0x15E7D470)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_217D176ABA5F239F_OFFSET UNITYSDK_OFFSET(0x15E7DB20)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_2706F1509669B76D_OFFSET UNITYSDK_OFFSET(0x15E7CBF0)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_37D0382D0C30A2DC_OFFSET UNITYSDK_OFFSET(0x15E7BBD0)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_43F008E78788AE7D_OFFSET UNITYSDK_OFFSET(0x15E7C3A0)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_48CDCE8C38EFF7E6_OFFSET UNITYSDK_OFFSET(0x15E7CB70)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_507A5122CD01412B_OFFSET UNITYSDK_OFFSET(0x15E7BDB0)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_518C6F1B8C5A6FFD_OFFSET UNITYSDK_OFFSET(0x15E7C780)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x15E7BF20)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_64F3965CE4C4DB47_OFFSET UNITYSDK_OFFSET(0x15E7F390)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_6A77B2BDC6B4BFA2_OFFSET UNITYSDK_OFFSET(0x15E7C840)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_6D1A2E380851C12F_OFFSET UNITYSDK_OFFSET(0x15E7C8A0)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_7B9326DC6F33E4C6_1_OFFSET UNITYSDK_OFFSET(0x15E7C730)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_7B9326DC6F33E4C6_OFFSET UNITYSDK_OFFSET(0x15E7C6A0)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_80706F488461DCD0_OFFSET UNITYSDK_OFFSET(0x15E7CD10)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_8B7C44E1F71D9B2B_OFFSET UNITYSDK_OFFSET(0x15E7C4F0)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x15E7BC90)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_97CD3501BC2A9FF5_OFFSET UNITYSDK_OFFSET(0x15E7B7E0)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_A05778ADC2EABA84_OFFSET UNITYSDK_OFFSET(0x15E7C5A0)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_A5192AD810D5FD40_OFFSET UNITYSDK_OFFSET(0x15E7C400)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_B10C9FE28DB80051_OFFSET UNITYSDK_OFFSET(0x15E7C180)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_B5D1649856B26962_OFFSET UNITYSDK_OFFSET(0x15E7C470)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_BCCBDD3693790345_OFFSET UNITYSDK_OFFSET(0x15E7C7D0)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_BD0EF31BAC562515_OFFSET UNITYSDK_OFFSET(0x15E7C000)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_CC6579FCE14A4E50_OFFSET UNITYSDK_OFFSET(0x15E7C970)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_D218DD2D3DD4C46A_OFFSET UNITYSDK_OFFSET(0x15E7CDA0)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_D862EFA452CF657A_OFFSET UNITYSDK_OFFSET(0x15E7EAD0)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_E317E7E9884E2A17_OFFSET UNITYSDK_OFFSET(0x15E7F710)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_EBCA8E5D8C47FF73_OFFSET UNITYSDK_OFFSET(0x15E7BB10)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x15E7BEF0)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_F5599B7DA8E7E53C_1_OFFSET UNITYSDK_OFFSET(0x15E7BB70)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_F5599B7DA8E7E53C_2_OFFSET UNITYSDK_OFFSET(0x15E7BBA0)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_F5599B7DA8E7E53C_3_OFFSET UNITYSDK_OFFSET(0x15E7BD20)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x15E7BAE0)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x15E7C0F0)
#define CLASS_1_4938BD5B14CEBAD5_METHOD_1_FFAE12F56B0F7FA9_OFFSET UNITYSDK_OFFSET(0x15E7BF60)
#define CLASS_1_4938BD5B14CEBAD5__CCTOR_OFFSET UNITYSDK_OFFSET(0x15E806C0)

inline static constexpr unsigned int Class_1_4938BD5B14CEBAD5_TypeDefinitionIndex = 31272;

class Class_1_4938BD5B14CEBAD5 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4938BD5B14CEBAD5_TypeDefinitionIndex)->GetStaticField(0x39170);
	}
	static ::System::String** StaticGet_Field_1_2()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4938BD5B14CEBAD5_TypeDefinitionIndex)->GetStaticField(0x39178);
	}
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4938BD5B14CEBAD5_TypeDefinitionIndex)->GetStaticField(0x39180);
	}
	static ::System::Threading::Thread** StaticGet_Field_1_13()
	{
		return (::System::Threading::Thread**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4938BD5B14CEBAD5_TypeDefinitionIndex)->GetStaticField(0x39188);
	}
	static ::System::Collections::Concurrent::ConcurrentQueue_1<::Class_1_4938BD5B14CEBAD5_Struct_2_A9AB35D003AF1A67>** StaticGet_Field_1_10()
	{
		return (::System::Collections::Concurrent::ConcurrentQueue_1<::Class_1_4938BD5B14CEBAD5_Struct_2_A9AB35D003AF1A67>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4938BD5B14CEBAD5_TypeDefinitionIndex)->GetStaticField(0x39190);
	}
	static ::System::Int32* StaticGet_Field_1_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4938BD5B14CEBAD5_TypeDefinitionIndex)->GetStaticField(0xE410);
	}
	static ::System::DateTime* StaticGet_Field_1_11()
	{
		return (::System::DateTime*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4938BD5B14CEBAD5_TypeDefinitionIndex)->GetStaticField(0xE418);
	}
	static ::System::Int32* StaticGet_Field_1_7()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4938BD5B14CEBAD5_TypeDefinitionIndex)->GetStaticField(0xE420);
	}
	static ::System::Int32* StaticGet_Field_1_9()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4938BD5B14CEBAD5_TypeDefinitionIndex)->GetStaticField(0xE424);
	}
	static ::System::Int32* StaticGet_Field_1_6()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4938BD5B14CEBAD5_TypeDefinitionIndex)->GetStaticField(0xE428);
	}
	static ::System::Int32* StaticGet_Field_1_12()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4938BD5B14CEBAD5_TypeDefinitionIndex)->GetStaticField(0xE42C);
	}
	static ::System::Int32* StaticGet_Field_1_8()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4938BD5B14CEBAD5_TypeDefinitionIndex)->GetStaticField(0xE430);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4938BD5B14CEBAD5_TypeDefinitionIndex)->GetStaticField(0xE434);
	}
	static ::System::Boolean* StaticGet_Field_1_15()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4938BD5B14CEBAD5_TypeDefinitionIndex)->GetStaticField(0xE435);
	}
	static ::System::Int32* StaticGet_Field_1_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4938BD5B14CEBAD5_TypeDefinitionIndex)->GetStaticField(0xE438);
	}
	static ::System::Int32* StaticGet_Field_1_14()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4938BD5B14CEBAD5_TypeDefinitionIndex)->GetStaticField(0xE43C);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5__CCTOR_OFFSET))();
	}

	static ::System::String* Method_1_97CD3501BC2A9FF5()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_97CD3501BC2A9FF5_OFFSET))();
	}

	static ::System::Int32 Method_1_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_F5599B7DA8E7E53C_OFFSET))();
	}

	static ::System::Int32 Method_1_EBCA8E5D8C47FF73()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_EBCA8E5D8C47FF73_OFFSET))();
	}

	static ::System::Int32 Method_1_F5599B7DA8E7E53C_1()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_F5599B7DA8E7E53C_1_OFFSET))();
	}

	static ::System::Int32 Method_1_F5599B7DA8E7E53C_2()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_F5599B7DA8E7E53C_2_OFFSET))();
	}

	static ::System::Int32 Method_1_37D0382D0C30A2DC()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_37D0382D0C30A2DC_OFFSET))();
	}

	static ::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_95780ED94B90ED36_OFFSET))();
	}

	static ::System::Int32 Method_1_F5599B7DA8E7E53C_3()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_F5599B7DA8E7E53C_3_OFFSET))();
	}

	static ::System::Boolean Method_1_0DF420E95D6252BE()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_0DF420E95D6252BE_OFFSET))();
	}

	static ::System::Boolean Method_1_507A5122CD01412B()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_507A5122CD01412B_OFFSET))();
	}

	static ::System::Boolean Method_1_0DF420E95D6252BE_1()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_0DF420E95D6252BE_1_OFFSET))();
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::System::Void Method_1_FFAE12F56B0F7FA9(::System::String* a1, ::System::String* a2, ::UnityEngine::LogType a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::UnityEngine::LogType))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_FFAE12F56B0F7FA9_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_BD0EF31BAC562515(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_BD0EF31BAC562515_OFFSET))(a1);
	}

	static ::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_F8C7231308CD2C82_OFFSET))();
	}

	static ::System::Void Method_1_B10C9FE28DB80051(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_B10C9FE28DB80051_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_43F008E78788AE7D(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_43F008E78788AE7D_OFFSET))(a1);
	}

	static ::System::Void Method_1_A5192AD810D5FD40(::System::String* a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_A5192AD810D5FD40_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_B5D1649856B26962(::System::String* a1, ::System::String* a2, ::System::String* a3, ::Il2CppArray<::System::Object*>* a4)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_B5D1649856B26962_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_8B7C44E1F71D9B2B(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_8B7C44E1F71D9B2B_OFFSET))(a1);
	}

	static ::System::Void Method_1_A05778ADC2EABA84(::System::String* a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_A05778ADC2EABA84_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_03B1BF2F2F8589FD(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_03B1BF2F2F8589FD_OFFSET))(a1);
	}

	static ::System::Void Method_1_7B9326DC6F33E4C6(::System::String* a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_7B9326DC6F33E4C6_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_03B1BF2F2F8589FD_1(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_03B1BF2F2F8589FD_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_7B9326DC6F33E4C6_1(::System::String* a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_7B9326DC6F33E4C6_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_518C6F1B8C5A6FFD(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_518C6F1B8C5A6FFD_OFFSET))(a1);
	}

	static ::System::Void Method_1_BCCBDD3693790345(::System::String* a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_BCCBDD3693790345_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_6A77B2BDC6B4BFA2(::System::Exception* a1)
	{
		return ((::System::Void(*)(::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_6A77B2BDC6B4BFA2_OFFSET))(a1);
	}

	static ::System::Void Method_1_6D1A2E380851C12F(::System::Exception* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::Exception*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_6D1A2E380851C12F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CC6579FCE14A4E50(::System::Exception* a1, ::System::String* a2, ::System::String* a3, ::Il2CppArray<::System::Object*>* a4)
	{
		return ((::System::Void(*)(::System::Exception*, ::System::String*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_CC6579FCE14A4E50_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_48CDCE8C38EFF7E6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_48CDCE8C38EFF7E6_OFFSET))(a1);
	}

	static ::System::Void Method_1_2706F1509669B76D(::System::Boolean a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_2706F1509669B76D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_80706F488461DCD0(::System::Boolean a1, ::System::String* a2, ::System::String* a3, ::Il2CppArray<::System::Object*>* a4)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::String*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_80706F488461DCD0_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_D218DD2D3DD4C46A(::Class_0_16E4307DCC419505_35* a1, ::RPG::Client::OnAssetOperationDelegate* a2, ::RPG::Client::OnAssetOperationDelegate* a3)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_35*, ::RPG::Client::OnAssetOperationDelegate*, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_D218DD2D3DD4C46A_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_178757838D8D7059(::RPG::Client::IAssetOperation* a1, ::RPG::Client::OnAssetOperationDelegate* a2, ::RPG::Client::OnAssetOperationDelegate* a3)
	{
		return ((::System::Void(*)(::RPG::Client::IAssetOperation*, ::RPG::Client::OnAssetOperationDelegate*, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_178757838D8D7059_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_217D176ABA5F239F(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::Il2CppArray<::System::Object*>* a5)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_217D176ABA5F239F_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_D862EFA452CF657A(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_D862EFA452CF657A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_64F3965CE4C4DB47()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_64F3965CE4C4DB47_OFFSET))();
	}

	static ::System::Void Method_1_E317E7E9884E2A17(::System::IO::StreamWriter* a1)
	{
		return ((::System::Void(*)(::System::IO::StreamWriter*))((::PBYTE)hIl2Cpp + CLASS_1_4938BD5B14CEBAD5_METHOD_1_E317E7E9884E2A17_OFFSET))(a1);
	}
};
