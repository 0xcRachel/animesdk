#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/RPG/Client/MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams.h"
#include "unitysdk/RPGTools/Timeline/Emotion/EmoMouthBakedBlendShapes_LipType.h"

namespace RPG::Client { class MonoEmoAnimMouthShapeLayerController; }
namespace RPGTools::Timeline::Emotion { class EmoMouthBakedBlendShapesData; }
namespace System { class String; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_B468B3D035F8B380_DISPOSE_OFFSET UNITYSDK_OFFSET(0x890C8D0)
#define CLASS_2_B468B3D035F8B380_METHOD_2_0BA368DCED6D0A56_OFFSET UNITYSDK_OFFSET(0x890D6B0)
#define CLASS_2_B468B3D035F8B380_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x890CD90)
#define CLASS_2_B468B3D035F8B380_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x890C7F0)
#define CLASS_2_B468B3D035F8B380_METHOD_2_602B796CAD5DBEDB_OFFSET UNITYSDK_OFFSET(0x890CDF0)
#define CLASS_2_B468B3D035F8B380_METHOD_2_69C79642B17F54D3_OFFSET UNITYSDK_OFFSET(0x890C800)
#define CLASS_2_B468B3D035F8B380_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0x890D850)
#define CLASS_2_B468B3D035F8B380_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x890C9B0)
#define CLASS_2_B468B3D035F8B380_METHOD_2_A5FD6FF4A4D69ED8_OFFSET UNITYSDK_OFFSET(0x890C810)
#define CLASS_2_B468B3D035F8B380_METHOD_2_B16E7C9CDB65012D_OFFSET UNITYSDK_OFFSET(0x890CFE0)
#define CLASS_2_B468B3D035F8B380_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x890CA30)
#define CLASS_2_B468B3D035F8B380_METHOD_2_D708583EF41CA6B8_OFFSET UNITYSDK_OFFSET(0x890CCD0)
#define CLASS_2_B468B3D035F8B380_METHOD_2_DAAE1BC9BEAF6989_OFFSET UNITYSDK_OFFSET(0x890CAA0)
#define CLASS_2_B468B3D035F8B380_METHOD_2_E1BE71E2F5541313_OFFSET UNITYSDK_OFFSET(0x890C7A0)
#define CLASS_2_B468B3D035F8B380__CTOR_OFFSET UNITYSDK_OFFSET(0x890D840)
#define CLASS_2_B468B3D035F8B380___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x890D8C0)

inline static constexpr unsigned int Class_2_B468B3D035F8B380_TypeDefinitionIndex = 56692;

class Class_2_B468B3D035F8B380 : public ::RPG::Client::BehaviorBase
{
public:
	::RPGTools::Timeline::Emotion::EmoMouthBakedBlendShapesData* Field_2_0; // 0x18
	::System::String* Field_2_6; // 0x20
	::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams Field_2_7; // 0x28
	::System::Single Field_2_1; // 0x38
	::System::Single Field_2_2; // 0x3C
	::System::Single Field_2_3; // 0x40
	::System::Boolean Field_2_8; // 0x44
	::System::Single Field_2_4; // 0x48
	::System::Single Field_2_5; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B468B3D035F8B380__CTOR_OFFSET))(this);
	}

	::RPG::Client::MonoEmoAnimMouthShapeLayerController* Method_2_E1BE71E2F5541313()
	{
		return ((::RPG::Client::MonoEmoAnimMouthShapeLayerController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B468B3D035F8B380_METHOD_2_E1BE71E2F5541313_OFFSET))(this);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B468B3D035F8B380_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}

	::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams Method_2_69C79642B17F54D3()
	{
		return ((::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B468B3D035F8B380_METHOD_2_69C79642B17F54D3_OFFSET))(this);
	}

	::System::Void Method_2_A5FD6FF4A4D69ED8(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_B468B3D035F8B380_METHOD_2_A5FD6FF4A4D69ED8_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B468B3D035F8B380_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B468B3D035F8B380_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_D708583EF41CA6B8(::System::UInt32 a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B468B3D035F8B380_METHOD_2_D708583EF41CA6B8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_DAAE1BC9BEAF6989(::System::String* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B468B3D035F8B380_METHOD_2_DAAE1BC9BEAF6989_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B468B3D035F8B380_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B468B3D035F8B380_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_602B796CAD5DBEDB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B468B3D035F8B380_METHOD_2_602B796CAD5DBEDB_OFFSET))(this, a1);
	}

	::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams Method_2_0BA368DCED6D0A56(::RPGTools::Timeline::Emotion::EmoMouthBakedBlendShapes_LipType a1)
	{
		return ((::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams(*)(::PVOID, ::RPGTools::Timeline::Emotion::EmoMouthBakedBlendShapes_LipType))((::PBYTE)hIl2Cpp + CLASS_2_B468B3D035F8B380_METHOD_2_0BA368DCED6D0A56_OFFSET))(this, a1);
	}

	::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams Method_2_B16E7C9CDB65012D()
	{
		return ((::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B468B3D035F8B380_METHOD_2_B16E7C9CDB65012D_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_B468B3D035F8B380_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B468B3D035F8B380___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
