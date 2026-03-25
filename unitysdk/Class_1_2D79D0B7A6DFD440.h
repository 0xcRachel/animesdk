#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

class Class_1_6BB3CCD14C3350D4;
class Class_2_DBE826764FAA7E43;
namespace System { class String; }
namespace System::Diagnostics { class StackTrace; }
namespace UnityEngine { class RenderTexture; }

#define CLASS_1_2D79D0B7A6DFD440_METHOD_1_30E134F3D374BCAE_OFFSET UNITYSDK_OFFSET(0x8981430)
#define CLASS_1_2D79D0B7A6DFD440_METHOD_1_E69AA2E64A20143D_OFFSET UNITYSDK_OFFSET(0x8980AE0)
#define CLASS_1_2D79D0B7A6DFD440__CTOR_OFFSET UNITYSDK_OFFSET(0x8980A00)

inline static constexpr unsigned int Class_1_2D79D0B7A6DFD440_TypeDefinitionIndex = 40242;

class Class_1_2D79D0B7A6DFD440 : public ::System::Object
{
public:
	static ::Class_1_6BB3CCD14C3350D4** StaticGet_Field_1_20()
	{
		return (::Class_1_6BB3CCD14C3350D4**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2D79D0B7A6DFD440_TypeDefinitionIndex)->GetStaticField(0x48CC0);
	}
	::System::String* Field_1_3; // 0x10
	::System::String* Field_1_4; // 0x18
	::System::String* Field_1_14; // 0x20
	::System::Diagnostics::StackTrace* Field_1_12; // 0x28
	::System::String* Field_1_15; // 0x30
	::System::String* Field_1_8; // 0x38
	::System::String* Field_1_13; // 0x40
	::UnityEngine::RenderTexture* Field_1_19; // 0x48
	::UnityEngine::RenderTexture* Field_1_18; // 0x50
	::System::String* Field_1_1; // 0x58
	::System::String* Field_1_0; // 0x60
	::UnityEngine::RenderTexture* Field_1_17; // 0x68
	::System::Single Field_1_16; // 0x70
	::System::Int32 Field_1_6; // 0x74
	::System::Int32 Field_1_10; // 0x78
	::System::Boolean Field_1_9; // 0x7C
	::System::Boolean Field_1_5; // 0x7D
	::System::Boolean Field_1_11; // 0x7E
	::System::DateTime Field_1_2; // 0x80
	::System::Int32 Field_1_7; // 0x88

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2D79D0B7A6DFD440__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_30E134F3D374BCAE(::Class_2_DBE826764FAA7E43* a1, ::UnityEngine::RenderTexture* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_DBE826764FAA7E43*, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + CLASS_1_2D79D0B7A6DFD440_METHOD_1_30E134F3D374BCAE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E69AA2E64A20143D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D79D0B7A6DFD440_METHOD_1_E69AA2E64A20143D_OFFSET))(this);
	}
};
