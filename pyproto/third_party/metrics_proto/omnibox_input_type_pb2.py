# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: omnibox_input_type.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf.internal import enum_type_wrapper
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='omnibox_input_type.proto',
  package='metrics',
  syntax='proto2',
  serialized_pb=_b('\n\x18omnibox_input_type.proto\x12\x07metrics*{\n\x10OmniboxInputType\x12\x0b\n\x07INVALID\x10\x00\x12\x0b\n\x07UNKNOWN\x10\x01\x12\x1c\n\x18\x44\x45PRECATED_REQUESTED_URL\x10\x02\x12\x07\n\x03URL\x10\x03\x12\t\n\x05QUERY\x10\x04\x12\x1b\n\x17\x44\x45PRECATED_FORCED_QUERY\x10\x05\x42;\n\x1forg.chromium.components.metricsB\x16OmniboxInputTypeProtosH\x03')
)

_OMNIBOXINPUTTYPE = _descriptor.EnumDescriptor(
  name='OmniboxInputType',
  full_name='metrics.OmniboxInputType',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='INVALID', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='UNKNOWN', index=1, number=1,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='DEPRECATED_REQUESTED_URL', index=2, number=2,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='URL', index=3, number=3,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='QUERY', index=4, number=4,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='DEPRECATED_FORCED_QUERY', index=5, number=5,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=37,
  serialized_end=160,
)
_sym_db.RegisterEnumDescriptor(_OMNIBOXINPUTTYPE)

OmniboxInputType = enum_type_wrapper.EnumTypeWrapper(_OMNIBOXINPUTTYPE)
INVALID = 0
UNKNOWN = 1
DEPRECATED_REQUESTED_URL = 2
URL = 3
QUERY = 4
DEPRECATED_FORCED_QUERY = 5


DESCRIPTOR.enum_types_by_name['OmniboxInputType'] = _OMNIBOXINPUTTYPE
_sym_db.RegisterFileDescriptor(DESCRIPTOR)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('\n\037org.chromium.components.metricsB\026OmniboxInputTypeProtosH\003'))
# @@protoc_insertion_point(module_scope)