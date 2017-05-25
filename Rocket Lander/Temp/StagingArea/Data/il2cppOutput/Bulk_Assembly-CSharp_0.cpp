#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214.h"
#include "AssemblyU2DCSharp_Controller1937198888.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Rigidbody2D502193897.h"
#include "mscorlib_System_Single2076509932.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "UnityEngine_UnityEngine_Component3819376471.h"
#include "AssemblyU2DCSharp_LandingSpace3150234273.h"
#include "UnityEngine_UnityEngine_Collider2D646061738.h"
#include "AssemblyU2DCSharp_Rocket2293219652.h"
#include "mscorlib_System_Int322071877448.h"
#include "UnityEngine_UnityEngine_SceneManagement_Scene1684909666.h"
#include "UnityEngine_UnityEngine_SceneManagement_LoadSceneM2981886439.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UI_UnityEngine_UI_Text356221433.h"

// Controller
struct Controller_t1937198888;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// System.Object
struct Il2CppObject;
// UnityEngine.Component
struct Component_t3819376471;
// LandingSpace
struct LandingSpace_t3150234273;
// UnityEngine.Collider2D
struct Collider2D_t646061738;
// Rocket
struct Rocket_t2293219652;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
extern Il2CppClass* Debug_t1368543263_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1396980308;
extern const uint32_t Controller_TurnRight_m1550194088_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral194734881;
extern const uint32_t Controller_TurnLeft_m295051193_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral1048444841;
extern const uint32_t Controller_Power_m4293638150_MetadataUsageId;
extern const MethodInfo* Component_GetComponent_TisRigidbody2D_t502193897_m3702757851_MethodInfo_var;
extern const uint32_t Controller_Start_m165415507_MetadataUsageId;
extern Il2CppClass* Rocket_t2293219652_il2cpp_TypeInfo_var;
extern const uint32_t LandingSpace_OnTriggerEnter2D_m2822951594_MetadataUsageId;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral666830368;
extern const uint32_t Rocket_Start_m1422950723_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral339800032;
extern const uint32_t Rocket_Splash_m1803331880_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral1833427585;
extern Il2CppCodeGenString* _stringLiteral535891108;
extern const uint32_t Rocket_Die_m949898511_MetadataUsageId;
extern Il2CppClass* Int32_t2071877448_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3416085093;
extern const uint32_t Rocket_Land_m490615774_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral2432787223;
extern const uint32_t Rocket_OnTriggerEnter2D_m1042706747_MetadataUsageId;
extern Il2CppClass* ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1755609506;
extern Il2CppCodeGenString* _stringLiteral372029315;
extern Il2CppCodeGenString* _stringLiteral3129940296;
extern const uint32_t Rocket_UpdateUI_m128459336_MetadataUsageId;
extern const uint32_t Rocket_Update_m4068664742_MetadataUsageId;

// System.Object[]
struct ObjectU5BU5D_t3614634134  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Il2CppObject * m_Items[1];

