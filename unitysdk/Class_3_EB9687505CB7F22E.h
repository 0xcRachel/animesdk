#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_3DE15EA7F53A0550.h"

class Class_1_2FDE33CCAE591AA8;
class Class_1_CB8B5340883CE90A;
class Class_3_1E72A78E8E12A198;
namespace RPG::Client { class OfferingRewardData; }
namespace RPG::Client::MVVM::Model { class LimaoNewsIssueData; }
namespace RPG::Client::MVVM::Service { class LimaoNewsOfferingService; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_EB9687505CB7F22E_GET_ONBTNCLOSE_OFFSET UNITYSDK_OFFSET(0x10320640)
#define CLASS_3_EB9687505CB7F22E_METHOD_3_3F7AB21DB7260DCD_OFFSET UNITYSDK_OFFSET(0x10320350)
#define CLASS_3_EB9687505CB7F22E_METHOD_3_46F0AB40DE3C6D6E_OFFSET UNITYSDK_OFFSET(0x103205D0)
#define CLASS_3_EB9687505CB7F22E_METHOD_3_4EE744AE4735EE0A_OFFSET UNITYSDK_OFFSET(0x10320560)
#define CLASS_3_EB9687505CB7F22E_METHOD_3_975D3A1B9291A1C0_OFFSET UNITYSDK_OFFSET(0x103201E0)
#define CLASS_3_EB9687505CB7F22E_METHOD_3_D9C7CE38124CA6E8_OFFSET UNITYSDK_OFFSET(0x10320580)
#define CLASS_3_EB9687505CB7F22E_SET_ONBTNCLOSE_OFFSET UNITYSDK_OFFSET(0x10320650)
#define CLASS_3_EB9687505CB7F22E__CTOR_OFFSET UNITYSDK_OFFSET(0x103200C0)
#define CLASS_3_EB9687505CB7F22E___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x10320660)

inline static constexpr unsigned int Class_3_EB9687505CB7F22E_TypeDefinitionIndex = 59204;

class Class_3_EB9687505CB7F22E : public ::Class_2_3DE15EA7F53A0550
{
public:
	::System::Collections::Generic::List_1<::Class_3_1E72A78E8E12A198*>* Field_3_2; // 0x18
	::RPG::Client::MVVM::Model::LimaoNewsIssueData* Field_3_1; // 0x20
	::Class_1_2FDE33CCAE591AA8* _OnBtnClose_k__BackingField; // 0x28
	::RPG::Client::MVVM::Service::LimaoNewsOfferingService* Field_3_4; // 0x30
	::Class_1_CB8B5340883CE90A* Field_3_3; // 0x38

	::System::Void _ctor(::RPG::Client::MVVM::Model::LimaoNewsIssueData* a1, ::Class_1_CB8B5340883CE90A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MVVM::Model::LimaoNewsIssueData*, ::Class_1_CB8B5340883CE90A*))((::PBYTE)hIl2Cpp + CLASS_3_EB9687505CB7F22E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* Method_3_3F7AB21DB7260DCD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EB9687505CB7F22E_METHOD_3_3F7AB21DB7260DCD_OFFSET))(this);
	}

	::RPG::Client::OfferingRewardData* Method_3_4EE744AE4735EE0A()
	{
		return ((::RPG::Client::OfferingRewardData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EB9687505CB7F22E_METHOD_3_4EE744AE4735EE0A_OFFSET))(this);
	}

	::RPG::Client::OfferingRewardData* Method_3_D9C7CE38124CA6E8()
	{
		return ((::RPG::Client::OfferingRewardData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EB9687505CB7F22E_METHOD_3_D9C7CE38124CA6E8_OFFSET))(this);
	}

	::Class_3_1E72A78E8E12A198* Method_3_46F0AB40DE3C6D6E(::System::Int32 a1)
	{
		return ((::Class_3_1E72A78E8E12A198*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_EB9687505CB7F22E_METHOD_3_46F0AB40DE3C6D6E_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_3_1E72A78E8E12A198*>* Method_3_975D3A1B9291A1C0()
	{
		return ((::System::Collections::Generic::List_1<::Class_3_1E72A78E8E12A198*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EB9687505CB7F22E_METHOD_3_975D3A1B9291A1C0_OFFSET))(this);
	}

	::Class_1_2FDE33CCAE591AA8* get_OnBtnClose()
	{
		return ((::Class_1_2FDE33CCAE591AA8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EB9687505CB7F22E_GET_ONBTNCLOSE_OFFSET))(this);
	}

	::System::Void set_OnBtnClose(::Class_1_2FDE33CCAE591AA8* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2FDE33CCAE591AA8*))((::PBYTE)hIl2Cpp + CLASS_3_EB9687505CB7F22E_SET_ONBTNCLOSE_OFFSET))(this, value);
	}

	::System::Void __ctor_b__0_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EB9687505CB7F22E___CTOR_B__0_0_OFFSET))(this);
	}
};
