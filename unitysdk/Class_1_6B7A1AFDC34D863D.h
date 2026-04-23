#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightRoleSwitchConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_6B7A1AFDC34D863D_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x108273A0)
#define CLASS_1_6B7A1AFDC34D863D_METHOD_1_2C63045EEC18EF27_OFFSET UNITYSDK_OFFSET(0x108273F0)
#define CLASS_1_6B7A1AFDC34D863D_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x108271C0)
#define CLASS_1_6B7A1AFDC34D863D_METHOD_1_59000EFEB3BB7942_OFFSET UNITYSDK_OFFSET(0x10826E00)
#define CLASS_1_6B7A1AFDC34D863D_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x10826B50)
#define CLASS_1_6B7A1AFDC34D863D_METHOD_1_7216E029850A2D93_OFFSET UNITYSDK_OFFSET(0x10826FB0)
#define CLASS_1_6B7A1AFDC34D863D_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x10827260)
#define CLASS_1_6B7A1AFDC34D863D_METHOD_1_B85ACA0895278DA1_OFFSET UNITYSDK_OFFSET(0x10826AD0)
#define CLASS_1_6B7A1AFDC34D863D_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x10826DA0)
#define CLASS_1_6B7A1AFDC34D863D_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x10827180)
#define CLASS_1_6B7A1AFDC34D863D_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x10827300)
#define CLASS_1_6B7A1AFDC34D863D__CCTOR_OFFSET UNITYSDK_OFFSET(0x10827750)

inline static constexpr unsigned int Class_1_6B7A1AFDC34D863D_TypeDefinitionIndex = 12802;

class Class_1_6B7A1AFDC34D863D : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B7A1AFDC34D863D_TypeDefinitionIndex)->GetStaticField(0x2C290);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleSwitchConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleSwitchConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B7A1AFDC34D863D_TypeDefinitionIndex)->GetStaticField(0x2C298);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B7A1AFDC34D863D_TypeDefinitionIndex)->GetStaticField(0x2C2A0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B7A1AFDC34D863D_TypeDefinitionIndex)->GetStaticField(0x8A40);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B7A1AFDC34D863D_TypeDefinitionIndex)->GetStaticField(0x8A41);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6B7A1AFDC34D863D__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleSwitchConfigRow*>* Method_1_B85ACA0895278DA1()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleSwitchConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6B7A1AFDC34D863D_METHOD_1_B85ACA0895278DA1_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_6B7A1AFDC34D863D_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleSwitchConfigRow*> Method_1_59000EFEB3BB7942()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleSwitchConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_6B7A1AFDC34D863D_METHOD_1_59000EFEB3BB7942_OFFSET))();
	}

	static ::RPG::GameCore::GridFightRoleSwitchConfigRow* Method_1_7216E029850A2D93(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GridFightRoleSwitchConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6B7A1AFDC34D863D_METHOD_1_7216E029850A2D93_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_6B7A1AFDC34D863D_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6B7A1AFDC34D863D_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6B7A1AFDC34D863D_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6B7A1AFDC34D863D_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_6B7A1AFDC34D863D_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_6B7A1AFDC34D863D_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_2C63045EEC18EF27(::RPG::GameCore::GridFightRoleSwitchConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightRoleSwitchConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_6B7A1AFDC34D863D_METHOD_1_2C63045EEC18EF27_OFFSET))(a1);
	}
};
