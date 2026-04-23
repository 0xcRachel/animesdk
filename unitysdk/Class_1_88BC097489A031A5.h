#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class IdleLiveEmojiConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_88BC097489A031A5_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x187E1A00)
#define CLASS_1_88BC097489A031A5_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x187E1820)
#define CLASS_1_88BC097489A031A5_METHOD_1_3C930FECDE2B8E3B_OFFSET UNITYSDK_OFFSET(0x187E1610)
#define CLASS_1_88BC097489A031A5_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x187E11B0)
#define CLASS_1_88BC097489A031A5_METHOD_1_8A1F9AA60D8B2A9A_OFFSET UNITYSDK_OFFSET(0x187E1460)
#define CLASS_1_88BC097489A031A5_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x187E18C0)
#define CLASS_1_88BC097489A031A5_METHOD_1_B8E8ADC98687346F_OFFSET UNITYSDK_OFFSET(0x187E1A50)
#define CLASS_1_88BC097489A031A5_METHOD_1_CAA2572D94104C41_OFFSET UNITYSDK_OFFSET(0x187E1130)
#define CLASS_1_88BC097489A031A5_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x187E1400)
#define CLASS_1_88BC097489A031A5_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x187E17E0)
#define CLASS_1_88BC097489A031A5_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x187E1960)
#define CLASS_1_88BC097489A031A5__CCTOR_OFFSET UNITYSDK_OFFSET(0x187E1DB0)

inline static constexpr unsigned int Class_1_88BC097489A031A5_TypeDefinitionIndex = 11138;

class Class_1_88BC097489A031A5 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_88BC097489A031A5_TypeDefinitionIndex)->GetStaticField(0x28E70);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEmojiConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEmojiConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_88BC097489A031A5_TypeDefinitionIndex)->GetStaticField(0x28E78);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_88BC097489A031A5_TypeDefinitionIndex)->GetStaticField(0x28E80);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_88BC097489A031A5_TypeDefinitionIndex)->GetStaticField(0x7F10);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_88BC097489A031A5_TypeDefinitionIndex)->GetStaticField(0x7F11);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_88BC097489A031A5__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEmojiConfigRow*>* Method_1_CAA2572D94104C41()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEmojiConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_88BC097489A031A5_METHOD_1_CAA2572D94104C41_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_88BC097489A031A5_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEmojiConfigRow*> Method_1_8A1F9AA60D8B2A9A()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEmojiConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_88BC097489A031A5_METHOD_1_8A1F9AA60D8B2A9A_OFFSET))();
	}

	static ::RPG::GameCore::IdleLiveEmojiConfigRow* Method_1_3C930FECDE2B8E3B(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::IdleLiveEmojiConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_88BC097489A031A5_METHOD_1_3C930FECDE2B8E3B_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_88BC097489A031A5_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_88BC097489A031A5_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_88BC097489A031A5_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_88BC097489A031A5_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_88BC097489A031A5_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_88BC097489A031A5_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_B8E8ADC98687346F(::RPG::GameCore::IdleLiveEmojiConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::IdleLiveEmojiConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_88BC097489A031A5_METHOD_1_B8E8ADC98687346F_OFFSET))(a1);
	}
};
