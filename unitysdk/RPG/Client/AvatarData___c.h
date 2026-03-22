#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarPathData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_AVATARDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8CCAF70)
#define RPG_CLIENT_AVATARDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8CCAFB0)
#define RPG_CLIENT_AVATARDATA___C__GETLATESTPATHUNLOCKTIMESTAMP_B__75_0_OFFSET UNITYSDK_OFFSET(0x8CCAFC0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarData___c_TypeDefinitionIndex = 49614;

	class AvatarData___c : public ::System::Object
	{
	public:
		static ::RPG::Client::AvatarData___c** StaticGet___9()
		{
			return (::RPG::Client::AvatarData___c**)Il2CppClass::FromTypeDefinitionIndex(AvatarData___c_TypeDefinitionIndex)->GetStaticField(0x30190);
		}
		static ::System::Func_2<::RPG::Client::AvatarPathData*, ::System::UInt64>** StaticGet___9__75_0()
		{
			return (::System::Func_2<::RPG::Client::AvatarPathData*, ::System::UInt64>**)Il2CppClass::FromTypeDefinitionIndex(AvatarData___c_TypeDefinitionIndex)->GetStaticField(0x30198);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA___C__CTOR_OFFSET))(this);
		}

		::System::UInt64 _GetLatestPathUnlockTimestamp_b__75_0(::RPG::Client::AvatarPathData* pathData)
		{
			return ((::System::UInt64(*)(::PVOID, ::RPG::Client::AvatarPathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA___C__GETLATESTPATHUNLOCKTIMESTAMP_B__75_0_OFFSET))(this, pathData);
		}
	};
}
