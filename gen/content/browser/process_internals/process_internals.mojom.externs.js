// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

/** @const */
let mojom = {};
/** @implements {mojo.InterfacePtr} */
mojom.ProcessInternalsHandlerPtr = class {

  /**
   * @return {Promise}
   */
   getIsolationMode() {}
  /**
   * @return {Promise}
   */
   getIsolatedOrigins() {}
};

/**
 * @const
 * @type { mojo.Interface };
 */
mojom.ProcessInternalsHandler;
mojom.ProcessInternalsHandler_GetIsolationMode_Params = class {
  constructor() {
  }
};
mojom.ProcessInternalsHandler_GetIsolationMode_ResponseParams = class {
  constructor() {
    /** @type { !string } */
    this.mode;
  }
};
mojom.ProcessInternalsHandler_GetIsolatedOrigins_Params = class {
  constructor() {
  }
};
mojom.ProcessInternalsHandler_GetIsolatedOrigins_ResponseParams = class {
  constructor() {
    /** @type { !Array<string> } */
    this.isolatedOrigins;
  }
};
