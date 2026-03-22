#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AkTransform;

#define AKDIFFRACTIONPATHINFO_CLONE_OFFSET UNITYSDK_OFFSET(0x183959C0)
#define AKDIFFRACTIONPATHINFO_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x18394C60)
#define AKDIFFRACTIONPATHINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18394B70)
#define AKDIFFRACTIONPATHINFO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18394BF0)
#define AKDIFFRACTIONPATHINFO_GETANGLES_OFFSET UNITYSDK_OFFSET(0x18395780)
#define AKDIFFRACTIONPATHINFO_GETCPTR_OFFSET UNITYSDK_OFFSET(0x18394A60)
#define AKDIFFRACTIONPATHINFO_GETNODES_OFFSET UNITYSDK_OFFSET(0x183956A0)
#define AKDIFFRACTIONPATHINFO_GETPORTALS_OFFSET UNITYSDK_OFFSET(0x18395840)
#define AKDIFFRACTIONPATHINFO_GETROOMS_OFFSET UNITYSDK_OFFSET(0x18395900)
#define AKDIFFRACTIONPATHINFO_GETSIZEOF_OFFSET UNITYSDK_OFFSET(0x183955F0)
#define AKDIFFRACTIONPATHINFO_GET_DIFFRACTION_OFFSET UNITYSDK_OFFSET(0x18395260)
#define AKDIFFRACTIONPATHINFO_GET_NODECOUNT_OFFSET UNITYSDK_OFFSET(0x183950F0)
#define AKDIFFRACTIONPATHINFO_GET_OBSTRUCTIONVALUE_OFFSET UNITYSDK_OFFSET(0x18395540)
#define AKDIFFRACTIONPATHINFO_GET_TOTLENGTH_OFFSET UNITYSDK_OFFSET(0x183953D0)
#define AKDIFFRACTIONPATHINFO_GET_VIRTUALPOS_OFFSET UNITYSDK_OFFSET(0x18394F20)
#define AKDIFFRACTIONPATHINFO_SETCPTR_OFFSET UNITYSDK_OFFSET(0x18394AB0)
#define AKDIFFRACTIONPATHINFO_SET_DIFFRACTION_OFFSET UNITYSDK_OFFSET(0x183951A0)
#define AKDIFFRACTIONPATHINFO_SET_NODECOUNT_OFFSET UNITYSDK_OFFSET(0x18395030)
#define AKDIFFRACTIONPATHINFO_SET_OBSTRUCTIONVALUE_OFFSET UNITYSDK_OFFSET(0x18395480)
#define AKDIFFRACTIONPATHINFO_SET_TOTLENGTH_OFFSET UNITYSDK_OFFSET(0x18395310)
#define AKDIFFRACTIONPATHINFO_SET_VIRTUALPOS_OFFSET UNITYSDK_OFFSET(0x18394E00)
#define AKDIFFRACTIONPATHINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18395AE0)
#define AKDIFFRACTIONPATHINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18394A50)

inline static constexpr unsigned int AkDiffractionPathInfo_TypeDefinitionIndex = 33482;

class AkDiffractionPathInfo : public ::System::Object
{
public:
	// static const ::System::UInt32 kMaxNodes = 0x8; // 0x0
	::System::IntPtr swigCPtr; // 0x10
	::System::Boolean swigCMemOwn; // 0x18

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkDiffractionPathInfo* obj)
	{
		return ((::System::IntPtr(*)(::AkDiffractionPathInfo*))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO_DISPOSE_1_OFFSET))(this, disposing);
	}

	::System::Void set_virtualPos(::AkTransform* value)
	{
		return ((::System::Void(*)(::PVOID, ::AkTransform*))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO_SET_VIRTUALPOS_OFFSET))(this, value);
	}

	::AkTransform* get_virtualPos()
	{
		return ((::AkTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO_GET_VIRTUALPOS_OFFSET))(this);
	}

	::System::Void set_nodeCount(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO_SET_NODECOUNT_OFFSET))(this, value);
	}

	::System::UInt32 get_nodeCount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO_GET_NODECOUNT_OFFSET))(this);
	}

	::System::Void set_diffraction(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO_SET_DIFFRACTION_OFFSET))(this, value);
	}

	::System::Single get_diffraction()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO_GET_DIFFRACTION_OFFSET))(this);
	}

	::System::Void set_totLength(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO_SET_TOTLENGTH_OFFSET))(this, value);
	}

	::System::Single get_totLength()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO_GET_TOTLENGTH_OFFSET))(this);
	}

	::System::Void set_obstructionValue(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO_SET_OBSTRUCTIONVALUE_OFFSET))(this, value);
	}

	::System::Single get_obstructionValue()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO_GET_OBSTRUCTIONVALUE_OFFSET))(this);
	}

	static ::System::Int32 GetSizeOf()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO_GETSIZEOF_OFFSET))();
	}

	::UnityEngine::Vector3 GetNodes(::System::UInt32 idx)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO_GETNODES_OFFSET))(this, idx);
	}

	::System::Single GetAngles(::System::UInt32 idx)
	{
		return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO_GETANGLES_OFFSET))(this, idx);
	}

	::System::UInt64 GetPortals(::System::UInt32 idx)
	{
		return ((::System::UInt64(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO_GETPORTALS_OFFSET))(this, idx);
	}

	::System::UInt64 GetRooms(::System::UInt32 idx)
	{
		return ((::System::UInt64(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO_GETROOMS_OFFSET))(this, idx);
	}

	::System::Void Clone(::AkDiffractionPathInfo* other)
	{
		return ((::System::Void(*)(::PVOID, ::AkDiffractionPathInfo*))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO_CLONE_OFFSET))(this, other);
	}
};
