#!/usr/bin/env python
# -*- coding: utf-8 -*-

from conans import python_requires


base = python_requires("boost_base/1.68.0@bincrafters/stable")

class BoostLambdaConan(base.BoostBaseConan):
    name = "boost_lambda"
    url = "https://github.com/bincrafters/conan-boost_lambda"
    lib_short_names = ["lambda"]
    header_only_libs = ["lambda"]
    b2_requires = [
        "boost_bind",
        "boost_config",
        "boost_core",
        "boost_detail",
        "boost_iterator",
        "boost_mpl",
        "boost_preprocessor",
        "boost_tuple",
        "boost_type_traits",
        "boost_utility"
    ]
