﻿#pragma once

#include "other.hpp"

namespace gpc {

void gpc_polygon_clip(gpc_op set_operation, gpc_polygon &subject_polygon,
                      gpc_polygon &clip_polygon, gpc_polygon &result_polygon);

void gpc_polygon_to_tristrip(gpc_polygon *polygon, gpc_tristrip *tristrip);

} // namespace gpc
