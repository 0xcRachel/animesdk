#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/NumOperationType.h"
#include "unitysdk/RPG/GameCore/RtModifierPropertyType.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_4_AFB38A1B167FD0D5_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1877ED50)
#define CLASS_4_AFB38A1B167FD0D5_METHOD_4_8C07D9C793444934_OFFSET UNITYSDK_OFFSET(0x1877E930)
#define CLASS_4_AFB38A1B167FD0D5_METHOD_4_C616402C1FF54AE8_OFFSET UNITYSDK_OFFSET(0x1877EA30)
#define CLASS_4_AFB38A1B167FD0D5__CTOR_OFFSET UNITYSDK_OFFSET(0x1877E970)

inline static constexpr unsigned int Class_4_AFB38A1B167FD0D5_TypeDefinitionIndex = 23204;

class Class_4_AFB38A1B167FD0D5 : public ::RPG::GameCore::SetDynamicValueBase
{
public:
	::RPG::GameCore::DynamicString* Field_4_1; // 0x18
	::RPG::GameCore::DynamicFloat* Field_4_5; // 0x20
	::System::String* Field_4_6; // 0x28
	::RPG::GameCore::TargetEvaluator* Field_4_0; // 0x30
	::Il2CppArray<::RPG::GameCore::DynamicFloat*>* Field_4_4; // 0x38
	::RPG::GameCore::DynamicValueContextScope Field_4_7; // 0x40
	::RPG::GameCore::RtModifierPropertyType Field_4_3; // 0x44
	::RPG::GameCore::NumOperationType Field_4_2; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_AFB38A1B167FD0D5__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_8C07D9C793444934(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_AFB38A1B167FD0D5*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_AFB38A1B167FD0D5*&))((::PBYTE)hIl2Cpp + CLASS_4_AFB38A1B167FD0D5_METHOD_4_8C07D9C793444934_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_C616402C1FF54AE8(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_AFB38A1B167FD0D5* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_AFB38A1B167FD0D5*))((::PBYTE)hIl2Cpp + CLASS_4_AFB38A1B167FD0D5_METHOD_4_C616402C1FF54AE8_OFFSET))(a1, a2);
	}

	::System::Object* GetDynamicKey()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_AFB38A1B167FD0D5_GETDYNAMICKEY_OFFSET))(this);
	}
};
