#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG::Client { class RelicItemData; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_1B96F4D650A74917___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x89E4A60)
#define CLASS_2_1B96F4D650A74917___C__CTOR_OFFSET UNITYSDK_OFFSET(0x89E4AA0)
#define CLASS_2_1B96F4D650A74917___C___GETORCREATEHIGHSCORERELICDATASBYRELICTYPE_B__12_0_OFFSET UNITYSDK_OFFSET(0x89E4AB0)

inline static constexpr unsigned int Class_2_1B96F4D650A74917___c_TypeDefinitionIndex = 53277;

class Class_2_1B96F4D650A74917___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::System::ValueTuple_2<::System::Single, ::RPG::Client::RelicItemData*>>** StaticGet___9__12_0()
	{
		return (::System::Comparison_1<::System::ValueTuple_2<::System::Single, ::RPG::Client::RelicItemData*>>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1B96F4D650A74917___c_TypeDefinitionIndex)->GetStaticField(0x77E0);
	}
	static ::Class_2_1B96F4D650A74917___c** StaticGet___9()
	{
		return (::Class_2_1B96F4D650A74917___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1B96F4D650A74917___c_TypeDefinitionIndex)->GetStaticField(0x77E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_1B96F4D650A74917___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B96F4D650A74917___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __GetOrCreateHighScoreRelicDatasByRelicType_b__12_0(::System::ValueTuple_2<::System::Single, ::RPG::Client::RelicItemData*> a, ::System::ValueTuple_2<::System::Single, ::RPG::Client::RelicItemData*> b)
	{
		return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::System::Single, ::RPG::Client::RelicItemData*>, ::System::ValueTuple_2<::System::Single, ::RPG::Client::RelicItemData*>))((::PBYTE)hIl2Cpp + CLASS_2_1B96F4D650A74917___C___GETORCREATEHIGHSCORERELICDATASBYRELICTYPE_B__12_0_OFFSET))(this, a, b);
	}
};
