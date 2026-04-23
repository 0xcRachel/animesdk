#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_36264895A759B0FF;
class Class_1_F3391C70DC37088D;
class Class_2_D533150DA9942A27;
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define CLASS_1_310D67B31C67B0C3_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC5E3840)
#define CLASS_1_310D67B31C67B0C3_METHOD_1_2F2F7924D292824D_OFFSET UNITYSDK_OFFSET(0xC5E4600)
#define CLASS_1_310D67B31C67B0C3_METHOD_1_3411EC0F4D7F3117_OFFSET UNITYSDK_OFFSET(0xC5E4800)
#define CLASS_1_310D67B31C67B0C3_METHOD_1_46D79C223C10A615_OFFSET UNITYSDK_OFFSET(0xC5E49B0)
#define CLASS_1_310D67B31C67B0C3_METHOD_1_9BB0845AD13FC9CB_OFFSET UNITYSDK_OFFSET(0xC5E4240)
#define CLASS_1_310D67B31C67B0C3_METHOD_1_9EF2487FEEF4EB62_OFFSET UNITYSDK_OFFSET(0xC5E4520)
#define CLASS_1_310D67B31C67B0C3_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0xC5E4730)
#define CLASS_1_310D67B31C67B0C3_METHOD_1_D4497E56EEC58A37_OFFSET UNITYSDK_OFFSET(0xC5E3A10)
#define CLASS_1_310D67B31C67B0C3__CTOR_OFFSET UNITYSDK_OFFSET(0xC5E4A20)

inline static constexpr unsigned int Class_1_310D67B31C67B0C3_TypeDefinitionIndex = 55971;

class Class_1_310D67B31C67B0C3 : public ::System::Object
{
public:
	::Class_1_36264895A759B0FF* Field_1_7; // 0x10
	::RPG::GameCore::TaskContext* Field_1_1; // 0x18
	::Class_1_F3391C70DC37088D* Field_1_3; // 0x20
	::Class_2_D533150DA9942A27* Field_1_4; // 0x28
	::System::String* Field_1_0; // 0x30
	::UnityEngine::Playables::PlayableDirector* Field_1_6; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Double>* Field_1_2; // 0x40
	::System::Int32 Field_1_5; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_310D67B31C67B0C3__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_310D67B31C67B0C3_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_D4497E56EEC58A37(::System::String* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_310D67B31C67B0C3_METHOD_1_D4497E56EEC58A37_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2F2F7924D292824D(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_310D67B31C67B0C3_METHOD_1_2F2F7924D292824D_OFFSET))(this, a1);
	}

	::System::Void Method_1_9BB0845AD13FC9CB(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_310D67B31C67B0C3_METHOD_1_9BB0845AD13FC9CB_OFFSET))(this, a1);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_310D67B31C67B0C3_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_1_9EF2487FEEF4EB62(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_310D67B31C67B0C3_METHOD_1_9EF2487FEEF4EB62_OFFSET))(this, a1);
	}

	::System::Void Method_1_3411EC0F4D7F3117(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_310D67B31C67B0C3_METHOD_1_3411EC0F4D7F3117_OFFSET))(this, a1);
	}

	::System::Void Method_1_46D79C223C10A615(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_310D67B31C67B0C3_METHOD_1_46D79C223C10A615_OFFSET))(this, a1);
	}
};
