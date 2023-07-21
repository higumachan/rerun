// NOTE: This file was autogenerated by re_types_builder; DO NOT EDIT.
// Based on "crates/re_types/definitions/rerun/datatypes/translation_and_mat3x3.fbs"

#include <arrow/api.h>

#include "../datatypes/mat3x3.hpp"
#include "../datatypes/vec3d.hpp"
#include "translation_and_mat3x3.hpp"

namespace rr {
    namespace datatypes {
        std::shared_ptr<arrow::DataType> TranslationAndMat3x3::to_arrow_datatype() {
            return arrow::struct_({
                arrow::field(
                    "translation", rr::datatypes::Vec3D::to_arrow_datatype(), true, nullptr),
                arrow::field("matrix", rr::datatypes::Mat3x3::to_arrow_datatype(), true, nullptr),
                arrow::field("from_parent", arrow::boolean(), false, nullptr),
            });
        }
    } // namespace datatypes
} // namespace rr
