#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleUIPanelType.h"
#include "unitysdk/System/Object.h"

class Class_1_CA217ABF4E3B4F3F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_37A9B0F7885213A3_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xE0BBB40)
#define CLASS_1_37A9B0F7885213A3_METHOD_1_19A03D9E098C9F1A_OFFSET UNITYSDK_OFFSET(0xE0BB560)
#define CLASS_1_37A9B0F7885213A3_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xE0BBC30)
#define CLASS_1_37A9B0F7885213A3_METHOD_1_9C844AB9164FA35A_OFFSET UNITYSDK_OFFSET(0xE0BB9D0)
#define CLASS_1_37A9B0F7885213A3_METHOD_1_C6C2192FA0B063E6_OFFSET UNITYSDK_OFFSET(0xE0BB8E0)
#define CLASS_1_37A9B0F7885213A3_METHOD_1_F20D32506FA3D9B7_OFFSET UNITYSDK_OFFSET(0xE0BB850)
#define CLASS_1_37A9B0F7885213A3__CTOR_OFFSET UNITYSDK_OFFSET(0xE0BB700)

inline static constexpr unsigned int Class_1_37A9B0F7885213A3_TypeDefinitionIndex = 66047;

class Class_1_37A9B0F7885213A3 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::Class_1_CA217ABF4E3B4F3F*>* Field_1_0; // 0x10
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37A9B0F7885213A3__CTOR_OFFSET))(this);
	}

	static ::Class_1_37A9B0F7885213A3* Method_1_19A03D9E098C9F1A(::RPG::GameCore::BattleUIPanelType a1)
	{
		return ((::Class_1_37A9B0F7885213A3*(*)(::RPG::GameCore::BattleUIPanelType))((::PBYTE)hIl2Cpp + CLASS_1_37A9B0F7885213A3_METHOD_1_19A03D9E098C9F1A_OFFSET))(a1);
	}

	::System::Void Method_1_F20D32506FA3D9B7(::Class_1_CA217ABF4E3B4F3F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CA217ABF4E3B4F3F*))((::PBYTE)hIl2Cpp + CLASS_1_37A9B0F7885213A3_METHOD_1_F20D32506FA3D9B7_OFFSET))(this, a1);
	}

	::System::Void Method_1_C6C2192FA0B063E6(::System::Boolean a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_37A9B0F7885213A3_METHOD_1_C6C2192FA0B063E6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37A9B0F7885213A3_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_1_9C844AB9164FA35A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37A9B0F7885213A3_METHOD_1_9C844AB9164FA35A_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37A9B0F7885213A3_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}
};
