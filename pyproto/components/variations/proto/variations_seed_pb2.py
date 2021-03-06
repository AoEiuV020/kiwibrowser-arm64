# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: variations_seed.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import study_pb2 as study__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='variations_seed.proto',
  package='variations',
  syntax='proto2',
  serialized_pb=_b('\n\x15variations_seed.proto\x12\nvariations\x1a\x0bstudy.proto\"c\n\x0eVariationsSeed\x12\x15\n\rserial_number\x18\x01 \x01(\t\x12 \n\x05study\x18\x02 \x03(\x0b\x32\x11.variations.Study\x12\x18\n\x0c\x63ountry_code\x18\x03 \x01(\tB\x02\x18\x01\x42\x02H\x03')
  ,
  dependencies=[study__pb2.DESCRIPTOR,])




_VARIATIONSSEED = _descriptor.Descriptor(
  name='VariationsSeed',
  full_name='variations.VariationsSeed',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='serial_number', full_name='variations.VariationsSeed.serial_number', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='study', full_name='variations.VariationsSeed.study', index=1,
      number=2, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='country_code', full_name='variations.VariationsSeed.country_code', index=2,
      number=3, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=_descriptor._ParseOptions(descriptor_pb2.FieldOptions(), _b('\030\001'))),
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
  serialized_start=50,
  serialized_end=149,
)

_VARIATIONSSEED.fields_by_name['study'].message_type = study__pb2._STUDY
DESCRIPTOR.message_types_by_name['VariationsSeed'] = _VARIATIONSSEED
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

VariationsSeed = _reflection.GeneratedProtocolMessageType('VariationsSeed', (_message.Message,), dict(
  DESCRIPTOR = _VARIATIONSSEED,
  __module__ = 'variations_seed_pb2'
  # @@protoc_insertion_point(class_scope:variations.VariationsSeed)
  ))
_sym_db.RegisterMessage(VariationsSeed)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('H\003'))
_VARIATIONSSEED.fields_by_name['country_code'].has_options = True
_VARIATIONSSEED.fields_by_name['country_code']._options = _descriptor._ParseOptions(descriptor_pb2.FieldOptions(), _b('\030\001'))
# @@protoc_insertion_point(module_scope)
