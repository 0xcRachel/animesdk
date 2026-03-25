#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarEnhancedHint; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_AVATARMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9159380)
#define RPG_CLIENT_AVATARMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x91593C0)
#define RPG_CLIENT_AVATARMODULE___C__REFRESHENHANCEREDDOT_B__14_0_OFFSET UNITYSDK_OFFSET(0x91593D0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarModule___c_TypeDefinitionIndex = 50754;

	class AvatarModule___c : public ::System::Object
	{
	public:
		static ::RPG::Client::AvatarModule___c** StaticGet___9()
		{
			return (::RPG::Client::AvatarModule___c**)Il2CppClass::FromTypeDefinitionIndex(AvatarModule___c_TypeDefinitionIndex)->GetStaticField(0x46820);
		}
		static ::System::Func_2<::RPG::Client::AvatarEnhancedHint*, ::System::UInt32>** StaticGet___9__14_0()
		{
			return (::System::Func_2<::RPG::Client::AvatarEnhancedHint*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(AvatarModule___c_TypeDefinitionIndex)->GetStaticField(0x46828);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _RefreshEnhanceRedDot_b__14_0(::RPG::Client::AvatarEnhancedHint* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::AvatarEnhancedHint*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE___C__REFRESHENHANCEREDDOT_B__14_0_OFFSET))(this, x);
		}
	};
}
