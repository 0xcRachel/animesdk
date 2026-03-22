#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/ProfileCounterRestRule.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_PROFILECOUNTER_ADD_OFFSET UNITYSDK_OFFSET(0x17AD7B80)
#define RPG_PROFILECOUNTER_GET_CACHEDVALUE_OFFSET UNITYSDK_OFFSET(0x17AD79D0)
#define RPG_PROFILECOUNTER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x17AD7A00)
#define RPG_PROFILECOUNTER_GET_RESTRULE_OFFSET UNITYSDK_OFFSET(0x17AD79F0)
#define RPG_PROFILECOUNTER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x17AD79B0)
#define RPG_PROFILECOUNTER_OP_DECREMENT_OFFSET UNITYSDK_OFFSET(0x17AD7BB0)
#define RPG_PROFILECOUNTER_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x17AD7BD0)
#define RPG_PROFILECOUNTER_OP_INCREMENT_OFFSET UNITYSDK_OFFSET(0x17AD7B90)
#define RPG_PROFILECOUNTER_SETVAL_OFFSET UNITYSDK_OFFSET(0x17AD7B70)
#define RPG_PROFILECOUNTER_SETZERO_OFFSET UNITYSDK_OFFSET(0x17AD7B60)
#define RPG_PROFILECOUNTER_SET_CACHEDVALUE_OFFSET UNITYSDK_OFFSET(0x17AD79E0)
#define RPG_PROFILECOUNTER_SET_NAME_OFFSET UNITYSDK_OFFSET(0x17AD7A10)
#define RPG_PROFILECOUNTER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x17AD79C0)
#define RPG_PROFILECOUNTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17AD7BF0)
#define RPG_PROFILECOUNTER__CTOR_OFFSET UNITYSDK_OFFSET(0x17AD7A20)

namespace RPG
{
	inline static constexpr unsigned int ProfileCounter_TypeDefinitionIndex = 26885;

	class ProfileCounter : public ::System::Object
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::System::Int32 _CachedValue_k__BackingField; // 0x18
		::RPG::ProfileCounterRestRule _RestRule_k__BackingField; // 0x1C
		::System::Int32 _Value_k__BackingField; // 0x20

		::System::Void _ctor(::System::String* name, ::System::Int32 initVal, ::RPG::ProfileCounterRestRule resetRule)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::RPG::ProfileCounterRestRule))((::PBYTE)hIl2Cpp + RPG_PROFILECOUNTER__CTOR_OFFSET))(this, name, initVal, resetRule);
		}

		::System::Int32 get_Value()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_PROFILECOUNTER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_PROFILECOUNTER_SET_VALUE_OFFSET))(this, value);
		}

		::System::Int32 get_CachedValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_PROFILECOUNTER_GET_CACHEDVALUE_OFFSET))(this);
		}

		::System::Void set_CachedValue(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_PROFILECOUNTER_SET_CACHEDVALUE_OFFSET))(this, value);
		}

		::RPG::ProfileCounterRestRule get_RestRule()
		{
			return ((::RPG::ProfileCounterRestRule(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_PROFILECOUNTER_GET_RESTRULE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_PROFILECOUNTER_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_PROFILECOUNTER_SET_NAME_OFFSET))(this, value);
		}

		::System::Void SetZero()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_PROFILECOUNTER_SETZERO_OFFSET))(this);
		}

		::System::Void SetVal(::System::Int32 v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_PROFILECOUNTER_SETVAL_OFFSET))(this, v);
		}

		::RPG::ProfileCounter* Add(::System::Int32 v)
		{
			return ((::RPG::ProfileCounter*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_PROFILECOUNTER_ADD_OFFSET))(this, v);
		}

		static ::RPG::ProfileCounter* op_Increment(::RPG::ProfileCounter* x)
		{
			return ((::RPG::ProfileCounter*(*)(::RPG::ProfileCounter*))((::PBYTE)hIl2Cpp + RPG_PROFILECOUNTER_OP_INCREMENT_OFFSET))(x);
		}

		static ::RPG::ProfileCounter* op_Decrement(::RPG::ProfileCounter* x)
		{
			return ((::RPG::ProfileCounter*(*)(::RPG::ProfileCounter*))((::PBYTE)hIl2Cpp + RPG_PROFILECOUNTER_OP_DECREMENT_OFFSET))(x);
		}

		static ::System::Int32 op_Implicit(::RPG::ProfileCounter* c)
		{
			return ((::System::Int32(*)(::RPG::ProfileCounter*))((::PBYTE)hIl2Cpp + RPG_PROFILECOUNTER_OP_IMPLICIT_OFFSET))(c);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_PROFILECOUNTER_TOSTRING_OFFSET))(this);
		}
	};
}
