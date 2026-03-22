#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueMagicScepterDataItem; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_3C9AADFF67888CB0___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x84376D0)
#define CLASS_2_3C9AADFF67888CB0___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8437710)
#define CLASS_2_3C9AADFF67888CB0___C___SETUPVIEW_B__5_0_OFFSET UNITYSDK_OFFSET(0x8437720)

inline static constexpr unsigned int Class_2_3C9AADFF67888CB0___c_TypeDefinitionIndex = 57609;

class Class_2_3C9AADFF67888CB0___c : public ::System::Object
{
public:
	static ::Class_2_3C9AADFF67888CB0___c** StaticGet___9()
	{
		return (::Class_2_3C9AADFF67888CB0___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3C9AADFF67888CB0___c_TypeDefinitionIndex)->GetStaticField(0x15860);
	}
	static ::System::Comparison_1<::RPG::Client::RogueMagicScepterDataItem*>** StaticGet___9__5_0()
	{
		return (::System::Comparison_1<::RPG::Client::RogueMagicScepterDataItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3C9AADFF67888CB0___c_TypeDefinitionIndex)->GetStaticField(0x15868);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_3C9AADFF67888CB0___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3C9AADFF67888CB0___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __SetupView_b__5_0(::RPG::Client::RogueMagicScepterDataItem* a, ::RPG::Client::RogueMagicScepterDataItem* b)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueMagicScepterDataItem*, ::RPG::Client::RogueMagicScepterDataItem*))((::PBYTE)hIl2Cpp + CLASS_2_3C9AADFF67888CB0___C___SETUPVIEW_B__5_0_OFFSET))(this, a, b);
	}
};
