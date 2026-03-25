#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityGuessSilhouetteRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_264C130DA4D35ED1_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x16C591E0)
#define CLASS_1_264C130DA4D35ED1_METHOD_1_24615E9F13F514D6_OFFSET UNITYSDK_OFFSET(0x16C58C40)
#define CLASS_1_264C130DA4D35ED1_METHOD_1_30CABDA82DF34B03_OFFSET UNITYSDK_OFFSET(0x16C59230)
#define CLASS_1_264C130DA4D35ED1_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16C59000)
#define CLASS_1_264C130DA4D35ED1_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16C58990)
#define CLASS_1_264C130DA4D35ED1_METHOD_1_ACB1BF2F9D355467_OFFSET UNITYSDK_OFFSET(0x16C58DF0)
#define CLASS_1_264C130DA4D35ED1_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16C590A0)
#define CLASS_1_264C130DA4D35ED1_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16C58BE0)
#define CLASS_1_264C130DA4D35ED1_METHOD_1_D35783DB703A554D_OFFSET UNITYSDK_OFFSET(0x16C58910)
#define CLASS_1_264C130DA4D35ED1_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16C58FC0)
#define CLASS_1_264C130DA4D35ED1_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16C59140)
#define CLASS_1_264C130DA4D35ED1__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C59590)

inline static constexpr unsigned int Class_1_264C130DA4D35ED1_TypeDefinitionIndex = 10809;

class Class_1_264C130DA4D35ED1 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityGuessSilhouetteRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityGuessSilhouetteRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_264C130DA4D35ED1_TypeDefinitionIndex)->GetStaticField(0x41780);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_264C130DA4D35ED1_TypeDefinitionIndex)->GetStaticField(0x41788);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_264C130DA4D35ED1_TypeDefinitionIndex)->GetStaticField(0x41790);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_264C130DA4D35ED1_TypeDefinitionIndex)->GetStaticField(0x113F0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_264C130DA4D35ED1_TypeDefinitionIndex)->GetStaticField(0x113F1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_264C130DA4D35ED1__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityGuessSilhouetteRow*>* Method_1_D35783DB703A554D()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityGuessSilhouetteRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_264C130DA4D35ED1_METHOD_1_D35783DB703A554D_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_264C130DA4D35ED1_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityGuessSilhouetteRow*> Method_1_24615E9F13F514D6()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityGuessSilhouetteRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_264C130DA4D35ED1_METHOD_1_24615E9F13F514D6_OFFSET))();
	}

	static ::RPG::GameCore::ActivityGuessSilhouetteRow* Method_1_ACB1BF2F9D355467(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ActivityGuessSilhouetteRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_264C130DA4D35ED1_METHOD_1_ACB1BF2F9D355467_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_264C130DA4D35ED1_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_264C130DA4D35ED1_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_264C130DA4D35ED1_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_264C130DA4D35ED1_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_264C130DA4D35ED1_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_264C130DA4D35ED1_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_30CABDA82DF34B03(::RPG::GameCore::ActivityGuessSilhouetteRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ActivityGuessSilhouetteRow*))((::PBYTE)hIl2Cpp + CLASS_1_264C130DA4D35ED1_METHOD_1_30CABDA82DF34B03_OFFSET))(a1);
	}
};
