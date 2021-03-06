# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: ukm/report.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from ukm import aggregate_pb2 as ukm_dot_aggregate__pb2
from ukm import entry_pb2 as ukm_dot_entry__pb2
from ukm import source_pb2 as ukm_dot_source__pb2
import system_profile_pb2 as system__profile__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='ukm/report.proto',
  package='ukm',
  syntax='proto2',
  serialized_pb=_b('\n\x10ukm/report.proto\x12\x03ukm\x1a\x13ukm/aggregate.proto\x1a\x0fukm/entry.proto\x1a\x10ukm/source.proto\x1a\x14system_profile.proto\"\xc3\x04\n\x06Report\x12\x11\n\tclient_id\x18\x01 \x01(\x06\x12\x12\n\nsession_id\x18\x05 \x01(\x05\x12\x11\n\treport_id\x18\x06 \x01(\x05\x12\x15\n\ris_continuous\x18\x08 \x01(\x08\x12:\n\x13log_rotation_reason\x18\t \x01(\x0e\x32\x1d.ukm.Report.LogRotationReason\x12\x33\n\x0esystem_profile\x18\x02 \x01(\x0b\x32\x1b.metrics.SystemProfileProto\x12\x1c\n\x07sources\x18\x03 \x03(\x0b\x32\x0b.ukm.Source\x12/\n\rsource_counts\x18\n \x01(\x0b\x32\x18.ukm.Report.SourceCounts\x12\x1b\n\x07\x65ntries\x18\x04 \x03(\x0b\x32\n.ukm.Entry\x12\"\n\naggregates\x18\x07 \x03(\x0b\x32\x0e.ukm.Aggregate\x1a\x8c\x01\n\x0cSourceCounts\x12\x10\n\x08observed\x18\x01 \x01(\x05\x12\x1a\n\x12navigation_sources\x18\x02 \x01(\x05\x12\x19\n\x11unmatched_sources\x18\x03 \x01(\x05\x12\x19\n\x11\x63\x61rryover_sources\x18\x04 \x01(\x05\x12\x18\n\x10\x64\x65\x66\x65rred_sources\x18\x05 \x01(\x05\"X\n\x11LogRotationReason\x12\x0b\n\x07UNKNOWN\x10\x00\x12\x16\n\x12SCHEDULED_ROTATION\x10\x01\x12\x10\n\x0c\x42\x41\x43KGROUNDED\x10\x02\x12\x0c\n\x08SHUTDOWN\x10\x03\x42\x02H\x03')
  ,
  dependencies=[ukm_dot_aggregate__pb2.DESCRIPTOR,ukm_dot_entry__pb2.DESCRIPTOR,ukm_dot_source__pb2.DESCRIPTOR,system__profile__pb2.DESCRIPTOR,])



_REPORT_LOGROTATIONREASON = _descriptor.EnumDescriptor(
  name='LogRotationReason',
  full_name='ukm.Report.LogRotationReason',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='UNKNOWN', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='SCHEDULED_ROTATION', index=1, number=1,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='BACKGROUNDED', index=2, number=2,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='SHUTDOWN', index=3, number=3,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=595,
  serialized_end=683,
)
_sym_db.RegisterEnumDescriptor(_REPORT_LOGROTATIONREASON)


_REPORT_SOURCECOUNTS = _descriptor.Descriptor(
  name='SourceCounts',
  full_name='ukm.Report.SourceCounts',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='observed', full_name='ukm.Report.SourceCounts.observed', index=0,
      number=1, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='navigation_sources', full_name='ukm.Report.SourceCounts.navigation_sources', index=1,
      number=2, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='unmatched_sources', full_name='ukm.Report.SourceCounts.unmatched_sources', index=2,
      number=3, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='carryover_sources', full_name='ukm.Report.SourceCounts.carryover_sources', index=3,
      number=4, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='deferred_sources', full_name='ukm.Report.SourceCounts.deferred_sources', index=4,
      number=5, type=5, cpp_type=1, label=1,
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
  serialized_start=453,
  serialized_end=593,
)

_REPORT = _descriptor.Descriptor(
  name='Report',
  full_name='ukm.Report',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='client_id', full_name='ukm.Report.client_id', index=0,
      number=1, type=6, cpp_type=4, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='session_id', full_name='ukm.Report.session_id', index=1,
      number=5, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='report_id', full_name='ukm.Report.report_id', index=2,
      number=6, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='is_continuous', full_name='ukm.Report.is_continuous', index=3,
      number=8, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='log_rotation_reason', full_name='ukm.Report.log_rotation_reason', index=4,
      number=9, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='system_profile', full_name='ukm.Report.system_profile', index=5,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='sources', full_name='ukm.Report.sources', index=6,
      number=3, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='source_counts', full_name='ukm.Report.source_counts', index=7,
      number=10, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='entries', full_name='ukm.Report.entries', index=8,
      number=4, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='aggregates', full_name='ukm.Report.aggregates', index=9,
      number=7, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[_REPORT_SOURCECOUNTS, ],
  enum_types=[
    _REPORT_LOGROTATIONREASON,
  ],
  options=None,
  is_extendable=False,
  syntax='proto2',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=104,
  serialized_end=683,
)

_REPORT_SOURCECOUNTS.containing_type = _REPORT
_REPORT.fields_by_name['log_rotation_reason'].enum_type = _REPORT_LOGROTATIONREASON
_REPORT.fields_by_name['system_profile'].message_type = system__profile__pb2._SYSTEMPROFILEPROTO
_REPORT.fields_by_name['sources'].message_type = ukm_dot_source__pb2._SOURCE
_REPORT.fields_by_name['source_counts'].message_type = _REPORT_SOURCECOUNTS
_REPORT.fields_by_name['entries'].message_type = ukm_dot_entry__pb2._ENTRY
_REPORT.fields_by_name['aggregates'].message_type = ukm_dot_aggregate__pb2._AGGREGATE
_REPORT_LOGROTATIONREASON.containing_type = _REPORT
DESCRIPTOR.message_types_by_name['Report'] = _REPORT
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

Report = _reflection.GeneratedProtocolMessageType('Report', (_message.Message,), dict(

  SourceCounts = _reflection.GeneratedProtocolMessageType('SourceCounts', (_message.Message,), dict(
    DESCRIPTOR = _REPORT_SOURCECOUNTS,
    __module__ = 'ukm.report_pb2'
    # @@protoc_insertion_point(class_scope:ukm.Report.SourceCounts)
    ))
  ,
  DESCRIPTOR = _REPORT,
  __module__ = 'ukm.report_pb2'
  # @@protoc_insertion_point(class_scope:ukm.Report)
  ))
_sym_db.RegisterMessage(Report)
_sym_db.RegisterMessage(Report.SourceCounts)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('H\003'))
# @@protoc_insertion_point(module_scope)
