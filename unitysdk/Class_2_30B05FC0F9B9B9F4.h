#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_89B326182DD9AB58.h"

class Class_0_16E4307DCC419505_27;
class Class_1_7AB88D713F5121B3_7;
namespace RPG::Client { class RPGProfilerMarker; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_30B05FC0F9B9B9F4_METHOD_2_39D3738DEE24AEF3_OFFSET UNITYSDK_OFFSET(0x16035430)
#define CLASS_2_30B05FC0F9B9B9F4_METHOD_2_D282BE78E490ABA0_OFFSET UNITYSDK_OFFSET(0x160353B0)
#define CLASS_2_30B05FC0F9B9B9F4_METHOD_2_E93C866FE6327E56_OFFSET UNITYSDK_OFFSET(0x160354F0)
#define CLASS_2_30B05FC0F9B9B9F4__CTOR_OFFSET UNITYSDK_OFFSET(0x16035370)

inline static constexpr unsigned int Class_2_30B05FC0F9B9B9F4_TypeDefinitionIndex = 27895;

class Class_2_30B05FC0F9B9B9F4 : public ::Class_1_89B326182DD9AB58
{
public:
	::RPG::Client::RPGProfilerMarker* Field_2_0; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_27* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_27*))((::PBYTE)hIl2Cpp + CLASS_2_30B05FC0F9B9B9F4__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_D282BE78E490ABA0(::Class_1_7AB88D713F5121B3_7* a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7AB88D713F5121B3_7*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_30B05FC0F9B9B9F4_METHOD_2_D282BE78E490ABA0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_39D3738DEE24AEF3(::System::UInt32 a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_30B05FC0F9B9B9F4_METHOD_2_39D3738DEE24AEF3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_E93C866FE6327E56(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_30B05FC0F9B9B9F4_METHOD_2_E93C866FE6327E56_OFFSET))(this, a1, a2, a3);
	}
};
