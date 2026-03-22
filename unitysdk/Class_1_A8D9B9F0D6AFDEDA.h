#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAvatarInfoProvider; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }

#define CLASS_1_A8D9B9F0D6AFDEDA_COMPARE_OFFSET UNITYSDK_OFFSET(0xFF0D540)
#define CLASS_1_A8D9B9F0D6AFDEDA_GET_ISDESCENDING_OFFSET UNITYSDK_OFFSET(0xFF0D530)
#define CLASS_1_A8D9B9F0D6AFDEDA_METHOD_1_A2E80138818BDB43_OFFSET UNITYSDK_OFFSET(0xFF0D5B0)
#define CLASS_1_A8D9B9F0D6AFDEDA_METHOD_1_F064CC2C22995DE6_OFFSET UNITYSDK_OFFSET(0xFF0D610)
#define CLASS_1_A8D9B9F0D6AFDEDA_SET_ISDESCENDING_OFFSET UNITYSDK_OFFSET(0xFF0D520)
#define CLASS_1_A8D9B9F0D6AFDEDA__CTOR_OFFSET UNITYSDK_OFFSET(0xFF0D670)

inline static constexpr unsigned int Class_1_A8D9B9F0D6AFDEDA_TypeDefinitionIndex = 49844;

class Class_1_A8D9B9F0D6AFDEDA : public ::System::Object
{
public:
	::System::Boolean _IsDescending_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8D9B9F0D6AFDEDA__CTOR_OFFSET))(this);
	}

	::System::Void set_IsDescending(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A8D9B9F0D6AFDEDA_SET_ISDESCENDING_OFFSET))(this, value);
	}

	::System::Boolean get_IsDescending()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8D9B9F0D6AFDEDA_GET_ISDESCENDING_OFFSET))(this);
	}

	::System::Int32 Compare(::RPG::Client::IAvatarInfoProvider* a1, ::RPG::Client::IAvatarInfoProvider* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + CLASS_1_A8D9B9F0D6AFDEDA_COMPARE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A2E80138818BDB43(::System::Action_1<::System::Collections::Generic::IComparer_1<::RPG::Client::IAvatarInfoProvider*>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::IComparer_1<::RPG::Client::IAvatarInfoProvider*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_A8D9B9F0D6AFDEDA_METHOD_1_A2E80138818BDB43_OFFSET))(this, a1);
	}

	::System::Void Method_1_F064CC2C22995DE6(::System::Action_1<::System::Collections::Generic::IComparer_1<::RPG::Client::IAvatarInfoProvider*>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::IComparer_1<::RPG::Client::IAvatarInfoProvider*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_A8D9B9F0D6AFDEDA_METHOD_1_F064CC2C22995DE6_OFFSET))(this, a1);
	}
};
