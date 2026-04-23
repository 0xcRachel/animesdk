#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_A1F69E2229E56CFE;
namespace RPG::GameCore { template <typename T> class IFrameSyncOperationSource_1; }

#define CLASS_1_BCD13CF36787C336_EXECUTE_OFFSET UNITYSDK_OFFSET(0x106338D0)
#define CLASS_1_BCD13CF36787C336_GET_EXECUTEFRAME_OFFSET UNITYSDK_OFFSET(0x10633890)
#define CLASS_1_BCD13CF36787C336_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0x106338B0)
#define CLASS_1_BCD13CF36787C336_SET_EXECUTEFRAME_OFFSET UNITYSDK_OFFSET(0x106338A0)
#define CLASS_1_BCD13CF36787C336_SET_SOURCE_OFFSET UNITYSDK_OFFSET(0x106338C0)
#define CLASS_1_BCD13CF36787C336__CTOR_OFFSET UNITYSDK_OFFSET(0x10633960)

inline static constexpr unsigned int Class_1_BCD13CF36787C336_TypeDefinitionIndex = 50042;

class Class_1_BCD13CF36787C336 : public ::System::Object
{
public:
	::RPG::GameCore::IFrameSyncOperationSource_1<::Class_2_A1F69E2229E56CFE*>* _Source_k__BackingField; // 0x10
	::System::UInt32 Field_1_0; // 0x18
	::System::Int32 _ExecuteFrame_k__BackingField; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCD13CF36787C336__CTOR_OFFSET))(this);
	}

	::System::Int32 get_ExecuteFrame()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCD13CF36787C336_GET_EXECUTEFRAME_OFFSET))(this);
	}

	::System::Void set_ExecuteFrame(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BCD13CF36787C336_SET_EXECUTEFRAME_OFFSET))(this, value);
	}

	::RPG::GameCore::IFrameSyncOperationSource_1<::Class_2_A1F69E2229E56CFE*>* get_Source()
	{
		return ((::RPG::GameCore::IFrameSyncOperationSource_1<::Class_2_A1F69E2229E56CFE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCD13CF36787C336_GET_SOURCE_OFFSET))(this);
	}

	::System::Void set_Source(::RPG::GameCore::IFrameSyncOperationSource_1<::Class_2_A1F69E2229E56CFE*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IFrameSyncOperationSource_1<::Class_2_A1F69E2229E56CFE*>*))((::PBYTE)hIl2Cpp + CLASS_1_BCD13CF36787C336_SET_SOURCE_OFFSET))(this, value);
	}

	::System::Void Execute(::Class_2_A1F69E2229E56CFE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A1F69E2229E56CFE*))((::PBYTE)hIl2Cpp + CLASS_1_BCD13CF36787C336_EXECUTE_OFFSET))(this, a1);
	}
};
