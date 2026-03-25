#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class IMessage; }
namespace Proto { class PerformanceStartSnapshot; }
namespace System { class String; }
namespace System::IO { class Stream; }

#define RPG_CLIENT_PERFORMANCEREPLAYUTILS_AESDECRYPT_OFFSET UNITYSDK_OFFSET(0x9F38660)
#define RPG_CLIENT_PERFORMANCEREPLAYUTILS_AESENCRYPT_OFFSET UNITYSDK_OFFSET(0x9F38E90)
#define RPG_CLIENT_PERFORMANCEREPLAYUTILS_GETPERFORMANCESNAPSHOTFILENAME_OFFSET UNITYSDK_OFFSET(0x9F38510)
#define RPG_CLIENT_PERFORMANCEREPLAYUTILS_LOADPERFORMANCESTARTSNAPSHOTWITHBACKUP_OFFSET UNITYSDK_OFFSET(0x9F382E0)
#define RPG_CLIENT_PERFORMANCEREPLAYUTILS_LOADPERFORMANCESTARTSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x9F38390)
#define RPG_CLIENT_PERFORMANCEREPLAYUTILS_WRITETOSTREAM_OFFSET UNITYSDK_OFFSET(0x9F389A0)
#define RPG_CLIENT_PERFORMANCEREPLAYUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x9F391D0)

namespace RPG::Client
{
	inline static constexpr unsigned int PerformanceReplayUtils_TypeDefinitionIndex = 50518;

	class PerformanceReplayUtils : public ::System::Object
	{
	public:
		static ::System::String** StaticGet__DefaultAESIV()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PerformanceReplayUtils_TypeDefinitionIndex)->GetStaticField(0x41DE0);
		}
		static ::System::String** StaticGet__DefaultAESKey()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PerformanceReplayUtils_TypeDefinitionIndex)->GetStaticField(0x41DE8);
		}
		static ::System::String** StaticGet_PerformanceLogPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PerformanceReplayUtils_TypeDefinitionIndex)->GetStaticField(0x41DF0);
		}
		static ::System::String** StaticGet_ByteExtension()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PerformanceReplayUtils_TypeDefinitionIndex)->GetStaticField(0x41DF8);
		}
		static ::System::String** StaticGet_PerformanceSnapshotLoadPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PerformanceReplayUtils_TypeDefinitionIndex)->GetStaticField(0x41E00);
		}
		static ::System::String** StaticGet_PerformanceSnapshotOutputPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PerformanceReplayUtils_TypeDefinitionIndex)->GetStaticField(0x41E08);
		}
		static ::System::String** StaticGet_PacketLogFilePath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PerformanceReplayUtils_TypeDefinitionIndex)->GetStaticField(0x41E10);
		}
		static ::System::String** StaticGet_JsonExtension()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PerformanceReplayUtils_TypeDefinitionIndex)->GetStaticField(0x41E18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEREPLAYUTILS__CCTOR_OFFSET))();
		}

		static ::Proto::PerformanceStartSnapshot* LoadPerformanceStartSnapshotWithBackup(::System::UInt32 performanceID, ::RPG::GameCore::ELevelPerformanceType performanceType, ::System::UInt32 backupPerformanceID, ::RPG::GameCore::ELevelPerformanceType backupPerformanceType)
		{
			return ((::Proto::PerformanceStartSnapshot*(*)(::System::UInt32, ::RPG::GameCore::ELevelPerformanceType, ::System::UInt32, ::RPG::GameCore::ELevelPerformanceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEREPLAYUTILS_LOADPERFORMANCESTARTSNAPSHOTWITHBACKUP_OFFSET))(performanceID, performanceType, backupPerformanceID, backupPerformanceType);
		}

		static ::Proto::PerformanceStartSnapshot* LoadPerformanceStartSnapshot(::System::UInt32 performanceID, ::RPG::GameCore::ELevelPerformanceType performanceType)
		{
			return ((::Proto::PerformanceStartSnapshot*(*)(::System::UInt32, ::RPG::GameCore::ELevelPerformanceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEREPLAYUTILS_LOADPERFORMANCESTARTSNAPSHOT_OFFSET))(performanceID, performanceType);
		}

		static ::System::Boolean WriteToStream(::Google::Protobuf::IMessage* message, ::System::IO::Stream* resultStream, ::System::Boolean compress, ::System::Boolean encrypt, ::System::String* aesKey, ::System::String* aesIv)
		{
			return ((::System::Boolean(*)(::Google::Protobuf::IMessage*, ::System::IO::Stream*, ::System::Boolean, ::System::Boolean, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEREPLAYUTILS_WRITETOSTREAM_OFFSET))(message, resultStream, compress, encrypt, aesKey, aesIv);
		}

		static ::Il2CppArray<::System::Byte>* AesEncrypt(::Il2CppArray<::System::Byte>* toEncryptArray, ::System::String* aesKey, ::System::String* aesIv)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEREPLAYUTILS_AESENCRYPT_OFFSET))(toEncryptArray, aesKey, aesIv);
		}

		static ::Il2CppArray<::System::Byte>* AesDecrypt(::Il2CppArray<::System::Byte>* toEncryptArray, ::System::String* aesKey, ::System::String* aesIv)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEREPLAYUTILS_AESDECRYPT_OFFSET))(toEncryptArray, aesKey, aesIv);
		}

		static ::System::String* GetPerformanceSnapshotFileName(::System::UInt32 performanceID, ::RPG::GameCore::ELevelPerformanceType performanceType, ::System::Boolean isJson)
		{
			return ((::System::String*(*)(::System::UInt32, ::RPG::GameCore::ELevelPerformanceType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCEREPLAYUTILS_GETPERFORMANCESNAPSHOTFILENAME_OFFSET))(performanceID, performanceType, isJson);
		}
	};
}
