#ifndef KECCAK_H
#define KEKKAC_H

extern "C" void prepare_keccak512(int thr_id, uint32_t host_pdata[20]);
extern "C" void pre_keccak512(int thr_id, int stream, uint32_t nonce, int throughput);
extern "C" void post_keccak512(int thr_id, int stream, uint32_t nonce, uint32_t hash[8], int throughput);

#endif // #ifndef KEKKAC_H