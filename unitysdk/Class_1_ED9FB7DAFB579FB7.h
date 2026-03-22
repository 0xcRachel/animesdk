#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MatchThreeV2ChallengerRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_ED9FB7DAFB579FB7_METHOD_1_0BC230FE675AFF73_OFFSET UNITYSDK_OFFSET(0x16BF4B00)
#define CLASS_1_ED9FB7DAFB579FB7_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x16BF5020)
#define CLASS_1_ED9FB7DAFB579FB7_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16BF4E40)
#define CLASS_1_ED9FB7DAFB579FB7_METHOD_1_347C6D739C839867_OFFSET UNITYSDK_OFFSET(0x16BF47D0)
#define CLASS_1_ED9FB7DAFB579FB7_METHOD_1_43B2DFAAF7AC0B14_OFFSET UNITYSDK_OFFSET(0x16BF5070)
#define CLASS_1_ED9FB7DAFB579FB7_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16BF4850)
#define CLASS_1_ED9FB7DAFB579FB7_METHOD_1_6EDC4D367EFF9B50_OFFSET UNITYSDK_OFFSET(0x16BF4C80)
#define CLASS_1_ED9FB7DAFB579FB7_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16BF4EE0)
#define CLASS_1_ED9FB7DAFB579FB7_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16BF4AA0)
#define CLASS_1_ED9FB7DAFB579FB7_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16BF4E00)
#define CLASS_1_ED9FB7DAFB579FB7_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16BF4F80)
#define CLASS_1_ED9FB7DAFB579FB7__CCTOR_OFFSET UNITYSDK_OFFSET(0x16BF5380)

inline static constexpr unsigned int Class_1_ED9FB7DAFB579FB7_TypeDefinitionIndex = 10915;

class Class_1_ED9FB7DAFB579FB7 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ED9FB7DAFB579FB7_TypeDefinitionIndex)->GetStaticField(0x28210);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2ChallengerRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2ChallengerRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ED9FB7DAFB579FB7_TypeDefinitionIndex)->GetStaticField(0x28218);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ED9FB7DAFB579FB7_TypeDefinitionIndex)->GetStaticField(0x28220);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_ED9FB7DAFB579FB7_TypeDefinitionIndex)->GetStaticField(0x8980);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_ED9FB7DAFB579FB7_TypeDefinitionIndex)->GetStaticField(0x8981);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_ED9FB7DAFB579FB7__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2ChallengerRow*>* Method_1_347C6D739C839867()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2ChallengerRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_ED9FB7DAFB579FB7_METHOD_1_347C6D739C839867_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_ED9FB7DAFB579FB7_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2ChallengerRow*> Method_1_0BC230FE675AFF73()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2ChallengerRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_ED9FB7DAFB579FB7_METHOD_1_0BC230FE675AFF73_OFFSET))();
	}

	static ::RPG::GameCore::MatchThreeV2ChallengerRow* Method_1_6EDC4D367EFF9B50(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::MatchThreeV2ChallengerRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_ED9FB7DAFB579FB7_METHOD_1_6EDC4D367EFF9B50_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_ED9FB7DAFB579FB7_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_ED9FB7DAFB579FB7_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_ED9FB7DAFB579FB7_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_ED9FB7DAFB579FB7_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_ED9FB7DAFB579FB7_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_ED9FB7DAFB579FB7_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_43B2DFAAF7AC0B14(::RPG::GameCore::MatchThreeV2ChallengerRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::MatchThreeV2ChallengerRow*))((::PBYTE)hIl2Cpp + CLASS_1_ED9FB7DAFB579FB7_METHOD_1_43B2DFAAF7AC0B14_OFFSET))(a1);
	}
};
