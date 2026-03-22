#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueDLCJoyHelpRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_B9883B1D802E6CE1_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1672A210)
#define CLASS_1_B9883B1D802E6CE1_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1672A030)
#define CLASS_1_B9883B1D802E6CE1_METHOD_1_472CA4F8116027E7_OFFSET UNITYSDK_OFFSET(0x16729E20)
#define CLASS_1_B9883B1D802E6CE1_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x167299C0)
#define CLASS_1_B9883B1D802E6CE1_METHOD_1_90AEEF8CBD253DB5_OFFSET UNITYSDK_OFFSET(0x16729940)
#define CLASS_1_B9883B1D802E6CE1_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1672A0D0)
#define CLASS_1_B9883B1D802E6CE1_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16729C10)
#define CLASS_1_B9883B1D802E6CE1_METHOD_1_D26751EC4B5B34E3_OFFSET UNITYSDK_OFFSET(0x1672A260)
#define CLASS_1_B9883B1D802E6CE1_METHOD_1_EB42AFD898B0C9CE_OFFSET UNITYSDK_OFFSET(0x16729C70)
#define CLASS_1_B9883B1D802E6CE1_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16729FF0)
#define CLASS_1_B9883B1D802E6CE1_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1672A170)
#define CLASS_1_B9883B1D802E6CE1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1672A5C0)

inline static constexpr unsigned int Class_1_B9883B1D802E6CE1_TypeDefinitionIndex = 13404;

class Class_1_B9883B1D802E6CE1 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B9883B1D802E6CE1_TypeDefinitionIndex)->GetStaticField(0x1B950);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCJoyHelpRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCJoyHelpRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B9883B1D802E6CE1_TypeDefinitionIndex)->GetStaticField(0x1B958);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B9883B1D802E6CE1_TypeDefinitionIndex)->GetStaticField(0x1B960);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B9883B1D802E6CE1_TypeDefinitionIndex)->GetStaticField(0x6B00);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B9883B1D802E6CE1_TypeDefinitionIndex)->GetStaticField(0x6B01);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B9883B1D802E6CE1__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCJoyHelpRow*>* Method_1_90AEEF8CBD253DB5()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCJoyHelpRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B9883B1D802E6CE1_METHOD_1_90AEEF8CBD253DB5_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B9883B1D802E6CE1_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCJoyHelpRow*> Method_1_EB42AFD898B0C9CE()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCJoyHelpRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_B9883B1D802E6CE1_METHOD_1_EB42AFD898B0C9CE_OFFSET))();
	}

	static ::RPG::GameCore::RogueDLCJoyHelpRow* Method_1_472CA4F8116027E7(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RogueDLCJoyHelpRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B9883B1D802E6CE1_METHOD_1_472CA4F8116027E7_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B9883B1D802E6CE1_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B9883B1D802E6CE1_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B9883B1D802E6CE1_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B9883B1D802E6CE1_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_B9883B1D802E6CE1_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_B9883B1D802E6CE1_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_D26751EC4B5B34E3(::RPG::GameCore::RogueDLCJoyHelpRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueDLCJoyHelpRow*))((::PBYTE)hIl2Cpp + CLASS_1_B9883B1D802E6CE1_METHOD_1_D26751EC4B5B34E3_OFFSET))(a1);
	}
};
