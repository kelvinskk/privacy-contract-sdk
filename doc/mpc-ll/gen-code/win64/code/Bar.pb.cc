// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Bar.proto

#include "Bar.pb.h"

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
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
namespace multiproto {
class BarDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Bar>
      _instance;
} _Bar_default_instance_;
}  // namespace multiproto
namespace protobuf_Bar_2eproto {
void InitDefaultsBarImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::multiproto::_Bar_default_instance_;
    new (ptr) ::multiproto::Bar();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::multiproto::Bar::InitAsDefaultInstance();
}

void InitDefaultsBar() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsBarImpl);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::multiproto::Bar, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::multiproto::Bar, i32_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::multiproto::Bar, f_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::multiproto::Bar, s_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::multiproto::Bar)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::multiproto::_Bar_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "Bar.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\tBar.proto\022\nmultiproto\"(\n\003Bar\022\013\n\003i32\030\001 "
      "\001(\005\022\t\n\001f\030\002 \001(\002\022\t\n\001s\030\003 \001(\tB\024\n\022com.abc.mul"
      "tiprotob\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 95);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Bar.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_Bar_2eproto
namespace multiproto {

// ===================================================================

void Bar::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Bar::kI32FieldNumber;
const int Bar::kFFieldNumber;
const int Bar::kSFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Bar::Bar()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_Bar_2eproto::InitDefaultsBar();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:multiproto.Bar)
}
Bar::Bar(const Bar& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  s_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.s().size() > 0) {
    s_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.s_);
  }
  ::memcpy(&i32_, &from.i32_,
    static_cast<size_t>(reinterpret_cast<char*>(&f_) -
    reinterpret_cast<char*>(&i32_)) + sizeof(f_));
  // @@protoc_insertion_point(copy_constructor:multiproto.Bar)
}

void Bar::SharedCtor() {
  s_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&i32_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&f_) -
      reinterpret_cast<char*>(&i32_)) + sizeof(f_));
  _cached_size_ = 0;
}

Bar::~Bar() {
  // @@protoc_insertion_point(destructor:multiproto.Bar)
  SharedDtor();
}

void Bar::SharedDtor() {
  s_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Bar::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Bar::descriptor() {
  ::protobuf_Bar_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_Bar_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Bar& Bar::default_instance() {
  ::protobuf_Bar_2eproto::InitDefaultsBar();
  return *internal_default_instance();
}

Bar* Bar::New(::google::protobuf::Arena* arena) const {
  Bar* n = new Bar;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Bar::Clear() {
// @@protoc_insertion_point(message_clear_start:multiproto.Bar)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  s_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&i32_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&f_) -
      reinterpret_cast<char*>(&i32_)) + sizeof(f_));
  _internal_metadata_.Clear();
}

bool Bar::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:multiproto.Bar)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 i32 = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &i32_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float f = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(21u /* 21 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &f_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string s = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_s()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->s().data(), static_cast<int>(this->s().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "multiproto.Bar.s"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:multiproto.Bar)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:multiproto.Bar)
  return false;
#undef DO_
}

void Bar::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:multiproto.Bar)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 i32 = 1;
  if (this->i32() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->i32(), output);
  }

  // float f = 2;
  if (this->f() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(2, this->f(), output);
  }

  // string s = 3;
  if (this->s().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->s().data(), static_cast<int>(this->s().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "multiproto.Bar.s");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->s(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:multiproto.Bar)
}

::google::protobuf::uint8* Bar::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:multiproto.Bar)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 i32 = 1;
  if (this->i32() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->i32(), target);
  }

  // float f = 2;
  if (this->f() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(2, this->f(), target);
  }

  // string s = 3;
  if (this->s().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->s().data(), static_cast<int>(this->s().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "multiproto.Bar.s");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->s(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:multiproto.Bar)
  return target;
}

size_t Bar::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:multiproto.Bar)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string s = 3;
  if (this->s().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->s());
  }

  // int32 i32 = 1;
  if (this->i32() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->i32());
  }

  // float f = 2;
  if (this->f() != 0) {
    total_size += 1 + 4;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Bar::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:multiproto.Bar)
  GOOGLE_DCHECK_NE(&from, this);
  const Bar* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Bar>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:multiproto.Bar)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:multiproto.Bar)
    MergeFrom(*source);
  }
}

void Bar::MergeFrom(const Bar& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:multiproto.Bar)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.s().size() > 0) {

    s_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.s_);
  }
  if (from.i32() != 0) {
    set_i32(from.i32());
  }
  if (from.f() != 0) {
    set_f(from.f());
  }
}

void Bar::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:multiproto.Bar)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Bar::CopyFrom(const Bar& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:multiproto.Bar)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Bar::IsInitialized() const {
  return true;
}

void Bar::Swap(Bar* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Bar::InternalSwap(Bar* other) {
  using std::swap;
  s_.Swap(&other->s_);
  swap(i32_, other->i32_);
  swap(f_, other->f_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Bar::GetMetadata() const {
  protobuf_Bar_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_Bar_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace multiproto

// @@protoc_insertion_point(global_scope)
