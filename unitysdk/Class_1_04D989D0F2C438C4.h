#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_77;
class Class_0_16E4307DCC419505_78;
class Class_1_99337DDD16B17366;
class Class_1_F077E55B6446752D;
namespace RPG::Client { class AudioBundleInfoItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class StreamWriter; }

#define CLASS_1_04D989D0F2C438C4_METHOD_1_00AB706E91CC1231_OFFSET UNITYSDK_OFFSET(0xC2F0880)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_095873C28EE02501_OFFSET UNITYSDK_OFFSET(0xC2EDAB0)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_0BB88B96DFFF0881_OFFSET UNITYSDK_OFFSET(0xC2F0B90)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_1752A6C5315501DC_OFFSET UNITYSDK_OFFSET(0xC2E8F40)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_1C79D2D76F58E5A0_OFFSET UNITYSDK_OFFSET(0xC2EA7D0)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_2581C7C18C4336EC_OFFSET UNITYSDK_OFFSET(0xC2EE590)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_283DA224BE06DA9F_OFFSET UNITYSDK_OFFSET(0xC2E8B90)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_2B3ABC034E8A7515_1_OFFSET UNITYSDK_OFFSET(0xC2EDF20)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_2B3ABC034E8A7515_OFFSET UNITYSDK_OFFSET(0xC2EDDA0)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xC2E7EB0)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_380699992F9CB7F3_OFFSET UNITYSDK_OFFSET(0xC2EEE70)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_3A9DAF7F101E5980_OFFSET UNITYSDK_OFFSET(0xC2E9BC0)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_3EB5633778EEE94C_OFFSET UNITYSDK_OFFSET(0xC2EE310)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_3ED06AA76F8F19C2_OFFSET UNITYSDK_OFFSET(0xC2EC790)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_3F3E4145E35053CD_OFFSET UNITYSDK_OFFSET(0xC2F0F40)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_45BA6CA15DD1A5DE_OFFSET UNITYSDK_OFFSET(0xC2EB610)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_4BB817D9C82AC31E_OFFSET UNITYSDK_OFFSET(0xC2EBD70)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_50E64BD6C4C3104B_1_OFFSET UNITYSDK_OFFSET(0xC2E86E0)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_50E64BD6C4C3104B_OFFSET UNITYSDK_OFFSET(0xC2E79F0)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_52372258946A7C92_OFFSET UNITYSDK_OFFSET(0xC2E7D10)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_5DE431C7F7C7CDC1_OFFSET UNITYSDK_OFFSET(0xC2F12E0)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_60606FD5427CA543_1_OFFSET UNITYSDK_OFFSET(0xC2E92F0)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_60606FD5427CA543_OFFSET UNITYSDK_OFFSET(0xC2EAAC0)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_62D17ECA69A08EF4_OFFSET UNITYSDK_OFFSET(0xC2E8460)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_63ABA549BEAB770C_OFFSET UNITYSDK_OFFSET(0xC2F15E0)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_68A37D9B80DCB4F0_OFFSET UNITYSDK_OFFSET(0xC2ED570)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_6D3986FA20CF419D_OFFSET UNITYSDK_OFFSET(0xC2EEB80)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_709D6F75F7C64865_OFFSET UNITYSDK_OFFSET(0xC2ECFE0)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_7A9E441FB10507A3_1_OFFSET UNITYSDK_OFFSET(0xC2E8EE0)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_7A9E441FB10507A3_OFFSET UNITYSDK_OFFSET(0xC2E8E80)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_8F1DEE03EB95CFBC_OFFSET UNITYSDK_OFFSET(0xC2ECEC0)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_9E20E2F68065EB73_OFFSET UNITYSDK_OFFSET(0xC2EA0E0)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_A53E39B066D9F108_OFFSET UNITYSDK_OFFSET(0xC2E7970)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_A8A2FDDECE451EC7_OFFSET UNITYSDK_OFFSET(0xC2E7620)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_AC7CD4175E0A3EF8_OFFSET UNITYSDK_OFFSET(0xC2E7750)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_B3230B844F55FD00_OFFSET UNITYSDK_OFFSET(0xC2E8D70)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_B3F94C095ACAE0B6_OFFSET UNITYSDK_OFFSET(0xC2E70C0)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_B9A97467188E4B69_1_OFFSET UNITYSDK_OFFSET(0xC2EE7B0)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_B9A97467188E4B69_OFFSET UNITYSDK_OFFSET(0xC2E7F70)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_B9C1BACC809F6A45_1_OFFSET UNITYSDK_OFFSET(0xC2ECB20)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_B9C1BACC809F6A45_OFFSET UNITYSDK_OFFSET(0xC2EBAC0)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_BA5C55504E896D92_OFFSET UNITYSDK_OFFSET(0xC2EAE40)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_C2964C522310C84E_OFFSET UNITYSDK_OFFSET(0xC2EB140)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_C36DD7A14931FEA2_OFFSET UNITYSDK_OFFSET(0xC2EE0A0)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_C99D0F8C0BD68108_OFFSET UNITYSDK_OFFSET(0xC2E8290)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_CC8AA229C980F42D_OFFSET UNITYSDK_OFFSET(0xC2ECDD0)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_CF84D53F2A6F5836_OFFSET UNITYSDK_OFFSET(0xC2E9060)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_D24E815385FAB86D_OFFSET UNITYSDK_OFFSET(0xC2EB7B0)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_D2FFF6E2EB90010C_OFFSET UNITYSDK_OFFSET(0xC2EE110)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_D39B07CFBD161D4F_OFFSET UNITYSDK_OFFSET(0xC2F1770)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_D4DAFE0DCB70C076_OFFSET UNITYSDK_OFFSET(0xC2E7250)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_D9276CC0AAF87054_OFFSET UNITYSDK_OFFSET(0xC2ED7B0)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_E0B5F030178926C9_OFFSET UNITYSDK_OFFSET(0xC2E7DE0)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_E28059A48D6BFB33_OFFSET UNITYSDK_OFFSET(0xC2E7440)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_E95AE92E0F406667_OFFSET UNITYSDK_OFFSET(0xC2E9670)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0xC2E7210)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_F684383D67CB4C47_OFFSET UNITYSDK_OFFSET(0xC2EFD80)
#define CLASS_1_04D989D0F2C438C4_METHOD_1_FF1AFA9E6B3F7101_OFFSET UNITYSDK_OFFSET(0xC2EF320)
#define CLASS_1_04D989D0F2C438C4__CCTOR_OFFSET UNITYSDK_OFFSET(0xC2F1FB0)

