#include "make_error.hpp"

#include "userver/formats/json/value.hpp"
#include <string_view>
#include <userver/formats/json/value_builder.hpp>
namespace service_dynamic_configs::utils {

userver::formats::json::Value MakeError(std::string_view code,
                                        std::string_view message) {
  userver::formats::json::ValueBuilder builder;
  builder["code"] = code;
  builder["message"] = message;
  return builder.ExtractValue();
}

} // namespace service_synamic_configs::utils
