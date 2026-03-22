#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_303D5A33D1401D59;
namespace RPG::GameCore { class AnchorInfo; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_84810E6928F4E8D2_METHOD_1_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0x1116E830)
#define CLASS_1_84810E6928F4E8D2_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1116E2D0)
#define CLASS_1_84810E6928F4E8D2_METHOD_1_7206DC8F66A4D2A8_OFFSET UNITYSDK_OFFSET(0x1116E5C0)
#define CLASS_1_84810E6928F4E8D2_METHOD_1_7244B72D2B0B3D10_OFFSET UNITYSDK_OFFSET(0x1116E490)
#define CLASS_1_84810E6928F4E8D2_METHOD_1_943006AA2C5A9EC8_OFFSET UNITYSDK_OFFSET(0x1116E330)
#define CLASS_1_84810E6928F4E8D2_METHOD_1_A424F98CD0840362_OFFSET UNITYSDK_OFFSET(0x1116E6E0)
#define CLASS_1_84810E6928F4E8D2__CTOR_OFFSET UNITYSDK_OFFSET(0x1116F110)

inline static constexpr unsigned int Class_1_84810E6928F4E8D2_TypeDefinitionIndex = 58891;

class Class_1_84810E6928F4E8D2 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Action* Field_1_8; // 0x18
	::System::Collections::Generic::List_1<::Class_1_303D5A33D1401D59*>* Field_1_2; // 0x20
	::RPG::GameCore::AnchorInfo* Field_1_1; // 0x28
	::System::Single Field_1_4; // 0x30
	::System::Single Field_1_3; // 0x34
	::UnityEngine::Vector3 Field_1_7; // 0x38
	::UnityEngine::Vector3 Field_1_6; // 0x44
	::UnityEngine::Vector3 Field_1_5; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84810E6928F4E8D2__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84810E6928F4E8D2_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_943006AA2C5A9EC8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84810E6928F4E8D2_METHOD_1_943006AA2C5A9EC8_OFFSET))(this);
	}

	::System::Void Method_1_7244B72D2B0B3D10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84810E6928F4E8D2_METHOD_1_7244B72D2B0B3D10_OFFSET))(this);
	}

	::System::Void Method_1_7206DC8F66A4D2A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84810E6928F4E8D2_METHOD_1_7206DC8F66A4D2A8_OFFSET))(this);
	}

	::System::Void Method_1_A424F98CD0840362(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_84810E6928F4E8D2_METHOD_1_A424F98CD0840362_OFFSET))(this, a1);
	}

	::System::Void Method_1_0D7638DBC93E5002()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84810E6928F4E8D2_METHOD_1_0D7638DBC93E5002_OFFSET))(this);
	}
};
