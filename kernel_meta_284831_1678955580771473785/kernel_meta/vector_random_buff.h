#ifdef __CCE_KT_TEST__
#define __aicore__ 
#else
#define __aicore__ [aicore]
#endif

extern "C" inline __aicore__ void vector_random_buff_kernel0() {
set_vector_mask((uint64_t)-1, (uint64_t)-1);
set_atomic_none();
   half reg_buf5[1] = {0};
     int8_t reg_buf6[1] = {0};
  __ubuf__   uint8_t* src_ub = (__ubuf__  uint8_t *)get_imm(0);
  // "aicore arch: Ascend910"
  reg_buf5[0] = (half)-4.321524e+00f;
  reg_buf6[0] = (int8_t)6;
  set_vector_mask(0x0, 0xffff);
  for (int32_t i = 0; i < 8; ++i) {
    vadds(((__ubuf__ half *)src_ub + ((i * 16384) + (((int32_t)reg_buf6[0]) * 16))), ((__ubuf__ half *)src_ub + ((i * 16384) + (((int32_t)reg_buf6[0]) * 16))), reg_buf5[0], 96, 1, 1, 8, 8);
  }
  pipe_barrier(PIPE_ALL);
  return;
  pipe_barrier(PIPE_ALL);

}

