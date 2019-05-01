/**
 * (C) Copyright 2017 Intel Corporation.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * GOVERNMENT LICENSE RIGHTS-OPEN SOURCE SOFTWARE
 * The Government's rights to use, modify, reproduce, release, perform, display,
 * or disclose this software are subject to the terms of the Apache License as
 * provided in Contract No. B609815.
 * Any reproduction of computer software, computer software documentation, or
 * portions thereof marked with this legend must also reproduce the markings.
 */
#define D_LOGFAC	DD_FAC(rdb)

#include <daos/rpc.h>
#include "rpc.h"

CRT_RPC_DEFINE(rdbt_init, DAOS_ISEQ_RDBT_INIT_OP, DAOS_OSEQ_RDBT_INIT_OP)
CRT_RPC_DEFINE(rdbt_fini, DAOS_ISEQ_RDBT_FINI_OP, DAOS_OSEQ_RDBT_FINI_OP)
CRT_RPC_DEFINE(rdbt_test, DAOS_ISEQ_RDBT_TEST_OP, DAOS_OSEQ_RDBT_TEST_OP)

/* Define for cont_rpcs[] array population below.
 * See RDBT_PROTO_*_RPC_LIST macro definition
 */
#define X(a, b, c, d, e)	\
{				\
	.prf_flags   = b,	\
	.prf_req_fmt = c,	\
	.prf_hdlr    = NULL,	\
	.prf_co_ops  = NULL,	\
}

static struct crt_proto_rpc_format rdbt_proto_rpc_fmt[] = {
	RDBT_PROTO_CLI_RPC_LIST,
};

#undef X

struct crt_proto_format rdbt_proto_fmt = {
	.cpf_name  = "rdbt-proto",
	.cpf_ver   = DAOS_RDBT_VERSION,
	.cpf_count = ARRAY_SIZE(rdbt_proto_rpc_fmt),
	.cpf_prf   = rdbt_proto_rpc_fmt,
	.cpf_base  = DAOS_RPC_OPCODE(0, DAOS_RDBT_MODULE, 0)
};
