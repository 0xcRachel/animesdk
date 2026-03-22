#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/Class_1_F65325D8B8B14283_Struct_2_779AF68A0DC54374.h"
#include "unitysdk/RPG/Client/VoiceType.h"
#include "unitysdk/System/Object.h"

class AkCallbackInfo;
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class TeamData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F65325D8B8B14283_METHOD_1_07E567B3C6C3D7D7_OFFSET UNITYSDK_OFFSET(0x109CAE40)
#define CLASS_1_F65325D8B8B14283_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x109CAA80)
#define CLASS_1_F65325D8B8B14283_METHOD_1_510C3C62CAC002C3_OFFSET UNITYSDK_OFFSET(0x109C9C30)
#define CLASS_1_F65325D8B8B14283_METHOD_1_63D53C1411B8F5FC_OFFSET UNITYSDK_OFFSET(0x109C9CC0)
#define CLASS_1_F65325D8B8B14283_METHOD_1_7F0C8094100A93C6_OFFSET UNITYSDK_OFFSET(0x109CABA0)
#define CLASS_1_F65325D8B8B14283_METHOD_1_87E0654B98D0D63C_OFFSET UNITYSDK_OFFSET(0x109C9BA0)
#define CLASS_1_F65325D8B8B14283_METHOD_1_CF62849B470F5C21_OFFSET UNITYSDK_OFFSET(0x109CA9F0)
#define CLASS_1_F65325D8B8B14283_METHOD_1_DB555289F5744277_OFFSET UNITYSDK_OFFSET(0x109CADD0)
#define CLASS_1_F65325D8B8B14283_METHOD_1_FE275294F69C24FC_OFFSET UNITYSDK_OFFSET(0x109CA7E0)
#define CLASS_1_F65325D8B8B14283__CTOR_OFFSET UNITYSDK_OFFSET(0x109C9B00)

inline static constexpr unsigned int Class_1_F65325D8B8B14283_TypeDefinitionIndex = 54045;

class Class_1_F65325D8B8B14283 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_F65325D8B8B14283_Struct_2_779AF68A0DC54374>* Field_1_0; // 0x10
	::System::Boolean Field_1_2; // 0x18
	::System::UInt32 Field_1_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65325D8B8B14283__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_87E0654B98D0D63C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65325D8B8B14283_METHOD_1_87E0654B98D0D63C_OFFSET))(this);
	}

	::System::Void Method_1_510C3C62CAC002C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65325D8B8B14283_METHOD_1_510C3C62CAC002C3_OFFSET))(this);
	}

	::System::Void Method_1_63D53C1411B8F5FC(::RPG::Client::IAvatarInfoProvider* a1, ::RPG::Client::TeamData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*, ::RPG::Client::TeamData*))((::PBYTE)hIl2Cpp + CLASS_1_F65325D8B8B14283_METHOD_1_63D53C1411B8F5FC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65325D8B8B14283_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_1_7F0C8094100A93C6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F65325D8B8B14283_METHOD_1_7F0C8094100A93C6_OFFSET))(this, a1);
	}

	::System::Void Method_1_DB555289F5744277(::System::UInt32 a1, ::AkCallbackType a2, ::AkCallbackInfo* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + CLASS_1_F65325D8B8B14283_METHOD_1_DB555289F5744277_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_CF62849B470F5C21(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::VoiceType a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::VoiceType))((::PBYTE)hIl2Cpp + CLASS_1_F65325D8B8B14283_METHOD_1_CF62849B470F5C21_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_FE275294F69C24FC(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F65325D8B8B14283_METHOD_1_FE275294F69C24FC_OFFSET))(this, a1);
	}

	::System::Void Method_1_07E567B3C6C3D7D7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65325D8B8B14283_METHOD_1_07E567B3C6C3D7D7_OFFSET))(this);
	}
};
