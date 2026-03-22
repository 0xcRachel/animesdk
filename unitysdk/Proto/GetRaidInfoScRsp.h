#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B3B48B7EEC81A99A_5;
class Class_1_FA4F4A67B1C04320_674;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_GETRAIDINFOSCRSP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17A82860)
#define PROTO_GETRAIDINFOSCRSP_CLONE_OFFSET UNITYSDK_OFFSET(0x17A82280)
#define PROTO_GETRAIDINFOSCRSP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17A82330)
#define PROTO_GETRAIDINFOSCRSP_EQUALS_OFFSET UNITYSDK_OFFSET(0x17A82300)
#define PROTO_GETRAIDINFOSCRSP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17A82450)
#define PROTO_GETRAIDINFOSCRSP_GET_CHALLENGERAIDLIST_OFFSET UNITYSDK_OFFSET(0x17A822B0)
#define PROTO_GETRAIDINFOSCRSP_GET_CHALLENGETAKENREWARDIDLIST_OFFSET UNITYSDK_OFFSET(0x17A822C0)
#define PROTO_GETRAIDINFOSCRSP_GET_FINISHEDRAIDINFOLIST_OFFSET UNITYSDK_OFFSET(0x17A822D0)
#define PROTO_GETRAIDINFOSCRSP_GET_RETCODE_OFFSET UNITYSDK_OFFSET(0x17A822E0)
#define PROTO_GETRAIDINFOSCRSP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17A82B10)
#define PROTO_GETRAIDINFOSCRSP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17A829F0)
#define PROTO_GETRAIDINFOSCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17A820A0)
#define PROTO_GETRAIDINFOSCRSP_SET_RETCODE_OFFSET UNITYSDK_OFFSET(0x17A822F0)
#define PROTO_GETRAIDINFOSCRSP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17A826C0)
#define PROTO_GETRAIDINFOSCRSP_WRITETO_OFFSET UNITYSDK_OFFSET(0x17A82720)
#define PROTO_GETRAIDINFOSCRSP__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A82C80)
#define PROTO_GETRAIDINFOSCRSP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17A82140)
#define PROTO_GETRAIDINFOSCRSP__CTOR_OFFSET UNITYSDK_OFFSET(0x17A820B0)

namespace Proto
{
	inline static constexpr unsigned int GetRaidInfoScRsp_TypeDefinitionIndex = 25471;

	class GetRaidInfoScRsp : public ::System::Object
	{
	public:
		static ::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_674*>** StaticGet__repeated_challengeRaidList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Class_1_FA4F4A67B1C04320_674*>**)Il2CppClass::FromTypeDefinitionIndex(GetRaidInfoScRsp_TypeDefinitionIndex)->GetStaticField(0x1AF80);
		}
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet__repeated_challengeTakenRewardIdList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GetRaidInfoScRsp_TypeDefinitionIndex)->GetStaticField(0x1AF88);
		}
		static ::Google::Protobuf::FieldCodec_1<::Class_1_B3B48B7EEC81A99A_5*>** StaticGet__repeated_finishedRaidInfoList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Class_1_B3B48B7EEC81A99A_5*>**)Il2CppClass::FromTypeDefinitionIndex(GetRaidInfoScRsp_TypeDefinitionIndex)->GetStaticField(0x1AF90);
		}
		// static const ::System::Int32 ChallengeRaidListFieldNumber = 0x6; // 0x0
		// static const ::System::Int32 ChallengeTakenRewardIdListFieldNumber = 0x3; // 0x0
		// static const ::System::Int32 FinishedRaidInfoListFieldNumber = 0x5; // 0x0
		// static const ::System::Int32 RetcodeFieldNumber = 0xC; // 0x0
		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_674*>* challengeRaidList_; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* challengeTakenRewardIdList_; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B3B48B7EEC81A99A_5*>* finishedRaidInfoList_; // 0x20
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x28
		::System::UInt32 retcode_; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::GetRaidInfoScRsp* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::GetRaidInfoScRsp*))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP__CCTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::GetRaidInfoScRsp* Clone()
		{
			return ((::Proto::GetRaidInfoScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_674*>* get_ChallengeRaidList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_674*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_GET_CHALLENGERAIDLIST_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* get_ChallengeTakenRewardIdList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_GET_CHALLENGETAKENREWARDIDLIST_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B3B48B7EEC81A99A_5*>* get_FinishedRaidInfoList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_B3B48B7EEC81A99A_5*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_GET_FINISHEDRAIDINFOLIST_OFFSET))(this);
		}

		::System::UInt32 get_Retcode()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_GET_RETCODE_OFFSET))(this);
		}

		::System::Void set_Retcode(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_SET_RETCODE_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::GetRaidInfoScRsp* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::GetRaidInfoScRsp*))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::GetRaidInfoScRsp* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::GetRaidInfoScRsp*))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
