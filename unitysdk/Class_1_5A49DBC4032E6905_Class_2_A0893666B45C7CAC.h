#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5A49DBC4032E6905_Class_1_170683700F7C4D7C.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_660;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5A49DBC4032E6905_CLASS_2_A0893666B45C7CAC_METHOD_2_1A0AF1F951F72EA4_OFFSET UNITYSDK_OFFSET(0xD86ABC0)
#define CLASS_1_5A49DBC4032E6905_CLASS_2_A0893666B45C7CAC_METHOD_2_2A7065F96AB1874F_OFFSET UNITYSDK_OFFSET(0xD86B820)
#define CLASS_1_5A49DBC4032E6905_CLASS_2_A0893666B45C7CAC_METHOD_2_9FCEEE4E5083D9B3_OFFSET UNITYSDK_OFFSET(0xD86B2B0)
#define CLASS_1_5A49DBC4032E6905_CLASS_2_A0893666B45C7CAC_ONDRAG_OFFSET UNITYSDK_OFFSET(0xD86A830)
#define CLASS_1_5A49DBC4032E6905_CLASS_2_A0893666B45C7CAC_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0xD86C110)
#define CLASS_1_5A49DBC4032E6905_CLASS_2_A0893666B45C7CAC_ONEXTENDEND_OFFSET UNITYSDK_OFFSET(0xD86B5F0)
#define CLASS_1_5A49DBC4032E6905_CLASS_2_A0893666B45C7CAC_ONEXTEND_OFFSET UNITYSDK_OFFSET(0xD86B3B0)
#define CLASS_1_5A49DBC4032E6905_CLASS_2_A0893666B45C7CAC_ONSHORTENEND_OFFSET UNITYSDK_OFFSET(0xD86C0D0)
#define CLASS_1_5A49DBC4032E6905_CLASS_2_A0893666B45C7CAC_ONSHORTEN_OFFSET UNITYSDK_OFFSET(0xD86BF10)
#define CLASS_1_5A49DBC4032E6905_CLASS_2_A0893666B45C7CAC__CTOR_OFFSET UNITYSDK_OFFSET(0xD869F10)
#define CLASS_1_5A49DBC4032E6905_CLASS_2_A0893666B45C7CAC___IFIXBASEPROXY_ONDRAG_OFFSET UNITYSDK_OFFSET(0xD86C430)
#define CLASS_1_5A49DBC4032E6905_CLASS_2_A0893666B45C7CAC___IFIXBASEPROXY_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0xD86C5B0)
#define CLASS_1_5A49DBC4032E6905_CLASS_2_A0893666B45C7CAC___IFIXBASEPROXY_ONEXTENDEND_OFFSET UNITYSDK_OFFSET(0xD86C4E0)
#define CLASS_1_5A49DBC4032E6905_CLASS_2_A0893666B45C7CAC___IFIXBASEPROXY_ONEXTEND_OFFSET UNITYSDK_OFFSET(0xD86C490)
#define CLASS_1_5A49DBC4032E6905_CLASS_2_A0893666B45C7CAC___IFIXBASEPROXY_ONSHORTENEND_OFFSET UNITYSDK_OFFSET(0xD86C570)
#define CLASS_1_5A49DBC4032E6905_CLASS_2_A0893666B45C7CAC___IFIXBASEPROXY_ONSHORTEN_OFFSET UNITYSDK_OFFSET(0xD86C520)

inline static constexpr unsigned int Class_1_5A49DBC4032E6905_Class_2_A0893666B45C7CAC_TypeDefinitionIndex = 58345;

class Class_1_5A49DBC4032E6905_Class_2_A0893666B45C7CAC : public ::Class_1_5A49DBC4032E6905_Class_1_170683700F7C4D7C
{
public:
	::UnityEngine::Vector2Int Field_2_0; // 0x20

	::System::Void _ctor(::Class_0_16E4307DCC419505_660* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_660*))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_A0893666B45C7CAC__CTOR_OFFSET))(this, a1);
	}

	::System::Void OnDrag(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_A0893666B45C7CAC_ONDRAG_OFFSET))(this, a1, a2);
	}

	::System::Void OnExtend(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_A0893666B45C7CAC_ONEXTEND_OFFSET))(this, a1);
	}

	::System::Void OnExtendEnd()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_A0893666B45C7CAC_ONEXTENDEND_OFFSET))(this);
	}

	::System::Void OnShorten(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_A0893666B45C7CAC_ONSHORTEN_OFFSET))(this, a1);
	}

	::System::Void OnShortenEnd()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_A0893666B45C7CAC_ONSHORTENEND_OFFSET))(this);
	}

	::System::Void OnEndDrag()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_A0893666B45C7CAC_ONENDDRAG_OFFSET))(this);
	}

	::System::Void Method_2_9FCEEE4E5083D9B3(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_A0893666B45C7CAC_METHOD_2_9FCEEE4E5083D9B3_OFFSET))(this, a1);
	}

	::System::Single Method_2_2A7065F96AB1874F(::System::Boolean a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_A0893666B45C7CAC_METHOD_2_2A7065F96AB1874F_OFFSET))(this, a1);
	}

	::System::Single Method_2_1A0AF1F951F72EA4(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_A0893666B45C7CAC_METHOD_2_1A0AF1F951F72EA4_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnDrag(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_A0893666B45C7CAC___IFIXBASEPROXY_ONDRAG_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_OnExtend(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_A0893666B45C7CAC___IFIXBASEPROXY_ONEXTEND_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnExtendEnd()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_A0893666B45C7CAC___IFIXBASEPROXY_ONEXTENDEND_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnShorten(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_A0893666B45C7CAC___IFIXBASEPROXY_ONSHORTEN_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnShortenEnd()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_A0893666B45C7CAC___IFIXBASEPROXY_ONSHORTENEND_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnEndDrag()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_A0893666B45C7CAC___IFIXBASEPROXY_ONENDDRAG_OFFSET))(this);
	}
};
