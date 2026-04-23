#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/GridFightHandBookType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightHandBookRewardRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_2062EF34C88EAFCA_METHOD_1_0792421812ECFFB2_OFFSET UNITYSDK_OFFSET(0x187D8590)
#define CLASS_1_2062EF34C88EAFCA_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x187D8E60)
#define CLASS_1_2062EF34C88EAFCA_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x187D8C80)
#define CLASS_1_2062EF34C88EAFCA_METHOD_1_64843FD51269033E_OFFSET UNITYSDK_OFFSET(0x187D8A70)
#define CLASS_1_2062EF34C88EAFCA_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x187D8610)
#define CLASS_1_2062EF34C88EAFCA_METHOD_1_817BD55E456E5E3F_OFFSET UNITYSDK_OFFSET(0x187D88C0)
#define CLASS_1_2062EF34C88EAFCA_METHOD_1_895E5981EBC0114E_OFFSET UNITYSDK_OFFSET(0x187D8EB0)
#define CLASS_1_2062EF34C88EAFCA_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x187D8D20)
#define CLASS_1_2062EF34C88EAFCA_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x187D8860)
#define CLASS_1_2062EF34C88EAFCA_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x187D8C40)
#define CLASS_1_2062EF34C88EAFCA_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x187D8DC0)
#define CLASS_1_2062EF34C88EAFCA__CCTOR_OFFSET UNITYSDK_OFFSET(0x187D9210)

inline static constexpr unsigned int Class_1_2062EF34C88EAFCA_TypeDefinitionIndex = 12845;

class Class_1_2062EF34C88EAFCA : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2062EF34C88EAFCA_TypeDefinitionIndex)->GetStaticField(0x28BA0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightHandBookRewardRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightHandBookRewardRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2062EF34C88EAFCA_TypeDefinitionIndex)->GetStaticField(0x28BA8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2062EF34C88EAFCA_TypeDefinitionIndex)->GetStaticField(0x28BB0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2062EF34C88EAFCA_TypeDefinitionIndex)->GetStaticField(0x7DF0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2062EF34C88EAFCA_TypeDefinitionIndex)->GetStaticField(0x7DF1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2062EF34C88EAFCA__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightHandBookRewardRow*>* Method_1_0792421812ECFFB2()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightHandBookRewardRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2062EF34C88EAFCA_METHOD_1_0792421812ECFFB2_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2062EF34C88EAFCA_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightHandBookRewardRow*> Method_1_817BD55E456E5E3F()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightHandBookRewardRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_2062EF34C88EAFCA_METHOD_1_817BD55E456E5E3F_OFFSET))();
	}

	static ::RPG::GameCore::GridFightHandBookRewardRow* Method_1_64843FD51269033E(::RPG::GameCore::GridFightHandBookType a1)
	{
		return ((::RPG::GameCore::GridFightHandBookRewardRow*(*)(::RPG::GameCore::GridFightHandBookType))((::PBYTE)hIl2Cpp + CLASS_1_2062EF34C88EAFCA_METHOD_1_64843FD51269033E_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2062EF34C88EAFCA_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2062EF34C88EAFCA_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2062EF34C88EAFCA_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2062EF34C88EAFCA_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_2062EF34C88EAFCA_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_2062EF34C88EAFCA_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_895E5981EBC0114E(::RPG::GameCore::GridFightHandBookRewardRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightHandBookRewardRow*))((::PBYTE)hIl2Cpp + CLASS_1_2062EF34C88EAFCA_METHOD_1_895E5981EBC0114E_OFFSET))(a1);
	}
};
