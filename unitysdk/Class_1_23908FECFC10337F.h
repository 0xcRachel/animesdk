#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_22.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class ByteString; }
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_23908FECFC10337F_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19FD54D0)
#define CLASS_1_23908FECFC10337F_CLONE_OFFSET UNITYSDK_OFFSET(0x19FD4F00)
#define CLASS_1_23908FECFC10337F_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19FD5170)
#define CLASS_1_23908FECFC10337F_EQUALS_OFFSET UNITYSDK_OFFSET(0x19FD5070)
#define CLASS_1_23908FECFC10337F_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19FD5240)
#define CLASS_1_23908FECFC10337F_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19FD5750)
#define CLASS_1_23908FECFC10337F_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19FD56D0)
#define CLASS_1_23908FECFC10337F_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19FD4FB0)
#define CLASS_1_23908FECFC10337F_METHOD_1_24B765795E512402_OFFSET UNITYSDK_OFFSET(0x19FD5000)
#define CLASS_1_23908FECFC10337F_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19FD4DC0)
#define CLASS_1_23908FECFC10337F_METHOD_1_3BDC77F20CA26C81_OFFSET UNITYSDK_OFFSET(0x19FD4FF0)
#define CLASS_1_23908FECFC10337F_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x19FD4FE0)
#define CLASS_1_23908FECFC10337F_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19FD4FC0)
#define CLASS_1_23908FECFC10337F_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x19FD4FD0)
#define CLASS_1_23908FECFC10337F_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19FD4E20)
#define CLASS_1_23908FECFC10337F_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19FD5380)
#define CLASS_1_23908FECFC10337F_WRITETO_OFFSET UNITYSDK_OFFSET(0x19FD53E0)
#define CLASS_1_23908FECFC10337F__CCTOR_OFFSET UNITYSDK_OFFSET(0x19FD5840)
#define CLASS_1_23908FECFC10337F__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19FD4E80)
#define CLASS_1_23908FECFC10337F__CTOR_OFFSET UNITYSDK_OFFSET(0x19FD4E30)

inline static constexpr unsigned int Class_1_23908FECFC10337F_TypeDefinitionIndex = 30133;

class Class_1_23908FECFC10337F : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_23908FECFC10337F*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_23908FECFC10337F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_23908FECFC10337F_TypeDefinitionIndex)->GetStaticField(0x48810);
	}
	// static const ::System::Int32 Field_1_2 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xC; // 0x0
	::Google::Protobuf::ByteString* Field_1_7; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x18
	::Enum_3_ED790DAC948A65A9_22 Field_1_5; // 0x20
	::System::UInt32 Field_1_3; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23908FECFC10337F__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_23908FECFC10337F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_23908FECFC10337F*))((::PBYTE)hIl2Cpp + CLASS_1_23908FECFC10337F__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_23908FECFC10337F__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_23908FECFC10337F*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_23908FECFC10337F*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_23908FECFC10337F_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23908FECFC10337F_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_23908FECFC10337F* Clone()
	{
		return ((::Class_1_23908FECFC10337F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23908FECFC10337F_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23908FECFC10337F_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_23908FECFC10337F_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Enum_3_ED790DAC948A65A9_22 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_ED790DAC948A65A9_22(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23908FECFC10337F_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_ED790DAC948A65A9_22 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_ED790DAC948A65A9_22))((::PBYTE)hIl2Cpp + CLASS_1_23908FECFC10337F_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Google::Protobuf::ByteString* Method_1_3BDC77F20CA26C81()
	{
		return ((::Google::Protobuf::ByteString*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23908FECFC10337F_METHOD_1_3BDC77F20CA26C81_OFFSET))(this);
	}

	::System::Void Method_1_24B765795E512402(::Google::Protobuf::ByteString* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + CLASS_1_23908FECFC10337F_METHOD_1_24B765795E512402_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_23908FECFC10337F_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_23908FECFC10337F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_23908FECFC10337F*))((::PBYTE)hIl2Cpp + CLASS_1_23908FECFC10337F_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23908FECFC10337F_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23908FECFC10337F_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_23908FECFC10337F_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23908FECFC10337F_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_23908FECFC10337F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_23908FECFC10337F*))((::PBYTE)hIl2Cpp + CLASS_1_23908FECFC10337F_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_23908FECFC10337F_MERGEFROM_1_OFFSET))(this, a1);
	}
};
