#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityHipplenWorkRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_7C5F8B09D4A35F2D_METHOD_1_004DF13759A9514A_OFFSET UNITYSDK_OFFSET(0x1A0E6F40)
#define CLASS_1_7C5F8B09D4A35F2D_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1A0E74E0)
#define CLASS_1_7C5F8B09D4A35F2D_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1A0E7300)
#define CLASS_1_7C5F8B09D4A35F2D_METHOD_1_49E35E72B36C4137_OFFSET UNITYSDK_OFFSET(0x1A0E70F0)
#define CLASS_1_7C5F8B09D4A35F2D_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x1A0E6C90)
#define CLASS_1_7C5F8B09D4A35F2D_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1A0E73A0)
#define CLASS_1_7C5F8B09D4A35F2D_METHOD_1_C39DC4736F370371_OFFSET UNITYSDK_OFFSET(0x1A0E6C10)
#define CLASS_1_7C5F8B09D4A35F2D_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1A0E6EE0)
#define CLASS_1_7C5F8B09D4A35F2D_METHOD_1_EB03BA34429B0993_OFFSET UNITYSDK_OFFSET(0x1A0E7530)
#define CLASS_1_7C5F8B09D4A35F2D_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1A0E72C0)
#define CLASS_1_7C5F8B09D4A35F2D_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1A0E7440)
#define CLASS_1_7C5F8B09D4A35F2D__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0E7890)

inline static constexpr unsigned int Class_1_7C5F8B09D4A35F2D_TypeDefinitionIndex = 11078;

class Class_1_7C5F8B09D4A35F2D : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7C5F8B09D4A35F2D_TypeDefinitionIndex)->GetStaticField(0x53A30);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7C5F8B09D4A35F2D_TypeDefinitionIndex)->GetStaticField(0x53A38);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenWorkRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenWorkRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7C5F8B09D4A35F2D_TypeDefinitionIndex)->GetStaticField(0x53A40);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7C5F8B09D4A35F2D_TypeDefinitionIndex)->GetStaticField(0xE7F0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7C5F8B09D4A35F2D_TypeDefinitionIndex)->GetStaticField(0xE7F1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7C5F8B09D4A35F2D__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenWorkRow*>* Method_1_C39DC4736F370371()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenWorkRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7C5F8B09D4A35F2D_METHOD_1_C39DC4736F370371_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_7C5F8B09D4A35F2D_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenWorkRow*> Method_1_004DF13759A9514A()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenWorkRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_7C5F8B09D4A35F2D_METHOD_1_004DF13759A9514A_OFFSET))();
	}

	static ::RPG::GameCore::ActivityHipplenWorkRow* Method_1_49E35E72B36C4137(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ActivityHipplenWorkRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7C5F8B09D4A35F2D_METHOD_1_49E35E72B36C4137_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_7C5F8B09D4A35F2D_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7C5F8B09D4A35F2D_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7C5F8B09D4A35F2D_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7C5F8B09D4A35F2D_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_7C5F8B09D4A35F2D_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_7C5F8B09D4A35F2D_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_EB03BA34429B0993(::RPG::GameCore::ActivityHipplenWorkRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ActivityHipplenWorkRow*))((::PBYTE)hIl2Cpp + CLASS_1_7C5F8B09D4A35F2D_METHOD_1_EB03BA34429B0993_OFFSET))(a1);
	}
};
