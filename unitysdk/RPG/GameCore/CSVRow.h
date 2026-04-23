#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackFormulaType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/HealFormulaType.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::IO { class TextWriter; }

#define RPG_GAMECORE_CSVROW_CLEAR_OFFSET UNITYSDK_OFFSET(0x19A76AE0)
#define RPG_GAMECORE_CSVROW_COL_10_OFFSET UNITYSDK_OFFSET(0x19A761C0)
#define RPG_GAMECORE_CSVROW_COL_11_OFFSET UNITYSDK_OFFSET(0x19A76350)
#define RPG_GAMECORE_CSVROW_COL_12_OFFSET UNITYSDK_OFFSET(0x19A764E0)
#define RPG_GAMECORE_CSVROW_COL_13_OFFSET UNITYSDK_OFFSET(0x19A76670)
#define RPG_GAMECORE_CSVROW_COL_1_OFFSET UNITYSDK_OFFSET(0x19A75AB0)
#define RPG_GAMECORE_CSVROW_COL_2_OFFSET UNITYSDK_OFFSET(0x19A75B30)
#define RPG_GAMECORE_CSVROW_COL_3_OFFSET UNITYSDK_OFFSET(0x19A75BC0)
#define RPG_GAMECORE_CSVROW_COL_4_OFFSET UNITYSDK_OFFSET(0x19A75C50)
#define RPG_GAMECORE_CSVROW_COL_5_OFFSET UNITYSDK_OFFSET(0x19A75CF0)
#define RPG_GAMECORE_CSVROW_COL_6_OFFSET UNITYSDK_OFFSET(0x19A75D80)
#define RPG_GAMECORE_CSVROW_COL_7_OFFSET UNITYSDK_OFFSET(0x19A75E10)
#define RPG_GAMECORE_CSVROW_COL_8_OFFSET UNITYSDK_OFFSET(0x19A75EA0)
#define RPG_GAMECORE_CSVROW_COL_9_OFFSET UNITYSDK_OFFSET(0x19A76030)
#define RPG_GAMECORE_CSVROW_COL_OFFSET UNITYSDK_OFFSET(0x19A75A00)
#define RPG_GAMECORE_CSVROW_TOSTREAMWRITER_OFFSET UNITYSDK_OFFSET(0x19A769A0)
#define RPG_GAMECORE_CSVROW_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19A76940)
#define RPG_GAMECORE_CSVROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19A759D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CSVRow_TypeDefinitionIndex = 23542;

	class CSVRow : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet__healFormulaTypeNames()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CSVRow_TypeDefinitionIndex)->GetStaticField(0x124F0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet__attackFormulaTypeNames()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CSVRow_TypeDefinitionIndex)->GetStaticField(0x124F8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet__attackDamageTypeNames()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CSVRow_TypeDefinitionIndex)->GetStaticField(0x12500);
		}
		static ::Il2CppArray<::System::String*>** StaticGet__teamTypeNames()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CSVRow_TypeDefinitionIndex)->GetStaticField(0x12508);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet__attackDamageTypeValues()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CSVRow_TypeDefinitionIndex)->GetStaticField(0x12510);
		}
		static ::Il2CppArray<::System::String*>** StaticGet__attackTypeNames()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CSVRow_TypeDefinitionIndex)->GetStaticField(0x12518);
		}
		static ::Il2CppArray<::System::String*>** StaticGet__skillTypeNames()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CSVRow_TypeDefinitionIndex)->GetStaticField(0x12520);
		}
		::Il2CppArray<::System::String*>* _Headers; // 0x10
		::Il2CppArray<::System::String*>* _Values; // 0x18

		::System::Void _ctor(::Il2CppArray<::System::String*>* arrHeaders)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CSVROW__CTOR_OFFSET))(this, arrHeaders);
		}

		::RPG::GameCore::CSVRow* Col(::System::String* sName, ::System::Object* pValue)
		{
			return ((::RPG::GameCore::CSVRow*(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CSVROW_COL_OFFSET))(this, sName, pValue);
		}

		::RPG::GameCore::CSVRow* Col_1(::System::String* sName, ::System::String* pValue)
		{
			return ((::RPG::GameCore::CSVRow*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CSVROW_COL_1_OFFSET))(this, sName, pValue);
		}

		::RPG::GameCore::CSVRow* Col_2(::System::String* sName, ::System::Int64 pValue)
		{
			return ((::RPG::GameCore::CSVRow*(*)(::PVOID, ::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CSVROW_COL_2_OFFSET))(this, sName, pValue);
		}

		::RPG::GameCore::CSVRow* Col_3(::System::String* sName, ::RPG::GameCore::FixPoint pValue)
		{
			return ((::RPG::GameCore::CSVRow*(*)(::PVOID, ::System::String*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CSVROW_COL_3_OFFSET))(this, sName, pValue);
		}

		::RPG::GameCore::CSVRow* Col_4(::System::String* sName, ::System::Single pValue)
		{
			return ((::RPG::GameCore::CSVRow*(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CSVROW_COL_4_OFFSET))(this, sName, pValue);
		}

		::RPG::GameCore::CSVRow* Col_5(::System::String* sName, ::System::Int32 pValue)
		{
			return ((::RPG::GameCore::CSVRow*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CSVROW_COL_5_OFFSET))(this, sName, pValue);
		}

		::RPG::GameCore::CSVRow* Col_6(::System::String* sName, ::System::UInt32 pValue)
		{
			return ((::RPG::GameCore::CSVRow*(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CSVROW_COL_6_OFFSET))(this, sName, pValue);
		}

		::RPG::GameCore::CSVRow* Col_7(::System::String* sName, ::System::Boolean pValue)
		{
			return ((::RPG::GameCore::CSVRow*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CSVROW_COL_7_OFFSET))(this, sName, pValue);
		}

		::RPG::GameCore::CSVRow* Col_8(::System::String* sName, ::RPG::GameCore::TeamType pValue)
		{
			return ((::RPG::GameCore::CSVRow*(*)(::PVOID, ::System::String*, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CSVROW_COL_8_OFFSET))(this, sName, pValue);
		}

		::RPG::GameCore::CSVRow* Col_9(::System::String* sName, ::RPG::GameCore::SkillType pValue)
		{
			return ((::RPG::GameCore::CSVRow*(*)(::PVOID, ::System::String*, ::RPG::GameCore::SkillType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CSVROW_COL_9_OFFSET))(this, sName, pValue);
		}

		::RPG::GameCore::CSVRow* Col_10(::System::String* sName, ::RPG::GameCore::AttackType pValue)
		{
			return ((::RPG::GameCore::CSVRow*(*)(::PVOID, ::System::String*, ::RPG::GameCore::AttackType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CSVROW_COL_10_OFFSET))(this, sName, pValue);
		}

		::RPG::GameCore::CSVRow* Col_11(::System::String* sName, ::RPG::GameCore::HealFormulaType pValue)
		{
			return ((::RPG::GameCore::CSVRow*(*)(::PVOID, ::System::String*, ::RPG::GameCore::HealFormulaType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CSVROW_COL_11_OFFSET))(this, sName, pValue);
		}

		::RPG::GameCore::CSVRow* Col_12(::System::String* sName, ::RPG::GameCore::AttackFormulaType pValue)
		{
			return ((::RPG::GameCore::CSVRow*(*)(::PVOID, ::System::String*, ::RPG::GameCore::AttackFormulaType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CSVROW_COL_12_OFFSET))(this, sName, pValue);
		}

		::RPG::GameCore::CSVRow* Col_13(::System::String* sName, ::RPG::GameCore::AttackDamageType pValue)
		{
			return ((::RPG::GameCore::CSVRow*(*)(::PVOID, ::System::String*, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CSVROW_COL_13_OFFSET))(this, sName, pValue);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CSVROW_TOSTRING_OFFSET))(this);
		}

		::System::Void ToStreamWriter(::System::IO::TextWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::TextWriter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CSVROW_TOSTREAMWRITER_OFFSET))(this, writer);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CSVROW_CLEAR_OFFSET))(this);
		}
	};
}
