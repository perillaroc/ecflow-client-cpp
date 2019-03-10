// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: ecflow_client.proto
#ifndef GRPC_ecflow_5fclient_2eproto__INCLUDED
#define GRPC_ecflow_5fclient_2eproto__INCLUDED

#include "ecflow_client.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace ecflow_client {

class EcflowClientService final {
 public:
  static constexpr char const* service_full_name() {
    return "ecflow_client.EcflowClientService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status CollectStatusRecords(::grpc::ClientContext* context, const ::ecflow_client::StatusRequest& request, ::ecflow_client::StatusRecordsResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ecflow_client::StatusRecordsResponse>> AsyncCollectStatusRecords(::grpc::ClientContext* context, const ::ecflow_client::StatusRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ecflow_client::StatusRecordsResponse>>(AsyncCollectStatusRecordsRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ecflow_client::StatusRecordsResponse>> PrepareAsyncCollectStatusRecords(::grpc::ClientContext* context, const ::ecflow_client::StatusRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ecflow_client::StatusRecordsResponse>>(PrepareAsyncCollectStatusRecordsRaw(context, request, cq));
    }
    virtual ::grpc::Status CollectStatus(::grpc::ClientContext* context, const ::ecflow_client::StatusRequest& request, ::ecflow_client::StatusResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ecflow_client::StatusResponse>> AsyncCollectStatus(::grpc::ClientContext* context, const ::ecflow_client::StatusRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ecflow_client::StatusResponse>>(AsyncCollectStatusRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ecflow_client::StatusResponse>> PrepareAsyncCollectStatus(::grpc::ClientContext* context, const ::ecflow_client::StatusRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ecflow_client::StatusResponse>>(PrepareAsyncCollectStatusRaw(context, request, cq));
    }
    virtual ::grpc::Status CollectNode(::grpc::ClientContext* context, const ::ecflow_client::NodeRequest& request, ::ecflow_client::NodeResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ecflow_client::NodeResponse>> AsyncCollectNode(::grpc::ClientContext* context, const ::ecflow_client::NodeRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ecflow_client::NodeResponse>>(AsyncCollectNodeRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ecflow_client::NodeResponse>> PrepareAsyncCollectNode(::grpc::ClientContext* context, const ::ecflow_client::NodeRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ecflow_client::NodeResponse>>(PrepareAsyncCollectNodeRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      virtual void CollectStatusRecords(::grpc::ClientContext* context, const ::ecflow_client::StatusRequest* request, ::ecflow_client::StatusRecordsResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void CollectStatusRecords(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ecflow_client::StatusRecordsResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void CollectStatus(::grpc::ClientContext* context, const ::ecflow_client::StatusRequest* request, ::ecflow_client::StatusResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void CollectStatus(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ecflow_client::StatusResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void CollectNode(::grpc::ClientContext* context, const ::ecflow_client::NodeRequest* request, ::ecflow_client::NodeResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void CollectNode(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ecflow_client::NodeResponse* response, std::function<void(::grpc::Status)>) = 0;
    };
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::ecflow_client::StatusRecordsResponse>* AsyncCollectStatusRecordsRaw(::grpc::ClientContext* context, const ::ecflow_client::StatusRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::ecflow_client::StatusRecordsResponse>* PrepareAsyncCollectStatusRecordsRaw(::grpc::ClientContext* context, const ::ecflow_client::StatusRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::ecflow_client::StatusResponse>* AsyncCollectStatusRaw(::grpc::ClientContext* context, const ::ecflow_client::StatusRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::ecflow_client::StatusResponse>* PrepareAsyncCollectStatusRaw(::grpc::ClientContext* context, const ::ecflow_client::StatusRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::ecflow_client::NodeResponse>* AsyncCollectNodeRaw(::grpc::ClientContext* context, const ::ecflow_client::NodeRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::ecflow_client::NodeResponse>* PrepareAsyncCollectNodeRaw(::grpc::ClientContext* context, const ::ecflow_client::NodeRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status CollectStatusRecords(::grpc::ClientContext* context, const ::ecflow_client::StatusRequest& request, ::ecflow_client::StatusRecordsResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ecflow_client::StatusRecordsResponse>> AsyncCollectStatusRecords(::grpc::ClientContext* context, const ::ecflow_client::StatusRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ecflow_client::StatusRecordsResponse>>(AsyncCollectStatusRecordsRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ecflow_client::StatusRecordsResponse>> PrepareAsyncCollectStatusRecords(::grpc::ClientContext* context, const ::ecflow_client::StatusRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ecflow_client::StatusRecordsResponse>>(PrepareAsyncCollectStatusRecordsRaw(context, request, cq));
    }
    ::grpc::Status CollectStatus(::grpc::ClientContext* context, const ::ecflow_client::StatusRequest& request, ::ecflow_client::StatusResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ecflow_client::StatusResponse>> AsyncCollectStatus(::grpc::ClientContext* context, const ::ecflow_client::StatusRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ecflow_client::StatusResponse>>(AsyncCollectStatusRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ecflow_client::StatusResponse>> PrepareAsyncCollectStatus(::grpc::ClientContext* context, const ::ecflow_client::StatusRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ecflow_client::StatusResponse>>(PrepareAsyncCollectStatusRaw(context, request, cq));
    }
    ::grpc::Status CollectNode(::grpc::ClientContext* context, const ::ecflow_client::NodeRequest& request, ::ecflow_client::NodeResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ecflow_client::NodeResponse>> AsyncCollectNode(::grpc::ClientContext* context, const ::ecflow_client::NodeRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ecflow_client::NodeResponse>>(AsyncCollectNodeRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ecflow_client::NodeResponse>> PrepareAsyncCollectNode(::grpc::ClientContext* context, const ::ecflow_client::NodeRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ecflow_client::NodeResponse>>(PrepareAsyncCollectNodeRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void CollectStatusRecords(::grpc::ClientContext* context, const ::ecflow_client::StatusRequest* request, ::ecflow_client::StatusRecordsResponse* response, std::function<void(::grpc::Status)>) override;
      void CollectStatusRecords(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ecflow_client::StatusRecordsResponse* response, std::function<void(::grpc::Status)>) override;
      void CollectStatus(::grpc::ClientContext* context, const ::ecflow_client::StatusRequest* request, ::ecflow_client::StatusResponse* response, std::function<void(::grpc::Status)>) override;
      void CollectStatus(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ecflow_client::StatusResponse* response, std::function<void(::grpc::Status)>) override;
      void CollectNode(::grpc::ClientContext* context, const ::ecflow_client::NodeRequest* request, ::ecflow_client::NodeResponse* response, std::function<void(::grpc::Status)>) override;
      void CollectNode(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ecflow_client::NodeResponse* response, std::function<void(::grpc::Status)>) override;
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::ecflow_client::StatusRecordsResponse>* AsyncCollectStatusRecordsRaw(::grpc::ClientContext* context, const ::ecflow_client::StatusRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::ecflow_client::StatusRecordsResponse>* PrepareAsyncCollectStatusRecordsRaw(::grpc::ClientContext* context, const ::ecflow_client::StatusRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::ecflow_client::StatusResponse>* AsyncCollectStatusRaw(::grpc::ClientContext* context, const ::ecflow_client::StatusRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::ecflow_client::StatusResponse>* PrepareAsyncCollectStatusRaw(::grpc::ClientContext* context, const ::ecflow_client::StatusRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::ecflow_client::NodeResponse>* AsyncCollectNodeRaw(::grpc::ClientContext* context, const ::ecflow_client::NodeRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::ecflow_client::NodeResponse>* PrepareAsyncCollectNodeRaw(::grpc::ClientContext* context, const ::ecflow_client::NodeRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_CollectStatusRecords_;
    const ::grpc::internal::RpcMethod rpcmethod_CollectStatus_;
    const ::grpc::internal::RpcMethod rpcmethod_CollectNode_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status CollectStatusRecords(::grpc::ServerContext* context, const ::ecflow_client::StatusRequest* request, ::ecflow_client::StatusRecordsResponse* response);
    virtual ::grpc::Status CollectStatus(::grpc::ServerContext* context, const ::ecflow_client::StatusRequest* request, ::ecflow_client::StatusResponse* response);
    virtual ::grpc::Status CollectNode(::grpc::ServerContext* context, const ::ecflow_client::NodeRequest* request, ::ecflow_client::NodeResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_CollectStatusRecords : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_CollectStatusRecords() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_CollectStatusRecords() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CollectStatusRecords(::grpc::ServerContext* context, const ::ecflow_client::StatusRequest* request, ::ecflow_client::StatusRecordsResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestCollectStatusRecords(::grpc::ServerContext* context, ::ecflow_client::StatusRequest* request, ::grpc::ServerAsyncResponseWriter< ::ecflow_client::StatusRecordsResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_CollectStatus : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_CollectStatus() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_CollectStatus() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CollectStatus(::grpc::ServerContext* context, const ::ecflow_client::StatusRequest* request, ::ecflow_client::StatusResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestCollectStatus(::grpc::ServerContext* context, ::ecflow_client::StatusRequest* request, ::grpc::ServerAsyncResponseWriter< ::ecflow_client::StatusResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_CollectNode : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_CollectNode() {
      ::grpc::Service::MarkMethodAsync(2);
    }
    ~WithAsyncMethod_CollectNode() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CollectNode(::grpc::ServerContext* context, const ::ecflow_client::NodeRequest* request, ::ecflow_client::NodeResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestCollectNode(::grpc::ServerContext* context, ::ecflow_client::NodeRequest* request, ::grpc::ServerAsyncResponseWriter< ::ecflow_client::NodeResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_CollectStatusRecords<WithAsyncMethod_CollectStatus<WithAsyncMethod_CollectNode<Service > > > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_CollectStatusRecords : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithCallbackMethod_CollectStatusRecords() {
      ::grpc::Service::experimental().MarkMethodCallback(0,
        new ::grpc::internal::CallbackUnaryHandler< ::ecflow_client::StatusRequest, ::ecflow_client::StatusRecordsResponse>(
          [this](::grpc::ServerContext* context,
                 const ::ecflow_client::StatusRequest* request,
                 ::ecflow_client::StatusRecordsResponse* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   return this->CollectStatusRecords(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithCallbackMethod_CollectStatusRecords() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CollectStatusRecords(::grpc::ServerContext* context, const ::ecflow_client::StatusRequest* request, ::ecflow_client::StatusRecordsResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void CollectStatusRecords(::grpc::ServerContext* context, const ::ecflow_client::StatusRequest* request, ::ecflow_client::StatusRecordsResponse* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_CollectStatus : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithCallbackMethod_CollectStatus() {
      ::grpc::Service::experimental().MarkMethodCallback(1,
        new ::grpc::internal::CallbackUnaryHandler< ::ecflow_client::StatusRequest, ::ecflow_client::StatusResponse>(
          [this](::grpc::ServerContext* context,
                 const ::ecflow_client::StatusRequest* request,
                 ::ecflow_client::StatusResponse* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   return this->CollectStatus(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithCallbackMethod_CollectStatus() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CollectStatus(::grpc::ServerContext* context, const ::ecflow_client::StatusRequest* request, ::ecflow_client::StatusResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void CollectStatus(::grpc::ServerContext* context, const ::ecflow_client::StatusRequest* request, ::ecflow_client::StatusResponse* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_CollectNode : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithCallbackMethod_CollectNode() {
      ::grpc::Service::experimental().MarkMethodCallback(2,
        new ::grpc::internal::CallbackUnaryHandler< ::ecflow_client::NodeRequest, ::ecflow_client::NodeResponse>(
          [this](::grpc::ServerContext* context,
                 const ::ecflow_client::NodeRequest* request,
                 ::ecflow_client::NodeResponse* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   return this->CollectNode(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithCallbackMethod_CollectNode() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CollectNode(::grpc::ServerContext* context, const ::ecflow_client::NodeRequest* request, ::ecflow_client::NodeResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void CollectNode(::grpc::ServerContext* context, const ::ecflow_client::NodeRequest* request, ::ecflow_client::NodeResponse* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  typedef ExperimentalWithCallbackMethod_CollectStatusRecords<ExperimentalWithCallbackMethod_CollectStatus<ExperimentalWithCallbackMethod_CollectNode<Service > > > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_CollectStatusRecords : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_CollectStatusRecords() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_CollectStatusRecords() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CollectStatusRecords(::grpc::ServerContext* context, const ::ecflow_client::StatusRequest* request, ::ecflow_client::StatusRecordsResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_CollectStatus : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_CollectStatus() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_CollectStatus() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CollectStatus(::grpc::ServerContext* context, const ::ecflow_client::StatusRequest* request, ::ecflow_client::StatusResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_CollectNode : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_CollectNode() {
      ::grpc::Service::MarkMethodGeneric(2);
    }
    ~WithGenericMethod_CollectNode() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CollectNode(::grpc::ServerContext* context, const ::ecflow_client::NodeRequest* request, ::ecflow_client::NodeResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_CollectStatusRecords : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_CollectStatusRecords() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_CollectStatusRecords() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CollectStatusRecords(::grpc::ServerContext* context, const ::ecflow_client::StatusRequest* request, ::ecflow_client::StatusRecordsResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestCollectStatusRecords(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_CollectStatus : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_CollectStatus() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_CollectStatus() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CollectStatus(::grpc::ServerContext* context, const ::ecflow_client::StatusRequest* request, ::ecflow_client::StatusResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestCollectStatus(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_CollectNode : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_CollectNode() {
      ::grpc::Service::MarkMethodRaw(2);
    }
    ~WithRawMethod_CollectNode() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CollectNode(::grpc::ServerContext* context, const ::ecflow_client::NodeRequest* request, ::ecflow_client::NodeResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestCollectNode(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_CollectStatusRecords : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithRawCallbackMethod_CollectStatusRecords() {
      ::grpc::Service::experimental().MarkMethodRawCallback(0,
        new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
          [this](::grpc::ServerContext* context,
                 const ::grpc::ByteBuffer* request,
                 ::grpc::ByteBuffer* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   this->CollectStatusRecords(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithRawCallbackMethod_CollectStatusRecords() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CollectStatusRecords(::grpc::ServerContext* context, const ::ecflow_client::StatusRequest* request, ::ecflow_client::StatusRecordsResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void CollectStatusRecords(::grpc::ServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_CollectStatus : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithRawCallbackMethod_CollectStatus() {
      ::grpc::Service::experimental().MarkMethodRawCallback(1,
        new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
          [this](::grpc::ServerContext* context,
                 const ::grpc::ByteBuffer* request,
                 ::grpc::ByteBuffer* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   this->CollectStatus(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithRawCallbackMethod_CollectStatus() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CollectStatus(::grpc::ServerContext* context, const ::ecflow_client::StatusRequest* request, ::ecflow_client::StatusResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void CollectStatus(::grpc::ServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_CollectNode : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    ExperimentalWithRawCallbackMethod_CollectNode() {
      ::grpc::Service::experimental().MarkMethodRawCallback(2,
        new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
          [this](::grpc::ServerContext* context,
                 const ::grpc::ByteBuffer* request,
                 ::grpc::ByteBuffer* response,
                 ::grpc::experimental::ServerCallbackRpcController* controller) {
                   this->CollectNode(context, request, response, controller);
                 }));
    }
    ~ExperimentalWithRawCallbackMethod_CollectNode() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CollectNode(::grpc::ServerContext* context, const ::ecflow_client::NodeRequest* request, ::ecflow_client::NodeResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual void CollectNode(::grpc::ServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response, ::grpc::experimental::ServerCallbackRpcController* controller) { controller->Finish(::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "")); }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_CollectStatusRecords : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_CollectStatusRecords() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::ecflow_client::StatusRequest, ::ecflow_client::StatusRecordsResponse>(std::bind(&WithStreamedUnaryMethod_CollectStatusRecords<BaseClass>::StreamedCollectStatusRecords, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_CollectStatusRecords() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status CollectStatusRecords(::grpc::ServerContext* context, const ::ecflow_client::StatusRequest* request, ::ecflow_client::StatusRecordsResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedCollectStatusRecords(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::ecflow_client::StatusRequest,::ecflow_client::StatusRecordsResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_CollectStatus : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_CollectStatus() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler< ::ecflow_client::StatusRequest, ::ecflow_client::StatusResponse>(std::bind(&WithStreamedUnaryMethod_CollectStatus<BaseClass>::StreamedCollectStatus, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_CollectStatus() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status CollectStatus(::grpc::ServerContext* context, const ::ecflow_client::StatusRequest* request, ::ecflow_client::StatusResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedCollectStatus(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::ecflow_client::StatusRequest,::ecflow_client::StatusResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_CollectNode : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_CollectNode() {
      ::grpc::Service::MarkMethodStreamed(2,
        new ::grpc::internal::StreamedUnaryHandler< ::ecflow_client::NodeRequest, ::ecflow_client::NodeResponse>(std::bind(&WithStreamedUnaryMethod_CollectNode<BaseClass>::StreamedCollectNode, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_CollectNode() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status CollectNode(::grpc::ServerContext* context, const ::ecflow_client::NodeRequest* request, ::ecflow_client::NodeResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedCollectNode(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::ecflow_client::NodeRequest,::ecflow_client::NodeResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_CollectStatusRecords<WithStreamedUnaryMethod_CollectStatus<WithStreamedUnaryMethod_CollectNode<Service > > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_CollectStatusRecords<WithStreamedUnaryMethod_CollectStatus<WithStreamedUnaryMethod_CollectNode<Service > > > StreamedService;
};

}  // namespace ecflow_client


#endif  // GRPC_ecflow_5fclient_2eproto__INCLUDED
