#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A8D9B9F0D6AFDEDA.h"

namespace RPG::Client { class IAvatarInfoProvider; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_C683CE8F39E58309_METHOD_2_301C4EBDB09656A8_OFFSET UNITYSDK_OFFSET(0x86A3AD0)
#define CLASS_2_C683CE8F39E58309__CTOR_OFFSET UNITYSDK_OFFSET(0x86A3AC0)

inline static constexpr unsigned int Class_2_C683CE8F39E58309_TypeDefinitionIndex = 49858;

class Class_2_C683CE8F39E58309 : public ::Class_1_A8D9B9F0D6AFDEDA
{
public:
	::System::Func_2<::RPG::Client::IAvatarInfoProvider*, ::System::Int32>* Field_2_0; // 0x18

	::System::Void _ctor(::System::Func_2<::RPG::Client::IAvatarInfoProvider*, ::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::RPG::Client::IAvatarInfoProvider*, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_C683CE8F39E58309__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_301C4EBDB09656A8(::RPG::Client::IAvatarInfoProvider* a1, ::RPG::Client::IAvatarInfoProvider* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + CLASS_2_C683CE8F39E58309_METHOD_2_301C4EBDB09656A8_OFFSET))(this, a1, a2);
	}
};
