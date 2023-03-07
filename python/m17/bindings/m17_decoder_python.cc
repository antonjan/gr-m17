/*
 * Copyright 2023 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually
 * edited  */
/* The following lines can be configured to regenerate this file during cmake */
/* If manual edits are made, the following tags should be modified accordingly.
 */
/* BINDTOOL_GEN_AUTOMATIC(0) */
/* BINDTOOL_USE_PYGCCXML(0) */
/* BINDTOOL_HEADER_FILE(m17_decoder.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(74e8e77389b1889023dbed48ecb9523e) */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/m17/m17_decoder.h>
// pydoc.h is automatically generated in the build directory
#include <m17_decoder_pydoc.h>

void bind_m17_decoder(py::module &m) {

  using m17_decoder = ::gr::m17::m17_decoder;

  py::class_<m17_decoder, gr::block, gr::basic_block,
             std::shared_ptr<m17_decoder>>(m, "m17_decoder", D(m17_decoder))

      .def(py::init(&m17_decoder::make), py::arg("debug_data"),
           py::arg("debug_ctrl"), py::arg("threshold"), D(m17_decoder, make))

      .def("set_debug_data", &m17_decoder::set_debug_data, py::arg("debug"),
           D(m17_decoder, set_debug_data))

      .def("set_debug_ctrl", &m17_decoder::set_debug_ctrl, py::arg("debug"),
           D(m17_decoder, set_debug_ctrl))

      .def("set_threshold", &m17_decoder::set_threshold, py::arg("threshold"),
           D(m17_decoder, set_threshold))

      ;
}
