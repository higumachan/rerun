// NOTE: This file was autogenerated by re_types_builder; DO NOT EDIT.
// Based on "crates/re_types/definitions/rerun/testing/datatypes/fuzzy.fbs"

#include <arrow/api.h>

#include "../datatypes/flattened_scalar.hpp"
#include "affix_fuzzer1.hpp"

namespace rr {
    namespace datatypes {
        std::shared_ptr<arrow::DataType> AffixFuzzer1::to_arrow_datatype() {
            return arrow::struct_({
                arrow::field("single_float_optional", arrow::float32(), true, nullptr),
                arrow::field("single_string_required", arrow::utf8(), false, nullptr),
                arrow::field("single_string_optional", arrow::utf8(), true, nullptr),
                arrow::field("many_floats_optional",
                             arrow::list(arrow::field("item", arrow::float32(), true, nullptr)),
                             true,
                             nullptr),
                arrow::field("many_strings_required",
                             arrow::list(arrow::field("item", arrow::utf8(), false, nullptr)),
                             false,
                             nullptr),
                arrow::field("many_strings_optional",
                             arrow::list(arrow::field("item", arrow::utf8(), true, nullptr)),
                             true,
                             nullptr),
                arrow::field("flattened_scalar", arrow::float32(), false, nullptr),
                arrow::field("almost_flattened_scalar",
                             rr::datatypes::FlattenedScalar::to_arrow_datatype(),
                             false,
                             nullptr),
                arrow::field("from_parent", arrow::boolean(), true, nullptr),
            });
        }
    } // namespace datatypes
} // namespace rr
