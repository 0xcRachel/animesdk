#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarDataLevelRaritySortType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarData; }

#define CLASS_1_8DD704D0952108E1_COMPARE_OFFSET UNITYSDK_OFFSET(0x10CFAC50)
#define CLASS_1_8DD704D0952108E1_GET_ISASCEND_OFFSET UNITYSDK_OFFSET(0x10CFAC30)
#define CLASS_1_8DD704D0952108E1_GET_SORTTYPE_OFFSET UNITYSDK_OFFSET(0x10CFAC10)
#define CLASS_1_8DD704D0952108E1_METHOD_1_C8AA80D7B89A8E78_OFFSET UNITYSDK_OFFSET(0x10CFADF0)
#define CLASS_1_8DD704D0952108E1_METHOD_1_D0BC0786C84D79EC_OFFSET UNITYSDK_OFFSET(0x10CFAE80)
#define CLASS_1_8DD704D0952108E1_SET_ISASCEND_OFFSET UNITYSDK_OFFSET(0x10CFAC20)
#define CLASS_1_8DD704D0952108E1_SET_SORTTYPE_OFFSET UNITYSDK_OFFSET(0x10CFAC00)
#define CLASS_1_8DD704D0952108E1__CTOR_OFFSET UNITYSDK_OFFSET(0x10CFAC40)

inline static constexpr unsigned int Class_1_8DD704D0952108E1_TypeDefinitionIndex = 49670;

class Class_1_8DD704D0952108E1 : public ::System::Object
{
public:
	::System::Boolean _IsAscend_k__BackingField; // 0x10
	::RPG::Client::AvatarDataLevelRaritySortType _SortType_k__BackingField; // 0x14

	::System::Void _ctor(::RPG::Client::AvatarDataLevelRaritySortType a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarDataLevelRaritySortType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8DD704D0952108E1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void set_SortType(::RPG::Client::AvatarDataLevelRaritySortType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarDataLevelRaritySortType))((::PBYTE)hIl2Cpp + CLASS_1_8DD704D0952108E1_SET_SORTTYPE_OFFSET))(this, value);
	}

	::RPG::Client::AvatarDataLevelRaritySortType get_SortType()
	{
		return ((::RPG::Client::AvatarDataLevelRaritySortType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8DD704D0952108E1_GET_SORTTYPE_OFFSET))(this);
	}

	::System::Void set_IsAscend(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8DD704D0952108E1_SET_ISASCEND_OFFSET))(this, value);
	}

	::System::Boolean get_IsAscend()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8DD704D0952108E1_GET_ISASCEND_OFFSET))(this);
	}

	::System::Int32 Compare(::RPG::Client::AvatarData* a1, ::RPG::Client::AvatarData* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::AvatarData*, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + CLASS_1_8DD704D0952108E1_COMPARE_OFFSET))(this, a1, a2);
	}

	static ::System::Int32 Method_1_C8AA80D7B89A8E78(::RPG::Client::AvatarData* a1, ::RPG::Client::AvatarData* a2)
	{
		return ((::System::Int32(*)(::RPG::Client::AvatarData*, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + CLASS_1_8DD704D0952108E1_METHOD_1_C8AA80D7B89A8E78_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_D0BC0786C84D79EC(::RPG::Client::AvatarData* a1, ::RPG::Client::AvatarData* a2)
	{
		return ((::System::Int32(*)(::RPG::Client::AvatarData*, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + CLASS_1_8DD704D0952108E1_METHOD_1_D0BC0786C84D79EC_OFFSET))(a1, a2);
	}
};
