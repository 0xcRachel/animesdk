#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueMagicScepterDataItem; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_37C0041DBBD3EEE3___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x155ABCD0)
#define CLASS_2_37C0041DBBD3EEE3___C__CTOR_OFFSET UNITYSDK_OFFSET(0x155ABD10)
#define CLASS_2_37C0041DBBD3EEE3___C___SETUPVIEW_B__11_0_OFFSET UNITYSDK_OFFSET(0x155ABD20)

inline static constexpr unsigned int Class_2_37C0041DBBD3EEE3___c_TypeDefinitionIndex = 66621;

class Class_2_37C0041DBBD3EEE3___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::RPG::Client::RogueMagicScepterDataItem*>** StaticGet___9__11_0()
	{
		return (::System::Comparison_1<::RPG::Client::RogueMagicScepterDataItem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_37C0041DBBD3EEE3___c_TypeDefinitionIndex)->GetStaticField(0x5B310);
	}
	static ::Class_2_37C0041DBBD3EEE3___c** StaticGet___9()
	{
		return (::Class_2_37C0041DBBD3EEE3___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_37C0041DBBD3EEE3___c_TypeDefinitionIndex)->GetStaticField(0x5B318);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_37C0041DBBD3EEE3___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37C0041DBBD3EEE3___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __SetupView_b__11_0(::RPG::Client::RogueMagicScepterDataItem* a, ::RPG::Client::RogueMagicScepterDataItem* b)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueMagicScepterDataItem*, ::RPG::Client::RogueMagicScepterDataItem*))((::PBYTE)hIl2Cpp + CLASS_2_37C0041DBBD3EEE3___C___SETUPVIEW_B__11_0_OFFSET))(this, a, b);
	}
};
