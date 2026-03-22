#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Class_2_A47CE961F7213AA1_DiffState.h"

namespace RPG::Client { class ActivityElationAvatarData; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_A47CE961F7213AA1_GET_ISDISABLED_OFFSET UNITYSDK_OFFSET(0x10603AE0)
#define CLASS_2_A47CE961F7213AA1_METHOD_2_092CD57850778EFC_OFFSET UNITYSDK_OFFSET(0x10603A00)
#define CLASS_2_A47CE961F7213AA1_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x106037F0)
#define CLASS_2_A47CE961F7213AA1_METHOD_2_432096CD9094FBAA_OFFSET UNITYSDK_OFFSET(0x10603180)
#define CLASS_2_A47CE961F7213AA1_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x10603570)
#define CLASS_2_A47CE961F7213AA1_METHOD_2_800BDA772F0F73E3_OFFSET UNITYSDK_OFFSET(0x10603900)
#define CLASS_2_A47CE961F7213AA1_METHOD_2_8F697642FBF3BDA7_OFFSET UNITYSDK_OFFSET(0x106034D0)
#define CLASS_2_A47CE961F7213AA1_METHOD_2_B3A88D7849969A71_OFFSET UNITYSDK_OFFSET(0x10603460)
#define CLASS_2_A47CE961F7213AA1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10603400)
#define CLASS_2_A47CE961F7213AA1_METHOD_2_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x106035E0)
#define CLASS_2_A47CE961F7213AA1_SET_ISDISABLED_OFFSET UNITYSDK_OFFSET(0x10603AF0)
#define CLASS_2_A47CE961F7213AA1__CTOR_OFFSET UNITYSDK_OFFSET(0x10603B00)
#define CLASS_2_A47CE961F7213AA1__ONBIND_OFFSET UNITYSDK_OFFSET(0x106030E0)
#define CLASS_2_A47CE961F7213AA1__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x106039B0)
#define CLASS_2_A47CE961F7213AA1__ONTICK_OFFSET UNITYSDK_OFFSET(0x10603840)
#define CLASS_2_A47CE961F7213AA1___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x10603B40)
#define CLASS_2_A47CE961F7213AA1___IFIXBASEPROXY__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x10603C10)
#define CLASS_2_A47CE961F7213AA1___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x10603BA0)

inline static constexpr unsigned int Class_2_A47CE961F7213AA1_TypeDefinitionIndex = 56900;

class Class_2_A47CE961F7213AA1 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::Single Field_2_6; // 0x0
	// static const ::System::String* Field_2_10; // 0x0
	// static const ::System::String* Field_2_11; // 0x0
	::UnityEngine::UI::Text* Field_2_1; // 0x60
	::System::Action_1<::System::UInt32>* Field_2_7; // 0x68
	::UnityEngine::UI::Image* Field_2_0; // 0x70
	::UnityEngine::Animation* Field_2_2; // 0x78
	::System::Boolean _IsDisabled_k__BackingField; // 0x80
	::System::UInt32 Field_2_3; // 0x84
	::System::Single Field_2_5; // 0x88
	::Class_2_A47CE961F7213AA1_DiffState Field_2_4; // 0x8C
	::System::UInt32 Field_2_8; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A47CE961F7213AA1__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A47CE961F7213AA1__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_432096CD9094FBAA(::RPG::Client::ActivityElationAvatarData* a1, ::System::UInt32 a2, ::System::Action_1<::System::UInt32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityElationAvatarData*, ::System::UInt32, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_A47CE961F7213AA1_METHOD_2_432096CD9094FBAA_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_8F697642FBF3BDA7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_A47CE961F7213AA1_METHOD_2_8F697642FBF3BDA7_OFFSET))(this, a1);
	}

	::System::Void Method_2_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A47CE961F7213AA1_METHOD_2_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A47CE961F7213AA1_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A47CE961F7213AA1__ONTICK_OFFSET))(this, a1);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A47CE961F7213AA1__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A47CE961F7213AA1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A47CE961F7213AA1_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_800BDA772F0F73E3(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A47CE961F7213AA1_METHOD_2_800BDA772F0F73E3_OFFSET))(this, a1);
	}

	::System::Void Method_2_B3A88D7849969A71(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_A47CE961F7213AA1_METHOD_2_B3A88D7849969A71_OFFSET))(this, a1);
	}

	::System::Void Method_2_092CD57850778EFC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A47CE961F7213AA1_METHOD_2_092CD57850778EFC_OFFSET))(this);
	}

	::System::Boolean get_IsDisabled()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A47CE961F7213AA1_GET_ISDISABLED_OFFSET))(this);
	}

	::System::Void set_IsDisabled(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A47CE961F7213AA1_SET_ISDISABLED_OFFSET))(this, value);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A47CE961F7213AA1___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A47CE961F7213AA1___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy__OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A47CE961F7213AA1___IFIXBASEPROXY__ONDISPOSE_OFFSET))(this);
	}
};
