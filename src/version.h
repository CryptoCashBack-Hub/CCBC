// Copyright (c) 2011-2014 The Bitcoin developers
// Copyright (c) 2014-2015 The Dash developers
// Copyright (c) 2015-2018 The PIVX developers
// Copyright (c) 2018-2019 The CCBC developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_VERSION_H
#define BITCOIN_VERSION_H

#define POS_FIX_HEIGHT 250000

/**
 * network protocol versioning
 */

static const int PROTOCOL_VERSION = 70010; 

//! initial proto version, to be increased after version/verack negotiation
static const int INIT_PROTO_VERSION = 209;

//! In this version, 'getheaders' was introduced.
static const int GETHEADERS_VERSION = 70000;

// Protocol before enforcement
static const int MIN_PEER_PROTO_VERSION_BEFORE_ENFORCEMENT = 70008; // v1.2.0.0
// Protocol after enforcement
static const int MIN_PEER_PROTO_VERSION_AFTER_ENFORCEMENT = 70010; 

//! nTime field added to CAddress, starting with this version;
//! if possible, avoid requesting addresses nodes older than this
static const int CADDR_TIME_VERSION = 31402;

//! BIP 0031, pong message, is enabled for all versions AFTER this one
static const int BIP0031_VERSION = 60000;

//! "mempool" command, enhanced "getdata" behavior starts with this version
static const int MEMPOOL_GD_VERSION = 60002;

// POS fix
static const int POS_FIX_HEIGHT 70010

//! "filter*" commands are disabled without NODE_BLOOM after and including this version
static const int NO_BLOOM_VERSION = 70000;

//! In this version, "Fake Stake" vulnerability mitigations were introduced.
static const int FAKE_STAKE_VERSION = 70008;

#endif // BITCOIN_VERSION_H
