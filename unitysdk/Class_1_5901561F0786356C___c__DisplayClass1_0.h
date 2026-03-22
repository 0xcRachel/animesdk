#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAvatarInfoProvider; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }

#define CLASS_1_5901561F0786356C___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x89C6420)
#define CLASS_1_5901561F0786356C___C__DISPLAYCLASS1_0__SETLEVELRARITYISLEVELFIRST_B__0_OFFSET UNITYSDK_OFFSET(0x89C65E0)

inline static constexpr unsigned int Class_1_5901561F0786356C___c__DisplayClass1_0_TypeDefinitionIndex = 49851;

class Class_1_5901561F0786356C___c__DisplayClass1_0 : public ::System::Object
{
public:
	::System::Boolean isLevelFirst; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5901561F0786356C___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Void _SetLevelRarityIsLevelFirst_b__0(::System::Collections::Generic::IComparer_1<::RPG::Client::IAvatarInfoProvider*>* target)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IComparer_1<::RPG::Client::IAvatarInfoProvider*>*))((::PBYTE)hIl2Cpp + CLASS_1_5901561F0786356C___C__DISPLAYCLASS1_0__SETLEVELRARITYISLEVELFIRST_B__0_OFFSET))(this, target);
	}
};
