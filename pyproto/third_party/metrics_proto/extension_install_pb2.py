# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: extension_install.proto

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
  name='extension_install.proto',
  package='metrics',
  syntax='proto2',
  serialized_pb=_b('\n\x17\x65xtension_install.proto\x12\x07metrics\"\xb7\x0e\n\x15\x45xtensionInstallProto\x12\x31\n\x04type\x18\x01 \x01(\x0e\x32#.metrics.ExtensionInstallProto.Type\x12H\n\x10install_location\x18\x02 \x01(\x0e\x32..metrics.ExtensionInstallProto.InstallLocation\x12\x18\n\x10manifest_version\x18\x03 \x01(\x05\x12>\n\x0b\x61\x63tion_type\x18\x04 \x01(\x0e\x32).metrics.ExtensionInstallProto.ActionType\x12\x17\n\x0fhas_file_access\x18\x05 \x01(\x08\x12\x1c\n\x14has_incognito_access\x18\x06 \x01(\x08\x12\x15\n\ris_from_store\x18\x07 \x01(\x08\x12\x1a\n\x12updates_from_store\x18\x08 \x01(\x08\x12\x18\n\x10is_from_bookmark\x18\t \x01(\x08\x12%\n\x1dis_converted_from_user_script\x18\n \x01(\x08\x12\x1c\n\x14is_default_installed\x18\x0b \x01(\x08\x12\x18\n\x10is_oem_installed\x18\x0c \x01(\x08\x12S\n\x16\x62\x61\x63kground_script_type\x18\r \x01(\x0e\x32\x33.metrics.ExtensionInstallProto.BackgroundScriptType\x12\x45\n\x0f\x64isable_reasons\x18\x0e \x03(\x0e\x32,.metrics.ExtensionInstallProto.DisableReason\x12\x46\n\x0f\x62lacklist_state\x18\x0f \x01(\x0e\x32-.metrics.ExtensionInstallProto.BlacklistState\x12\'\n\x1finstalled_in_this_sample_period\x18\x10 \x01(\x08\"\x91\x01\n\x04Type\x12\x10\n\x0cUNKNOWN_TYPE\x10\x00\x12\r\n\tEXTENSION\x10\x01\x12\t\n\x05THEME\x10\x02\x12\x0f\n\x0bUSER_SCRIPT\x10\x03\x12\x0e\n\nHOSTED_APP\x10\x04\x12\x17\n\x13LEGACY_PACKAGED_APP\x10\x05\x12\x10\n\x0cPLATFORM_APP\x10\x06\x12\x11\n\rSHARED_MODULE\x10\x07\"\xf5\x01\n\x0fInstallLocation\x12\x14\n\x10UNKNOWN_LOCATION\x10\x00\x12\x0c\n\x08INTERNAL\x10\x01\x12\x11\n\rEXTERNAL_PREF\x10\x02\x12\x15\n\x11\x45XTERNAL_REGISTRY\x10\x03\x12\x0c\n\x08UNPACKED\x10\x04\x12\r\n\tCOMPONENT\x10\x05\x12\x1a\n\x16\x45XTERNAL_PREF_DOWNLOAD\x10\x06\x12\x1c\n\x18\x45XTERNAL_POLICY_DOWNLOAD\x10\x07\x12\x10\n\x0c\x43OMMAND_LINE\x10\x08\x12\x13\n\x0f\x45XTERNAL_POLICY\x10\t\x12\x16\n\x12\x45XTERNAL_COMPONENT\x10\n\"V\n\nActionType\x12\r\n\tNO_ACTION\x10\x00\x12\x12\n\x0e\x42ROWSER_ACTION\x10\x01\x12\x0f\n\x0bPAGE_ACTION\x10\x02\x12\x14\n\x10SYSTEM_INDICATOR\x10\x03\"`\n\x14\x42\x61\x63kgroundScriptType\x12\x18\n\x14NO_BACKGROUND_SCRIPT\x10\x00\x12\x1e\n\x1aPERSISTENT_BACKGROUND_PAGE\x10\x01\x12\x0e\n\nEVENT_PAGE\x10\x02\"\xc2\x02\n\rDisableReason\x12\x0f\n\x0bUSER_ACTION\x10\x00\x12\x18\n\x14PERMISSIONS_INCREASE\x10\x01\x12\n\n\x06RELOAD\x10\x02\x12\x1b\n\x17UNSUPPORTED_REQUIREMENT\x10\x03\x12\x14\n\x10SIDELOAD_WIPEOUT\x10\x04\x12\x15\n\x11UNKNOWN_FROM_SYNC\x10\x05\x12\x10\n\x0cNOT_VERIFIED\x10\x06\x12\x0c\n\x08GREYLIST\x10\x07\x12\r\n\tCORRUPTED\x10\x08\x12\x12\n\x0eREMOTE_INSTALL\x10\t\x12\x16\n\x12\x45XTERNAL_EXTENSION\x10\n\x12\x1d\n\x19UPDATE_REQUIRED_BY_POLICY\x10\x0b\x12\x1f\n\x1b\x43USTODIAN_APPROVAL_REQUIRED\x10\x0c\x12\x15\n\x11\x42LOCKED_BY_POLICY\x10\r\"\xcb\x01\n\x0e\x42lacklistState\x12\x13\n\x0fNOT_BLACKLISTED\x10\x00\x12\x17\n\x13\x42LACKLISTED_MALWARE\x10\x01\x12&\n\"BLACKLISTED_SECURITY_VULNERABILITY\x10\x02\x12$\n BLACKLISTED_CWS_POLICY_VIOLATION\x10\x03\x12$\n BLACKLISTED_POTENTIALLY_UNWANTED\x10\x04\x12\x17\n\x13\x42LACKLISTED_UNKNOWN\x10\x05\x42;\n\x1forg.chromium.components.metricsB\x16\x45xtensionInstallProtosH\x03')
)



