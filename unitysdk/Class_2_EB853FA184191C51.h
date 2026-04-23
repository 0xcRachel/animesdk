#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7ACCB923E979A908.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarInfo; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_EB853FA184191C51_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xC5DFAD0)
#define CLASS_2_EB853FA184191C51__CTOR_OFFSET UNITYSDK_OFFSET(0xC5DFA50)
#define CLASS_2_EB853FA184191C51___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xC5DFF40)

inline static constexpr unsigned int Class_2_EB853FA184191C51_TypeDefinitionIndex = 69418;

class Class_2_EB853FA184191C51 : public ::Class_1_7ACCB923E979A908
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_0; // 0x20
	::RPG::Client::ActivityIdleLive::IdleLiveAvatarInfo* Field_2_1; // 0x28

	::System::Void _ctor(::System::Collections::Generic::IList_1<::System::UInt32>* a1, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarInfo*))((::PBYTE)hIl2Cpp + CLASS_2_EB853FA184191C51__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EB853FA184191C51_ONEXECUTE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EB853FA184191C51___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};
