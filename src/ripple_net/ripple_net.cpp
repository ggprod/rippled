//------------------------------------------------------------------------------
/*
    This file is part of rippled: https://github.com/ripple/rippled
    Copyright (c) 2012, 2013 Ripple Labs Inc.

    Permission to use, copy, modify, and/or distribute this software for any
    purpose  with  or without fee is hereby granted, provided that the above
    copyright notice and this permission notice appear in all copies.

    THE  SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
    WITH  REGARD  TO  THIS  SOFTWARE  INCLUDING  ALL  IMPLIED  WARRANTIES  OF
    MERCHANTABILITY  AND  FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
    ANY  SPECIAL ,  DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
    WHATSOEVER  RESULTING  FROM  LOSS  OF USE, DATA OR PROFITS, WHETHER IN AN
    ACTION  OF  CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
    OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
*/
//==============================================================================

/** Add this to get the @ref ripple_net module.

    @file ripple_net.cpp
    @ingroup ripple_net
*/

#include "../../BeastConfig.h"

#include "../beast/modules/beast_core/system/BeforeBoost.h"
#include <boost/version.hpp>
#include <boost/asio/io_service.hpp>
#include <boost/asio/ssl.hpp>
#include <boost/asio.hpp>
#include <boost/make_shared.hpp>
#include <boost/bind.hpp>
#include <boost/array.hpp>
#include <boost/foreach.hpp>
#include <boost/unordered_map.hpp> // for unit test
#include <boost/mpl/at.hpp>
#include <boost/mpl/vector.hpp>

#include "ripple_net.h"

#include "../ripple_websocket/ripple_websocket.h" // for HTTPClient, RPCDoor

// VFALCO NOTE This is the "new new new" where individual headers are included
//             directly (instead of th emodule header). The corresponding .cpp
//             still uses the unity style inclusion.
//
#include "../ripple_rpc/api/ErrorCodes.h"

namespace ripple {
#include "basics/HTTPRequest.cpp"
#include "basics/HTTPClient.cpp"
# include "basics/impl/RPCServerImp.h"
#include "basics/SNTPClient.cpp"
#include "rpc/RPCCall.cpp"
#include "rpc/RPCErr.cpp"
#include "rpc/RPCSub.cpp"
#include "rpc/RPCUtil.cpp"
#include "rpc/InfoSub.cpp"
}

#include "basics/RPCDoor.cpp"
