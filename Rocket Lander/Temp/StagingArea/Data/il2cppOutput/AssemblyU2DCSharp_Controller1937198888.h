#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Controller
struct  Controller_t1937198888  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Rigidbody2D Controller::rigidbody2D
	Rigidbody2D_t502193897 * ___rigidbody2D_2;
	// System.Boolean Controller::rIsPress
	bool ___rIsPress_3;
	// System.Boolean Controller::lIsPress
	bool ___lIsPress_4;
	// System.Boolean Controller::pIsPress
	bool ___pIsPress_5;

public:
	inline static int32_t get_offset_of_rigidbody2D_2() { return static_cast<int32_t>(offsetof(Controller_t1937198888, ___rigidbody2D_2)); }
	inline Rigidbody2D_t502193897 * get_rigidbody2D_2() const { return ___rigidbody2D_2; }
	inline Rigidbody2D_t502193897 ** get_address_of_rigidbody2D_2() { return &___rigidbody2D_2; }
	inline void set_rigidbody2D_2(Rigidbody2D_t502193897 * value)
	{
		___rigidbody2D_2 = value;
		Il2CppCodeGenWriteBarrier(&___rigidbody2D_2, value);
	}

	inline static int32_t get_offset_of_rIsPress_3() { return static_cast<int32_t>(offsetof(Controller_t1937198888, ___rIsPress_3)); }
	inline bool get_rIsPress_3() const { return ___rIsPress_3; }
	inline bool* get_address_of_rIsPress_3() { return &___rIsPress_3; }
	inline void set_rIsPress_3(bool value)
	{
		___rIsPress_3 = value;
	}

	inline static int32_t get_offset_of_lIsPress_4() { return static_cast<int32_t>(offsetof(Controller_t1937198888, ___lIsPress_4)); }
	inline bool get_lIsPress_4() const { return ___lIsPress_4; }
	inline bool* get_address_of_lIsPress_4() { return &___lIsPress_4; }
	inline void set_lIsPress_4(bool value)
	{
		___lIsPress_4 = value;
	}

	inline static int32_t get_offset_of_pIsPress_5() { return static_cast<int32_t>(offsetof(Controller_t1937198888, ___pIsPress_5)); }
	inline bool get_pIsPress_5() const { return ___pIsPress_5; }
	inline bool* get_address_of_pIsPress_5() { return &___pIsPress_5; }
	inline void set_pIsPress_5(bool value)
	{
		___pIsPress_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
