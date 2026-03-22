#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_319;
class Class_0_16E4307DCC419505_322;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_17D9D8A82A8CEDA6_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x11110340)
#define CLASS_1_17D9D8A82A8CEDA6_METHOD_1_33D87F659B9AA2DA_OFFSET UNITYSDK_OFFSET(0x111103B0)
#define CLASS_1_17D9D8A82A8CEDA6_METHOD_1_3DA9A43EFAE30DBC_OFFSET UNITYSDK_OFFSET(0x11110360)
#define CLASS_1_17D9D8A82A8CEDA6_SET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x11110350)
#define CLASS_1_17D9D8A82A8CEDA6__CTOR_OFFSET UNITYSDK_OFFSET(0x11110750)

inline static constexpr unsigned int Class_1_17D9D8A82A8CEDA6_TypeDefinitionIndex = 40980;

class Class_1_17D9D8A82A8CEDA6 : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_319*>* _Properties_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17D9D8A82A8CEDA6__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_319*>* get_Properties()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_319*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17D9D8A82A8CEDA6_GET_PROPERTIES_OFFSET))(this);
	}

	::System::Void set_Properties(::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_319*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_319*>*))((::PBYTE)hIl2Cpp + CLASS_1_17D9D8A82A8CEDA6_SET_PROPERTIES_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint Method_1_3DA9A43EFAE30DBC(::Class_0_16E4307DCC419505_322* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::Class_0_16E4307DCC419505_322*))((::PBYTE)hIl2Cpp + CLASS_1_17D9D8A82A8CEDA6_METHOD_1_3DA9A43EFAE30DBC_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_33D87F659B9AA2DA(::Class_0_16E4307DCC419505_322* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::Class_0_16E4307DCC419505_322*))((::PBYTE)hIl2Cpp + CLASS_1_17D9D8A82A8CEDA6_METHOD_1_33D87F659B9AA2DA_OFFSET))(this, a1);
	}
};
