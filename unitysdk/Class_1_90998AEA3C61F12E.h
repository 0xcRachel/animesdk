#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json::Linq { class JToken; }
namespace System { class String; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define CLASS_1_90998AEA3C61F12E_METHOD_1_08B73798457994B5_OFFSET UNITYSDK_OFFSET(0xD7E0B60)
#define CLASS_1_90998AEA3C61F12E_METHOD_1_19245CCC668AF08F_OFFSET UNITYSDK_OFFSET(0xD7E0A60)
#define CLASS_1_90998AEA3C61F12E_METHOD_1_35B49A22B7095C59_OFFSET UNITYSDK_OFFSET(0xD7E0C80)
#define CLASS_1_90998AEA3C61F12E__CTOR_OFFSET UNITYSDK_OFFSET(0xD7E0A50)

inline static constexpr unsigned int Class_1_90998AEA3C61F12E_TypeDefinitionIndex = 40363;

class Class_1_90998AEA3C61F12E : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	::System::String* Field_1_1; // 0x10
	::System::String* Field_1_2; // 0x18

	::System::Void _ctor(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_90998AEA3C61F12E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Threading::Tasks::Task_1<::Il2CppArray<::Il2CppArray<::Newtonsoft::Json::Linq::JToken*>*>*>* Method_1_19245CCC668AF08F(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Threading::Tasks::Task_1<::Il2CppArray<::Il2CppArray<::Newtonsoft::Json::Linq::JToken*>*>*>*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_90998AEA3C61F12E_METHOD_1_19245CCC668AF08F_OFFSET))(this, a1, a2);
	}

	::System::Threading::Tasks::Task_1<::System::String*>* Method_1_08B73798457994B5(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Threading::Tasks::Task_1<::System::String*>*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_90998AEA3C61F12E_METHOD_1_08B73798457994B5_OFFSET))(this, a1, a2);
	}

	::System::Threading::Tasks::Task_1<::System::String*>* Method_1_35B49A22B7095C59()
	{
		return ((::System::Threading::Tasks::Task_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90998AEA3C61F12E_METHOD_1_35B49A22B7095C59_OFFSET))(this);
	}
};
