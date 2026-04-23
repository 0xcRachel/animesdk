#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PlayNPCBubbleTalk; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_4D8178BD1AAA10FB_METHOD_3_1F96CACAEB5EDB64_OFFSET UNITYSDK_OFFSET(0x187050F0)
#define CLASS_3_4D8178BD1AAA10FB_METHOD_3_7F22A781A9156478_OFFSET UNITYSDK_OFFSET(0x187051C0)
#define CLASS_3_4D8178BD1AAA10FB__CTOR_OFFSET UNITYSDK_OFFSET(0x18705170)

inline static constexpr unsigned int Class_3_4D8178BD1AAA10FB_TypeDefinitionIndex = 20055;

class Class_3_4D8178BD1AAA10FB : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x18
	::System::String* Field_3_1; // 0x20
	::RPG::GameCore::PlayNPCBubbleTalk* Field_3_3; // 0x28
	::Il2CppArray<::System::UInt32>* Field_3_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4D8178BD1AAA10FB__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_1F96CACAEB5EDB64(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_4D8178BD1AAA10FB*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_4D8178BD1AAA10FB*&))((::PBYTE)hIl2Cpp + CLASS_3_4D8178BD1AAA10FB_METHOD_3_1F96CACAEB5EDB64_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7F22A781A9156478(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_4D8178BD1AAA10FB* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_4D8178BD1AAA10FB*))((::PBYTE)hIl2Cpp + CLASS_3_4D8178BD1AAA10FB_METHOD_3_7F22A781A9156478_OFFSET))(a1, a2);
	}
};
