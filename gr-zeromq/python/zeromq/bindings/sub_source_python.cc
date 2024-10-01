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
/* BINDTOOL_HEADER_FILE(sub_source.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(5532ff97c13c148a6c360417e2874799)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/zeromq/sub_source.h>
// pydoc.h is automatically generated in the build directory
#include <sub_source_pydoc.h>

void bind_sub_source(py::module& m)
{

    using sub_source = ::gr::zeromq::sub_source;


    py::class_<sub_source,
               gr::sync_block,
               gr::block,
               gr::basic_block,
               std::shared_ptr<sub_source>>(m, "sub_source", D(sub_source))

        .def(py::init(&sub_source::make),
             py::arg("itemsize"),
             py::arg("vlen"),
             py::arg("address"),
             py::arg("timeout") = 100,
             py::arg("pass_tags") = false,
             py::arg("hwm") = -1,
             py::arg("key") = "",
             py::arg("bind") = false,
             D(sub_source, make))


        .def("last_endpoint", &sub_source::last_endpoint, D(sub_source, last_endpoint))

        ;
}