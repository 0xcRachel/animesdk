#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/TRFPhase.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_199;
class Class_1_0EA099C7D681B6D6;
class Class_1_43BD383C98B4C0C5_87;
class Class_2_E1DC3D0DDD796244;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_43BD383C98B4C0C5_86__CTOR_OFFSET UNITYSDK_OFFSET(0x17C7DE70)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_86_TypeDefinitionIndex = 38714;

class Class_1_43BD383C98B4C0C5_86 : public ::System::Object
{
public:
	::System::String* Field_1_18; // 0x10
	::Class_1_43BD383C98B4C0C5_87* Field_1_22; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_1_2; // 0x20
	::System::Collections::Generic::List_1<::Class_1_0EA099C7D681B6D6*>* Field_1_5; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_E1DC3D0DDD796244*>* Field_1_3; // 0x30
	::System::Collections::Generic::List_1<::Class_2_E1DC3D0DDD796244*>* Field_1_4; // 0x38
	::Class_0_16E4307DCC419505_199* Field_1_10; // 0x40
	::System::Boolean Field_1_17; // 0x48
	::System::Boolean Field_1_21; // 0x49
	::UnityEngine::Vector2 Field_1_15; // 0x4C
	::System::Single Field_1_16; // 0x54
	::System::UInt32 Field_1_11; // 0x58
	::System::Single Field_1_6; // 0x5C
	::RPG::Client::LittleGame::TRFPhase Field_1_0; // 0x60
	::System::Boolean Field_1_19; // 0x64
	::System::Boolean Field_1_1; // 0x65
	::System::Boolean Field_1_20; // 0x66
	::System::Boolean Field_1_13; // 0x67
	::UnityEngine::Vector3 Field_1_9; // 0x68
	::System::UInt32 Field_1_12; // 0x74
	::UnityEngine::Vector2 Field_1_14; // 0x78
	::UnityEngine::Vector3 Field_1_8; // 0x80
	::UnityEngine::Vector3 Field_1_7; // 0x8C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_86__CTOR_OFFSET))(this);
	}
};
