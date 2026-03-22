#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define UNITYENGINE_PROBUILDER_SHAREDVERTEX___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18093E50)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18093E90)
#define UNITYENGINE_PROBUILDER_SHAREDVERTEX___C__SORTEDREMOVEANDSHIFT_B__26_0_OFFSET UNITYSDK_OFFSET(0x18093EA0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int SharedVertex___c_TypeDefinitionIndex = 33181;

	class SharedVertex___c : public ::System::Object
	{
	public:
		static ::UnityEngine::ProBuilder::SharedVertex___c** StaticGet___9()
		{
			return (::UnityEngine::ProBuilder::SharedVertex___c**)Il2CppClass::FromTypeDefinitionIndex(SharedVertex___c_TypeDefinitionIndex)->GetStaticField(0x2FA50);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>, ::System::Boolean>** StaticGet___9__26_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(SharedVertex___c_TypeDefinitionIndex)->GetStaticField(0x2FA58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _SortedRemoveAndShift_b__26_0(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32> x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SHAREDVERTEX___C__SORTEDREMOVEANDSHIFT_B__26_0_OFFSET))(this, x);
		}
	};
}
