#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_172.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_43BD383C98B4C0C5_173;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_89234CBEACD0293F_GET_REPEATCOUNT_OFFSET UNITYSDK_OFFSET(0x88E69F0)
#define CLASS_2_89234CBEACD0293F_METHOD_2_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x88E6A10)
#define CLASS_2_89234CBEACD0293F_METHOD_2_E24C08C02B6D42EC_OFFSET UNITYSDK_OFFSET(0x88E6BE0)
#define CLASS_2_89234CBEACD0293F_SET_REPEATCOUNT_OFFSET UNITYSDK_OFFSET(0x88E6A00)
#define CLASS_2_89234CBEACD0293F__CTOR_OFFSET UNITYSDK_OFFSET(0x88E6DA0)

inline static constexpr unsigned int Class_2_89234CBEACD0293F_TypeDefinitionIndex = 61161;

class Class_2_89234CBEACD0293F : public ::Class_1_43BD383C98B4C0C5_172
{
public:
	::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_173*>* Field_2_0; // 0x10
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_173*>*>* Field_2_2; // 0x18
	::System::Nullable_1<::System::Int32> _RepeatCount_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_89234CBEACD0293F__CTOR_OFFSET))(this);
	}

	::System::Nullable_1<::System::Int32> get_RepeatCount()
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_89234CBEACD0293F_GET_REPEATCOUNT_OFFSET))(this);
	}

	::System::Void set_RepeatCount(::System::Nullable_1<::System::Int32> value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_2_89234CBEACD0293F_SET_REPEATCOUNT_OFFSET))(this, value);
	}

	::System::Void Method_2_13696A527CD9CA86(::Class_1_43BD383C98B4C0C5_173* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_173*))((::PBYTE)hIl2Cpp + CLASS_2_89234CBEACD0293F_METHOD_2_13696A527CD9CA86_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Int32>* Method_2_E24C08C02B6D42EC(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*>* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*>*))((::PBYTE)hIl2Cpp + CLASS_2_89234CBEACD0293F_METHOD_2_E24C08C02B6D42EC_OFFSET))(this, a1);
	}
};
