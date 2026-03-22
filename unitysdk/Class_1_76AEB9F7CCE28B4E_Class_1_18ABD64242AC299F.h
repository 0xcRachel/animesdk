#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_76AEB9F7CCE28B4E_Class_1_3E75962FCD9FB58B;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_76AEB9F7CCE28B4E_CLASS_1_18ABD64242AC299F_METHOD_1_615ECF09C3C6FC30_OFFSET UNITYSDK_OFFSET(0x10C76140)
#define CLASS_1_76AEB9F7CCE28B4E_CLASS_1_18ABD64242AC299F_METHOD_1_BC062F1D4054D29E_OFFSET UNITYSDK_OFFSET(0x10C76010)
#define CLASS_1_76AEB9F7CCE28B4E_CLASS_1_18ABD64242AC299F__CTOR_OFFSET UNITYSDK_OFFSET(0x10C762C0)

inline static constexpr unsigned int Class_1_76AEB9F7CCE28B4E_Class_1_18ABD64242AC299F_TypeDefinitionIndex = 51451;

class Class_1_76AEB9F7CCE28B4E_Class_1_18ABD64242AC299F : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_76AEB9F7CCE28B4E_Class_1_3E75962FCD9FB58B*>* FrontRoles; // 0x10
	::Il2CppArray<::Class_1_76AEB9F7CCE28B4E_Class_1_3E75962FCD9FB58B*>* BackRoles; // 0x18
	::Il2CppArray<::System::UInt32>* CarryIDs; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76AEB9F7CCE28B4E_CLASS_1_18ABD64242AC299F__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_BC062F1D4054D29E(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_76AEB9F7CCE28B4E_CLASS_1_18ABD64242AC299F_METHOD_1_BC062F1D4054D29E_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_1_615ECF09C3C6FC30(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_76AEB9F7CCE28B4E_CLASS_1_18ABD64242AC299F_METHOD_1_615ECF09C3C6FC30_OFFSET))(this, a1);
	}
};
