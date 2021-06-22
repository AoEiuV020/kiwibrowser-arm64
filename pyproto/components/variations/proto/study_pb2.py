# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: study.proto

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
  name='study.proto',
  package='variations',
  syntax='proto2',
  serialized_pb=_b('\n\x0bstudy.proto\x12\nvariations\"\xa2\x0f\n\x05Study\x12\x0c\n\x04name\x18\x01 \x02(\t\x12\x13\n\x0b\x65xpiry_date\x18\x03 \x01(\x03\x12;\n\x0b\x63onsistency\x18\x07 \x01(\x0e\x32\x1d.variations.Study.Consistency:\x07SESSION\x12\x1f\n\x17\x64\x65\x66\x61ult_experiment_name\x18\x08 \x01(\t\x12\x30\n\nexperiment\x18\t \x03(\x0b\x32\x1c.variations.Study.Experiment\x12(\n\x06\x66ilter\x18\n \x01(\x0b\x32\x18.variations.Study.Filter\x12\x1a\n\x12randomization_seed\x18\x0b \x01(\r\x12\x39\n\x0f\x61\x63tivation_type\x18\x0c \x01(\x0e\x32 .variations.Study.ActivationType\x1a\xec\x05\n\nExperiment\x12\x0c\n\x04name\x18\x01 \x02(\t\x12\x1a\n\x12probability_weight\x18\x02 \x02(\r\x12 \n\x18google_web_experiment_id\x18\x03 \x01(\x04\x12(\n google_web_trigger_experiment_id\x18\x08 \x01(\x04\x12!\n\x19\x63hrome_sync_experiment_id\x18\n \x01(\x04\x12L\n\x13\x66\x65\x61ture_association\x18\x0c \x01(\x0b\x32/.variations.Study.Experiment.FeatureAssociation\x12\x14\n\x0c\x66orcing_flag\x18\x05 \x01(\t\x12\x31\n\x05param\x18\x06 \x03(\x0b\x32\".variations.Study.Experiment.Param\x12\x37\n\x04type\x18\x07 \x01(\x0e\x32!.variations.Study.Experiment.Type:\x06NORMAL\x12I\n\x12override_ui_string\x18\t \x03(\x0b\x32-.variations.Study.Experiment.OverrideUIString\x1a$\n\x05Param\x12\x0c\n\x04name\x18\x01 \x01(\t\x12\r\n\x05value\x18\x02 \x01(\t\x1a~\n\x12\x46\x65\x61tureAssociation\x12\x16\n\x0e\x65nable_feature\x18\x01 \x03(\t\x12\x17\n\x0f\x64isable_feature\x18\x02 \x03(\t\x12\x1a\n\x12\x66orcing_feature_on\x18\x03 \x01(\t\x12\x1b\n\x13\x66orcing_feature_off\x18\x04 \x01(\t\x1a\x34\n\x10OverrideUIString\x12\x11\n\tname_hash\x18\x01 \x01(\x07\x12\r\n\x05value\x18\x02 \x01(\t\"N\n\x04Type\x12\n\n\x06NORMAL\x10\x00\x12\x11\n\rIGNORE_CHANGE\x10\x01\x12\x14\n\x10KILL_BEST_EFFORT\x10\x02\x12\x11\n\rKILL_CRITICAL\x10\x03\x1a\xc5\x03\n\x06\x46ilter\x12\x12\n\nstart_date\x18\x01 \x01(\x03\x12\x10\n\x08\x65nd_date\x18\r \x01(\x03\x12\x13\n\x0bmin_version\x18\x02 \x01(\t\x12\x13\n\x0bmax_version\x18\x03 \x01(\t\x12*\n\x07\x63hannel\x18\x04 \x03(\x0e\x32\x19.variations.Study.Channel\x12,\n\x08platform\x18\x05 \x03(\x0e\x32\x1a.variations.Study.Platform\x12\x0e\n\x06locale\x18\x06 \x03(\t\x12\x16\n\x0e\x65xclude_locale\x18\x0c \x03(\t\x12\x31\n\x0b\x66orm_factor\x18\x07 \x03(\x0e\x32\x1c.variations.Study.FormFactor\x12\x39\n\x13\x65xclude_form_factor\x18\x0e \x03(\x0e\x32\x1c.variations.Study.FormFactor\x12\x16\n\x0ehardware_class\x18\x08 \x03(\t\x12\x1e\n\x16\x65xclude_hardware_class\x18\t \x03(\t\x12\x0f\n\x07\x63ountry\x18\n \x03(\t\x12\x17\n\x0f\x65xclude_country\x18\x0b \x03(\t\x12\x19\n\x11is_low_end_device\x18\x0f \x01(\x08\")\n\x0b\x43onsistency\x12\x0b\n\x07SESSION\x10\x00\x12\r\n\tPERMANENT\x10\x01\"J\n\x07\x43hannel\x12\x14\n\x07UNKNOWN\x10\xff\xff\xff\xff\xff\xff\xff\xff\xff\x01\x12\n\n\x06\x43\x41NARY\x10\x00\x12\x07\n\x03\x44\x45V\x10\x01\x12\x08\n\x04\x42\x45TA\x10\x02\x12\n\n\x06STABLE\x10\x03\"\xb9\x01\n\x08Platform\x12\x14\n\x10PLATFORM_WINDOWS\x10\x00\x12\x10\n\x0cPLATFORM_MAC\x10\x01\x12\x12\n\x0ePLATFORM_LINUX\x10\x02\x12\x15\n\x11PLATFORM_CHROMEOS\x10\x03\x12\x14\n\x10PLATFORM_ANDROID\x10\x04\x12\x10\n\x0cPLATFORM_IOS\x10\x05\x12\x1c\n\x18PLATFORM_ANDROID_WEBVIEW\x10\x06\x12\x14\n\x10PLATFORM_FUCHSIA\x10\x07\";\n\nFormFactor\x12\x0b\n\x07\x44\x45SKTOP\x10\x00\x12\t\n\x05PHONE\x10\x01\x12\n\n\x06TABLET\x10\x02\x12\t\n\x05KIOSK\x10\x03\">\n\x0e\x41\x63tivationType\x12\x17\n\x13\x41\x43TIVATION_EXPLICIT\x10\x00\x12\x13\n\x0f\x41\x43TIVATION_AUTO\x10\x01\x42\x02H\x03')
)



