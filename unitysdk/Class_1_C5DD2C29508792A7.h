#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_12;
class Class_1_C5DD2C29508792A7_Class_3_AB3DCCDB3276A220;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceBasePredicateConfig; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C5DD2C29508792A7_METHOD_1_25C249A1AE130968_OFFSET UNITYSDK_OFFSET(0x15EFFEE0)
#define CLASS_1_C5DD2C29508792A7_METHOD_1_6B9B9F1566117AA0_OFFSET UNITYSDK_OFFSET(0x15F22150)
#define CLASS_1_C5DD2C29508792A7__CCTOR_OFFSET UNITYSDK_OFFSET(0x15F222F0)

inline static constexpr unsigned int Class_1_C5DD2C29508792A7_TypeDefinitionIndex = 28188;

class Class_1_C5DD2C29508792A7 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_C5DD2C29508792A7_Class_3_AB3DCCDB3276A220*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_C5DD2C29508792A7_Class_3_AB3DCCDB3276A220*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C5DD2C29508792A7_TypeDefinitionIndex)->GetStaticField(0x2D310);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C5DD2C29508792A7__CCTOR_OFFSET))();
	}

	static ::Class_1_43BD383C98B4C0C5_12* Method_1_25C249A1AE130968(::RPG::GameCore::CakeRaceBasePredicateConfig* a1, ::Class_2_F3C45F1FC7349B6E* a2)
	{
		return ((::Class_1_43BD383C98B4C0C5_12*(*)(::RPG::GameCore::CakeRaceBasePredicateConfig*, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_1_C5DD2C29508792A7_METHOD_1_25C249A1AE130968_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_12*>* Method_1_6B9B9F1566117AA0(::Il2CppArray<::RPG::GameCore::CakeRaceBasePredicateConfig*>* a1, ::Class_2_F3C45F1FC7349B6E* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_12*>*(*)(::Il2CppArray<::RPG::GameCore::CakeRaceBasePredicateConfig*>*, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_1_C5DD2C29508792A7_METHOD_1_6B9B9F1566117AA0_OFFSET))(a1, a2);
	}
};
