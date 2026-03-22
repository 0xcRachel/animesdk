#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_552;
namespace RPG::Client { class IAvatarInfoProvider; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C7650F5831B2BCEE_METHOD_1_066B4A2C516F676F_OFFSET UNITYSDK_OFFSET(0x10EB42A0)
#define CLASS_1_C7650F5831B2BCEE_METHOD_1_359F14A55A0B5E94_OFFSET UNITYSDK_OFFSET(0x10EB4440)
#define CLASS_1_C7650F5831B2BCEE_METHOD_1_6DA895D00271C644_OFFSET UNITYSDK_OFFSET(0x10EB4190)
#define CLASS_1_C7650F5831B2BCEE_METHOD_1_82ABFE24D5168B0C_OFFSET UNITYSDK_OFFSET(0x10EB4120)
#define CLASS_1_C7650F5831B2BCEE_METHOD_1_8C4350723B073B59_OFFSET UNITYSDK_OFFSET(0x10EB4330)
#define CLASS_1_C7650F5831B2BCEE__CTOR_OFFSET UNITYSDK_OFFSET(0x10EB4670)

inline static constexpr unsigned int Class_1_C7650F5831B2BCEE_TypeDefinitionIndex = 49845;

class Class_1_C7650F5831B2BCEE : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_552*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7650F5831B2BCEE__CTOR_OFFSET))(this);
	}

	::Class_1_C7650F5831B2BCEE* Method_1_82ABFE24D5168B0C()
	{
		return ((::Class_1_C7650F5831B2BCEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7650F5831B2BCEE_METHOD_1_82ABFE24D5168B0C_OFFSET))(this);
	}

	::Class_1_C7650F5831B2BCEE* Method_1_6DA895D00271C644(::System::Comparison_1<::RPG::Client::IAvatarInfoProvider*>* a1, ::System::Boolean a2)
	{
		return ((::Class_1_C7650F5831B2BCEE*(*)(::PVOID, ::System::Comparison_1<::RPG::Client::IAvatarInfoProvider*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C7650F5831B2BCEE_METHOD_1_6DA895D00271C644_OFFSET))(this, a1, a2);
	}

	::Class_1_C7650F5831B2BCEE* Method_1_8C4350723B073B59(::System::Func_2<::RPG::Client::IAvatarInfoProvider*, ::System::Int32>* a1, ::System::Boolean a2)
	{
		return ((::Class_1_C7650F5831B2BCEE*(*)(::PVOID, ::System::Func_2<::RPG::Client::IAvatarInfoProvider*, ::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C7650F5831B2BCEE_METHOD_1_8C4350723B073B59_OFFSET))(this, a1, a2);
	}

	::Class_1_C7650F5831B2BCEE* Method_1_066B4A2C516F676F(::Class_0_16E4307DCC419505_552* a1)
	{
		return ((::Class_1_C7650F5831B2BCEE*(*)(::PVOID, ::Class_0_16E4307DCC419505_552*))((::PBYTE)hIl2Cpp + CLASS_1_C7650F5831B2BCEE_METHOD_1_066B4A2C516F676F_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_552* Method_1_359F14A55A0B5E94()
	{
		return ((::Class_0_16E4307DCC419505_552*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7650F5831B2BCEE_METHOD_1_359F14A55A0B5E94_OFFSET))(this);
	}
};
