#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A047D65884258648.h"

class Class_1_5920B33BD610F975;
namespace RPG::GameCore { class MarbleByAnd; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_DB4DEC7FE1D3EB9D_METHOD_3_F55212E77440B167_OFFSET UNITYSDK_OFFSET(0x160B8010)
#define CLASS_3_DB4DEC7FE1D3EB9D__CTOR_OFFSET UNITYSDK_OFFSET(0x160B7EC0)

inline static constexpr unsigned int Class_3_DB4DEC7FE1D3EB9D_TypeDefinitionIndex = 32285;

class Class_3_DB4DEC7FE1D3EB9D : public ::Class_2_A047D65884258648
{
public:
	::System::Collections::Generic::List_1<::Class_2_A047D65884258648*>* Field_3_1; // 0x30
	::RPG::GameCore::MarbleByAnd* Field_3_0; // 0x38

	::System::Void _ctor(::RPG::GameCore::MarbleByAnd* a1, ::Class_1_5920B33BD610F975* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleByAnd*, ::Class_1_5920B33BD610F975*))((::PBYTE)hIl2Cpp + CLASS_3_DB4DEC7FE1D3EB9D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_F55212E77440B167()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB4DEC7FE1D3EB9D_METHOD_3_F55212E77440B167_OFFSET))(this);
	}
};
