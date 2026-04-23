#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class HEU_PluginStorage_StoreData; }
namespace HoudiniEngineUnity { class HEU_SessionBase; }
namespace HoudiniEngineUnity { class HEU_SessionData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_CLEARPLUGINDATA_OFFSET UNITYSDK_OFFSET(0x15462290)
#define HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_CONVERTENVKEYEDPATHTOREAL_OFFSET UNITYSDK_OFFSET(0x15423FA0)
#define HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_CONVERTREALPATHTOENVKEYEDPATH_OFFSET UNITYSDK_OFFSET(0x154244B0)
#define HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_DELETEALLSAVEDSESSIONDATA_OFFSET UNITYSDK_OFFSET(0x154624E0)
#define HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_GETENVIRONMENTPATHMAP_OFFSET UNITYSDK_OFFSET(0x15460C30)
#define HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_GET_1_OFFSET UNITYSDK_OFFSET(0x1545D670)
#define HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_GET_2_OFFSET UNITYSDK_OFFSET(0x15461C20)
#define HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_GET_3_OFFSET UNITYSDK_OFFSET(0x1545C1E0)
#define HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_GET_4_OFFSET UNITYSDK_OFFSET(0x1545A0C0)
#define HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_GET_5_OFFSET UNITYSDK_OFFSET(0x1545E640)
#define HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x15423F30)
#define HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_GET_OFFSET UNITYSDK_OFFSET(0x1545A9B0)
#define HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_GET_REQUIRESSAVE_OFFSET UNITYSDK_OFFSET(0x15460C40)
#define HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_INSTANTIATEANDLOAD_OFFSET UNITYSDK_OFFSET(0x15460C50)
#define HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_LOADALLSESSIONDATA_OFFSET UNITYSDK_OFFSET(0x15462490)
#define HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_LOADASSETENVIRONMENTPATHS_OFFSET UNITYSDK_OFFSET(0x1545A430)
#define HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_LOADFROMSAVEDFILE_OFFSET UNITYSDK_OFFSET(0x15462370)
#define HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_LOADPLUGINDATA_OFFSET UNITYSDK_OFFSET(0x15460EE0)
#define HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_MARKDIRTYFORSAVE_OFFSET UNITYSDK_OFFSET(0x15461B40)
#define HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_READFROMEDITORPREFS_OFFSET UNITYSDK_OFFSET(0x15462280)
#define HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_SAVEALLSESSIONDATA_OFFSET UNITYSDK_OFFSET(0x15462480)
#define HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_SAVEIFREQUIRED_OFFSET UNITYSDK_OFFSET(0x15461D00)
#define HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_SAVEPLUGINDATA_OFFSET UNITYSDK_OFFSET(0x15461D60)
#define HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_SESSIONFILEPATH_OFFSET UNITYSDK_OFFSET(0x154623D0)
#define HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_SETCURRENTCULTURE_OFFSET UNITYSDK_OFFSET(0x1545FC20)
#define HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_SETTINGSFILEPATH_OFFSET UNITYSDK_OFFSET(0x154621D0)
#define HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_SET_1_OFFSET UNITYSDK_OFFSET(0x1545D7F0)
#define HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_SET_2_OFFSET UNITYSDK_OFFSET(0x15461B50)
#define HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_SET_3_OFFSET UNITYSDK_OFFSET(0x1545C3B0)
#define HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_SET_4_OFFSET UNITYSDK_OFFSET(0x1545A370)
#define HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_SET_5_OFFSET UNITYSDK_OFFSET(0x1545E830)
#define HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_SET_OFFSET UNITYSDK_OFFSET(0x1545AB30)
#define HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x15460E50)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_PluginStorage_TypeDefinitionIndex = 43542;

