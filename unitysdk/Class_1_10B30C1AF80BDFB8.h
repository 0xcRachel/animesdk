#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AetherDivideOverflowChunkRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_10B30C1AF80BDFB8_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x16BED530)
#define CLASS_1_10B30C1AF80BDFB8_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16BED350)
#define CLASS_1_10B30C1AF80BDFB8_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16BECCE0)
#define CLASS_1_10B30C1AF80BDFB8_METHOD_1_922EAA89E52D2E98_OFFSET UNITYSDK_OFFSET(0x16BED580)
#define CLASS_1_10B30C1AF80BDFB8_METHOD_1_962EACD8ABE78DE2_OFFSET UNITYSDK_OFFSET(0x16BECC60)
#define CLASS_1_10B30C1AF80BDFB8_METHOD_1_AAD67BE416E62272_OFFSET UNITYSDK_OFFSET(0x16BED140)
#define CLASS_1_10B30C1AF80BDFB8_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16BED3F0)
#define CLASS_1_10B30C1AF80BDFB8_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16BECF30)
#define CLASS_1_10B30C1AF80BDFB8_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16BED310)
#define CLASS_1_10B30C1AF80BDFB8_METHOD_1_F295C2B928A8EAB7_OFFSET UNITYSDK_OFFSET(0x16BECF90)
#define CLASS_1_10B30C1AF80BDFB8_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16BED490)
#define CLASS_1_10B30C1AF80BDFB8__CCTOR_OFFSET UNITYSDK_OFFSET(0x16BED8E0)

inline static constexpr unsigned int Class_1_10B30C1AF80BDFB8_TypeDefinitionIndex = 10247;

class Class_1_10B30C1AF80BDFB8 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_10B30C1AF80BDFB8_TypeDefinitionIndex)->GetStaticField(0x27EE0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_10B30C1AF80BDFB8_TypeDefinitionIndex)->GetStaticField(0x27EE8);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideOverflowChunkRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideOverflowChunkRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_10B30C1AF80BDFB8_TypeDefinitionIndex)->GetStaticField(0x27EF0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_10B30C1AF80BDFB8_TypeDefinitionIndex)->GetStaticField(0x88B0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_10B30C1AF80BDFB8_TypeDefinitionIndex)->GetStaticField(0x88B1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_10B30C1AF80BDFB8__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideOverflowChunkRow*>* Method_1_962EACD8ABE78DE2()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideOverflowChunkRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_10B30C1AF80BDFB8_METHOD_1_962EACD8ABE78DE2_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_10B30C1AF80BDFB8_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideOverflowChunkRow*> Method_1_F295C2B928A8EAB7()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideOverflowChunkRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_10B30C1AF80BDFB8_METHOD_1_F295C2B928A8EAB7_OFFSET))();
	}

	static ::RPG::GameCore::AetherDivideOverflowChunkRow* Method_1_AAD67BE416E62272(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::AetherDivideOverflowChunkRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_10B30C1AF80BDFB8_METHOD_1_AAD67BE416E62272_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_10B30C1AF80BDFB8_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_10B30C1AF80BDFB8_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_10B30C1AF80BDFB8_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_10B30C1AF80BDFB8_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_10B30C1AF80BDFB8_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_10B30C1AF80BDFB8_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_922EAA89E52D2E98(::RPG::GameCore::AetherDivideOverflowChunkRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::AetherDivideOverflowChunkRow*))((::PBYTE)hIl2Cpp + CLASS_1_10B30C1AF80BDFB8_METHOD_1_922EAA89E52D2E98_OFFSET))(a1);
	}
};
