#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_AVATARDATAEDUCATIONHIGHLIGHTCOMPARER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8CCF410)
#define RPG_CLIENT_AVATARDATAEDUCATIONHIGHLIGHTCOMPARER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8CCF450)
#define RPG_CLIENT_AVATARDATAEDUCATIONHIGHLIGHTCOMPARER___C___CTOR_B__2_0_OFFSET UNITYSDK_OFFSET(0x8CCF460)
#define RPG_CLIENT_AVATARDATAEDUCATIONHIGHLIGHTCOMPARER___C___CTOR_B__2_1_OFFSET UNITYSDK_OFFSET(0x8CCF4D0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarDataEducationHighlightComparer___c_TypeDefinitionIndex = 49674;

	class AvatarDataEducationHighlightComparer___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::AvatarData*, ::System::Boolean>** StaticGet___9__2_1()
		{
			return (::System::Func_2<::RPG::Client::AvatarData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AvatarDataEducationHighlightComparer___c_TypeDefinitionIndex)->GetStaticField(0x30DB0);
		}
		static ::System::Func_2<::RPG::Client::AvatarData*, ::System::Boolean>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::RPG::Client::AvatarData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AvatarDataEducationHighlightComparer___c_TypeDefinitionIndex)->GetStaticField(0x30DB8);
		}
		static ::RPG::Client::AvatarDataEducationHighlightComparer___c** StaticGet___9()
		{
			return (::RPG::Client::AvatarDataEducationHighlightComparer___c**)Il2CppClass::FromTypeDefinitionIndex(AvatarDataEducationHighlightComparer___c_TypeDefinitionIndex)->GetStaticField(0x30DC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATAEDUCATIONHIGHLIGHTCOMPARER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATAEDUCATIONHIGHLIGHTCOMPARER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __ctor_b__2_0(::RPG::Client::AvatarData* avatarData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATAEDUCATIONHIGHLIGHTCOMPARER___C___CTOR_B__2_0_OFFSET))(this, avatarData);
		}

		::System::Boolean __ctor_b__2_1(::RPG::Client::AvatarData* avatarData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATAEDUCATIONHIGHLIGHTCOMPARER___C___CTOR_B__2_1_OFFSET))(this, avatarData);
		}
	};
}