_EXTENSIONINSTALLPROTO_TYPE = _descriptor.EnumDescriptor(
  name='Type',
  full_name='metrics.ExtensionInstallProto.Type',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='UNKNOWN_TYPE', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='EXTENSION', index=1, number=1,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='THEME', index=2, number=2,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='USER_SCRIPT', index=3, number=3,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='HOSTED_APP', index=4, number=4,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='LEGACY_PACKAGED_APP', index=5, number=5,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PLATFORM_APP', index=6, number=6,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='SHARED_MODULE', index=7, number=7,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=774,
  serialized_end=919,
)
_sym_db.RegisterEnumDescriptor(_EXTENSIONINSTALLPROTO_TYPE)

_EXTENSIONINSTALLPROTO_INSTALLLOCATION = _descriptor.EnumDescriptor(
  name='InstallLocation',
  full_name='metrics.ExtensionInstallProto.InstallLocation',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='UNKNOWN_LOCATION', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='INTERNAL', index=1, number=1,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='EXTERNAL_PREF', index=2, number=2,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='EXTERNAL_REGISTRY', index=3, number=3,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='UNPACKED', index=4, number=4,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='COMPONENT', index=5, number=5,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='EXTERNAL_PREF_DOWNLOAD', index=6, number=6,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='EXTERNAL_POLICY_DOWNLOAD', index=7, number=7,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='COMMAND_LINE', index=8, number=8,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='EXTERNAL_POLICY', index=9, number=9,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='EXTERNAL_COMPONENT', index=10, number=10,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=922,
  serialized_end=1167,
)
_sym_db.RegisterEnumDescriptor(_EXTENSIONINSTALLPROTO_INSTALLLOCATION)

_EXTENSIONINSTALLPROTO_ACTIONTYPE = _descriptor.EnumDescriptor(
  name='ActionType',
  full_name='metrics.ExtensionInstallProto.ActionType',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='NO_ACTION', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='BROWSER_ACTION', index=1, number=1,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PAGE_ACTION', index=2, number=2,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='SYSTEM_INDICATOR', index=3, number=3,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=1169,
  serialized_end=1255,
)
_sym_db.RegisterEnumDescriptor(_EXTENSIONINSTALLPROTO_ACTIONTYPE)