_STUDY_EXPERIMENT_TYPE = _descriptor.EnumDescriptor(
  name='Type',
  full_name='variations.Study.Experiment.Type',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='NORMAL', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='IGNORE_CHANGE', index=1, number=1,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='KILL_BEST_EFFORT', index=2, number=2,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='KILL_CRITICAL', index=3, number=3,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=1016,
  serialized_end=1094,
)
_sym_db.RegisterEnumDescriptor(_STUDY_EXPERIMENT_TYPE)

_STUDY_CONSISTENCY = _descriptor.EnumDescriptor(
  name='Consistency',
  full_name='variations.Study.Consistency',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='SESSION', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PERMANENT', index=1, number=1,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=1552,
  serialized_end=1593,
)
_sym_db.RegisterEnumDescriptor(_STUDY_CONSISTENCY)

_STUDY_CHANNEL = _descriptor.EnumDescriptor(
  name='Channel',
  full_name='variations.Study.Channel',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='UNKNOWN', index=0, number=-1,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='CANARY', index=1, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='DEV', index=2, number=1,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='BETA', index=3, number=2,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='STABLE', index=4, number=3,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=1595,
  serialized_end=1669,
)
_sym_db.RegisterEnumDescriptor(_STUDY_CHANNEL)

_STUDY_PLATFORM = _descriptor.EnumDescriptor(
  name='Platform',
  full_name='variations.Study.Platform',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='PLATFORM_WINDOWS', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PLATFORM_MAC', index=1, number=1,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PLATFORM_LINUX', index=2, number=2,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PLATFORM_CHROMEOS', index=3, number=3,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PLATFORM_ANDROID', index=4, number=4,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PLATFORM_IOS', index=5, number=5,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PLATFORM_ANDROID_WEBVIEW', index=6, number=6,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PLATFORM_FUCHSIA', index=7, number=7,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=1672,
  serialized_end=1857,
)
_sym_db.RegisterEnumDescriptor(_STUDY_PLATFORM)

