#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5164A9A5898DB313_FileLoadMode.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::IO::MemoryMappedFiles { class MemoryMappedFile; }
namespace System::IO::MemoryMappedFiles { class MemoryMappedViewAccessor; }

#define CLASS_1_5164A9A5898DB313_CLASS_1_BE455212A6CB65BF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1859FE20)
#define CLASS_1_5164A9A5898DB313_CLASS_1_BE455212A6CB65BF_GET_FILEPATH_OFFSET UNITYSDK_OFFSET(0x1859F910)
#define CLASS_1_5164A9A5898DB313_CLASS_1_BE455212A6CB65BF_GET_ISDISPOSED_OFFSET UNITYSDK_OFFSET(0x1859F940)
#define CLASS_1_5164A9A5898DB313_CLASS_1_BE455212A6CB65BF_METHOD_1_266C0B71B75FE467_OFFSET UNITYSDK_OFFSET(0x1859F930)
#define CLASS_1_5164A9A5898DB313_CLASS_1_BE455212A6CB65BF_METHOD_1_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0x1859FDD0)
#define CLASS_1_5164A9A5898DB313_CLASS_1_BE455212A6CB65BF_METHOD_1_BBA5086731CAD489_OFFSET UNITYSDK_OFFSET(0x1859FD80)
#define CLASS_1_5164A9A5898DB313_CLASS_1_BE455212A6CB65BF_METHOD_1_FDD64C609409DECB_OFFSET UNITYSDK_OFFSET(0x1859F960)
#define CLASS_1_5164A9A5898DB313_CLASS_1_BE455212A6CB65BF_SET_FILEPATH_OFFSET UNITYSDK_OFFSET(0x1859F920)
#define CLASS_1_5164A9A5898DB313_CLASS_1_BE455212A6CB65BF_SET_ISDISPOSED_OFFSET UNITYSDK_OFFSET(0x1859F950)
#define CLASS_1_5164A9A5898DB313_CLASS_1_BE455212A6CB65BF__CTOR_OFFSET UNITYSDK_OFFSET(0x1859D180)

inline static constexpr unsigned int Class_1_5164A9A5898DB313_Class_1_BE455212A6CB65BF_TypeDefinitionIndex = 23493;

class Class_1_5164A9A5898DB313_Class_1_BE455212A6CB65BF : public ::System::Object
{
public:
	// static const ::System::Int64 Field_1_0 = 0x10000; // 0x0
	::System::IO::MemoryMappedFiles::MemoryMappedViewAccessor* Field_1_4; // 0x10
	::System::IO::MemoryMappedFiles::MemoryMappedFile* Field_1_3; // 0x18
	::System::String* _FilePath_k__BackingField; // 0x20
	::System::Boolean _IsDisposed_k__BackingField; // 0x28
	::System::UInt32 Field_1_6; // 0x2C
	::System::Byte* Field_1_5; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5164A9A5898DB313_CLASS_1_BE455212A6CB65BF__CTOR_OFFSET))(this);
	}

	::System::String* get_FilePath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5164A9A5898DB313_CLASS_1_BE455212A6CB65BF_GET_FILEPATH_OFFSET))(this);
	}

	::System::Void set_FilePath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5164A9A5898DB313_CLASS_1_BE455212A6CB65BF_SET_FILEPATH_OFFSET))(this, value);
	}

	::Class_1_5164A9A5898DB313_FileLoadMode Method_1_266C0B71B75FE467()
	{
		return ((::Class_1_5164A9A5898DB313_FileLoadMode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5164A9A5898DB313_CLASS_1_BE455212A6CB65BF_METHOD_1_266C0B71B75FE467_OFFSET))(this);
	}

	::System::Boolean get_IsDisposed()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5164A9A5898DB313_CLASS_1_BE455212A6CB65BF_GET_ISDISPOSED_OFFSET))(this);
	}

	::System::Void set_IsDisposed(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5164A9A5898DB313_CLASS_1_BE455212A6CB65BF_SET_ISDISPOSED_OFFSET))(this, value);
	}

	::System::Void Method_1_FDD64C609409DECB(::System::String* a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5164A9A5898DB313_CLASS_1_BE455212A6CB65BF_METHOD_1_FDD64C609409DECB_OFFSET))(this, a1, a2, a3);
	}

	::System::Byte* Method_1_BBA5086731CAD489()
	{
		return ((::System::Byte*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5164A9A5898DB313_CLASS_1_BE455212A6CB65BF_METHOD_1_BBA5086731CAD489_OFFSET))(this);
	}

	::System::UInt32 Method_1_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5164A9A5898DB313_CLASS_1_BE455212A6CB65BF_METHOD_1_5CEC4607322705E5_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5164A9A5898DB313_CLASS_1_BE455212A6CB65BF_DISPOSE_OFFSET))(this);
	}
};
