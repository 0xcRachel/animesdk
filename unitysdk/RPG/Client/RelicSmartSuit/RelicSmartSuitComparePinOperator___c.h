#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x131B31F0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR___C__CTOR_OFFSET UNITYSDK_OFFSET(0x131B3230)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR___C__PINRELIC_B__17_1_OFFSET UNITYSDK_OFFSET(0x131B3240)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR___C__UNPINRELIC_B__18_1_OFFSET UNITYSDK_OFFSET(0x131B3270)

namespace RPG::Client::RelicSmartSuit
{
	inline static constexpr unsigned int RelicSmartSuitComparePinOperator___c_TypeDefinitionIndex = 68668;

	class RelicSmartSuitComparePinOperator___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Exception*>** StaticGet___9__18_1()
		{
			return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(RelicSmartSuitComparePinOperator___c_TypeDefinitionIndex)->GetStaticField(0x1C300);
		}
		static ::System::Action_1<::System::Exception*>** StaticGet___9__17_1()
		{
			return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(RelicSmartSuitComparePinOperator___c_TypeDefinitionIndex)->GetStaticField(0x1C308);
		}
		static ::RPG::Client::RelicSmartSuit::RelicSmartSuitComparePinOperator___c** StaticGet___9()
		{
			return (::RPG::Client::RelicSmartSuit::RelicSmartSuitComparePinOperator___c**)Il2CppClass::FromTypeDefinitionIndex(RelicSmartSuitComparePinOperator___c_TypeDefinitionIndex)->GetStaticField(0x1C310);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR___C__CTOR_OFFSET))(this);
		}

		::System::Void _PinRelic_b__17_1(::System::Exception* exception)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR___C__PINRELIC_B__17_1_OFFSET))(this, exception);
		}

		::System::Void _UnPinRelic_b__18_1(::System::Exception* exception)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR___C__UNPINRELIC_B__18_1_OFFSET))(this, exception);
		}
	};
}
