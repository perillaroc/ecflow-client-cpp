// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: ecflow_client.proto

#include "ecflow_client.pb.h"
#include "ecflow_client.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace ecflow_client {

static const char* EcflowClientService_method_names[] = {
  "/ecflow_client.EcflowClientService/CollectStatusRecords",
  "/ecflow_client.EcflowClientService/CollectStatus",
  "/ecflow_client.EcflowClientService/CollectNode",
};

std::unique_ptr< EcflowClientService::Stub> EcflowClientService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< EcflowClientService::Stub> stub(new EcflowClientService::Stub(channel));
  return stub;
}

EcflowClientService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_CollectStatusRecords_(EcflowClientService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_CollectStatus_(EcflowClientService_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_CollectNode_(EcflowClientService_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status EcflowClientService::Stub::CollectStatusRecords(::grpc::ClientContext* context, const ::ecflow_client::StatusRequest& request, ::ecflow_client::StatusRecordsResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_CollectStatusRecords_, context, request, response);
}

void EcflowClientService::Stub::experimental_async::CollectStatusRecords(::grpc::ClientContext* context, const ::ecflow_client::StatusRequest* request, ::ecflow_client::StatusRecordsResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_CollectStatusRecords_, context, request, response, std::move(f));
}

void EcflowClientService::Stub::experimental_async::CollectStatusRecords(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ecflow_client::StatusRecordsResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_CollectStatusRecords_, context, request, response, std::move(f));
}

void EcflowClientService::Stub::experimental_async::CollectStatusRecords(::grpc::ClientContext* context, const ::ecflow_client::StatusRequest* request, ::ecflow_client::StatusRecordsResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_CollectStatusRecords_, context, request, response, reactor);
}

void EcflowClientService::Stub::experimental_async::CollectStatusRecords(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ecflow_client::StatusRecordsResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_CollectStatusRecords_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::ecflow_client::StatusRecordsResponse>* EcflowClientService::Stub::AsyncCollectStatusRecordsRaw(::grpc::ClientContext* context, const ::ecflow_client::StatusRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::ecflow_client::StatusRecordsResponse>::Create(channel_.get(), cq, rpcmethod_CollectStatusRecords_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ecflow_client::StatusRecordsResponse>* EcflowClientService::Stub::PrepareAsyncCollectStatusRecordsRaw(::grpc::ClientContext* context, const ::ecflow_client::StatusRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::ecflow_client::StatusRecordsResponse>::Create(channel_.get(), cq, rpcmethod_CollectStatusRecords_, context, request, false);
}

::grpc::Status EcflowClientService::Stub::CollectStatus(::grpc::ClientContext* context, const ::ecflow_client::StatusRequest& request, ::ecflow_client::StatusResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_CollectStatus_, context, request, response);
}

void EcflowClientService::Stub::experimental_async::CollectStatus(::grpc::ClientContext* context, const ::ecflow_client::StatusRequest* request, ::ecflow_client::StatusResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_CollectStatus_, context, request, response, std::move(f));
}

void EcflowClientService::Stub::experimental_async::CollectStatus(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ecflow_client::StatusResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_CollectStatus_, context, request, response, std::move(f));
}

void EcflowClientService::Stub::experimental_async::CollectStatus(::grpc::ClientContext* context, const ::ecflow_client::StatusRequest* request, ::ecflow_client::StatusResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_CollectStatus_, context, request, response, reactor);
}

void EcflowClientService::Stub::experimental_async::CollectStatus(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ecflow_client::StatusResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_CollectStatus_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::ecflow_client::StatusResponse>* EcflowClientService::Stub::AsyncCollectStatusRaw(::grpc::ClientContext* context, const ::ecflow_client::StatusRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::ecflow_client::StatusResponse>::Create(channel_.get(), cq, rpcmethod_CollectStatus_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ecflow_client::StatusResponse>* EcflowClientService::Stub::PrepareAsyncCollectStatusRaw(::grpc::ClientContext* context, const ::ecflow_client::StatusRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::ecflow_client::StatusResponse>::Create(channel_.get(), cq, rpcmethod_CollectStatus_, context, request, false);
}

::grpc::Status EcflowClientService::Stub::CollectNode(::grpc::ClientContext* context, const ::ecflow_client::NodeRequest& request, ::ecflow_client::NodeResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_CollectNode_, context, request, response);
}

void EcflowClientService::Stub::experimental_async::CollectNode(::grpc::ClientContext* context, const ::ecflow_client::NodeRequest* request, ::ecflow_client::NodeResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_CollectNode_, context, request, response, std::move(f));
}

void EcflowClientService::Stub::experimental_async::CollectNode(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ecflow_client::NodeResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_CollectNode_, context, request, response, std::move(f));
}

void EcflowClientService::Stub::experimental_async::CollectNode(::grpc::ClientContext* context, const ::ecflow_client::NodeRequest* request, ::ecflow_client::NodeResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_CollectNode_, context, request, response, reactor);
}

void EcflowClientService::Stub::experimental_async::CollectNode(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::ecflow_client::NodeResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_CollectNode_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::ecflow_client::NodeResponse>* EcflowClientService::Stub::AsyncCollectNodeRaw(::grpc::ClientContext* context, const ::ecflow_client::NodeRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::ecflow_client::NodeResponse>::Create(channel_.get(), cq, rpcmethod_CollectNode_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::ecflow_client::NodeResponse>* EcflowClientService::Stub::PrepareAsyncCollectNodeRaw(::grpc::ClientContext* context, const ::ecflow_client::NodeRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::ecflow_client::NodeResponse>::Create(channel_.get(), cq, rpcmethod_CollectNode_, context, request, false);
}

EcflowClientService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      EcflowClientService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< EcflowClientService::Service, ::ecflow_client::StatusRequest, ::ecflow_client::StatusRecordsResponse>(
          std::mem_fn(&EcflowClientService::Service::CollectStatusRecords), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      EcflowClientService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< EcflowClientService::Service, ::ecflow_client::StatusRequest, ::ecflow_client::StatusResponse>(
          std::mem_fn(&EcflowClientService::Service::CollectStatus), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      EcflowClientService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< EcflowClientService::Service, ::ecflow_client::NodeRequest, ::ecflow_client::NodeResponse>(
          std::mem_fn(&EcflowClientService::Service::CollectNode), this)));
}

EcflowClientService::Service::~Service() {
}

::grpc::Status EcflowClientService::Service::CollectStatusRecords(::grpc::ServerContext* context, const ::ecflow_client::StatusRequest* request, ::ecflow_client::StatusRecordsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status EcflowClientService::Service::CollectStatus(::grpc::ServerContext* context, const ::ecflow_client::StatusRequest* request, ::ecflow_client::StatusResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status EcflowClientService::Service::CollectNode(::grpc::ServerContext* context, const ::ecflow_client::NodeRequest* request, ::ecflow_client::NodeResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace ecflow_client

