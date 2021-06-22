// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'content/browser/process_internals/process_internals.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('mojom');



  function ProcessInternalsHandler_GetIsolationMode_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProcessInternalsHandler_GetIsolationMode_Params.prototype.initDefaults_ = function() {
  };
  ProcessInternalsHandler_GetIsolationMode_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ProcessInternalsHandler_GetIsolationMode_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 8}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ProcessInternalsHandler_GetIsolationMode_Params.encodedSize = codec.kStructHeaderSize + 0;

  ProcessInternalsHandler_GetIsolationMode_Params.decode = function(decoder) {
    var packed;
    var val = new ProcessInternalsHandler_GetIsolationMode_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  ProcessInternalsHandler_GetIsolationMode_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProcessInternalsHandler_GetIsolationMode_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function ProcessInternalsHandler_GetIsolationMode_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProcessInternalsHandler_GetIsolationMode_ResponseParams.prototype.initDefaults_ = function() {
    this.mode = null;
  };
  ProcessInternalsHandler_GetIsolationMode_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ProcessInternalsHandler_GetIsolationMode_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 16}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ProcessInternalsHandler_GetIsolationMode_ResponseParams.mode
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ProcessInternalsHandler_GetIsolationMode_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  ProcessInternalsHandler_GetIsolationMode_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ProcessInternalsHandler_GetIsolationMode_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.mode = decoder.decodeStruct(codec.String);
    return val;
  };

  ProcessInternalsHandler_GetIsolationMode_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProcessInternalsHandler_GetIsolationMode_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.mode);
  };
  function ProcessInternalsHandler_GetIsolatedOrigins_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProcessInternalsHandler_GetIsolatedOrigins_Params.prototype.initDefaults_ = function() {
  };
  ProcessInternalsHandler_GetIsolatedOrigins_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ProcessInternalsHandler_GetIsolatedOrigins_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 8}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ProcessInternalsHandler_GetIsolatedOrigins_Params.encodedSize = codec.kStructHeaderSize + 0;

  ProcessInternalsHandler_GetIsolatedOrigins_Params.decode = function(decoder) {
    var packed;
    var val = new ProcessInternalsHandler_GetIsolatedOrigins_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  ProcessInternalsHandler_GetIsolatedOrigins_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProcessInternalsHandler_GetIsolatedOrigins_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function ProcessInternalsHandler_GetIsolatedOrigins_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ProcessInternalsHandler_GetIsolatedOrigins_ResponseParams.prototype.initDefaults_ = function() {
    this.isolatedOrigins = null;
  };
  ProcessInternalsHandler_GetIsolatedOrigins_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ProcessInternalsHandler_GetIsolatedOrigins_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 16}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ProcessInternalsHandler_GetIsolatedOrigins_ResponseParams.isolatedOrigins
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, codec.String, false, [0, 0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ProcessInternalsHandler_GetIsolatedOrigins_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  ProcessInternalsHandler_GetIsolatedOrigins_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new ProcessInternalsHandler_GetIsolatedOrigins_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.isolatedOrigins = decoder.decodeArrayPointer(codec.String);
    return val;
  };

  ProcessInternalsHandler_GetIsolatedOrigins_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ProcessInternalsHandler_GetIsolatedOrigins_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.String, val.isolatedOrigins);
  };
  var kProcessInternalsHandler_GetIsolationMode_Name = 0;
  var kProcessInternalsHandler_GetIsolatedOrigins_Name = 1;

  function ProcessInternalsHandlerPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ProcessInternalsHandler,
                                                   handleOrPtrInfo);
  }

  function ProcessInternalsHandlerAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ProcessInternalsHandler, associatedInterfacePtrInfo);
  }

  ProcessInternalsHandlerAssociatedPtr.prototype =
      Object.create(ProcessInternalsHandlerPtr.prototype);
  ProcessInternalsHandlerAssociatedPtr.prototype.constructor =
      ProcessInternalsHandlerAssociatedPtr;

  function ProcessInternalsHandlerProxy(receiver) {
    this.receiver_ = receiver;
  }
  ProcessInternalsHandlerPtr.prototype.getIsolationMode = function() {
    return ProcessInternalsHandlerProxy.prototype.getIsolationMode
        .apply(this.ptr.getProxy(), arguments);
  };

  ProcessInternalsHandlerProxy.prototype.getIsolationMode = function() {
    var params_ = new ProcessInternalsHandler_GetIsolationMode_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kProcessInternalsHandler_GetIsolationMode_Name,
          codec.align(ProcessInternalsHandler_GetIsolationMode_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ProcessInternalsHandler_GetIsolationMode_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ProcessInternalsHandler_GetIsolationMode_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ProcessInternalsHandlerPtr.prototype.getIsolatedOrigins = function() {
    return ProcessInternalsHandlerProxy.prototype.getIsolatedOrigins
        .apply(this.ptr.getProxy(), arguments);
  };

  ProcessInternalsHandlerProxy.prototype.getIsolatedOrigins = function() {
    var params_ = new ProcessInternalsHandler_GetIsolatedOrigins_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kProcessInternalsHandler_GetIsolatedOrigins_Name,
          codec.align(ProcessInternalsHandler_GetIsolatedOrigins_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(ProcessInternalsHandler_GetIsolatedOrigins_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(ProcessInternalsHandler_GetIsolatedOrigins_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function ProcessInternalsHandlerStub(delegate) {
    this.delegate_ = delegate;
  }
  ProcessInternalsHandlerStub.prototype.getIsolationMode = function() {
    return this.delegate_ && this.delegate_.getIsolationMode && this.delegate_.getIsolationMode();
  }
  ProcessInternalsHandlerStub.prototype.getIsolatedOrigins = function() {
    return this.delegate_ && this.delegate_.getIsolatedOrigins && this.delegate_.getIsolatedOrigins();
  }

  ProcessInternalsHandlerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  ProcessInternalsHandlerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kProcessInternalsHandler_GetIsolationMode_Name:
      var params = reader.decodeStruct(ProcessInternalsHandler_GetIsolationMode_Params);
      this.getIsolationMode().then(function(response) {
        var responseParams =
            new ProcessInternalsHandler_GetIsolationMode_ResponseParams();
        responseParams.mode = response.mode;
        var builder = new codec.MessageV1Builder(
            kProcessInternalsHandler_GetIsolationMode_Name,
            codec.align(ProcessInternalsHandler_GetIsolationMode_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ProcessInternalsHandler_GetIsolationMode_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kProcessInternalsHandler_GetIsolatedOrigins_Name:
      var params = reader.decodeStruct(ProcessInternalsHandler_GetIsolatedOrigins_Params);
      this.getIsolatedOrigins().then(function(response) {
        var responseParams =
            new ProcessInternalsHandler_GetIsolatedOrigins_ResponseParams();
        responseParams.isolatedOrigins = response.isolatedOrigins;
        var builder = new codec.MessageV1Builder(
            kProcessInternalsHandler_GetIsolatedOrigins_Name,
            codec.align(ProcessInternalsHandler_GetIsolatedOrigins_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(ProcessInternalsHandler_GetIsolatedOrigins_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateProcessInternalsHandlerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kProcessInternalsHandler_GetIsolationMode_Name:
        if (message.expectsResponse())
          paramsClass = ProcessInternalsHandler_GetIsolationMode_Params;
      break;
      case kProcessInternalsHandler_GetIsolatedOrigins_Name:
        if (message.expectsResponse())
          paramsClass = ProcessInternalsHandler_GetIsolatedOrigins_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateProcessInternalsHandlerResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kProcessInternalsHandler_GetIsolationMode_Name:
        if (message.isResponse())
          paramsClass = ProcessInternalsHandler_GetIsolationMode_ResponseParams;
        break;
      case kProcessInternalsHandler_GetIsolatedOrigins_Name:
        if (message.isResponse())
          paramsClass = ProcessInternalsHandler_GetIsolatedOrigins_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var ProcessInternalsHandler = {
    name: 'mojom.ProcessInternalsHandler',
    kVersion: 0,
    ptrClass: ProcessInternalsHandlerPtr,
    proxyClass: ProcessInternalsHandlerProxy,
    stubClass: ProcessInternalsHandlerStub,
    validateRequest: validateProcessInternalsHandlerRequest,
    validateResponse: validateProcessInternalsHandlerResponse,
  };
  ProcessInternalsHandlerStub.prototype.validator = validateProcessInternalsHandlerRequest;
  ProcessInternalsHandlerProxy.prototype.validator = validateProcessInternalsHandlerResponse;
  exports.ProcessInternalsHandler = ProcessInternalsHandler;
  exports.ProcessInternalsHandlerPtr = ProcessInternalsHandlerPtr;
  exports.ProcessInternalsHandlerAssociatedPtr = ProcessInternalsHandlerAssociatedPtr;
})();