_STUDY_FORMFACTOR = _descriptor.EnumDescriptor(
  name='FormFactor',
  full_name='variations.Study.FormFactor',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='DESKTOP', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PHONE', index=1, number=1,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='TABLET', index=2, number=2,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='KIOSK', index=3, number=3,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=1859,
  serialized_end=1918,
)
_sym_db.RegisterEnumDescriptor(_STUDY_FORMFACTOR)

_STUDY_ACTIVATIONTYPE = _descriptor.EnumDescriptor(
  name='ActivationType',
  full_name='variations.Study.ActivationType',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='ACTIVATION_EXPLICIT', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='ACTIVATION_AUTO', index=1, number=1,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=1920,
  serialized_end=1982,
)
_sym_db.RegisterEnumDescriptor(_STUDY_ACTIVATIONTYPE)


_STUDY_EXPERIMENT_PARAM = _descriptor.Descriptor(
  name='Param',
  full_name='variations.Study.Experiment.Param',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='name', full_name='variations.Study.Experiment.Param.name', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='value', full_name='variations.Study.Experiment.Param.value', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
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
  serialized_start=796,
  serialized_end=832,
)

_STUDY_EXPERIMENT_FEATUREASSOCIATION = _descriptor.Descriptor(
  name='FeatureAssociation',
  full_name='variations.Study.Experiment.FeatureAssociation',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='enable_feature', full_name='variations.Study.Experiment.FeatureAssociation.enable_feature', index=0,
      number=1, type=9, cpp_type=9, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='disable_feature', full_name='variations.Study.Experiment.FeatureAssociation.disable_feature', index=1,
      number=2, type=9, cpp_type=9, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='forcing_feature_on', full_name='variations.Study.Experiment.FeatureAssociation.forcing_feature_on', index=2,
      number=3, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='forcing_feature_off', full_name='variations.Study.Experiment.FeatureAssociation.forcing_feature_off', index=3,
      number=4, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
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
  serialized_start=834,
  serialized_end=960,
)

_STUDY_EXPERIMENT_OVERRIDEUISTRING = _descriptor.Descriptor(
  name='OverrideUIString',
  full_name='variations.Study.Experiment.OverrideUIString',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='name_hash', full_name='variations.Study.Experiment.OverrideUIString.name_hash', index=0,
      number=1, type=7, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='value', full_name='variations.Study.Experiment.OverrideUIString.value', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
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
  serialized_start=962,
  serialized_end=1014,
)

_STUDY_EXPERIMENT = _descriptor.Descriptor(
  name='Experiment',
  full_name='variations.Study.Experiment',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='name', full_name='variations.Study.Experiment.name', index=0,
      number=1, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='probability_weight', full_name='variations.Study.Experiment.probability_weight', index=1,
      number=2, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='google_web_experiment_id', full_name='variations.Study.Experiment.google_web_experiment_id', index=2,
      number=3, type=4, cpp_type=4, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='google_web_trigger_experiment_id', full_name='variations.Study.Experiment.google_web_trigger_experiment_id', index=3,
      number=8, type=4, cpp_type=4, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='chrome_sync_experiment_id', full_name='variations.Study.Experiment.chrome_sync_experiment_id', index=4,
      number=10, type=4, cpp_type=4, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='feature_association', full_name='variations.Study.Experiment.feature_association', index=5,
      number=12, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='forcing_flag', full_name='variations.Study.Experiment.forcing_flag', index=6,
      number=5, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='param', full_name='variations.Study.Experiment.param', index=7,
      number=6, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='type', full_name='variations.Study.Experiment.type', index=8,
      number=7, type=14, cpp_type=8, label=1,
      has_default_value=True, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='override_ui_string', full_name='variations.Study.Experiment.override_ui_string', index=9,
      number=9, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[_STUDY_EXPERIMENT_PARAM, _STUDY_EXPERIMENT_FEATUREASSOCIATION, _STUDY_EXPERIMENT_OVERRIDEUISTRING, ],
  enum_types=[
    _STUDY_EXPERIMENT_TYPE,
  ],
  options=None,
  is_extendable=False,
  syntax='proto2',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=346,
  serialized_end=1094,
)