_EXTENSIONINSTALLPROTO_BACKGROUNDSCRIPTTYPE = _descriptor.EnumDescriptor(
  name='BackgroundScriptType',
  full_name='metrics.ExtensionInstallProto.BackgroundScriptType',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='NO_BACKGROUND_SCRIPT', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PERSISTENT_BACKGROUND_PAGE', index=1, number=1,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='EVENT_PAGE', index=2, number=2,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=1257,
  serialized_end=1353,
)
_sym_db.RegisterEnumDescriptor(_EXTENSIONINSTALLPROTO_BACKGROUNDSCRIPTTYPE)

_EXTENSIONINSTALLPROTO_DISABLEREASON = _descriptor.EnumDescriptor(
  name='DisableReason',
  full_name='metrics.ExtensionInstallProto.DisableReason',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='USER_ACTION', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='PERMISSIONS_INCREASE', index=1, number=1,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='RELOAD', index=2, number=2,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='UNSUPPORTED_REQUIREMENT', index=3, number=3,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='SIDELOAD_WIPEOUT', index=4, number=4,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='UNKNOWN_FROM_SYNC', index=5, number=5,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='NOT_VERIFIED', index=6, number=6,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='GREYLIST', index=7, number=7,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='CORRUPTED', index=8, number=8,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='REMOTE_INSTALL', index=9, number=9,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='EXTERNAL_EXTENSION', index=10, number=10,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='UPDATE_REQUIRED_BY_POLICY', index=11, number=11,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='CUSTODIAN_APPROVAL_REQUIRED', index=12, number=12,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='BLOCKED_BY_POLICY', index=13, number=13,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=1356,
  serialized_end=1678,
)
_sym_db.RegisterEnumDescriptor(_EXTENSIONINSTALLPROTO_DISABLEREASON)

_EXTENSIONINSTALLPROTO_BLACKLISTSTATE = _descriptor.EnumDescriptor(
  name='BlacklistState',
  full_name='metrics.ExtensionInstallProto.BlacklistState',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='NOT_BLACKLISTED', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='BLACKLISTED_MALWARE', index=1, number=1,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='BLACKLISTED_SECURITY_VULNERABILITY', index=2, number=2,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='BLACKLISTED_CWS_POLICY_VIOLATION', index=3, number=3,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='BLACKLISTED_POTENTIALLY_UNWANTED', index=4, number=4,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='BLACKLISTED_UNKNOWN', index=5, number=5,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=1681,
  serialized_end=1884,
)
_sym_db.RegisterEnumDescriptor(_EXTENSIONINSTALLPROTO_BLACKLISTSTATE)


