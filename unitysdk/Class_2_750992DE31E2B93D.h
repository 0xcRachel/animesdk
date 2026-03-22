#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FAF146B3D74C3C3F.h"
#include "unitysdk/RPG/Client/CachedAssetLogicType.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define CLASS_2_750992DE31E2B93D_METHOD_2_9999F3E4D60BFCCC_OFFSET UNITYSDK_OFFSET(0x8D27700)
#define CLASS_2_750992DE31E2B93D__CTOR_OFFSET UNITYSDK_OFFSET(0x8D27400)

inline static constexpr unsigned int Class_2_750992DE31E2B93D_TypeDefinitionIndex = 62407;

class Class_2_750992DE31E2B93D : public ::Class_1_FAF146B3D74C3C3F
{
public:
	::System::String* Field_2_0; // 0x20
	::System::Type* Field_2_1; // 0x28
	::System::Int32 Field_2_3; // 0x30
	::RPG::Client::CachedAssetLogicType Field_2_2; // 0x34

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_750992DE31E2B93D__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_9999F3E4D60BFCCC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_750992DE31E2B93D_METHOD_2_9999F3E4D60BFCCC_OFFSET))(this);
	}
};
