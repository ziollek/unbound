/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_UTIL_CONFIGPARSER_H_INCLUDED
# define YY_YY_UTIL_CONFIGPARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    SPACE = 258,
    LETTER = 259,
    NEWLINE = 260,
    COMMENT = 261,
    COLON = 262,
    ANY = 263,
    ZONESTR = 264,
    STRING_ARG = 265,
    VAR_SERVER = 266,
    VAR_VERBOSITY = 267,
    VAR_NUM_THREADS = 268,
    VAR_PORT = 269,
    VAR_OUTGOING_RANGE = 270,
    VAR_INTERFACE = 271,
    VAR_PREFER_IP4 = 272,
    VAR_DO_IP4 = 273,
    VAR_DO_IP6 = 274,
    VAR_PREFER_IP6 = 275,
    VAR_DO_UDP = 276,
    VAR_DO_TCP = 277,
    VAR_TCP_MSS = 278,
    VAR_OUTGOING_TCP_MSS = 279,
    VAR_TCP_IDLE_TIMEOUT = 280,
    VAR_EDNS_TCP_KEEPALIVE = 281,
    VAR_EDNS_TCP_KEEPALIVE_TIMEOUT = 282,
    VAR_CHROOT = 283,
    VAR_USERNAME = 284,
    VAR_DIRECTORY = 285,
    VAR_LOGFILE = 286,
    VAR_PIDFILE = 287,
    VAR_MSG_CACHE_SIZE = 288,
    VAR_MSG_CACHE_SLABS = 289,
    VAR_NUM_QUERIES_PER_THREAD = 290,
    VAR_RRSET_CACHE_SIZE = 291,
    VAR_RRSET_CACHE_SLABS = 292,
    VAR_OUTGOING_NUM_TCP = 293,
    VAR_INFRA_HOST_TTL = 294,
    VAR_INFRA_LAME_TTL = 295,
    VAR_INFRA_CACHE_SLABS = 296,
    VAR_INFRA_CACHE_NUMHOSTS = 297,
    VAR_INFRA_CACHE_LAME_SIZE = 298,
    VAR_NAME = 299,
    VAR_STUB_ZONE = 300,
    VAR_STUB_HOST = 301,
    VAR_STUB_ADDR = 302,
    VAR_TARGET_FETCH_POLICY = 303,
    VAR_HARDEN_SHORT_BUFSIZE = 304,
    VAR_HARDEN_LARGE_QUERIES = 305,
    VAR_FORWARD_ZONE = 306,
    VAR_FORWARD_HOST = 307,
    VAR_FORWARD_ADDR = 308,
    VAR_DO_NOT_QUERY_ADDRESS = 309,
    VAR_HIDE_IDENTITY = 310,
    VAR_HIDE_VERSION = 311,
    VAR_IDENTITY = 312,
    VAR_VERSION = 313,
    VAR_HARDEN_GLUE = 314,
    VAR_MODULE_CONF = 315,
    VAR_TRUST_ANCHOR_FILE = 316,
    VAR_TRUST_ANCHOR = 317,
    VAR_VAL_OVERRIDE_DATE = 318,
    VAR_BOGUS_TTL = 319,
    VAR_VAL_CLEAN_ADDITIONAL = 320,
    VAR_VAL_PERMISSIVE_MODE = 321,
    VAR_INCOMING_NUM_TCP = 322,
    VAR_MSG_BUFFER_SIZE = 323,
    VAR_KEY_CACHE_SIZE = 324,
    VAR_KEY_CACHE_SLABS = 325,
    VAR_TRUSTED_KEYS_FILE = 326,
    VAR_VAL_NSEC3_KEYSIZE_ITERATIONS = 327,
    VAR_USE_SYSLOG = 328,
    VAR_OUTGOING_INTERFACE = 329,
    VAR_ROOT_HINTS = 330,
    VAR_DO_NOT_QUERY_LOCALHOST = 331,
    VAR_CACHE_MAX_TTL = 332,
    VAR_HARDEN_DNSSEC_STRIPPED = 333,
    VAR_ACCESS_CONTROL = 334,
    VAR_LOCAL_ZONE = 335,
    VAR_LOCAL_DATA = 336,
    VAR_INTERFACE_AUTOMATIC = 337,
    VAR_STATISTICS_INTERVAL = 338,
    VAR_DO_DAEMONIZE = 339,
    VAR_USE_CAPS_FOR_ID = 340,
    VAR_STATISTICS_CUMULATIVE = 341,
    VAR_OUTGOING_PORT_PERMIT = 342,
    VAR_OUTGOING_PORT_AVOID = 343,
    VAR_DLV_ANCHOR_FILE = 344,
    VAR_DLV_ANCHOR = 345,
    VAR_NEG_CACHE_SIZE = 346,
    VAR_HARDEN_REFERRAL_PATH = 347,
    VAR_PRIVATE_ADDRESS = 348,
    VAR_PRIVATE_DOMAIN = 349,
    VAR_REMOTE_CONTROL = 350,
    VAR_CONTROL_ENABLE = 351,
    VAR_CONTROL_INTERFACE = 352,
    VAR_CONTROL_PORT = 353,
    VAR_SERVER_KEY_FILE = 354,
    VAR_SERVER_CERT_FILE = 355,
    VAR_CONTROL_KEY_FILE = 356,
    VAR_CONTROL_CERT_FILE = 357,
    VAR_CONTROL_USE_CERT = 358,
    VAR_EXTENDED_STATISTICS = 359,
    VAR_LOCAL_DATA_PTR = 360,
    VAR_JOSTLE_TIMEOUT = 361,
    VAR_STUB_PRIME = 362,
    VAR_UNWANTED_REPLY_THRESHOLD = 363,
    VAR_LOG_TIME_ASCII = 364,
    VAR_DOMAIN_INSECURE = 365,
    VAR_PYTHON = 366,
    VAR_PYTHON_SCRIPT = 367,
    VAR_VAL_SIG_SKEW_MIN = 368,
    VAR_VAL_SIG_SKEW_MAX = 369,
    VAR_CACHE_MIN_TTL = 370,
    VAR_VAL_LOG_LEVEL = 371,
    VAR_AUTO_TRUST_ANCHOR_FILE = 372,
    VAR_KEEP_MISSING = 373,
    VAR_ADD_HOLDDOWN = 374,
    VAR_DEL_HOLDDOWN = 375,
    VAR_SO_RCVBUF = 376,
    VAR_EDNS_BUFFER_SIZE = 377,
    VAR_PREFETCH = 378,
    VAR_PREFETCH_KEY = 379,
    VAR_SO_SNDBUF = 380,
    VAR_SO_REUSEPORT = 381,
    VAR_HARDEN_BELOW_NXDOMAIN = 382,
    VAR_IGNORE_CD_FLAG = 383,
    VAR_LOG_QUERIES = 384,
    VAR_LOG_REPLIES = 385,
    VAR_LOG_LOCAL_ACTIONS = 386,
    VAR_TCP_UPSTREAM = 387,
    VAR_SSL_UPSTREAM = 388,
    VAR_SSL_SERVICE_KEY = 389,
    VAR_SSL_SERVICE_PEM = 390,
    VAR_SSL_PORT = 391,
    VAR_FORWARD_FIRST = 392,
    VAR_STUB_SSL_UPSTREAM = 393,
    VAR_FORWARD_SSL_UPSTREAM = 394,
    VAR_TLS_CERT_BUNDLE = 395,
    VAR_HTTPS_PORT = 396,
    VAR_HTTP_ENDPOINT = 397,
    VAR_HTTP_MAX_STREAMS = 398,
    VAR_HTTP_QUERY_BUFFER_SIZE = 399,
    VAR_HTTP_RESPONSE_BUFFER_SIZE = 400,
    VAR_HTTP_NODELAY = 401,
    VAR_STUB_FIRST = 402,
    VAR_MINIMAL_RESPONSES = 403,
    VAR_RRSET_ROUNDROBIN = 404,
    VAR_MAX_UDP_SIZE = 405,
    VAR_DELAY_CLOSE = 406,
    VAR_UNBLOCK_LAN_ZONES = 407,
    VAR_INSECURE_LAN_ZONES = 408,
    VAR_INFRA_CACHE_MIN_RTT = 409,
    VAR_DNS64_PREFIX = 410,
    VAR_DNS64_SYNTHALL = 411,
    VAR_DNS64_IGNORE_AAAA = 412,
    VAR_DNSTAP = 413,
    VAR_DNSTAP_ENABLE = 414,
    VAR_DNSTAP_SOCKET_PATH = 415,
    VAR_DNSTAP_IP = 416,
    VAR_DNSTAP_TLS = 417,
    VAR_DNSTAP_TLS_SERVER_NAME = 418,
    VAR_DNSTAP_TLS_CERT_BUNDLE = 419,
    VAR_DNSTAP_TLS_CLIENT_KEY_FILE = 420,
    VAR_DNSTAP_TLS_CLIENT_CERT_FILE = 421,
    VAR_DNSTAP_SEND_IDENTITY = 422,
    VAR_DNSTAP_SEND_VERSION = 423,
    VAR_DNSTAP_IDENTITY = 424,
    VAR_DNSTAP_VERSION = 425,
    VAR_DNSTAP_LOG_RESOLVER_QUERY_MESSAGES = 426,
    VAR_DNSTAP_LOG_RESOLVER_RESPONSE_MESSAGES = 427,
    VAR_DNSTAP_LOG_CLIENT_QUERY_MESSAGES = 428,
    VAR_DNSTAP_LOG_CLIENT_RESPONSE_MESSAGES = 429,
    VAR_DNSTAP_LOG_FORWARDER_QUERY_MESSAGES = 430,
    VAR_DNSTAP_LOG_FORWARDER_RESPONSE_MESSAGES = 431,
    VAR_RESPONSE_IP_TAG = 432,
    VAR_RESPONSE_IP = 433,
    VAR_RESPONSE_IP_DATA = 434,
    VAR_HARDEN_ALGO_DOWNGRADE = 435,
    VAR_IP_TRANSPARENT = 436,
    VAR_IP_DSCP = 437,
    VAR_DISABLE_DNSSEC_LAME_CHECK = 438,
    VAR_IP_RATELIMIT = 439,
    VAR_IP_RATELIMIT_SLABS = 440,
    VAR_IP_RATELIMIT_SIZE = 441,
    VAR_RATELIMIT = 442,
    VAR_RATELIMIT_SLABS = 443,
    VAR_RATELIMIT_SIZE = 444,
    VAR_RATELIMIT_FOR_DOMAIN = 445,
    VAR_RATELIMIT_BELOW_DOMAIN = 446,
    VAR_IP_RATELIMIT_FACTOR = 447,
    VAR_RATELIMIT_FACTOR = 448,
    VAR_SEND_CLIENT_SUBNET = 449,
    VAR_CLIENT_SUBNET_ZONE = 450,
    VAR_CLIENT_SUBNET_ALWAYS_FORWARD = 451,
    VAR_CLIENT_SUBNET_OPCODE = 452,
    VAR_MAX_CLIENT_SUBNET_IPV4 = 453,
    VAR_MAX_CLIENT_SUBNET_IPV6 = 454,
    VAR_MIN_CLIENT_SUBNET_IPV4 = 455,
    VAR_MIN_CLIENT_SUBNET_IPV6 = 456,
    VAR_MAX_ECS_TREE_SIZE_IPV4 = 457,
    VAR_MAX_ECS_TREE_SIZE_IPV6 = 458,
    VAR_CAPS_WHITELIST = 459,
    VAR_CACHE_MAX_NEGATIVE_TTL = 460,
    VAR_PERMIT_SMALL_HOLDDOWN = 461,
    VAR_QNAME_MINIMISATION = 462,
    VAR_QNAME_MINIMISATION_STRICT = 463,
    VAR_IP_FREEBIND = 464,
    VAR_DEFINE_TAG = 465,
    VAR_LOCAL_ZONE_TAG = 466,
    VAR_ACCESS_CONTROL_TAG = 467,
    VAR_LOCAL_ZONE_OVERRIDE = 468,
    VAR_ACCESS_CONTROL_TAG_ACTION = 469,
    VAR_ACCESS_CONTROL_TAG_DATA = 470,
    VAR_VIEW = 471,
    VAR_ACCESS_CONTROL_VIEW = 472,
    VAR_VIEW_FIRST = 473,
    VAR_SERVE_EXPIRED = 474,
    VAR_SERVE_EXPIRED_TTL = 475,
    VAR_SERVE_EXPIRED_TTL_RESET = 476,
    VAR_SERVE_EXPIRED_REPLY_TTL = 477,
    VAR_SERVE_EXPIRED_CLIENT_TIMEOUT = 478,
    VAR_FAKE_DSA = 479,
    VAR_FAKE_SHA1 = 480,
    VAR_LOG_IDENTITY = 481,
    VAR_HIDE_TRUSTANCHOR = 482,
    VAR_TRUST_ANCHOR_SIGNALING = 483,
    VAR_AGGRESSIVE_NSEC = 484,
    VAR_USE_SYSTEMD = 485,
    VAR_SHM_ENABLE = 486,
    VAR_SHM_KEY = 487,
    VAR_ROOT_KEY_SENTINEL = 488,
    VAR_DNSCRYPT = 489,
    VAR_DNSCRYPT_ENABLE = 490,
    VAR_DNSCRYPT_PORT = 491,
    VAR_DNSCRYPT_PROVIDER = 492,
    VAR_DNSCRYPT_SECRET_KEY = 493,
    VAR_DNSCRYPT_PROVIDER_CERT = 494,
    VAR_DNSCRYPT_PROVIDER_CERT_ROTATED = 495,
    VAR_DNSCRYPT_SHARED_SECRET_CACHE_SIZE = 496,
    VAR_DNSCRYPT_SHARED_SECRET_CACHE_SLABS = 497,
    VAR_DNSCRYPT_NONCE_CACHE_SIZE = 498,
    VAR_DNSCRYPT_NONCE_CACHE_SLABS = 499,
    VAR_IPSECMOD_ENABLED = 500,
    VAR_IPSECMOD_HOOK = 501,
    VAR_IPSECMOD_IGNORE_BOGUS = 502,
    VAR_IPSECMOD_MAX_TTL = 503,
    VAR_IPSECMOD_WHITELIST = 504,
    VAR_IPSECMOD_STRICT = 505,
    VAR_CACHEDB = 506,
    VAR_CACHEDB_BACKEND = 507,
    VAR_CACHEDB_SECRETSEED = 508,
    VAR_CACHEDB_REDISHOST = 509,
    VAR_CACHEDB_REDISPORT = 510,
    VAR_CACHEDB_REDISTIMEOUT = 511,
    VAR_CACHEDB_REDISEXPIRERECORDS = 512,
    VAR_UDP_UPSTREAM_WITHOUT_DOWNSTREAM = 513,
    VAR_FOR_UPSTREAM = 514,
    VAR_AUTH_ZONE = 515,
    VAR_ZONEFILE = 516,
    VAR_MASTER = 517,
    VAR_URL = 518,
    VAR_FOR_DOWNSTREAM = 519,
    VAR_FALLBACK_ENABLED = 520,
    VAR_TLS_ADDITIONAL_PORT = 521,
    VAR_LOW_RTT = 522,
    VAR_LOW_RTT_PERMIL = 523,
    VAR_FAST_SERVER_PERMIL = 524,
    VAR_FAST_SERVER_NUM = 525,
    VAR_ALLOW_NOTIFY = 526,
    VAR_TLS_WIN_CERT = 527,
    VAR_TCP_CONNECTION_LIMIT = 528,
    VAR_FORWARD_NO_CACHE = 529,
    VAR_STUB_NO_CACHE = 530,
    VAR_LOG_SERVFAIL = 531,
    VAR_DENY_ANY = 532,
    VAR_UNKNOWN_SERVER_TIME_LIMIT = 533,
    VAR_LOG_TAG_QUERYREPLY = 534,
    VAR_STREAM_WAIT_SIZE = 535,
    VAR_TLS_CIPHERS = 536,
    VAR_TLS_CIPHERSUITES = 537,
    VAR_TLS_USE_SNI = 538,
    VAR_IPSET = 539,
    VAR_IPSET_NAME_V4 = 540,
    VAR_IPSET_NAME_V6 = 541,
    VAR_TLS_SESSION_TICKET_KEYS = 542,
    VAR_RPZ = 543,
    VAR_TAGS = 544,
    VAR_RPZ_ACTION_OVERRIDE = 545,
    VAR_RPZ_CNAME_OVERRIDE = 546,
    VAR_RPZ_LOG = 547,
    VAR_RPZ_LOG_NAME = 548
  };
