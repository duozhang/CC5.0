// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorboardX/proto/graph.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "tensorboardX/proto/graph.pb.h"

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

namespace tensorboardX {
class GraphDefDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<GraphDef> {
} _GraphDef_default_instance_;

namespace protobuf_tensorboardX_2fproto_2fgraph_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] = {
  { NULL, NULL, 0, -1, -1, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GraphDef, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GraphDef, node_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GraphDef, versions_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GraphDef, version_),
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, -1, sizeof(GraphDef)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_GraphDef_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "tensorboardX/proto/graph.proto", schemas, file_default_instances, TableStruct::offsets, factory,
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

void TableStruct::Shutdown() {
  _GraphDef_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  ::tensorboardX::protobuf_tensorboardX_2fproto_2fnode_5fdef_2eproto::InitDefaults();
  ::tensorboardX::protobuf_tensorboardX_2fproto_2fversions_2eproto::InitDefaults();
  _GraphDef_default_instance_.DefaultConstruct();
  _GraphDef_default_instance_.get_mutable()->versions_ = const_cast< ::tensorboardX::VersionDef*>(
      ::tensorboardX::VersionDef::internal_default_instance());
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\036tensorboardX/proto/graph.proto\022\014tensor"
      "boardX\032!tensorboardX/proto/node_def.prot"
      "o\032!tensorboardX/proto/versions.proto\"p\n\010"
      "GraphDef\022#\n\004node\030\001 \003(\0132\025.tensorboardX.No"
      "deDef\022*\n\010versions\030\004 \001(\0132\030.tensorboardX.V"
      "ersionDef\022\023\n\007version\030\003 \001(\005B\002\030\001B,\n\030org.te"
      "nsorflow.frameworkB\013GraphProtosP\001\370\001\001b\006pr"
      "oto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 284);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "tensorboardX/proto/graph.proto", &protobuf_RegisterTypes);
  ::tensorboardX::protobuf_tensorboardX_2fproto_2fnode_5fdef_2eproto::AddDescriptors();
  ::tensorboardX::protobuf_tensorboardX_2fproto_2fversions_2eproto::AddDescriptors();
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_tensorboardX_2fproto_2fgraph_2eproto


// ===================================================================

void GraphDef::_slow_mutable_versions() {
  versions_ = ::google::protobuf::Arena::CreateMessage< ::tensorboardX::VersionDef >(
      GetArenaNoVirtual());
}
::tensorboardX::VersionDef* GraphDef::_slow_release_versions() {
  if (versions_ == NULL) {
    return NULL;
  } else {
    ::tensorboardX::VersionDef* temp = new ::tensorboardX::VersionDef(*versions_);
    versions_ = NULL;
    return temp;
  }
}
::tensorboardX::VersionDef* GraphDef::unsafe_arena_release_versions() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorboardX.GraphDef.versions)
  
  ::tensorboardX::VersionDef* temp = versions_;
  versions_ = NULL;
  return temp;
}
void GraphDef::_slow_set_allocated_versions(
    ::google::protobuf::Arena* message_arena, ::tensorboardX::VersionDef** versions) {
    if (message_arena != NULL && 
        ::google::protobuf::Arena::GetArena(*versions) == NULL) {
      message_arena->Own(*versions);
    } else if (message_arena !=
               ::google::protobuf::Arena::GetArena(*versions)) {
      ::tensorboardX::VersionDef* new_versions = 
            ::google::protobuf::Arena::CreateMessage< ::tensorboardX::VersionDef >(
            message_arena);
      new_versions->CopyFrom(**versions);
      *versions = new_versions;
    }
}
void GraphDef::unsafe_arena_set_allocated_versions(
    ::tensorboardX::VersionDef* versions) {
  if (GetArenaNoVirtual() == NULL) {
    delete versions_;
  }
  versions_ = versions;
  if (versions) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorboardX.GraphDef.versions)
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int GraphDef::kNodeFieldNumber;
const int GraphDef::kVersionsFieldNumber;
const int GraphDef::kVersionFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

