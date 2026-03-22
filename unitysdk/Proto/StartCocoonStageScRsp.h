#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E591DF54310AABF5;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_STARTCOCOONSTAGESCRSP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17A9C3B0)
#define PROTO_STARTCOCOONSTAGESCRSP_CLONE_OFFSET UNITYSDK_OFFSET(0x17A9BEE0)
#define PROTO_STARTCOCOONSTAGESCRSP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17A9C110)
#define PROTO_STARTCOCOONSTAGESCRSP_EQUALS_OFFSET UNITYSDK_OFFSET(0x17A9C030)
#define PROTO_STARTCOCOONSTAGESCRSP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17A9C1E0)
#define PROTO_STARTCOCOONSTAGESCRSP_GET_BATTLEINFO_OFFSET UNITYSDK_OFFSET(0x17A9BF70)
#define PROTO_STARTCOCOONSTAGESCRSP_GET_CHALLENGECNT_OFFSET UNITYSDK_OFFSET(0x17A9BFB0)
#define PROTO_STARTCOCOONSTAGESCRSP_GET_COCOONID_OFFSET UNITYSDK_OFFSET(0x17A9C010)
#define PROTO_STARTCOCOONSTAGESCRSP_GET_PROPENTITYID_OFFSET UNITYSDK_OFFSET(0x17A9BF90)
#define PROTO_STARTCOCOONSTAGESCRSP_GET_RETCODE_OFFSET UNITYSDK_OFFSET(0x17A9BFF0)
#define PROTO_STARTCOCOONSTAGESCRSP_GET_WAVE_OFFSET UNITYSDK_OFFSET(0x17A9BFD0)
#define PROTO_STARTCOCOONSTAGESCRSP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17A9C720)
#define PROTO_STARTCOCOONSTAGESCRSP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17A9C670)
#define PROTO_STARTCOCOONSTAGESCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17A9BE40)
#define PROTO_STARTCOCOONSTAGESCRSP_SET_BATTLEINFO_OFFSET UNITYSDK_OFFSET(0x17A9BF80)
#define PROTO_STARTCOCOONSTAGESCRSP_SET_CHALLENGECNT_OFFSET UNITYSDK_OFFSET(0x17A9BFC0)
#define PROTO_STARTCOCOONSTAGESCRSP_SET_COCOONID_OFFSET UNITYSDK_OFFSET(0x17A9C020)
#define PROTO_STARTCOCOONSTAGESCRSP_SET_PROPENTITYID_OFFSET UNITYSDK_OFFSET(0x17A9BFA0)
#define PROTO_STARTCOCOONSTAGESCRSP_SET_RETCODE_OFFSET UNITYSDK_OFFSET(0x17A9C000)
#define PROTO_STARTCOCOONSTAGESCRSP_SET_WAVE_OFFSET UNITYSDK_OFFSET(0x17A9BFE0)
#define PROTO_STARTCOCOONSTAGESCRSP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17A9C230)
#define PROTO_STARTCOCOONSTAGESCRSP_WRITETO_OFFSET UNITYSDK_OFFSET(0x17A9C290)
#define PROTO_STARTCOCOONSTAGESCRSP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17A9BE60)
#define PROTO_STARTCOCOONSTAGESCRSP__CTOR_OFFSET UNITYSDK_OFFSET(0x17A9BE50)

namespace Proto
{
	inline static constexpr unsigned int StartCocoonStageScRsp_TypeDefinitionIndex = 26337;

	class StartCocoonStageScRsp : public ::System::Object
	{
	public:
		// static const ::System::Int32 BattleInfoFieldNumber = 0xA; // 0x0
		// static const ::System::Int32 PropEntityIdFieldNumber = 0xC; // 0x0
		// static const ::System::Int32 ChallengeCntFieldNumber = 0x5; // 0x0
		// static const ::System::Int32 WaveFieldNumber = 0x9; // 0x0
		// static const ::System::Int32 RetcodeFieldNumber = 0x6; // 0x0
		// static const ::System::Int32 CocoonIdFieldNumber = 0x1; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::Class_1_E591DF54310AABF5* battleInfo_; // 0x18
		::System::UInt32 challengeCnt_; // 0x20
		::System::UInt32 propEntityId_; // 0x24
		::System::UInt32 wave_; // 0x28
		::System::UInt32 cocoonId_; // 0x2C
		::System::UInt32 retcode_; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::StartCocoonStageScRsp* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::StartCocoonStageScRsp*))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP__CTOR_1_OFFSET))(this, other);
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::StartCocoonStageScRsp* Clone()
		{
			return ((::Proto::StartCocoonStageScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_CLONE_OFFSET))(this);
		}

		::Class_1_E591DF54310AABF5* get_BattleInfo()
		{
			return ((::Class_1_E591DF54310AABF5*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_GET_BATTLEINFO_OFFSET))(this);
		}

		::System::Void set_BattleInfo(::Class_1_E591DF54310AABF5* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E591DF54310AABF5*))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_SET_BATTLEINFO_OFFSET))(this, value);
		}

		::System::UInt32 get_PropEntityId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_GET_PROPENTITYID_OFFSET))(this);
		}

		::System::Void set_PropEntityId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_SET_PROPENTITYID_OFFSET))(this, value);
		}

		::System::UInt32 get_ChallengeCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_GET_CHALLENGECNT_OFFSET))(this);
		}

		::System::Void set_ChallengeCnt(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_SET_CHALLENGECNT_OFFSET))(this, value);
		}

		::System::UInt32 get_Wave()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_GET_WAVE_OFFSET))(this);
		}

		::System::Void set_Wave(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_SET_WAVE_OFFSET))(this, value);
		}

		::System::UInt32 get_Retcode()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_GET_RETCODE_OFFSET))(this);
		}

		::System::Void set_Retcode(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_SET_RETCODE_OFFSET))(this, value);
		}

		::System::UInt32 get_CocoonId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_GET_COCOONID_OFFSET))(this);
		}

		::System::Void set_CocoonId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_SET_COCOONID_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::StartCocoonStageScRsp* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::StartCocoonStageScRsp*))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::StartCocoonStageScRsp* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::StartCocoonStageScRsp*))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
