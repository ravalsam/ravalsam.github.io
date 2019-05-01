/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: security.proto */

#ifndef PROTOBUF_C_security_2eproto__INCLUDED
#define PROTOBUF_C_security_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1002001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _AuthToken AuthToken;
typedef struct _AuthSys AuthSys;
typedef struct _AuthSysVerifier AuthSysVerifier;
typedef struct _SecurityCredential SecurityCredential;


/* --- enums --- */

/*
 * Authentication token includes a packed structure of the specified flavor
 */
typedef enum _AuthFlavor {
  AUTH_FLAVOR__AUTH_NONE = 0,
  AUTH_FLAVOR__AUTH_SYS = 1
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(AUTH_FLAVOR)
} AuthFlavor;

/* --- messages --- */

struct  _AuthToken
{
  ProtobufCMessage base;
  protobuf_c_boolean has_flavor;
  AuthFlavor flavor;
  protobuf_c_boolean has_data;
  ProtobufCBinaryData data;
};
#define AUTH_TOKEN__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&auth_token__descriptor) \
    , 0,0, 0,{0,NULL} }


/*
 * Token structure for AUTH_SYS flavor
 */
struct  _AuthSys
{
  ProtobufCMessage base;
  protobuf_c_boolean has_stamp;
  uint64_t stamp;
  char *machinename;
  protobuf_c_boolean has_uid;
  uint32_t uid;
  protobuf_c_boolean has_gid;
  uint32_t gid;
  size_t n_gids;
  uint32_t *gids;
  /*
   * Additional field for MAC label
   */
  char *secctx;
};
#define AUTH_SYS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&auth_sys__descriptor) \
    , 0,0, NULL, 0,0, 0,0, 0,NULL, NULL }


struct  _AuthSysVerifier
{
  ProtobufCMessage base;
  protobuf_c_boolean has_signature;
  ProtobufCBinaryData signature;
};
#define AUTH_SYS_VERIFIER__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&auth_sys_verifier__descriptor) \
    , 0,{0,NULL} }


/*
 * SecurityCredential includes the auth token and a verifier that can be used by
 * the server to verify the integrity of the token.
 * Token and verifier are expected to have the same flavor type.
 */
struct  _SecurityCredential
{
  ProtobufCMessage base;
  AuthToken *token;
  AuthToken *verifier;
};
#define SECURITY_CREDENTIAL__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&security_credential__descriptor) \
    , NULL, NULL }


/* AuthToken methods */
void   auth_token__init
                     (AuthToken         *message);
size_t auth_token__get_packed_size
                     (const AuthToken   *message);
size_t auth_token__pack
                     (const AuthToken   *message,
                      uint8_t             *out);
size_t auth_token__pack_to_buffer
                     (const AuthToken   *message,
                      ProtobufCBuffer     *buffer);
AuthToken *
       auth_token__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   auth_token__free_unpacked
                     (AuthToken *message,
                      ProtobufCAllocator *allocator);
/* AuthSys methods */
void   auth_sys__init
                     (AuthSys         *message);
size_t auth_sys__get_packed_size
                     (const AuthSys   *message);
size_t auth_sys__pack
                     (const AuthSys   *message,
                      uint8_t             *out);
size_t auth_sys__pack_to_buffer
                     (const AuthSys   *message,
                      ProtobufCBuffer     *buffer);
AuthSys *
       auth_sys__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   auth_sys__free_unpacked
                     (AuthSys *message,
                      ProtobufCAllocator *allocator);
/* AuthSysVerifier methods */
void   auth_sys_verifier__init
                     (AuthSysVerifier         *message);
size_t auth_sys_verifier__get_packed_size
                     (const AuthSysVerifier   *message);
size_t auth_sys_verifier__pack
                     (const AuthSysVerifier   *message,
                      uint8_t             *out);
size_t auth_sys_verifier__pack_to_buffer
                     (const AuthSysVerifier   *message,
                      ProtobufCBuffer     *buffer);
AuthSysVerifier *
       auth_sys_verifier__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   auth_sys_verifier__free_unpacked
                     (AuthSysVerifier *message,
                      ProtobufCAllocator *allocator);
/* SecurityCredential methods */
void   security_credential__init
                     (SecurityCredential         *message);
size_t security_credential__get_packed_size
                     (const SecurityCredential   *message);
size_t security_credential__pack
                     (const SecurityCredential   *message,
                      uint8_t             *out);
size_t security_credential__pack_to_buffer
                     (const SecurityCredential   *message,
                      ProtobufCBuffer     *buffer);
SecurityCredential *
       security_credential__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   security_credential__free_unpacked
                     (SecurityCredential *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*AuthToken_Closure)
                 (const AuthToken *message,
                  void *closure_data);
typedef void (*AuthSys_Closure)
                 (const AuthSys *message,
                  void *closure_data);
typedef void (*AuthSysVerifier_Closure)
                 (const AuthSysVerifier *message,
                  void *closure_data);
typedef void (*SecurityCredential_Closure)
                 (const SecurityCredential *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCEnumDescriptor    auth_flavor__descriptor;
extern const ProtobufCMessageDescriptor auth_token__descriptor;
extern const ProtobufCMessageDescriptor auth_sys__descriptor;
extern const ProtobufCMessageDescriptor auth_sys_verifier__descriptor;
extern const ProtobufCMessageDescriptor security_credential__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_security_2eproto__INCLUDED */
