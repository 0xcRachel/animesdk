#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueMiracleData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ROGUEMIRACLEINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9E23D90)
#define RPG_CLIENT_ROGUEMIRACLEINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9E23DD0)
#define RPG_CLIENT_ROGUEMIRACLEINFO___C__GETALLHEXMIRACLES_B__11_0_OFFSET UNITYSDK_OFFSET(0x9E23DE0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMiracleInfo___c_TypeDefinitionIndex = 53461;

	class RogueMiracleInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::RogueMiracleData*, ::System::Boolean>** StaticGet___9__11_0()
		{
			return (::System::Func_2<::RPG::Client::RogueMiracleData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RogueMiracleInfo___c_TypeDefinitionIndex)->GetStaticField(0x7860);
		}
		static ::RPG::Client::RogueMiracleInfo___c** StaticGet___9()
		{
			return (::RPG::Client::RogueMiracleInfo___c**)Il2CppClass::FromTypeDefinitionIndex(RogueMiracleInfo___c_TypeDefinitionIndex)->GetStaticField(0x7868);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAllHexMiracles_b__11_0(::RPG::Client::RogueMiracleData* miracle)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueMiracleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEINFO___C__GETALLHEXMIRACLES_B__11_0_OFFSET))(this, miracle);
		}
	};
}
