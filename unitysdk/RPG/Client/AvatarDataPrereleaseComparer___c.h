#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_AVATARDATAPRERELEASECOMPARER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8CCFAA0)
#define RPG_CLIENT_AVATARDATAPRERELEASECOMPARER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8CCFAE0)
#define RPG_CLIENT_AVATARDATAPRERELEASECOMPARER___C___CTOR_B__3_0_OFFSET UNITYSDK_OFFSET(0x8CCFAF0)
#define RPG_CLIENT_AVATARDATAPRERELEASECOMPARER___C___CTOR_B__3_1_OFFSET UNITYSDK_OFFSET(0x8CCFB60)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarDataPrereleaseComparer___c_TypeDefinitionIndex = 49677;

	class AvatarDataPrereleaseComparer___c : public ::System::Object
	{
	public:
		static ::RPG::Client::AvatarDataPrereleaseComparer___c** StaticGet___9()
		{
			return (::RPG::Client::AvatarDataPrereleaseComparer___c**)Il2CppClass::FromTypeDefinitionIndex(AvatarDataPrereleaseComparer___c_TypeDefinitionIndex)->GetStaticField(0x30E00);
		}
		static ::System::Func_2<::RPG::Client::AvatarData*, ::System::Boolean>** StaticGet___9__3_1()
		{
			return (::System::Func_2<::RPG::Client::AvatarData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AvatarDataPrereleaseComparer___c_TypeDefinitionIndex)->GetStaticField(0x30E08);
		}
		static ::System::Func_2<::RPG::Client::AvatarData*, ::System::Boolean>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::RPG::Client::AvatarData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AvatarDataPrereleaseComparer___c_TypeDefinitionIndex)->GetStaticField(0x30E10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATAPRERELEASECOMPARER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATAPRERELEASECOMPARER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __ctor_b__3_0(::RPG::Client::AvatarData* avatarData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATAPRERELEASECOMPARER___C___CTOR_B__3_0_OFFSET))(this, avatarData);
		}

		::System::Boolean __ctor_b__3_1(::RPG::Client::AvatarData* avatarData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATAPRERELEASECOMPARER___C___CTOR_B__3_1_OFFSET))(this, avatarData);
		}
	};
}
