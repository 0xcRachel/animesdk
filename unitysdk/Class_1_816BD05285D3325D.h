#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace EnviromentSystem { class EnviromentProfile; }
namespace RPG::Client { class IAssetOperation; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_816BD05285D3325D_METHOD_1_05114270587ACE3F_OFFSET UNITYSDK_OFFSET(0x10B8AD80)
#define CLASS_1_816BD05285D3325D_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x10B8A020)
#define CLASS_1_816BD05285D3325D_METHOD_1_6F4A6B5CE800C615_OFFSET UNITYSDK_OFFSET(0x10B89E70)
#define CLASS_1_816BD05285D3325D_METHOD_1_9E7803F3C67E3CFA_OFFSET UNITYSDK_OFFSET(0x10B8AAF0)
#define CLASS_1_816BD05285D3325D_METHOD_1_ABFE6A357B89C69A_OFFSET UNITYSDK_OFFSET(0x10B89D90)
#define CLASS_1_816BD05285D3325D_METHOD_1_BBA49FAB086F388D_OFFSET UNITYSDK_OFFSET(0x10B8A080)
#define CLASS_1_816BD05285D3325D_METHOD_1_CC250A921DE2427C_OFFSET UNITYSDK_OFFSET(0x10B8AE10)
#define CLASS_1_816BD05285D3325D_METHOD_1_F79D5EC57FBF426E_OFFSET UNITYSDK_OFFSET(0x10B89E80)
#define CLASS_1_816BD05285D3325D__CTOR_OFFSET UNITYSDK_OFFSET(0x10B8B050)

inline static constexpr unsigned int Class_1_816BD05285D3325D_TypeDefinitionIndex = 38320;

class Class_1_816BD05285D3325D : public ::System::Object
{
public:
	::RPG::Client::IAssetOperation* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::IAssetOperation*>* Field_1_4; // 0x18
	::System::Action_1<::System::String*>* Field_1_2; // 0x20
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_3; // 0x28
	::System::String* Field_1_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_816BD05285D3325D__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_ABFE6A357B89C69A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_816BD05285D3325D_METHOD_1_ABFE6A357B89C69A_OFFSET))(this);
	}

	::RPG::Client::IAssetOperation* Method_1_6F4A6B5CE800C615()
	{
		return ((::RPG::Client::IAssetOperation*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_816BD05285D3325D_METHOD_1_6F4A6B5CE800C615_OFFSET))(this);
	}

	::System::Void Method_1_F79D5EC57FBF426E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_816BD05285D3325D_METHOD_1_F79D5EC57FBF426E_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_816BD05285D3325D_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_BBA49FAB086F388D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_816BD05285D3325D_METHOD_1_BBA49FAB086F388D_OFFSET))(this);
	}

	::System::Void Method_1_9E7803F3C67E3CFA(::Il2CppArray<::System::String*>* a1, ::Il2CppArray<::System::Type*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + CLASS_1_816BD05285D3325D_METHOD_1_9E7803F3C67E3CFA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_05114270587ACE3F(::EnviromentSystem::EnviromentProfile* a1)
	{
		return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*))((::PBYTE)hIl2Cpp + CLASS_1_816BD05285D3325D_METHOD_1_05114270587ACE3F_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_CC250A921DE2427C(::RPG::Client::IAssetOperation* a1)
	{
		return ((::System::Boolean(*)(::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_1_816BD05285D3325D_METHOD_1_CC250A921DE2427C_OFFSET))(a1);
	}
};
