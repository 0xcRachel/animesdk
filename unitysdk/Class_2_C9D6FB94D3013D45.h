#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A8D9B9F0D6AFDEDA.h"

namespace RPG::Client { class IAvatarInfoProvider; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_C9D6FB94D3013D45_METHOD_2_54DF1D27FF4390F2_OFFSET UNITYSDK_OFFSET(0x86E6970)
#define CLASS_2_C9D6FB94D3013D45_METHOD_2_7889C0757DC06166_OFFSET UNITYSDK_OFFSET(0x86E6A30)
#define CLASS_2_C9D6FB94D3013D45_METHOD_2_9B9BBF1189082736_OFFSET UNITYSDK_OFFSET(0x86E6AB0)
#define CLASS_2_C9D6FB94D3013D45_METHOD_2_A573DD4F6E33EB93_OFFSET UNITYSDK_OFFSET(0x86E6C50)
#define CLASS_2_C9D6FB94D3013D45_METHOD_2_B2B6DE3E866C99C7_OFFSET UNITYSDK_OFFSET(0x86E69E0)
#define CLASS_2_C9D6FB94D3013D45_METHOD_2_D08FAE7F4490234F_OFFSET UNITYSDK_OFFSET(0x86E6BD0)
#define CLASS_2_C9D6FB94D3013D45__CTOR_OFFSET UNITYSDK_OFFSET(0x86E6D70)

inline static constexpr unsigned int Class_2_C9D6FB94D3013D45_TypeDefinitionIndex = 49857;

class Class_2_C9D6FB94D3013D45 : public ::Class_1_A8D9B9F0D6AFDEDA
{
public:
	::System::Comparison_1<::RPG::Client::IAvatarInfoProvider*>* Field_2_1; // 0x18
	::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9D6FB94D3013D45__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_54DF1D27FF4390F2(::System::Collections::Generic::IEnumerable_1<::RPG::Client::IAvatarInfoProvider*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::IAvatarInfoProvider*>*))((::PBYTE)hIl2Cpp + CLASS_2_C9D6FB94D3013D45_METHOD_2_54DF1D27FF4390F2_OFFSET))(this, a1);
	}

	::System::Void Method_2_B2B6DE3E866C99C7(::System::Comparison_1<::RPG::Client::IAvatarInfoProvider*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Comparison_1<::RPG::Client::IAvatarInfoProvider*>*))((::PBYTE)hIl2Cpp + CLASS_2_C9D6FB94D3013D45_METHOD_2_B2B6DE3E866C99C7_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_7889C0757DC06166(::RPG::Client::IAvatarInfoProvider* a1, ::RPG::Client::IAvatarInfoProvider* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + CLASS_2_C9D6FB94D3013D45_METHOD_2_7889C0757DC06166_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_9B9BBF1189082736(::RPG::Client::IAvatarInfoProvider* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + CLASS_2_C9D6FB94D3013D45_METHOD_2_9B9BBF1189082736_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_D08FAE7F4490234F(::RPG::Client::IAvatarInfoProvider* a1, ::RPG::Client::IAvatarInfoProvider* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + CLASS_2_C9D6FB94D3013D45_METHOD_2_D08FAE7F4490234F_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_A573DD4F6E33EB93(::RPG::Client::IAvatarInfoProvider* a1, ::RPG::Client::IAvatarInfoProvider* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + CLASS_2_C9D6FB94D3013D45_METHOD_2_A573DD4F6E33EB93_OFFSET))(this, a1, a2);
	}
};
