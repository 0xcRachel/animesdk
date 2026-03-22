#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A8D9B9F0D6AFDEDA.h"

class Class_0_16E4307DCC419505_552;
namespace RPG::Client { class IAvatarInfoProvider; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_2_FEB22BCD44D51EBA_METHOD_2_AE2428F67AE078CA_OFFSET UNITYSDK_OFFSET(0x8730E50)
#define CLASS_2_FEB22BCD44D51EBA_METHOD_2_B34B374BE755AE54_OFFSET UNITYSDK_OFFSET(0x87310F0)
#define CLASS_2_FEB22BCD44D51EBA_METHOD_2_D093F6392382BCD8_OFFSET UNITYSDK_OFFSET(0x8730AD0)
#define CLASS_2_FEB22BCD44D51EBA__CTOR_OFFSET UNITYSDK_OFFSET(0x8730A50)

inline static constexpr unsigned int Class_2_FEB22BCD44D51EBA_TypeDefinitionIndex = 49843;

class Class_2_FEB22BCD44D51EBA : public ::Class_1_A8D9B9F0D6AFDEDA
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_552*>* Field_2_0; // 0x18

	::System::Void _ctor(::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_552*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_552*>*))((::PBYTE)hIl2Cpp + CLASS_2_FEB22BCD44D51EBA__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_D093F6392382BCD8(::System::Action_1<::System::Collections::Generic::IComparer_1<::RPG::Client::IAvatarInfoProvider*>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::IComparer_1<::RPG::Client::IAvatarInfoProvider*>*>*))((::PBYTE)hIl2Cpp + CLASS_2_FEB22BCD44D51EBA_METHOD_2_D093F6392382BCD8_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_AE2428F67AE078CA(::RPG::Client::IAvatarInfoProvider* a1, ::RPG::Client::IAvatarInfoProvider* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + CLASS_2_FEB22BCD44D51EBA_METHOD_2_AE2428F67AE078CA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B34B374BE755AE54(::System::Action_1<::System::Collections::Generic::IComparer_1<::RPG::Client::IAvatarInfoProvider*>*>* P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Collections::Generic::IComparer_1<::RPG::Client::IAvatarInfoProvider*>*>*))((::PBYTE)hIl2Cpp + CLASS_2_FEB22BCD44D51EBA_METHOD_2_B34B374BE755AE54_OFFSET))(this, P0);
	}
};
