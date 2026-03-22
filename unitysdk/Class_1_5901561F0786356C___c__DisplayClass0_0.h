#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAvatarInfoProvider; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_5901561F0786356C___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x89C6300)
#define CLASS_1_5901561F0786356C___C__DISPLAYCLASS0_0__SETPINNING_B__0_OFFSET UNITYSDK_OFFSET(0x89C6550)

inline static constexpr unsigned int Class_1_5901561F0786356C___c__DisplayClass0_0_TypeDefinitionIndex = 49850;

class Class_1_5901561F0786356C___c__DisplayClass0_0 : public ::System::Object
{
public:
	::System::Collections::Generic::IEnumerable_1<::RPG::Client::IAvatarInfoProvider*>* pinningAvatars; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5901561F0786356C___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
	}

	::System::Void _SetPinning_b__0(::System::Collections::Generic::IComparer_1<::RPG::Client::IAvatarInfoProvider*>* target)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IComparer_1<::RPG::Client::IAvatarInfoProvider*>*))((::PBYTE)hIl2Cpp + CLASS_1_5901561F0786356C___C__DISPLAYCLASS0_0__SETPINNING_B__0_OFFSET))(this, target);
	}
};
