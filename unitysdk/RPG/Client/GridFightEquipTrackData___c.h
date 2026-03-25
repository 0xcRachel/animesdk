#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_37.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_5.h"

namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightEquipTrack; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x981D6C0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x981D700)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__UPDATEEQUIPTRACK_B__16_0_OFFSET UNITYSDK_OFFSET(0x981D710)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C___ADDTRACKTOLASTANDSEND_B__33_0_OFFSET UNITYSDK_OFFSET(0x981D7B0)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C___GETMAXPRIORITY_B__28_0_OFFSET UNITYSDK_OFFSET(0x981D730)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C___GETMINPRIORITY_B__29_0_OFFSET UNITYSDK_OFFSET(0x981D750)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C___RESETALLTRACKSPRIORITYANDSEND_B__32_0_OFFSET UNITYSDK_OFFSET(0x981D770)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C___RESETALLTRACKSPRIORITYANDSEND_B__32_1_OFFSET UNITYSDK_OFFSET(0x981D790)
#define RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C___TRYASSIGNBASICEQUIP_B__42_1_OFFSET UNITYSDK_OFFSET(0x981D7D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipTrackData___c_TypeDefinitionIndex = 53050;

	class GridFightEquipTrackData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>** StaticGet___9__42_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightEquipTrackData___c_TypeDefinitionIndex)->GetStaticField(0x18980);
		}
		static ::System::Func_2<::RPG::Client::GridFightEquipTrack*, ::System::UInt32>** StaticGet___9__28_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipTrack*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightEquipTrackData___c_TypeDefinitionIndex)->GetStaticField(0x18988);
		}
		static ::System::Comparison_1<::System::ValueTuple_5<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::Enum_3_0A3761FE34514D6C_37, ::System::UInt32>>** StaticGet___9__32_1()
		{
			return (::System::Comparison_1<::System::ValueTuple_5<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::Enum_3_0A3761FE34514D6C_37, ::System::UInt32>>**)Il2CppClass::FromTypeDefinitionIndex(GridFightEquipTrackData___c_TypeDefinitionIndex)->GetStaticField(0x18990);
		}
		static ::System::Comparison_1<::System::ValueTuple_5<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::Enum_3_0A3761FE34514D6C_37, ::System::UInt32>>** StaticGet___9__32_0()
		{
			return (::System::Comparison_1<::System::ValueTuple_5<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::Enum_3_0A3761FE34514D6C_37, ::System::UInt32>>**)Il2CppClass::FromTypeDefinitionIndex(GridFightEquipTrackData___c_TypeDefinitionIndex)->GetStaticField(0x18998);
		}
		static ::System::Comparison_1<::System::ValueTuple_5<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::Enum_3_0A3761FE34514D6C_37, ::System::UInt32>>** StaticGet___9__33_0()
		{
			return (::System::Comparison_1<::System::ValueTuple_5<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::Enum_3_0A3761FE34514D6C_37, ::System::UInt32>>**)Il2CppClass::FromTypeDefinitionIndex(GridFightEquipTrackData___c_TypeDefinitionIndex)->GetStaticField(0x189A0);
		}
		static ::System::Func_2<::RPG::Client::GridFightEquipTrack*, ::System::UInt32>** StaticGet___9__29_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipTrack*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightEquipTrackData___c_TypeDefinitionIndex)->GetStaticField(0x189A8);
		}
		static ::RPG::Client::GridFightEquipTrackData___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightEquipTrackData___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightEquipTrackData___c_TypeDefinitionIndex)->GetStaticField(0x189B0);
		}
		static ::System::Func_2<::RPG::Client::GridFightEquipTrack*, ::System::Int64>** StaticGet___9__16_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipTrack*, ::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(GridFightEquipTrackData___c_TypeDefinitionIndex)->GetStaticField(0x189B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__CTOR_OFFSET))(this);
		}

		::System::Int64 _UpdateEquipTrack_b__16_0(::RPG::Client::GridFightEquipTrack* x)
		{
			return ((::System::Int64(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C__UPDATEEQUIPTRACK_B__16_0_OFFSET))(this, x);
		}

		::System::UInt32 __GetMaxPriority_b__28_0(::RPG::Client::GridFightEquipTrack* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C___GETMAXPRIORITY_B__28_0_OFFSET))(this, x);
		}

		::System::UInt32 __GetMinPriority_b__29_0(::RPG::Client::GridFightEquipTrack* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightEquipTrack*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C___GETMINPRIORITY_B__29_0_OFFSET))(this, x);
		}

		::System::Int32 __ResetAllTracksPriorityAndSend_b__32_0(::System::ValueTuple_5<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::Enum_3_0A3761FE34514D6C_37, ::System::UInt32> a, ::System::ValueTuple_5<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::Enum_3_0A3761FE34514D6C_37, ::System::UInt32> b)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_5<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::Enum_3_0A3761FE34514D6C_37, ::System::UInt32>, ::System::ValueTuple_5<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::Enum_3_0A3761FE34514D6C_37, ::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C___RESETALLTRACKSPRIORITYANDSEND_B__32_0_OFFSET))(this, a, b);
		}

		::System::Int32 __ResetAllTracksPriorityAndSend_b__32_1(::System::ValueTuple_5<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::Enum_3_0A3761FE34514D6C_37, ::System::UInt32> a, ::System::ValueTuple_5<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::Enum_3_0A3761FE34514D6C_37, ::System::UInt32> b)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_5<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::Enum_3_0A3761FE34514D6C_37, ::System::UInt32>, ::System::ValueTuple_5<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::Enum_3_0A3761FE34514D6C_37, ::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C___RESETALLTRACKSPRIORITYANDSEND_B__32_1_OFFSET))(this, a, b);
		}

		::System::Int32 __AddTrackToLastAndSend_b__33_0(::System::ValueTuple_5<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::Enum_3_0A3761FE34514D6C_37, ::System::UInt32> a, ::System::ValueTuple_5<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::Enum_3_0A3761FE34514D6C_37, ::System::UInt32> b)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_5<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::Enum_3_0A3761FE34514D6C_37, ::System::UInt32>, ::System::ValueTuple_5<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::Enum_3_0A3761FE34514D6C_37, ::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C___ADDTRACKTOLASTANDSEND_B__33_0_OFFSET))(this, a, b);
		}

		::System::Boolean __TryAssignBasicEquip_b__42_1(::RPG::Client::GridFightEquipItemData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPTRACKDATA___C___TRYASSIGNBASICEQUIP_B__42_1_OFFSET))(this, x);
		}
	};
}
