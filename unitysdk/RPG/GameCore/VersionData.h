#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/E_PakType.h"
#include "unitysdk/System/Object.h"

class Class_1_2EC3C747C8116C73;
class Class_1_BF07D56907C6CAE7;
class Class_1_D6315C5C2FF98AB8;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_VERSIONDATA_CLEARCHANNELID_OFFSET UNITYSDK_OFFSET(0xA5C2CC0)
#define RPG_GAMECORE_VERSIONDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0xA5C26D0)
#define RPG_GAMECORE_VERSIONDATA_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xA5C19F0)
#define RPG_GAMECORE_VERSIONDATA_GETASBVERSION_OFFSET UNITYSDK_OFFSET(0xA5C2FE0)
#define RPG_GAMECORE_VERSIONDATA_GETCHANNELID_OFFSET UNITYSDK_OFFSET(0xA5C2D10)
#define RPG_GAMECORE_VERSIONDATA_GETCLIENTPAKTYPEVERSIONNOBRANCH_OFFSET UNITYSDK_OFFSET(0xA5C2920)
#define RPG_GAMECORE_VERSIONDATA_GETCLIENTPAKTYPEVERSION_OFFSET UNITYSDK_OFFSET(0xA5C2BA0)
#define RPG_GAMECORE_VERSIONDATA_GETDISPATCHSEED_OFFSET UNITYSDK_OFFSET(0xA5C2FA0)
#define RPG_GAMECORE_VERSIONDATA_GETPLATFORMTYPE_OFFSET UNITYSDK_OFFSET(0xA5C2C70)
#define RPG_GAMECORE_VERSIONDATA_GETSERVERPAKTYPEVERSION_OFFSET UNITYSDK_OFFSET(0xA5C29F0)
#define RPG_GAMECORE_VERSIONDATA_GETSUBCHANNELID_OFFSET UNITYSDK_OFFSET(0xA5C2E30)
#define RPG_GAMECORE_VERSIONDATA_GETTIMEBRANCH_OFFSET UNITYSDK_OFFSET(0xA5C2970)
#define RPG_GAMECORE_VERSIONDATA_GETVERSIONSTRING_OFFSET UNITYSDK_OFFSET(0xA5C2790)
#define RPG_GAMECORE_VERSIONDATA_GET_BRANCH_OFFSET UNITYSDK_OFFSET(0xA5C36F0)
#define RPG_GAMECORE_VERSIONDATA_GET_BUILDID_OFFSET UNITYSDK_OFFSET(0xA5C3920)
#define RPG_GAMECORE_VERSIONDATA_GET_CHANNELID_OFFSET UNITYSDK_OFFSET(0xA5C3830)
#define RPG_GAMECORE_VERSIONDATA_GET_DISPATCHSEED_OFFSET UNITYSDK_OFFSET(0xA5C3810)
#define RPG_GAMECORE_VERSIONDATA_GET_GAMECOREVERSION_OFFSET UNITYSDK_OFFSET(0xA5C37B0)
#define RPG_GAMECORE_VERSIONDATA_GET_ISENABLEEXCLUDEASSET_OFFSET UNITYSDK_OFFSET(0xA5C3870)
#define RPG_GAMECORE_VERSIONDATA_GET_MAJORVERSION_OFFSET UNITYSDK_OFFSET(0xA5C3750)
#define RPG_GAMECORE_VERSIONDATA_GET_MINORVERSION_OFFSET UNITYSDK_OFFSET(0xA5C3770)
#define RPG_GAMECORE_VERSIONDATA_GET_PAKTYPEDETAIL_OFFSET UNITYSDK_OFFSET(0xA5C37F0)
#define RPG_GAMECORE_VERSIONDATA_GET_PAKTYPE_OFFSET UNITYSDK_OFFSET(0xA5C37D0)
#define RPG_GAMECORE_VERSIONDATA_GET_PATCHVERSION_OFFSET UNITYSDK_OFFSET(0xA5C3790)
#define RPG_GAMECORE_VERSIONDATA_GET_REVISION_OFFSET UNITYSDK_OFFSET(0xA5C3710)
#define RPG_GAMECORE_VERSIONDATA_GET_SDK_PS_CLIENT_ID_1_OFFSET UNITYSDK_OFFSET(0xA5C3890)
#define RPG_GAMECORE_VERSIONDATA_GET_SDK_PS_CLIENT_ID_OFFSET UNITYSDK_OFFSET(0xA5C30C0)
#define RPG_GAMECORE_VERSIONDATA_GET_SUBCHANNELID_OFFSET UNITYSDK_OFFSET(0xA5C3850)
#define RPG_GAMECORE_VERSIONDATA_GET_TIME_OFFSET UNITYSDK_OFFSET(0xA5C3730)
#define RPG_GAMECORE_VERSIONDATA_GET_VERSION_OFFSET UNITYSDK_OFFSET(0xA5C38B0)
#define RPG_GAMECORE_VERSIONDATA_ISBETABRANCH_OFFSET UNITYSDK_OFFSET(0xA5C2BF0)
#define RPG_GAMECORE_VERSIONDATA_ISPAKTYPEEQUALPROD_OFFSET UNITYSDK_OFFSET(0xA5C2F50)
#define RPG_GAMECORE_VERSIONDATA_LOADVERSIONDATAFROMBINARY_OFFSET UNITYSDK_OFFSET(0xA5C18B0)
#define RPG_GAMECORE_VERSIONDATA_LOADVERSIONDATAFROMTEXT_OFFSET UNITYSDK_OFFSET(0xA5C1DE0)
#define RPG_GAMECORE_VERSIONDATA_LOADVERSIONDATA_OFFSET UNITYSDK_OFFSET(0xA5C1860)
#define RPG_GAMECORE_VERSIONDATA_READBINARYFROMFILE_OFFSET UNITYSDK_OFFSET(0xA5C3480)
#define RPG_GAMECORE_VERSIONDATA_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xA5C3100)
#define RPG_GAMECORE_VERSIONDATA_SETVERSIONINDEV_OFFSET UNITYSDK_OFFSET(0xA5C36B0)
#define RPG_GAMECORE_VERSIONDATA_SET_BRANCH_OFFSET UNITYSDK_OFFSET(0xA5C3700)
#define RPG_GAMECORE_VERSIONDATA_SET_BUILDID_OFFSET UNITYSDK_OFFSET(0xA5C3950)
#define RPG_GAMECORE_VERSIONDATA_SET_CHANNELID_OFFSET UNITYSDK_OFFSET(0xA5C3840)
#define RPG_GAMECORE_VERSIONDATA_SET_DISPATCHSEED_OFFSET UNITYSDK_OFFSET(0xA5C3820)
#define RPG_GAMECORE_VERSIONDATA_SET_GAMECOREVERSION_OFFSET UNITYSDK_OFFSET(0xA5C37C0)
#define RPG_GAMECORE_VERSIONDATA_SET_ISENABLEEXCLUDEASSET_OFFSET UNITYSDK_OFFSET(0xA5C3880)
#define RPG_GAMECORE_VERSIONDATA_SET_MAJORVERSION_OFFSET UNITYSDK_OFFSET(0xA5C3760)
#define RPG_GAMECORE_VERSIONDATA_SET_MINORVERSION_OFFSET UNITYSDK_OFFSET(0xA5C3780)
#define RPG_GAMECORE_VERSIONDATA_SET_PAKTYPEDETAIL_OFFSET UNITYSDK_OFFSET(0xA5C3800)
#define RPG_GAMECORE_VERSIONDATA_SET_PAKTYPE_OFFSET UNITYSDK_OFFSET(0xA5C37E0)
#define RPG_GAMECORE_VERSIONDATA_SET_PATCHVERSION_OFFSET UNITYSDK_OFFSET(0xA5C37A0)
#define RPG_GAMECORE_VERSIONDATA_SET_REVISION_OFFSET UNITYSDK_OFFSET(0xA5C3720)
#define RPG_GAMECORE_VERSIONDATA_SET_SDK_PS_CLIENT_ID_OFFSET UNITYSDK_OFFSET(0xA5C38A0)
#define RPG_GAMECORE_VERSIONDATA_SET_SUBCHANNELID_OFFSET UNITYSDK_OFFSET(0xA5C3860)
#define RPG_GAMECORE_VERSIONDATA_SET_TIME_OFFSET UNITYSDK_OFFSET(0xA5C3740)
#define RPG_GAMECORE_VERSIONDATA_SET_VERSION_OFFSET UNITYSDK_OFFSET(0xA5C38E0)
#define RPG_GAMECORE_VERSIONDATA_TICK_OFFSET UNITYSDK_OFFSET(0xA5C2730)
#define RPG_GAMECORE_VERSIONDATA_WRITEBINARYTOFILE_OFFSET UNITYSDK_OFFSET(0xA5C34E0)
#define RPG_GAMECORE_VERSIONDATA_WRITEJSONTOFILE_OFFSET UNITYSDK_OFFSET(0xA5C3660)
#define RPG_GAMECORE_VERSIONDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xA5C3990)
#define RPG_GAMECORE_VERSIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA5C0EE0)
#define RPG_GAMECORE_VERSIONDATA__GETPAKTYPEVERSION_OFFSET UNITYSDK_OFFSET(0xA5C2A40)
#define RPG_GAMECORE_VERSIONDATA__LOADCLIENTVERSIONDATA_OFFSET UNITYSDK_OFFSET(0xA5C1060)
#define RPG_GAMECORE_VERSIONDATA__SETCHANNELID_OFFSET UNITYSDK_OFFSET(0xA5C2D70)
#define RPG_GAMECORE_VERSIONDATA__SETSUBCHANNELID_OFFSET UNITYSDK_OFFSET(0xA5C2E90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VersionData_TypeDefinitionIndex = 46840;

	class VersionData : public ::System::Object
	{
	public:
		static ::System::String** StaticGet__Version_k__BackingField()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(VersionData_TypeDefinitionIndex)->GetStaticField(0x131E0);
		}
		static ::System::String** StaticGet_s_VersionFilePath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(VersionData_TypeDefinitionIndex)->GetStaticField(0x131E8);
		}
		static ::System::String** StaticGet__BuildId_k__BackingField()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(VersionData_TypeDefinitionIndex)->GetStaticField(0x131F0);
		}
		::System::String* _ChannelId_k__BackingField; // 0x10
		::System::String* _SubChannelId_k__BackingField; // 0x18
		::System::String* _Sdk_PS_Client_Id_k__BackingField; // 0x20
		::System::String* _DispatchSeed_k__BackingField; // 0x28
		::Class_1_2EC3C747C8116C73* AssetVersion; // 0x30
		::System::String* _Branch_k__BackingField; // 0x38
		::System::String* _PakTypeDetail_k__BackingField; // 0x40
		::System::String* _Time_k__BackingField; // 0x48
		::Class_1_BF07D56907C6CAE7* UpdateVersionInfoIns; // 0x50
		::System::UInt32 _MinorVersion_k__BackingField; // 0x58
		::RPG::GameCore::E_PakType _PakType_k__BackingField; // 0x5C
		::System::UInt32 _Revision_k__BackingField; // 0x60
		::System::UInt32 _PatchVersion_k__BackingField; // 0x64
		::System::UInt32 _GameCoreVersion_k__BackingField; // 0x68
		::System::Boolean _IsEnableExcludeAsset_k__BackingField; // 0x6C
		::System::UInt32 _MajorVersion_k__BackingField; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA__CCTOR_OFFSET))();
		}

		::System::Void _LoadClientVersionData(::SimpleJSON::JSONNode* pNode)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA__LOADCLIENTVERSIONDATA_OFFSET))(this, pNode);
		}

		::System::Void LoadVersionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_LOADVERSIONDATA_OFFSET))(this);
		}

		::System::Void LoadVersionDataFromBinary()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_LOADVERSIONDATAFROMBINARY_OFFSET))(this);
		}

		::System::Void LoadVersionDataFromText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_LOADVERSIONDATAFROMTEXT_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_CLEAR_OFFSET))(this);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::String* GetVersionString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GETVERSIONSTRING_OFFSET))(this);
		}

		::System::String* GetTimeBranch()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GETTIMEBRANCH_OFFSET))(this);
		}

		::System::String* GetServerPakTypeVersion()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GETSERVERPAKTYPEVERSION_OFFSET))(this);
		}

		::System::String* GetClientPakTypeVersion()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GETCLIENTPAKTYPEVERSION_OFFSET))(this);
		}

		::System::String* GetClientPakTypeVersionNoBranch()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GETCLIENTPAKTYPEVERSIONNOBRANCH_OFFSET))(this);
		}

		::System::Boolean IsBetaBranch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_ISBETABRANCH_OFFSET))(this);
		}

		::System::String* _GetPakTypeVersion(::System::Boolean isServerVersion, ::System::Boolean isClientNeedBranch)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA__GETPAKTYPEVERSION_OFFSET))(this, isServerVersion, isClientNeedBranch);
		}

		::System::UInt32 GetPlatformType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GETPLATFORMTYPE_OFFSET))(this);
		}

		::System::Void ClearChannelID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_CLEARCHANNELID_OFFSET))(this);
		}

		::System::String* GetChannelId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GETCHANNELID_OFFSET))(this);
		}

		::System::String* GetSubChannelId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GETSUBCHANNELID_OFFSET))(this);
		}

		::System::Boolean IsPakTypeEqualPROD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_ISPAKTYPEEQUALPROD_OFFSET))(this);
		}

		::System::String* GetDispatchSeed()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GETDISPATCHSEED_OFFSET))(this);
		}

		::System::String* GetAsbVersion()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GETASBVERSION_OFFSET))(this);
		}

		::System::String* Get_Sdk_PS_Client_Id()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GET_SDK_PS_CLIENT_ID_OFFSET))(this);
		}

		::Class_1_D6315C5C2FF98AB8* Serialize()
		{
			return ((::Class_1_D6315C5C2FF98AB8*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_SERIALIZE_OFFSET))(this);
		}

		::System::Void Deserialize(::Il2CppArray<::System::Byte>* byteArray)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_DESERIALIZE_OFFSET))(this, byteArray);
		}

		::System::Void ReadBinaryFromFile(::System::String* fileFullPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_READBINARYFROMFILE_OFFSET))(this, fileFullPath);
		}

		::System::Void WriteBinaryToFile(::System::String* fileFullPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_WRITEBINARYTOFILE_OFFSET))(this, fileFullPath);
		}

		::System::Void WriteJsonToFile(::System::String* fileFullPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_WRITEJSONTOFILE_OFFSET))(this, fileFullPath);
		}

		::System::Void _SetChannelId()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA__SETCHANNELID_OFFSET))(this);
		}

		::System::Void _SetSubChannelId()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA__SETSUBCHANNELID_OFFSET))(this);
		}

		static ::System::Void SetVersionInDev(::System::String* inVersion)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_SETVERSIONINDEV_OFFSET))(inVersion);
		}

		::System::String* get_Branch()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GET_BRANCH_OFFSET))(this);
		}

		::System::Void set_Branch(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_SET_BRANCH_OFFSET))(this, value);
		}

		::System::UInt32 get_Revision()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GET_REVISION_OFFSET))(this);
		}

		::System::Void set_Revision(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_SET_REVISION_OFFSET))(this, value);
		}

		::System::String* get_Time()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GET_TIME_OFFSET))(this);
		}

		::System::Void set_Time(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_SET_TIME_OFFSET))(this, value);
		}

		::System::UInt32 get_MajorVersion()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GET_MAJORVERSION_OFFSET))(this);
		}

		::System::Void set_MajorVersion(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_SET_MAJORVERSION_OFFSET))(this, value);
		}

		::System::UInt32 get_MinorVersion()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GET_MINORVERSION_OFFSET))(this);
		}

		::System::Void set_MinorVersion(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_SET_MINORVERSION_OFFSET))(this, value);
		}

		::System::UInt32 get_PatchVersion()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GET_PATCHVERSION_OFFSET))(this);
		}

		::System::Void set_PatchVersion(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_SET_PATCHVERSION_OFFSET))(this, value);
		}

		::System::UInt32 get_GameCoreVersion()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GET_GAMECOREVERSION_OFFSET))(this);
		}

		::System::Void set_GameCoreVersion(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_SET_GAMECOREVERSION_OFFSET))(this, value);
		}

		::RPG::GameCore::E_PakType get_PakType()
		{
			return ((::RPG::GameCore::E_PakType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GET_PAKTYPE_OFFSET))(this);
		}

		::System::Void set_PakType(::RPG::GameCore::E_PakType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::E_PakType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_SET_PAKTYPE_OFFSET))(this, value);
		}

		::System::String* get_PakTypeDetail()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GET_PAKTYPEDETAIL_OFFSET))(this);
		}

		::System::Void set_PakTypeDetail(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_SET_PAKTYPEDETAIL_OFFSET))(this, value);
		}

		::System::String* get_DispatchSeed()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GET_DISPATCHSEED_OFFSET))(this);
		}

		::System::Void set_DispatchSeed(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_SET_DISPATCHSEED_OFFSET))(this, value);
		}

		::System::String* get_ChannelId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GET_CHANNELID_OFFSET))(this);
		}

		::System::Void set_ChannelId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_SET_CHANNELID_OFFSET))(this, value);
		}

		::System::String* get_SubChannelId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GET_SUBCHANNELID_OFFSET))(this);
		}

		::System::Void set_SubChannelId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_SET_SUBCHANNELID_OFFSET))(this, value);
		}

		::System::Boolean get_IsEnableExcludeAsset()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GET_ISENABLEEXCLUDEASSET_OFFSET))(this);
		}

		::System::Void set_IsEnableExcludeAsset(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_SET_ISENABLEEXCLUDEASSET_OFFSET))(this, value);
		}

		::System::String* get_Sdk_PS_Client_Id_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GET_SDK_PS_CLIENT_ID_1_OFFSET))(this);
		}

		::System::Void set_Sdk_PS_Client_Id(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_SET_SDK_PS_CLIENT_ID_OFFSET))(this, value);
		}

		static ::System::String* get_Version()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GET_VERSION_OFFSET))();
		}

		static ::System::Void set_Version(::System::String* value)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_SET_VERSION_OFFSET))(value);
		}

		static ::System::String* get_BuildId()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_GET_BUILDID_OFFSET))();
		}

		static ::System::Void set_BuildId(::System::String* value)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VERSIONDATA_SET_BUILDID_OFFSET))(value);
		}
	};
}
