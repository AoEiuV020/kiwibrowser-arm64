// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_SPEECH_RECOGNIZER_MOJOM_SHARED_MESSAGE_IDS_H_
#define CONTENT_COMMON_SPEECH_RECOGNIZER_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace content {
namespace mojom {

namespace internal {


constexpr uint32_t kSpeechRecognizer_Start_Name = 0;
constexpr uint32_t kSpeechRecognitionSession_Abort_Name = 0;
constexpr uint32_t kSpeechRecognitionSession_StopCapture_Name = 1;
constexpr uint32_t kSpeechRecognitionSessionClient_ResultRetrieved_Name = 0;
constexpr uint32_t kSpeechRecognitionSessionClient_ErrorOccurred_Name = 1;
constexpr uint32_t kSpeechRecognitionSessionClient_Started_Name = 2;
constexpr uint32_t kSpeechRecognitionSessionClient_AudioStarted_Name = 3;
constexpr uint32_t kSpeechRecognitionSessionClient_SoundStarted_Name = 4;
constexpr uint32_t kSpeechRecognitionSessionClient_SoundEnded_Name = 5;
constexpr uint32_t kSpeechRecognitionSessionClient_AudioEnded_Name = 6;
constexpr uint32_t kSpeechRecognitionSessionClient_Ended_Name = 7;

}  // namespace internal
}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_SPEECH_RECOGNIZER_MOJOM_SHARED_MESSAGE_IDS_H_