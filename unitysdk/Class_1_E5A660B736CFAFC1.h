#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::IO { class MemoryStream; }
namespace System::Net { class IPAddress; }
namespace System::Threading { template <typename T> class ThreadLocal_1; }

#define CLASS_1_E5A660B736CFAFC1_GET_ISIPV6_OFFSET UNITYSDK_OFFSET(0x172DE2F0)
#define CLASS_1_E5A660B736CFAFC1_METHOD_1_02D69C6112027DF5_OFFSET UNITYSDK_OFFSET(0x172DD420)
#define CLASS_1_E5A660B736CFAFC1_METHOD_1_03360C24C5987DAE_OFFSET UNITYSDK_OFFSET(0x172DC900)
#define CLASS_1_E5A660B736CFAFC1_METHOD_1_0D59BD29E23C0771_OFFSET UNITYSDK_OFFSET(0x172DCED0)
#define CLASS_1_E5A660B736CFAFC1_METHOD_1_14605D785C9D2B4A_OFFSET UNITYSDK_OFFSET(0x172DD100)
#define CLASS_1_E5A660B736CFAFC1_METHOD_1_2B2302243812800D_OFFSET UNITYSDK_OFFSET(0x172DDE20)
#define CLASS_1_E5A660B736CFAFC1_METHOD_1_3308870717AF24E5_OFFSET UNITYSDK_OFFSET(0x172DD130)
#define CLASS_1_E5A660B736CFAFC1_METHOD_1_35AFE2039B1E92EF_OFFSET UNITYSDK_OFFSET(0x172CD420)
#define CLASS_1_E5A660B736CFAFC1_METHOD_1_39ED67870BF88015_OFFSET UNITYSDK_OFFSET(0x172DD160)
#define CLASS_1_E5A660B736CFAFC1_METHOD_1_4CF35C62EE1FD2B8_OFFSET UNITYSDK_OFFSET(0x172D7FC0)
#define CLASS_1_E5A660B736CFAFC1_METHOD_1_54CDFF9B2CB68753_OFFSET UNITYSDK_OFFSET(0x172DD300)
#define CLASS_1_E5A660B736CFAFC1_METHOD_1_55E1A3087B1C7371_OFFSET UNITYSDK_OFFSET(0x172DD170)
#define CLASS_1_E5A660B736CFAFC1_METHOD_1_5B17DD16FC684DBD_OFFSET UNITYSDK_OFFSET(0x172DD120)
#define CLASS_1_E5A660B736CFAFC1_METHOD_1_60DE52194ACEF935_1_OFFSET UNITYSDK_OFFSET(0x172DCFB0)
#define CLASS_1_E5A660B736CFAFC1_METHOD_1_60DE52194ACEF935_OFFSET UNITYSDK_OFFSET(0x172DC8B0)
#define CLASS_1_E5A660B736CFAFC1_METHOD_1_6EA9D928D022FACB_OFFSET UNITYSDK_OFFSET(0x172DDAA0)
#define CLASS_1_E5A660B736CFAFC1_METHOD_1_85E900EE0E4F2552_OFFSET UNITYSDK_OFFSET(0x172DD110)
#define CLASS_1_E5A660B736CFAFC1_METHOD_1_90C69D725216529A_OFFSET UNITYSDK_OFFSET(0x172DD0C0)
#define CLASS_1_E5A660B736CFAFC1_METHOD_1_91ACFB149F2C4EC2_1_OFFSET UNITYSDK_OFFSET(0x172DCF80)
#define CLASS_1_E5A660B736CFAFC1_METHOD_1_91ACFB149F2C4EC2_OFFSET UNITYSDK_OFFSET(0x172DC840)
#define CLASS_1_E5A660B736CFAFC1_METHOD_1_96BDAD11054187DA_OFFSET UNITYSDK_OFFSET(0x172DD950)
#define CLASS_1_E5A660B736CFAFC1_METHOD_1_9743D5BAEA72D1A1_OFFSET UNITYSDK_OFFSET(0x172DD780)
#define CLASS_1_E5A660B736CFAFC1_METHOD_1_9EF8E7B835AEB32C_OFFSET UNITYSDK_OFFSET(0x172DD000)
#define CLASS_1_E5A660B736CFAFC1_METHOD_1_A32257B5D6142A91_OFFSET UNITYSDK_OFFSET(0x172DDD00)
#define CLASS_1_E5A660B736CFAFC1_METHOD_1_A8B75781B5F67AFC_OFFSET UNITYSDK_OFFSET(0x172DDAF0)
#define CLASS_1_E5A660B736CFAFC1_METHOD_1_AAF72E22CA5DD2E1_OFFSET UNITYSDK_OFFSET(0x172DD180)
#define CLASS_1_E5A660B736CFAFC1_METHOD_1_AD41D9AA3E451D1D_OFFSET UNITYSDK_OFFSET(0x172DD540)
#define CLASS_1_E5A660B736CFAFC1_METHOD_1_C37151B0D79BA278_OFFSET UNITYSDK_OFFSET(0x172DD8A0)
#define CLASS_1_E5A660B736CFAFC1_METHOD_1_C458AE313984D984_OFFSET UNITYSDK_OFFSET(0x172DD2A0)
#define CLASS_1_E5A660B736CFAFC1_METHOD_1_D3C068565A55F240_OFFSET UNITYSDK_OFFSET(0x172DDBC0)
#define CLASS_1_E5A660B736CFAFC1_METHOD_1_D8A9B24163F910EC_OFFSET UNITYSDK_OFFSET(0x172DC870)
#define CLASS_1_E5A660B736CFAFC1_METHOD_1_D9B935131C40B227_OFFSET UNITYSDK_OFFSET(0x172DD660)
#define CLASS_1_E5A660B736CFAFC1_METHOD_1_DBBAE552A052354A_OFFSET UNITYSDK_OFFSET(0x172DDE50)
#define CLASS_1_E5A660B736CFAFC1_METHOD_1_DD4F016BB5B32AD3_OFFSET UNITYSDK_OFFSET(0x172DD140)
#define CLASS_1_E5A660B736CFAFC1_METHOD_1_DE2206E83BD7DD50_OFFSET UNITYSDK_OFFSET(0x172DD080)
#define CLASS_1_E5A660B736CFAFC1_METHOD_1_DF8D95C0F140E5B0_OFFSET UNITYSDK_OFFSET(0x172DD040)
#define CLASS_1_E5A660B736CFAFC1_METHOD_1_E61F5C6DEEBF4FB0_OFFSET UNITYSDK_OFFSET(0x172DDDC0)
#define CLASS_1_E5A660B736CFAFC1_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x172DE360)
#define CLASS_1_E5A660B736CFAFC1_METHOD_1_F36ECC94BB21B573_OFFSET UNITYSDK_OFFSET(0x172DD150)
#define CLASS_1_E5A660B736CFAFC1_METHOD_1_F53D24C2BF164FBE_1_OFFSET UNITYSDK_OFFSET(0x172DCF50)
#define CLASS_1_E5A660B736CFAFC1_METHOD_1_F53D24C2BF164FBE_OFFSET UNITYSDK_OFFSET(0x172DCF20)
#define CLASS_1_E5A660B736CFAFC1_SET_ISIPV6_OFFSET UNITYSDK_OFFSET(0x172DE330)
#define CLASS_1_E5A660B736CFAFC1__CCTOR_OFFSET UNITYSDK_OFFSET(0x172DE3B0)

