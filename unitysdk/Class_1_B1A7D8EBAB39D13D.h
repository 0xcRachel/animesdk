#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_25;
class Class_2_569DE47525C5FD32;
class Class_2_E245567575CEAB2F;
namespace RPG::GameCore { class DynamicFloat; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_B1A7D8EBAB39D13D_EVALUATE_OFFSET UNITYSDK_OFFSET(0x165D54B0)
#define CLASS_1_B1A7D8EBAB39D13D_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x165D66B0)
#define CLASS_1_B1A7D8EBAB39D13D_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x165D66C0)
#define CLASS_1_B1A7D8EBAB39D13D_GET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0x165D66D0)
#define CLASS_1_B1A7D8EBAB39D13D_METHOD_1_2EB122CB53B1542D_OFFSET UNITYSDK_OFFSET(0x165D7470)
#define CLASS_1_B1A7D8EBAB39D13D_METHOD_1_AD91484737B4F069_1_OFFSET UNITYSDK_OFFSET(0x165D70A0)
#define CLASS_1_B1A7D8EBAB39D13D_METHOD_1_AD91484737B4F069_OFFSET UNITYSDK_OFFSET(0x165D69C0)
#define CLASS_1_B1A7D8EBAB39D13D_METHOD_1_AF6FF2E60343DF04_OFFSET UNITYSDK_OFFSET(0x165D6E40)
#define CLASS_1_B1A7D8EBAB39D13D_METHOD_1_B6B81B4815054C12_OFFSET UNITYSDK_OFFSET(0x165D7BF0)
#define CLASS_1_B1A7D8EBAB39D13D_METHOD_1_D16015F3247937FB_1_OFFSET UNITYSDK_OFFSET(0x165D78C0)
#define CLASS_1_B1A7D8EBAB39D13D_METHOD_1_D16015F3247937FB_OFFSET UNITYSDK_OFFSET(0x165D76B0)
#define CLASS_1_B1A7D8EBAB39D13D_METHOD_1_DCEC38F05597CB7D_OFFSET UNITYSDK_OFFSET(0x165D6D40)
#define CLASS_1_B1A7D8EBAB39D13D_METHOD_1_E7498AF04E8E685D_1_OFFSET UNITYSDK_OFFSET(0x165D7AD0)
#define CLASS_1_B1A7D8EBAB39D13D_METHOD_1_E7498AF04E8E685D_2_OFFSET UNITYSDK_OFFSET(0x165D7B30)
#define CLASS_1_B1A7D8EBAB39D13D_METHOD_1_E7498AF04E8E685D_3_OFFSET UNITYSDK_OFFSET(0x165D7B90)
#define CLASS_1_B1A7D8EBAB39D13D_METHOD_1_E7498AF04E8E685D_OFFSET UNITYSDK_OFFSET(0x165D7410)
#define CLASS_1_B1A7D8EBAB39D13D_METHOD_1_E88B356A1B8231C4_OFFSET UNITYSDK_OFFSET(0x165D7EC0)
#define CLASS_1_B1A7D8EBAB39D13D_METHOD_1_FA53756A2AB5E247_OFFSET UNITYSDK_OFFSET(0x165D67B0)
#define CLASS_1_B1A7D8EBAB39D13D__CCTOR_OFFSET UNITYSDK_OFFSET(0x165D81E0)
#define CLASS_1_B1A7D8EBAB39D13D__CTOR_OFFSET UNITYSDK_OFFSET(0x165D66E0)

inline static constexpr unsigned int Class_1_B1A7D8EBAB39D13D_TypeDefinitionIndex = 28497;

class Class_1_B1A7D8EBAB39D13D : public ::System::Object
{
public:
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_10()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B1A7D8EBAB39D13D_TypeDefinitionIndex)->GetStaticField(0xC7F0);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_6()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B1A7D8EBAB39D13D_TypeDefinitionIndex)->GetStaticField(0xC7F4);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_7()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B1A7D8EBAB39D13D_TypeDefinitionIndex)->GetStaticField(0xC7F8);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_9()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B1A7D8EBAB39D13D_TypeDefinitionIndex)->GetStaticField(0xC7FC);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_8()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B1A7D8EBAB39D13D_TypeDefinitionIndex)->GetStaticField(0xC800);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_12()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B1A7D8EBAB39D13D_TypeDefinitionIndex)->GetStaticField(0xC804);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_11()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B1A7D8EBAB39D13D_TypeDefinitionIndex)->GetStaticField(0xC808);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_4()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B1A7D8EBAB39D13D_TypeDefinitionIndex)->GetStaticField(0xC80C);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_3()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B1A7D8EBAB39D13D_TypeDefinitionIndex)->GetStaticField(0xC810);
	}
	static ::RPG::GameCore::StringHash* StaticGet_Field_1_5()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B1A7D8EBAB39D13D_TypeDefinitionIndex)->GetStaticField(0xC814);
	}
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::RPG::GameCore::FixPoint>* Field_1_13; // 0x10
	::Class_2_569DE47525C5FD32* _Owner_k__BackingField; // 0x18
	::Il2CppArray<::RPG::GameCore::FixPoint>* _ParamList_k__BackingField; // 0x20
	::Class_0_16E4307DCC419505_25* _Instance_k__BackingField; // 0x28

	::System::Void _ctor(::Class_0_16E4307DCC419505_25* a1, ::Class_2_569DE47525C5FD32* a2, ::Il2CppArray<::RPG::GameCore::FixPoint>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_25*, ::Class_2_569DE47525C5FD32*, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_B1A7D8EBAB39D13D__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B1A7D8EBAB39D13D__CCTOR_OFFSET))();
	}

	::Class_0_16E4307DCC419505_25* get_Instance()
	{
		return ((::Class_0_16E4307DCC419505_25*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1A7D8EBAB39D13D_GET_INSTANCE_OFFSET))(this);
	}

	::Class_2_569DE47525C5FD32* get_Owner()
	{
		return ((::Class_2_569DE47525C5FD32*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1A7D8EBAB39D13D_GET_OWNER_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* get_ParamList()
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1A7D8EBAB39D13D_GET_PARAMLIST_OFFSET))(this);
	}

	::System::Void Method_1_FA53756A2AB5E247()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1A7D8EBAB39D13D_METHOD_1_FA53756A2AB5E247_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_AD91484737B4F069()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1A7D8EBAB39D13D_METHOD_1_AD91484737B4F069_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_AF6FF2E60343DF04()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1A7D8EBAB39D13D_METHOD_1_AF6FF2E60343DF04_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_AD91484737B4F069_1()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1A7D8EBAB39D13D_METHOD_1_AD91484737B4F069_1_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_E7498AF04E8E685D()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1A7D8EBAB39D13D_METHOD_1_E7498AF04E8E685D_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_2EB122CB53B1542D()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1A7D8EBAB39D13D_METHOD_1_2EB122CB53B1542D_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_D16015F3247937FB()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1A7D8EBAB39D13D_METHOD_1_D16015F3247937FB_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_D16015F3247937FB_1()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1A7D8EBAB39D13D_METHOD_1_D16015F3247937FB_1_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_E7498AF04E8E685D_1()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1A7D8EBAB39D13D_METHOD_1_E7498AF04E8E685D_1_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_E7498AF04E8E685D_2()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1A7D8EBAB39D13D_METHOD_1_E7498AF04E8E685D_2_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_E7498AF04E8E685D_3()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1A7D8EBAB39D13D_METHOD_1_E7498AF04E8E685D_3_OFFSET))(this);
	}

	::System::Boolean Method_1_B6B81B4815054C12(::RPG::GameCore::StringHash a1, ::RPG::GameCore::FixPoint& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::StringHash, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_1_B1A7D8EBAB39D13D_METHOD_1_B6B81B4815054C12_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_1_E88B356A1B8231C4(::RPG::GameCore::StringHash a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + CLASS_1_B1A7D8EBAB39D13D_METHOD_1_E88B356A1B8231C4_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Evaluate(::RPG::GameCore::DynamicFloat* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + CLASS_1_B1A7D8EBAB39D13D_EVALUATE_OFFSET))(this, a1);
	}

	::Class_2_E245567575CEAB2F* Method_1_DCEC38F05597CB7D()
	{
		return ((::Class_2_E245567575CEAB2F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1A7D8EBAB39D13D_METHOD_1_DCEC38F05597CB7D_OFFSET))(this);
	}
};
