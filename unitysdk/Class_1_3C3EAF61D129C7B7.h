#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3C3EAF61D129C7B7_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x86A5C60)
#define CLASS_1_3C3EAF61D129C7B7_METHOD_1_5EDE1909371C0B5C_OFFSET UNITYSDK_OFFSET(0x86A5BB0)
#define CLASS_1_3C3EAF61D129C7B7_METHOD_1_C5A30FB77BE0A930_OFFSET UNITYSDK_OFFSET(0x86A5A40)
#define CLASS_1_3C3EAF61D129C7B7_RECEIVEMESSAGE_OFFSET UNITYSDK_OFFSET(0x86A5910)
#define CLASS_1_3C3EAF61D129C7B7__CTOR_OFFSET UNITYSDK_OFFSET(0x86A5D00)

inline static constexpr unsigned int Class_1_3C3EAF61D129C7B7_TypeDefinitionIndex = 51107;

class Class_1_3C3EAF61D129C7B7 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Action_1<::System::Object*>*>*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C3EAF61D129C7B7__CTOR_OFFSET))(this);
	}

	::System::Void ReceiveMessage(::System::Int32 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3C3EAF61D129C7B7_RECEIVEMESSAGE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C5A30FB77BE0A930(::System::Int32 a1, ::System::Action_1<::System::Object*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_3C3EAF61D129C7B7_METHOD_1_C5A30FB77BE0A930_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5EDE1909371C0B5C(::System::Int32 a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_3C3EAF61D129C7B7_METHOD_1_5EDE1909371C0B5C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C3EAF61D129C7B7_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}
};
