#ifndef WM_COMMON
#define WM_COMMON
#include "../Platform/Common/fwup/wm_fwup.c"
#include "../Platform/Common/task/wm_wl_mbox.c"           
#include "../Platform/Common/task/wm_wl_task.c"           
#include "../Platform/Common/task/wm_wl_timers.c"         
#include "../Platform/Common/utils/utils.c"               
#include "../Platform/Common/crypto/wm_crypto_hard.c"
#include "../Platform/Common/crypto/digest/hmac.c"
#include "../Platform/Common/crypto/digest/md2.c"
#include "../Platform/Common/crypto/digest/md4.c"
#include "../Platform/Common/crypto/digest/sha224.c"
#include "../Platform/Common/crypto/digest/sha384.c"
#include "../Platform/Common/crypto/digest/sha512.c"
#include "../Platform/Common/crypto/keyformat/asn1.c"
#include "../Platform/Common/crypto/keyformat/base64.c"
#include "../Platform/Common/crypto/keyformat/x509.c"
#include "../Platform/Common/crypto/math/pstm_mul_comba.c"
#include "../Platform/Common/crypto/prng/prng.c"
#include "../Platform/Common/crypto/prng/yarrow.c"
#include "../Platform/Common/crypto/pubkey/dh.c"
#include "../Platform/Common/crypto/pubkey/ecc.c"
#include "../Platform/Common/crypto/pubkey/pkcs.c"
#include "../Platform/Common/crypto/pubkey/pubkey.c"
#include "../Platform/Common/crypto/pubkey/rsa.c"
#include "../Platform/Common/crypto/symmetric/aesGCM.c"
#include "../Platform/Common/crypto/symmetric/des3.c"
#include "../Platform/Common/crypto/symmetric/idea.c"
#include "../Platform/Common/crypto/symmetric/rc2.c"
#include "../Platform/Common/crypto/symmetric/seed.c"  
#include "../Platform/Common/mem/wm_mem.c"  
#include "../Platform/Common/Params/wm_param.c"  
#endif //WM_COMMON