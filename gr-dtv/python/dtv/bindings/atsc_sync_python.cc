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
/* BINDTOOL_GEN_AUTOMATIC(1)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(atsc_sync.h)                                               */
/* BINDTOOL_HEADER_FILE_HASH(5ce95227b23b794b142bd4e75e6557a8)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/dtv/atsc_sync.h>
// pydoc.h is automatically generated in the build directory
#include <atsc_sync_pydoc.h>

void bind_atsc_sync(py::module& m)
{

    using atsc_sync = ::gr::dtv::atsc_sync;


    py::class_<atsc_sync, gr::block, gr::basic_block, std::shared_ptr<atsc_sync>>(
        m, "atsc_sync", D(atsc_sync))

        .def(py::init(&atsc_sync::make), py::arg("rate"), D(atsc_sync, make))


        ;
}