#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5A49DBC4032E6905_Class_1_170683700F7C4D7C.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_0_16E4307DCC419505_660;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5A49DBC4032E6905_CLASS_2_06E19BEE53549704_ONDRAG_OFFSET UNITYSDK_OFFSET(0xD86A340)
#define CLASS_1_5A49DBC4032E6905_CLASS_2_06E19BEE53549704_ONEXTENDEND_OFFSET UNITYSDK_OFFSET(0xD86A420)
#define CLASS_1_5A49DBC4032E6905_CLASS_2_06E19BEE53549704_ONEXTEND_OFFSET UNITYSDK_OFFSET(0xD86A3C0)
#define CLASS_1_5A49DBC4032E6905_CLASS_2_06E19BEE53549704_ONSHORTENEND_OFFSET UNITYSDK_OFFSET(0xD86A4E0)
#define CLASS_1_5A49DBC4032E6905_CLASS_2_06E19BEE53549704_ONSHORTEN_OFFSET UNITYSDK_OFFSET(0xD86A470)
#define CLASS_1_5A49DBC4032E6905_CLASS_2_06E19BEE53549704__CTOR_OFFSET UNITYSDK_OFFSET(0xD869F00)
#define CLASS_1_5A49DBC4032E6905_CLASS_2_06E19BEE53549704___IFIXBASEPROXY_ONDRAG_OFFSET UNITYSDK_OFFSET(0xD86A530)
#define CLASS_1_5A49DBC4032E6905_CLASS_2_06E19BEE53549704___IFIXBASEPROXY_ONEXTENDEND_OFFSET UNITYSDK_OFFSET(0xD86A690)
#define CLASS_1_5A49DBC4032E6905_CLASS_2_06E19BEE53549704___IFIXBASEPROXY_ONEXTEND_OFFSET UNITYSDK_OFFSET(0xD86A5F0)
#define CLASS_1_5A49DBC4032E6905_CLASS_2_06E19BEE53549704___IFIXBASEPROXY_ONSHORTENEND_OFFSET UNITYSDK_OFFSET(0xD86A7B0)
#define CLASS_1_5A49DBC4032E6905_CLASS_2_06E19BEE53549704___IFIXBASEPROXY_ONSHORTEN_OFFSET UNITYSDK_OFFSET(0xD86A710)

inline static constexpr unsigned int Class_1_5A49DBC4032E6905_Class_2_06E19BEE53549704_TypeDefinitionIndex = 58346;

class Class_1_5A49DBC4032E6905_Class_2_06E19BEE53549704 : public ::Class_1_5A49DBC4032E6905_Class_1_170683700F7C4D7C
{
public:
	::System::Void _ctor(::Class_0_16E4307DCC419505_660* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_660*))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_06E19BEE53549704__CTOR_OFFSET))(this, a1);
	}

	::System::Void OnDrag(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_06E19BEE53549704_ONDRAG_OFFSET))(this, a1, a2);
	}

	::System::Void OnExtend(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_06E19BEE53549704_ONEXTEND_OFFSET))(this, a1);
	}

	::System::Void OnExtendEnd()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_06E19BEE53549704_ONEXTENDEND_OFFSET))(this);
	}

	::System::Void OnShorten(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_06E19BEE53549704_ONSHORTEN_OFFSET))(this, a1);
	}

	::System::Void OnShortenEnd()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_06E19BEE53549704_ONSHORTENEND_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnDrag(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_06E19BEE53549704___IFIXBASEPROXY_ONDRAG_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_OnExtend(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_06E19BEE53549704___IFIXBASEPROXY_ONEXTEND_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnExtendEnd()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_06E19BEE53549704___IFIXBASEPROXY_ONEXTENDEND_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnShorten(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_06E19BEE53549704___IFIXBASEPROXY_ONSHORTEN_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnShortenEnd()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_06E19BEE53549704___IFIXBASEPROXY_ONSHORTENEND_OFFSET))(this);
	}
};
