#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicValue; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELUPRULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8F001C0)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELUPRULE___C__CREATEWITHCONSTVALUES_B__7_0_OFFSET UNITYSDK_OFFSET(0x8F002C0)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELUPRULE___C__CREATEWITHCONSTVALUES_B__7_1_OFFSET UNITYSDK_OFFSET(0x8F00320)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELUPRULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8F001F0)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELUPRULE___C__READCONSTVALUEOFEXPBEFORELEVELUP_B__6_0_OFFSET UNITYSDK_OFFSET(0x8F00200)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELUPRULE___C__READCONSTVALUEOFEXPBEFORELEVELUP_B__6_1_OFFSET UNITYSDK_OFFSET(0x8F00260)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelChimeraLevelInfo_LevelUpRule___c_TypeDefinitionIndex = 50287;

	class ChimeraDuelChimeraLevelInfo_LevelUpRule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>, ::System::Int32>** StaticGet___9__6_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelChimeraLevelInfo_LevelUpRule___c_TypeDefinitionIndex)->GetStaticField(0x41CE0);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>, ::System::Int32>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelChimeraLevelInfo_LevelUpRule___c_TypeDefinitionIndex)->GetStaticField(0x41CE8);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>, ::System::Int32>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelChimeraLevelInfo_LevelUpRule___c_TypeDefinitionIndex)->GetStaticField(0x41CF0);
		}
		static ::RPG::Client::ChimeraDuelChimeraLevelInfo_LevelUpRule___c** StaticGet___9()
		{
			return (::RPG::Client::ChimeraDuelChimeraLevelInfo_LevelUpRule___c**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelChimeraLevelInfo_LevelUpRule___c_TypeDefinitionIndex)->GetStaticField(0x41CF8);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>, ::System::Int32>** StaticGet___9__7_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelChimeraLevelInfo_LevelUpRule___c_TypeDefinitionIndex)->GetStaticField(0x41D00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELUPRULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELUPRULE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _ReadConstValueOfExpBeforeLevelUp_b__6_0(::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*> p)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELUPRULE___C__READCONSTVALUEOFEXPBEFORELEVELUP_B__6_0_OFFSET))(this, p);
		}

		::System::Int32 _ReadConstValueOfExpBeforeLevelUp_b__6_1(::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*> p)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELUPRULE___C__READCONSTVALUEOFEXPBEFORELEVELUP_B__6_1_OFFSET))(this, p);
		}

		::System::Int32 _CreateWithConstValues_b__7_0(::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*> p)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELUPRULE___C__CREATEWITHCONSTVALUES_B__7_0_OFFSET))(this, p);
		}

		::System::Int32 _CreateWithConstValues_b__7_1(::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*> p)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELUPRULE___C__CREATEWITHCONSTVALUES_B__7_1_OFFSET))(this, p);
		}
	};
}
