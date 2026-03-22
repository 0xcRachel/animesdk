#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MuseumModule; }
namespace System { class String; }

#define CLASS_1_5D00DB3E9A35F57F_METHOD_1_2C8425ABFEF12691_OFFSET UNITYSDK_OFFSET(0x111D5A30)
#define CLASS_1_5D00DB3E9A35F57F_METHOD_1_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x111D5B10)
#define CLASS_1_5D00DB3E9A35F57F_METHOD_1_9CA35E5BF1A50E77_OFFSET UNITYSDK_OFFSET(0x111D5900)
#define CLASS_1_5D00DB3E9A35F57F_METHOD_1_9F2E6C28EBE466FC_OFFSET UNITYSDK_OFFSET(0x111D5190)
#define CLASS_1_5D00DB3E9A35F57F_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x111D5980)
#define CLASS_1_5D00DB3E9A35F57F_METHOD_1_CE18697B63E52504_1_OFFSET UNITYSDK_OFFSET(0x111D57C0)
#define CLASS_1_5D00DB3E9A35F57F_METHOD_1_CE18697B63E52504_2_OFFSET UNITYSDK_OFFSET(0x111D5BD0)
#define CLASS_1_5D00DB3E9A35F57F_METHOD_1_CE18697B63E52504_OFFSET UNITYSDK_OFFSET(0x111D5740)
#define CLASS_1_5D00DB3E9A35F57F_METHOD_1_D2809205008ACF99_OFFSET UNITYSDK_OFFSET(0x111D5840)

inline static constexpr unsigned int Class_1_5D00DB3E9A35F57F_TypeDefinitionIndex = 52834;

class Class_1_5D00DB3E9A35F57F : public ::System::Object
{
public:
	static ::RPG::Client::MuseumModule** StaticGet_Field_1_0()
	{
		return (::RPG::Client::MuseumModule**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5D00DB3E9A35F57F_TypeDefinitionIndex)->GetStaticField(0x442A0);
	}

	static ::System::Boolean Method_1_9F2E6C28EBE466FC(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5D00DB3E9A35F57F_METHOD_1_9F2E6C28EBE466FC_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_CE18697B63E52504()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_5D00DB3E9A35F57F_METHOD_1_CE18697B63E52504_OFFSET))();
	}

	static ::System::Boolean Method_1_CE18697B63E52504_1()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_5D00DB3E9A35F57F_METHOD_1_CE18697B63E52504_1_OFFSET))();
	}

	static ::System::Boolean Method_1_D2809205008ACF99()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_5D00DB3E9A35F57F_METHOD_1_D2809205008ACF99_OFFSET))();
	}

	static ::System::Boolean Method_1_9CA35E5BF1A50E77()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_5D00DB3E9A35F57F_METHOD_1_9CA35E5BF1A50E77_OFFSET))();
	}

	static ::System::Boolean Method_1_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_5D00DB3E9A35F57F_METHOD_1_A3FAE12D7B6ACD62_OFFSET))();
	}

	static ::System::Boolean Method_1_2C8425ABFEF12691(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5D00DB3E9A35F57F_METHOD_1_2C8425ABFEF12691_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_5D00DB3E9A35F57F_METHOD_1_4DA6D4A624E42CAB_OFFSET))();
	}

	static ::System::Boolean Method_1_CE18697B63E52504_2()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_5D00DB3E9A35F57F_METHOD_1_CE18697B63E52504_2_OFFSET))();
	}
};
