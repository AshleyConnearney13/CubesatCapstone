/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(channel_model2.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(0b811089d7d7712a160d4335570c0511)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/channels/channel_model2.h>
// pydoc.h is automatically generated in the build directory
#include <channel_model2_pydoc.h>

void bind_channel_model2(py::module& m)
{

    using channel_model2 = ::gr::channels::channel_model2;


    py::class_<channel_model2,
               gr::hier_block2,
               gr::basic_block,
               std::shared_ptr<channel_model2>>(m, "channel_model2", D(channel_model2))

        .def(py::init(&channel_model2::make),
             py::arg("noise_voltage") = 0.,
             py::arg("epsilon") = 1.,
             py::arg("taps") = std::vector<gr_complex>(1, 1),
             py::arg("noise_seed") = 0,
             py::arg("block_tags") = false,
             D(channel_model2, make))


        .def("set_noise_voltage",
             &channel_model2::set_noise_voltage,
             py::arg("noise_voltage"),
             D(channel_model2, set_noise_voltage))


        .def("set_taps",
             &channel_model2::set_taps,
             py::arg("taps"),
             D(channel_model2, set_taps))


        .def("set_timing_offset",
             &channel_model2::set_timing_offset,
             py::arg("epsilon"),
             D(channel_model2, set_timing_offset))


        .def("noise_voltage",
             &channel_model2::noise_voltage,
             D(channel_model2, noise_voltage))


        .def("taps", &channel_model2::taps, D(channel_model2, taps))


        .def("timing_offset",
             &channel_model2::timing_offset,
             D(channel_model2, timing_offset))

        ;
}