inline static constexpr unsigned int Class_1_E5A660B736CFAFC1_TypeDefinitionIndex = 32881;

class Class_1_E5A660B736CFAFC1 : public ::System::Object
{
public:
	static ::System::Threading::ThreadLocal_1<::Il2CppArray<::System::Byte>*>** StaticGet_Field_1_0()
	{
		return (::System::Threading::ThreadLocal_1<::Il2CppArray<::System::Byte>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E5A660B736CFAFC1_TypeDefinitionIndex)->GetStaticField(0x29A30);
	}
	static ::Il2CppArray<::System::UInt32>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E5A660B736CFAFC1_TypeDefinitionIndex)->GetStaticField(0x29A38);
	}
	static ::System::Boolean* StaticGet__isIPv6_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E5A660B736CFAFC1_TypeDefinitionIndex)->GetStaticField(0x9110);
	}
	// static const ::System::UInt32 Field_1_1 = 0xF0E1D2C3; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E5A660B736CFAFC1__CCTOR_OFFSET))();
	}

	static ::System::UInt32 Method_1_0D59BD29E23C0771(::System::Net::IPAddress* a1)
	{
		return ((::System::UInt32(*)(::System::Net::IPAddress*))((::PBYTE)hIl2Cpp + CLASS_1_E5A660B736CFAFC1_METHOD_1_0D59BD29E23C0771_OFFSET))(a1);
	}

	static ::System::UInt16 Method_1_F53D24C2BF164FBE(::System::UInt16 a1)
	{
		return ((::System::UInt16(*)(::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_1_E5A660B736CFAFC1_METHOD_1_F53D24C2BF164FBE_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_91ACFB149F2C4EC2(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E5A660B736CFAFC1_METHOD_1_91ACFB149F2C4EC2_OFFSET))(a1);
	}

	static ::System::UInt64 Method_1_60DE52194ACEF935(::System::UInt64 a1)
	{
		return ((::System::UInt64(*)(::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_E5A660B736CFAFC1_METHOD_1_60DE52194ACEF935_OFFSET))(a1);
	}

	static ::System::UInt16 Method_1_F53D24C2BF164FBE_1(::System::UInt16 a1)
	{
		return ((::System::UInt16(*)(::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_1_E5A660B736CFAFC1_METHOD_1_F53D24C2BF164FBE_1_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_91ACFB149F2C4EC2_1(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E5A660B736CFAFC1_METHOD_1_91ACFB149F2C4EC2_1_OFFSET))(a1);
	}

	static ::System::UInt64 Method_1_60DE52194ACEF935_1(::System::UInt64 a1)
	{
		return ((::System::UInt64(*)(::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_E5A660B736CFAFC1_METHOD_1_60DE52194ACEF935_1_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_9EF8E7B835AEB32C(::System::Int16 a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3)
	{
		return ((::System::Int32(*)(::System::Int16, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E5A660B736CFAFC1_METHOD_1_9EF8E7B835AEB32C_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_1_DF8D95C0F140E5B0(::System::UInt16 a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3)
	{
		return ((::System::Int32(*)(::System::UInt16, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E5A660B736CFAFC1_METHOD_1_DF8D95C0F140E5B0_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_1_DE2206E83BD7DD50(::System::Int32 a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3)
	{
		return ((::System::Int32(*)(::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E5A660B736CFAFC1_METHOD_1_DE2206E83BD7DD50_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_1_D8A9B24163F910EC(::System::UInt32 a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3)
	{
		return ((::System::Int32(*)(::System::UInt32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E5A660B736CFAFC1_METHOD_1_D8A9B24163F910EC_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_1_90C69D725216529A(::System::Int64 a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3)
	{
		return ((::System::Int32(*)(::System::Int64, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E5A660B736CFAFC1_METHOD_1_90C69D725216529A_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_1_03360C24C5987DAE(::System::UInt64 a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3)
	{
		return ((::System::Int32(*)(::System::UInt64, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E5A660B736CFAFC1_METHOD_1_03360C24C5987DAE_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_1_14605D785C9D2B4A(::System::Byte a1)
	{
		return ((::System::Int32(*)(::System::Byte))((::PBYTE)hIl2Cpp + CLASS_1_E5A660B736CFAFC1_METHOD_1_14605D785C9D2B4A_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_85E900EE0E4F2552(::System::SByte a1)
	{
		return ((::System::Int32(*)(::System::SByte))((::PBYTE)hIl2Cpp + CLASS_1_E5A660B736CFAFC1_METHOD_1_85E900EE0E4F2552_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_5B17DD16FC684DBD(::System::Int16 a1)
	{
		return ((::System::Int32(*)(::System::Int16))((::PBYTE)hIl2Cpp + CLASS_1_E5A660B736CFAFC1_METHOD_1_5B17DD16FC684DBD_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_3308870717AF24E5(::System::UInt16 a1)
	{
		return ((::System::Int32(*)(::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_1_E5A660B736CFAFC1_METHOD_1_3308870717AF24E5_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_DD4F016BB5B32AD3(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E5A660B736CFAFC1_METHOD_1_DD4F016BB5B32AD3_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_F36ECC94BB21B573(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E5A660B736CFAFC1_METHOD_1_F36ECC94BB21B573_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_39ED67870BF88015(::System::Int64 a1)
	{
		return ((::System::Int32(*)(::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_E5A660B736CFAFC1_METHOD_1_39ED67870BF88015_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_55E1A3087B1C7371(::System::UInt64 a1)
	{
		return ((::System::Int32(*)(::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_E5A660B736CFAFC1_METHOD_1_55E1A3087B1C7371_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_AAF72E22CA5DD2E1(::System::IO::MemoryStream* a1, ::System::Int16 a2)
	{
		return ((::System::Int32(*)(::System::IO::MemoryStream*, ::System::Int16))((::PBYTE)hIl2Cpp + CLASS_1_E5A660B736CFAFC1_METHOD_1_AAF72E22CA5DD2E1_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_54CDFF9B2CB68753(::System::IO::MemoryStream* a1, ::System::UInt16 a2)
	{
		return ((::System::Int32(*)(::System::IO::MemoryStream*, ::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_1_E5A660B736CFAFC1_METHOD_1_54CDFF9B2CB68753_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_02D69C6112027DF5(::System::IO::MemoryStream* a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::System::IO::MemoryStream*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E5A660B736CFAFC1_METHOD_1_02D69C6112027DF5_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_AD41D9AA3E451D1D(::System::IO::MemoryStream* a1, ::System::UInt32 a2)
	{
		return ((::System::Int32(*)(::System::IO::MemoryStream*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E5A660B736CFAFC1_METHOD_1_AD41D9AA3E451D1D_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_D9B935131C40B227(::System::IO::MemoryStream* a1, ::System::Int64 a2)
	{
		return ((::System::Int32(*)(::System::IO::MemoryStream*, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_E5A660B736CFAFC1_METHOD_1_D9B935131C40B227_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_9743D5BAEA72D1A1(::System::IO::MemoryStream* a1, ::System::UInt64 a2)
	{
		return ((::System::Int32(*)(::System::IO::MemoryStream*, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_E5A660B736CFAFC1_METHOD_1_9743D5BAEA72D1A1_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_35AFE2039B1E92EF(::System::IO::MemoryStream* a1, ::System::UInt32 a2)
	{
		return ((::System::Int32(*)(::System::IO::MemoryStream*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E5A660B736CFAFC1_METHOD_1_35AFE2039B1E92EF_OFFSET))(a1, a2);
	}

	static ::Il2CppArray<::System::Byte>* Method_1_C458AE313984D984()
	{
		return ((::Il2CppArray<::System::Byte>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E5A660B736CFAFC1_METHOD_1_C458AE313984D984_OFFSET))();
	}

	static ::System::UInt32 Method_1_C37151B0D79BA278(::System::IO::MemoryStream* a1)
	{
		return ((::System::UInt32(*)(::System::IO::MemoryStream*))((::PBYTE)hIl2Cpp + CLASS_1_E5A660B736CFAFC1_METHOD_1_C37151B0D79BA278_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_6EA9D928D022FACB(::System::IO::MemoryStream* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::UInt32(*)(::System::IO::MemoryStream*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E5A660B736CFAFC1_METHOD_1_6EA9D928D022FACB_OFFSET))(a1, a2, a3);
	}

	static ::System::UInt32 Method_1_A8B75781B5F67AFC(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::UInt32(*)(::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E5A660B736CFAFC1_METHOD_1_A8B75781B5F67AFC_OFFSET))(a1, a2);
	}

	static ::System::UInt32 Method_1_96BDAD11054187DA(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::UInt32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E5A660B736CFAFC1_METHOD_1_96BDAD11054187DA_OFFSET))(a1, a2, a3);
	}

	static ::System::UInt32 Method_1_D3C068565A55F240(::System::UInt32 a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::UInt32(*)(::System::UInt32, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E5A660B736CFAFC1_METHOD_1_D3C068565A55F240_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::UInt32 Method_1_A32257B5D6142A91(::System::UInt32 a1, ::System::IO::MemoryStream* a2)
	{
		return ((::System::UInt32(*)(::System::UInt32, ::System::IO::MemoryStream*))((::PBYTE)hIl2Cpp + CLASS_1_E5A660B736CFAFC1_METHOD_1_A32257B5D6142A91_OFFSET))(a1, a2);
	}

	static ::System::UInt32 Method_1_E61F5C6DEEBF4FB0(::System::UInt32 a1, ::System::IO::MemoryStream* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::UInt32(*)(::System::UInt32, ::System::IO::MemoryStream*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E5A660B736CFAFC1_METHOD_1_E61F5C6DEEBF4FB0_OFFSET))(a1, a2, a3, a4);
	}

	static ::Il2CppArray<::System::Byte>* Method_1_2B2302243812800D(::System::String* a1)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E5A660B736CFAFC1_METHOD_1_2B2302243812800D_OFFSET))(a1);
	}

	static ::Il2CppArray<::System::Byte>* Method_1_DBBAE552A052354A(::System::UInt64 a1)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_E5A660B736CFAFC1_METHOD_1_DBBAE552A052354A_OFFSET))(a1);
	}

	static ::System::Boolean get_isIPv6()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_E5A660B736CFAFC1_GET_ISIPV6_OFFSET))();
	}

	static ::System::Void set_isIPv6(::System::Boolean value)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E5A660B736CFAFC1_SET_ISIPV6_OFFSET))(value);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_E5A660B736CFAFC1_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Net::IPAddress* Method_1_4CF35C62EE1FD2B8(::System::Net::IPAddress* a1)
	{
		return ((::System::Net::IPAddress*(*)(::System::Net::IPAddress*))((::PBYTE)hIl2Cpp + CLASS_1_E5A660B736CFAFC1_METHOD_1_4CF35C62EE1FD2B8_OFFSET))(a1);
	}
};