GraphDef::GraphDef()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_tensorboardX_2fproto_2fgraph_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:tensorboardX.GraphDef)
}
GraphDef::GraphDef(::google::protobuf::Arena* arena)
  : ::google::protobuf::Message(),
  _internal_metadata_(arena),
  node_(arena) {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_tensorboardX_2fproto_2fgraph_2eproto::InitDefaults();
#endif  // GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:tensorboardX.GraphDef)
}
GraphDef::GraphDef(const GraphDef& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      node_(from.node_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_versions()) {
    versions_ = new ::tensorboardX::VersionDef(*from.versions_);
  } else {
    versions_ = NULL;
  }
  version_ = from.version_;
  // @@protoc_insertion_point(copy_constructor:tensorboardX.GraphDef)
}

void GraphDef::SharedCtor() {
  ::memset(&versions_, 0, reinterpret_cast<char*>(&version_) -
    reinterpret_cast<char*>(&versions_) + sizeof(version_));
  _cached_size_ = 0;
}

GraphDef::~GraphDef() {
  // @@protoc_insertion_point(destructor:tensorboardX.GraphDef)
  SharedDtor();
}

void GraphDef::SharedDtor() {
  ::google::protobuf::Arena* arena = GetArenaNoVirtual();
  if (arena != NULL) {
    return;
  }

  if (this != internal_default_instance()) {
    delete versions_;
  }
}

void GraphDef::ArenaDtor(void* object) {
  GraphDef* _this = reinterpret_cast< GraphDef* >(object);
  (void)_this;
}
void GraphDef::RegisterArenaDtor(::google::protobuf::Arena* arena) {
}
void GraphDef::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* GraphDef::descriptor() {
  protobuf_tensorboardX_2fproto_2fgraph_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_tensorboardX_2fproto_2fgraph_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const GraphDef& GraphDef::default_instance() {
  protobuf_tensorboardX_2fproto_2fgraph_2eproto::InitDefaults();
  return *internal_default_instance();
}

GraphDef* GraphDef::New(::google::protobuf::Arena* arena) const {
  return ::google::protobuf::Arena::CreateMessage<GraphDef>(arena);
}

void GraphDef::Clear() {
// @@protoc_insertion_point(message_clear_start:tensorboardX.GraphDef)
  node_.Clear();
  if (GetArenaNoVirtual() == NULL && versions_ != NULL) {
    delete versions_;
  }
  versions_ = NULL;
  version_ = 0;
}

bool GraphDef::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:tensorboardX.GraphDef)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .tensorboardX.NodeDef node = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_node()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 version = 3 [deprecated = true];
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &version_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .tensorboardX.VersionDef versions = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_versions()));
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
  // @@protoc_insertion_point(parse_success:tensorboardX.GraphDef)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:tensorboardX.GraphDef)
  return false;
#undef DO_
}

void GraphDef::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:tensorboardX.GraphDef)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .tensorboardX.NodeDef node = 1;
  for (unsigned int i = 0, n = this->node_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->node(i), output);
  }

  // int32 version = 3 [deprecated = true];
  if (this->version() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->version(), output);
  }

  // .tensorboardX.VersionDef versions = 4;
  if (this->has_versions()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, *this->versions_, output);
  }

  // @@protoc_insertion_point(serialize_end:tensorboardX.GraphDef)
}

::google::protobuf::uint8* GraphDef::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:tensorboardX.GraphDef)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .tensorboardX.NodeDef node = 1;
  for (unsigned int i = 0, n = this->node_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, this->node(i), deterministic, target);
  }

  // int32 version = 3 [deprecated = true];
  if (this->version() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->version(), target);
  }

  // .tensorboardX.VersionDef versions = 4;
  if (this->has_versions()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        4, *this->versions_, deterministic, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:tensorboardX.GraphDef)
  return target;
}

size_t GraphDef::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tensorboardX.GraphDef)
  size_t total_size = 0;

  // repeated .tensorboardX.NodeDef node = 1;
  {
    unsigned int count = this->node_size();
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->node(i));
    }
  }

  // .tensorboardX.VersionDef versions = 4;
  if (this->has_versions()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->versions_);
  }

  // int32 version = 3 [deprecated = true];
  if (this->version() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->version());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void GraphDef::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:tensorboardX.GraphDef)
  GOOGLE_DCHECK_NE(&from, this);
  const GraphDef* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const GraphDef>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:tensorboardX.GraphDef)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:tensorboardX.GraphDef)
    MergeFrom(*source);
  }
}

void GraphDef::MergeFrom(const GraphDef& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:tensorboardX.GraphDef)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  node_.MergeFrom(from.node_);
  if (from.has_versions()) {
    mutable_versions()->::tensorboardX::VersionDef::MergeFrom(from.versions());
  }
  if (from.version() != 0) {
    set_version(from.version());
  }
}

