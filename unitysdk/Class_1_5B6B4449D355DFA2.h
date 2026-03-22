#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_823;
class Class_0_16E4307DCC419505_824;
class Class_1_96755BD61CBCF580;
class Class_1_96755BD61CBCF580_1;
class Class_1_CA217ABF4E3B4F3F;
class Class_1_D21783A341DD4A43;
namespace RPG::Client { class UIController; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Reflection { class MethodInfo; }
namespace UnityEngine { class Transform; }

#define CLASS_1_5B6B4449D355DFA2_METHOD_1_08089E91534355BA_OFFSET UNITYSDK_OFFSET(0x10C86300)
#define CLASS_1_5B6B4449D355DFA2_METHOD_1_0EE7C8B998AC9C29_OFFSET UNITYSDK_OFFSET(0x10C84D70)
#define CLASS_1_5B6B4449D355DFA2_METHOD_1_229D9A93968BE128_OFFSET UNITYSDK_OFFSET(0x10C85650)
#define CLASS_1_5B6B4449D355DFA2_METHOD_1_22BC55C609FDA193_1_OFFSET UNITYSDK_OFFSET(0x10C84730)
#define CLASS_1_5B6B4449D355DFA2_METHOD_1_22BC55C609FDA193_OFFSET UNITYSDK_OFFSET(0x10C84270)
#define CLASS_1_5B6B4449D355DFA2_METHOD_1_2D6F869DE72D5B9A_OFFSET UNITYSDK_OFFSET(0x10C85810)
#define CLASS_1_5B6B4449D355DFA2_METHOD_1_2D9A571C1250C68E_OFFSET UNITYSDK_OFFSET(0x10C83E10)
#define CLASS_1_5B6B4449D355DFA2_METHOD_1_3AE427620086FA23_OFFSET UNITYSDK_OFFSET(0x10C84DD0)
#define CLASS_1_5B6B4449D355DFA2_METHOD_1_418F3A200EEBA0C6_OFFSET UNITYSDK_OFFSET(0x10C85F20)
#define CLASS_1_5B6B4449D355DFA2_METHOD_1_51E57F165EBF5E29_OFFSET UNITYSDK_OFFSET(0x10C83CF0)
#define CLASS_1_5B6B4449D355DFA2_METHOD_1_709F9E3782CDA91C_OFFSET UNITYSDK_OFFSET(0x10C86B70)
#define CLASS_1_5B6B4449D355DFA2_METHOD_1_A1FFBAB65748A6A2_OFFSET UNITYSDK_OFFSET(0x10C85210)
#define CLASS_1_5B6B4449D355DFA2_METHOD_1_AF25849432536320_OFFSET UNITYSDK_OFFSET(0x10C84F20)
#define CLASS_1_5B6B4449D355DFA2_METHOD_1_C9D0B753CBD895D7_OFFSET UNITYSDK_OFFSET(0x10C84200)
#define CLASS_1_5B6B4449D355DFA2_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x10C84CA0)
#define CLASS_1_5B6B4449D355DFA2__CCTOR_OFFSET UNITYSDK_OFFSET(0x10C87520)
#define CLASS_1_5B6B4449D355DFA2__CTOR_OFFSET UNITYSDK_OFFSET(0x10C87510)

inline static constexpr unsigned int Class_1_5B6B4449D355DFA2_TypeDefinitionIndex = 58296;

class Class_1_5B6B4449D355DFA2 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_D21783A341DD4A43*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_D21783A341DD4A43*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5B6B4449D355DFA2_TypeDefinitionIndex)->GetStaticField(0x304C0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B6B4449D355DFA2__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B6B4449D355DFA2__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_51E57F165EBF5E29(::System::Object* a1, ::System::Collections::Generic::IList_1<::Class_0_16E4307DCC419505_824*>* a2, ::System::Collections::Generic::IList_1<::Class_0_16E4307DCC419505_823*>* a3)
	{
		return ((::System::Void(*)(::System::Object*, ::System::Collections::Generic::IList_1<::Class_0_16E4307DCC419505_824*>*, ::System::Collections::Generic::IList_1<::Class_0_16E4307DCC419505_823*>*))((::PBYTE)hIl2Cpp + CLASS_1_5B6B4449D355DFA2_METHOD_1_51E57F165EBF5E29_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_C9D0B753CBD895D7(::System::Collections::Generic::IList_1<::Class_0_16E4307DCC419505_824*>* a1, ::System::Collections::Generic::IList_1<::Class_0_16E4307DCC419505_823*>* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IList_1<::Class_0_16E4307DCC419505_824*>*, ::System::Collections::Generic::IList_1<::Class_0_16E4307DCC419505_823*>*))((::PBYTE)hIl2Cpp + CLASS_1_5B6B4449D355DFA2_METHOD_1_C9D0B753CBD895D7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5B6B4449D355DFA2_METHOD_1_D0BD1377F2594D33_OFFSET))();
	}

	static ::System::Boolean Method_1_0EE7C8B998AC9C29(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B6B4449D355DFA2_METHOD_1_0EE7C8B998AC9C29_OFFSET))(a1);
	}

	static ::System::Void Method_1_2D9A571C1250C68E(::System::Object* a1, ::System::Collections::Generic::ICollection_1<::Class_0_16E4307DCC419505_824*>* a2, ::System::Collections::Generic::ICollection_1<::Class_0_16E4307DCC419505_823*>* a3)
	{
		return ((::System::Void(*)(::System::Object*, ::System::Collections::Generic::ICollection_1<::Class_0_16E4307DCC419505_824*>*, ::System::Collections::Generic::ICollection_1<::Class_0_16E4307DCC419505_823*>*))((::PBYTE)hIl2Cpp + CLASS_1_5B6B4449D355DFA2_METHOD_1_2D9A571C1250C68E_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_AF25849432536320(::System::Object* a1, ::Class_1_96755BD61CBCF580* a2, ::System::Collections::Generic::ICollection_1<::Class_0_16E4307DCC419505_824*>* a3)
	{
		return ((::System::Void(*)(::System::Object*, ::Class_1_96755BD61CBCF580*, ::System::Collections::Generic::ICollection_1<::Class_0_16E4307DCC419505_824*>*))((::PBYTE)hIl2Cpp + CLASS_1_5B6B4449D355DFA2_METHOD_1_AF25849432536320_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_A1FFBAB65748A6A2(::System::Object* a1, ::Class_1_96755BD61CBCF580_1* a2, ::System::Collections::Generic::ICollection_1<::Class_0_16E4307DCC419505_823*>* a3)
	{
		return ((::System::Void(*)(::System::Object*, ::Class_1_96755BD61CBCF580_1*, ::System::Collections::Generic::ICollection_1<::Class_0_16E4307DCC419505_823*>*))((::PBYTE)hIl2Cpp + CLASS_1_5B6B4449D355DFA2_METHOD_1_A1FFBAB65748A6A2_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_229D9A93968BE128(::System::Object* a1, ::System::Reflection::MethodInfo* a2)
	{
		return ((::System::Boolean(*)(::System::Object*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + CLASS_1_5B6B4449D355DFA2_METHOD_1_229D9A93968BE128_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_2D6F869DE72D5B9A(::System::Object* a1, ::System::Reflection::MethodInfo* a2)
	{
		return ((::System::Boolean(*)(::System::Object*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + CLASS_1_5B6B4449D355DFA2_METHOD_1_2D6F869DE72D5B9A_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_418F3A200EEBA0C6(::System::Object* a1, ::System::Reflection::MethodInfo* a2)
	{
		return ((::System::Boolean(*)(::System::Object*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + CLASS_1_5B6B4449D355DFA2_METHOD_1_418F3A200EEBA0C6_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_3AE427620086FA23(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5B6B4449D355DFA2_METHOD_1_3AE427620086FA23_OFFSET))(a1);
	}

	static ::Class_0_16E4307DCC419505_824* Method_1_08089E91534355BA(::System::Object* a1, ::System::Reflection::MethodInfo* a2, ::RPG::Client::NotifyType a3)
	{
		return ((::Class_0_16E4307DCC419505_824*(*)(::System::Object*, ::System::Reflection::MethodInfo*, ::RPG::Client::NotifyType))((::PBYTE)hIl2Cpp + CLASS_1_5B6B4449D355DFA2_METHOD_1_08089E91534355BA_OFFSET))(a1, a2, a3);
	}

	static ::Class_0_16E4307DCC419505_823* Method_1_709F9E3782CDA91C(::System::Object* a1, ::System::Reflection::MethodInfo* a2, ::RPG::GameCore::EventType a3, ::System::UInt32 a4)
	{
		return ((::Class_0_16E4307DCC419505_823*(*)(::System::Object*, ::System::Reflection::MethodInfo*, ::RPG::GameCore::EventType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5B6B4449D355DFA2_METHOD_1_709F9E3782CDA91C_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_22BC55C609FDA193(::System::Collections::Generic::IList_1<::Class_0_16E4307DCC419505_824*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IList_1<::Class_0_16E4307DCC419505_824*>*))((::PBYTE)hIl2Cpp + CLASS_1_5B6B4449D355DFA2_METHOD_1_22BC55C609FDA193_OFFSET))(a1);
	}

	static ::System::Void Method_1_22BC55C609FDA193_1(::System::Collections::Generic::IList_1<::Class_0_16E4307DCC419505_823*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IList_1<::Class_0_16E4307DCC419505_823*>*))((::PBYTE)hIl2Cpp + CLASS_1_5B6B4449D355DFA2_METHOD_1_22BC55C609FDA193_1_OFFSET))(a1);
	}
};
