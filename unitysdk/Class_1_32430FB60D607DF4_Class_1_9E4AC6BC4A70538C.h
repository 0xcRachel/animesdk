#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/HttpStatusCode.h"
#include "unitysdk/System/Object.h"

class Class_1_B41FEFABBC80D531_2;
namespace System { template <typename T> class Action_1; }
namespace System::Net { class HttpWebRequest; }
namespace System::Net { class WebResponse; }

#define CLASS_1_32430FB60D607DF4_CLASS_1_9E4AC6BC4A70538C__CTOR_OFFSET UNITYSDK_OFFSET(0x10A7D4B0)

inline static constexpr unsigned int Class_1_32430FB60D607DF4_Class_1_9E4AC6BC4A70538C_TypeDefinitionIndex = 48350;

class Class_1_32430FB60D607DF4_Class_1_9E4AC6BC4A70538C : public ::System::Object
{
public:
	::System::Net::HttpWebRequest* Field_1_2; // 0x10
	::Il2CppArray<::System::Byte>* Field_1_1; // 0x18
	::System::Net::WebResponse* Field_1_3; // 0x20
	::Class_1_B41FEFABBC80D531_2* Field_1_4; // 0x28
	::System::Action_1<::System::Net::HttpStatusCode>* Field_1_5; // 0x30
	::System::UInt32 Field_1_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32430FB60D607DF4_CLASS_1_9E4AC6BC4A70538C__CTOR_OFFSET))(this);
	}
};
