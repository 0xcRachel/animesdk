#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_1100;
class Class_1_64F446B04AA329E4_Class_1_1A744C46B89B0CDD;
class Class_1_64F446B04AA329E4_Class_1_649009C7AFC75085;
class Class_1_7E0DCA9D208905FE;
namespace RPG::Client::ActivityHipplen { class HipplenGameBoard; }
namespace RPG::GameCore { class VCameraBlend; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_1_64F446B04AA329E4_GET_HIPPLENINSTANCE_OFFSET UNITYSDK_OFFSET(0xC69C250)
#define CLASS_1_64F446B04AA329E4_METHOD_1_016E85CEDEE00FF4_OFFSET UNITYSDK_OFFSET(0xC69C010)
#define CLASS_1_64F446B04AA329E4_METHOD_1_172D288B14DCF288_OFFSET UNITYSDK_OFFSET(0xC69AF30)
#define CLASS_1_64F446B04AA329E4_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xC69BEF0)
#define CLASS_1_64F446B04AA329E4_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xC69ACB0)
#define CLASS_1_64F446B04AA329E4_METHOD_1_3BD5FA935037BC05_OFFSET UNITYSDK_OFFSET(0xC69B8C0)
#define CLASS_1_64F446B04AA329E4_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xC69B490)
#define CLASS_1_64F446B04AA329E4_METHOD_1_4EA2911F2CA340C0_OFFSET UNITYSDK_OFFSET(0xC69AFA0)
#define CLASS_1_64F446B04AA329E4_METHOD_1_5AEA48F9976FC334_OFFSET UNITYSDK_OFFSET(0xC69C080)
#define CLASS_1_64F446B04AA329E4_METHOD_1_5B4D98174D97636A_OFFSET UNITYSDK_OFFSET(0xC69BC20)
#define CLASS_1_64F446B04AA329E4_METHOD_1_60EA1AC8E23D1BD4_OFFSET UNITYSDK_OFFSET(0xC69B6E0)
#define CLASS_1_64F446B04AA329E4_METHOD_1_652F3820D8B242FF_OFFSET UNITYSDK_OFFSET(0xC69ADE0)
#define CLASS_1_64F446B04AA329E4_METHOD_1_6EACC4FF4EF827F8_OFFSET UNITYSDK_OFFSET(0xC69BF50)
#define CLASS_1_64F446B04AA329E4_METHOD_1_73FB9DE4849AF1B5_OFFSET UNITYSDK_OFFSET(0xC69BAD0)
#define CLASS_1_64F446B04AA329E4_METHOD_1_7AFC74ADCC2A9C7A_OFFSET UNITYSDK_OFFSET(0xC69C1F0)
#define CLASS_1_64F446B04AA329E4_METHOD_1_7BF94DBDD30CA91A_OFFSET UNITYSDK_OFFSET(0xC69BEA0)
#define CLASS_1_64F446B04AA329E4_METHOD_1_87E0654B98D0D63C_OFFSET UNITYSDK_OFFSET(0xC69AC00)
#define CLASS_1_64F446B04AA329E4_METHOD_1_8AD611CFAB04661D_OFFSET UNITYSDK_OFFSET(0xC69B4F0)
#define CLASS_1_64F446B04AA329E4_METHOD_1_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0xC69BFB0)
#define CLASS_1_64F446B04AA329E4_METHOD_1_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xC69C170)
#define CLASS_1_64F446B04AA329E4_SET_HIPPLENINSTANCE_OFFSET UNITYSDK_OFFSET(0xC69C260)
#define CLASS_1_64F446B04AA329E4__CTOR_OFFSET UNITYSDK_OFFSET(0xC69C270)
#define CLASS_1_64F446B04AA329E4__ONGAMEBOARDLOAD_B__11_0_OFFSET UNITYSDK_OFFSET(0xC69C280)

inline static constexpr unsigned int Class_1_64F446B04AA329E4_TypeDefinitionIndex = 69527;

class Class_1_64F446B04AA329E4 : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::Class_1_64F446B04AA329E4_Class_1_1A744C46B89B0CDD* Field_1_4; // 0x18
	::System::Action* Field_1_3; // 0x20
	::Class_1_7E0DCA9D208905FE* _HipplenInstance_k__BackingField; // 0x28
	::RPG::Client::ActivityHipplen::HipplenGameBoard* Field_1_2; // 0x30
	::System::Boolean Field_1_5; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_87E0654B98D0D63C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4_METHOD_1_87E0654B98D0D63C_OFFSET))(this);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_172D288B14DCF288(::System::String* a1)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4_METHOD_1_172D288B14DCF288_OFFSET))(this, a1);
	}

	::System::Void Method_1_4EA2911F2CA340C0(::System::String* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::System::Action* a4, ::Class_1_64F446B04AA329E4_Class_1_649009C7AFC75085* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Action*, ::Class_1_64F446B04AA329E4_Class_1_649009C7AFC75085*))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4_METHOD_1_4EA2911F2CA340C0_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_8AD611CFAB04661D(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4_METHOD_1_8AD611CFAB04661D_OFFSET))(this, a1);
	}

	::System::Void Method_1_60EA1AC8E23D1BD4(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4_METHOD_1_60EA1AC8E23D1BD4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_3BD5FA935037BC05(::System::String* a1, ::RPG::GameCore::VCameraBlend* a2, ::System::Boolean a3, ::UnityEngine::Transform* a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::VCameraBlend*, ::System::Boolean, ::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4_METHOD_1_3BD5FA935037BC05_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_73FB9DE4849AF1B5(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4_METHOD_1_73FB9DE4849AF1B5_OFFSET))(this, a1);
	}

	::System::Void Method_1_5B4D98174D97636A(::RPG::Client::ActivityHipplen::HipplenGameBoard* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::HipplenGameBoard*))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4_METHOD_1_5B4D98174D97636A_OFFSET))(this, a1);
	}

	::System::Void Method_1_7BF94DBDD30CA91A(::RPG::Client::ActivityHipplen::HipplenGameBoard* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityHipplen::HipplenGameBoard*))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4_METHOD_1_7BF94DBDD30CA91A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_6EACC4FF4EF827F8(::Class_0_16E4307DCC419505_1100* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1100*))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4_METHOD_1_6EACC4FF4EF827F8_OFFSET))(this, a1);
	}

	::System::Void Method_1_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4_METHOD_1_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_1100* Method_1_016E85CEDEE00FF4()
	{
		return ((::Class_0_16E4307DCC419505_1100*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4_METHOD_1_016E85CEDEE00FF4_OFFSET))(this);
	}

	::System::Void Method_1_652F3820D8B242FF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4_METHOD_1_652F3820D8B242FF_OFFSET))(this);
	}

	::System::Void Method_1_5AEA48F9976FC334(::System::String* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4_METHOD_1_5AEA48F9976FC334_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4_METHOD_1_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_1_7AFC74ADCC2A9C7A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4_METHOD_1_7AFC74ADCC2A9C7A_OFFSET))(this, a1);
	}

	::Class_1_7E0DCA9D208905FE* get_HipplenInstance()
	{
		return ((::Class_1_7E0DCA9D208905FE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4_GET_HIPPLENINSTANCE_OFFSET))(this);
	}

	::System::Void set_HipplenInstance(::Class_1_7E0DCA9D208905FE* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7E0DCA9D208905FE*))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4_SET_HIPPLENINSTANCE_OFFSET))(this, value);
	}

	::System::Void _OnGameBoardLoad_b__11_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_64F446B04AA329E4__ONGAMEBOARDLOAD_B__11_0_OFFSET))(this);
	}
};
