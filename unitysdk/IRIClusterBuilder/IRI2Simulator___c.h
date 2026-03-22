#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Converter_2; }

#define IRICLUSTERBUILDER_IRI2SIMULATOR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10AD3FF0)
#define IRICLUSTERBUILDER_IRI2SIMULATOR___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10AD4030)
#define IRICLUSTERBUILDER_IRI2SIMULATOR___C__INITMESHCLUSTERS_B__29_0_OFFSET UNITYSDK_OFFSET(0x10AD4040)
#define IRICLUSTERBUILDER_IRI2SIMULATOR___C__INITVOLUME_B__30_1_OFFSET UNITYSDK_OFFSET(0x10AD4050)

namespace IRIClusterBuilder
{
	inline static constexpr unsigned int IRI2Simulator___c_TypeDefinitionIndex = 37654;

	class IRI2Simulator___c : public ::System::Object
	{
	public:
		static ::System::Converter_2<::System::UInt32, ::System::Int32>** StaticGet___9__30_1()
		{
			return (::System::Converter_2<::System::UInt32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(IRI2Simulator___c_TypeDefinitionIndex)->GetStaticField(0x43BA0);
		}
		static ::IRIClusterBuilder::IRI2Simulator___c** StaticGet___9()
		{
			return (::IRIClusterBuilder::IRI2Simulator___c**)Il2CppClass::FromTypeDefinitionIndex(IRI2Simulator___c_TypeDefinitionIndex)->GetStaticField(0x43BA8);
		}
		static ::System::Converter_2<::System::UInt32, ::System::Int32>** StaticGet___9__29_0()
		{
			return (::System::Converter_2<::System::UInt32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(IRI2Simulator___c_TypeDefinitionIndex)->GetStaticField(0x43BB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_IRI2SIMULATOR___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_IRI2SIMULATOR___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _InitMeshClusters_b__29_0(::System::UInt32 x)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_IRI2SIMULATOR___C__INITMESHCLUSTERS_B__29_0_OFFSET))(this, x);
		}

		::System::Int32 _InitVolume_b__30_1(::System::UInt32 x)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_IRI2SIMULATOR___C__INITVOLUME_B__30_1_OFFSET))(this, x);
		}
	};
}
