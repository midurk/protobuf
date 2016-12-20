// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/any.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include <google/protobuf/any.pb.h>

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace google {
namespace protobuf {
class AnyDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<Any> {};
AnyDefaultTypeInternal _Any_default_instance_;

namespace {

::google::protobuf::Metadata file_level_metadata[1];

}  // namespace


const ::google::protobuf::uint32* protobuf_Offsets_google_2fprotobuf_2fany_2eproto() GOOGLE_ATTRIBUTE_COLD;
const ::google::protobuf::uint32* protobuf_Offsets_google_2fprotobuf_2fany_2eproto() {
  static const ::google::protobuf::uint32 offsets[] = {
    ~0u,  // no _has_bits_
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Any, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Any, type_url_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Any, value_),
  };
  return offsets;
}

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, -1, sizeof(Any)},
};

static const ::google::protobuf::internal::DefaultInstanceData file_default_instances[] = {
  {reinterpret_cast<const ::google::protobuf::Message*>(&_Any_default_instance_), NULL},
};

namespace {

void protobuf_AssignDescriptors() {
  protobuf_AddDesc_google_2fprotobuf_2fany_2eproto();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "google/protobuf/any.proto", schemas, file_default_instances, protobuf_Offsets_google_2fprotobuf_2fany_2eproto(), factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

}  // namespace

void protobuf_ShutdownFile_google_2fprotobuf_2fany_2eproto() {
  _Any_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
}

void protobuf_InitDefaults_google_2fprotobuf_2fany_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _Any_default_instance_.DefaultConstruct();
}

void protobuf_InitDefaults_google_2fprotobuf_2fany_2eproto() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_InitDefaults_google_2fprotobuf_2fany_2eproto_impl);
}
void protobuf_AddDesc_google_2fprotobuf_2fany_2eproto_impl() {
  protobuf_InitDefaults_google_2fprotobuf_2fany_2eproto();
  static const char descriptor[] = {
      "\n\031google/protobuf/any.proto\022\017google.prot"
      "obuf\"&\n\003Any\022\020\n\010type_url\030\001 \001(\t\022\r\n\005value\030\002"
      " \001(\014Bo\n\023com.google.protobufB\010AnyProtoP\001Z"
      "%github.com/golang/protobuf/ptypes/any\242\002"
      "\003GPB\252\002\036Google.Protobuf.WellKnownTypesb\006p"
      "roto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 205);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/protobuf/any.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_google_2fprotobuf_2fany_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_google_2fprotobuf_2fany_2eproto_once_);
void protobuf_AddDesc_google_2fprotobuf_2fany_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_google_2fprotobuf_2fany_2eproto_once_,
                 &protobuf_AddDesc_google_2fprotobuf_2fany_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_google_2fprotobuf_2fany_2eproto {
  StaticDescriptorInitializer_google_2fprotobuf_2fany_2eproto() {
    protobuf_AddDesc_google_2fprotobuf_2fany_2eproto();
  }
} static_descriptor_initializer_google_2fprotobuf_2fany_2eproto_;

// ===================================================================

void Any::PackFrom(const ::google::protobuf::Message& message) {
  _any_metadata_.PackFrom(message);
}

void Any::PackFrom(const ::google::protobuf::Message& message,
                           const ::std::string& type_url_prefix) {
  _any_metadata_.PackFrom(message, type_url_prefix);
}

bool Any::UnpackTo(::google::protobuf::Message* message) const {
  return _any_metadata_.UnpackTo(message);
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Any::kTypeUrlFieldNumber;
const int Any::kValueFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Any::Any()
  : ::google::protobuf::Message(), _internal_metadata_(NULL), _any_metadata_(&type_url_, &value_) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_InitDefaults_google_2fprotobuf_2fany_2eproto();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.Any)
}
Any::Any(const Any& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0),
      _any_metadata_(&type_url_, &value_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  type_url_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.type_url().size() > 0) {
    type_url_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.type_url_);
  }
  value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.value().size() > 0) {
    value_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.value_);
  }
  // @@protoc_insertion_point(copy_constructor:google.protobuf.Any)
}

