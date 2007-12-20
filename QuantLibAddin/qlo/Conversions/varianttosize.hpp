/* -*- mode: c++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */

/*
 Copyright (C) 2007 Eric Ehlers

 This file is part of QuantLib, a free-software/open-source library
 for financial quantitative analysts and developers - http://quantlib.org/

 QuantLib is free software: you can redistribute it and/or modify it
 under the terms of the QuantLib license.  You should have received a
 copy of the license along with this program; if not, please email
 <quantlib-dev@lists.sf.net>. The license is also available online at
 <http://quantlib.org/license.shtml>.

 This program is distributed in the hope that it will be useful, but WITHOUT
 ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 FOR A PARTICULAR PURPOSE.  See the license for more details.
*/

#ifndef qla_convert_size_hpp
#define qla_convert_size_hpp

#include <oh/types.hpp>
#include <ql/utilities/dataparsers.hpp>

namespace ObjectHandler {

    template <class V>
    struct VariantToScalar<V, QuantLib::Size> {
        QuantLib::Size operator()(const V &variant) {

            //if (v_.type() == ObjectHandler::Long) {
                return QuantLib::Size(static_cast<long>(variant));
            //} else {
            //    OH_FAIL("invalid conversion");
            //}
        }
    };

}

#endif
