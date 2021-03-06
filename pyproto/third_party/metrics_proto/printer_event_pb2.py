# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: printer_event.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='printer_event.proto',
  package='metrics',
  syntax='proto2',
  serialized_pb=_b('\n\x13printer_event.proto\x12\x07metrics\"\xe8\x02\n\x11PrinterEventProto\x12 \n\x18usb_printer_manufacturer\x18\x01 \x01(\t\x12\x19\n\x11usb_printer_model\x18\x02 \x01(\t\x12\x15\n\rusb_vendor_id\x18\x03 \x01(\x05\x12\x14\n\x0cusb_model_id\x18\x04 \x01(\x05\x12\x1a\n\x12ipp_make_and_model\x18\x05 \x01(\t\x12\x10\n\x08user_ppd\x18\x06 \x01(\x08\x12\x16\n\x0eppd_identifier\x18\x07 \x01(\t\x12\x38\n\nevent_type\x18\x08 \x01(\x0e\x32$.metrics.PrinterEventProto.EventType\"i\n\tEventType\x12\x0b\n\x07UNKNOWN\x10\x00\x12\x13\n\x0fSETUP_AUTOMATIC\x10\x01\x12\x10\n\x0cSETUP_MANUAL\x10\x02\x12\x13\n\x0fSETUP_ABANDONED\x10\x03\x12\x13\n\x0fPRINTER_DELETED\x10\x04\x42\x37\n\x1forg.chromium.components.metricsB\x12PrinterEventProtosH\x03')
)



_PRINTEREVENTPROTO_EVENTTYPE = _descriptor.EnumDescriptor(
  name='EventType',
  full_name='metrics.PrinterEventProto.EventType',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='UNKNOWN', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='SETUP_AUTOMATIC', index=1, number=1,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='SETUP_MANUAL', index=2, number=2,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='SETUP_ABANDONED', index=3, number=3,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PRINTER_DELETED', index=4, number=4,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=288,
  serialized_end=393,
)
_sym_db.RegisterEnumDescriptor(_PRINTEREVENTPROTO_EVENTTYPE)


_PRINTEREVENTPROTO = _descriptor.Descriptor(
  name='PrinterEventProto',
  full_name='metrics.PrinterEventProto',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='usb_printer_manufacturer', full_name='metrics.PrinterEventProto.usb_printer_manufacturer', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='usb_printer_model', full_name='metrics.PrinterEventProto.usb_printer_model', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='usb_vendor_id', full_name='metrics.PrinterEventProto.usb_vendor_id', index=2,
      number=3, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='usb_model_id', full_name='metrics.PrinterEventProto.usb_model_id', index=3,
      number=4, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='ipp_make_and_model', full_name='metrics.PrinterEventProto.ipp_make_and_model', index=4,
      number=5, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='user_ppd', full_name='metrics.PrinterEventProto.user_ppd', index=5,
      number=6, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='ppd_identifier', full_name='metrics.PrinterEventProto.ppd_identifier', index=6,
      number=7, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='event_type', full_name='metrics.PrinterEventProto.event_type', index=7,
      number=8, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
    _PRINTEREVENTPROTO_EVENTTYPE,
  ],
  options=None,
  is_extendable=False,
  syntax='proto2',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=33,
  serialized_end=393,
)

_PRINTEREVENTPROTO.fields_by_name['event_type'].enum_type = _PRINTEREVENTPROTO_EVENTTYPE
_PRINTEREVENTPROTO_EVENTTYPE.containing_type = _PRINTEREVENTPROTO
DESCRIPTOR.message_types_by_name['PrinterEventProto'] = _PRINTEREVENTPROTO
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

PrinterEventProto = _reflection.GeneratedProtocolMessageType('PrinterEventProto', (_message.Message,), dict(
  DESCRIPTOR = _PRINTEREVENTPROTO,
  __module__ = 'printer_event_pb2'
  # @@protoc_insertion_point(class_scope:metrics.PrinterEventProto)
  ))
_sym_db.RegisterMessage(PrinterEventProto)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('\n\037org.chromium.components.metricsB\022PrinterEventProtosH\003'))
# @@protoc_insertion_point(module_scope)