#endif
/* Tokens.  */
#define SPACE 258
#define LETTER 259
#define NEWLINE 260
#define COMMENT 261
#define COLON 262
#define ANY 263
#define ZONESTR 264
#define STRING_ARG 265
#define VAR_SERVER 266
#define VAR_VERBOSITY 267
#define VAR_NUM_THREADS 268
#define VAR_PORT 269
#define VAR_OUTGOING_RANGE 270
#define VAR_INTERFACE 271
#define VAR_PREFER_IP4 272
#define VAR_DO_IP4 273
#define VAR_DO_IP6 274
#define VAR_PREFER_IP6 275
#define VAR_DO_UDP 276
#define VAR_DO_TCP 277
#define VAR_TCP_MSS 278
#define VAR_OUTGOING_TCP_MSS 279
#define VAR_TCP_IDLE_TIMEOUT 280
#define VAR_EDNS_TCP_KEEPALIVE 281
#define VAR_EDNS_TCP_KEEPALIVE_TIMEOUT 282
#define VAR_CHROOT 283
#define VAR_USERNAME 284
#define VAR_DIRECTORY 285
#define VAR_LOGFILE 286
#define VAR_PIDFILE 287
#define VAR_MSG_CACHE_SIZE 288
#define VAR_MSG_CACHE_SLABS 289
#define VAR_NUM_QUERIES_PER_THREAD 290
#define VAR_RRSET_CACHE_SIZE 291
#define VAR_RRSET_CACHE_SLABS 292
#define VAR_OUTGOING_NUM_TCP 293
#define VAR_INFRA_HOST_TTL 294
#define VAR_INFRA_LAME_TTL 295
#define VAR_INFRA_CACHE_SLABS 296
#define VAR_INFRA_CACHE_NUMHOSTS 297
#define VAR_INFRA_CACHE_LAME_SIZE 298
#define VAR_NAME 299
#define VAR_STUB_ZONE 300
#define VAR_STUB_HOST 301
#define VAR_STUB_ADDR 302
#define VAR_TARGET_FETCH_POLICY 303
#define VAR_HARDEN_SHORT_BUFSIZE 304
#define VAR_HARDEN_LARGE_QUERIES 305
#define VAR_FORWARD_ZONE 306
#define VAR_FORWARD_HOST 307
#define VAR_FORWARD_ADDR 308
#define VAR_DO_NOT_QUERY_ADDRESS 309
#define VAR_HIDE_IDENTITY 310
#define VAR_HIDE_VERSION 311
#define VAR_IDENTITY 312
#define VAR_VERSION 313
#define VAR_HARDEN_GLUE 314
#define VAR_MODULE_CONF 315
#define VAR_TRUST_ANCHOR_FILE 316
#define VAR_TRUST_ANCHOR 317
#define VAR_VAL_OVERRIDE_DATE 318
#define VAR_BOGUS_TTL 319
#define VAR_VAL_CLEAN_ADDITIONAL 320
#define VAR_VAL_PERMISSIVE_MODE 321
#define VAR_INCOMING_NUM_TCP 322
#define VAR_MSG_BUFFER_SIZE 323
#define VAR_KEY_CACHE_SIZE 324
#define VAR_KEY_CACHE_SLABS 325
#define VAR_TRUSTED_KEYS_FILE 326
#define VAR_VAL_NSEC3_KEYSIZE_ITERATIONS 327
#define VAR_USE_SYSLOG 328
#define VAR_OUTGOING_INTERFACE 329
#define VAR_ROOT_HINTS 330
#define VAR_DO_NOT_QUERY_LOCALHOST 331
#define VAR_CACHE_MAX_TTL 332
#define VAR_HARDEN_DNSSEC_STRIPPED 333
#define VAR_ACCESS_CONTROL 334
#define VAR_LOCAL_ZONE 335
#define VAR_LOCAL_DATA 336
#define VAR_INTERFACE_AUTOMATIC 337
#define VAR_STATISTICS_INTERVAL 338
#define VAR_DO_DAEMONIZE 339
#define VAR_USE_CAPS_FOR_ID 340
#define VAR_STATISTICS_CUMULATIVE 341
#define VAR_OUTGOING_PORT_PERMIT 342
#define VAR_OUTGOING_PORT_AVOID 343
#define VAR_DLV_ANCHOR_FILE 344
#define VAR_DLV_ANCHOR 345
#define VAR_NEG_CACHE_SIZE 346
#define VAR_HARDEN_REFERRAL_PATH 347
#define VAR_PRIVATE_ADDRESS 348
#define VAR_PRIVATE_DOMAIN 349
#define VAR_REMOTE_CONTROL 350
#define VAR_CONTROL_ENABLE 351
#define VAR_CONTROL_INTERFACE 352
#define VAR_CONTROL_PORT 353
#define VAR_SERVER_KEY_FILE 354
#define VAR_SERVER_CERT_FILE 355
#define VAR_CONTROL_KEY_FILE 356
#define VAR_CONTROL_CERT_FILE 357
#define VAR_CONTROL_USE_CERT 358
#define VAR_EXTENDED_STATISTICS 359
#define VAR_LOCAL_DATA_PTR 360
#define VAR_JOSTLE_TIMEOUT 361
#define VAR_STUB_PRIME 362
#define VAR_UNWANTED_REPLY_THRESHOLD 363
#define VAR_LOG_TIME_ASCII 364
#define VAR_DOMAIN_INSECURE 365
#define VAR_PYTHON 366
#define VAR_PYTHON_SCRIPT 367
#define VAR_VAL_SIG_SKEW_MIN 368
#define VAR_VAL_SIG_SKEW_MAX 369
#define VAR_CACHE_MIN_TTL 370
#define VAR_VAL_LOG_LEVEL 371
#define VAR_AUTO_TRUST_ANCHOR_FILE 372
#define VAR_KEEP_MISSING 373
#define VAR_ADD_HOLDDOWN 374
#define VAR_DEL_HOLDDOWN 375
#define VAR_SO_RCVBUF 376
#define VAR_EDNS_BUFFER_SIZE 377
#define VAR_PREFETCH 378
#define VAR_PREFETCH_KEY 379
#define VAR_SO_SNDBUF 380
#define VAR_SO_REUSEPORT 381
#define VAR_HARDEN_BELOW_NXDOMAIN 382
#define VAR_IGNORE_CD_FLAG 383
#define VAR_LOG_QUERIES 384
#define VAR_LOG_REPLIES 385
#define VAR_LOG_LOCAL_ACTIONS 386
#define VAR_TCP_UPSTREAM 387
#define VAR_SSL_UPSTREAM 388
#define VAR_SSL_SERVICE_KEY 389
#define VAR_SSL_SERVICE_PEM 390
#define VAR_SSL_PORT 391
#define VAR_FORWARD_FIRST 392
#define VAR_STUB_SSL_UPSTREAM 393
#define VAR_FORWARD_SSL_UPSTREAM 394
#define VAR_TLS_CERT_BUNDLE 395
#define VAR_HTTPS_PORT 396
#define VAR_HTTP_ENDPOINT 397
#define VAR_HTTP_MAX_STREAMS 398
#define VAR_HTTP_QUERY_BUFFER_SIZE 399
#define VAR_HTTP_RESPONSE_BUFFER_SIZE 400
#define VAR_HTTP_NODELAY 401
#define VAR_STUB_FIRST 402
#define VAR_MINIMAL_RESPONSES 403
#define VAR_RRSET_ROUNDROBIN 404
#define VAR_MAX_UDP_SIZE 405
#define VAR_DELAY_CLOSE 406
#define VAR_UNBLOCK_LAN_ZONES 407
#define VAR_INSECURE_LAN_ZONES 408
#define VAR_INFRA_CACHE_MIN_RTT 409
#define VAR_DNS64_PREFIX 410
#define VAR_DNS64_SYNTHALL 411
#define VAR_DNS64_IGNORE_AAAA 412
#define VAR_DNSTAP 413
#define VAR_DNSTAP_ENABLE 414
#define VAR_DNSTAP_SOCKET_PATH 415
#define VAR_DNSTAP_IP 416
#define VAR_DNSTAP_TLS 417
#define VAR_DNSTAP_TLS_SERVER_NAME 418
#define VAR_DNSTAP_TLS_CERT_BUNDLE 419
#define VAR_DNSTAP_TLS_CLIENT_KEY_FILE 420
#define VAR_DNSTAP_TLS_CLIENT_CERT_FILE 421
#define VAR_DNSTAP_SEND_IDENTITY 422
#define VAR_DNSTAP_SEND_VERSION 423
#define VAR_DNSTAP_IDENTITY 424
#define VAR_DNSTAP_VERSION 425
#define VAR_DNSTAP_LOG_RESOLVER_QUERY_MESSAGES 426
#define VAR_DNSTAP_LOG_RESOLVER_RESPONSE_MESSAGES 427
#define VAR_DNSTAP_LOG_CLIENT_QUERY_MESSAGES 428
#define VAR_DNSTAP_LOG_CLIENT_RESPONSE_MESSAGES 429
#define VAR_DNSTAP_LOG_FORWARDER_QUERY_MESSAGES 430
#define VAR_DNSTAP_LOG_FORWARDER_RESPONSE_MESSAGES 431
#define VAR_RESPONSE_IP_TAG 432
#define VAR_RESPONSE_IP 433
#define VAR_RESPONSE_IP_DATA 434
#define VAR_HARDEN_ALGO_DOWNGRADE 435
#define VAR_IP_TRANSPARENT 436
#define VAR_IP_DSCP 437
#define VAR_DISABLE_DNSSEC_LAME_CHECK 438
#define VAR_IP_RATELIMIT 439
#define VAR_IP_RATELIMIT_SLABS 440
#define VAR_IP_RATELIMIT_SIZE 441
#define VAR_RATELIMIT 442
#define VAR_RATELIMIT_SLABS 443
#define VAR_RATELIMIT_SIZE 444
#define VAR_RATELIMIT_FOR_DOMAIN 445
#define VAR_RATELIMIT_BELOW_DOMAIN 446
#define VAR_IP_RATELIMIT_FACTOR 447
#define VAR_RATELIMIT_FACTOR 448
#define VAR_SEND_CLIENT_SUBNET 449
#define VAR_CLIENT_SUBNET_ZONE 450
#define VAR_CLIENT_SUBNET_ALWAYS_FORWARD 451
#define VAR_CLIENT_SUBNET_OPCODE 452
#define VAR_MAX_CLIENT_SUBNET_IPV4 453
#define VAR_MAX_CLIENT_SUBNET_IPV6 454
#define VAR_MIN_CLIENT_SUBNET_IPV4 455
#define VAR_MIN_CLIENT_SUBNET_IPV6 456
#define VAR_MAX_ECS_TREE_SIZE_IPV4 457
#define VAR_MAX_ECS_TREE_SIZE_IPV6 458
#define VAR_CAPS_WHITELIST 459
#define VAR_CACHE_MAX_NEGATIVE_TTL 460
#define VAR_PERMIT_SMALL_HOLDDOWN 461
#define VAR_QNAME_MINIMISATION 462
#define VAR_QNAME_MINIMISATION_STRICT 463
#define VAR_IP_FREEBIND 464
#define VAR_DEFINE_TAG 465
#define VAR_LOCAL_ZONE_TAG 466
#define VAR_ACCESS_CONTROL_TAG 467
#define VAR_LOCAL_ZONE_OVERRIDE 468
#define VAR_ACCESS_CONTROL_TAG_ACTION 469
#define VAR_ACCESS_CONTROL_TAG_DATA 470
#define VAR_VIEW 471
#define VAR_ACCESS_CONTROL_VIEW 472
#define VAR_VIEW_FIRST 473
#define VAR_SERVE_EXPIRED 474
#define VAR_SERVE_EXPIRED_TTL 475
#define VAR_SERVE_EXPIRED_TTL_RESET 476
#define VAR_SERVE_EXPIRED_REPLY_TTL 477
#define VAR_SERVE_EXPIRED_CLIENT_TIMEOUT 478
#define VAR_FAKE_DSA 479
#define VAR_FAKE_SHA1 480
#define VAR_LOG_IDENTITY 481
#define VAR_HIDE_TRUSTANCHOR 482
#define VAR_TRUST_ANCHOR_SIGNALING 483
#define VAR_AGGRESSIVE_NSEC 484
#define VAR_USE_SYSTEMD 485
#define VAR_SHM_ENABLE 486
#define VAR_SHM_KEY 487
#define VAR_ROOT_KEY_SENTINEL 488
#define VAR_DNSCRYPT 489
#define VAR_DNSCRYPT_ENABLE 490
#define VAR_DNSCRYPT_PORT 491
#define VAR_DNSCRYPT_PROVIDER 492
#define VAR_DNSCRYPT_SECRET_KEY 493
#define VAR_DNSCRYPT_PROVIDER_CERT 494
#define VAR_DNSCRYPT_PROVIDER_CERT_ROTATED 495
#define VAR_DNSCRYPT_SHARED_SECRET_CACHE_SIZE 496
#define VAR_DNSCRYPT_SHARED_SECRET_CACHE_SLABS 497
#define VAR_DNSCRYPT_NONCE_CACHE_SIZE 498
#define VAR_DNSCRYPT_NONCE_CACHE_SLABS 499
#define VAR_IPSECMOD_ENABLED 500
#define VAR_IPSECMOD_HOOK 501
#define VAR_IPSECMOD_IGNORE_BOGUS 502
#define VAR_IPSECMOD_MAX_TTL 503
#define VAR_IPSECMOD_WHITELIST 504
#define VAR_IPSECMOD_STRICT 505
#define VAR_CACHEDB 506
#define VAR_CACHEDB_BACKEND 507
#define VAR_CACHEDB_SECRETSEED 508
#define VAR_CACHEDB_REDISHOST 509
#define VAR_CACHEDB_REDISPORT 510
#define VAR_CACHEDB_REDISTIMEOUT 511
#define VAR_CACHEDB_REDISEXPIRERECORDS 512
#define VAR_UDP_UPSTREAM_WITHOUT_DOWNSTREAM 513
#define VAR_FOR_UPSTREAM 514
#define VAR_AUTH_ZONE 515
#define VAR_ZONEFILE 516
#define VAR_MASTER 517
#define VAR_URL 518
#define VAR_FOR_DOWNSTREAM 519
#define VAR_FALLBACK_ENABLED 520
#define VAR_TLS_ADDITIONAL_PORT 521
#define VAR_LOW_RTT 522
#define VAR_LOW_RTT_PERMIL 523
#define VAR_FAST_SERVER_PERMIL 524
#define VAR_FAST_SERVER_NUM 525
#define VAR_ALLOW_NOTIFY 526
#define VAR_TLS_WIN_CERT 527
#define VAR_TCP_CONNECTION_LIMIT 528
#define VAR_FORWARD_NO_CACHE 529
#define VAR_STUB_NO_CACHE 530
#define VAR_LOG_SERVFAIL 531
#define VAR_DENY_ANY 532
#define VAR_UNKNOWN_SERVER_TIME_LIMIT 533
#define VAR_LOG_TAG_QUERYREPLY 534
#define VAR_STREAM_WAIT_SIZE 535
#define VAR_TLS_CIPHERS 536
#define VAR_TLS_CIPHERSUITES 537
#define VAR_TLS_USE_SNI 538
#define VAR_IPSET 539
#define VAR_IPSET_NAME_V4 540
#define VAR_IPSET_NAME_V6 541
#define VAR_TLS_SESSION_TICKET_KEYS 542
#define VAR_RPZ 543
#define VAR_TAGS 544
#define VAR_RPZ_ACTION_OVERRIDE 545
#define VAR_RPZ_CNAME_OVERRIDE 546
#define VAR_RPZ_LOG 547
#define VAR_RPZ_LOG_NAME 548

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 66 "./util/configparser.y" /* yacc.c:1909  */

	char*	str;

#line 644 "util/configparser.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_UTIL_CONFIGPARSER_H_INCLUDED  */
