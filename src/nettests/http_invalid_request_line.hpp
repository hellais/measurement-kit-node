// This file is autogenerated by measurement-kit-node do not edit.
#ifndef MK_NODE_NETTESTS_HTTP_INVALID_REQUEST_LINE_TEST_H
#define MK_NODE_NETTESTS_HTTP_INVALID_REQUEST_LINE_TEST_H

#include <nan.h>
#include <measurement_kit/nettests.hpp>

class HttpInvalidRequestLineTest : public Nan::ObjectWrap {
 public:
   static void Init(v8::Local<v8::Object> exports);
   ~HttpInvalidRequestLineTest();

   explicit HttpInvalidRequestLineTest(v8::Local<v8::Object> options);

   static void New(const Nan::FunctionCallbackInfo<v8::Value>& info);

   static void SetOptions(const Nan::FunctionCallbackInfo<v8::Value>& info);

   static void SetVerbosity(const Nan::FunctionCallbackInfo<v8::Value>& info);

   static void OnProgress(const Nan::FunctionCallbackInfo<v8::Value>& info);

   static void OnLog(const Nan::FunctionCallbackInfo<v8::Value>& info);
   static void OnEntry(const Nan::FunctionCallbackInfo<v8::Value>& info);
   static void OnEvent(const Nan::FunctionCallbackInfo<v8::Value>& info);
   static void OnEnd(const Nan::FunctionCallbackInfo<v8::Value>& info);
   static void OnBegin(const Nan::FunctionCallbackInfo<v8::Value>& info);

   static void Run(const Nan::FunctionCallbackInfo<v8::Value>& info);
   static void Start(const Nan::FunctionCallbackInfo<v8::Value>& info);

   static void AddInputFilepath(const Nan::FunctionCallbackInfo<v8::Value>& info);
   static void SetErrorFilepath(const Nan::FunctionCallbackInfo<v8::Value>& info);
   static void SetOutputFilepath(const Nan::FunctionCallbackInfo<v8::Value>& info);

   static void AddInput(const Nan::FunctionCallbackInfo<v8::Value>& info);

   static Nan::Persistent<v8::Function> constructor;

 private:
   mk::nettests::HttpInvalidRequestLineTest test;
   v8::Local<v8::Object> options_;
};

#endif