void Any::SharedCtor() {
  type_url_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

Any::~Any() {
  // @@protoc_insertion_point(destructor:google.protobuf.Any)
  SharedDtor();
}

void Any::SharedDtor() {
  type_url_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  value_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Any::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Any::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return file_level_metadata[0].descriptor;
}

const Any& Any::default_instance() {
  protobuf_InitDefaults_google_2fprotobuf_2fany_2eproto();
  return *internal_default_instance();
}

Any* Any::New(::google::protobuf::Arena* arena) const {
  Any* n = new Any;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Any::Clear() {
// @@protoc_insertion_point(message_clear_start:google.protobuf.Any)
  type_url_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool Any::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.Any)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string type_url = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_type_url()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->type_url().data(), this->type_url().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "google.protobuf.Any.type_url"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bytes value = 2;
      case 2: {
        if (tag == 18u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_value()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.protobuf.Any)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.Any)
  return false;
#undef DO_
}

void Any::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.Any)
  // string type_url = 1;
  if (this->type_url().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->type_url().data(), this->type_url().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.protobuf.Any.type_url");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->type_url(), output);
  }

  // bytes value = 2;
  if (this->value().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      2, this->value(), output);
  }

  // @@protoc_insertion_point(serialize_end:google.protobuf.Any)
}

::google::protobuf::uint8* Any::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.Any)
  // string type_url = 1;
  if (this->type_url().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->type_url().data(), this->type_url().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "google.protobuf.Any.type_url");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->type_url(), target);
  }

  // bytes value = 2;
  if (this->value().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        2, this->value(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.Any)
  return target;
}

size_t Any::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.protobuf.Any)
  size_t total_size = 0;

  // string type_url = 1;
  if (this->type_url().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->type_url());
  }

  // bytes value = 2;
  if (this->value().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->value());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Any::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.protobuf.Any)
  GOOGLE_DCHECK_NE(&from, this);
  const Any* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Any>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.protobuf.Any)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.protobuf.Any)
    MergeFrom(*source);
  }
}

void Any::MergeFrom(const Any& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.protobuf.Any)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.type_url().size() > 0) {

    type_url_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.type_url_);
  }
  if (from.value().size() > 0) {

    value_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.value_);
  }
}

void Any::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.protobuf.Any)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Any::CopyFrom(const Any& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.protobuf.Any)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Any::IsInitialized() const {
  return true;
}

void Any::Swap(Any* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Any::InternalSwap(Any* other) {
  type_url_.Swap(&other->type_url_);
  value_.Swap(&other->value_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Any::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  return file_level_metadata[0];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Any

// string type_url = 1;
void Any::clear_type_url() {
  type_url_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& Any::type_url() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Any.type_url)
  return type_url_.GetNoArena();
}
void Any::set_type_url(const ::std::string& value) {
  
  type_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.Any.type_url)
}
#if LANG_CXX11
void Any::set_type_url(::std::string&& value) {
  
  type_url_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.protobuf.Any.type_url)
}
#endif
void Any::set_type_url(const char* value) {
  
  type_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.Any.type_url)
}
void Any::set_type_url(const char* value, size_t size) {
  
  type_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.Any.type_url)
}
::std::string* Any::mutable_type_url() {
  
  // @@protoc_insertion_point(field_mutable:google.protobuf.Any.type_url)
  return type_url_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* Any::release_type_url() {
  // @@protoc_insertion_point(field_release:google.protobuf.Any.type_url)
  
  return type_url_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void Any::set_allocated_type_url(::std::string* type_url) {
  if (type_url != NULL) {
    
  } else {
    
  }
  type_url_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), type_url);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.Any.type_url)
}

// bytes value = 2;
void Any::clear_value() {
  value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& Any::value() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Any.value)
  return value_.GetNoArena();
}
void Any::set_value(const ::std::string& value) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.Any.value)
}
#if LANG_CXX11
void Any::set_value(::std::string&& value) {
  
  value_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:google.protobuf.Any.value)
}
#endif
void Any::set_value(const char* value) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.Any.value)
}
void Any::set_value(const void* value, size_t size) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.Any.value)
}
::std::string* Any::mutable_value() {
  
  // @@protoc_insertion_point(field_mutable:google.protobuf.Any.value)
  return value_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* Any::release_value() {
  // @@protoc_insertion_point(field_release:google.protobuf.Any.value)
  
  return value_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void Any::set_allocated_value(::std::string* value) {
  if (value != NULL) {
    
  } else {
    
  }
  value_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.Any.value)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
