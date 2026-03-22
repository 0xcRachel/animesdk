#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_233;
class Class_1_74C6821D77CCA75B;
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine::Events { class UnityEventBase; }

#define CLASS_1_DEE329B75AC10D64_METHOD_1_1F674D8DC58D0E0B_OFFSET UNITYSDK_OFFSET(0x17B82630)
#define CLASS_1_DEE329B75AC10D64_METHOD_1_78960824780F71F7_OFFSET UNITYSDK_OFFSET(0x17B82390)
#define CLASS_1_DEE329B75AC10D64_METHOD_1_9401CCBE5ED32BB5_OFFSET UNITYSDK_OFFSET(0x17B82860)
#define CLASS_1_DEE329B75AC10D64_METHOD_1_FB541505EA112889_OFFSET UNITYSDK_OFFSET(0x17B82F80)
#define CLASS_1_DEE329B75AC10D64__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B83100)

inline static constexpr unsigned int Class_1_DEE329B75AC10D64_TypeDefinitionIndex = 32998;

class Class_1_DEE329B75AC10D64 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Type*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DEE329B75AC10D64_TypeDefinitionIndex)->GetStaticField(0x2BA70);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DEE329B75AC10D64__CCTOR_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_233* Method_1_78960824780F71F7(::System::Object* a1, ::Class_1_74C6821D77CCA75B* a2)
	{
		return ((::Class_0_16E4307DCC419505_233*(*)(::System::Object*, ::Class_1_74C6821D77CCA75B*))((::PBYTE)hIl2Cpp + CLASS_1_DEE329B75AC10D64_METHOD_1_78960824780F71F7_OFFSET))(a1, a2);
	}

	static ::Class_0_16E4307DCC419505_233* Method_1_9401CCBE5ED32BB5(::System::Object* a1, ::UnityEngine::Events::UnityEventBase* a2, ::Il2CppArray<::System::Type*>* a3)
	{
		return ((::Class_0_16E4307DCC419505_233*(*)(::System::Object*, ::UnityEngine::Events::UnityEventBase*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + CLASS_1_DEE329B75AC10D64_METHOD_1_9401CCBE5ED32BB5_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Events::UnityEventBase* Method_1_FB541505EA112889(::System::Type* a1, ::System::Object* a2, ::System::String* a3)
	{
		return ((::UnityEngine::Events::UnityEventBase*(*)(::System::Type*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DEE329B75AC10D64_METHOD_1_FB541505EA112889_OFFSET))(a1, a2, a3);
	}

	static ::Il2CppArray<::System::Type*>* Method_1_1F674D8DC58D0E0B(::System::Type* a1)
	{
		return ((::Il2CppArray<::System::Type*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_DEE329B75AC10D64_METHOD_1_1F674D8DC58D0E0B_OFFSET))(a1);
	}
};
