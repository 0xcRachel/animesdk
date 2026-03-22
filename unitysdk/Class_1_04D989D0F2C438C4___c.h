#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_51;
namespace RPG::Client { class AudioBundleInfoItem; }
namespace RPG::Client { class VideoBundleInfoItem; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_04D989D0F2C438C4___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10B19940)
#define CLASS_1_04D989D0F2C438C4___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10B19980)
#define CLASS_1_04D989D0F2C438C4___C__GETNEEDDOWNLOADAUDIOSIZE_B__37_0_OFFSET UNITYSDK_OFFSET(0x10B199D0)
#define CLASS_1_04D989D0F2C438C4___C__GETNEEDDOWNLOADSIZEFORWHITELIST_B__23_0_OFFSET UNITYSDK_OFFSET(0x10B19990)
#define CLASS_1_04D989D0F2C438C4___C__GETNEEDDOWNLOADSIZEFORWHITELIST_B__23_1_OFFSET UNITYSDK_OFFSET(0x10B199B0)
#define CLASS_1_04D989D0F2C438C4___C__GETNEEDDOWNLOADVIDEOSIZE_B__38_0_OFFSET UNITYSDK_OFFSET(0x10B199F0)
#define CLASS_1_04D989D0F2C438C4___C___SAVEVIDEOLIST_B__52_0_OFFSET UNITYSDK_OFFSET(0x10B19A10)

inline static constexpr unsigned int Class_1_04D989D0F2C438C4___c_TypeDefinitionIndex = 47179;

class Class_1_04D989D0F2C438C4___c : public ::System::Object
{
public:
	static ::System::Func_2<::RPG::Client::AudioBundleInfoItem*, ::System::String*>** StaticGet___9__23_0()
	{
		return (::System::Func_2<::RPG::Client::AudioBundleInfoItem*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_04D989D0F2C438C4___c_TypeDefinitionIndex)->GetStaticField(0x44410);
	}
	static ::System::Func_2<::RPG::Client::VideoBundleInfoItem*, ::System::String*>** StaticGet___9__23_1()
	{
		return (::System::Func_2<::RPG::Client::VideoBundleInfoItem*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_04D989D0F2C438C4___c_TypeDefinitionIndex)->GetStaticField(0x44418);
	}
	static ::System::Func_2<::RPG::Client::VideoBundleInfoItem*, ::System::String*>** StaticGet___9__38_0()
	{
		return (::System::Func_2<::RPG::Client::VideoBundleInfoItem*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_04D989D0F2C438C4___c_TypeDefinitionIndex)->GetStaticField(0x44420);
	}
	static ::Class_1_04D989D0F2C438C4___c** StaticGet___9()
	{
		return (::Class_1_04D989D0F2C438C4___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_04D989D0F2C438C4___c_TypeDefinitionIndex)->GetStaticField(0x44428);
	}
	static ::System::Func_2<::RPG::Client::AudioBundleInfoItem*, ::System::String*>** StaticGet___9__37_0()
	{
		return (::System::Func_2<::RPG::Client::AudioBundleInfoItem*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_04D989D0F2C438C4___c_TypeDefinitionIndex)->GetStaticField(0x44430);
	}
	static ::System::Func_2<::Class_0_16E4307DCC419505_51*, ::System::String*>** StaticGet___9__52_0()
	{
		return (::System::Func_2<::Class_0_16E4307DCC419505_51*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_04D989D0F2C438C4___c_TypeDefinitionIndex)->GetStaticField(0x44438);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4___C__CTOR_OFFSET))(this);
	}

	::System::String* _GetNeedDownloadSizeForWhiteList_b__23_0(::RPG::Client::AudioBundleInfoItem* e)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::Client::AudioBundleInfoItem*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4___C__GETNEEDDOWNLOADSIZEFORWHITELIST_B__23_0_OFFSET))(this, e);
	}

	::System::String* _GetNeedDownloadSizeForWhiteList_b__23_1(::RPG::Client::VideoBundleInfoItem* e)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::Client::VideoBundleInfoItem*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4___C__GETNEEDDOWNLOADSIZEFORWHITELIST_B__23_1_OFFSET))(this, e);
	}

	::System::String* _GetNeedDownloadAudioSize_b__37_0(::RPG::Client::AudioBundleInfoItem* e)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::Client::AudioBundleInfoItem*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4___C__GETNEEDDOWNLOADAUDIOSIZE_B__37_0_OFFSET))(this, e);
	}

	::System::String* _GetNeedDownloadVideoSize_b__38_0(::RPG::Client::VideoBundleInfoItem* e)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::Client::VideoBundleInfoItem*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4___C__GETNEEDDOWNLOADVIDEOSIZE_B__38_0_OFFSET))(this, e);
	}

	::System::String* __SaveVideoList_b__52_0(::Class_0_16E4307DCC419505_51* e)
	{
		return ((::System::String*(*)(::PVOID, ::Class_0_16E4307DCC419505_51*))((::PBYTE)hIl2Cpp + CLASS_1_04D989D0F2C438C4___C___SAVEVIDEOLIST_B__52_0_OFFSET))(this, e);
	}
};