_EXTENSIONINSTALLPROTO = _descriptor.Descriptor(
  name='ExtensionInstallProto',
  full_name='metrics.ExtensionInstallProto',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='type', full_name='metrics.ExtensionInstallProto.type', index=0,
      number=1, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='install_location', full_name='metrics.ExtensionInstallProto.install_location', index=1,
      number=2, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='manifest_version', full_name='metrics.ExtensionInstallProto.manifest_version', index=2,
      number=3, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='action_type', full_name='metrics.ExtensionInstallProto.action_type', index=3,
      number=4, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='has_file_access', full_name='metrics.ExtensionInstallProto.has_file_access', index=4,
      number=5, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='has_incognito_access', full_name='metrics.ExtensionInstallProto.has_incognito_access', index=5,
      number=6, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='is_from_store', full_name='metrics.ExtensionInstallProto.is_from_store', index=6,
      number=7, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='updates_from_store', full_name='metrics.ExtensionInstallProto.updates_from_store', index=7,
      number=8, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='is_from_bookmark', full_name='metrics.ExtensionInstallProto.is_from_bookmark', index=8,
      number=9, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='is_converted_from_user_script', full_name='metrics.ExtensionInstallProto.is_converted_from_user_script', index=9,
      number=10, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='is_default_installed', full_name='metrics.ExtensionInstallProto.is_default_installed', index=10,
      number=11, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='is_oem_installed', full_name='metrics.ExtensionInstallProto.is_oem_installed', index=11,
      number=12, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='background_script_type', full_name='metrics.ExtensionInstallProto.background_script_type', index=12,
      number=13, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='disable_reasons', full_name='metrics.ExtensionInstallProto.disable_reasons', index=13,
      number=14, type=14, cpp_type=8, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='blacklist_state', full_name='metrics.ExtensionInstallProto.blacklist_state', index=14,
      number=15, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='installed_in_this_sample_period', full_name='metrics.ExtensionInstallProto.installed_in_this_sample_period', index=15,
      number=16, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
    _EXTENSIONINSTALLPROTO_TYPE,
    _EXTENSIONINSTALLPROTO_INSTALLLOCATION,
    _EXTENSIONINSTALLPROTO_ACTIONTYPE,
    _EXTENSIONINSTALLPROTO_BACKGROUNDSCRIPTTYPE,
    _EXTENSIONINSTALLPROTO_DISABLEREASON,
    _EXTENSIONINSTALLPROTO_BLACKLISTSTATE,
  ],
  options=None,
  is_extendable=False,
  syntax='proto2',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=37,
  serialized_end=1884,
)

_EXTENSIONINSTALLPROTO.fields_by_name['type'].enum_type = _EXTENSIONINSTALLPROTO_TYPE
_EXTENSIONINSTALLPROTO.fields_by_name['install_location'].enum_type = _EXTENSIONINSTALLPROTO_INSTALLLOCATION
_EXTENSIONINSTALLPROTO.fields_by_name['action_type'].enum_type = _EXTENSIONINSTALLPROTO_ACTIONTYPE
_EXTENSIONINSTALLPROTO.fields_by_name['background_script_type'].enum_type = _EXTENSIONINSTALLPROTO_BACKGROUNDSCRIPTTYPE
_EXTENSIONINSTALLPROTO.fields_by_name['disable_reasons'].enum_type = _EXTENSIONINSTALLPROTO_DISABLEREASON
_EXTENSIONINSTALLPROTO.fields_by_name['blacklist_state'].enum_type = _EXTENSIONINSTALLPROTO_BLACKLISTSTATE
_EXTENSIONINSTALLPROTO_TYPE.containing_type = _EXTENSIONINSTALLPROTO
_EXTENSIONINSTALLPROTO_INSTALLLOCATION.containing_type = _EXTENSIONINSTALLPROTO
_EXTENSIONINSTALLPROTO_ACTIONTYPE.containing_type = _EXTENSIONINSTALLPROTO
_EXTENSIONINSTALLPROTO_BACKGROUNDSCRIPTTYPE.containing_type = _EXTENSIONINSTALLPROTO
_EXTENSIONINSTALLPROTO_DISABLEREASON.containing_type = _EXTENSIONINSTALLPROTO
_EXTENSIONINSTALLPROTO_BLACKLISTSTATE.containing_type = _EXTENSIONINSTALLPROTO
DESCRIPTOR.message_types_by_name['ExtensionInstallProto'] = _EXTENSIONINSTALLPROTO
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

ExtensionInstallProto = _reflection.GeneratedProtocolMessageType('ExtensionInstallProto', (_message.Message,), dict(
  DESCRIPTOR = _EXTENSIONINSTALLPROTO,
  __module__ = 'extension_install_pb2'
  # @@protoc_insertion_point(class_scope:metrics.ExtensionInstallProto)
  ))
_sym_db.RegisterMessage(ExtensionInstallProto)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), _b('\n\037org.chromium.components.metricsB\026ExtensionInstallProtosH\003'))
# @@protoc_insertion_point(module_scope)
