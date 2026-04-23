#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class IdleLiveSuperChatRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_601E1E785C5E513E_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x187E8A20)
#define CLASS_1_601E1E785C5E513E_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x187E8840)
#define CLASS_1_601E1E785C5E513E_METHOD_1_4D1C6CD02339D26A_OFFSET UNITYSDK_OFFSET(0x187E8A70)
#define CLASS_1_601E1E785C5E513E_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x187E81D0)
#define CLASS_1_601E1E785C5E513E_METHOD_1_A9757F821D7A78A3_OFFSET UNITYSDK_OFFSET(0x187E8480)
#define CLASS_1_601E1E785C5E513E_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x187E88E0)
#define CLASS_1_601E1E785C5E513E_METHOD_1_B0802E1B94474094_OFFSET UNITYSDK_OFFSET(0x187E8630)
#define CLASS_1_601E1E785C5E513E_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x187E8420)
#define CLASS_1_601E1E785C5E513E_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x187E8800)
#define CLASS_1_601E1E785C5E513E_METHOD_1_F10EC3D712232F96_OFFSET UNITYSDK_OFFSET(0x187E8150)
#define CLASS_1_601E1E785C5E513E_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x187E8980)
#define CLASS_1_601E1E785C5E513E__CCTOR_OFFSET UNITYSDK_OFFSET(0x187E8DD0)

inline static constexpr unsigned int Class_1_601E1E785C5E513E_TypeDefinitionIndex = 11240;

class Class_1_601E1E785C5E513E : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_601E1E785C5E513E_TypeDefinitionIndex)->GetStaticField(0x290B0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSuperChatRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSuperChatRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_601E1E785C5E513E_TypeDefinitionIndex)->GetStaticField(0x290B8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_601E1E785C5E513E_TypeDefinitionIndex)->GetStaticField(0x290C0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_601E1E785C5E513E_TypeDefinitionIndex)->GetStaticField(0x7FB0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_601E1E785C5E513E_TypeDefinitionIndex)->GetStaticField(0x7FB1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_601E1E785C5E513E__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSuperChatRow*>* Method_1_F10EC3D712232F96()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSuperChatRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_601E1E785C5E513E_METHOD_1_F10EC3D712232F96_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_601E1E785C5E513E_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSuperChatRow*> Method_1_A9757F821D7A78A3()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSuperChatRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_601E1E785C5E513E_METHOD_1_A9757F821D7A78A3_OFFSET))();
	}

	static ::RPG::GameCore::IdleLiveSuperChatRow* Method_1_B0802E1B94474094(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::IdleLiveSuperChatRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_601E1E785C5E513E_METHOD_1_B0802E1B94474094_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_601E1E785C5E513E_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_601E1E785C5E513E_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_601E1E785C5E513E_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_601E1E785C5E513E_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_601E1E785C5E513E_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_601E1E785C5E513E_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_4D1C6CD02339D26A(::RPG::GameCore::IdleLiveSuperChatRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::IdleLiveSuperChatRow*))((::PBYTE)hIl2Cpp + CLASS_1_601E1E785C5E513E_METHOD_1_4D1C6CD02339D26A_OFFSET))(a1);
	}
};
