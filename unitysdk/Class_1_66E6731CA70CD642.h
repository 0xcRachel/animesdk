#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_543;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_66E6731CA70CD642_METHOD_1_043DB7F2A9E93F8E_OFFSET UNITYSDK_OFFSET(0xEED3790)
#define CLASS_1_66E6731CA70CD642_METHOD_1_F1FD9D7B05F35A11_OFFSET UNITYSDK_OFFSET(0xEED3880)
#define CLASS_1_66E6731CA70CD642__CTOR_OFFSET UNITYSDK_OFFSET(0xEED3A80)

inline static constexpr unsigned int Class_1_66E6731CA70CD642_TypeDefinitionIndex = 49717;

class Class_1_66E6731CA70CD642 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_543*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66E6731CA70CD642__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_043DB7F2A9E93F8E(::Il2CppArray<::Class_0_16E4307DCC419505_543*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_0_16E4307DCC419505_543*>*))((::PBYTE)hIl2Cpp + CLASS_1_66E6731CA70CD642_METHOD_1_043DB7F2A9E93F8E_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_F1FD9D7B05F35A11(::RPG::GameCore::FixPoint a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_66E6731CA70CD642_METHOD_1_F1FD9D7B05F35A11_OFFSET))(this, a1);
	}
};
