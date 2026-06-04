#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CUSTOMRP_RPGFINALCOMPOSEDEBUG__CCTOR_OFFSET UNITYSDK_OFFSET(0x15816D80)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGFinalComposeDebug_TypeDefinitionIndex = 35483;

	class RPGFinalComposeDebug : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_DumpTonemappingDataFileName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RPGFinalComposeDebug_TypeDefinitionIndex)->GetStaticField(0x44260);
		}
		static ::System::Boolean* StaticGet_NeedDumpTonemappingData()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RPGFinalComposeDebug_TypeDefinitionIndex)->GetStaticField(0xD110);
		}
		static ::System::Boolean* StaticGet_DebugEnableGamutClipping()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RPGFinalComposeDebug_TypeDefinitionIndex)->GetStaticField(0xD111);
		}
		static ::System::Boolean* StaticGet_DebugHDROutputIntermediate()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RPGFinalComposeDebug_TypeDefinitionIndex)->GetStaticField(0xD112);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSEDEBUG__CCTOR_OFFSET))();
		}
	};
}
