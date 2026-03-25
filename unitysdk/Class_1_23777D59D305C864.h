#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MatchThreeV2PVPScoreRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_23777D59D305C864_METHOD_1_046084096C19435D_OFFSET UNITYSDK_OFFSET(0x17988AC0)
#define CLASS_1_23777D59D305C864_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x17988A70)
#define CLASS_1_23777D59D305C864_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x17988890)
#define CLASS_1_23777D59D305C864_METHOD_1_59F395202A8A8512_OFFSET UNITYSDK_OFFSET(0x17988500)
#define CLASS_1_23777D59D305C864_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x17988250)
#define CLASS_1_23777D59D305C864_METHOD_1_6FF037F7E2E99D60_OFFSET UNITYSDK_OFFSET(0x179881D0)
#define CLASS_1_23777D59D305C864_METHOD_1_AC7769668DF7C226_OFFSET UNITYSDK_OFFSET(0x17988680)
#define CLASS_1_23777D59D305C864_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x17988930)
#define CLASS_1_23777D59D305C864_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x179884A0)
#define CLASS_1_23777D59D305C864_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x17988850)
#define CLASS_1_23777D59D305C864_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x179889D0)
#define CLASS_1_23777D59D305C864__CCTOR_OFFSET UNITYSDK_OFFSET(0x17988DD0)

inline static constexpr unsigned int Class_1_23777D59D305C864_TypeDefinitionIndex = 10993;

class Class_1_23777D59D305C864 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_23777D59D305C864_TypeDefinitionIndex)->GetStaticField(0x3F9C0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2PVPScoreRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2PVPScoreRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_23777D59D305C864_TypeDefinitionIndex)->GetStaticField(0x3F9C8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_23777D59D305C864_TypeDefinitionIndex)->GetStaticField(0x3F9D0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_23777D59D305C864_TypeDefinitionIndex)->GetStaticField(0x10BC0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_23777D59D305C864_TypeDefinitionIndex)->GetStaticField(0x10BC1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_23777D59D305C864__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2PVPScoreRow*>* Method_1_6FF037F7E2E99D60()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2PVPScoreRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_23777D59D305C864_METHOD_1_6FF037F7E2E99D60_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_23777D59D305C864_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2PVPScoreRow*> Method_1_59F395202A8A8512()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2PVPScoreRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_23777D59D305C864_METHOD_1_59F395202A8A8512_OFFSET))();
	}

	static ::RPG::GameCore::MatchThreeV2PVPScoreRow* Method_1_AC7769668DF7C226(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::MatchThreeV2PVPScoreRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_23777D59D305C864_METHOD_1_AC7769668DF7C226_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_23777D59D305C864_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_23777D59D305C864_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_23777D59D305C864_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_23777D59D305C864_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_23777D59D305C864_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_23777D59D305C864_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_046084096C19435D(::RPG::GameCore::MatchThreeV2PVPScoreRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::MatchThreeV2PVPScoreRow*))((::PBYTE)hIl2Cpp + CLASS_1_23777D59D305C864_METHOD_1_046084096C19435D_OFFSET))(a1);
	}
};
