#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RestaurantEmployeeAbility.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_54A935D029EB1E19_CLEAR_OFFSET UNITYSDK_OFFSET(0x160D07D0)
#define CLASS_1_54A935D029EB1E19_METHOD_1_E5690B8E67129B07_OFFSET UNITYSDK_OFFSET(0x160D0820)
#define CLASS_1_54A935D029EB1E19__CTOR_OFFSET UNITYSDK_OFFSET(0x160D0880)

inline static constexpr unsigned int Class_1_54A935D029EB1E19_TypeDefinitionIndex = 31447;

class Class_1_54A935D029EB1E19 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54A935D029EB1E19__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54A935D029EB1E19_CLEAR_OFFSET))(this);
	}

	::System::Boolean Method_1_E5690B8E67129B07(::RPG::GameCore::RestaurantEmployeeAbility a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RestaurantEmployeeAbility))((::PBYTE)hIl2Cpp + CLASS_1_54A935D029EB1E19_METHOD_1_E5690B8E67129B07_OFFSET))(this, a1);
	}
};
