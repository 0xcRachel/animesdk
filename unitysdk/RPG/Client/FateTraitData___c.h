#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FateTraitBuffItem; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_FATETRAITDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x96B6040)
#define RPG_CLIENT_FATETRAITDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x96B6080)
#define RPG_CLIENT_FATETRAITDATA___C__ISANYBUFFACTIVE_B__6_0_OFFSET UNITYSDK_OFFSET(0x96B6090)

namespace RPG::Client
{
	inline static constexpr unsigned int FateTraitData___c_TypeDefinitionIndex = 51925;

	class FateTraitData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::FateTraitBuffItem*, ::System::Boolean>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::RPG::Client::FateTraitBuffItem*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(FateTraitData___c_TypeDefinitionIndex)->GetStaticField(0x1D90);
		}
		static ::RPG::Client::FateTraitData___c** StaticGet___9()
		{
			return (::RPG::Client::FateTraitData___c**)Il2CppClass::FromTypeDefinitionIndex(FateTraitData___c_TypeDefinitionIndex)->GetStaticField(0x1D98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsAnyBuffActive_b__6_0(::RPG::Client::FateTraitBuffItem* buff)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateTraitBuffItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA___C__ISANYBUFFACTIVE_B__6_0_OFFSET))(this, buff);
		}
	};
}
