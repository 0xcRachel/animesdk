#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class IdleLiveChestLevelRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_5AE7F734EB9EBAC6_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x186B0730)
#define CLASS_1_5AE7F734EB9EBAC6_METHOD_1_2E86B91E4790037C_OFFSET UNITYSDK_OFFSET(0x186B0340)
#define CLASS_1_5AE7F734EB9EBAC6_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x186B0550)
#define CLASS_1_5AE7F734EB9EBAC6_METHOD_1_3FD7F8F59A9B16D6_OFFSET UNITYSDK_OFFSET(0x186AFE60)
#define CLASS_1_5AE7F734EB9EBAC6_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x186AFEE0)
#define CLASS_1_5AE7F734EB9EBAC6_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x186B05F0)
#define CLASS_1_5AE7F734EB9EBAC6_METHOD_1_BA4D8125BD6C650F_OFFSET UNITYSDK_OFFSET(0x186B0190)
#define CLASS_1_5AE7F734EB9EBAC6_METHOD_1_BD09DD860FEF6492_OFFSET UNITYSDK_OFFSET(0x186B0780)
#define CLASS_1_5AE7F734EB9EBAC6_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x186B0130)
#define CLASS_1_5AE7F734EB9EBAC6_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x186B0510)
#define CLASS_1_5AE7F734EB9EBAC6_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x186B0690)
#define CLASS_1_5AE7F734EB9EBAC6__CCTOR_OFFSET UNITYSDK_OFFSET(0x186B0AE0)

inline static constexpr unsigned int Class_1_5AE7F734EB9EBAC6_TypeDefinitionIndex = 11188;

class Class_1_5AE7F734EB9EBAC6 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5AE7F734EB9EBAC6_TypeDefinitionIndex)->GetStaticField(0x31B90);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5AE7F734EB9EBAC6_TypeDefinitionIndex)->GetStaticField(0x31B98);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveChestLevelRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveChestLevelRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5AE7F734EB9EBAC6_TypeDefinitionIndex)->GetStaticField(0x31BA0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5AE7F734EB9EBAC6_TypeDefinitionIndex)->GetStaticField(0x9550);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5AE7F734EB9EBAC6_TypeDefinitionIndex)->GetStaticField(0x9551);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5AE7F734EB9EBAC6__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveChestLevelRow*>* Method_1_3FD7F8F59A9B16D6()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveChestLevelRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5AE7F734EB9EBAC6_METHOD_1_3FD7F8F59A9B16D6_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_5AE7F734EB9EBAC6_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveChestLevelRow*> Method_1_BA4D8125BD6C650F()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveChestLevelRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_5AE7F734EB9EBAC6_METHOD_1_BA4D8125BD6C650F_OFFSET))();
	}

	static ::RPG::GameCore::IdleLiveChestLevelRow* Method_1_2E86B91E4790037C(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::IdleLiveChestLevelRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5AE7F734EB9EBAC6_METHOD_1_2E86B91E4790037C_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_5AE7F734EB9EBAC6_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5AE7F734EB9EBAC6_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5AE7F734EB9EBAC6_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5AE7F734EB9EBAC6_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_5AE7F734EB9EBAC6_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_5AE7F734EB9EBAC6_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_BD09DD860FEF6492(::RPG::GameCore::IdleLiveChestLevelRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::IdleLiveChestLevelRow*))((::PBYTE)hIl2Cpp + CLASS_1_5AE7F734EB9EBAC6_METHOD_1_BD09DD860FEF6492_OFFSET))(a1);
	}
};
