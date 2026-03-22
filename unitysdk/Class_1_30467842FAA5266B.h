#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_25;
class Class_2_9A0EEE4C8D0C8ADF;
class Class_2_D5AD64F6FB3109AB;
namespace RPG::GameCore { class DynamicFloat; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_30467842FAA5266B_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15FD9FF0)
#define CLASS_1_30467842FAA5266B_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x15FFA600)
#define CLASS_1_30467842FAA5266B_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x15FFA610)
#define CLASS_1_30467842FAA5266B_GET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0x15FFA620)
#define CLASS_1_30467842FAA5266B_METHOD_1_2A5C327C876B74E2_OFFSET UNITYSDK_OFFSET(0x15FEB160)
#define CLASS_1_30467842FAA5266B_METHOD_1_441B994E9632609C_OFFSET UNITYSDK_OFFSET(0x15FFB230)
#define CLASS_1_30467842FAA5266B_METHOD_1_5A2DD16440AF24B0_1_OFFSET UNITYSDK_OFFSET(0x15FFB7F0)
#define CLASS_1_30467842FAA5266B_METHOD_1_5A2DD16440AF24B0_2_OFFSET UNITYSDK_OFFSET(0x15FFB8C0)
#define CLASS_1_30467842FAA5266B_METHOD_1_5A2DD16440AF24B0_3_OFFSET UNITYSDK_OFFSET(0x15FFB990)
#define CLASS_1_30467842FAA5266B_METHOD_1_5A2DD16440AF24B0_OFFSET UNITYSDK_OFFSET(0x15FFB160)
#define CLASS_1_30467842FAA5266B_METHOD_1_8A8D0DF7CB83B393_1_OFFSET UNITYSDK_OFFSET(0x15FFAE40)
#define CLASS_1_30467842FAA5266B_METHOD_1_8A8D0DF7CB83B393_OFFSET UNITYSDK_OFFSET(0x15FFA8B0)
#define CLASS_1_30467842FAA5266B_METHOD_1_B40A8B4AC1DE7EBB_OFFSET UNITYSDK_OFFSET(0x15FFBCB0)
#define CLASS_1_30467842FAA5266B_METHOD_1_D23A9122E3D75C72_1_OFFSET UNITYSDK_OFFSET(0x15FFB610)
#define CLASS_1_30467842FAA5266B_METHOD_1_D23A9122E3D75C72_OFFSET UNITYSDK_OFFSET(0x15FFB430)
#define CLASS_1_30467842FAA5266B_METHOD_1_D354C6AB6BF80F09_OFFSET UNITYSDK_OFFSET(0x15FFBA60)
#define CLASS_1_30467842FAA5266B_METHOD_1_EBA1E7A74991E458_OFFSET UNITYSDK_OFFSET(0x15FFABE0)
#define CLASS_1_30467842FAA5266B_METHOD_1_FB4798F380B9BEA5_OFFSET UNITYSDK_OFFSET(0x15FFA6C0)
#define CLASS_1_30467842FAA5266B__CCTOR_OFFSET UNITYSDK_OFFSET(0x15FFBFB0)
#define CLASS_1_30467842FAA5266B__CTOR_OFFSET UNITYSDK_OFFSET(0x15FFA630)

inline static constexpr unsigned int Class_1_30467842FAA5266B_TypeDefinitionIndex = 27748;