_STUDY_FILTER = _descriptor.Descriptor(
  name='Filter',
  full_name='variations.Study.Filter',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='start_date', full_name='variations.Study.Filter.start_date', index=0,
      number=1, type=3, cpp_type=2, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='end_date', full_name='variations.Study.Filter.end_date', index=1,
      number=13, type=3, cpp_type=2, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='min_version', full_name='variations.Study.Filter.min_version', index=2,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='max_version', full_name='variations.Study.Filter.max_version', index=3,
      number=3, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='channel', full_name='variations.Study.Filter.channel', index=4,
      number=4, type=14, cpp_type=8, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='platform', full_name='variations.Study.Filter.platform', index=5,
      number=5, type=14, cpp_type=8, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='locale', full_name='variations.Study.Filter.locale', index=6,
      number=6, type=9, cpp_type=9, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='exclude_locale', full_name='variations.Study.Filter.exclude_locale', index=7,
      number=12, type=9, cpp_type=9, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='form_factor', full_name='variations.Study.Filter.form_factor', index=8,
      number=7, type=14, cpp_type=8, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='exclude_form_factor', full_name='variations.Study.Filter.exclude_form_factor', index=9,
      number=14, type=14, cpp_type=8, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='hardware_class', full_name='variations.Study.Filter.hardware_class', index=10,
      number=8, type=9, cpp_type=9, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='exclude_hardware_class', full_name='variations.Study.Filter.exclude_hardware_class', index=11,
      number=9, type=9, cpp_type=9, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='country', full_name='variations.Study.Filter.country', index=12,
      number=10, type=9, cpp_type=9, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='exclude_country', full_name='variations.Study.Filter.exclude_country', index=13,
      number=11, type=9, cpp_type=9, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='is_low_end_device', full_name='variations.Study.Filter.is_low_end_device', index=14,
      number=15, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
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
  serialized_start=1097,
  serialized_end=1550,
)

_STUDY = _descriptor.Descriptor(
  name='Study',
  full_name='variations.Study',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='name', full_name='variations.Study.name', index=0,
      number=1, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='expiry_date', full_name='variations.Study.expiry_date', index=1,
      number=3, type=3, cpp_type=2, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='consistency', full_name='variations.Study.consistency', index=2,
      number=7, type=14, cpp_type=8, label=1,
      has_default_value=True, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='default_experiment_name', full_name='variations.Study.default_experiment_name', index=3,
      number=8, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='experiment', full_name='variations.Study.experiment', index=4,
      number=9, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='filter', full_name='variations.Study.filter', index=5,
      number=10, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='randomization_seed', full_name='variations.Study.randomization_seed', index=6,
      number=11, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='activation_type', full_name='variations.Study.activation_type', index=7,
      number=12, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[_STUDY_EXPERIMENT, _STUDY_FILTER, ],
  enum_types=[
    _STUDY_CONSISTENCY,
    _STUDY_CHANNEL,
    _STUDY_PLATFORM,
    _STUDY_FORMFACTOR,
    _STUDY_ACTIVATIONTYPE,
  ],
  options=None,
  is_extendable=False,
  syntax='proto2',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=28,
  serialized_end=1982,
)