void GraphDef::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:tensorboardX.GraphDef)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GraphDef::CopyFrom(const GraphDef& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tensorboardX.GraphDef)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GraphDef::IsInitialized() const {
  return true;
}

void GraphDef::Swap(GraphDef* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    GraphDef* temp = New(GetArenaNoVirtual());
    temp->MergeFrom(*other);
    other->CopyFrom(*this);
    InternalSwap(temp);
    if (GetArenaNoVirtual() == NULL) {
      delete temp;
    }
  }
}
void GraphDef::UnsafeArenaSwap(GraphDef* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void GraphDef::InternalSwap(GraphDef* other) {
  node_.InternalSwap(&other->node_);
  std::swap(versions_, other->versions_);
  std::swap(version_, other->version_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata GraphDef::GetMetadata() const {
  protobuf_tensorboardX_2fproto_2fgraph_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_tensorboardX_2fproto_2fgraph_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// GraphDef

// repeated .tensorboardX.NodeDef node = 1;
int GraphDef::node_size() const {
  return node_.size();
}
void GraphDef::clear_node() {
  node_.Clear();
}
const ::tensorboardX::NodeDef& GraphDef::node(int index) const {
  // @@protoc_insertion_point(field_get:tensorboardX.GraphDef.node)
  return node_.Get(index);
}
::tensorboardX::NodeDef* GraphDef::mutable_node(int index) {
  // @@protoc_insertion_point(field_mutable:tensorboardX.GraphDef.node)
  return node_.Mutable(index);
}
::tensorboardX::NodeDef* GraphDef::add_node() {
  // @@protoc_insertion_point(field_add:tensorboardX.GraphDef.node)
  return node_.Add();
}
::google::protobuf::RepeatedPtrField< ::tensorboardX::NodeDef >*
GraphDef::mutable_node() {
  // @@protoc_insertion_point(field_mutable_list:tensorboardX.GraphDef.node)
  return &node_;
}
const ::google::protobuf::RepeatedPtrField< ::tensorboardX::NodeDef >&
GraphDef::node() const {
  // @@protoc_insertion_point(field_list:tensorboardX.GraphDef.node)
  return node_;
}

// .tensorboardX.VersionDef versions = 4;
bool GraphDef::has_versions() const {
  return this != internal_default_instance() && versions_ != NULL;
}
void GraphDef::clear_versions() {
  if (GetArenaNoVirtual() == NULL && versions_ != NULL) delete versions_;
  versions_ = NULL;
}
const ::tensorboardX::VersionDef& GraphDef::versions() const {
  // @@protoc_insertion_point(field_get:tensorboardX.GraphDef.versions)
  return versions_ != NULL ? *versions_
                         : *::tensorboardX::VersionDef::internal_default_instance();
}
::tensorboardX::VersionDef* GraphDef::mutable_versions() {
  
  if (versions_ == NULL) {
    _slow_mutable_versions();
  }
  // @@protoc_insertion_point(field_mutable:tensorboardX.GraphDef.versions)
  return versions_;
}
::tensorboardX::VersionDef* GraphDef::release_versions() {
  // @@protoc_insertion_point(field_release:tensorboardX.GraphDef.versions)
  
  if (GetArenaNoVirtual() != NULL) {
    return _slow_release_versions();
  } else {
    ::tensorboardX::VersionDef* temp = versions_;
    versions_ = NULL;
    return temp;
  }
}
 void GraphDef::set_allocated_versions(::tensorboardX::VersionDef* versions) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete versions_;
  }
  if (versions != NULL) {
    _slow_set_allocated_versions(message_arena, &versions);
  }
  versions_ = versions;
  if (versions) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:tensorboardX.GraphDef.versions)
}

// int32 version = 3 [deprecated = true];
void GraphDef::clear_version() {
  version_ = 0;
}
::google::protobuf::int32 GraphDef::version() const {
  // @@protoc_insertion_point(field_get:tensorboardX.GraphDef.version)
  return version_;
}
void GraphDef::set_version(::google::protobuf::int32 value) {
  
  version_ = value;
  // @@protoc_insertion_point(field_set:tensorboardX.GraphDef.version)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace tensorboardX

// @@protoc_insertion_point(global_scope)