class Class_1_30467842FAA5266B : public ::System::Object
{
public:
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_8()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_30467842FAA5266B_TypeDefinitionIndex)->GetStaticField(0xC8B0);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_6()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_30467842FAA5266B_TypeDefinitionIndex)->GetStaticField(0xC8B4);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_12()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_30467842FAA5266B_TypeDefinitionIndex)->GetStaticField(0xC8B8);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_5()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_30467842FAA5266B_TypeDefinitionIndex)->GetStaticField(0xC8BC);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_9()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_30467842FAA5266B_TypeDefinitionIndex)->GetStaticField(0xC8C0);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_4()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_30467842FAA5266B_TypeDefinitionIndex)->GetStaticField(0xC8C4);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_10()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_30467842FAA5266B_TypeDefinitionIndex)->GetStaticField(0xC8C8);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_3()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_30467842FAA5266B_TypeDefinitionIndex)->GetStaticField(0xC8CC);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_7()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_30467842FAA5266B_TypeDefinitionIndex)->GetStaticField(0xC8D0);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_11()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_30467842FAA5266B_TypeDefinitionIndex)->GetStaticField(0xC8D4);
	}
	::Class_0_16E4307DCC419505_25* _Instance_k__BackingField; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::RPG::GameCore::FixPoint>* Field_1_13; // 0x18
	::Il2CppArray<::RPG::GameCore::FixPoint>* _ParamList_k__BackingField; // 0x20
	::Class_2_D5AD64F6FB3109AB* _Owner_k__BackingField; // 0x28

	::System::Void _ctor(::Class_0_16E4307DCC419505_25* a1, ::Class_2_D5AD64F6FB3109AB* a2, ::Il2CppArray<::RPG::GameCore::FixPoint>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_25*, ::Class_2_D5AD64F6FB3109AB*, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_30467842FAA5266B__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_30467842FAA5266B__CCTOR_OFFSET))();
	}

	::Class_0_16E4307DCC419505_25* get_Instance()
	{
		return ((::Class_0_16E4307DCC419505_25*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30467842FAA5266B_GET_INSTANCE_OFFSET))(this);
	}

	::Class_2_D5AD64F6FB3109AB* get_Owner()
	{
		return ((::Class_2_D5AD64F6FB3109AB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30467842FAA5266B_GET_OWNER_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* get_ParamList()
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30467842FAA5266B_GET_PARAMLIST_OFFSET))(this);
	}

	::System::Void Method_1_FB4798F380B9BEA5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30467842FAA5266B_METHOD_1_FB4798F380B9BEA5_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_8A8D0DF7CB83B393()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30467842FAA5266B_METHOD_1_8A8D0DF7CB83B393_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_EBA1E7A74991E458()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30467842FAA5266B_METHOD_1_EBA1E7A74991E458_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_8A8D0DF7CB83B393_1()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30467842FAA5266B_METHOD_1_8A8D0DF7CB83B393_1_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_5A2DD16440AF24B0()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30467842FAA5266B_METHOD_1_5A2DD16440AF24B0_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_441B994E9632609C()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30467842FAA5266B_METHOD_1_441B994E9632609C_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_D23A9122E3D75C72()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30467842FAA5266B_METHOD_1_D23A9122E3D75C72_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_D23A9122E3D75C72_1()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30467842FAA5266B_METHOD_1_D23A9122E3D75C72_1_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_5A2DD16440AF24B0_1()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30467842FAA5266B_METHOD_1_5A2DD16440AF24B0_1_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_5A2DD16440AF24B0_2()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30467842FAA5266B_METHOD_1_5A2DD16440AF24B0_2_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_5A2DD16440AF24B0_3()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30467842FAA5266B_METHOD_1_5A2DD16440AF24B0_3_OFFSET))(this);
	}

	::System::Boolean Method_1_D354C6AB6BF80F09(::RPG::GameCore::StringHash a1, ::RPG::GameCore::FixPoint& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::StringHash, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_1_30467842FAA5266B_METHOD_1_D354C6AB6BF80F09_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_1_B40A8B4AC1DE7EBB(::RPG::GameCore::StringHash a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + CLASS_1_30467842FAA5266B_METHOD_1_B40A8B4AC1DE7EBB_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Evaluate(::RPG::GameCore::DynamicFloat* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + CLASS_1_30467842FAA5266B_EVALUATE_OFFSET))(this, a1);
	}

	::Class_2_9A0EEE4C8D0C8ADF* Method_1_2A5C327C876B74E2()
	{
		return ((::Class_2_9A0EEE4C8D0C8ADF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30467842FAA5266B_METHOD_1_2A5C327C876B74E2_OFFSET))(this);
	}
};