public:
	inline Il2CppObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Il2CppObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m4109961936_gshared (Component_t3819376471 * __this, const MethodInfo* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m2464341955 (MonoBehaviour_t1158329972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_position()
extern "C"  Vector2_t2243707579  Rigidbody2D_get_position_m1357256809 (Rigidbody2D_t502193897 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C"  void Vector2__ctor_m3067419446 (Vector2_t2243707579 * __this, float p0, float p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t2243707579  Vector2_op_Addition_m1389598521 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  p0, Vector2_t2243707579  p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::MovePosition(UnityEngine.Vector2)
extern "C"  void Rigidbody2D_MovePosition_m2716592358 (Rigidbody2D_t502193897 * __this, Vector2_t2243707579  p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C"  void Debug_Log_m920475918 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t2243707579  Vector2_op_Subtraction_m1984215297 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  p0, Vector2_t2243707579  p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
#define Component_GetComponent_TisRigidbody2D_t502193897_m3702757851(__this, method) ((  Rigidbody2D_t502193897 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
// System.Void Controller::TurnRight()
extern "C"  void Controller_TurnRight_m1550194088 (Controller_t1937198888 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Controller::TurnLeft()
extern "C"  void Controller_TurnLeft_m295051193 (Controller_t1937198888 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Controller::Power()
extern "C"  void Controller_Power_m4293638150 (Controller_t1937198888 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Application::get_dataPath()
extern "C"  String_t* Application_get_dataPath_m371940330 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m2596409543 (Il2CppObject * __this /* static, unused */, String_t* p0, String_t* p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.File::ReadAllText(System.String)
extern "C"  String_t* File_ReadAllText_m1018286608 (Il2CppObject * __this /* static, unused */, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Rocket::Load(System.String)
extern "C"  void Rocket_Load_m3625922795 (Rocket_t2293219652 * __this, String_t* ___savedData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::set_gravityScale(System.Single)
extern "C"  void Rigidbody2D_set_gravityScale_m1426625078 (Rigidbody2D_t502193897 * __this, float p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::set_drag(System.Single)
extern "C"  void Rigidbody2D_set_drag_m1191678372 (Rigidbody2D_t502193897 * __this, float p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::set_angularDrag(System.Single)
extern "C"  void Rigidbody2D_set_angularDrag_m666860450 (Rigidbody2D_t502193897 * __this, float p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Rocket::UpdateUI()
extern "C"  void Rocket_UpdateUI_m128459336 (Rocket_t2293219652 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.JsonUtility::FromJsonOverwrite(System.String,System.Object)
extern "C"  void JsonUtility_FromJsonOverwrite_m1702315784 (Il2CppObject * __this /* static, unused */, String_t* p0, Il2CppObject * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
extern "C"  void MonoBehaviour_Invoke_m666563676 (MonoBehaviour_t1158329972 * __this, String_t* p0, float p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
extern "C"  Scene_t1684909666  SceneManager_GetActiveScene_m2964039490 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
extern "C"  int32_t Scene_get_buildIndex_m3735680091 (Scene_t1684909666 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32,UnityEngine.SceneManagement.LoadSceneMode)
extern "C"  void SceneManager_LoadScene_m592643733 (Il2CppObject * __this /* static, unused */, int32_t p0, int32_t p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object)
extern "C"  String_t* String_Concat_m56707527 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, Il2CppObject * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1756533147 * Component_get_gameObject_m3105766835 (Component_t3819376471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GameObject::get_tag()
extern "C"  String_t* GameObject_get_tag_m1425941094 (GameObject_t1756533147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Inequality(System.String,System.String)
extern "C"  bool String_op_Inequality_m304203149 (Il2CppObject * __this /* static, unused */, String_t* p0, String_t* p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Rocket::Splash()
extern "C"  void Rocket_Splash_m1803331880 (Rocket_t2293219652 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object[])
extern "C"  String_t* String_Concat_m3881798623 (Il2CppObject * __this /* static, unused */, ObjectU5BU5D_t3614634134* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Single::ToString()
extern "C"  String_t* Single_ToString_m1813392066 (float* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Rocket::Land()
extern "C"  void Rocket_Land_m490615774 (Rocket_t2293219652 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Controller::.ctor()
extern "C"  void Controller__ctor_m2477390111 (Controller_t1937198888 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Controller::TurnRight()
extern "C"  void Controller_TurnRight_m1550194088 (Controller_t1937198888 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Controller_TurnRight_m1550194088_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rigidbody2D_t502193897 * L_0 = __this->get_rigidbody2D_2();
		Rigidbody2D_t502193897 * L_1 = __this->get_rigidbody2D_2();
		Vector2_t2243707579  L_2 = Rigidbody2D_get_position_m1357256809(L_1, /*hidden argument*/NULL);
		Vector2_t2243707579  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Vector2__ctor_m3067419446(&L_3, (0.1f), (0.0f), /*hidden argument*/NULL);
		Vector2_t2243707579  L_4 = Vector2_op_Addition_m1389598521(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Rigidbody2D_MovePosition_m2716592358(L_0, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, _stringLiteral1396980308, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Controller::TurnLeft()
extern "C"  void Controller_TurnLeft_m295051193 (Controller_t1937198888 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Controller_TurnLeft_m295051193_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rigidbody2D_t502193897 * L_0 = __this->get_rigidbody2D_2();
		Rigidbody2D_t502193897 * L_1 = __this->get_rigidbody2D_2();
		Vector2_t2243707579  L_2 = Rigidbody2D_get_position_m1357256809(L_1, /*hidden argument*/NULL);
		Vector2_t2243707579  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Vector2__ctor_m3067419446(&L_3, (0.1f), (0.0f), /*hidden argument*/NULL);
		Vector2_t2243707579  L_4 = Vector2_op_Subtraction_m1984215297(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Rigidbody2D_MovePosition_m2716592358(L_0, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, _stringLiteral194734881, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Controller::Power()
extern "C"  void Controller_Power_m4293638150 (Controller_t1937198888 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Controller_Power_m4293638150_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rigidbody2D_t502193897 * L_0 = __this->get_rigidbody2D_2();
		Rigidbody2D_t502193897 * L_1 = __this->get_rigidbody2D_2();
		Vector2_t2243707579  L_2 = Rigidbody2D_get_position_m1357256809(L_1, /*hidden argument*/NULL);
		Vector2_t2243707579  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Vector2__ctor_m3067419446(&L_3, (0.0f), (0.01f), /*hidden argument*/NULL);
		Vector2_t2243707579  L_4 = Vector2_op_Addition_m1389598521(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Rigidbody2D_MovePosition_m2716592358(L_0, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, _stringLiteral1048444841, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Controller::setRIsPress()
extern "C"  void Controller_setRIsPress_m1134530786 (Controller_t1937198888 * __this, const MethodInfo* method)
{
	{
		bool L_0 = __this->get_rIsPress_3();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		__this->set_rIsPress_3((bool)0);
		goto IL_001e;
	}

IL_0017:
	{
		__this->set_rIsPress_3((bool)1);
	}

IL_001e:
	{
		return;
	}
}
// System.Void Controller::setLIsPress()
extern "C"  void Controller_setLIsPress_m4064133548 (Controller_t1937198888 * __this, const MethodInfo* method)
{
	{
		bool L_0 = __this->get_lIsPress_4();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		__this->set_lIsPress_4((bool)0);
		goto IL_001e;
	}

IL_0017:
	{
		__this->set_lIsPress_4((bool)1);
	}

IL_001e:
	{
		return;
	}
}
// System.Void Controller::setPIsPress()
extern "C"  void Controller_setPIsPress_m3289999896 (Controller_t1937198888 * __this, const MethodInfo* method)
{
	{
		bool L_0 = __this->get_pIsPress_5();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		__this->set_pIsPress_5((bool)0);
		goto IL_001e;
	}

IL_0017:
	{
		__this->set_pIsPress_5((bool)1);
	}

IL_001e:
	{
		return;
	}
}
// System.Void Controller::Start()
extern "C"  void Controller_Start_m165415507 (Controller_t1937198888 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Controller_Start_m165415507_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rigidbody2D_t502193897 * L_0 = Component_GetComponent_TisRigidbody2D_t502193897_m3702757851(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t502193897_m3702757851_MethodInfo_var);
		__this->set_rigidbody2D_2(L_0);
		return;
	}
}
// System.Void Controller::Update()
extern "C"  void Controller_Update_m2428618086 (Controller_t1937198888 * __this, const MethodInfo* method)
{
	{
		bool L_0 = __this->get_rIsPress_3();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		Controller_TurnRight_m1550194088(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		bool L_1 = __this->get_lIsPress_4();
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		Controller_TurnLeft_m295051193(__this, /*hidden argument*/NULL);
	}

IL_0022:
	{
		bool L_2 = __this->get_pIsPress_5();
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		Controller_Power_m4293638150(__this, /*hidden argument*/NULL);
	}

IL_0033:
	{
		return;
	}
}
// System.Void LandingSpace::.ctor()
extern "C"  void LandingSpace__ctor_m456712106 (LandingSpace_t3150234273 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LandingSpace::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void LandingSpace_OnTriggerEnter2D_m2822951594 (LandingSpace_t3150234273 * __this, Collider2D_t646061738 * ___collision0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LandingSpace_OnTriggerEnter2D_m2822951594_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Rocket_t2293219652_il2cpp_TypeInfo_var);
		((Rocket_t2293219652_StaticFields*)Rocket_t2293219652_il2cpp_TypeInfo_var->static_fields)->set_isLanding_14((bool)1);
		return;
	}
}
// System.Void LandingSpace::FixedUpdate()
extern "C"  void LandingSpace_FixedUpdate_m2024570615 (LandingSpace_t3150234273 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Rocket::.ctor()
extern "C"  void Rocket__ctor_m295151631 (Rocket_t2293219652 * __this, const MethodInfo* method)
{
	{
		__this->set_splashOnce_15((bool)1);
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Rocket::Start()
extern "C"  void Rocket_Start_m1422950723 (Rocket_t2293219652 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Rocket_Start_m1422950723_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rigidbody2D_t502193897 * L_0 = Component_GetComponent_TisRigidbody2D_t502193897_m3702757851(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t502193897_m3702757851_MethodInfo_var);
		__this->set_rigidbody2D_17(L_0);
		String_t* L_1 = Application_get_dataPath_m371940330(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m2596409543(NULL /*static, unused*/, L_1, _stringLiteral666830368, /*hidden argument*/NULL);
		String_t* L_3 = File_ReadAllText_m1018286608(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		__this->set_jsonString_12(L_3);
		String_t* L_4 = __this->get_jsonString_12();
		Rocket_Load_m3625922795(__this, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Rocket_t2293219652_il2cpp_TypeInfo_var);
		((Rocket_t2293219652_StaticFields*)Rocket_t2293219652_il2cpp_TypeInfo_var->static_fields)->set_isWasted_13((bool)0);
		__this->set_splashOnce_15((bool)1);
		((Rocket_t2293219652_StaticFields*)Rocket_t2293219652_il2cpp_TypeInfo_var->static_fields)->set_isLanding_14((bool)0);
		Rigidbody2D_t502193897 * L_5 = __this->get_rigidbody2D_17();
		float L_6 = __this->get_gravity_2();
		Rigidbody2D_set_gravityScale_m1426625078(L_5, L_6, /*hidden argument*/NULL);
		Rigidbody2D_t502193897 * L_7 = __this->get_rigidbody2D_17();
		float L_8 = __this->get_thrustForce_4();
		Rigidbody2D_set_drag_m1191678372(L_7, L_8, /*hidden argument*/NULL);
		Rigidbody2D_t502193897 * L_9 = __this->get_rigidbody2D_17();
		float L_10 = __this->get_turningForce_5();
		Rigidbody2D_set_angularDrag_m666860450(L_9, L_10, /*hidden argument*/NULL);
		Rocket_UpdateUI_m128459336(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Rocket::Load(System.String)
extern "C"  void Rocket_Load_m3625922795 (Rocket_t2293219652 * __this, String_t* ___savedData0, const MethodInfo* method)
{
	{
		String_t* L_0 = ___savedData0;
		JsonUtility_FromJsonOverwrite_m1702315784(NULL /*static, unused*/, L_0, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Rocket::Splash()
extern "C"  void Rocket_Splash_m1803331880 (Rocket_t2293219652 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Rocket_Splash_m1803331880_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_splashOnce_15();
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Rocket_t2293219652_il2cpp_TypeInfo_var);
		((Rocket_t2293219652_StaticFields*)Rocket_t2293219652_il2cpp_TypeInfo_var->static_fields)->set_isLanding_14((bool)0);
		__this->set_splashOnce_15((bool)0);
		MonoBehaviour_Invoke_m666563676(__this, _stringLiteral339800032, (0.2f), /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}
}
// System.Void Rocket::Die()
extern "C"  void Rocket_Die_m949898511 (Rocket_t2293219652 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Rocket_Die_m949898511_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Rocket_t2293219652_il2cpp_TypeInfo_var);
		((Rocket_t2293219652_StaticFields*)Rocket_t2293219652_il2cpp_TypeInfo_var->static_fields)->set_isWasted_13((bool)1);
		int32_t L_0 = ((Rocket_t2293219652_StaticFields*)Rocket_t2293219652_il2cpp_TypeInfo_var->static_fields)->get_fails_9();
		((Rocket_t2293219652_StaticFields*)Rocket_t2293219652_il2cpp_TypeInfo_var->static_fields)->set_fails_9(((int32_t)((int32_t)L_0+(int32_t)1)));
		MonoBehaviour_Invoke_m666563676(__this, _stringLiteral1833427585, (1.5f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, _stringLiteral535891108, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Rocket::RestartLevel()
extern "C"  void Rocket_RestartLevel_m3499018204 (Rocket_t2293219652 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	Scene_t1684909666  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Scene_t1684909666  L_0 = SceneManager_GetActiveScene_m2964039490(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_0;
		int32_t L_1 = Scene_get_buildIndex_m3735680091((&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		SceneManager_LoadScene_m592643733(NULL /*static, unused*/, L_2, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Rocket::Land()
extern "C"  void Rocket_Land_m490615774 (Rocket_t2293219652 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Rocket_Land_m490615774_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Rocket_t2293219652_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Rocket_t2293219652_StaticFields*)Rocket_t2293219652_il2cpp_TypeInfo_var->static_fields)->get_success_8();
		((Rocket_t2293219652_StaticFields*)Rocket_t2293219652_il2cpp_TypeInfo_var->static_fields)->set_success_8(((int32_t)((int32_t)L_0+(int32_t)1)));
		int32_t L_1 = ((Rocket_t2293219652_StaticFields*)Rocket_t2293219652_il2cpp_TypeInfo_var->static_fields)->get_success_8();
		int32_t L_2 = L_1;
		Il2CppObject * L_3 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m56707527(NULL /*static, unused*/, _stringLiteral3416085093, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		((Rocket_t2293219652_StaticFields*)Rocket_t2293219652_il2cpp_TypeInfo_var->static_fields)->set_isLanding_14((bool)0);
		MonoBehaviour_Invoke_m666563676(__this, _stringLiteral1833427585, (0.5f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Rocket::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void Rocket_OnTriggerEnter2D_m1042706747 (Rocket_t2293219652 * __this, Collider2D_t646061738 * ___collision0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Rocket_OnTriggerEnter2D_m1042706747_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider2D_t646061738 * L_0 = ___collision0;
		GameObject_t1756533147 * L_1 = Component_get_gameObject_m3105766835(L_0, /*hidden argument*/NULL);
		String_t* L_2 = GameObject_get_tag_m1425941094(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Inequality_m304203149(NULL /*static, unused*/, L_2, _stringLiteral2432787223, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		Rocket_Splash_m1803331880(__this, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void Rocket::UpdateUI()
extern "C"  void Rocket_UpdateUI_m128459336 (Rocket_t2293219652 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Rocket_UpdateUI_m128459336_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_scoreText_10();
		ObjectU5BU5D_t3614634134* L_1 = ((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)4));
		ArrayElementTypeCheck (L_1, _stringLiteral1755609506);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)_stringLiteral1755609506);
		ObjectU5BU5D_t3614634134* L_2 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Rocket_t2293219652_il2cpp_TypeInfo_var);
		int32_t L_3 = ((Rocket_t2293219652_StaticFields*)Rocket_t2293219652_il2cpp_TypeInfo_var->static_fields)->get_success_8();
		int32_t L_4 = L_3;
		Il2CppObject * L_5 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_4);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Il2CppObject *)L_5);
		ObjectU5BU5D_t3614634134* L_6 = L_2;
		ArrayElementTypeCheck (L_6, _stringLiteral372029315);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (Il2CppObject *)_stringLiteral372029315);
		ObjectU5BU5D_t3614634134* L_7 = L_6;
		int32_t L_8 = ((Rocket_t2293219652_StaticFields*)Rocket_t2293219652_il2cpp_TypeInfo_var->static_fields)->get_success_8();
		int32_t L_9 = ((Rocket_t2293219652_StaticFields*)Rocket_t2293219652_il2cpp_TypeInfo_var->static_fields)->get_fails_9();
		int32_t L_10 = ((int32_t)((int32_t)L_8+(int32_t)L_9));
		Il2CppObject * L_11 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_10);
		ArrayElementTypeCheck (L_7, L_11);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (Il2CppObject *)L_11);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Concat_m3881798623(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_12);
		Text_t356221433 * L_13 = __this->get_fuelText_11();
		float* L_14 = __this->get_address_of_fuel_6();
		String_t* L_15 = Single_ToString_m1813392066(L_14, /*hidden argument*/NULL);
		String_t* L_16 = String_Concat_m2596409543(NULL /*static, unused*/, _stringLiteral3129940296, L_15, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, L_16);
		return;
	}
}
// System.Void Rocket::Update()
extern "C"  void Rocket_Update_m4068664742 (Rocket_t2293219652 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Rocket_Update_m4068664742_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rocket_UpdateUI_m128459336(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Rocket_t2293219652_il2cpp_TypeInfo_var);
		bool L_0 = ((Rocket_t2293219652_StaticFields*)Rocket_t2293219652_il2cpp_TypeInfo_var->static_fields)->get_isLanding_14();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		Rocket_Land_m490615774(__this, /*hidden argument*/NULL);
		goto IL_002b;
	}

IL_001b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Rocket_t2293219652_il2cpp_TypeInfo_var);
		bool L_1 = ((Rocket_t2293219652_StaticFields*)Rocket_t2293219652_il2cpp_TypeInfo_var->static_fields)->get_isWasted_13();
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		Rocket_Splash_m1803331880(__this, /*hidden argument*/NULL);
	}

IL_002b:
	{
		return;
	}
}
// System.Void Rocket::.cctor()
extern "C"  void Rocket__cctor_m1727981374 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
