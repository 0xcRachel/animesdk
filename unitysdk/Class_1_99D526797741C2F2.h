#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_EAC1BB0F093534A5.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimCustomLoadConfig; }
namespace RPG::GameCore { class FiveDimCustomVisibilityConfig; }
namespace RPG::GameCore { class FiveDimEntityVarConfig; }
namespace RPG::GameCore { class FiveDimNavMapSurfaceConnectConfig; }
namespace RPG::GameCore { class FiveDimPipePortalConfig; }
namespace RPG::GameCore { class FiveDimPortalConfig; }
namespace RPG::GameCore { class FiveDimSurfaceConfig; }
namespace RPG::GameCore { class LittleGameAttachPointConfig; }
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace RPG::GameCore { class LittleGameNavMapIconConfig; }
namespace RPG::GameCore { class LittleGameTagConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_99D526797741C2F2_GET_ATTACHPOINTCONFIG_OFFSET UNITYSDK_OFFSET(0xDB36090)
#define CLASS_1_99D526797741C2F2_GET_ATTACHPOINTS_OFFSET UNITYSDK_OFFSET(0xDB36190)
#define CLASS_1_99D526797741C2F2_GET_CHILDRENIDS_OFFSET UNITYSDK_OFFSET(0xDB35F70)
#define CLASS_1_99D526797741C2F2_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xDB361B0)
#define CLASS_1_99D526797741C2F2_GET_CUSTOMLOADCONFIG_OFFSET UNITYSDK_OFFSET(0xDB360F0)
#define CLASS_1_99D526797741C2F2_GET_CUSTOMVISIBILITYCONFIG_OFFSET UNITYSDK_OFFSET(0xDB36110)
#define CLASS_1_99D526797741C2F2_GET_ENTITYVARCONFIG_OFFSET UNITYSDK_OFFSET(0xDB36130)
#define CLASS_1_99D526797741C2F2_GET_ICONCONFIG_OFFSET UNITYSDK_OFFSET(0xDB36050)
#define CLASS_1_99D526797741C2F2_GET_ISLOADED_OFFSET UNITYSDK_OFFSET(0xDB35F90)
#define CLASS_1_99D526797741C2F2_GET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0xDB35FD0)
#define CLASS_1_99D526797741C2F2_GET_ISSURFACE_OFFSET UNITYSDK_OFFSET(0xDB35F10)
#define CLASS_1_99D526797741C2F2_GET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0xDB35FB0)
#define CLASS_1_99D526797741C2F2_GET_LITTLEGAMETAGCONFIG_OFFSET UNITYSDK_OFFSET(0xDB36150)
#define CLASS_1_99D526797741C2F2_GET_LOCALTRANSFORM_OFFSET UNITYSDK_OFFSET(0xDB35D10)
#define CLASS_1_99D526797741C2F2_GET_MAPFACECONNECTCONFIG_OFFSET UNITYSDK_OFFSET(0xDB36070)
#define CLASS_1_99D526797741C2F2_GET_PARENTID_OFFSET UNITYSDK_OFFSET(0xDB35F50)
#define CLASS_1_99D526797741C2F2_GET_PIPEPORTALCONFIG_OFFSET UNITYSDK_OFFSET(0xDB360B0)
#define CLASS_1_99D526797741C2F2_GET_PORTALCONFIG_OFFSET UNITYSDK_OFFSET(0xDB360D0)
#define CLASS_1_99D526797741C2F2_GET_SURFACECONFIG_OFFSET UNITYSDK_OFFSET(0xDB36170)
#define CLASS_1_99D526797741C2F2_GET_SURFACEID_OFFSET UNITYSDK_OFFSET(0xDB35EF0)
#define CLASS_1_99D526797741C2F2_GET_SURFACERELATIVETRANSFORM_OFFSET UNITYSDK_OFFSET(0xDB35E50)
#define CLASS_1_99D526797741C2F2_GET_WORLDTRANSFORM_OFFSET UNITYSDK_OFFSET(0xDB35DB0)
#define CLASS_1_99D526797741C2F2_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xDB35FF0)
#define CLASS_1_99D526797741C2F2_METHOD_1_D978819B0A4871A0_OFFSET UNITYSDK_OFFSET(0xDB35F30)
#define CLASS_1_99D526797741C2F2_SET_ATTACHPOINTCONFIG_OFFSET UNITYSDK_OFFSET(0xDB360A0)
#define CLASS_1_99D526797741C2F2_SET_ATTACHPOINTS_OFFSET UNITYSDK_OFFSET(0xDB361A0)
#define CLASS_1_99D526797741C2F2_SET_CHILDRENIDS_OFFSET UNITYSDK_OFFSET(0xDB35F80)
#define CLASS_1_99D526797741C2F2_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xDB361C0)
#define CLASS_1_99D526797741C2F2_SET_CUSTOMLOADCONFIG_OFFSET UNITYSDK_OFFSET(0xDB36100)
#define CLASS_1_99D526797741C2F2_SET_CUSTOMVISIBILITYCONFIG_OFFSET UNITYSDK_OFFSET(0xDB36120)
#define CLASS_1_99D526797741C2F2_SET_ENTITYVARCONFIG_OFFSET UNITYSDK_OFFSET(0xDB36140)
#define CLASS_1_99D526797741C2F2_SET_ICONCONFIG_OFFSET UNITYSDK_OFFSET(0xDB36060)
#define CLASS_1_99D526797741C2F2_SET_ISLOADED_OFFSET UNITYSDK_OFFSET(0xDB35FA0)
#define CLASS_1_99D526797741C2F2_SET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0xDB35FE0)
#define CLASS_1_99D526797741C2F2_SET_ISSURFACE_OFFSET UNITYSDK_OFFSET(0xDB35F20)
#define CLASS_1_99D526797741C2F2_SET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0xDB35FC0)
#define CLASS_1_99D526797741C2F2_SET_LITTLEGAMETAGCONFIG_OFFSET UNITYSDK_OFFSET(0xDB36160)
#define CLASS_1_99D526797741C2F2_SET_LOCALTRANSFORM_OFFSET UNITYSDK_OFFSET(0xDB35D60)
#define CLASS_1_99D526797741C2F2_SET_MAPFACECONNECTCONFIG_OFFSET UNITYSDK_OFFSET(0xDB36080)
#define CLASS_1_99D526797741C2F2_SET_PARENTID_OFFSET UNITYSDK_OFFSET(0xDB35F60)
#define CLASS_1_99D526797741C2F2_SET_PIPEPORTALCONFIG_OFFSET UNITYSDK_OFFSET(0xDB360C0)
#define CLASS_1_99D526797741C2F2_SET_PORTALCONFIG_OFFSET UNITYSDK_OFFSET(0xDB360E0)
#define CLASS_1_99D526797741C2F2_SET_SURFACECONFIG_OFFSET UNITYSDK_OFFSET(0xDB36180)
#define CLASS_1_99D526797741C2F2_SET_SURFACEID_OFFSET UNITYSDK_OFFSET(0xDB35F00)
#define CLASS_1_99D526797741C2F2_SET_SURFACERELATIVETRANSFORM_OFFSET UNITYSDK_OFFSET(0xDB35EA0)
#define CLASS_1_99D526797741C2F2_SET_WORLDTRANSFORM_OFFSET UNITYSDK_OFFSET(0xDB35E00)
#define CLASS_1_99D526797741C2F2__CTOR_OFFSET UNITYSDK_OFFSET(0xDB361D0)

inline static constexpr unsigned int Class_1_99D526797741C2F2_TypeDefinitionIndex = 57370;

class Class_1_99D526797741C2F2 : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimEntityVarConfig* _EntityVarConfig_k__BackingField; // 0x10
	::RPG::GameCore::FiveDimSurfaceConfig* _SurfaceConfig_k__BackingField; // 0x18
	::RPG::GameCore::FiveDimCustomLoadConfig* _CustomLoadConfig_k__BackingField; // 0x20
	::RPG::GameCore::LittleGameNavMapIconConfig* _IconConfig_k__BackingField; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_EAC1BB0F093534A5>* _AttachPoints_k__BackingField; // 0x30
	::RPG::GameCore::FiveDimNavMapSurfaceConnectConfig* _MapFaceConnectConfig_k__BackingField; // 0x38
	::RPG::GameCore::FiveDimPortalConfig* _PortalConfig_k__BackingField; // 0x40
	::RPG::GameCore::LittleGameEntityConfig* _Config_k__BackingField; // 0x48
	::System::Collections::Generic::List_1<::System::UInt32>* _ChildrenIDs_k__BackingField; // 0x50
	::RPG::GameCore::FiveDimCustomVisibilityConfig* _CustomVisibilityConfig_k__BackingField; // 0x58
	::RPG::GameCore::FiveDimPipePortalConfig* _PipePortalConfig_k__BackingField; // 0x60
	::RPG::GameCore::LittleGameTagConfig* _LittleGameTagConfig_k__BackingField; // 0x68
	::RPG::GameCore::LittleGameAttachPointConfig* _AttachPointConfig_k__BackingField; // 0x70
	::System::UInt32 _SurfaceID_k__BackingField; // 0x78
	::System::Boolean _IsSurface_k__BackingField; // 0x7C
	::System::Boolean _IsLocked_k__BackingField; // 0x7D
	::System::Boolean _IsLoaded_k__BackingField; // 0x7E
	::System::Boolean _IsVisible_k__BackingField; // 0x7F
	::Struct_2_EAC1BB0F093534A5 _SurfaceRelativeTransform_k__BackingField; // 0x80
	::System::UInt32 _ParentID_k__BackingField; // 0xE8
	::Struct_2_EAC1BB0F093534A5 _LocalTransform_k__BackingField; // 0xEC
	::Struct_2_EAC1BB0F093534A5 _WorldTransform_k__BackingField; // 0x154

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D526797741C2F2__CTOR_OFFSET))(this);
	}

	::Struct_2_EAC1BB0F093534A5 get_LocalTransform()
	{
		return ((::Struct_2_EAC1BB0F093534A5(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D526797741C2F2_GET_LOCALTRANSFORM_OFFSET))(this);
	}

	::System::Void set_LocalTransform(::Struct_2_EAC1BB0F093534A5 value)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_EAC1BB0F093534A5))((::PBYTE)hIl2Cpp + CLASS_1_99D526797741C2F2_SET_LOCALTRANSFORM_OFFSET))(this, value);
	}

	::Struct_2_EAC1BB0F093534A5 get_WorldTransform()
	{
		return ((::Struct_2_EAC1BB0F093534A5(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D526797741C2F2_GET_WORLDTRANSFORM_OFFSET))(this);
	}

	::System::Void set_WorldTransform(::Struct_2_EAC1BB0F093534A5 value)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_EAC1BB0F093534A5))((::PBYTE)hIl2Cpp + CLASS_1_99D526797741C2F2_SET_WORLDTRANSFORM_OFFSET))(this, value);
	}

	::Struct_2_EAC1BB0F093534A5 get_SurfaceRelativeTransform()
	{
		return ((::Struct_2_EAC1BB0F093534A5(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D526797741C2F2_GET_SURFACERELATIVETRANSFORM_OFFSET))(this);
	}

	::System::Void set_SurfaceRelativeTransform(::Struct_2_EAC1BB0F093534A5 value)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_EAC1BB0F093534A5))((::PBYTE)hIl2Cpp + CLASS_1_99D526797741C2F2_SET_SURFACERELATIVETRANSFORM_OFFSET))(this, value);
	}

	::System::UInt32 get_SurfaceID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D526797741C2F2_GET_SURFACEID_OFFSET))(this);
	}

	::System::Void set_SurfaceID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_99D526797741C2F2_SET_SURFACEID_OFFSET))(this, value);
	}

	::System::Boolean get_IsSurface()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D526797741C2F2_GET_ISSURFACE_OFFSET))(this);
	}

	::System::Void set_IsSurface(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_99D526797741C2F2_SET_ISSURFACE_OFFSET))(this, value);
	}

	::System::UInt32 Method_1_D978819B0A4871A0()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D526797741C2F2_METHOD_1_D978819B0A4871A0_OFFSET))(this);
	}

	::System::UInt32 get_ParentID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D526797741C2F2_GET_PARENTID_OFFSET))(this);
	}

	::System::Void set_ParentID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_99D526797741C2F2_SET_PARENTID_OFFSET))(this, value);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_ChildrenIDs()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D526797741C2F2_GET_CHILDRENIDS_OFFSET))(this);
	}

	::System::Void set_ChildrenIDs(::System::Collections::Generic::List_1<::System::UInt32>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_99D526797741C2F2_SET_CHILDRENIDS_OFFSET))(this, value);
	}

	::System::Boolean get_IsLoaded()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D526797741C2F2_GET_ISLOADED_OFFSET))(this);
	}

	::System::Void set_IsLoaded(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_99D526797741C2F2_SET_ISLOADED_OFFSET))(this, value);
	}

	::System::Boolean get_IsVisible()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D526797741C2F2_GET_ISVISIBLE_OFFSET))(this);
	}

	::System::Void set_IsVisible(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_99D526797741C2F2_SET_ISVISIBLE_OFFSET))(this, value);
	}

	::System::Boolean get_IsLocked()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D526797741C2F2_GET_ISLOCKED_OFFSET))(this);
	}

	::System::Void set_IsLocked(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_99D526797741C2F2_SET_ISLOCKED_OFFSET))(this, value);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D526797741C2F2_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::RPG::GameCore::LittleGameNavMapIconConfig* get_IconConfig()
	{
		return ((::RPG::GameCore::LittleGameNavMapIconConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D526797741C2F2_GET_ICONCONFIG_OFFSET))(this);
	}

	::System::Void set_IconConfig(::RPG::GameCore::LittleGameNavMapIconConfig* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameNavMapIconConfig*))((::PBYTE)hIl2Cpp + CLASS_1_99D526797741C2F2_SET_ICONCONFIG_OFFSET))(this, value);
	}

	::RPG::GameCore::FiveDimNavMapSurfaceConnectConfig* get_MapFaceConnectConfig()
	{
		return ((::RPG::GameCore::FiveDimNavMapSurfaceConnectConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D526797741C2F2_GET_MAPFACECONNECTCONFIG_OFFSET))(this);
	}

	::System::Void set_MapFaceConnectConfig(::RPG::GameCore::FiveDimNavMapSurfaceConnectConfig* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimNavMapSurfaceConnectConfig*))((::PBYTE)hIl2Cpp + CLASS_1_99D526797741C2F2_SET_MAPFACECONNECTCONFIG_OFFSET))(this, value);
	}

	::RPG::GameCore::LittleGameAttachPointConfig* get_AttachPointConfig()
	{
		return ((::RPG::GameCore::LittleGameAttachPointConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D526797741C2F2_GET_ATTACHPOINTCONFIG_OFFSET))(this);
	}

	::System::Void set_AttachPointConfig(::RPG::GameCore::LittleGameAttachPointConfig* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameAttachPointConfig*))((::PBYTE)hIl2Cpp + CLASS_1_99D526797741C2F2_SET_ATTACHPOINTCONFIG_OFFSET))(this, value);
	}

	::RPG::GameCore::FiveDimPipePortalConfig* get_PipePortalConfig()
	{
		return ((::RPG::GameCore::FiveDimPipePortalConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D526797741C2F2_GET_PIPEPORTALCONFIG_OFFSET))(this);
	}

	::System::Void set_PipePortalConfig(::RPG::GameCore::FiveDimPipePortalConfig* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimPipePortalConfig*))((::PBYTE)hIl2Cpp + CLASS_1_99D526797741C2F2_SET_PIPEPORTALCONFIG_OFFSET))(this, value);
	}

	::RPG::GameCore::FiveDimPortalConfig* get_PortalConfig()
	{
		return ((::RPG::GameCore::FiveDimPortalConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D526797741C2F2_GET_PORTALCONFIG_OFFSET))(this);
	}

	::System::Void set_PortalConfig(::RPG::GameCore::FiveDimPortalConfig* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimPortalConfig*))((::PBYTE)hIl2Cpp + CLASS_1_99D526797741C2F2_SET_PORTALCONFIG_OFFSET))(this, value);
	}

	::RPG::GameCore::FiveDimCustomLoadConfig* get_CustomLoadConfig()
	{
		return ((::RPG::GameCore::FiveDimCustomLoadConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D526797741C2F2_GET_CUSTOMLOADCONFIG_OFFSET))(this);
	}

	::System::Void set_CustomLoadConfig(::RPG::GameCore::FiveDimCustomLoadConfig* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimCustomLoadConfig*))((::PBYTE)hIl2Cpp + CLASS_1_99D526797741C2F2_SET_CUSTOMLOADCONFIG_OFFSET))(this, value);
	}

	::RPG::GameCore::FiveDimCustomVisibilityConfig* get_CustomVisibilityConfig()
	{
		return ((::RPG::GameCore::FiveDimCustomVisibilityConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D526797741C2F2_GET_CUSTOMVISIBILITYCONFIG_OFFSET))(this);
	}

	::System::Void set_CustomVisibilityConfig(::RPG::GameCore::FiveDimCustomVisibilityConfig* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimCustomVisibilityConfig*))((::PBYTE)hIl2Cpp + CLASS_1_99D526797741C2F2_SET_CUSTOMVISIBILITYCONFIG_OFFSET))(this, value);
	}

	::RPG::GameCore::FiveDimEntityVarConfig* get_EntityVarConfig()
	{
		return ((::RPG::GameCore::FiveDimEntityVarConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D526797741C2F2_GET_ENTITYVARCONFIG_OFFSET))(this);
	}

	::System::Void set_EntityVarConfig(::RPG::GameCore::FiveDimEntityVarConfig* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimEntityVarConfig*))((::PBYTE)hIl2Cpp + CLASS_1_99D526797741C2F2_SET_ENTITYVARCONFIG_OFFSET))(this, value);
	}

	::RPG::GameCore::LittleGameTagConfig* get_LittleGameTagConfig()
	{
		return ((::RPG::GameCore::LittleGameTagConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D526797741C2F2_GET_LITTLEGAMETAGCONFIG_OFFSET))(this);
	}

	::System::Void set_LittleGameTagConfig(::RPG::GameCore::LittleGameTagConfig* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameTagConfig*))((::PBYTE)hIl2Cpp + CLASS_1_99D526797741C2F2_SET_LITTLEGAMETAGCONFIG_OFFSET))(this, value);
	}

	::RPG::GameCore::FiveDimSurfaceConfig* get_SurfaceConfig()
	{
		return ((::RPG::GameCore::FiveDimSurfaceConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D526797741C2F2_GET_SURFACECONFIG_OFFSET))(this);
	}

	::System::Void set_SurfaceConfig(::RPG::GameCore::FiveDimSurfaceConfig* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimSurfaceConfig*))((::PBYTE)hIl2Cpp + CLASS_1_99D526797741C2F2_SET_SURFACECONFIG_OFFSET))(this, value);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_EAC1BB0F093534A5>* get_AttachPoints()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_EAC1BB0F093534A5>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D526797741C2F2_GET_ATTACHPOINTS_OFFSET))(this);
	}

	::System::Void set_AttachPoints(::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_EAC1BB0F093534A5>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_EAC1BB0F093534A5>*))((::PBYTE)hIl2Cpp + CLASS_1_99D526797741C2F2_SET_ATTACHPOINTS_OFFSET))(this, value);
	}

	::RPG::GameCore::LittleGameEntityConfig* get_Config()
	{
		return ((::RPG::GameCore::LittleGameEntityConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99D526797741C2F2_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::GameCore::LittleGameEntityConfig* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_1_99D526797741C2F2_SET_CONFIG_OFFSET))(this, value);
	}
};
