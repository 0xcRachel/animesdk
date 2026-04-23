#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

class Class_1_6BB3CCD14C3350D4;
class Class_2_DBE826764FAA7E43;
namespace System { class String; }
namespace System::Diagnostics { class StackTrace; }
namespace UnityEngine { class RenderTexture; }

#define CLASS_1_2D79D0B7A6DFD440_METHOD_1_30E134F3D374BCAE_OFFSET UNITYSDK_OFFSET(0xECAE3C0)
#define CLASS_1_2D79D0B7A6DFD440_METHOD_1_E69AA2E64A20143D_OFFSET UNITYSDK_OFFSET(0xECADA60)
#define CLASS_1_2D79D0B7A6DFD440__CTOR_OFFSET UNITYSDK_OFFSET(0xECAD980)

inline static constexpr unsigned int Class_1_2D79D0B7A6DFD440_TypeDefinitionIndex = 46151;

class Class_1_2D79D0B7A6DFD440 : public ::System::Object
{
public:
	static ::Class_1_6BB3CCD14C3350D4** StaticGet_Field_1_20()
	{
		return (::Class_1_6BB3CCD14C3350D4**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2D79D0B7A6DFD440_TypeDefinitionIndex)->GetStaticField(0x56D60);
	}
	::System::String* Field_1_13; // 0x10
	::System::String* Field_1_15; // 0x18
	::UnityEngine::RenderTexture* Field_1_19; // 0x20
	::System::String* Field_1_3; // 0x28
	::UnityEngine::RenderTexture* Field_1_17; // 0x30
	::System::String* Field_1_14; // 0x38
	::System::String* Field_1_0; // 0x40
	::UnityEngine::RenderTexture* Field_1_18; // 0x48
	::System::String* Field_1_8; // 0x50
	::System::String* Field_1_1; // 0x58
	::System::String* Field_1_4; // 0x60
	::System::Diagnostics::StackTrace* Field_1_12; // 0x68
	::System::Int32 Field_1_6; // 0x70
	::System::DateTime Field_1_2; // 0x78
	::System::Int32 Field_1_7; // 0x80
	::System::Single Field_1_16; // 0x84
	::System::Int32 Field_1_10; // 0x88
	::System::Boolean Field_1_9; // 0x8C
	::System::Boolean Field_1_5; // 0x8D
	::System::Boolean Field_1_11; // 0x8E

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
