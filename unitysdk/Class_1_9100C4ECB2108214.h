#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9100C4ECB2108214_Class_1_084C324841B5505D;
class Class_1_DDB796240B07BA45;
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class Exception; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Net::Http { class HttpMethod; }

#define CLASS_1_9100C4ECB2108214_GET_BASEURL_OFFSET UNITYSDK_OFFSET(0x10D89D90)
#define CLASS_1_9100C4ECB2108214_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x10D89DD0)
#define CLASS_1_9100C4ECB2108214_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x10D89DA0)
#define CLASS_1_9100C4ECB2108214_GET_RAWBODY_OFFSET UNITYSDK_OFFSET(0x10D89DB0)
#define CLASS_1_9100C4ECB2108214_METHOD_1_02A7A18C0C862CD7_1_OFFSET UNITYSDK_OFFSET(0x10D89AA0)
#define CLASS_1_9100C4ECB2108214_METHOD_1_02A7A18C0C862CD7_OFFSET UNITYSDK_OFFSET(0x10D89DF0)
#define CLASS_1_9100C4ECB2108214_METHOD_1_0C8E1C5820BF9E87_OFFSET UNITYSDK_OFFSET(0x10D89080)
#define CLASS_1_9100C4ECB2108214_METHOD_1_6D6A531BA6C37990_OFFSET UNITYSDK_OFFSET(0x10D894A0)
#define CLASS_1_9100C4ECB2108214_METHOD_1_8F78A654C110A71C_OFFSET UNITYSDK_OFFSET(0x10D889E0)
#define CLASS_1_9100C4ECB2108214_METHOD_1_8FB5CCA5590BD2D8_OFFSET UNITYSDK_OFFSET(0x10D892E0)
#define CLASS_1_9100C4ECB2108214_METHOD_1_9F61E20AE5F1D6ED_OFFSET UNITYSDK_OFFSET(0x10D89B50)
#define CLASS_1_9100C4ECB2108214_METHOD_1_BD5D75BF46556740_OFFSET UNITYSDK_OFFSET(0x10D89870)
#define CLASS_1_9100C4ECB2108214_METHOD_1_CC82B15904416298_OFFSET UNITYSDK_OFFSET(0x10D89380)
#define CLASS_1_9100C4ECB2108214_METHOD_1_DF606F1BC273FE84_OFFSET UNITYSDK_OFFSET(0x10D891C0)
#define CLASS_1_9100C4ECB2108214_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x10D89DE0)
#define CLASS_1_9100C4ECB2108214_SET_RAWBODY_OFFSET UNITYSDK_OFFSET(0x10D89DC0)
#define CLASS_1_9100C4ECB2108214__CTOR_OFFSET UNITYSDK_OFFSET(0x10D88B00)

inline static constexpr unsigned int Class_1_9100C4ECB2108214_TypeDefinitionIndex = 55113;

class Class_1_9100C4ECB2108214 : public ::System::Object
{
public:
	::System::Net::Http::HttpMethod* _Method_k__BackingField; // 0x10
	::System::String* _BaseUrl_k__BackingField; // 0x18
	::System::String* _ContentType_k__BackingField; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_1_5; // 0x28
	::Il2CppArray<::System::Byte>* _RawBody_k__BackingField; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_1_4; // 0x38

	::System::Void _ctor(::System::String* a1, ::System::Net::Http::HttpMethod* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Net::Http::HttpMethod*))((::PBYTE)hIl2Cpp + CLASS_1_9100C4ECB2108214__CTOR_OFFSET))(this, a1, a2);
	}

	static ::Class_1_9100C4ECB2108214* Method_1_8F78A654C110A71C(::System::String* a1)
	{
		return ((::Class_1_9100C4ECB2108214*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9100C4ECB2108214_METHOD_1_8F78A654C110A71C_OFFSET))(a1);
	}

	static ::Class_1_9100C4ECB2108214* Method_1_0C8E1C5820BF9E87(::System::String* a1, ::System::Object* a2)
	{
		return ((::Class_1_9100C4ECB2108214*(*)(::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9100C4ECB2108214_METHOD_1_0C8E1C5820BF9E87_OFFSET))(a1, a2);
	}

	::System::Void Method_1_8FB5CCA5590BD2D8(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_1_9100C4ECB2108214_METHOD_1_8FB5CCA5590BD2D8_OFFSET))(this, a1);
	}

	::System::Void Method_1_CC82B15904416298(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_1_9100C4ECB2108214_METHOD_1_CC82B15904416298_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>* Method_1_6D6A531BA6C37990(::Class_1_9100C4ECB2108214_Class_1_084C324841B5505D* a1)
	{
		return ((::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*(*)(::PVOID, ::Class_1_9100C4ECB2108214_Class_1_084C324841B5505D*))((::PBYTE)hIl2Cpp + CLASS_1_9100C4ECB2108214_METHOD_1_6D6A531BA6C37990_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>* Method_1_BD5D75BF46556740(::System::UInt32 a1, ::Class_1_9100C4ECB2108214_Class_1_084C324841B5505D* a2)
	{
		return ((::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*(*)(::PVOID, ::System::UInt32, ::Class_1_9100C4ECB2108214_Class_1_084C324841B5505D*))((::PBYTE)hIl2Cpp + CLASS_1_9100C4ECB2108214_METHOD_1_BD5D75BF46556740_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DF606F1BC273FE84(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9100C4ECB2108214_METHOD_1_DF606F1BC273FE84_OFFSET))(this, a1);
	}

	::System::String* Method_1_9F61E20AE5F1D6ED()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9100C4ECB2108214_METHOD_1_9F61E20AE5F1D6ED_OFFSET))(this);
	}

	::System::String* get_BaseUrl()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9100C4ECB2108214_GET_BASEURL_OFFSET))(this);
	}

	::System::Net::Http::HttpMethod* get_Method()
	{
		return ((::System::Net::Http::HttpMethod*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9100C4ECB2108214_GET_METHOD_OFFSET))(this);
	}

	::Il2CppArray<::System::Byte>* get_RawBody()
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9100C4ECB2108214_GET_RAWBODY_OFFSET))(this);
	}

	::System::Void set_RawBody(::Il2CppArray<::System::Byte>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_9100C4ECB2108214_SET_RAWBODY_OFFSET))(this, value);
	}

	::System::String* get_ContentType()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9100C4ECB2108214_GET_CONTENTTYPE_OFFSET))(this);
	}

	::System::Void set_ContentType(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9100C4ECB2108214_SET_CONTENTTYPE_OFFSET))(this, value);
	}

	::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* Method_1_02A7A18C0C862CD7()
	{
		return ((::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9100C4ECB2108214_METHOD_1_02A7A18C0C862CD7_OFFSET))(this);
	}

	::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* Method_1_02A7A18C0C862CD7_1()
	{
		return ((::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9100C4ECB2108214_METHOD_1_02A7A18C0C862CD7_1_OFFSET))(this);
	}
};
