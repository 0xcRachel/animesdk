#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputRangeType.h"
#include "unitysdk/System/ValueType.h"

#define INCONTROL_INPUTRANGE_EXCLUDES_1_OFFSET UNITYSDK_OFFSET(0x154685D0)
#define INCONTROL_INPUTRANGE_EXCLUDES_OFFSET UNITYSDK_OFFSET(0x1FF69D0)
#define INCONTROL_INPUTRANGE_INCLUDES_OFFSET UNITYSDK_OFFSET(0x1FF69A0)
#define INCONTROL_INPUTRANGE_REMAP_1_OFFSET UNITYSDK_OFFSET(0x154686A0)
#define INCONTROL_INPUTRANGE_REMAP_OFFSET UNITYSDK_OFFSET(0x154778B0)
#define INCONTROL_INPUTRANGE__CCTOR_OFFSET UNITYSDK_OFFSET(0x15477930)
#define INCONTROL_INPUTRANGE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FF68F0)
#define INCONTROL_INPUTRANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF68E0)

namespace InControl
{
	inline static constexpr unsigned int InputRange_TypeDefinitionIndex = 30535;

	struct alignas(4) InputRange
	{
		static ::Il2CppArray<::InControl::InputRange>** StaticGet_typeToRange()
		{
			return (::Il2CppArray<::InControl::InputRange>**)Il2CppClass::FromTypeDefinitionIndex(InputRange_TypeDefinitionIndex)->GetStaticField(0x30080);
		}
		static ::InControl::InputRange* StaticGet_ZeroToMinusOne()
		{
			return (::InControl::InputRange*)Il2CppClass::FromTypeDefinitionIndex(InputRange_TypeDefinitionIndex)->GetStaticField(0xB6F0);
		}
		static ::InControl::InputRange* StaticGet_ZeroToOne()
		{
			return (::InControl::InputRange*)Il2CppClass::FromTypeDefinitionIndex(InputRange_TypeDefinitionIndex)->GetStaticField(0xB6FC);
		}
		static ::InControl::InputRange* StaticGet_None()
		{
			return (::InControl::InputRange*)Il2CppClass::FromTypeDefinitionIndex(InputRange_TypeDefinitionIndex)->GetStaticField(0xB708);
		}
		static ::InControl::InputRange* StaticGet_OneToMinusOne()
		{
			return (::InControl::InputRange*)Il2CppClass::FromTypeDefinitionIndex(InputRange_TypeDefinitionIndex)->GetStaticField(0xB714);
		}
		static ::InControl::InputRange* StaticGet_MinusOneToOne()
		{
			return (::InControl::InputRange*)Il2CppClass::FromTypeDefinitionIndex(InputRange_TypeDefinitionIndex)->GetStaticField(0xB720);
		}
		static ::InControl::InputRange* StaticGet_MinusOneToZero()
		{
			return (::InControl::InputRange*)Il2CppClass::FromTypeDefinitionIndex(InputRange_TypeDefinitionIndex)->GetStaticField(0xB72C);
		}
		static ::InControl::InputRange* StaticGet_OneToZero()
		{
			return (::InControl::InputRange*)Il2CppClass::FromTypeDefinitionIndex(InputRange_TypeDefinitionIndex)->GetStaticField(0xB738);
		}
		::System::Single Value0; // 0x10
		::System::Single Value1; // 0x14
		::InControl::InputRangeType Type; // 0x18

		::System::Void _ctor(::System::Single value0, ::System::Single value1, ::InControl::InputRangeType type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::InControl::InputRangeType))((::PBYTE)hIl2Cpp + INCONTROL_INPUTRANGE__CTOR_OFFSET))(this, value0, value1, type);
		}

		::System::Void _ctor_1(::InControl::InputRangeType type)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputRangeType))((::PBYTE)hIl2Cpp + INCONTROL_INPUTRANGE__CTOR_1_OFFSET))(this, type);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_INPUTRANGE__CCTOR_OFFSET))();
		}

		::System::Boolean Includes(::System::Single value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTRANGE_INCLUDES_OFFSET))(this, value);
		}

		::System::Boolean Excludes(::System::Single value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTRANGE_EXCLUDES_OFFSET))(this, value);
		}

		static ::System::Boolean Excludes_1(::InControl::InputRangeType rangeType, ::System::Single value)
		{
			return ((::System::Boolean(*)(::InControl::InputRangeType, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTRANGE_EXCLUDES_1_OFFSET))(rangeType, value);
		}

		static ::System::Single Remap(::System::Single value, ::InControl::InputRange sourceRange, ::InControl::InputRange targetRange)
		{
			return ((::System::Single(*)(::System::Single, ::InControl::InputRange, ::InControl::InputRange))((::PBYTE)hIl2Cpp + INCONTROL_INPUTRANGE_REMAP_OFFSET))(value, sourceRange, targetRange);
		}

		static ::System::Single Remap_1(::System::Single value, ::InControl::InputRangeType sourceRangeType, ::InControl::InputRangeType targetRangeType)
		{
			return ((::System::Single(*)(::System::Single, ::InControl::InputRangeType, ::InControl::InputRangeType))((::PBYTE)hIl2Cpp + INCONTROL_INPUTRANGE_REMAP_1_OFFSET))(value, sourceRangeType, targetRangeType);
		}
	};
}
