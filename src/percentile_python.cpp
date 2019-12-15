#include "pybind11/pybind11.h"
#include "differential-privacy/differential_privacy/base/percentile.h"

namespace py = pybind11;

PYBIND11_MODULE(percentile, m) {
    py::class_<Percentile>(m, "Percentile")
        .def(py::init<>())
        .def("Memory", &Percentile::Memory)
        .def_property("inputs", &Percentile::Add, &Percentile::Reset)
        .def("num_values", &Percentile::num_values)
        .def("GetRelativeRank", &Percentile::GetRelativeRank)


}