	class HEU_PluginStorage : public ::System::Object
	{
	public:
		static ::HoudiniEngineUnity::HEU_PluginStorage** StaticGet__instance()
		{
			return (::HoudiniEngineUnity::HEU_PluginStorage**)Il2CppClass::FromTypeDefinitionIndex(HEU_PluginStorage_TypeDefinitionIndex)->GetStaticField(0x3C5A0);
		}
		// static const ::System::String* PluginSettingsLine1; // 0x0
		// static const ::System::String* PluginSettingsLine2; // 0x0
		// static const ::System::String* PluginSettingsVersion; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::HoudiniEngineUnity::HEU_PluginStorage_StoreData*>* _dataMap; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _envPathMap; // 0x18
		::System::Boolean _requiresSave; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* GetEnvironmentPathMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_GETENVIRONMENTPATHMAP_OFFSET))(this);
		}

		::System::Boolean get_RequiresSave()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_GET_REQUIRESSAVE_OFFSET))(this);
		}

		static ::HoudiniEngineUnity::HEU_PluginStorage* get_Instance()
		{
			return ((::HoudiniEngineUnity::HEU_PluginStorage*(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void InstantiateAndLoad()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_INSTANTIATEANDLOAD_OFFSET))();
		}

		static ::System::Void SetCurrentCulture(::System::Boolean useInvariant)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_SETCURRENTCULTURE_OFFSET))(useInvariant);
		}

		::System::Void Set(::System::String* key, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_SET_OFFSET))(this, key, value);
		}

		::System::Void Set_1(::System::String* key, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_SET_1_OFFSET))(this, key, value);
		}

		::System::Void Set_2(::System::String* key, ::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_SET_2_OFFSET))(this, key, value);
		}

		::System::Void Set_3(::System::String* key, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_SET_3_OFFSET))(this, key, value);
		}

		::System::Void Set_4(::System::String* key, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_SET_4_OFFSET))(this, key, value);
		}

		::System::Void Set_5(::System::String* key, ::System::Collections::Generic::List_1<::System::String*>* values, ::System::Char delimiter)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Char))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_SET_5_OFFSET))(this, key, values, delimiter);
		}

		::System::Boolean Get(::System::String* key, ::System::Boolean& value, ::System::Boolean defaultValue)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean&, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_GET_OFFSET))(this, key, value, defaultValue);
		}

		::System::Boolean Get_1(::System::String* key, ::System::Int32& value, ::System::Int32 defaultValue)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32&, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_GET_1_OFFSET))(this, key, value, defaultValue);
		}

		::System::Boolean Get_2(::System::String* key, ::System::Int64& value, ::System::Int64 defaultValue)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int64&, ::System::Int64))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_GET_2_OFFSET))(this, key, value, defaultValue);
		}

		::System::Boolean Get_3(::System::String* key, ::System::Single& value, ::System::Single defaultValue)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single&, ::System::Single))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_GET_3_OFFSET))(this, key, value, defaultValue);
		}

		::System::Boolean Get_4(::System::String* key, ::System::String*& value, ::System::String* defaultValue)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*&, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_GET_4_OFFSET))(this, key, value, defaultValue);
		}

		::System::Boolean Get_5(::System::String* key, ::System::Collections::Generic::List_1<::System::String*>*& values, ::System::Char delimiter)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*&, ::System::Char))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_GET_5_OFFSET))(this, key, values, delimiter);
		}

		::System::Void MarkDirtyForSave()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_MARKDIRTYFORSAVE_OFFSET))(this);
		}

		static ::System::Void SaveIfRequired()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_SAVEIFREQUIRED_OFFSET))();
		}

		static ::System::String* SettingsFilePath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_SETTINGSFILEPATH_OFFSET))();
		}

		::System::Boolean SavePluginData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_SAVEPLUGINDATA_OFFSET))(this);
		}

		::System::Boolean LoadPluginData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_LOADPLUGINDATA_OFFSET))(this);
		}

		::System::Boolean ReadFromEditorPrefs()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_READFROMEDITORPREFS_OFFSET))(this);
		}

		static ::System::Void ClearPluginData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_CLEARPLUGINDATA_OFFSET))();
		}

		static ::System::Void LoadFromSavedFile()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_LOADFROMSAVEDFILE_OFFSET))();
		}

		static ::System::String* SessionFilePath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_SESSIONFILEPATH_OFFSET))();
		}

		static ::System::Void SaveAllSessionData(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_SessionBase*>* allSessions)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_SessionBase*>*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_SAVEALLSESSIONDATA_OFFSET))(allSessions);
		}

		static ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_SessionData*>* LoadAllSessionData()
		{
			return ((::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_SessionData*>*(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_LOADALLSESSIONDATA_OFFSET))();
		}

		static ::System::Void DeleteAllSavedSessionData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_DELETEALLSAVEDSESSIONDATA_OFFSET))();
		}

		::System::Void LoadAssetEnvironmentPaths()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_LOADASSETENVIRONMENTPATHS_OFFSET))(this);
		}

		::System::String* ConvertRealPathToEnvKeyedPath(::System::String* inPath)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_CONVERTREALPATHTOENVKEYEDPATH_OFFSET))(this, inPath);
		}

		::System::String* ConvertEnvKeyedPathToReal(::System::String* inPath)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PLUGINSTORAGE_CONVERTENVKEYEDPATHTOREAL_OFFSET))(this, inPath);
		}
	};
}
