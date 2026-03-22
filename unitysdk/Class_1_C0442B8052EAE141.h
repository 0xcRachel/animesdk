#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1B95C50862BF96BD;
class Class_1_24C2E7EF22229C6A;
class Class_2_F47F7A3F5E97970D;
class Class_3_1A92845FAFA5EC77;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C0442B8052EAE141_EXECUTE_OFFSET UNITYSDK_OFFSET(0x104B4F20)
#define CLASS_1_C0442B8052EAE141_GET__CURFOGID_OFFSET UNITYSDK_OFFSET(0x104B5F80)
#define CLASS_1_C0442B8052EAE141_GET__MAPSCALE_OFFSET UNITYSDK_OFFSET(0x104B5FA0)
#define CLASS_1_C0442B8052EAE141_METHOD_1_08F0612B2DDDDD0D_OFFSET UNITYSDK_OFFSET(0x104B5780)
#define CLASS_1_C0442B8052EAE141_METHOD_1_364E91940C737CC9_OFFSET UNITYSDK_OFFSET(0x104B4F70)
#define CLASS_1_C0442B8052EAE141_METHOD_1_A1C7122184516C18_OFFSET UNITYSDK_OFFSET(0x104B4CF0)
#define CLASS_1_C0442B8052EAE141_METHOD_1_E0474ABD724209BE_OFFSET UNITYSDK_OFFSET(0x104B5B70)
#define CLASS_1_C0442B8052EAE141_METHOD_1_FD083BB43B60F9FB_OFFSET UNITYSDK_OFFSET(0x104B5E40)
#define CLASS_1_C0442B8052EAE141_SET__CURFOGID_OFFSET UNITYSDK_OFFSET(0x104B5F90)
#define CLASS_1_C0442B8052EAE141_SET__MAPSCALE_OFFSET UNITYSDK_OFFSET(0x104B5FB0)
#define CLASS_1_C0442B8052EAE141__CTOR_OFFSET UNITYSDK_OFFSET(0x104B4CC0)

inline static constexpr unsigned int Class_1_C0442B8052EAE141_TypeDefinitionIndex = 60664;

class Class_1_C0442B8052EAE141 : public ::System::Object
{
public:
	::Class_3_1A92845FAFA5EC77* Field_1_4; // 0x10
	::System::Collections::Generic::List_1<::Class_1_1B95C50862BF96BD*>* Field_1_2; // 0x18
	::Class_2_F47F7A3F5E97970D* Field_1_3; // 0x20
	::System::UInt32 __CurFogID_k__BackingField; // 0x28
	::System::Single __MapScale_k__BackingField; // 0x2C

	::System::Void _ctor(::Class_1_24C2E7EF22229C6A* a1, ::Class_3_1A92845FAFA5EC77* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24C2E7EF22229C6A*, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_1_C0442B8052EAE141__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A1C7122184516C18()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0442B8052EAE141_METHOD_1_A1C7122184516C18_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0442B8052EAE141_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_364E91940C737CC9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0442B8052EAE141_METHOD_1_364E91940C737CC9_OFFSET))(this);
	}

	::System::Void Method_1_E0474ABD724209BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C0442B8052EAE141_METHOD_1_E0474ABD724209BE_OFFSET))(this, a1);
	}

	::Class_1_1B95C50862BF96BD* Method_1_08F0612B2DDDDD0D(::System::UInt32 a1)
	{
		return ((::Class_1_1B95C50862BF96BD*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C0442B8052EAE141_METHOD_1_08F0612B2DDDDD0D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_FD083BB43B60F9FB(::Class_1_1B95C50862BF96BD* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1B95C50862BF96BD*))((::PBYTE)hIl2Cpp + CLASS_1_C0442B8052EAE141_METHOD_1_FD083BB43B60F9FB_OFFSET))(this, a1);
	}

	::System::UInt32 get__CurFogID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0442B8052EAE141_GET__CURFOGID_OFFSET))(this);
	}

	::System::Void set__CurFogID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C0442B8052EAE141_SET__CURFOGID_OFFSET))(this, value);
	}

	::System::Single get__MapScale()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0442B8052EAE141_GET__MAPSCALE_OFFSET))(this);
	}

	::System::Void set__MapScale(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C0442B8052EAE141_SET__MAPSCALE_OFFSET))(this, value);
	}
};
