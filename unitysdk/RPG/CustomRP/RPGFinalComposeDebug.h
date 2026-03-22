#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CUSTOMRP_RPGFINALCOMPOSEDEBUG__CCTOR_OFFSET UNITYSDK_OFFSET(0x163C3460)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGFinalComposeDebug_TypeDefinitionIndex = 28541;

	class RPGFinalComposeDebug : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_DumpTonemappingDataFileName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RPGFinalComposeDebug_TypeDefinitionIndex)->GetStaticField(0x38D10);
		}
		static ::System::Boolean* StaticGet_DebugEnableGamutClipping()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RPGFinalComposeDebug_TypeDefinitionIndex)->GetStaticField(0xE320);
		}
		static ::System::Boolean* StaticGet_DebugHDROutputIntermediate()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RPGFinalComposeDebug_TypeDefinitionIndex)->GetStaticField(0xE321);
		}
		static ::System::Boolean* StaticGet_NeedDumpTonemappingData()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RPGFinalComposeDebug_TypeDefinitionIndex)->GetStaticField(0xE322);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSEDEBUG__CCTOR_OFFSET))();
		}
	};
}
