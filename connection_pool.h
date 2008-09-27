#ifndef CONNECTION_POOL_H_
#define CONNECTION_POOL_H_

#include <iostream>
#include <string>
#include <deque>
#include "tame.h"
#include "tame_rpcserver.h"
#include "parseopt.h"
#include "arpc.h"
#include "async.h"
#include "craq_rpc.h"

using namespace std;

struct conn_info {
	string hostname;
	unsigned int port;
	int fd;
	const rpc_program * prog;
	ptr<axprt_stream> x;
	ptr<aclnt> cli;
};

static void
get_rpc_cli( const char * host, 
				unsigned int port, 
				ptr<aclnt> * call_ret,
				const rpc_program * prog, 
				evi_t ev,
				CLOSURE );

#endif /*CONNECTION_POOL_H_*/
