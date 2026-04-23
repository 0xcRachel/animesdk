#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_AB817CB39E494C61___C__ADDHIGHLIGHTENTITY_B__142_0_OFFSET UNITYSDK_OFFSET(0x112EA1E0)
#define CLASS_1_AB817CB39E494C61___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x112EA190)
#define CLASS_1_AB817CB39E494C61___C__CTOR_OFFSET UNITYSDK_OFFSET(0x112EA1D0)

inline static constexpr unsigned int Class_1_AB817CB39E494C61___c_TypeDefinitionIndex = 65623;

class Class_1_AB817CB39E494C61___c : public ::System::Object
{
public:
	static ::Class_1_AB817CB39E494C61___c** StaticGet___9()
	{
		return (::Class_1_AB817CB39E494C61___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AB817CB39E494C61___c_TypeDefinitionIndex)->GetStaticField(0x5B2B0);
	}
	static ::System::Comparison_1<::System::UInt32>** StaticGet___9__142_0()
	{
		return (::System::Comparison_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AB817CB39E494C61___c_TypeDefinitionIndex)->GetStaticField(0x5B2B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _AddHighlightEntity_b__142_0(::System::UInt32 id1, ::System::UInt32 id2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AB817CB39E494C61___C__ADDHIGHLIGHTENTITY_B__142_0_OFFSET))(this, id1, id2);
	}
};