_STUDY_EXPERIMENT_PARAM.containing_type = _STUDY_EXPERIMENT
_STUDY_EXPERIMENT_FEATUREASSOCIATION.containing_type = _STUDY_EXPERIMENT
_STUDY_EXPERIMENT_OVERRIDEUISTRING.containing_type = _STUDY_EXPERIMENT
_STUDY_EXPERIMENT.fields_by_name['feature_association'].message_type = _STUDY_EXPERIMENT_FEATUREASSOCIATION
_STUDY_EXPERIMENT.fields_by_name['param'].message_type = _STUDY_EXPERIMENT_PARAM
_STUDY_EXPERIMENT.fields_by_name['type'].enum_type = _STUDY_EXPERIMENT_TYPE
_STUDY_EXPERIMENT.fields_by_name['override_ui_string'].message_type = _STUDY_EXPERIMENT_OVERRIDEUISTRING
_STUDY_EXPERIMENT.containing_type = _STUDY
_STUDY_EXPERIMENT_TYPE.containing_type = _STUDY_EXPERIMENT
_STUDY_FILTER.fields_by_name['channel'].enum_type = _STUDY_CHANNEL
_STUDY_FILTER.fields_by_name['platform'].enum_type = _STUDY_PLATFORM
_STUDY_FILTER.fields_by_name['form_factor'].enum_type = _STUDY_FORMFACTOR
_STUDY_FILTER.fields_by_name['exclude_form_factor'].enum_type = _STUDY_FORMFACTOR
_STUDY_FILTER.containing_type = _STUDY
_STUDY.fields_by_name['consistency'].enum_type = _STUDY_CONSISTENCY
_STUDY.fields_by_name['experiment'].message_type = _STUDY_EXPERIMENT
_STUDY.fields_by_name['filter'].message_type = _STUDY_FILTER
_STUDY.fields_by_name['activation_type'].enum_type = _STUDY_ACTIVATIONTYPE
_STUDY_CONSISTENCY.containing_type = _STUDY
_STUDY_CHANNEL.containing_type = _STUDY
_STUDY_PLATFORM.containing_type = _STUDY
_STUDY_FORMFACTOR.containing_type = _STUDY
_STUDY_ACTIVATIONTYPE.containing_type = _STUDY
DESCRIPTOR.message_types_by_name['Study'] = _STUDY
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

Study = _reflection.GeneratedProtocolMessageType('Study', (_message.Message,), dict(

  Experiment = _reflection.GeneratedProtocolMessageType('Experiment', (_message.Message,), dict(

    Param = _reflection.GeneratedProtocolMessageType('Param', (_message.Message,), dict(
      DESCRIPTOR = _STUDY_EXPERIMENT_PARAM,
      __module__ = 'study_pb2'
      # @@protoc_insertion_point(class_scope:variations.Study.Experiment.Param)
      ))
    ,

    FeatureAssociation = _reflection.GeneratedProtocolMessageType('FeatureAssociation', (_message.Message,), dict(
      DESCRIPTOR = _STUDY_EXPERIMENT_FEATUREASSOCIATION,
      __module__ = 'study_pb2'
      # @@protoc_insertion_point(class_scope:variations.Study.Experiment.FeatureAssociation)
      ))
    ,

    OverrideUIString = _reflection.GeneratedProtocolMessageType('OverrideUIString', (_message.Message,), dict(
      DESCRIPTOR = _STUDY_EXPERIMENT_OVERRIDEUISTRING,
      __module__ = 'study_pb2'
      # @@protoc_insertion_point(class_scope:variations.Study.Experiment.OverrideUIString)
      ))
    ,
    DESCRIPTOR = _STUDY_EXPERIMENT,
    __module__ = 'study_pb2'
    # @@protoc_insertion_point(class_scope:variations.Study.Experiment)
    ))
  ,

  Filter = _reflection.GeneratedProtocolMessageType('Filter', (_message.Message,), dict(
    DESCRIPTOR = _STUDY_FILTER,
    __module__ = 'study_pb2'
    # @@protoc_insertion_point(class_scope:variations.Study.Filter)
    ))
  ,
  DESCRIPTOR = _STUDY,
  __module__ = 'study_pb2'
  # @@protoc_insertion_point(class_scope:variations.Study)
  ))
_sym_db.RegisterMessage(Study)
_sym_db.RegisterMessage(Study.Experiment)
_sym_db.RegisterMessage(Study.Experiment.Param)
_sym_db.RegisterMessage(Study.Experiment.FeatureAssociation)
_sym_db.RegisterMessage(Study.Experiment.OverrideUIString)
_sym_db.RegisterMessage(Study.Filter)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('H\003'))
# @@protoc_insertion_point(module_scope)
