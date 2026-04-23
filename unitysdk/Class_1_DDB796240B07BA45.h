#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_AC6C63F15E9794D3;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_DDB796240B07BA45_GET_HEADERS_OFFSET UNITYSDK_OFFSET(0xEBA3940)
#define CLASS_1_DDB796240B07BA45_GET_HTTPSTATUS_OFFSET UNITYSDK_OFFSET(0xEBA3920)
#define CLASS_1_DDB796240B07BA45_GET_RAWBODY_OFFSET UNITYSDK_OFFSET(0xEBA3960)
#define CLASS_1_DDB796240B07BA45_GET_REQUEST_OFFSET UNITYSDK_OFFSET(0xEBA3910)
#define CLASS_1_DDB796240B07BA45_SET_HEADERS_OFFSET UNITYSDK_OFFSET(0xEBA3950)
#define CLASS_1_DDB796240B07BA45_SET_HTTPSTATUS_OFFSET UNITYSDK_OFFSET(0xEBA3930)
#define CLASS_1_DDB796240B07BA45_SET_RAWBODY_OFFSET UNITYSDK_OFFSET(0xEBA3970)
#define CLASS_1_DDB796240B07BA45__CTOR_OFFSET UNITYSDK_OFFSET(0xEBA3900)

inline static constexpr unsigned int Class_1_DDB796240B07BA45_TypeDefinitionIndex = 63928;

class Class_1_DDB796240B07BA45 : public ::System::Object
{
public:
	::Il2CppArray<::System::Byte>* _RawBody_k__BackingField; // 0x10
	::Class_1_AC6C63F15E9794D3* _Request_k__BackingField; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _Headers_k__BackingField; // 0x20
	::System::Int64 _HttpStatus_k__BackingField; // 0x28

	::System::Void _ctor(::Class_1_AC6C63F15E9794D3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AC6C63F15E9794D3*))((::PBYTE)hIl2Cpp + CLASS_1_DDB796240B07BA45__CTOR_OFFSET))(this, a1);
	}

	::Class_1_AC6C63F15E9794D3* get_Request()
	{
		return ((::Class_1_AC6C63F15E9794D3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DDB796240B07BA45_GET_REQUEST_OFFSET))(this);
	}

	::System::Int64 get_HttpStatus()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DDB796240B07BA45_GET_HTTPSTATUS_OFFSET))(this);
	}

	::System::Void set_HttpStatus(::System::Int64 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_DDB796240B07BA45_SET_HTTPSTATUS_OFFSET))(this, value);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* get_Headers()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DDB796240B07BA45_GET_HEADERS_OFFSET))(this);
	}

	::System::Void set_Headers(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_DDB796240B07BA45_SET_HEADERS_OFFSET))(this, value);
	}

	::Il2CppArray<::System::Byte>* get_RawBody()
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DDB796240B07BA45_GET_RAWBODY_OFFSET))(this);
	}

	::System::Void set_RawBody(::Il2CppArray<::System::Byte>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_DDB796240B07BA45_SET_RAWBODY_OFFSET))(this, value);
	}
};