inline static constexpr unsigned int Class_1_04D989D0F2C438C4_TypeDefinitionIndex = 55005;

class Class_1_04D989D0F2C438C4 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_04D989D0F2C438C4_TypeDefinitionIndex)->GetStaticField(0x10FF0);
	}
	static ::System::String** StaticGet_Field_1_2()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_04D989D0F2C438C4_TypeDefinitionIndex)->GetStaticField(0x10FF8);
	}
	static ::System::String** StaticGet_Field_1_3()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_04D989D0F2C438C4_TypeDefinitionIndex)->GetStaticField(0x11000);
	}
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_04D989D0F2C438C4_TypeDefinitionIndex)->GetStaticField(0x11008);
	}
	static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_Field_1_4()
	{
		return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_04D989D0F2C438C4_TypeDefinitionIndex)->GetStaticField(0x11010);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_B3F94C095ACAE0B6(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_B3F94C095ACAE0B6_OFFSET))(a1);
	}

	static ::System::Void Method_1_D4DAFE0DCB70C076(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_D4DAFE0DCB70C076_OFFSET))(a1);
	}

	static ::System::Void Method_1_E28059A48D6BFB33(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_E28059A48D6BFB33_OFFSET))(a1);
	}

	static ::System::Collections::Generic::HashSet_1<::System::UInt32>* Method_1_A8A2FDDECE451EC7()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_A8A2FDDECE451EC7_OFFSET))();
	}

	static ::System::Void Method_1_AC7CD4175E0A3EF8()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_AC7CD4175E0A3EF8_OFFSET))();
	}

	static ::System::Boolean Method_1_A53E39B066D9F108(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_A53E39B066D9F108_OFFSET))(a1);
	}

	static ::System::Void Method_1_50E64BD6C4C3104B(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_50E64BD6C4C3104B_OFFSET))(a1);
	}

	static ::System::Void Method_1_52372258946A7C92(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_52372258946A7C92_OFFSET))(a1);
	}

	static ::System::Collections::Generic::HashSet_1<::System::UInt32>* Method_1_E0B5F030178926C9()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_E0B5F030178926C9_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_B9A97467188E4B69()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_B9A97467188E4B69_OFFSET))();
	}

	static ::System::Void Method_1_62D17ECA69A08EF4(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_62D17ECA69A08EF4_OFFSET))(a1);
	}

	static ::System::Void Method_1_50E64BD6C4C3104B_1(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_50E64BD6C4C3104B_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_283DA224BE06DA9F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_283DA224BE06DA9F_OFFSET))();
	}

	static ::System::Collections::Generic::HashSet_1<::System::UInt32>* Method_1_B3230B844F55FD00()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_B3230B844F55FD00_OFFSET))();
	}

	static ::System::Void Method_1_7A9E441FB10507A3(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_7A9E441FB10507A3_OFFSET))(a1);
	}

	static ::System::Void Method_1_7A9E441FB10507A3_1(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_7A9E441FB10507A3_1_OFFSET))(a1);
	}

	static ::System::Int64 Method_1_1752A6C5315501DC(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
	{
		return ((::System::Int64(*)(::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_1752A6C5315501DC_OFFSET))(a1);
	}

	static ::System::Int64 Method_1_9E20E2F68065EB73(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
	{
		return ((::System::Int64(*)(::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_9E20E2F68065EB73_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_C2964C522310C84E(::Class_1_F077E55B6446752D* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Boolean(*)(::Class_1_F077E55B6446752D*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_C2964C522310C84E_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_BA5C55504E896D92(::Class_1_F077E55B6446752D* a1, ::System::Collections::Generic::HashSet_1<::System::String*>* a2)
	{
		return ((::System::Void(*)(::Class_1_F077E55B6446752D*, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_BA5C55504E896D92_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_45BA6CA15DD1A5DE(::System::String* a1, ::System::Collections::Generic::HashSet_1<::System::String*>* a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_45BA6CA15DD1A5DE_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::HashSet_1<::System::String*>* Method_1_1C79D2D76F58E5A0(::System::Collections::Generic::List_1<::RPG::Client::AudioBundleInfoItem*>* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::System::Collections::Generic::List_1<::RPG::Client::AudioBundleInfoItem*>*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_1C79D2D76F58E5A0_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::HashSet_1<::System::String*>* Method_1_60606FD5427CA543(::Class_0_16E4307DCC419505_77* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::Class_0_16E4307DCC419505_77*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_60606FD5427CA543_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_D24E815385FAB86D(::Class_0_16E4307DCC419505_78* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
	{
		return ((::System::Boolean(*)(::Class_0_16E4307DCC419505_78*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_D24E815385FAB86D_OFFSET))(a1, a2);
	}

	static ::System::Int64 Method_1_B9C1BACC809F6A45(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
	{
		return ((::System::Int64(*)(::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_B9C1BACC809F6A45_OFFSET))(a1);
	}

	static ::System::Int64 Method_1_B9C1BACC809F6A45_1(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
	{
		return ((::System::Int64(*)(::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_B9C1BACC809F6A45_1_OFFSET))(a1);
	}

	static ::System::Collections::Generic::HashSet_1<::System::UInt32>* Method_1_CC8AA229C980F42D()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_CC8AA229C980F42D_OFFSET))();
	}

	static ::System::Boolean Method_1_8F1DEE03EB95CFBC(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_8F1DEE03EB95CFBC_OFFSET))(a1);
	}

	static ::System::Void Method_1_C99D0F8C0BD68108(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_C99D0F8C0BD68108_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_68A37D9B80DCB4F0()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_68A37D9B80DCB4F0_OFFSET))();
	}

	static ::System::Int64 Method_1_E95AE92E0F406667(::System::Collections::Generic::HashSet_1<::System::String*>* a1)
	{
		return ((::System::Int64(*)(::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_E95AE92E0F406667_OFFSET))(a1);
	}

	static ::System::Int64 Method_1_3A9DAF7F101E5980(::System::Collections::Generic::HashSet_1<::System::String*>* a1)
	{
		return ((::System::Int64(*)(::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_3A9DAF7F101E5980_OFFSET))(a1);
	}

	static ::System::Int64 Method_1_4BB817D9C82AC31E(::System::Collections::Generic::HashSet_1<::System::String*>* a1, ::System::Boolean a2)
	{
		return ((::System::Int64(*)(::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_4BB817D9C82AC31E_OFFSET))(a1, a2);
	}

	static ::System::Int64 Method_1_3ED06AA76F8F19C2(::System::Collections::Generic::HashSet_1<::System::String*>* a1)
	{
		return ((::System::Int64(*)(::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_3ED06AA76F8F19C2_OFFSET))(a1);
	}

	static ::System::Collections::Generic::HashSet_1<::System::String*>* Method_1_D9276CC0AAF87054(::Class_1_F077E55B6446752D* a1, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::Class_1_F077E55B6446752D*, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_D9276CC0AAF87054_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::HashSet_1<::System::String*>* Method_1_095873C28EE02501(::Class_1_99337DDD16B17366* a1, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::Class_1_99337DDD16B17366*, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_095873C28EE02501_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_2B3ABC034E8A7515(::System::Collections::Generic::HashSet_1<::System::String*>* a1)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_2B3ABC034E8A7515_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_2B3ABC034E8A7515_1(::System::Collections::Generic::HashSet_1<::System::String*>* a1)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_2B3ABC034E8A7515_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_C36DD7A14931FEA2(::System::Collections::Generic::HashSet_1<::System::String*>* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_C36DD7A14931FEA2_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_D2FFF6E2EB90010C(::System::Collections::Generic::HashSet_1<::System::String*>* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_D2FFF6E2EB90010C_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_3EB5633778EEE94C(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_3EB5633778EEE94C_OFFSET))(a1);
	}

	static ::System::Void Method_1_2581C7C18C4336EC(::Class_1_F077E55B6446752D* a1, ::Class_1_99337DDD16B17366* a2)
	{
		return ((::System::Void(*)(::Class_1_F077E55B6446752D*, ::Class_1_99337DDD16B17366*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_2581C7C18C4336EC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_B9A97467188E4B69_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_B9A97467188E4B69_1_OFFSET))();
	}

	static ::System::Void Method_1_709D6F75F7C64865(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1, ::Class_1_F077E55B6446752D* a2, ::Class_1_99337DDD16B17366* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::Class_1_F077E55B6446752D*, ::Class_1_99337DDD16B17366*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_709D6F75F7C64865_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Int64 Method_1_6D3986FA20CF419D(::System::IO::StreamWriter* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2, ::Class_1_F077E55B6446752D* a3, ::System::Boolean a4)
	{
		return ((::System::Int64(*)(::System::IO::StreamWriter*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::Class_1_F077E55B6446752D*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_6D3986FA20CF419D_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Int64 Method_1_380699992F9CB7F3(::System::IO::StreamWriter* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2, ::Class_1_99337DDD16B17366* a3, ::System::Boolean a4)
	{
		return ((::System::Int64(*)(::System::IO::StreamWriter*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::Class_1_99337DDD16B17366*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_380699992F9CB7F3_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Collections::Generic::HashSet_1<::System::String*>* Method_1_60606FD5427CA543_1(::Class_0_16E4307DCC419505_77* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::Class_0_16E4307DCC419505_77*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_60606FD5427CA543_1_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_78*>* Method_1_00AB706E91CC1231(::Class_0_16E4307DCC419505_77* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_78*>*(*)(::Class_0_16E4307DCC419505_77*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_00AB706E91CC1231_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::HashSet_1<::System::String*>* Method_1_CF84D53F2A6F5836(::System::Collections::Generic::List_1<::RPG::Client::AudioBundleInfoItem*>* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::System::Collections::Generic::List_1<::RPG::Client::AudioBundleInfoItem*>*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_CF84D53F2A6F5836_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_63ABA549BEAB770C(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_63ABA549BEAB770C_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_D39B07CFBD161D4F(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1, ::Class_1_F077E55B6446752D* a2, ::Class_1_99337DDD16B17366* a3)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::Class_1_F077E55B6446752D*, ::Class_1_99337DDD16B17366*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_D39B07CFBD161D4F_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_5DE431C7F7C7CDC1(::Class_0_16E4307DCC419505_78* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
	{
		return ((::System::Boolean(*)(::Class_0_16E4307DCC419505_78*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_5DE431C7F7C7CDC1_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_0BB88B96DFFF0881(::System::IO::StreamWriter* a1, ::System::String* a2, ::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_78*>* a3, ::System::Int64& a4)
	{
		return ((::System::Void(*)(::System::IO::StreamWriter*, ::System::String*, ::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_78*>*, ::System::Int64&))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_0BB88B96DFFF0881_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_FF1AFA9E6B3F7101(::System::IO::StreamWriter* a1, ::Class_1_F077E55B6446752D* a2, ::System::Collections::Generic::HashSet_1<::System::String*>* a3)
	{
		return ((::System::Void(*)(::System::IO::StreamWriter*, ::Class_1_F077E55B6446752D*, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_FF1AFA9E6B3F7101_OFFSET))(a1, a2, a3);
	}

	static ::System::Int64 Method_1_3F3E4145E35053CD(::System::String* a1, ::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_78*>* a2)
	{
		return ((::System::Int64(*)(::System::String*, ::System::Collections::Generic::HashSet_1<::Class_0_16E4307DCC419505_78*>*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_3F3E4145E35053CD_OFFSET))(a1, a2);
	}

	static ::System::Int64 Method_1_F684383D67CB4C47(::Class_1_F077E55B6446752D* a1, ::System::String* a2, ::System::Collections::Generic::HashSet_1<::System::String*>* a3)
	{
		return ((::System::Int64(*)(::Class_1_F077E55B6446752D*, ::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_F684383D67CB4C47_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4_METHOD_1_F0E307B84478A272_OFFSET))();
	}
};
