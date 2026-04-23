#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C0BD047803C8E44F;
class Class_2_FD1781FBF85A46E5;
namespace RPG::Client { class BaseLobby; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_FD1781FBF85A46E5___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDB3CE30)
#define CLASS_2_FD1781FBF85A46E5___C__DISPLAYCLASS5_0___DOJOINLOBBY_B__0_OFFSET UNITYSDK_OFFSET(0xDB41E30)
#define CLASS_2_FD1781FBF85A46E5___C__DISPLAYCLASS5_0___DOJOINLOBBY_B__1_OFFSET UNITYSDK_OFFSET(0xDB41EE0)
#define CLASS_2_FD1781FBF85A46E5___C__DISPLAYCLASS5_0___DOJOINLOBBY_B__2_OFFSET UNITYSDK_OFFSET(0xDB42090)

inline static constexpr unsigned int Class_2_FD1781FBF85A46E5___c__DisplayClass5_0_TypeDefinitionIndex = 62952;

class Class_2_FD1781FBF85A46E5___c__DisplayClass5_0 : public ::System::Object
{
public:
	::Class_1_C0BD047803C8E44F* session; // 0x10
	::Class_2_FD1781FBF85A46E5* __4__this; // 0x18
	::System::Action_1<::System::Exception*>* __9__2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD1781FBF85A46E5___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>* __DoJoinLobby_b__0(::RPG::Client::BaseLobby* lobby)
	{
		return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + CLASS_2_FD1781FBF85A46E5___C__DISPLAYCLASS5_0___DOJOINLOBBY_B__0_OFFSET))(this, lobby);
	}

	::System::Void __DoJoinLobby_b__1(::System::Exception* ex)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_2_FD1781FBF85A46E5___C__DISPLAYCLASS5_0___DOJOINLOBBY_B__1_OFFSET))(this, ex);
	}

	::System::Void __DoJoinLobby_b__2(::System::Exception* cleanupEx)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_2_FD1781FBF85A46E5___C__DISPLAYCLASS5_0___DOJOINLOBBY_B__2_OFFSET))(this, cleanupEx);
	}
};
