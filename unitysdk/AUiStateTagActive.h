#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AUiStateTagBase.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define AUISTATETAGACTIVE_GET_STATETAGLIST_OFFSET UNITYSDK_OFFSET(0x1055CAA0)
#define AUISTATETAGACTIVE_ISFALSE_OFFSET UNITYSDK_OFFSET(0x1055C9C0)
#define AUISTATETAGACTIVE_ISTRUE_OFFSET UNITYSDK_OFFSET(0x1055CA30)
#define AUISTATETAGACTIVE_SET_STATETAGLIST_OFFSET UNITYSDK_OFFSET(0x1055CAB0)
#define AUISTATETAGACTIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1055CAC0)

inline static constexpr unsigned int AUiStateTagActive_TypeDefinitionIndex = 37473;

class AUiStateTagActive : public ::AUiStateTagBase
{
public:
	::System::Collections::Generic::List_1<::System::Boolean>* StateList; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUISTATETAGACTIVE__CTOR_OFFSET))(this);
	}

	::System::Void IsFalse()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUISTATETAGACTIVE_ISFALSE_OFFSET))(this);
	}

	::System::Void IsTrue()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUISTATETAGACTIVE_ISTRUE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Boolean>* get_StateTagList()
	{
		return ((::System::Collections::Generic::List_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AUISTATETAGACTIVE_GET_STATETAGLIST_OFFSET))(this);
	}

	::System::Void set_StateTagList(::System::Collections::Generic::List_1<::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + AUISTATETAGACTIVE_SET_STATETAGLIST_OFFSET))(this, a1);
	}
};
