# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: call_stack_profile.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import execution_context_pb2 as execution__context__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='call_stack_profile.proto',
  package='metrics',
  syntax='proto2',
  serialized_pb=_b('\n\x18\x63\x61ll_stack_profile.proto\x12\x07metrics\x1a\x17\x65xecution_context.proto\"\xa5\x03\n\x10\x43\x61llStackProfile\x12\x30\n\x06sample\x18\x01 \x03(\x0b\x32 .metrics.CallStackProfile.Sample\x12=\n\tmodule_id\x18\x02 \x03(\x0b\x32*.metrics.CallStackProfile.ModuleIdentifier\x12\x1b\n\x13profile_duration_ms\x18\x03 \x01(\x05\x12\x1a\n\x12sampling_period_ms\x18\x04 \x01(\x05\x1a\x31\n\x05\x45ntry\x12\x0f\n\x07\x61\x64\x64ress\x18\x01 \x01(\x04\x12\x17\n\x0fmodule_id_index\x18\x02 \x01(\x05\x1au\n\x06Sample\x12.\n\x05\x65ntry\x18\x01 \x03(\x0b\x32\x1f.metrics.CallStackProfile.Entry\x12\r\n\x05\x63ount\x18\x02 \x01(\x03\x12,\n\rprocess_phase\x18\x03 \x03(\x0e\x32\x15.metrics.ProcessPhase\x1a=\n\x10ModuleIdentifier\x12\x10\n\x08\x62uild_id\x18\x01 \x01(\t\x12\x17\n\x0fname_md5_prefix\x18\x02 \x01(\x06\x42;\n\x1forg.chromium.components.metricsB\x16\x43\x61llStackProfileProtosH\x03')
  ,
  dependencies=[execution__context__pb2.DESCRIPTOR,])




_CALLSTACKPROFILE_ENTRY = _descriptor.Descriptor(
  name='Entry',
  full_name='metrics.CallStackProfile.Entry',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='address', full_name='metrics.CallStackProfile.Entry.address', index=0,
      number=1, type=4, cpp_type=4, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='module_id_index', full_name='metrics.CallStackProfile.Entry.module_id_index', index=1,
      number=2, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto2',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=253,
  serialized_end=302,
)

_CALLSTACKPROFILE_SAMPLE = _descriptor.Descriptor(
  name='Sample',
  full_name='metrics.CallStackProfile.Sample',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='entry', full_name='metrics.CallStackProfile.Sample.entry', index=0,
      number=1, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='count', full_name='metrics.CallStackProfile.Sample.count', index=1,
      number=2, type=3, cpp_type=2, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='process_phase', full_name='metrics.CallStackProfile.Sample.process_phase', index=2,
      number=3, type=14, cpp_type=8, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto2',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=304,
  serialized_end=421,
)

_CALLSTACKPROFILE_MODULEIDENTIFIER = _descriptor.Descriptor(
  name='ModuleIdentifier',
  full_name='metrics.CallStackProfile.ModuleIdentifier',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='build_id', full_name='metrics.CallStackProfile.ModuleIdentifier.build_id', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='name_md5_prefix', full_name='metrics.CallStackProfile.ModuleIdentifier.name_md5_prefix', index=1,
      number=2, type=6, cpp_type=4, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto2',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=423,
  serialized_end=484,
)

_CALLSTACKPROFILE = _descriptor.Descriptor(
  name='CallStackProfile',
  full_name='metrics.CallStackProfile',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='sample', full_name='metrics.CallStackProfile.sample', index=0,
      number=1, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='module_id', full_name='metrics.CallStackProfile.module_id', index=1,
      number=2, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='profile_duration_ms', full_name='metrics.CallStackProfile.profile_duration_ms', index=2,
      number=3, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='sampling_period_ms', full_name='metrics.CallStackProfile.sampling_period_ms', index=3,
      number=4, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[_CALLSTACKPROFILE_ENTRY, _CALLSTACKPROFILE_SAMPLE, _CALLSTACKPROFILE_MODULEIDENTIFIER, ],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto2',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=63,
  serialized_end=484,
)

_CALLSTACKPROFILE_ENTRY.containing_type = _CALLSTACKPROFILE
_CALLSTACKPROFILE_SAMPLE.fields_by_name['entry'].message_type = _CALLSTACKPROFILE_ENTRY
_CALLSTACKPROFILE_SAMPLE.fields_by_name['process_phase'].enum_type = execution__context__pb2._PROCESSPHASE
_CALLSTACKPROFILE_SAMPLE.containing_type = _CALLSTACKPROFILE
_CALLSTACKPROFILE_MODULEIDENTIFIER.containing_type = _CALLSTACKPROFILE
_CALLSTACKPROFILE.fields_by_name['sample'].message_type = _CALLSTACKPROFILE_SAMPLE
_CALLSTACKPROFILE.fields_by_name['module_id'].message_type = _CALLSTACKPROFILE_MODULEIDENTIFIER
DESCRIPTOR.message_types_by_name['CallStackProfile'] = _CALLSTACKPROFILE
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

CallStackProfile = _reflection.GeneratedProtocolMessageType('CallStackProfile', (_message.Message,), dict(

  Entry = _reflection.GeneratedProtocolMessageType('Entry', (_message.Message,), dict(
    DESCRIPTOR = _CALLSTACKPROFILE_ENTRY,
    __module__ = 'call_stack_profile_pb2'
    # @@protoc_insertion_point(class_scope:metrics.CallStackProfile.Entry)
    ))
  ,

  Sample = _reflection.GeneratedProtocolMessageType('Sample', (_message.Message,), dict(
    DESCRIPTOR = _CALLSTACKPROFILE_SAMPLE,
    __module__ = 'call_stack_profile_pb2'
    # @@protoc_insertion_point(class_scope:metrics.CallStackProfile.Sample)
    ))
  ,

  ModuleIdentifier = _reflection.GeneratedProtocolMessageType('ModuleIdentifier', (_message.Message,), dict(
    DESCRIPTOR = _CALLSTACKPROFILE_MODULEIDENTIFIER,
    __module__ = 'call_stack_profile_pb2'
    # @@protoc_insertion_point(class_scope:metrics.CallStackProfile.ModuleIdentifier)
    ))
  ,
  DESCRIPTOR = _CALLSTACKPROFILE,
  __module__ = 'call_stack_profile_pb2'
  # @@protoc_insertion_point(class_scope:metrics.CallStackProfile)
  ))
_sym_db.RegisterMessage(CallStackProfile)
_sym_db.RegisterMessage(CallStackProfile.Entry)
_sym_db.RegisterMessage(CallStackProfile.Sample)
_sym_db.RegisterMessage(CallStackProfile.ModuleIdentifier)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('\n\037org.chromium.components.metricsB\026CallStackProfileProtosH\003'))
# @@protoc_insertion_point(module_scope)
