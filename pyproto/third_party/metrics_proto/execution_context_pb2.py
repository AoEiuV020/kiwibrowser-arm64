# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: execution_context.proto

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
  name='execution_context.proto',
  package='metrics',
  syntax='proto2',
  serialized_pb=_b('\n\x17\x65xecution_context.proto\x12\x07metrics*\xd3\x01\n\x07Process\x12\x13\n\x0fUNKNOWN_PROCESS\x10\x00\x12\x13\n\x0f\x42ROWSER_PROCESS\x10\x01\x12\x14\n\x10RENDERER_PROCESS\x10\x02\x12\x0f\n\x0bGPU_PROCESS\x10\x03\x12\x13\n\x0fUTILITY_PROCESS\x10\x04\x12\x12\n\x0eZYGOTE_PROCESS\x10\x05\x12\x1a\n\x16SANDBOX_HELPER_PROCESS\x10\x06\x12\x18\n\x14PPAPI_PLUGIN_PROCESS\x10\x07\x12\x18\n\x14PPAPI_BROKER_PROCESS\x10\x08*\xfb\x01\n\x06Thread\x12\x12\n\x0eUNKNOWN_THREAD\x10\x00\x12\r\n\tUI_THREAD\x10\x01\x12\x0f\n\x0b\x46ILE_THREAD\x10\x02\x12\x1d\n\x19\x46ILE_USER_BLOCKING_THREAD\x10\x03\x12\x1b\n\x17PROCESS_LAUNCHER_THREAD\x10\x04\x12\x10\n\x0c\x43\x41\x43HE_THREAD\x10\x05\x12\r\n\tIO_THREAD\x10\x06\x12\r\n\tDB_THREAD\x10\x07\x12\x13\n\x0fGPU_MAIN_THREAD\x10\x08\x12\x11\n\rRENDER_THREAD\x10\t\x12\x12\n\x0eUTILITY_THREAD\x10\n\x12\x15\n\x11\x43OMPOSITOR_THREAD\x10\x0b*\x8a\x01\n\x0cProcessPhase\x12\x13\n\x0fMAIN_LOOP_START\x10\x00\x12\x19\n\x15MAIN_NAVIGATION_START\x10\x01\x12\x1c\n\x18MAIN_NAVIGATION_FINISHED\x10\x02\x12\x18\n\x14\x46IRST_NONEMPTY_PAINT\x10\x03\x12\x12\n\x0eSHUTDOWN_START\x10\x04\x42;\n\x1forg.chromium.components.metricsB\x16\x45xecutionContextProtosH\x03')
)

_PROCESS = _descriptor.EnumDescriptor(
  name='Process',
  full_name='metrics.Process',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='UNKNOWN_PROCESS', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='BROWSER_PROCESS', index=1, number=1,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='RENDERER_PROCESS', index=2, number=2,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='GPU_PROCESS', index=3, number=3,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='UTILITY_PROCESS', index=4, number=4,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='ZYGOTE_PROCESS', index=5, number=5,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='SANDBOX_HELPER_PROCESS', index=6, number=6,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PPAPI_PLUGIN_PROCESS', index=7, number=7,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PPAPI_BROKER_PROCESS', index=8, number=8,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=37,
  serialized_end=248,
)
_sym_db.RegisterEnumDescriptor(_PROCESS)

Process = enum_type_wrapper.EnumTypeWrapper(_PROCESS)
_THREAD = _descriptor.EnumDescriptor(
  name='Thread',
  full_name='metrics.Thread',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='UNKNOWN_THREAD', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='UI_THREAD', index=1, number=1,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='FILE_THREAD', index=2, number=2,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='FILE_USER_BLOCKING_THREAD', index=3, number=3,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PROCESS_LAUNCHER_THREAD', index=4, number=4,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='CACHE_THREAD', index=5, number=5,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='IO_THREAD', index=6, number=6,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='DB_THREAD', index=7, number=7,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='GPU_MAIN_THREAD', index=8, number=8,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='RENDER_THREAD', index=9, number=9,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='UTILITY_THREAD', index=10, number=10,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='COMPOSITOR_THREAD', index=11, number=11,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=251,
  serialized_end=502,
)
_sym_db.RegisterEnumDescriptor(_THREAD)

Thread = enum_type_wrapper.EnumTypeWrapper(_THREAD)
_PROCESSPHASE = _descriptor.EnumDescriptor(
  name='ProcessPhase',
  full_name='metrics.ProcessPhase',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='MAIN_LOOP_START', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='MAIN_NAVIGATION_START', index=1, number=1,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='MAIN_NAVIGATION_FINISHED', index=2, number=2,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='FIRST_NONEMPTY_PAINT', index=3, number=3,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='SHUTDOWN_START', index=4, number=4,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=505,
  serialized_end=643,
)
_sym_db.RegisterEnumDescriptor(_PROCESSPHASE)

ProcessPhase = enum_type_wrapper.EnumTypeWrapper(_PROCESSPHASE)
UNKNOWN_PROCESS = 0
BROWSER_PROCESS = 1
RENDERER_PROCESS = 2
GPU_PROCESS = 3
UTILITY_PROCESS = 4
ZYGOTE_PROCESS = 5
SANDBOX_HELPER_PROCESS = 6
PPAPI_PLUGIN_PROCESS = 7
PPAPI_BROKER_PROCESS = 8
UNKNOWN_THREAD = 0
UI_THREAD = 1
FILE_THREAD = 2
FILE_USER_BLOCKING_THREAD = 3
PROCESS_LAUNCHER_THREAD = 4
CACHE_THREAD = 5
IO_THREAD = 6
DB_THREAD = 7
GPU_MAIN_THREAD = 8
RENDER_THREAD = 9
UTILITY_THREAD = 10
COMPOSITOR_THREAD = 11
MAIN_LOOP_START = 0
MAIN_NAVIGATION_START = 1
MAIN_NAVIGATION_FINISHED = 2
FIRST_NONEMPTY_PAINT = 3
SHUTDOWN_START = 4


DESCRIPTOR.enum_types_by_name['Process'] = _PROCESS
DESCRIPTOR.enum_types_by_name['Thread'] = _THREAD
DESCRIPTOR.enum_types_by_name['ProcessPhase'] = _PROCESSPHASE
_sym_db.RegisterFileDescriptor(DESCRIPTOR)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('\n\037org.chromium.components.metricsB\026ExecutionContextProtosH\003'))
# @@protoc_insertion_point(module_scope)
