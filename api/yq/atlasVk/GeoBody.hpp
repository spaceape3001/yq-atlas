////////////////////////////////////////////////////////////////////////////////
//
//  YOUR QUILL
//
////////////////////////////////////////////////////////////////////////////////

#pragma once

#include <yq/tachyon/api/Tachyon.hpp>

namespace yq::atlas {
    /*! \brief Geodetic Body (ie, planet, moon, etc)
    */
    class GeoBody : public tachyon::Tachyon {
        YQ_TACHYON_DECLARE(GeoBody, tachyon::Tachyon)
    };
}

