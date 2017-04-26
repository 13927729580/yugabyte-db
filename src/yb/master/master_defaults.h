// Copyright (c) YugaByte, Inc.

#ifndef YB_MASTER_MASTER_DEFAULTS_H
#define YB_MASTER_MASTER_DEFAULTS_H

#include <set>
#include <string>
#include <utility>

namespace yb {
namespace master {

static const char* const kDefaultNamespaceName = "default_keyspace";
static const char* const kDefaultNamespaceId = "00000000000000000000000000000000";

static const char* const kSystemNamespaceName = "system";
static const char* const kSystemNamespaceId = "00000000000000000000000000000001";

static const char* const kSystemSchemaNamespaceName = "system_schema";
static const char* const kSystemSchemaNamespaceId = "00000000000000000000000000000002";

static const char* const kSystemAuthNamespaceName = "system_auth";
static const char* const kSystemDistributedNamespaceName = "system_distributed";
static const char* const kSystemTracesNamespaceName = "system_traces";

static const char* const kSystemPeersTableName = "peers";
static const char* const kSystemLocalTableName = "local";
static const char* const kSystemSchemaAggregatesTableName = "aggregates";
static const char* const kSystemSchemaColumnsTableName = "columns";
static const char* const kSystemSchemaFunctionsTableName = "functions";
static const char* const kSystemSchemaIndexesTableName = "indexes";
static const char* const kSystemSchemaTriggersTableName = "triggers";
static const char* const kSystemSchemaTypesTableName = "types";
static const char* const kSystemSchemaViewsTableName = "views";
static const char* const kSystemSchemaKeyspacesTableName = "keyspaces";
static const char* const kSystemSchemaTablesTableName = "tables";

// Needs to be updated each time we add a new system namespace.
static constexpr int kNumSystemNamespaces = 2;

// Needs to be updated each time we add a new system table. Currently, this is only used for unit
// tests which don't have access to the master object (for ex: unit tests which use ExternalMaster).
static constexpr int kNumSystemTables = 11;

constexpr uint16_t kMasterDefaultPort = 7051;
constexpr uint16_t kMasterDefaultWebPort = 8051;

//--------------------------------------------------------------------------------------------------
// Column names for system.local
static const char* const kSystemLocalKeyColumn = "key";
static const char* const kSystemLocalBootstrappedColumn = "bootstrapped";
static const char* const kSystemLocalBroadcastAddressColumn = "broadcast_address";
static const char* const kSystemLocalClusterNameColumn = "cluster_name";
static const char* const kSystemLocalCQLVersionColumn = "cql_version";
static const char* const kSystemLocalDataCenterColumn = "data_center";
static const char* const kSystemLocalGossipGenerationColumn = "gossip_generation";
static const char* const kSystemLocalHostIdColumn = "host_id";
static const char* const kSystemLocalListenAddressColumn = "listen_address";
static const char* const kSystemLocalNativeProtocolVersionColumn = "native_protocol_version";
static const char* const kSystemLocalPartitionerColumn = "partitioner";
static const char* const kSystemLocalRackColumn = "rack";
static const char* const kSystemLocalReleaseVersionColumn = "release_version";
static const char* const kSystemLocalRpcAddressColumn = "rpc_address";
static const char* const kSystemLocalSchemaVersionColumn = "schema_version";
static const char* const kSystemLocalThriftVersionColumn = "thrift_version";
static const char* const kSystemLocalTokesnColumn = "tokens";
static const char* const kSystemLocalTruncatedAtColumn = "truncated_at";
//--------------------------------------------------------------------------------------------------

} // namespace master
} // namespace yb

#endif // YB_MASTER_MASTER_DEFAULTS_H
