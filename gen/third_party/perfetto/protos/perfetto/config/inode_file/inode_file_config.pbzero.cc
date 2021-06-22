// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#include "perfetto/config/inode_file/inode_file_config.pbzero.h"

namespace {
  static const ::protozero::ProtoFieldDescriptor kInvalidField = {"", ::protozero::ProtoFieldDescriptor::Type::TYPE_INVALID, 0, false};
}

namespace perfetto {
namespace protos {
namespace pbzero {

static const ::protozero::ProtoFieldDescriptor kFields_InodeFileConfig[] = {
  {"scan_interval_ms", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 1, 0},
  {"scan_delay_ms", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 2, 0},
  {"scan_batch_size", ::protozero::ProtoFieldDescriptor::Type::TYPE_UINT32, 3, 0},
  {"do_not_scan", ::protozero::ProtoFieldDescriptor::Type::TYPE_BOOL, 4, 0},
  {"scan_mount_points", ::protozero::ProtoFieldDescriptor::Type::TYPE_STRING, 5, 1},
  {"mount_point_mapping", ::protozero::ProtoFieldDescriptor::Type::TYPE_MESSAGE, 6, 1},
};

const ::protozero::ProtoFieldDescriptor* InodeFileConfig::GetFieldDescriptor(uint32_t field_id) {
  switch (field_id) {
    case kScanIntervalMsFieldNumber:
      return &kFields_InodeFileConfig[0];
    case kScanDelayMsFieldNumber:
      return &kFields_InodeFileConfig[1];
    case kScanBatchSizeFieldNumber:
      return &kFields_InodeFileConfig[2];
    case kDoNotScanFieldNumber:
      return &kFields_InodeFileConfig[3];
    case kScanMountPointsFieldNumber:
      return &kFields_InodeFileConfig[4];
    case kMountPointMappingFieldNumber:
      return &kFields_InodeFileConfig[5];
    default:
      return &kInvalidField;
  }
}

InodeFileConfig_MountPointMappingEntry* InodeFileConfig::add_mount_point_mapping() {
  return BeginNestedMessage<InodeFileConfig_MountPointMappingEntry>(6);
}

static const ::protozero::ProtoFieldDescriptor kFields_InodeFileConfig_MountPointMappingEntry[] = {
  {"mountpoint", ::protozero::ProtoFieldDescriptor::Type::TYPE_STRING, 1, 0},
  {"scan_roots", ::protozero::ProtoFieldDescriptor::Type::TYPE_STRING, 2, 1},
};

const ::protozero::ProtoFieldDescriptor* InodeFileConfig_MountPointMappingEntry::GetFieldDescriptor(uint32_t field_id) {
  switch (field_id) {
    case kMountpointFieldNumber:
      return &kFields_InodeFileConfig_MountPointMappingEntry[0];
    case kScanRootsFieldNumber:
      return &kFields_InodeFileConfig_MountPointMappingEntry[1];
    default:
      return &kInvalidField;
  }
}

} // Namespace.
} // Namespace.
} // Namespace.