#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define SCENENLIGHTMANAGER_LIGHTSETEXPORTDATALONG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA687770)
#define SCENENLIGHTMANAGER_LIGHTSETEXPORTDATALONG___C__COMPAREDATATOOTHER_B__3_0_OFFSET UNITYSDK_OFFSET(0xA6877C0)
#define SCENENLIGHTMANAGER_LIGHTSETEXPORTDATALONG___C__COMPAREDATATOOTHER_B__3_1_OFFSET UNITYSDK_OFFSET(0xA6877D0)
#define SCENENLIGHTMANAGER_LIGHTSETEXPORTDATALONG___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA6877B0)
#define SCENENLIGHTMANAGER_LIGHTSETEXPORTDATALONG___C__EQUALS_B__4_0_OFFSET UNITYSDK_OFFSET(0xA6877E0)
#define SCENENLIGHTMANAGER_LIGHTSETEXPORTDATALONG___C__EQUALS_B__4_1_OFFSET UNITYSDK_OFFSET(0xA6877F0)
#define SCENENLIGHTMANAGER_LIGHTSETEXPORTDATALONG___C__GETHASHCODE_B__5_0_OFFSET UNITYSDK_OFFSET(0xA687800)
#define SCENENLIGHTMANAGER_LIGHTSETEXPORTDATALONG___C__GETHASHCODE_B__5_1_OFFSET UNITYSDK_OFFSET(0xA687810)

namespace ScenenLightManager
{
	inline static constexpr unsigned int LightSetExportDataLong___c_TypeDefinitionIndex = 38870;

	class LightSetExportDataLong___c : public ::System::Object
	{
	public:
		static ::System::Func_3<::System::Int32, ::System::Int64, ::System::Int32>** StaticGet___9__5_1()
		{
			return (::System::Func_3<::System::Int32, ::System::Int64, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LightSetExportDataLong___c_TypeDefinitionIndex)->GetStaticField(0x41920);
		}
		static ::System::Func_2<::System::Int64, ::System::Int64>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::System::Int64, ::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(LightSetExportDataLong___c_TypeDefinitionIndex)->GetStaticField(0x41928);
		}
		static ::System::Func_2<::System::Int64, ::System::Int64>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::System::Int64, ::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(LightSetExportDataLong___c_TypeDefinitionIndex)->GetStaticField(0x41930);
		}
		static ::System::Func_2<::System::Int64, ::System::Int64>** StaticGet___9__4_1()
		{
			return (::System::Func_2<::System::Int64, ::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(LightSetExportDataLong___c_TypeDefinitionIndex)->GetStaticField(0x41938);
		}
		static ::System::Func_2<::System::Int64, ::System::Int64>** StaticGet___9__3_1()
		{
			return (::System::Func_2<::System::Int64, ::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(LightSetExportDataLong___c_TypeDefinitionIndex)->GetStaticField(0x41940);
		}
		static ::ScenenLightManager::LightSetExportDataLong___c** StaticGet___9()
		{
			return (::ScenenLightManager::LightSetExportDataLong___c**)Il2CppClass::FromTypeDefinitionIndex(LightSetExportDataLong___c_TypeDefinitionIndex)->GetStaticField(0x41948);
		}
		static ::System::Func_2<::System::Int64, ::System::Int64>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::System::Int64, ::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(LightSetExportDataLong___c_TypeDefinitionIndex)->GetStaticField(0x41950);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTSETEXPORTDATALONG___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTSETEXPORTDATALONG___C__CTOR_OFFSET))(this);
		}

		::System::Int64 _CompareDataToOther_b__3_0(::System::Int64 x)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTSETEXPORTDATALONG___C__COMPAREDATATOOTHER_B__3_0_OFFSET))(this, x);
		}

		::System::Int64 _CompareDataToOther_b__3_1(::System::Int64 x)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTSETEXPORTDATALONG___C__COMPAREDATATOOTHER_B__3_1_OFFSET))(this, x);
		}

		::System::Int64 _Equals_b__4_0(::System::Int64 x)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTSETEXPORTDATALONG___C__EQUALS_B__4_0_OFFSET))(this, x);
		}

		::System::Int64 _Equals_b__4_1(::System::Int64 x)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTSETEXPORTDATALONG___C__EQUALS_B__4_1_OFFSET))(this, x);
		}

		::System::Int64 _GetHashCode_b__5_0(::System::Int64 x)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTSETEXPORTDATALONG___C__GETHASHCODE_B__5_0_OFFSET))(this, x);
		}

		::System::Int32 _GetHashCode_b__5_1(::System::Int32 h, ::System::Int64 i)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTSETEXPORTDATALONG___C__GETHASHCODE_B__5_1_OFFSET))(this, h, i);
		}
	};
}
