#ifdef __CCE_KT_TEST__
#define __aicore__ 
#else
#define __aicore__ [aicore]
#endif

extern "C" inline __aicore__ void cube_random_buff_kernel0() {
set_vector_mask((uint64_t)-1, (uint64_t)-1);
set_atomic_none();
__ca__   uint8_t* dst_l0a = (__ca__  uint8_t *)get_imm(0);
  __cb__   uint8_t* dst_l0b = (__cb__  uint8_t *)get_imm(0);
  __cc__   uint8_t* dst_l0c = (__cc__  uint8_t *)get_imm(0);
     half reg_buf7[1] = {0};
     int8_t reg_buf8[1] = {0};
  __ubuf__   uint8_t* src_ub = (__ubuf__  uint8_t *)get_imm(0);
  __cbuf__   uint8_t* dst_l1 = (__cbuf__  uint8_t *)get_imm(0);
  // "aicore arch: Ascend910"
  set_l0_set_value((half)0.000000e+00f);
  set_l0a_2d(((__ca__ half *)dst_l0a), (int64_t)128);
  set_l0b_2d(((__cb__ half *)dst_l0b), (int64_t)128);
  set_flag(PIPE_MTE1, PIPE_M, EVENT_ID0);
  wait_flag(PIPE_MTE1, PIPE_M, EVENT_ID0);
  for (int32_t i = 0; i < 2; ++i) {
    mad(((__cc__ half *)dst_l0c + (i * 256)), ((__ca__ half *)dst_l0a), ((__cb__ half *)dst_l0b), 256, 128, 256, 1);
  }
  reg_buf7[0] = (half)-3.444128e-01f;
  reg_buf8[0] = (int8_t)1;
  set_vector_mask(0x0, 0xffff);
  for (int32_t j = 0; j < 8; ++j) {
    vadds(((__ubuf__ half *)src_ub + ((j * 16384) + (((int32_t)reg_buf8[0]) * 16))), ((__ubuf__ half *)src_ub + ((j * 16384) + (((int32_t)reg_buf8[0]) * 16))), reg_buf7[0], 96, 1, 1, 8, 8);
  }
  set_flag(PIPE_V, PIPE_MTE3, EVENT_ID0);
  wait_flag(PIPE_V, PIPE_MTE3, EVENT_ID0);
  for (int32_t k = 0; k < 4; ++k) {
    copy_ubuf_to_cbuf(((__cbuf__ half *)dst_l1 + ((k * 131072) + (((int32_t)reg_buf8[0]) * 16))), ((__ubuf__ half *)src_ub + (((int32_t)reg_buf8[0]) * 16)), 0, 800, 1, 8, 8);
  }
  pipe_barrier(PIPE_ALL);
  return;
  pipe_barrier(PIPE_ALL);

}

