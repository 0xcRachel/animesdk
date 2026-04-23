#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class AkAudioListener;
class AkSpatialAudioListener_SpatialAudioListenerList;

#define AKSPATIALAUDIOLISTENER_AWAKE_OFFSET UNITYSDK_OFFSET(0x190D9B70)
#define AKSPATIALAUDIOLISTENER_GET_SPATIALAUDIOLISTENERS_OFFSET UNITYSDK_OFFSET(0x190D9B40)
#define AKSPATIALAUDIOLISTENER_GET_THESPATIALAUDIOLISTENER_OFFSET UNITYSDK_OFFSET(0x190D9960)
#define AKSPATIALAUDIOLISTENER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x190D9D50)
#define AKSPATIALAUDIOLISTENER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x190D9C20)
#define AKSPATIALAUDIOLISTENER__CCTOR_OFFSET UNITYSDK_OFFSET(0x190D9EA0)
#define AKSPATIALAUDIOLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x190D9E90)

inline static constexpr unsigned int AkSpatialAudioListener_TypeDefinitionIndex = 40508;

class AkSpatialAudioListener : public ::UnityEngine::MonoBehaviour
{
public:
	static ::AkSpatialAudioListener** StaticGet_s_SpatialAudioListener()
	{
		return (::AkSpatialAudioListener**)Il2CppClass::FromTypeDefinitionIndex(AkSpatialAudioListener_TypeDefinitionIndex)->GetStaticField(0x57850);
	}
	static ::AkSpatialAudioListener_SpatialAudioListenerList** StaticGet_spatialAudioListeners()
	{
		return (::AkSpatialAudioListener_SpatialAudioListenerList**)Il2CppClass::FromTypeDefinitionIndex(AkSpatialAudioListener_TypeDefinitionIndex)->GetStaticField(0x57858);
	}
	::AkAudioListener* AkAudioListener; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSPATIALAUDIOLISTENER__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKSPATIALAUDIOLISTENER__CCTOR_OFFSET))();
	}

	static ::AkAudioListener* get_TheSpatialAudioListener()
	{
		return ((::AkAudioListener*(*)())((::PBYTE)hIl2Cpp + AKSPATIALAUDIOLISTENER_GET_THESPATIALAUDIOLISTENER_OFFSET))();
	}

	static ::AkSpatialAudioListener_SpatialAudioListenerList* get_SpatialAudioListeners()
	{
		return ((::AkSpatialAudioListener_SpatialAudioListenerList*(*)())((::PBYTE)hIl2Cpp + AKSPATIALAUDIOLISTENER_GET_SPATIALAUDIOLISTENERS_OFFSET))();
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSPATIALAUDIOLISTENER_AWAKE_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSPATIALAUDIOLISTENER_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSPATIALAUDIOLISTENER_ONDISABLE_OFFSET))(this);
	}
};
