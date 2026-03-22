#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_046D7E7D73E44996_1;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_FRIENDMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x92B3860)
#define RPG_CLIENT_FRIENDMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x92B38A0)
#define RPG_CLIENT_FRIENDMODULE___C__GETPSUUIDBLACKLIST_B__118_0_OFFSET UNITYSDK_OFFSET(0x92B38D0)
#define RPG_CLIENT_FRIENDMODULE___C__GETPSUUIDFRIENDLIST_B__117_0_OFFSET UNITYSDK_OFFSET(0x92B38B0)

namespace RPG::Client
{
	inline static constexpr unsigned int FriendModule___c_TypeDefinitionIndex = 51032;

	class FriendModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_046D7E7D73E44996_1*, ::System::String*>** StaticGet___9__117_0()
		{
			return (::System::Func_2<::Class_1_046D7E7D73E44996_1*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FriendModule___c_TypeDefinitionIndex)->GetStaticField(0x431E0);
		}
		static ::RPG::Client::FriendModule___c** StaticGet___9()
		{
			return (::RPG::Client::FriendModule___c**)Il2CppClass::FromTypeDefinitionIndex(FriendModule___c_TypeDefinitionIndex)->GetStaticField(0x431E8);
		}
		static ::System::Func_2<::Class_1_046D7E7D73E44996_1*, ::System::String*>** StaticGet___9__118_0()
		{
			return (::System::Func_2<::Class_1_046D7E7D73E44996_1*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FriendModule___c_TypeDefinitionIndex)->GetStaticField(0x431F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDMODULE___C__CTOR_OFFSET))(this);
		}

		::System::String* _GetPSUUIDFriendList_b__117_0(::Class_1_046D7E7D73E44996_1* info)
		{
			return ((::System::String*(*)(::PVOID, ::Class_1_046D7E7D73E44996_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDMODULE___C__GETPSUUIDFRIENDLIST_B__117_0_OFFSET))(this, info);
		}

		::System::String* _GetPSUUIDBlackList_b__118_0(::Class_1_046D7E7D73E44996_1* info)
		{
			return ((::System::String*(*)(::PVOID, ::Class_1_046D7E7D73E44996_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FRIENDMODULE___C__GETPSUUIDBLACKLIST_B__118_0_OFFSET))(this, info);
		}
	};
}
