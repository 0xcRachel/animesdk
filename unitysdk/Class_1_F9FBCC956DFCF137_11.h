#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5810BA24C6F51B99;

#define CLASS_1_F9FBCC956DFCF137_11_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0xD8700A0)
#define CLASS_1_F9FBCC956DFCF137_11__CTOR_OFFSET UNITYSDK_OFFSET(0xD8700B0)

inline static constexpr unsigned int Class_1_F9FBCC956DFCF137_11_TypeDefinitionIndex = 59957;

class Class_1_F9FBCC956DFCF137_11 : public ::System::Object
{
public:
	::Class_1_5810BA24C6F51B99* _Response_k__BackingField; // 0x10

	::System::Void _ctor(::Class_1_5810BA24C6F51B99* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5810BA24C6F51B99*))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_11__CTOR_OFFSET))(this, a1);
	}

	::Class_1_5810BA24C6F51B99* get_Response()
	{
		return ((::Class_1_5810BA24C6F51B99*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_11_GET_RESPONSE_OFFSET))(this);
	}
};
