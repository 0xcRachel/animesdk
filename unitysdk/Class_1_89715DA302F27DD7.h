#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NativeString.h"

namespace HoudiniEngineUnity { class JSONObject; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace XLua { class LuaTable; }

#define CLASS_1_89715DA302F27DD7_METHOD_1_1082279FA65C761E_OFFSET UNITYSDK_OFFSET(0x166657F0)
#define CLASS_1_89715DA302F27DD7_METHOD_1_1AD3CAF2B0982C3F_OFFSET UNITYSDK_OFFSET(0x16666B80)
#define CLASS_1_89715DA302F27DD7_METHOD_1_83CECA629B8CD9E8_OFFSET UNITYSDK_OFFSET(0x16665F00)
#define CLASS_1_89715DA302F27DD7_METHOD_1_E2B2E1DEE99874B5_OFFSET UNITYSDK_OFFSET(0x16665B30)
#define CLASS_1_89715DA302F27DD7_METHOD_1_E69AA2E64A20143D_OFFSET UNITYSDK_OFFSET(0x16666460)
#define CLASS_1_89715DA302F27DD7__CTOR_OFFSET UNITYSDK_OFFSET(0x16666F60)

inline static constexpr unsigned int Class_1_89715DA302F27DD7_TypeDefinitionIndex = 56096;

class Class_1_89715DA302F27DD7 : public ::System::Object
{
public:
	::RPG::Client::RPGProfilerMarker* Field_1_0; // 0x10
	::RPG::Client::RPGProfilerMarker* Field_1_1; // 0x18
	::RPG::Client::RPGProfilerMarker* Field_1_2; // 0x20
	::RPG::Client::RPGProfilerMarker* Field_1_3; // 0x28
	::HoudiniEngineUnity::JSONObject* Field_1_4; // 0x30
	::RPG::Client::RPGProfilerMarker* Field_1_5; // 0x38
	::System::String* Field_1_6; // 0x40
	::RPG::Client::RPGProfilerMarker* Field_1_7; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89715DA302F27DD7__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1082279FA65C761E(::System::Int32 a1, ::System::String* a2, ::System::String* a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_89715DA302F27DD7_METHOD_1_1082279FA65C761E_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_E2B2E1DEE99874B5(::System::Int32 a1, ::System::String* a2, ::System::String* a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NativeString>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NativeString>*))((::PBYTE)hIl2Cpp + CLASS_1_89715DA302F27DD7_METHOD_1_E2B2E1DEE99874B5_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_83CECA629B8CD9E8(::System::Int32 a1, ::System::String* a2, ::System::String* a3, ::XLua::LuaTable* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + CLASS_1_89715DA302F27DD7_METHOD_1_83CECA629B8CD9E8_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_E69AA2E64A20143D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89715DA302F27DD7_METHOD_1_E69AA2E64A20143D_OFFSET))(this);
	}

	::System::Void Method_1_1AD3CAF2B0982C3F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89715DA302F27DD7_METHOD_1_1AD3CAF2B0982C3F_OFFSET))(this);
	}
};
