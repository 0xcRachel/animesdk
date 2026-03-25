#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/IPVersion.h"
#include "unitysdk/System/Object.h"

class Class_1_0F05BD27DA46DD3F;
class Class_1_2978C3AFB9C9E5D0;
class Class_1_F72E3C6AA9E5EF18;
namespace System::Net { class EndPoint; }

#define CLASS_1_5F6531FEB1FE74A2_METHOD_1_4C4E068C718970DA_OFFSET UNITYSDK_OFFSET(0x17A85E20)
#define CLASS_1_5F6531FEB1FE74A2_METHOD_1_612C04826978A93C_1_OFFSET UNITYSDK_OFFSET(0x17A85FC0)
#define CLASS_1_5F6531FEB1FE74A2_METHOD_1_612C04826978A93C_OFFSET UNITYSDK_OFFSET(0x17A85E40)
#define CLASS_1_5F6531FEB1FE74A2_METHOD_1_6C19D4BE6FF4BC99_OFFSET UNITYSDK_OFFSET(0x17A862A0)
#define CLASS_1_5F6531FEB1FE74A2_METHOD_1_78BFFA1A5963E3A7_OFFSET UNITYSDK_OFFSET(0x17A85DF0)
#define CLASS_1_5F6531FEB1FE74A2_METHOD_1_DF121BC9FC0ED41B_OFFSET UNITYSDK_OFFSET(0x17A85B80)
#define CLASS_1_5F6531FEB1FE74A2_METHOD_1_EEBC46384205C436_OFFSET UNITYSDK_OFFSET(0x17A861A0)
#define CLASS_1_5F6531FEB1FE74A2__CTOR_OFFSET UNITYSDK_OFFSET(0x17A85DE0)

inline static constexpr unsigned int Class_1_5F6531FEB1FE74A2_TypeDefinitionIndex = 33863;

class Class_1_5F6531FEB1FE74A2 : public ::System::Object
{
public:
	::Class_1_0F05BD27DA46DD3F* Field_1_0; // 0x10
	::Class_1_0F05BD27DA46DD3F* Field_1_1; // 0x18

	::System::Void _ctor(::Class_1_0F05BD27DA46DD3F* a1, ::Class_1_0F05BD27DA46DD3F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0F05BD27DA46DD3F*, ::Class_1_0F05BD27DA46DD3F*))((::PBYTE)hIl2Cpp + CLASS_1_5F6531FEB1FE74A2__CTOR_OFFSET))(this, a1, a2);
	}

	static ::Class_1_5F6531FEB1FE74A2* Method_1_DF121BC9FC0ED41B(::Class_1_2978C3AFB9C9E5D0* a1, ::System::Int32 a2)
	{
		return ((::Class_1_5F6531FEB1FE74A2*(*)(::Class_1_2978C3AFB9C9E5D0*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5F6531FEB1FE74A2_METHOD_1_DF121BC9FC0ED41B_OFFSET))(a1, a2);
	}

	::System::Net::EndPoint* Method_1_78BFFA1A5963E3A7(::RPG::Client::IPVersion a1)
	{
		return ((::System::Net::EndPoint*(*)(::PVOID, ::RPG::Client::IPVersion))((::PBYTE)hIl2Cpp + CLASS_1_5F6531FEB1FE74A2_METHOD_1_78BFFA1A5963E3A7_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_612C04826978A93C(::RPG::Client::IPVersion a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::IPVersion, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5F6531FEB1FE74A2_METHOD_1_612C04826978A93C_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_1_612C04826978A93C_1(::RPG::Client::IPVersion a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::IPVersion, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5F6531FEB1FE74A2_METHOD_1_612C04826978A93C_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_EEBC46384205C436(::Class_1_F72E3C6AA9E5EF18* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F72E3C6AA9E5EF18*))((::PBYTE)hIl2Cpp + CLASS_1_5F6531FEB1FE74A2_METHOD_1_EEBC46384205C436_OFFSET))(this, a1);
	}

	::System::Void Method_1_6C19D4BE6FF4BC99()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F6531FEB1FE74A2_METHOD_1_6C19D4BE6FF4BC99_OFFSET))(this);
	}

	::Class_1_0F05BD27DA46DD3F* Method_1_4C4E068C718970DA(::RPG::Client::IPVersion a1)
	{
		return ((::Class_1_0F05BD27DA46DD3F*(*)(::PVOID, ::RPG::Client::IPVersion))((::PBYTE)hIl2Cpp + CLASS_1_5F6531FEB1FE74A2_METHOD_1_4C4E068C718970DA_OFFSET))(this, a1);
	}
};
